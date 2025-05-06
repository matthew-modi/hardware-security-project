// Placeholder for producer FSM
module producer_fsm (
    input  wire        clk,
    input  wire        reset,
    output wire [31:0] pipeline1_inputs,
    output wire [31:0] pipeline2_inputs,
    input  wire [1:0]  in_valid,
    output wire        flush_1,
    output wire        flush_2
);
// Producer logic placeholder

	parameter S0 = 0, S1 = 1, S2 = 2, S3 = 3, S4 = 4, S5 = 5, S6 = 6, S7 = 7;

	logic [2:0] state, next_state;

	always_comb begin //no input? is invalid used here (its an input to the pipeline and producer)?
		case(state)
			S0 : next_state = S1;
			S1 : next_state = S2;
			S2 : next_state = S3;
			S3 : next_state = S4;
			S4 : next_state = S5;
			S5 : next_state = S6;
			S6 : next_state = S7;
			S7 : next_state = S0;
			default next_state = S0;
		endcase
	end

	always_ff (@ posedge clk) begin
		if (reset) begin
			state <= 3'b0;
		end else begin
			state <= next_state;
		end
	end

	assign pipeline1_inputs = (reset) ? 32'b0 : 32'h10000 << state;
	assign pipeline2_inputs = (reset) ? 32'b0 : 32'h10000 >> state;

endmodule
