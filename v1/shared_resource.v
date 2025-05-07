`include "defines.vh"

module shared_resource (
    input  wire clk,
    input  wire reset,
    
    input  wire [`ADDRESS_WIDTH-1:0]    in_address,
    input  wire [`ID_WIDTH-1:0]         in_id,
    input  wire                         in_valid,

    output wire [`DATA_WIDTH-1:0]       out_data,
    output wire [`ID_WIDTH-1:0]         out_id,
    output wire                         out_valid
);
// Shared resource logic placeholder
endmodule