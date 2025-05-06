module shared_resource(
	input logic clk,
        input logic reset,
        input logic [31:0] resource_input,
        output logic [31:0] resource_output
);

//imagine this like memory, where the data at the address is just the address plus 10 for now

	always @ (posedge clk) begin
		if (reset) begin
			resource_output <= 0;
		end else begin
			resource_output <= resource_input + 32'd10000;
		end
	end

endmodule