`include "defines.vh"

module pipeline (
    input  wire clk,
    input  wire reset,
    
    input  wire [`ADDRESS_WIDTH-1:0]    in_address,
    input  wire [`ID_WIDTH-1:0]         in_id,
    input  wire                         in_valid,
    output wire                         out_stall,

    output wire [`ADDRESS_WIDTH-1:0]    out_address,
    output wire [`ID_WIDTH-1:0]         out_id,
    output wire                         out_valid,
    input  wire                         in_stall
);
    // Predeclare forward-facing wires
    wire [`PIPELINE_DEPTH:0][`ADDRESS_WIDTH-1:0] address;
    wire [`PIPELINE_DEPTH:0][`ID_WIDTH-1:0] id;
    wire [`PIPELINE_DEPTH:0] valid;
    wire [`PIPELINE_DEPTH:0] stall;

    assign address[0] = in_address;
    assign id[0]      = in_id;
    assign valid[0]   = in_valid;
    assign out_stall = stall[0];

    assign out_address = address[`PIPELINE_DEPTH];
    assign out_id      = id[`PIPELINE_DEPTH];
    assign out_valid   = valid[`PIPELINE_DEPTH];
    assign stall[`PIPELINE_DEPTH] = in_stall;

    genvar i;
    generate
        for (i = 0; i < `PIPELINE_DEPTH; i = i + 1) begin : PIPELINE
            pipeline_stage stage_inst (
            .clk(clk),
            .reset(reset),
            .in_address(address[i]),
            .in_id(id[i]),
            .in_valid(valid[i]),
            .out_stall(stall[i]),
            .out_address(address[i+1]),
            .out_id(id[i+1]),
            .out_valid(valid[i+1]),
            .in_stall(stall[i+1])
            );
        end
    endgenerate
endmodule