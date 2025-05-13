`include "defines.vh"

module top (
    input wire clk,
    input wire reset
);
    wire [`ADDRESS_WIDTH-1:0]   start_address_1;
    wire [`ID_WIDTH-1:0]        start_id_1;
    wire                        start_valid_1;
    wire                        start_stall_1;

    wire [`ADDRESS_WIDTH-1:0]   start_address_2;
    wire [`ID_WIDTH-1:0]        start_id_2;
    wire                        start_valid_2;
    wire                        start_stall_2;

    producer producer (
        .clk(clk),
        .reset(reset),

        .in_stall_1(start_stall_1),
        .out_address_1(start_address_1),
        .out_id_1(start_id_1),
        .out_valid_1(start_valid_1),

	.flush_1(flush_1),
	.flush_id_1(flush_id_1),

        .in_stall_2(start_stall_2),
        .out_address_2(start_address_2),
        .out_id_2(start_id_2),
        .out_valid_2(start_valid_2),

	.flush_2(flush_2),
	.flush_id_2(flush_id_2)
    );

    wire [`ADDRESS_WIDTH-1:0]   end_address_1;
    wire [`ID_WIDTH-1:0]        end_id_1;
    wire                        end_valid_1;
    wire                        end_stall_1;

    wire [`ADDRESS_WIDTH-1:0]   end_address_2;
    wire [`ID_WIDTH-1:0]        end_id_2;
    wire                        end_valid_2;
    wire                        end_stall_2;

    wire                        arbiter_valid;
    wire                        arbiter_choice;

    wire                        flush_1;
    wire [`ID_WIDTH-1:0]        flush_id_1;

    wire                        flush_2;
    wire [`ID_WIDTH-1:0]        flush_id_2;

    arbiter arbiter (
        .clk(clk),
        .reset(reset),

        .in_valid_1(end_valid_1),
        .in_valid_2(end_valid_2),

        .in_ready(resource_ready),

        .out_choice(arbiter_choice),
        .out_valid(arbiter_valid),

        .out_stall_1(end_stall_1),
        .out_stall_2(end_stall_2)
    );

    pipeline pipeline_1 (
        .clk(clk),
        .reset(reset),
        
        .in_address(start_address_1),
        .in_id(start_id_1),
        .in_valid(start_valid_1),
        .out_stall(start_stall_1),

	.in_flush(flush_1),
	.in_flush_id(flush_id_1),

        .out_address(end_address_1),
        .out_id(end_id_1),
        .out_valid(end_valid_1),
        .in_stall(end_stall_1)
    );

    pipeline pipeline_2 (
        .clk(clk),
        .reset(reset),

        .in_address(start_address_2),
        .in_id(start_id_2),
        .in_valid(start_valid_2),
        .out_stall(start_stall_2),

	.in_flush(flush_2),
	.in_flush_id(flush_id_2),

        .out_address(end_address_2),
        .out_id(end_id_2),
        .out_valid(end_valid_2),
        .in_stall(end_stall_2)
    );

    wire [`DATA_WIDTH-1:0]  resource_data;
    wire [`ID_WIDTH-1:0]    resource_id;
    wire                    resource_valid;
    wire                    resource_ready;

    shared_resource shared_resource (
        .clk(clk),
        .reset(reset),

        .in_address(!arbiter_choice ? end_address_1 : end_address_2),
        .in_id(!arbiter_choice ? end_id_1 : end_id_2),

        .in_valid(arbiter_valid),

        .out_data(resource_data),
        .out_id(resource_id),
        .out_ready(resource_ready),
        .out_valid(resource_valid)
    );

    consumer consumer (
        .clk(clk),
        .reset(reset),

        .in_data(resource_data),
        .in_id(resource_id),
        .in_valid(resource_valid)
    );
endmodule
