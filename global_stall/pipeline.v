`include "defines.vh"

module pipeline (
    input  wire clk,
    input  wire reset,
    
    input  wire [`ADDRESS_WIDTH-1:0]    in_address,
    input  wire [`ID_WIDTH-1:0]         in_id,
    input  wire                         in_valid,

    output wire [`ADDRESS_WIDTH-1:0]    out_address,
    output wire [`ID_WIDTH-1:0]         out_id,
    output wire                         out_valid,
    
    input  wire                         in_stall
);
    // Predeclare forward-facing wires
    wire [`ADDRESS_WIDTH-1:0] address [`PIPELINE_DEPTH:0];
    wire [`ID_WIDTH-1:0]      id      [`PIPELINE_DEPTH:0];
    wire                      valid   [`PIPELINE_DEPTH:0];


    assign address[0] = in_address;
    assign id[0]      = in_id;
    assign valid[0]   = in_valid;

    assign out_address = address[`PIPELINE_DEPTH];
    assign out_id      = id[`PIPELINE_DEPTH];
    assign out_valid   = valid[`PIPELINE_DEPTH];

    genvar i;
    generate
        for (i = 0; i < `PIPELINE_DEPTH; i = i + 1) begin : PIPELINE
            pipeline_stage stage_inst (
            .clk(clk),
            .reset(reset),

            .stage_offset((((i+1) * 3)) & ((1 << `ADDRESS_WIDTH) - 1)),  // jumble

            .in_address(address[i]),
            .in_id(id[i]),
            .in_valid(valid[i]),

            .out_address(address[i+1]),
            .out_id(id[i+1]),
            .out_valid(valid[i+1]),

            .in_stall(in_stall)
            );
        end
    endgenerate
endmodule