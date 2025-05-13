`include "defines.vh"

module producer (
    input  wire clk,
    input  wire reset,
    
    input  wire in_stall_1,
    output wire [`ADDRESS_WIDTH-1:0] out_address_1,
    output wire [`ID_WIDTH-1:0]      out_id_1,
    output wire                      out_valid_1,

    output wire                      flush_1,
	output wire [`ID_WIDTH-1:0]      flush_id_1,

    input  wire in_stall_2,
    output wire [`ADDRESS_WIDTH-1:0] out_address_2,
    output wire [`ID_WIDTH-1:0]      out_id_2,
    output wire                      out_valid_2,

	output wire                      flush_2,
	output wire [`ID_WIDTH-1:0]      flush_id_2
);
    // Registers
    reg [`ADDRESS_WIDTH-1:0] reg_address_1;
    reg [`ID_WIDTH-1:0]      reg_id_1;
    reg                      reg_valid_1;

    reg [`ADDRESS_WIDTH-1:0] reg_address_2;
    reg [`ID_WIDTH-1:0]      reg_id_2;
    reg                      reg_valid_2;

	reg                      reg_flush_1;
	reg [`ID_WIDTH-1:0]      reg_flush_id_1;

	reg                      reg_flush_2;
	reg [`ID_WIDTH-1:0]      reg_flush_id_2;

	reg [5:0]                flush_counter; //simulate doing the flush at a certain time as a proff of concept
	reg                      flush_issued;

    // Output mappings
    assign out_address_1 = reg_address_1;
    assign out_id_1      = {reg_id_1[`ID_WIDTH-1:1], 1'b0};
    assign out_valid_1   = reg_valid_1;

	assign flush_1       = reg_flush_1;
	assign flush_id_1    = reg_flush_id_1;
    
    assign out_address_2 = reg_address_2;
    assign out_id_2      = reg_id_2;
    assign out_valid_2   = reg_valid_2;

	assign flush_2       = reg_flush_2;
	assign flush_id_2    = reg_flush_id_2;

    // Sequential logic for producer
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            reg_address_1  <= 0;
            reg_id_1       <= 0;
			reg_valid_1    <= 0;

            reg_address_2  <= 0;
            reg_id_2       <= 0;
			reg_valid_2    <= 0;

			reg_flush_1    <= 0;
			reg_flush_id_1 <= 0;

			reg_flush_2    <= 0;
			reg_flush_id_2 <= 0;

			flush_counter  <= 6'd60;
			flush_issued   <= 0;

        end else begin
            if (!in_stall_1) begin
                reg_address_1 <= (reg_address_1 + 4) & ((1 << `ADDRESS_WIDTH) - 1);
                reg_id_1      <= {4'd1, (reg_id_1[3:0] + 4'b1)};
                reg_valid_1   <= 1;
            end

            if (!in_stall_2) begin
                reg_address_2 <= (reg_address_2 + 4) & ((1 << `ADDRESS_WIDTH) - 1);
                reg_id_2      <= {4'd2, (reg_id_2[3:0] + 4'b1)};
                reg_valid_2   <= 1;
            end

			if (!(|flush_counter) && !flush_issued) begin
				reg_flush_1 <= 1;
				reg_flush_id_1 <= 8'h16;
				flush_issued <= 1;
			end else begin
				reg_flush_1 <= 0;
				reg_flush_id_1 <= 0;
			end

			flush_counter <= flush_counter - 6'd1;
        end
    end
endmodule
