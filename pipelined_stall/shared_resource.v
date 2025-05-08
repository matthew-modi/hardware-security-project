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
    reg [`DATA_WIDTH-1:0] reg_data;
    reg [`ID_WIDTH-1:0]   reg_id;
    reg reg_valid;

    reg [`RESOURCE_DELAY_COUNTER_WIDTH-1:0] counter;

    assign out_data = reg_data;
    assign out_id   = reg_id;
    assign out_valid = reg_valid;

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            reg_data <= 0;
            reg_id   <= 0;
            reg_valid <= 0;
        end else begin
            // Simulate RESOURCE_DELAY cycles of processing delay
            if (counter < `RESOURCE_DELAY) begin
                counter <= counter + 1;
            end else begin 
                if (!reg_valid) begin
                    reg_data <= { {27{1'b0}}, in_address } + 32'b1000000000; // Simulate some processing
                    reg_id   <= in_id;
                    reg_valid <= 1;
                end else begin
                    reg_valid <= 0;
                    counter <= 0;
                end
            end
        end
    end
endmodule