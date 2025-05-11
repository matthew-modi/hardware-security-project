`include "defines.vh"

module pipeline_stage (
    input  wire clk,
    input  wire reset,

    input  wire [`ADDRESS_WIDTH-1:0]    stage_offset,

    input  wire [`ADDRESS_WIDTH-1:0]    in_address,
    input  wire [`ID_WIDTH-1:0]         in_id,
    input  wire                         in_valid,

    input  wire                         in_flush,
    input  wire [`ID_WIDTH-1:0]         in_flush_id,

    output wire [`ADDRESS_WIDTH-1:0]    out_address, 
    output wire [`ID_WIDTH-1:0]         out_id,
    output wire                         out_valid,

    output wire                         out_flush,
    output wire [`ID_WIDTH-1:0]         out_flush_id,

    input  wire                         in_stall
);
    // Internal signals
    reg [`ADDRESS_WIDTH-1:0] reg_address;
    reg [`ID_WIDTH-1:0]      reg_id;
    reg                      reg_valid;

    reg                      reg_flush;
    reg [`ID_WIDTH-1:0]      reg_flush_id;

    // Output assignments
    assign out_address = reg_address;
    assign out_id      = reg_id;
    assign out_valid   = reg_valid;

    
    assign out_flush    = reg_flush;
    assign out_flush_id = reg_flush_id;

    // Sequential logic for pipeline stage
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            reg_address <= 0;
            reg_id      <= 0;
            reg_valid   <= 0;
        end else begin
            if (!in_stall) begin
                if (in_valid) begin
                    reg_address <= (in_address + stage_offset) & ((1 << `ADDRESS_WIDTH) - 1);
                    reg_id      <= in_id;
                    reg_valid   <= 1;
                end else begin
                    reg_valid <= 0;
                end
            end
			if (in_flush && (in_flush_id == reg_id)) begin
				reg_address <= 0;
                reg_id      <= 0;
                reg_valid   <= 0;
			end
			reg_flush <= in_flush; //for now always pass along the flush. Means if multiple stages have the same id it will flush all of them
			reg_flush_id <= in_flush_id;
        end
    end
endmodule