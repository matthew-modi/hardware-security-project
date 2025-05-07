`include "defines.vh"

module pipeline_stage (
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
// Pipeline logic placeholder
endmodule