`include "defines.vh"

module pipeline_stage (
    input  wire clk,
    input  wire reset,

    input  wire [`ADDRESS_WIDTH-1:0]    stage_offset,

    input  wire [`ADDRESS_WIDTH-1:0]    in_address,
    input  wire [`ID_WIDTH-1:0]         in_id,
    input  wire                         in_valid,
    output wire                         out_stall,

	input  wire                         in_flush,
    input  wire [`ID_WIDTH-1:0]         in_flush_id,

    output wire [`ADDRESS_WIDTH-1:0]    out_address, 
    output wire [`ID_WIDTH-1:0]         out_id,
    output wire                         out_valid,

	output wire                         out_flush,
    output wire [`ID_WIDTH-1:0]         out_flush_id,

    input  wire                         in_stall
);
    // Internal signals
    reg [`ADDRESS_WIDTH-1:0] reg_main_address;
    reg [`ID_WIDTH-1:0]      reg_main_id;
    reg                      reg_main_valid;

    reg [`ADDRESS_WIDTH-1:0] reg_overflow_address;
    reg [`ID_WIDTH-1:0]      reg_overflow_id;
    reg                      reg_overflow_valid;

	reg                      reg_flush;
    reg [`ID_WIDTH-1:0]      reg_flush_id;

	reg main_en;
	reg overflow_en;

	reg main_sel;
	reg overflow_sel;
	

	assign main_en = !(in_stall && reg_main_valid);
	//assign overflow_en = (!main_en && !reg_overflow_valid); //if overflow isn't occupied and main is off
	assign overflow_en = (!in_stall && reg_overflow_valid && reg_main_valid) || (in_stall && !reg_overflow_valid && reg_main_valid) || (in_stall && reg_overflow_valid && !reg_main_valid) || (!in_stall && reg_overflow_valid && !reg_main_valid);

    //reg head;
    //reg tail;

    // Output assignments
    assign out_address = reg_main_address;
    assign out_id      = reg_main_id;
    assign out_valid   = reg_main_valid;
    //assign out_stall   = in_stall;
    //assign out_stall   = in_stall && reg_main_valid && reg_overflow_valid; //if both reg's are occupied, stall the previous stage
	assign out_stall   = reg_overflow_valid;
	//the way this logic works, the input will be ignored for one cycle when unstalling. Might be fine is the previous stage should still be stalled, so it's input should carry on to the next cycle

	assign out_flush    = reg_flush;
    assign out_flush_id = reg_flush_id;

    // main ff
    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            reg_main_address <= 0;
            reg_main_id      <= 0;
            reg_main_valid   <= 0;
        end else if (main_en) begin
			if ((main_sel && reg_overflow_valid) || (!main_sel && in_valid)) begin
				reg_main_address <= (main_sel) ? reg_overflow_address : (in_address + stage_offset) & ((1 << `ADDRESS_WIDTH) - 1);
				reg_main_id      <= (main_sel) ? reg_overflow_id : in_id;
				reg_main_valid   <= 1;
			end else begin
				reg_main_address <= 0;
				reg_main_id      <= 0;
				reg_main_valid   <= 0; //default version just sets the bit
			end
        end
		if (in_flush && (in_flush_id == reg_main_id) && in_stall) begin
			reg_main_address <= 0;
			reg_main_id      <= 0;
			reg_main_valid   <= 0;
		end
    end

	assign main_sel = reg_overflow_valid;
	assign overflow_sel = in_stall && (!reg_overflow_valid) && reg_main_valid;
	
    // overflow ff
    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            reg_overflow_address <= 0;
            reg_overflow_id      <= 0;
            reg_overflow_valid   <= 0;
        end else if (overflow_en) begin
			if (in_valid) begin
				reg_overflow_address <= (overflow_sel) ? (in_address + stage_offset) & ((1 << `ADDRESS_WIDTH) - 1) : 0;
				reg_overflow_id      <= (overflow_sel) ? in_id : 0;
				reg_overflow_valid   <= (overflow_sel) ? 1 : 0;
			end else begin
				reg_overflow_address <= 0;
				reg_overflow_id      <= 0;
				reg_overflow_valid   <= 0; //default version just sets the bit
			end
        end
		if (in_flush && (in_flush_id == reg_overflow_id) && in_stall) begin
			reg_overflow_address <= 0;
			reg_overflow_id      <= 0;
			reg_overflow_valid   <= 0;
		end
		reg_flush <= in_flush; //having it pass along in here 
		reg_flush_id <= in_flush_id;
    end

endmodule