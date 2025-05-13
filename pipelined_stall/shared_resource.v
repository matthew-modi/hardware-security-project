`include "defines.vh"

module shared_resource (
    input  wire clk,
    input  wire reset,
    
    input  wire [`ADDRESS_WIDTH-1:0]    in_address,
    input  wire [`ID_WIDTH-1:0]         in_id,

    input  wire                         in_valid,

    output wire [`DATA_WIDTH-1:0]       out_data,
    output wire [`ID_WIDTH-1:0]         out_id,
    output wire                         out_valid,
    output wire                         out_ready
);
    reg [`DATA_WIDTH-1:0] reg_data_internal;
    reg [`ID_WIDTH-1:0]   reg_id_internal;
    reg [`DATA_WIDTH-1:0] reg_data_external;
    reg [`ID_WIDTH-1:0]   reg_id_external;
    reg reg_valid;
    reg reg_ready;

    reg [`RESOURCE_DELAY_COUNTER_WIDTH-1:0] counter;

    //reg [`RESOURCE_DELAY_COUNTER_WIDTH-1:0] ready_counter; //testing what happens with long_nonstall

    assign out_data = reg_data_external;
    assign out_id   = reg_id_external;
    assign out_valid = reg_valid;
    assign out_ready = reg_ready;

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            reg_data_internal <= 0;
            reg_id_internal   <= 0;

            reg_data_external <= 0;
            reg_id_external   <= 0;

            reg_valid <= 0;
            reg_ready <= 1;

            counter <= 0;
	    	//ready_counter <= 0;
        end else begin
            if (counter == 0) begin
                if (in_valid) begin // New data received, process it and wait
                    reg_data_internal <= { {`DATA_WIDTH-`ADDRESS_WIDTH{1'b0}}, in_address } + `DATA_WIDTH'b1000000000; // Simulate some processing
                    reg_id_internal   <= in_id;
                    counter <= 1;
                    reg_ready <= 0;
                end else begin // Wait for new data
                    counter <= 0;
                end
                reg_valid <= 0;
            end else if (counter < `RESOURCE_DELAY) begin // Fake processing delay
                counter <= counter + 1;
                reg_ready <= 0;
                reg_valid <= 0;
            end else begin // Processing done, output the data
                reg_data_external <= reg_data_internal;
                reg_id_external   <= reg_id_internal;
                reg_ready <= 1;
                reg_valid <= 1;
				//if (ready_counter < 4'hf) begin
				//	ready_counter <= ready_counter + 4'd1;
				//end else begin 
					counter <= 0;
				//	ready_counter <= 0;
				//end
            end
        end
    end
endmodule