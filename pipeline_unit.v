module pipeline_unit (
    input  wire         clk,
    input  wire         reset,
    input  wire [31:0]  inputs,
    input  wire         in_valid,
    input  wire         flush,
	input  wire         stall,
    output wire [31:0]  outputs, 
    output wire         out_valid
);

// actual pipeline stages here

logic [31:0] d1, d2, d3, d4, d5;
logic stall1, stall2, stall3, stall14, stall5;
logic [31:0] overflow1, overflow2, overflow3, overflow4, overflow5;
logic overflow_full1, overflow_full2, overflow_full3, overflow_full4, overflow_full5;
logic [31:0] q1, q2, q3, q4;
// stage 1

always_comb begin // simulate L1
d1 = inputs | (32'b1);
end

always_ff @ (posedge clk) begin
	if (reset) begin
		q1 <= 32'b0;
		stall1 <= 1'b0;
	end else begin
		q1 <= d1;
	end
end

// stage 2

always_comb begin // simulate L1
d2 = inputs | (32'b1 << 1);
end

always_ff @ (posedge clk) begin
	if (reset) begin
		q2 <= 32'b0;
		stall2 <= 1'b0;
	end else begin
		q2 <= d2;
	end
end

// stage 3

always_comb begin // simulate L1
d3 = inputs | (32'd1 << 2);
end

always_ff @ (posedge clk) begin
	if (reset) begin
		q3 <= 32'b0;
		stall3 <= 1'b0;
	end else begin
		q3 <= d3;
	end
end

// stage 4

always_comb begin // simulate L1
d4 = inputs | (32'd1  << 3);
end

always_ff @ (posedge clk) begin
	if (reset) begin
		q4 <= 32'b0;
		stall4 <= 1'b0;
	end else begin
		//q4 <= d4;
		if (!stall5) begin
			if (overflow_full4) begin
				q4 <= overflow4;
				overflow4 <= 32'b0;
				overflow_full4 <= 1'b0;
			end else begin
				q4 <= d5;
			end
		end else begin
			overflow4 <= d4;
			overflow_full4 <= 1'b1;
		end
		stall4 <= stall5;
	end
end

always_comb begin // simulate L1
d5 = inputs | (32'd1 << 4);
end

// stage 5

always_ff @ (posedge clk) begin
	if (reset) begin
		outputs <= 32'b0;
		out_valid <= 1'b0;
		stall5 <= 1'b0;
		overflow5 <= 32'b0;
		overflow_full5 <= 1'b0;
	end else begin
		if (!stall) begin
			if (overflow_full5) begin
				outputs <= overflow5; //might need to keep track of d5, this might be okay since presumably stage 4 is stalled too so d5 and the value in the overflow should be the same
				out_valid <= 1'b1;
				overflow5 <= 32'b0;
				overflow_full5 <= 1'b0;
			end else begin
				outputs <= d5;
				out_valid <= 1'b1;
			end
		end else begin //if stalling, put d5 into overflow
			overflow5 <= d5;
			overflow_full5 <= 1'b1;
		end
		stall5 <= stall;
	end
end

endmodule
