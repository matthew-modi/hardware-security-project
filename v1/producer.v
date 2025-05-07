`include "defines.vh"

module producer (
    input  wire clk,
    input  wire reset,
    
    input  wire in_stall_1,
    input  wire in_stall_2,

    output wire [`ADDRESS_WIDTH-1:0] out_address_1,
    output wire [`ID_WIDTH-1:0]      out_id_1,
    output wire                      out_valid_1,

    output wire [`ADDRESS_WIDTH-1:0] out_address_2,
    output wire [`ID_WIDTH-1:0]      out_id_2,
    output wire                      out_valid_2
);
// Producer logic placeholder
endmodule
