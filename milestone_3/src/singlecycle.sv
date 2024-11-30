module singlecycle(
	input i_clk,
	input i_rst_n,
	//
	output logic [31:0]	o_pc_debug,
	output logic 		o_insn_vld,
	output logic [31:0] o_io_ledr,
	output logic [31:0] o_io_ledg,
	output logic [6:0] 	o_io_hex0,
	output logic [6:0] 	o_io_hex1, 
	output logic [6:0] 	o_io_hex2, 
	output logic [6:0] 	o_io_hex3, 
	output logic [6:0] 	o_io_hex4,  
	output logic [6:0] 	o_io_hex5, 
	output logic [6:0] 	o_io_hex6,
	output logic [6:0] 	o_io_hex7,  
	output logic [31:0] o_io_lcd,
	input  logic [31:0] i_io_sw
	//input  logic [3:0] 	i_io_btn
);

wire [31:0] pc;
wire insn_vld;

always @(posedge i_clk or negedge i_rst_n) begin
	o_insn_vld <= insn_vld;
	o_pc_debug <= pc;
end

wire [31:0] pc_four;
wire [31:0] nxt_pc;
wire [31:0] instr;
wire [31:0] rs1_data;
wire [31:0] rs2_data;
wire [31:0] imm;
wire [31:0] operand_a;
wire [31:0] operand_b;
wire [31:0] alu_data;
wire br_less;
wire br_equal;
wire rd_wren;
wire br_unsigned;
wire [3:0] alu_op;
wire br_sel;
wire op_a_sel;
wire op_b_sel;
wire [2:0] load_sel;
wire [1:0] store_sel;
wire [1:0] wb_sel;
wire [31:0] ld_data;
wire mem_wren;
wire [31:0] wb_data;

mux1 mux1(
.alu_data(alu_data),
.pc_four(pc_four),
.nxt_pc(nxt_pc),
.br_sel(br_sel) //input
);

PC PC(
.i_clk(i_clk),
.i_rst_n(i_rst_n),
.nxt_pc(nxt_pc[31:0]),
.pc(pc)
);

adder_four adder_four(
.pc(pc),
.pc_four(pc_four)
);

imem imem(
.pc(pc),
.instr(instr)
);

regfile regfile(
.i_rd_data(wb_data),
.i_rs1_addr(instr[19:15]),
.i_rs2_addr(instr[24:20]),
.i_rd_addr(instr[11:7]),
.i_rd_wren(rd_wren),
.o_rs1_data(rs1_data),
.o_rs2_data(rs2_data),
.i_clk(i_clk),
.i_rst_n(i_rst_n)
);

immgen immgen(
.instr(instr),
.imm(imm)
);

muxa muxa(
.pc(pc),
.rs1_data(rs1_data),
.op_a_sel(op_a_sel),
.operand_a(operand_a)
);

muxb muxb(
.rs2_data(rs2_data),
.op_b_sel(op_b_sel),
.imm(imm),
.operand_b(operand_b)
);

brc brc(
.i_rs1_data(rs1_data),
.i_rs2_data(rs2_data),
.i_br_un(br_unsigned),
.o_br_less(br_less),
.o_br_equal(br_equal)
);

alu alu(
.i_operand_a(operand_a),
.i_operand_b(operand_b),
.o_alu_data(alu_data),
.i_alu_op(alu_op)
);

controlunit controlunit(
.instr(instr),
.rd_wren(rd_wren),
.br_unsigned(br_unsigned),
.op_a_sel(op_a_sel),
.op_b_sel(op_b_sel),
.alu_op(alu_op),
.mem_wren(mem_wren),
// .mem_rden(mem_rden),
.wb_sel(wb_sel),
.load_sel(load_sel),
.store_sel(store_sel),
.br_sel(br_sel),
.br_equal(br_equal),
.br_less(br_less),
.insn_vld(insn_vld)
);

lsu lsu(
.i_clk(i_clk),
.i_rst_n(i_rst_n),
.i_lsu_addr(alu_data),
.i_st_data(rs2_data),
.i_lsu_wren(mem_wren),
//.i_lsu_rden(mem_rden),
.o_ld_data(ld_data),
.load_sel(load_sel),
.store_sel(store_sel),
.i_io_sw(i_io_sw),
.o_io_ledr(o_io_ledr),
.o_io_ledg(o_io_ledg),
.o_io_lcd(o_io_lcd),
.o_io_hex0(o_io_hex0),
.o_io_hex1(o_io_hex1),
.o_io_hex2(o_io_hex2),
.o_io_hex3(o_io_hex3),
.o_io_hex4(o_io_hex4),
.o_io_hex5(o_io_hex5),
.o_io_hex6(o_io_hex6),
.o_io_hex7(o_io_hex7)
);

mux_data mux_data(
.pc_four(pc_four),
.alu_data(alu_data),
.ld_data(ld_data),
.wb_sel(wb_sel),
.wb_data(wb_data)
);

endmodule
