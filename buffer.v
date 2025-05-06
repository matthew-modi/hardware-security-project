module buffer_slots (
    input  wire        clk,
    input  wire        reset,
    input  wire [31:0] inputs,
    input  wire        stall,
    output wire [31:0] outputs,
    output wire        to_stall_mgmt
);
    // Stall and Regular Slots 
    logic [31:0] buffer_output;//outputs and inputs are wires
    always_ff @ (posedge clk) begin
		if (reset) begin
			buffer_output <= 32'b0;
		end else begin
			buffer_output <= inputs;
		end
	end
	assign outputs = buffer_output;

endmodule
