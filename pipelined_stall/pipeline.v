`include "defines.vh"

module pipeline (
    input  wire clk,
    input  wire reset,
    
    input  wire [`ADDRESS_WIDTH-1:0]    in_address,
    input  wire [`ID_WIDTH-1:0]         in_id,
    input  wire                         in_valid,
    output wire                         out_stall,

    input  wire                         in_flush,
    input  wire [`ID_WIDTH-1:0]         in_flush_id,

    output wire [`ADDRESS_WIDTH-1:0]    out_address,
    output wire [`ID_WIDTH-1:0]         out_id,
    output wire                         out_valid,
    input  wire                         in_stall,

    output  wire                         out_flush
    //output  wire [`ID_WIDTH-1:0]         out_flush_id
);
    // Predeclare forward-facing wires
    wire [`ADDRESS_WIDTH-1:0] address [`PIPELINE_DEPTH:0];
    wire [`ID_WIDTH-1:0]      id      [`PIPELINE_DEPTH:0];
    wire                      valid   [`PIPELINE_DEPTH:0];
    wire                      stall   [`PIPELINE_DEPTH:0];

    wire                      flush    [`PIPELINE_DEPTH:0]; //flush[PIPELINE] should be unused
    wire [`ID_WIDTH-1:0]      flush_id [`PIPELINE_DEPTH:0];

	reg [`ADDRESS_WIDTH-1:0]  buffer_address;
	reg [`ID_WIDTH-1:0]       buffer_id;
	reg                       buffer_valid;



    assign address[0] = in_address;
    assign id[0]      = in_id;
    assign valid[0]   = in_valid;
    assign out_stall = stall[0];

    assign flush[0]    = in_flush;
    assign flush_id[0] = in_flush_id;

    assign out_flush    = flush[`PIPELINE_DEPTH];
    //assign flush_id[0] = in_flush_id;

    //assign out_address = address[`PIPELINE_DEPTH];
    //assign out_id      = id[`PIPELINE_DEPTH];
    //assign out_valid   = valid[`PIPELINE_DEPTH];

	assign out_address = buffer_address;
    assign out_id      = buffer_id;
    assign out_valid   = buffer_valid;

    assign stall[`PIPELINE_DEPTH] = in_stall;

	always_ff @ (posedge clk or posedge reset) begin
		if (reset) begin
			buffer_address <= 0;
			buffer_id <= 0;
			buffer_valid <= 0;
		end else begin
			if (!in_stall) begin
				buffer_address <= address[`PIPELINE_DEPTH];
				buffer_id <= id[`PIPELINE_DEPTH];
				buffer_valid <= valid[`PIPELINE_DEPTH];
			end
		end
	end

    genvar i;
    generate
        for (i = 0; i < `PIPELINE_DEPTH; i = i + 1) begin : PIPELINE
            pipeline_stage stage_inst (
            .clk(clk),
            .reset(reset),

            .stage_offset((((i+1) * 3)) & ((1 << `ADDRESS_WIDTH) - 1)),  // jumble

            .in_address(address[i]),
            .in_id(id[i]),
            .in_valid(valid[i]),
            .out_stall(stall[i]),

	    .in_flush(flush[i]),
	    .in_flush_id(flush_id[i]),

            .out_address(address[i+1]),
            .out_id(id[i+1]),
            .out_valid(valid[i+1]),

	    .out_flush(flush[i + 1]),
	    .out_flush_id(flush_id[i + 1]),

            .in_stall(stall[i+1])
            );
        end
    endgenerate
endmodule