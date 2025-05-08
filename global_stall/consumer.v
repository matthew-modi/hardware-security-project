`include "defines.vh"

module consumer (
    input  wire clk,
    input  wire reset,

    input  wire [`DATA_WIDTH-1:0] in_data,
    input  wire [`ID_WIDTH-1:0]   in_id,
    input  wire                   in_valid
);
    // Consumer logic placeholder
    // This module would typically process the data received from the shared resource.
    // For this example, we will just output the data to a register.

    reg [`DATA_WIDTH-1:0]   data_reg;
    reg [`ID_WIDTH-1:0]     id_reg;
    reg                     valid_reg;

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            data_reg <= 0;
            id_reg <= 0;
            valid_reg <= 0;
        end else if (in_valid) begin
            data_reg <= in_data;
            id_reg <= in_id;
            valid_reg <= 1; // Indicate that new data is available
        end else begin
            valid_reg <= 0; // No new data
        end
    end
endmodule