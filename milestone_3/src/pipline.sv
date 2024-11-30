module pipline (
    input logic i_clk,
    input logic i_rst_n,
    input  logic [31:0] i_io_sw,
	//input  logic [3:0] 	i_io_btn,

    output logic o_insn_vld,
    output logic [31:0] o_pc_debug,
    output logic [31:0] o_io_lcd,
    output logic [31:0] o_io_ledr,
	output logic [31:0] o_io_ledg,
	output logic [6:0] 	o_io_hex0,
	output logic [6:0] 	o_io_hex1, 
	output logic [6:0] 	o_io_hex2, 
	output logic [6:0] 	o_io_hex3, 
	output logic [6:0] 	o_io_hex4,  
	output logic [6:0] 	o_io_hex5, 
	output logic [6:0] 	o_io_hex6,
	output logic [6:0] 	o_io_hex7
);

wire [31:0] instr;

wire [31:0] alu_dataE;
wire [31:0] nxt_pc, pc_nxtF, pcF, pcD, pc_nxtD;
wire [31:0] instrD;
wire br_sel;
wire stallF, stallD, flushM, flushD, flushE;

wire rd_wrenD;
wire br_unsignedD;
wire op_a_selD, op_b_selD;
wire [3:0] alu_opD;
wire mem_wrenD;
wire [1:0] wb_selD;
wire [2:0] load_selD;
wire [1:0] store_selD;
wire [31:0] o_rs1_dataD, o_rs2_dataD;
wire rd_wrenWB;
wire [4:0] rdWB;
wire [31:0] wb_data;
wire [31:0] immD;
// wire [4:0] rdD, rs1D, rs2D,
// wire [6:0] opcodeD,
wire stallE;
wire insn_vld, insn_vldE, insn_vldM, insn_vldWB;

wire rd_wrenE;
wire [1:0] wb_selE;
wire mem_wrenE;
wire [3:0] alu_opE;
wire op_a_selE, op_b_selE;
wire br_unsignedE;
wire [2:0] load_selE;
wire [1:0] store_selE;
wire [31:0] pcE, pc_nxtE;
wire [31:0] o_rs1_dataE, o_rs2_dataE;
wire [31:0] immE;
wire [4:0] rdE, rs1E, rs2E;
wire [6:0] opcodeE;
wire [31:0] instrE;

wire [31:0] op_a, op_b;
wire [1:0] forw_a_sel, forw_b_sel;

wire [6:0] opcodeM;
wire [2:0] load_selM;
wire [1:0] store_selM;
wire rd_wrenM;
wire [1:0] wb_selM;
wire mem_wrenM;
wire [31:0] alu_dataM;
wire [31:0] st_dataM;
wire [31:0] pc_nxtM;
wire [4:0] rdM;
wire [31:0] pcM;
wire [31:0] ld_dataM;
wire [31:0] operand_a, operand_b;
wire br_less, br_equal;

wire [31:0] pc_nxtWB;
wire [31:0] ld_dataWB;
wire [31:0] alu_dataWB;
wire [1:0] wb_selWB;
wire [31:0] pcWB;

always @(posedge i_clk or negedge i_rst_n) begin
	o_insn_vld <= insn_vldWB;
	o_pc_debug <= pcWB;
end


mux1 mux1 (
    .alu_data (alu_dataE),
    .pc_four (pc_nxtF),
    .br_sel (br_sel),
    .nxt_pc (nxt_pc)
);

PC PC (
    .i_clk (i_clk),
    .i_rst_n (i_rst_n),
    .stallF (stallF),
    .nxt_pc (nxt_pc),
    .pcF (pcF)
);

imem imem (
    .pc (pcF),
    .i_rst_n (i_rst_n),
    .instr (instr)
);

adder_four adder_four (
    .pc (pcF),
    .pc_nxtF (pc_nxtF)
);

IF_ID IF_ID (
    .i_clk (i_clk),
    .i_rst_n (i_rst_n),
    .instr (instr),
    .pcF (pcF),
    .pc_nxtF (pc_nxtF),
    .stallD (stallD),
    .flushD (flushD),
    .pcD (pcD),
    .pc_nxtD (pc_nxtD),
    .instrD (instrD)
);

controlunit controlunit (
    .instr (instrD),
    .rd_wren (rd_wrenD),
    .br_unsigned (br_unsignedD),
    .op_a_sel (op_a_selD),
    .op_b_sel (op_b_selD),
    .alu_op (alu_opD),
    .mem_wren (mem_wrenD),
    .wb_sel (wb_selD),
    .insn_vld (insn_vld),
    .load_sel (load_selD),
    .store_sel (store_selD)
);

regfile regfile (
    .i_clk (i_clk),
    .i_rst_n (i_rst_n),
    .i_rs1_addr (instrD[19:15]),
    .i_rs2_addr (instrD[24:20]),
    .o_rs1_data (o_rs1_dataD),
    .o_rs2_data (o_rs2_dataD),
    .i_rd_addr (rdWB),
    .i_rd_data (wb_data),
    .i_rd_wren (rd_wrenWB)
);

immgen immgen (
    .instr (instrD),
    .imm (immD)
);

ID_IE ID_IE (
    .i_clk (i_clk),
    .i_rst_n (i_rst_n),
    .rd_wrenD (rd_wrenD),
    .wb_selD (wb_selD),
    .mem_wrenD (mem_wrenD),
    .alu_opD (alu_opD),
    .op_a_selD (op_a_selD),
    .op_b_selD (op_b_selD),
    .br_unsignedD (br_unsignedD),
    .load_selE (load_selE),
    .store_selE (store_selE),
    .pcD (pcD),
    .o_rs1_dataD (o_rs1_dataD),
    .o_rs2_dataD (o_rs2_dataD),
    .immD (immD),
    .pc_nxtD (pc_nxtD),
    .rdD (instrD[11:7]),
    .rs1D (instrD[19:15]),
    .rs2D (instrD[24:20]),
    .opcodeD (instrD[6:0]),
    .insn_vld (insn_vld),
    .instrD (instrD),
    .stallE (stallE),
    .flushE (flushE),
    .rd_wrenE (rd_wrenE),
    .wb_selE (wb_selE),
    .mem_wrenE (mem_wrenE),
    .alu_opE (alu_opE),
    .op_a_selE (op_a_selE),
    .op_b_selE (op_b_selE),
    .br_unsignedE (br_unsignedE),
    .load_selD (load_selD),
    .store_selD (store_selD),
    .pcE (pcE),
    .pc_nxtE (pc_nxtE),
    .o_rs1_dataE (o_rs1_dataE),
    .o_rs2_dataE (o_rs2_dataE),
    .immE (immE),
    .rdE (rdE),
    .rs1E (rs1E),
    .rs2E (rs2E),
    .opcodeE (opcodeE),
    .insn_vldE (insn_vldE),
    .instrE (instrE)
);

IE_IM IE_IM (
    .i_clk (i_clk),
    .i_rst_n (i_rst_n),
    .rd_wrenE (rd_wrenE),
    .wb_selE (wb_selE),
    .mem_wrenE (mem_wrenE),
    .alu_dataE (alu_dataE),
    .op_b (op_b),
    .pc_nxtE (pc_nxtE),
    .rdE (rdE),
    .load_selE (load_selE),
    .store_selE (store_selE),
    .opcodeE (opcodeE),
    .insn_vldE (insn_vldE),
    .pcE (pcE),
    .flushM (flushM),
    .rd_wrenM (rd_wrenM),
    .wb_selM (wb_selM),
    .mem_wrenM (mem_wrenM),
    .alu_dataM (alu_dataM),
    .st_dataM (st_dataM),
    .pc_nxtM (pc_nxtM),
    .rdM (rdM),
    .load_selM (load_selM),
    .store_selM (store_selM),
    .opcodeM (opcodeM),
    .insn_vldM (insn_vldM),
    .pcM (pcM)
);

mux_forward_a mux_forward_a (
    .data1E (o_rs1_dataE),
    .wb_data (wb_data),
    .alu_dataM (alu_dataM),
    .forw_a_sel (forw_a_sel),
    .op_a (op_a)
);

mux_forward_b mux_forward_b (
    .data2E (o_rs2_dataE),
    .wb_data (wb_data),
    .alu_dataM (alu_dataM),
    .forw_b_sel (forw_b_sel),
    .op_b (op_b)
);

muxa muxa (
    .op_a (op_a),
    .pc (pcE),
    .op_a_sel (op_a_selE),
    .operand_a (operand_a)
);

muxb muxb (
    .op_b (op_b),
    .imm (immE),
    .op_b_sel (op_b_selE),
    .operand_b (operand_b)
);

alu alu (
    .i_operand_a (operand_a),
    .i_operand_b (operand_b),
    .i_alu_op (alu_opE),
    .o_alu_data (alu_dataE)
);

brc brc (
    .i_rs1_data (op_a),
    .i_rs2_data (op_b),
    .i_br_un (br_unsignedE),
    .o_br_less (br_less),
    .o_br_equal (br_equal)
);

controlB controlB (
    .instr (instrE),
    .br_equal (br_equal),
    .br_less (br_less),
    .opcodeE (opcodeE),
    .br_sel (br_sel)
);

lsu lsu (
    .i_clk (i_clk),
    .i_rst_n (i_rst_n),
    .load_sel (load_selM),
    .store_sel (store_selM),
    .i_lsu_addr (alu_dataM),
    .i_st_data (st_dataM),
    .i_lsu_wren (mem_wrenM),
    .i_io_sw (i_io_sw),
    //.i_io_btn (i_io_btn),
    .o_ld_data (ld_dataM),
    .o_io_ledr (o_io_ledr),
    .o_io_ledg (o_io_ledg),
    .o_io_hex0 (o_io_hex0),
    .o_io_hex1 (o_io_hex1),
    .o_io_hex2 (o_io_hex2),
    .o_io_hex3 (o_io_hex3),
    .o_io_hex4 (o_io_hex4),
    .o_io_hex5 (o_io_hex5),
    .o_io_hex6 (o_io_hex6),
    .o_io_hex7 (o_io_hex7),
    .o_io_lcd (o_io_lcd)
);

IM_IWB IM_IWB (
    .i_clk (i_clk),
    .i_rst_n (i_rst_n),
    .rd_wrenM (rd_wrenM),
    .wb_selM (wb_selM),
    .alu_dataM (alu_dataM),
    .ld_dataM (ld_dataM),
    .pc_nxtM (pc_nxtM),
    .rdM (rdM),
    .insn_vldM (insn_vldM),
    .pcM (pcM),
    .rd_wrenWB (rd_wrenWB),
    .wb_selWB (wb_selWB),
    .alu_dataWB (alu_dataWB),
    .ld_dataWB (ld_dataWB),
    .pc_nxtWB (pc_nxtWB),
    .rdWB (rdWB),
    .insn_vldWB (insn_vldWB),
    .pcWB (pcWB)
);

mux_data mux_data (
    .pc_four (pc_nxtWB),
    .ld_data (ld_dataWB),
    .alu_data (alu_dataWB),
    .wb_sel (wb_selWB),
    .wb_data (wb_data)
);

hazard_unit hazard_unit (
    .rs1E (rs1E),
    .rs2E (rs2E),
    .rdM (rdM),
    .rdWB (rdWB),
    .rd_wrenM (rd_wrenM),
    .rd_wrenWB (rd_wrenWB),
    .wb_selD (wb_selD),
    .wb_selE (wb_selE),
    .mem_wrenE (mem_wrenE),
    .opcodeM (opcodeM),
    .opcodeE (opcodeE),
    .br_sel (br_sel),
    .forw_a_sel (forw_a_sel),
    .forw_b_sel (forw_b_sel),
    .stallF (stallF),
    .stallD (stallD),
    .flushM (flushM),
    .flushD (flushD),
    .stallE (stallE),
    .flushE (flushE)
);

endmodule
