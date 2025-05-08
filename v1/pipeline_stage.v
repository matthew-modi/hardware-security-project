`include "defines.vh"

module pipeline_stage (
    input  wire clk,
    input  wire reset,

    input  wire [`ADDRESS_WIDTH-1:0]    stage_offset,

    input  wire [`ADDRESS_WIDTH-1:0]    in_address,
    input  wire [`ID_WIDTH-1:0]         in_id,
    input  wire                         in_valid,
    output wire                         out_stall,

    output wire [`ADDRESS_WIDTH-1:0]    out_address, 
    output wire [`ID_WIDTH-1:0]         out_id,
    output wire                         out_valid,
    input  wire                         in_stall
);
    // Internal signals
    reg [`ADDRESS_WIDTH-1:0] reg_address;
    reg [`ID_WIDTH-1:0]      reg_id;
    reg                      reg_valid;

    // Output assignments
    assign out_address = reg_address;
    assign out_id      = reg_id;
    assign out_valid   = reg_valid;
    assign out_stall   = in_stall;

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
        end
    end
endmodule