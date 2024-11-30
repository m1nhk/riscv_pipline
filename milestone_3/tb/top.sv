/* verilator lint_off UNUSED */
module top(
    input logic i_clk,
    input logic i_rst_n,
    input logic [31:0] i_io_sw,
    // input logic [3:0] i_io_btn,

    output logic o_insn_vld,
    output logic [31:0] o_pc_debug,
    output logic [31:0] o_io_lcd,
    output logic [31:0] o_io_ledg,
    output logic [31:0] o_io_ledr,
    output logic [6:0] 	o_io_hex0,
	output logic [6:0] 	o_io_hex1, 
	output logic [6:0] 	o_io_hex2, 
	output logic [6:0] 	o_io_hex3, 
	output logic [6:0] 	o_io_hex4,  
	output logic [6:0] 	o_io_hex5, 
	output logic [6:0] 	o_io_hex6,
	output logic [6:0] 	o_io_hex7
);

pipline pipline(
    .i_clk(i_clk),
    .i_rst_n(i_rst_n),
    .i_io_sw(i_io_sw),
    // .i_io_btn(i_io_btn),
    .o_insn_vld(o_insn_vld),
    .o_pc_debug(o_pc_debug),
    .o_io_lcd(o_io_lcd),
    .o_io_ledg(o_io_ledg),
    .o_io_ledr(o_io_ledr),
    .o_io_hex0 (o_io_hex0),
    .o_io_hex1 (o_io_hex1),
    .o_io_hex2 (o_io_hex2),
    .o_io_hex3 (o_io_hex3),
    .o_io_hex4 (o_io_hex4),
    .o_io_hex5 (o_io_hex5),
    .o_io_hex6 (o_io_hex6),
    .o_io_hex7 (o_io_hex7)
);

endmodule
