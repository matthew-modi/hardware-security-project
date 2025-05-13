module dff (
    input  wire clk,
    input  wire reset,
    input  wire d,
    output reg  q,
    output reg  other
);
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            q <= 1'b0; // Reset the output to 0
        end else begin
            q <= d; // Capture the input on the rising edge of the clock
        end
    end

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            other <= 1'b0; // Reset the output to 0
        end else begin
            if (d) begin
                other <= 1; // Capture the input on the rising edge of the clock
            end
        end
    end


endmodule