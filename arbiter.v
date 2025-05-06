module arbiter (
    input  wire clk,
    input  wire reset,
    input  wire req_1,
    input  wire req_2,
    output wire grant_1,
    output wire grant_2
);
// Arbitration logic placeholder


	logic round_robin;
	logic grant_1_rr;
	logic grant_2_rr;
	logic [2:0] counter; 
	assign round_robin = req_1 && req_2;

	always_ff (@ posedge clk) begin
		if (reset || !round_robin) begin
			grant_1_rr <= 1;
			grant_2_rr <= 0;
			counter <= 3'b111;
		end else begin
			if (!counter) begin
				grant_1_rr <= ~grant_1_rr;
				grant_2_rr <= ~grant_2_rr;
			end 
			counter <= counter - 1'b1; //rely on it rolling over to 7 when 0
		end
	end

	assign grant_1 = (reset) ? 0 : ((round_robin) grant_1_rr : req_1);
	assign grant_2 = (reset) ? 0 : ((round_robin) grant_1_rr : req_2);
endmodule