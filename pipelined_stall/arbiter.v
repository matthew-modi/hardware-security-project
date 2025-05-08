module arbiter (
    input  wire clk,
    input  wire reset,

    input  wire in_valid_1,
    input  wire in_valid_2,

    input  wire in_ready,

    output wire out_choice,
    output wire out_valid,

    output wire out_stall_1,
    output wire out_stall_2
);
    reg reg_choice;
    assign out_choice = reg_choice;

    // assign out_stall_1 = reg_choice ? !(in_ready && in_valid_1) : 1;
    // assign out_stall_2 = reg_choice ? 1 : !(in_ready && in_valid_2);

    // assign out_stall_1 = in_valid_1 && !reg_choice && !in_ready;
    // assign out_stall_2 = in_valid_2 && reg_choice && !in_ready;

    assign out_stall_1 = in_valid_1 ? !(in_ready && !reg_choice) : 0;
    assign out_stall_2 = in_valid_2 ? !(in_ready && reg_choice) : 0;

    assign out_valid = in_valid_1 || in_valid_2;

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            reg_choice   <= 0;
        end else begin
            if (in_ready) begin
                if (in_valid_1 && in_valid_2) begin
                    reg_choice <= !reg_choice;
                end else if (in_valid_1) begin
                    reg_choice <= 0;
                end else if (in_valid_2) begin
                    reg_choice <= 1;
                end
            end else begin
                reg_choice <= reg_choice;
            end
        end
    end
endmodule