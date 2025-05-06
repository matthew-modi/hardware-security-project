module consumer_fsm (
    input  wire        clk,
    input  wire        reset,
    input  wire [31:0] pipeline1_outputs,
    input  wire [31:0] pipeline2_outputs, 
    input  wire [1:0]  valid
);
// Consumer logic placeholder
	//add more states for more possibilities
	parameter S0 = 0, S1 = 1, S2 = 2, S3 = 3, S4 = 4, S5 = 5, S6 = 6, S7 = 7;

	logic [2:0] state, next_state;

	logic [31:0] received_input1;
	logic [31:0] received_input2;

	assign received_input1 = (valid[0]) ? pipeline1_outputs : {pipeline1_outputs[31:5], 5'h1f};
	assign received_input2 = (valid[1]) ? pipeline2_outputs : {pipeline2_outputs[31:5], 5'h1f};

	always_comb begin
		if (reset) begin
			next_state = S0;
		end else if ((&received_input1[4:0]) && (&received_input2[4:0])) begin
			next_state = S1;
		end else if ((&received_input1[4:0]) && !(&received_input2[4:0])) begin
			next_state = S2;
		end else if (!(&received_input1[4:0]) && (&received_input2[4:0])) begin
			next_state = S3;
		end else begin
			next_state = S4;
		end
	end

	always_ff (@ posedge clk) begin
		if (reset) begin
			state <= S0;
		end else begin
			state <= next_state;
		end
	end

endmodule