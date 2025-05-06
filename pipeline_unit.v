module pipeline_unit (
    input  wire         clk,
    input  wire         reset,
    input  wire [31:0]  inputs,
    input  wire         in_valid,
    input  wire         flush,
    output wire [31:0]  outputs, 
    output wire         out_valid
);

// actual pipeline stages here

logic [31:0] d1, d2, d3, d4, d5;
logic [31:0] q1, q2, q3, q4;
// stage 1

always_comb begin // simulate L1
d1 = inputs + 32'd10;
end

always_ff @ (posedge clk) begin
	if (reset) begin
		q1 <= 32'b0;
	end else begin
		q1 <= d1;
	end
end

// stage 2

always_comb begin // simulate L1
d2 = inputs + 32'd20;
end

always_ff @ (posedge clk) begin
	if (reset) begin
		q2 <= 32'b0;
	end else begin
		q2 <= d2;
	end
end

// stage 3

always_comb begin // simulate L1
d3 = inputs + 32'd30;
end

always_ff @ (posedge clk) begin
	if (reset) begin
		q3 <= 32'b0;
	end else begin
		q3 <= d3;
	end
end

// stage 4

always_comb begin // simulate L1
d4 = inputs + 32'd40;
end

always_ff @ (posedge clk) begin
	if (reset) begin
		q4 <= 32'b0;
	end else begin
		q4 <= d4;
	end
end

always_comb begin // simulate L1
d5 = inputs + 32'd50;
end

// stage 5

always_ff @ (posedge clk) begin
	if (reset) begin
		outputs <= 32'b0;
		out_valid <= 1'b0;
	end else begin
		outputs <= d5;
		out_valid <= 1'b1;
	end
end

endmodule