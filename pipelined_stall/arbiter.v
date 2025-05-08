module arbiter (
    input  wire clk,
    input  wire reset,

    input  wire in_valid_1,
    input  wire in_valid_2,

    output wire out_stall_1,
    output wire out_stall_2,

    output wire out_valid
);
    reg reg_valid;

    assign out_stall_1 = in_valid_1;
    assign out_stall_2 = in_valid_2;
    assign out_valid   = reg_valid;

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            reg_valid   <= 0;
        end else begin
        end
    end
endmodule