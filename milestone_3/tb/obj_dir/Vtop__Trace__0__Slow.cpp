// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+657,"i_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+658,"i_rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+659,"i_io_sw",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+660,"o_insn_vld",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+661,"o_pc_debug",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+662,"o_io_lcd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+663,"o_io_ledg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+664,"o_io_ledr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+665,"o_io_hex0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+666,"o_io_hex1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+667,"o_io_hex2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+668,"o_io_hex3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+669,"o_io_hex4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+670,"o_io_hex5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+671,"o_io_hex6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+672,"o_io_hex7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+657,"i_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+658,"i_rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+659,"i_io_sw",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+660,"o_insn_vld",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+661,"o_pc_debug",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+662,"o_io_lcd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+663,"o_io_ledg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+664,"o_io_ledr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+665,"o_io_hex0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+666,"o_io_hex1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+667,"o_io_hex2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+668,"o_io_hex3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+669,"o_io_hex4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+670,"o_io_hex5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+671,"o_io_hex6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+672,"o_io_hex7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->pushNamePrefix("pipline ");
    tracep->declBit(c+657,"i_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+658,"i_rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+659,"i_io_sw",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+660,"o_insn_vld",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+661,"o_pc_debug",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+662,"o_io_lcd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+664,"o_io_ledr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+663,"o_io_ledg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+665,"o_io_hex0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+666,"o_io_hex1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+667,"o_io_hex2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+668,"o_io_hex3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+669,"o_io_hex4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+670,"o_io_hex5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+671,"o_io_hex6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+672,"o_io_hex7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+673,"instr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1,"alu_dataE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+10,"nxt_pc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+266,"pc_nxtF",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+267,"pcF",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+268,"pcD",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+269,"pc_nxtD",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+270,"instrD",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+2,"br_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+271,"stallF",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+272,"stallD",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+273,"flushM",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"flushD",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"flushE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+274,"rd_wrenD",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+275,"br_unsignedD",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+276,"op_a_selD",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+277,"op_b_selD",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+278,"alu_opD",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+279,"mem_wrenD",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+280,"wb_selD",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+281,"load_selD",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+282,"store_selD",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+283,"o_rs1_dataD",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+284,"o_rs2_dataD",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+285,"rd_wrenWB",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+286,"rdWB",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+287,"wb_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+288,"immD",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+289,"stallE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+290,"insn_vld",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+291,"insn_vldE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+292,"insn_vldM",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+293,"insn_vldWB",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+294,"rd_wrenE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+295,"wb_selE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+296,"mem_wrenE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+297,"alu_opE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+298,"op_a_selE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+299,"op_b_selE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+300,"br_unsignedE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+301,"load_selE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+302,"store_selE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+303,"pcE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+304,"pc_nxtE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+305,"o_rs1_dataE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+306,"o_rs2_dataE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+307,"immE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+308,"rdE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+309,"rs1E",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+310,"rs2E",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+311,"opcodeE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+312,"instrE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+313,"op_a",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+314,"op_b",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+315,"forw_a_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+316,"forw_b_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+317,"opcodeM",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+318,"load_selM",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+319,"store_selM",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+320,"rd_wrenM",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+321,"wb_selM",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+322,"mem_wrenM",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+323,"alu_dataM",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+324,"st_dataM",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+325,"pc_nxtM",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+326,"rdM",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+327,"pcM",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+5,"ld_dataM",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+328,"operand_a",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+329,"operand_b",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+11,"br_less",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+330,"br_equal",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+331,"pc_nxtWB",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+332,"ld_dataWB",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+333,"alu_dataWB",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+334,"wb_selWB",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+335,"pcWB",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("ID_IE ");
    tracep->declBit(c+657,"i_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+658,"i_rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+274,"rd_wrenD",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+280,"wb_selD",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+279,"mem_wrenD",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+278,"alu_opD",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+276,"op_a_selD",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+277,"op_b_selD",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+275,"br_unsignedD",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+281,"load_selD",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+282,"store_selD",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+268,"pcD",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+269,"pc_nxtD",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+283,"o_rs1_dataD",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+284,"o_rs2_dataD",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+288,"immD",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+336,"rdD",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+337,"rs1D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+338,"rs2D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+339,"opcodeD",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+289,"stallE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"flushE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+290,"insn_vld",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+270,"instrD",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+294,"rd_wrenE",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+295,"wb_selE",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+296,"mem_wrenE",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+297,"alu_opE",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+298,"op_a_selE",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+299,"op_b_selE",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+300,"br_unsignedE",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+301,"load_selE",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+302,"store_selE",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+303,"pcE",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+304,"pc_nxtE",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+305,"o_rs1_dataE",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+306,"o_rs2_dataE",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+307,"immE",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+308,"rdE",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+309,"rs1E",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+310,"rs2E",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+311,"opcodeE",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+291,"insn_vldE",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+312,"instrE",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IE_IM ");
    tracep->declBit(c+657,"i_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+658,"i_rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+294,"rd_wrenE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+295,"wb_selE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+296,"mem_wrenE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1,"alu_dataE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+314,"op_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+304,"pc_nxtE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+308,"rdE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+301,"load_selE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+302,"store_selE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+311,"opcodeE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+291,"insn_vldE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+303,"pcE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+273,"flushM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+320,"rd_wrenM",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+321,"wb_selM",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+322,"mem_wrenM",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+323,"alu_dataM",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+324,"st_dataM",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+325,"pc_nxtM",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+326,"rdM",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+318,"load_selM",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+319,"store_selM",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+317,"opcodeM",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+292,"insn_vldM",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+327,"pcM",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF_ID ");
    tracep->declBit(c+657,"i_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+658,"i_rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+673,"instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+267,"pcF",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+266,"pc_nxtF",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+272,"stallD",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"flushD",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+268,"pcD",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+269,"pc_nxtD",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+270,"instrD",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IM_IWB ");
    tracep->declBit(c+657,"i_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+658,"i_rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+320,"rd_wrenM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+321,"wb_selM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+323,"alu_dataM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+5,"ld_dataM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+325,"pc_nxtM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+326,"rdM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+292,"insn_vldM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+327,"pcM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+285,"rd_wrenWB",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+334,"wb_selWB",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+333,"alu_dataWB",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+332,"ld_dataWB",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+331,"pc_nxtWB",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+286,"rdWB",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+293,"insn_vldWB",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+335,"pcWB",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PC ");
    tracep->declBit(c+657,"i_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+658,"i_rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+271,"stallF",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+10,"nxt_pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+267,"pcF",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("adder_four ");
    tracep->declBus(c+267,"pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+266,"pc_nxtF",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+328,"i_operand_a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+329,"i_operand_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+297,"i_alu_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1,"o_alu_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+12,"cout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+13,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("ripple_adder ");
    tracep->declBus(c+675,"data_size",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+328,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+340,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+676,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+13,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+12,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+14,"carry",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("adder0 ");
    tracep->declBit(c+341,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+342,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+676,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+343,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+344,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+345,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+345,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+346,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[10] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+347,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+348,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+16,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+349,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+350,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[11] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+351,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+352,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+353,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+22,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+354,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[12] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+355,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+356,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+24,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+357,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+26,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+358,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[13] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+359,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+360,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+27,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+28,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+29,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+361,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+30,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+362,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[14] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+363,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+364,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+33,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+365,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+34,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+366,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[15] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+367,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+368,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+35,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+36,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+37,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+369,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+38,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+370,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[16] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+371,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+372,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+39,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+40,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+41,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+373,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+42,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+374,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[17] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+375,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+376,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+43,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+44,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+45,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+377,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+46,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+378,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[18] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+379,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+380,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+47,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+48,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+381,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+50,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+382,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[19] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+383,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+384,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+51,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+53,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+385,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+54,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+386,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+387,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+388,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+55,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+56,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+57,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+389,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+58,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+390,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[20] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+391,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+392,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+59,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+60,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+61,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+393,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+62,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+394,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[21] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+395,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+396,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+63,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+65,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+397,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+398,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[22] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+399,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+400,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+67,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+68,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+69,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+401,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+402,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[23] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+403,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+404,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+71,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+72,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+73,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+405,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+74,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+406,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[24] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+407,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+408,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+77,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+409,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+78,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+410,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[25] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+411,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+412,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+79,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+80,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+413,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+82,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+414,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[26] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+415,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+416,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+83,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+84,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+85,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+417,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+86,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+418,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[27] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+419,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+420,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+88,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+89,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+421,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+90,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+422,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[28] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+423,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+424,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+91,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+92,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+93,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+425,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+94,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+426,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[29] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+427,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+428,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+95,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+96,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+97,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+429,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+98,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+430,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+431,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+432,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+99,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+100,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+101,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+433,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+102,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+434,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[30] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+435,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+436,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+103,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+104,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+105,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+437,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+106,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+438,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[31] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+439,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+440,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+107,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+108,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+109,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+441,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+110,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+442,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+443,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+444,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+111,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+112,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+113,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+445,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+114,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+446,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[4] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+447,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+448,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+115,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+116,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+117,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+449,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+118,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+450,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[5] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+451,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+452,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+119,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+120,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+121,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+453,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+122,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+454,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[6] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+455,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+456,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+123,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+124,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+125,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+457,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+126,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+458,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[7] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+459,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+460,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+127,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+128,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+129,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+461,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+130,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+462,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[8] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+463,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+464,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+131,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+132,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+133,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+465,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+134,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+466,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[9] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+467,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+468,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+135,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+136,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+137,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+469,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+138,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+470,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("brc ");
    tracep->declBus(c+313,"i_rs1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+314,"i_rs2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+300,"i_br_un",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"o_br_less",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+330,"o_br_equal",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+139,"cout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+140,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("ripple_adder ");
    tracep->declBus(c+675,"data_size",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+313,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+471,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+676,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+140,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+139,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+141,"carry",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("adder0 ");
    tracep->declBit(c+472,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+473,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+676,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+474,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+475,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+476,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+476,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+477,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[10] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+478,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+479,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+143,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+144,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+480,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+145,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+481,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[11] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+482,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+483,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+146,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+147,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+148,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+484,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+149,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+485,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[12] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+486,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+487,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+150,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+151,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+152,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+488,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+153,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+489,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[13] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+490,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+491,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+154,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+155,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+156,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+492,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+157,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+493,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[14] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+494,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+495,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+158,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+159,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+160,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+496,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+161,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+497,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[15] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+498,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+499,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+162,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+163,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+164,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+500,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+165,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+501,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[16] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+502,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+503,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+166,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+167,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+168,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+504,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+169,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+505,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[17] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+506,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+507,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+170,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+171,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+172,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+508,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+173,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+509,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[18] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+510,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+511,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+174,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+175,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+176,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+512,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+177,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+513,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[19] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+514,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+515,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+178,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+179,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+180,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+516,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+181,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+517,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+518,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+519,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+182,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+183,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+184,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+520,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+185,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+521,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[20] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+522,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+523,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+186,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+187,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+188,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+524,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+189,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+525,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[21] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+526,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+527,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+190,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+191,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+192,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+528,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+193,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+529,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[22] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+530,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+531,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+194,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+195,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+196,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+532,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+197,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+533,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[23] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+534,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+535,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+198,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+199,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+200,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+536,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+201,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+537,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[24] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+538,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+539,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+202,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+203,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+204,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+540,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+205,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+541,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[25] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+542,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+543,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+206,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+207,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+208,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+544,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+209,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+545,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[26] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+546,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+547,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+210,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+211,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+212,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+548,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+213,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+549,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[27] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+550,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+551,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+214,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+215,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+216,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+552,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+217,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+553,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[28] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+554,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+555,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+218,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+219,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+220,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+556,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+221,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+557,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[29] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+558,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+559,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+222,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+223,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+224,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+560,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+225,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+561,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+562,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+563,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+226,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+227,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+228,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+564,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+229,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+565,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[30] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+566,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+567,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+230,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+232,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+568,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+233,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+569,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[31] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+570,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+571,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+234,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+235,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+236,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+572,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+237,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+573,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+574,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+575,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+238,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+239,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+240,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+576,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+241,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+577,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[4] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+578,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+579,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+242,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+243,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+244,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+580,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+245,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+581,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[5] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+582,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+583,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+246,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+247,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+248,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+584,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+249,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+585,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[6] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+586,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+587,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+250,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+251,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+252,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+588,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+253,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+589,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[7] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+590,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+591,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+254,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+255,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+256,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+592,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+257,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+593,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[8] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+594,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+595,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+258,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+259,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+260,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+596,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+261,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+597,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[9] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+598,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+599,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+262,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+263,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+264,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+600,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+265,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+601,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("controlB ");
    tracep->declBus(c+312,"instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+330,"br_equal",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"br_less",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+311,"opcodeE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+2,"br_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+602,"func3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+677,"R_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+678,"I_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+679,"S_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+680,"B_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+681,"LOAD_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+682,"LUI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+683,"AUIPC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+684,"JALR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+685,"JAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("controlunit ");
    tracep->declBus(c+270,"instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+274,"rd_wren",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+275,"br_unsigned",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+276,"op_a_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+277,"op_b_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+278,"alu_op",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+279,"mem_wren",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+280,"wb_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+290,"insn_vld",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+281,"load_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+282,"store_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+339,"opcode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+603,"func3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+604,"func7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+677,"R_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+678,"I_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+679,"S_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+680,"B_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+681,"LOAD_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+682,"LUI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+683,"AUIPC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+684,"JALR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+685,"JAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("hazard_unit ");
    tracep->declBus(c+309,"rs1E",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+310,"rs2E",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+326,"rdM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+286,"rdWB",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+320,"rd_wrenM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"rd_wrenWB",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+280,"wb_selD",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+295,"wb_selE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+317,"opcodeM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+311,"opcodeE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+296,"mem_wrenE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"br_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+315,"forw_a_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+316,"forw_b_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+271,"stallF",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+272,"stallD",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"flushD",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+273,"flushM",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+289,"stallE",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"flushE",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imem ");
    tracep->declBus(c+267,"pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+658,"i_rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+673,"instr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("immgen ");
    tracep->declBus(c+270,"instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+288,"imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+339,"opcode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+657,"i_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+658,"i_rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+318,"load_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+319,"store_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+323,"i_lsu_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+324,"i_st_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+322,"i_lsu_wren",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+659,"i_io_sw",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+5,"o_ld_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+664,"o_io_ledr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+663,"o_io_ledg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+665,"o_io_hex0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+666,"o_io_hex1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+667,"o_io_hex2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+668,"o_io_hex3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+669,"o_io_hex4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+670,"o_io_hex5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+671,"o_io_hex6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+672,"o_io_hex7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+662,"o_io_lcd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+605,"data_mem_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 12,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+6+i*1,"sw_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    tracep->declBus(c+674,"btn_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+606+i*1,"hex_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+614+i*1,"led_r_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    tracep->declBus(c+618,"led_g_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+619+i*1,"lcd_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+623,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mux1 ");
    tracep->declBus(c+1,"alu_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+266,"pc_four",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+2,"br_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+10,"nxt_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_data ");
    tracep->declBus(c+331,"pc_four",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+332,"ld_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+333,"alu_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+334,"wb_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+287,"wb_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_forward_a ");
    tracep->declBus(c+305,"data1E",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+287,"wb_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+323,"alu_dataM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+315,"forw_a_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+313,"op_a",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_forward_b ");
    tracep->declBus(c+306,"data2E",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+287,"wb_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+323,"alu_dataM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+316,"forw_b_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+314,"op_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("muxa ");
    tracep->declBus(c+313,"op_a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+303,"pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+298,"op_a_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+328,"operand_a",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("muxb ");
    tracep->declBus(c+314,"op_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+307,"imm",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+299,"op_b_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+329,"operand_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBit(c+657,"i_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+658,"i_rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+337,"i_rs1_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+338,"i_rs2_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+283,"o_rs1_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+284,"o_rs2_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+286,"i_rd_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+287,"i_rd_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+285,"i_rd_wren",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+624+i*1,"register",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBus(c+656,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__pipline__DOT__alu_dataE),32);
    bufp->fullBit(oldp+2,(vlSelf->top__DOT__pipline__DOT__br_sel));
    bufp->fullBit(oldp+3,(vlSelf->top__DOT__pipline__DOT__flushD));
    bufp->fullBit(oldp+4,(vlSelf->top__DOT__pipline__DOT__flushE));
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__pipline__DOT__ld_dataM),32);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__sw_reg[0]),8);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__sw_reg[1]),8);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__sw_reg[2]),8);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__sw_reg[3]),8);
    bufp->fullIData(oldp+10,(((IData)(vlSelf->top__DOT__pipline__DOT__br_sel)
                               ? vlSelf->top__DOT__pipline__DOT__alu_dataE
                               : ((IData)(4U) + vlSelf->top__DOT__pipline__DOT__pcF))),32);
    bufp->fullBit(oldp+11,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__br_unsignedE)
                                   ? (~ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                         >> 0x1fU))
                                   : (((vlSelf->top__DOT__pipline__DOT__op_a 
                                        >> 0x1fU) != 
                                       (vlSelf->top__DOT__pipline__DOT__op_b 
                                        >> 0x1fU)) ? 
                                      (vlSelf->top__DOT__pipline__DOT__op_a 
                                       >> 0x1fU) : 
                                      (vlSelf->top__DOT__pipline__DOT__brc__DOT__sum 
                                       >> 0x1fU))))));
    bufp->fullBit(oldp+12,((vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                            >> 0x1fU)));
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__pipline__DOT__alu__DOT__sum),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry),32);
    bufp->fullBit(oldp+15,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 9U))));
    bufp->fullBit(oldp+16,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__10__KET____DOT__adder__DOT__w1) 
                                  ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 9U)))));
    bufp->fullBit(oldp+17,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__10__KET____DOT__adder__DOT__w1) 
                                   & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 9U)) | ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                                  >> 0xaU) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                     >> 0xaU)))))));
    bufp->fullBit(oldp+18,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__10__KET____DOT__adder__DOT__w1) 
                            & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                               >> 9U))));
    bufp->fullBit(oldp+19,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0xaU))));
    bufp->fullBit(oldp+20,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__11__KET____DOT__adder__DOT__w1) 
                                  ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0xaU)))));
    bufp->fullBit(oldp+21,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__11__KET____DOT__adder__DOT__w1) 
                                   & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0xaU)) | (
                                                   (vlSelf->top__DOT__pipline__DOT__operand_a 
                                                    >> 0xbU) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                       >> 0xbU)))))));
    bufp->fullBit(oldp+22,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__11__KET____DOT__adder__DOT__w1) 
                            & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                               >> 0xaU))));
    bufp->fullBit(oldp+23,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0xbU))));
    bufp->fullBit(oldp+24,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__12__KET____DOT__adder__DOT__w1) 
                                  ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0xbU)))));
    bufp->fullBit(oldp+25,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__12__KET____DOT__adder__DOT__w1) 
                                   & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0xbU)) | (
                                                   (vlSelf->top__DOT__pipline__DOT__operand_a 
                                                    >> 0xcU) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                       >> 0xcU)))))));
    bufp->fullBit(oldp+26,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__12__KET____DOT__adder__DOT__w1) 
                            & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                               >> 0xbU))));
    bufp->fullBit(oldp+27,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0xcU))));
    bufp->fullBit(oldp+28,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__13__KET____DOT__adder__DOT__w1) 
                                  ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0xcU)))));
    bufp->fullBit(oldp+29,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__13__KET____DOT__adder__DOT__w1) 
                                   & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0xcU)) | (
                                                   (vlSelf->top__DOT__pipline__DOT__operand_a 
                                                    >> 0xdU) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                       >> 0xdU)))))));
    bufp->fullBit(oldp+30,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__13__KET____DOT__adder__DOT__w1) 
                            & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                               >> 0xcU))));
    bufp->fullBit(oldp+31,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0xdU))));
    bufp->fullBit(oldp+32,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__14__KET____DOT__adder__DOT__w1) 
                                  ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0xdU)))));
    bufp->fullBit(oldp+33,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__14__KET____DOT__adder__DOT__w1) 
                                   & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0xdU)) | (
                                                   (vlSelf->top__DOT__pipline__DOT__operand_a 
                                                    >> 0xeU) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                       >> 0xeU)))))));
    bufp->fullBit(oldp+34,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__14__KET____DOT__adder__DOT__w1) 
                            & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                               >> 0xdU))));
    bufp->fullBit(oldp+35,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0xeU))));
    bufp->fullBit(oldp+36,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__15__KET____DOT__adder__DOT__w1) 
                                  ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0xeU)))));
    bufp->fullBit(oldp+37,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__15__KET____DOT__adder__DOT__w1) 
                                   & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0xeU)) | (
                                                   (vlSelf->top__DOT__pipline__DOT__operand_a 
                                                    >> 0xfU) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                       >> 0xfU)))))));
    bufp->fullBit(oldp+38,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__15__KET____DOT__adder__DOT__w1) 
                            & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                               >> 0xeU))));
    bufp->fullBit(oldp+39,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0xfU))));
    bufp->fullBit(oldp+40,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__16__KET____DOT__adder__DOT__w1) 
                                  ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0xfU)))));
    bufp->fullBit(oldp+41,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__16__KET____DOT__adder__DOT__w1) 
                                   & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0xfU)) | (
                                                   (vlSelf->top__DOT__pipline__DOT__operand_a 
                                                    >> 0x10U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                       >> 0x10U)))))));
    bufp->fullBit(oldp+42,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__16__KET____DOT__adder__DOT__w1) 
                            & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                               >> 0xfU))));
    bufp->fullBit(oldp+43,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0x10U))));
    bufp->fullBit(oldp+44,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__17__KET____DOT__adder__DOT__w1) 
                                  ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0x10U)))));
    bufp->fullBit(oldp+45,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__17__KET____DOT__adder__DOT__w1) 
                                   & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0x10U)) | 
                                  ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x11U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x11U)))))));
    bufp->fullBit(oldp+46,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__17__KET____DOT__adder__DOT__w1) 
                            & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                               >> 0x10U))));
    bufp->fullBit(oldp+47,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0x11U))));
    bufp->fullBit(oldp+48,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__18__KET____DOT__adder__DOT__w1) 
                                  ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0x11U)))));
    bufp->fullBit(oldp+49,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__18__KET____DOT__adder__DOT__w1) 
                                   & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0x11U)) | 
                                  ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x12U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x12U)))))));
    bufp->fullBit(oldp+50,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__18__KET____DOT__adder__DOT__w1) 
                            & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                               >> 0x11U))));
    bufp->fullBit(oldp+51,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0x12U))));
    bufp->fullBit(oldp+52,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__19__KET____DOT__adder__DOT__w1) 
                                  ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0x12U)))));
    bufp->fullBit(oldp+53,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__19__KET____DOT__adder__DOT__w1) 
                                   & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0x12U)) | 
                                  ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x13U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x13U)))))));
    bufp->fullBit(oldp+54,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__19__KET____DOT__adder__DOT__w1) 
                            & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                               >> 0x12U))));
    bufp->fullBit(oldp+55,((1U & vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry)));
    bufp->fullBit(oldp+56,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__1__KET____DOT__adder__DOT__w1) 
                                  ^ vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry))));
    bufp->fullBit(oldp+57,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__1__KET____DOT__adder__DOT__w1) 
                                   & vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry) 
                                  | ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                      >> 1U) & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                   >> 1U)))))));
    bufp->fullBit(oldp+58,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__1__KET____DOT__adder__DOT__w1) 
                            & vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry)));
    bufp->fullBit(oldp+59,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0x13U))));
    bufp->fullBit(oldp+60,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__20__KET____DOT__adder__DOT__w1) 
                                  ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0x13U)))));
    bufp->fullBit(oldp+61,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__20__KET____DOT__adder__DOT__w1) 
                                   & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0x13U)) | 
                                  ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x14U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x14U)))))));
    bufp->fullBit(oldp+62,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__20__KET____DOT__adder__DOT__w1) 
                            & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                               >> 0x13U))));
    bufp->fullBit(oldp+63,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0x14U))));
    bufp->fullBit(oldp+64,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__21__KET____DOT__adder__DOT__w1) 
                                  ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0x14U)))));
    bufp->fullBit(oldp+65,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__21__KET____DOT__adder__DOT__w1) 
                                   & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0x14U)) | 
                                  ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x15U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x15U)))))));
    bufp->fullBit(oldp+66,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__21__KET____DOT__adder__DOT__w1) 
                            & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                               >> 0x14U))));
    bufp->fullBit(oldp+67,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0x15U))));
    bufp->fullBit(oldp+68,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__22__KET____DOT__adder__DOT__w1) 
                                  ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0x15U)))));
    bufp->fullBit(oldp+69,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__22__KET____DOT__adder__DOT__w1) 
                                   & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0x15U)) | 
                                  ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x16U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x16U)))))));
    bufp->fullBit(oldp+70,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__22__KET____DOT__adder__DOT__w1) 
                            & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                               >> 0x15U))));
    bufp->fullBit(oldp+71,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0x16U))));
    bufp->fullBit(oldp+72,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__23__KET____DOT__adder__DOT__w1) 
                                  ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0x16U)))));
    bufp->fullBit(oldp+73,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__23__KET____DOT__adder__DOT__w1) 
                                   & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0x16U)) | 
                                  ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x17U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x17U)))))));
    bufp->fullBit(oldp+74,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__23__KET____DOT__adder__DOT__w1) 
                            & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                               >> 0x16U))));
    bufp->fullBit(oldp+75,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0x17U))));
    bufp->fullBit(oldp+76,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__24__KET____DOT__adder__DOT__w1) 
                                  ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0x17U)))));
    bufp->fullBit(oldp+77,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__24__KET____DOT__adder__DOT__w1) 
                                   & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0x17U)) | 
                                  ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x18U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x18U)))))));
    bufp->fullBit(oldp+78,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__24__KET____DOT__adder__DOT__w1) 
                            & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                               >> 0x17U))));
    bufp->fullBit(oldp+79,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0x18U))));
    bufp->fullBit(oldp+80,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__25__KET____DOT__adder__DOT__w1) 
                                  ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0x18U)))));
    bufp->fullBit(oldp+81,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__25__KET____DOT__adder__DOT__w1) 
                                   & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0x18U)) | 
                                  ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x19U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x19U)))))));
    bufp->fullBit(oldp+82,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__25__KET____DOT__adder__DOT__w1) 
                            & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                               >> 0x18U))));
    bufp->fullBit(oldp+83,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0x19U))));
    bufp->fullBit(oldp+84,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__26__KET____DOT__adder__DOT__w1) 
                                  ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0x19U)))));
    bufp->fullBit(oldp+85,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__26__KET____DOT__adder__DOT__w1) 
                                   & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0x19U)) | 
                                  ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x1aU) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x1aU)))))));
    bufp->fullBit(oldp+86,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__26__KET____DOT__adder__DOT__w1) 
                            & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                               >> 0x19U))));
    bufp->fullBit(oldp+87,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0x1aU))));
    bufp->fullBit(oldp+88,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__27__KET____DOT__adder__DOT__w1) 
                                  ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0x1aU)))));
    bufp->fullBit(oldp+89,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__27__KET____DOT__adder__DOT__w1) 
                                   & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0x1aU)) | 
                                  ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x1bU) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x1bU)))))));
    bufp->fullBit(oldp+90,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__27__KET____DOT__adder__DOT__w1) 
                            & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                               >> 0x1aU))));
    bufp->fullBit(oldp+91,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0x1bU))));
    bufp->fullBit(oldp+92,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__28__KET____DOT__adder__DOT__w1) 
                                  ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0x1bU)))));
    bufp->fullBit(oldp+93,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__28__KET____DOT__adder__DOT__w1) 
                                   & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0x1bU)) | 
                                  ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x1cU) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x1cU)))))));
    bufp->fullBit(oldp+94,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__28__KET____DOT__adder__DOT__w1) 
                            & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                               >> 0x1bU))));
    bufp->fullBit(oldp+95,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0x1cU))));
    bufp->fullBit(oldp+96,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__29__KET____DOT__adder__DOT__w1) 
                                  ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0x1cU)))));
    bufp->fullBit(oldp+97,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__29__KET____DOT__adder__DOT__w1) 
                                   & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0x1cU)) | 
                                  ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x1dU) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x1dU)))))));
    bufp->fullBit(oldp+98,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__29__KET____DOT__adder__DOT__w1) 
                            & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                               >> 0x1cU))));
    bufp->fullBit(oldp+99,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 1U))));
    bufp->fullBit(oldp+100,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__2__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 1U)))));
    bufp->fullBit(oldp+101,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__2__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                       >> 1U)) | ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                                   >> 2U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                      >> 2U)))))));
    bufp->fullBit(oldp+102,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__2__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                >> 1U))));
    bufp->fullBit(oldp+103,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+104,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__30__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0x1dU)))));
    bufp->fullBit(oldp+105,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__30__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                       >> 0x1dU)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                     >> 0x1eU) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                   >> 0x1eU)))))));
    bufp->fullBit(oldp+106,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__30__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                >> 0x1dU))));
    bufp->fullBit(oldp+107,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+108,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__31__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0x1eU)))));
    bufp->fullBit(oldp+109,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__31__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                       >> 0x1eU)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                     >> 0x1fU) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                   >> 0x1fU)))))));
    bufp->fullBit(oldp+110,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__31__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                >> 0x1eU))));
    bufp->fullBit(oldp+111,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                   >> 2U))));
    bufp->fullBit(oldp+112,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__3__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 2U)))));
    bufp->fullBit(oldp+113,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__3__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                       >> 2U)) | ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                                   >> 3U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                      >> 3U)))))));
    bufp->fullBit(oldp+114,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__3__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                >> 2U))));
    bufp->fullBit(oldp+115,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                   >> 3U))));
    bufp->fullBit(oldp+116,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__4__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 3U)))));
    bufp->fullBit(oldp+117,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__4__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                       >> 3U)) | ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                                   >> 4U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                      >> 4U)))))));
    bufp->fullBit(oldp+118,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__4__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                >> 3U))));
    bufp->fullBit(oldp+119,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                   >> 4U))));
    bufp->fullBit(oldp+120,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__5__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 4U)))));
    bufp->fullBit(oldp+121,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__5__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                       >> 4U)) | ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                                   >> 5U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                      >> 5U)))))));
    bufp->fullBit(oldp+122,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__5__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                >> 4U))));
    bufp->fullBit(oldp+123,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                   >> 5U))));
    bufp->fullBit(oldp+124,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__6__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 5U)))));
    bufp->fullBit(oldp+125,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__6__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                       >> 5U)) | ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                                   >> 6U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                      >> 6U)))))));
    bufp->fullBit(oldp+126,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__6__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                >> 5U))));
    bufp->fullBit(oldp+127,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                   >> 6U))));
    bufp->fullBit(oldp+128,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__7__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 6U)))));
    bufp->fullBit(oldp+129,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__7__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                       >> 6U)) | ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                                   >> 7U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                      >> 7U)))))));
    bufp->fullBit(oldp+130,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__7__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                >> 6U))));
    bufp->fullBit(oldp+131,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                   >> 7U))));
    bufp->fullBit(oldp+132,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__8__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 7U)))));
    bufp->fullBit(oldp+133,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__8__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                       >> 7U)) | ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                                   >> 8U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                      >> 8U)))))));
    bufp->fullBit(oldp+134,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__8__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                >> 7U))));
    bufp->fullBit(oldp+135,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                   >> 8U))));
    bufp->fullBit(oldp+136,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__9__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 8U)))));
    bufp->fullBit(oldp+137,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__9__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                       >> 8U)) | ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                                   >> 9U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                      >> 9U)))))));
    bufp->fullBit(oldp+138,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__9__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                >> 8U))));
    bufp->fullBit(oldp+139,((vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                             >> 0x1fU)));
    bufp->fullIData(oldp+140,(vlSelf->top__DOT__pipline__DOT__brc__DOT__sum),32);
    bufp->fullIData(oldp+141,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry),32);
    bufp->fullBit(oldp+142,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 9U))));
    bufp->fullBit(oldp+143,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__10__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 9U)))));
    bufp->fullBit(oldp+144,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__10__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 9U)) | ((vlSelf->top__DOT__pipline__DOT__op_a 
                                                   >> 0xaU) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__pipline__DOT__op_b 
                                                      >> 0xaU)))))));
    bufp->fullBit(oldp+145,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__10__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 9U))));
    bufp->fullBit(oldp+146,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0xaU))));
    bufp->fullBit(oldp+147,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__11__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0xaU)))));
    bufp->fullBit(oldp+148,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__11__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 0xaU)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__op_a 
                                     >> 0xbU) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0xbU)))))));
    bufp->fullBit(oldp+149,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__11__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0xaU))));
    bufp->fullBit(oldp+150,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0xbU))));
    bufp->fullBit(oldp+151,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__12__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0xbU)))));
    bufp->fullBit(oldp+152,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__12__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 0xbU)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__op_a 
                                     >> 0xcU) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0xcU)))))));
    bufp->fullBit(oldp+153,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__12__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0xbU))));
    bufp->fullBit(oldp+154,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0xcU))));
    bufp->fullBit(oldp+155,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__13__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+156,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__13__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 0xcU)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__op_a 
                                     >> 0xdU) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0xdU)))))));
    bufp->fullBit(oldp+157,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__13__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0xcU))));
    bufp->fullBit(oldp+158,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0xdU))));
    bufp->fullBit(oldp+159,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__14__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+160,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__14__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 0xdU)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__op_a 
                                     >> 0xeU) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0xeU)))))));
    bufp->fullBit(oldp+161,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__14__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0xdU))));
    bufp->fullBit(oldp+162,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0xeU))));
    bufp->fullBit(oldp+163,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__15__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+164,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__15__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 0xeU)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__op_a 
                                     >> 0xfU) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0xfU)))))));
    bufp->fullBit(oldp+165,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__15__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0xeU))));
    bufp->fullBit(oldp+166,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0xfU))));
    bufp->fullBit(oldp+167,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__16__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0xfU)))));
    bufp->fullBit(oldp+168,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__16__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 0xfU)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__op_a 
                                     >> 0x10U) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0x10U)))))));
    bufp->fullBit(oldp+169,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__16__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0xfU))));
    bufp->fullBit(oldp+170,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x10U))));
    bufp->fullBit(oldp+171,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__17__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x10U)))));
    bufp->fullBit(oldp+172,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__17__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 0x10U)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__op_a 
                                     >> 0x11U) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0x11U)))))));
    bufp->fullBit(oldp+173,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__17__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0x10U))));
    bufp->fullBit(oldp+174,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x11U))));
    bufp->fullBit(oldp+175,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__18__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x11U)))));
    bufp->fullBit(oldp+176,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__18__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 0x11U)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__op_a 
                                     >> 0x12U) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0x12U)))))));
    bufp->fullBit(oldp+177,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__18__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0x11U))));
    bufp->fullBit(oldp+178,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x12U))));
    bufp->fullBit(oldp+179,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__19__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x12U)))));
    bufp->fullBit(oldp+180,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__19__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 0x12U)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__op_a 
                                     >> 0x13U) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0x13U)))))));
    bufp->fullBit(oldp+181,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__19__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0x12U))));
    bufp->fullBit(oldp+182,((1U & vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry)));
    bufp->fullBit(oldp+183,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__1__KET____DOT__adder__DOT__w1) 
                                   ^ vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry))));
    bufp->fullBit(oldp+184,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__1__KET____DOT__adder__DOT__w1) 
                                    & vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry) 
                                   | ((vlSelf->top__DOT__pipline__DOT__op_a 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 1U)))))));
    bufp->fullBit(oldp+185,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__1__KET____DOT__adder__DOT__w1) 
                             & vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry)));
    bufp->fullBit(oldp+186,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x13U))));
    bufp->fullBit(oldp+187,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__20__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x13U)))));
    bufp->fullBit(oldp+188,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__20__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 0x13U)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__op_a 
                                     >> 0x14U) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0x14U)))))));
    bufp->fullBit(oldp+189,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__20__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0x13U))));
    bufp->fullBit(oldp+190,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x14U))));
    bufp->fullBit(oldp+191,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__21__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x14U)))));
    bufp->fullBit(oldp+192,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__21__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 0x14U)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__op_a 
                                     >> 0x15U) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0x15U)))))));
    bufp->fullBit(oldp+193,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__21__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0x14U))));
    bufp->fullBit(oldp+194,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x15U))));
    bufp->fullBit(oldp+195,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__22__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x15U)))));
    bufp->fullBit(oldp+196,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__22__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 0x15U)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__op_a 
                                     >> 0x16U) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0x16U)))))));
    bufp->fullBit(oldp+197,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__22__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0x15U))));
    bufp->fullBit(oldp+198,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x16U))));
    bufp->fullBit(oldp+199,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__23__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x16U)))));
    bufp->fullBit(oldp+200,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__23__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 0x16U)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__op_a 
                                     >> 0x17U) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0x17U)))))));
    bufp->fullBit(oldp+201,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__23__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0x16U))));
    bufp->fullBit(oldp+202,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x17U))));
    bufp->fullBit(oldp+203,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__24__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x17U)))));
    bufp->fullBit(oldp+204,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__24__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 0x17U)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__op_a 
                                     >> 0x18U) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0x18U)))))));
    bufp->fullBit(oldp+205,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__24__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0x17U))));
    bufp->fullBit(oldp+206,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x18U))));
    bufp->fullBit(oldp+207,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__25__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x18U)))));
    bufp->fullBit(oldp+208,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__25__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 0x18U)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__op_a 
                                     >> 0x19U) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0x19U)))))));
    bufp->fullBit(oldp+209,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__25__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0x18U))));
    bufp->fullBit(oldp+210,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x19U))));
    bufp->fullBit(oldp+211,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__26__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+212,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__26__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 0x19U)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__op_a 
                                     >> 0x1aU) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0x1aU)))))));
    bufp->fullBit(oldp+213,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__26__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0x19U))));
    bufp->fullBit(oldp+214,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+215,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__27__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x1aU)))));
    bufp->fullBit(oldp+216,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__27__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 0x1aU)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__op_a 
                                     >> 0x1bU) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0x1bU)))))));
    bufp->fullBit(oldp+217,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__27__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0x1aU))));
    bufp->fullBit(oldp+218,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+219,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__28__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x1bU)))));
    bufp->fullBit(oldp+220,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__28__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 0x1bU)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__op_a 
                                     >> 0x1cU) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0x1cU)))))));
    bufp->fullBit(oldp+221,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__28__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0x1bU))));
    bufp->fullBit(oldp+222,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+223,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__29__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x1cU)))));
    bufp->fullBit(oldp+224,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__29__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 0x1cU)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__op_a 
                                     >> 0x1dU) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0x1dU)))))));
    bufp->fullBit(oldp+225,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__29__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0x1cU))));
    bufp->fullBit(oldp+226,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 1U))));
    bufp->fullBit(oldp+227,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__2__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 1U)))));
    bufp->fullBit(oldp+228,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__2__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 1U)) | ((vlSelf->top__DOT__pipline__DOT__op_a 
                                                   >> 2U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__pipline__DOT__op_b 
                                                      >> 2U)))))));
    bufp->fullBit(oldp+229,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__2__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 1U))));
    bufp->fullBit(oldp+230,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+231,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__30__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x1dU)))));
    bufp->fullBit(oldp+232,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__30__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 0x1dU)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__op_a 
                                     >> 0x1eU) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0x1eU)))))));
    bufp->fullBit(oldp+233,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__30__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0x1dU))));
    bufp->fullBit(oldp+234,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+235,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__31__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x1eU)))));
    bufp->fullBit(oldp+236,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__31__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 0x1eU)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__op_a 
                                     >> 0x1fU) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0x1fU)))))));
    bufp->fullBit(oldp+237,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__31__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0x1eU))));
    bufp->fullBit(oldp+238,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 2U))));
    bufp->fullBit(oldp+239,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__3__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 2U)))));
    bufp->fullBit(oldp+240,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__3__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 2U)) | ((vlSelf->top__DOT__pipline__DOT__op_a 
                                                   >> 3U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__pipline__DOT__op_b 
                                                      >> 3U)))))));
    bufp->fullBit(oldp+241,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__3__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 2U))));
    bufp->fullBit(oldp+242,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 3U))));
    bufp->fullBit(oldp+243,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__4__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 3U)))));
    bufp->fullBit(oldp+244,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__4__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 3U)) | ((vlSelf->top__DOT__pipline__DOT__op_a 
                                                   >> 4U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__pipline__DOT__op_b 
                                                      >> 4U)))))));
    bufp->fullBit(oldp+245,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__4__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 3U))));
    bufp->fullBit(oldp+246,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 4U))));
    bufp->fullBit(oldp+247,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__5__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 4U)))));
    bufp->fullBit(oldp+248,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__5__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 4U)) | ((vlSelf->top__DOT__pipline__DOT__op_a 
                                                   >> 5U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__pipline__DOT__op_b 
                                                      >> 5U)))))));
    bufp->fullBit(oldp+249,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__5__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 4U))));
    bufp->fullBit(oldp+250,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 5U))));
    bufp->fullBit(oldp+251,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__6__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 5U)))));
    bufp->fullBit(oldp+252,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__6__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 5U)) | ((vlSelf->top__DOT__pipline__DOT__op_a 
                                                   >> 6U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__pipline__DOT__op_b 
                                                      >> 6U)))))));
    bufp->fullBit(oldp+253,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__6__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 5U))));
    bufp->fullBit(oldp+254,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 6U))));
    bufp->fullBit(oldp+255,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__7__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 6U)))));
    bufp->fullBit(oldp+256,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__7__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 6U)) | ((vlSelf->top__DOT__pipline__DOT__op_a 
                                                   >> 7U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__pipline__DOT__op_b 
                                                      >> 7U)))))));
    bufp->fullBit(oldp+257,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__7__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 6U))));
    bufp->fullBit(oldp+258,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 7U))));
    bufp->fullBit(oldp+259,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__8__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 7U)))));
    bufp->fullBit(oldp+260,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__8__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 7U)) | ((vlSelf->top__DOT__pipline__DOT__op_a 
                                                   >> 8U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__pipline__DOT__op_b 
                                                      >> 8U)))))));
    bufp->fullBit(oldp+261,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__8__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 7U))));
    bufp->fullBit(oldp+262,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 8U))));
    bufp->fullBit(oldp+263,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__9__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 8U)))));
    bufp->fullBit(oldp+264,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__9__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 8U)) | ((vlSelf->top__DOT__pipline__DOT__op_a 
                                                   >> 9U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__pipline__DOT__op_b 
                                                      >> 9U)))))));
    bufp->fullBit(oldp+265,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__9__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 8U))));
    bufp->fullIData(oldp+266,(((IData)(4U) + vlSelf->top__DOT__pipline__DOT__pcF)),32);
    bufp->fullIData(oldp+267,(vlSelf->top__DOT__pipline__DOT__pcF),32);
    bufp->fullIData(oldp+268,(vlSelf->top__DOT__pipline__DOT__pcD),32);
    bufp->fullIData(oldp+269,(vlSelf->top__DOT__pipline__DOT__pc_nxtD),32);
    bufp->fullIData(oldp+270,(vlSelf->top__DOT__pipline__DOT__instrD),32);
    bufp->fullBit(oldp+271,(vlSelf->top__DOT__pipline__DOT__stallF));
    bufp->fullBit(oldp+272,(vlSelf->top__DOT__pipline__DOT__stallD));
    bufp->fullBit(oldp+273,(vlSelf->top__DOT__pipline__DOT__flushM));
    bufp->fullBit(oldp+274,(vlSelf->top__DOT__pipline__DOT__rd_wrenD));
    bufp->fullBit(oldp+275,(vlSelf->top__DOT__pipline__DOT__br_unsignedD));
    bufp->fullBit(oldp+276,((1U & ((0x40U & vlSelf->top__DOT__pipline__DOT__instrD)
                                    ? (IData)(((0x20U 
                                                == 
                                                (0x30U 
                                                 & vlSelf->top__DOT__pipline__DOT__instrD)) 
                                               & ((8U 
                                                   & vlSelf->top__DOT__pipline__DOT__instrD)
                                                   ? (IData)(
                                                             (7U 
                                                              == 
                                                              (7U 
                                                               & vlSelf->top__DOT__pipline__DOT__instrD)))
                                                   : (IData)(
                                                             (3U 
                                                              == 
                                                              (7U 
                                                               & vlSelf->top__DOT__pipline__DOT__instrD))))))
                                    : (IData)((0x17U 
                                               == (0x3fU 
                                                   & vlSelf->top__DOT__pipline__DOT__instrD)))))));
    bufp->fullBit(oldp+277,(vlSelf->top__DOT__pipline__DOT__op_b_selD));
    bufp->fullCData(oldp+278,(vlSelf->top__DOT__pipline__DOT__alu_opD),4);
    bufp->fullBit(oldp+279,((IData)(((0x23U == (0x7fU 
                                                & vlSelf->top__DOT__pipline__DOT__instrD)) 
                                     & ((0U == (7U 
                                                & (vlSelf->top__DOT__pipline__DOT__instrD 
                                                   >> 0xcU))) 
                                        | ((1U == (7U 
                                                   & (vlSelf->top__DOT__pipline__DOT__instrD 
                                                      >> 0xcU))) 
                                           | (2U == 
                                              (7U & 
                                               (vlSelf->top__DOT__pipline__DOT__instrD 
                                                >> 0xcU)))))))));
    bufp->fullCData(oldp+280,(vlSelf->top__DOT__pipline__DOT__wb_selD),2);
    bufp->fullCData(oldp+281,(((0x40U & vlSelf->top__DOT__pipline__DOT__instrD)
                                ? 0U : ((0x20U & vlSelf->top__DOT__pipline__DOT__instrD)
                                         ? 0U : ((0x10U 
                                                  & vlSelf->top__DOT__pipline__DOT__instrD)
                                                  ? 0U
                                                  : 
                                                 ((8U 
                                                   & vlSelf->top__DOT__pipline__DOT__instrD)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSelf->top__DOT__pipline__DOT__instrD)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & vlSelf->top__DOT__pipline__DOT__instrD)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->top__DOT__pipline__DOT__instrD)
                                                      ? 
                                                     ((0x4000U 
                                                       & vlSelf->top__DOT__pipline__DOT__instrD)
                                                       ? 
                                                      ((0x2000U 
                                                        & vlSelf->top__DOT__pipline__DOT__instrD)
                                                        ? 0U
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelf->top__DOT__pipline__DOT__instrD)
                                                         ? 4U
                                                         : 3U))
                                                       : 
                                                      ((0x2000U 
                                                        & vlSelf->top__DOT__pipline__DOT__instrD)
                                                        ? 
                                                       ((0x1000U 
                                                         & vlSelf->top__DOT__pipline__DOT__instrD)
                                                         ? 0U
                                                         : 5U)
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelf->top__DOT__pipline__DOT__instrD)
                                                         ? 2U
                                                         : 1U)))
                                                      : 0U)
                                                     : 0U))))))),3);
    bufp->fullCData(oldp+282,(vlSelf->top__DOT__pipline__DOT__store_selD),2);
    bufp->fullIData(oldp+283,((((IData)(vlSelf->top__DOT__pipline__DOT__rd_wrenWB) 
                                & ((IData)(vlSelf->top__DOT__pipline__DOT__rdWB) 
                                   == (0x1fU & (vlSelf->top__DOT__pipline__DOT__instrD 
                                                >> 0xfU))))
                                ? vlSelf->top__DOT__pipline__DOT__wb_data
                                : vlSelf->top__DOT__pipline__DOT__regfile__DOT__register
                               [(0x1fU & (vlSelf->top__DOT__pipline__DOT__instrD 
                                          >> 0xfU))])),32);
    bufp->fullIData(oldp+284,((((IData)(vlSelf->top__DOT__pipline__DOT__rd_wrenWB) 
                                & ((IData)(vlSelf->top__DOT__pipline__DOT__rdWB) 
                                   == (0x1fU & (vlSelf->top__DOT__pipline__DOT__instrD 
                                                >> 0x14U))))
                                ? vlSelf->top__DOT__pipline__DOT__wb_data
                                : vlSelf->top__DOT__pipline__DOT__regfile__DOT__register
                               [(0x1fU & (vlSelf->top__DOT__pipline__DOT__instrD 
                                          >> 0x14U))])),32);
    bufp->fullBit(oldp+285,(vlSelf->top__DOT__pipline__DOT__rd_wrenWB));
    bufp->fullCData(oldp+286,(vlSelf->top__DOT__pipline__DOT__rdWB),5);
    bufp->fullIData(oldp+287,(vlSelf->top__DOT__pipline__DOT__wb_data),32);
    bufp->fullIData(oldp+288,(vlSelf->top__DOT__pipline__DOT__immD),32);
    bufp->fullBit(oldp+289,(vlSelf->top__DOT__pipline__DOT__stallE));
    bufp->fullBit(oldp+290,(vlSelf->top__DOT__pipline__DOT__insn_vld));
    bufp->fullBit(oldp+291,(vlSelf->top__DOT__pipline__DOT__insn_vldE));
    bufp->fullBit(oldp+292,(vlSelf->top__DOT__pipline__DOT__insn_vldM));
    bufp->fullBit(oldp+293,(vlSelf->top__DOT__pipline__DOT__insn_vldWB));
    bufp->fullBit(oldp+294,(vlSelf->top__DOT__pipline__DOT__rd_wrenE));
    bufp->fullCData(oldp+295,(vlSelf->top__DOT__pipline__DOT__wb_selE),2);
    bufp->fullBit(oldp+296,(vlSelf->top__DOT__pipline__DOT__mem_wrenE));
    bufp->fullCData(oldp+297,(vlSelf->top__DOT__pipline__DOT__alu_opE),4);
    bufp->fullBit(oldp+298,(vlSelf->top__DOT__pipline__DOT__op_a_selE));
    bufp->fullBit(oldp+299,(vlSelf->top__DOT__pipline__DOT__op_b_selE));
    bufp->fullBit(oldp+300,(vlSelf->top__DOT__pipline__DOT__br_unsignedE));
    bufp->fullCData(oldp+301,(vlSelf->top__DOT__pipline__DOT__load_selE),3);
    bufp->fullCData(oldp+302,(vlSelf->top__DOT__pipline__DOT__store_selE),2);
    bufp->fullIData(oldp+303,(vlSelf->top__DOT__pipline__DOT__pcE),32);
    bufp->fullIData(oldp+304,(vlSelf->top__DOT__pipline__DOT__pc_nxtE),32);
    bufp->fullIData(oldp+305,(vlSelf->top__DOT__pipline__DOT__o_rs1_dataE),32);
    bufp->fullIData(oldp+306,(vlSelf->top__DOT__pipline__DOT__o_rs2_dataE),32);
    bufp->fullIData(oldp+307,(vlSelf->top__DOT__pipline__DOT__immE),32);
    bufp->fullCData(oldp+308,(vlSelf->top__DOT__pipline__DOT__rdE),5);
    bufp->fullCData(oldp+309,(vlSelf->top__DOT__pipline__DOT__rs1E),5);
    bufp->fullCData(oldp+310,(vlSelf->top__DOT__pipline__DOT__rs2E),5);
    bufp->fullCData(oldp+311,(vlSelf->top__DOT__pipline__DOT__opcodeE),7);
    bufp->fullIData(oldp+312,(vlSelf->top__DOT__pipline__DOT__instrE),32);
    bufp->fullIData(oldp+313,(vlSelf->top__DOT__pipline__DOT__op_a),32);
    bufp->fullIData(oldp+314,(vlSelf->top__DOT__pipline__DOT__op_b),32);
    bufp->fullCData(oldp+315,(vlSelf->top__DOT__pipline__DOT__forw_a_sel),2);
    bufp->fullCData(oldp+316,(vlSelf->top__DOT__pipline__DOT__forw_b_sel),2);
    bufp->fullCData(oldp+317,(vlSelf->top__DOT__pipline__DOT__opcodeM),7);
    bufp->fullCData(oldp+318,(vlSelf->top__DOT__pipline__DOT__load_selM),3);
    bufp->fullCData(oldp+319,(vlSelf->top__DOT__pipline__DOT__store_selM),2);
    bufp->fullBit(oldp+320,(vlSelf->top__DOT__pipline__DOT__rd_wrenM));
    bufp->fullCData(oldp+321,(vlSelf->top__DOT__pipline__DOT__wb_selM),2);
    bufp->fullBit(oldp+322,(vlSelf->top__DOT__pipline__DOT__mem_wrenM));
    bufp->fullIData(oldp+323,(vlSelf->top__DOT__pipline__DOT__alu_dataM),32);
    bufp->fullIData(oldp+324,(vlSelf->top__DOT__pipline__DOT__st_dataM),32);
    bufp->fullIData(oldp+325,(vlSelf->top__DOT__pipline__DOT__pc_nxtM),32);
    bufp->fullCData(oldp+326,(vlSelf->top__DOT__pipline__DOT__rdM),5);
    bufp->fullIData(oldp+327,(vlSelf->top__DOT__pipline__DOT__pcM),32);
    bufp->fullIData(oldp+328,(vlSelf->top__DOT__pipline__DOT__operand_a),32);
    bufp->fullIData(oldp+329,(vlSelf->top__DOT__pipline__DOT__operand_b),32);
    bufp->fullBit(oldp+330,((vlSelf->top__DOT__pipline__DOT__op_a 
                             == vlSelf->top__DOT__pipline__DOT__op_b)));
    bufp->fullIData(oldp+331,(vlSelf->top__DOT__pipline__DOT__pc_nxtWB),32);
    bufp->fullIData(oldp+332,(vlSelf->top__DOT__pipline__DOT__ld_dataWB),32);
    bufp->fullIData(oldp+333,(vlSelf->top__DOT__pipline__DOT__alu_dataWB),32);
    bufp->fullCData(oldp+334,(vlSelf->top__DOT__pipline__DOT__wb_selWB),2);
    bufp->fullIData(oldp+335,(vlSelf->top__DOT__pipline__DOT__pcWB),32);
    bufp->fullCData(oldp+336,((0x1fU & (vlSelf->top__DOT__pipline__DOT__instrD 
                                        >> 7U))),5);
    bufp->fullCData(oldp+337,((0x1fU & (vlSelf->top__DOT__pipline__DOT__instrD 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+338,((0x1fU & (vlSelf->top__DOT__pipline__DOT__instrD 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+339,((0x7fU & vlSelf->top__DOT__pipline__DOT__instrD)),7);
    bufp->fullIData(oldp+340,((~ vlSelf->top__DOT__pipline__DOT__operand_b)),32);
    bufp->fullBit(oldp+341,((1U & vlSelf->top__DOT__pipline__DOT__operand_a)));
    bufp->fullBit(oldp+342,((1U & (~ vlSelf->top__DOT__pipline__DOT__operand_b))));
    bufp->fullBit(oldp+343,((1U & (~ (IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__adder0__DOT__w1)))));
    bufp->fullBit(oldp+344,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__adder0__DOT__w1) 
                                   | (vlSelf->top__DOT__pipline__DOT__operand_a 
                                      & (~ vlSelf->top__DOT__pipline__DOT__operand_b))))));
    bufp->fullBit(oldp+345,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__adder0__DOT__w1));
    bufp->fullBit(oldp+346,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   & (~ vlSelf->top__DOT__pipline__DOT__operand_b)))));
    bufp->fullBit(oldp+347,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 0xaU))));
    bufp->fullBit(oldp+348,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0xaU)))));
    bufp->fullBit(oldp+349,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__10__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+350,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0xaU) & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+351,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 0xbU))));
    bufp->fullBit(oldp+352,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0xbU)))));
    bufp->fullBit(oldp+353,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__11__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+354,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0xbU) & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+355,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 0xcU))));
    bufp->fullBit(oldp+356,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+357,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__12__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+358,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0xcU) & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+359,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 0xdU))));
    bufp->fullBit(oldp+360,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+361,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__13__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+362,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0xdU) & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+363,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 0xeU))));
    bufp->fullBit(oldp+364,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+365,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__14__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+366,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0xeU) & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+367,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 0xfU))));
    bufp->fullBit(oldp+368,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0xfU)))));
    bufp->fullBit(oldp+369,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__15__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+370,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0xfU) & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                   >> 0xfU))))));
    bufp->fullBit(oldp+371,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 0x10U))));
    bufp->fullBit(oldp+372,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0x10U)))));
    bufp->fullBit(oldp+373,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__16__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+374,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x10U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x10U))))));
    bufp->fullBit(oldp+375,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 0x11U))));
    bufp->fullBit(oldp+376,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0x11U)))));
    bufp->fullBit(oldp+377,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__17__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+378,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x11U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x11U))))));
    bufp->fullBit(oldp+379,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 0x12U))));
    bufp->fullBit(oldp+380,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0x12U)))));
    bufp->fullBit(oldp+381,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__18__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+382,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x12U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x12U))))));
    bufp->fullBit(oldp+383,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 0x13U))));
    bufp->fullBit(oldp+384,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0x13U)))));
    bufp->fullBit(oldp+385,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__19__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+386,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x13U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x13U))))));
    bufp->fullBit(oldp+387,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 1U))));
    bufp->fullBit(oldp+388,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 1U)))));
    bufp->fullBit(oldp+389,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__1__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+390,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 1U) & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                 >> 1U))))));
    bufp->fullBit(oldp+391,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 0x14U))));
    bufp->fullBit(oldp+392,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0x14U)))));
    bufp->fullBit(oldp+393,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__20__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+394,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x14U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x14U))))));
    bufp->fullBit(oldp+395,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 0x15U))));
    bufp->fullBit(oldp+396,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0x15U)))));
    bufp->fullBit(oldp+397,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__21__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+398,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x15U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x15U))))));
    bufp->fullBit(oldp+399,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 0x16U))));
    bufp->fullBit(oldp+400,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0x16U)))));
    bufp->fullBit(oldp+401,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__22__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+402,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x16U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x16U))))));
    bufp->fullBit(oldp+403,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 0x17U))));
    bufp->fullBit(oldp+404,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0x17U)))));
    bufp->fullBit(oldp+405,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__23__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+406,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x17U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x17U))))));
    bufp->fullBit(oldp+407,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 0x18U))));
    bufp->fullBit(oldp+408,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0x18U)))));
    bufp->fullBit(oldp+409,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__24__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+410,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x18U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x18U))))));
    bufp->fullBit(oldp+411,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 0x19U))));
    bufp->fullBit(oldp+412,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+413,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__25__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+414,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x19U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x19U))))));
    bufp->fullBit(oldp+415,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+416,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0x1aU)))));
    bufp->fullBit(oldp+417,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__26__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+418,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x1aU) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x1aU))))));
    bufp->fullBit(oldp+419,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+420,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0x1bU)))));
    bufp->fullBit(oldp+421,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__27__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+422,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x1bU) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x1bU))))));
    bufp->fullBit(oldp+423,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+424,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0x1cU)))));
    bufp->fullBit(oldp+425,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__28__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+426,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x1cU) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x1cU))))));
    bufp->fullBit(oldp+427,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+428,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0x1dU)))));
    bufp->fullBit(oldp+429,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__29__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+430,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x1dU) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x1dU))))));
    bufp->fullBit(oldp+431,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 2U))));
    bufp->fullBit(oldp+432,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 2U)))));
    bufp->fullBit(oldp+433,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__2__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+434,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 2U) & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                 >> 2U))))));
    bufp->fullBit(oldp+435,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+436,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0x1eU)))));
    bufp->fullBit(oldp+437,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__30__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+438,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x1eU) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x1eU))))));
    bufp->fullBit(oldp+439,((vlSelf->top__DOT__pipline__DOT__operand_a 
                             >> 0x1fU)));
    bufp->fullBit(oldp+440,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0x1fU)))));
    bufp->fullBit(oldp+441,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__31__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+442,(((vlSelf->top__DOT__pipline__DOT__operand_a 
                              >> 0x1fU) & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                              >> 0x1fU)))));
    bufp->fullBit(oldp+443,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 3U))));
    bufp->fullBit(oldp+444,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 3U)))));
    bufp->fullBit(oldp+445,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__3__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+446,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 3U) & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                 >> 3U))))));
    bufp->fullBit(oldp+447,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 4U))));
    bufp->fullBit(oldp+448,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 4U)))));
    bufp->fullBit(oldp+449,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__4__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+450,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 4U) & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                 >> 4U))))));
    bufp->fullBit(oldp+451,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 5U))));
    bufp->fullBit(oldp+452,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 5U)))));
    bufp->fullBit(oldp+453,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__5__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+454,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 5U) & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                 >> 5U))))));
    bufp->fullBit(oldp+455,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 6U))));
    bufp->fullBit(oldp+456,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 6U)))));
    bufp->fullBit(oldp+457,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__6__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+458,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 6U) & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                 >> 6U))))));
    bufp->fullBit(oldp+459,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 7U))));
    bufp->fullBit(oldp+460,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 7U)))));
    bufp->fullBit(oldp+461,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__7__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+462,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 7U) & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                 >> 7U))))));
    bufp->fullBit(oldp+463,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 8U))));
    bufp->fullBit(oldp+464,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 8U)))));
    bufp->fullBit(oldp+465,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__8__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+466,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 8U) & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                 >> 8U))))));
    bufp->fullBit(oldp+467,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 9U))));
    bufp->fullBit(oldp+468,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 9U)))));
    bufp->fullBit(oldp+469,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__9__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+470,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 9U) & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                 >> 9U))))));
    bufp->fullIData(oldp+471,((~ vlSelf->top__DOT__pipline__DOT__op_b)),32);
    bufp->fullBit(oldp+472,((1U & vlSelf->top__DOT__pipline__DOT__op_a)));
    bufp->fullBit(oldp+473,((1U & (~ vlSelf->top__DOT__pipline__DOT__op_b))));
    bufp->fullBit(oldp+474,((1U & (~ (IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__adder0__DOT__w1)))));
    bufp->fullBit(oldp+475,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__adder0__DOT__w1) 
                                   | (vlSelf->top__DOT__pipline__DOT__op_a 
                                      & (~ vlSelf->top__DOT__pipline__DOT__op_b))))));
    bufp->fullBit(oldp+476,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__adder0__DOT__w1));
    bufp->fullBit(oldp+477,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   & (~ vlSelf->top__DOT__pipline__DOT__op_b)))));
    bufp->fullBit(oldp+478,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 0xaU))));
    bufp->fullBit(oldp+479,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0xaU)))));
    bufp->fullBit(oldp+480,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__10__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+481,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 0xaU) & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+482,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 0xbU))));
    bufp->fullBit(oldp+483,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0xbU)))));
    bufp->fullBit(oldp+484,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__11__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+485,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 0xbU) & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+486,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 0xcU))));
    bufp->fullBit(oldp+487,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+488,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__12__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+489,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 0xcU) & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+490,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 0xdU))));
    bufp->fullBit(oldp+491,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+492,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__13__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+493,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 0xdU) & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+494,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 0xeU))));
    bufp->fullBit(oldp+495,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+496,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__14__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+497,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 0xeU) & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+498,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 0xfU))));
    bufp->fullBit(oldp+499,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0xfU)))));
    bufp->fullBit(oldp+500,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__15__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+501,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 0xfU) & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0xfU))))));
    bufp->fullBit(oldp+502,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 0x10U))));
    bufp->fullBit(oldp+503,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0x10U)))));
    bufp->fullBit(oldp+504,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__16__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+505,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 0x10U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0x10U))))));
    bufp->fullBit(oldp+506,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 0x11U))));
    bufp->fullBit(oldp+507,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0x11U)))));
    bufp->fullBit(oldp+508,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__17__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+509,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 0x11U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0x11U))))));
    bufp->fullBit(oldp+510,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 0x12U))));
    bufp->fullBit(oldp+511,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0x12U)))));
    bufp->fullBit(oldp+512,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__18__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+513,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 0x12U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0x12U))))));
    bufp->fullBit(oldp+514,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 0x13U))));
    bufp->fullBit(oldp+515,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0x13U)))));
    bufp->fullBit(oldp+516,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__19__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+517,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 0x13U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0x13U))))));
    bufp->fullBit(oldp+518,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 1U))));
    bufp->fullBit(oldp+519,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 1U)))));
    bufp->fullBit(oldp+520,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__1__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+521,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 1U) & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                                 >> 1U))))));
    bufp->fullBit(oldp+522,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 0x14U))));
    bufp->fullBit(oldp+523,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0x14U)))));
    bufp->fullBit(oldp+524,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__20__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+525,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 0x14U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0x14U))))));
    bufp->fullBit(oldp+526,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 0x15U))));
    bufp->fullBit(oldp+527,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0x15U)))));
    bufp->fullBit(oldp+528,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__21__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+529,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 0x15U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0x15U))))));
    bufp->fullBit(oldp+530,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 0x16U))));
    bufp->fullBit(oldp+531,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0x16U)))));
    bufp->fullBit(oldp+532,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__22__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+533,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 0x16U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0x16U))))));
    bufp->fullBit(oldp+534,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 0x17U))));
    bufp->fullBit(oldp+535,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0x17U)))));
    bufp->fullBit(oldp+536,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__23__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+537,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 0x17U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0x17U))))));
    bufp->fullBit(oldp+538,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 0x18U))));
    bufp->fullBit(oldp+539,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0x18U)))));
    bufp->fullBit(oldp+540,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__24__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+541,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 0x18U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0x18U))))));
    bufp->fullBit(oldp+542,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 0x19U))));
    bufp->fullBit(oldp+543,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+544,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__25__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+545,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 0x19U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0x19U))))));
    bufp->fullBit(oldp+546,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+547,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0x1aU)))));
    bufp->fullBit(oldp+548,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__26__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+549,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 0x1aU) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0x1aU))))));
    bufp->fullBit(oldp+550,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+551,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0x1bU)))));
    bufp->fullBit(oldp+552,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__27__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+553,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 0x1bU) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0x1bU))))));
    bufp->fullBit(oldp+554,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+555,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0x1cU)))));
    bufp->fullBit(oldp+556,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__28__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+557,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 0x1cU) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0x1cU))))));
    bufp->fullBit(oldp+558,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+559,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0x1dU)))));
    bufp->fullBit(oldp+560,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__29__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+561,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 0x1dU) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0x1dU))))));
    bufp->fullBit(oldp+562,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 2U))));
    bufp->fullBit(oldp+563,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 2U)))));
    bufp->fullBit(oldp+564,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__2__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+565,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 2U) & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                                 >> 2U))))));
    bufp->fullBit(oldp+566,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+567,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0x1eU)))));
    bufp->fullBit(oldp+568,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__30__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+569,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 0x1eU) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0x1eU))))));
    bufp->fullBit(oldp+570,((vlSelf->top__DOT__pipline__DOT__op_a 
                             >> 0x1fU)));
    bufp->fullBit(oldp+571,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0x1fU)))));
    bufp->fullBit(oldp+572,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__31__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+573,(((vlSelf->top__DOT__pipline__DOT__op_a 
                              >> 0x1fU) & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                              >> 0x1fU)))));
    bufp->fullBit(oldp+574,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 3U))));
    bufp->fullBit(oldp+575,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 3U)))));
    bufp->fullBit(oldp+576,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__3__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+577,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 3U) & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                                 >> 3U))))));
    bufp->fullBit(oldp+578,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 4U))));
    bufp->fullBit(oldp+579,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 4U)))));
    bufp->fullBit(oldp+580,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__4__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+581,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 4U) & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                                 >> 4U))))));
    bufp->fullBit(oldp+582,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 5U))));
    bufp->fullBit(oldp+583,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 5U)))));
    bufp->fullBit(oldp+584,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__5__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+585,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 5U) & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                                 >> 5U))))));
    bufp->fullBit(oldp+586,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 6U))));
    bufp->fullBit(oldp+587,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 6U)))));
    bufp->fullBit(oldp+588,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__6__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+589,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 6U) & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                                 >> 6U))))));
    bufp->fullBit(oldp+590,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 7U))));
    bufp->fullBit(oldp+591,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 7U)))));
    bufp->fullBit(oldp+592,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__7__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+593,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 7U) & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                                 >> 7U))))));
    bufp->fullBit(oldp+594,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 8U))));
    bufp->fullBit(oldp+595,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 8U)))));
    bufp->fullBit(oldp+596,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__8__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+597,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 8U) & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                                 >> 8U))))));
    bufp->fullBit(oldp+598,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 9U))));
    bufp->fullBit(oldp+599,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 9U)))));
    bufp->fullBit(oldp+600,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__9__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+601,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 9U) & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                                 >> 9U))))));
    bufp->fullCData(oldp+602,((7U & (vlSelf->top__DOT__pipline__DOT__instrE 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+603,((7U & (vlSelf->top__DOT__pipline__DOT__instrD 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+604,((vlSelf->top__DOT__pipline__DOT__instrD 
                               >> 0x19U)),7);
    bufp->fullSData(oldp+605,((0x1fffU & vlSelf->top__DOT__pipline__DOT__alu_dataM)),13);
    bufp->fullCData(oldp+606,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__hex_reg[0]),8);
    bufp->fullCData(oldp+607,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__hex_reg[1]),8);
    bufp->fullCData(oldp+608,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__hex_reg[2]),8);
    bufp->fullCData(oldp+609,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__hex_reg[3]),8);
    bufp->fullCData(oldp+610,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__hex_reg[4]),8);
    bufp->fullCData(oldp+611,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__hex_reg[5]),8);
    bufp->fullCData(oldp+612,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__hex_reg[6]),8);
    bufp->fullCData(oldp+613,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__hex_reg[7]),8);
    bufp->fullCData(oldp+614,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__led_r_reg[0]),8);
    bufp->fullCData(oldp+615,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__led_r_reg[1]),8);
    bufp->fullCData(oldp+616,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__led_r_reg[2]),8);
    bufp->fullCData(oldp+617,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__led_r_reg[3]),8);
    bufp->fullCData(oldp+618,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__led_g_reg),8);
    bufp->fullCData(oldp+619,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__lcd_reg[0]),8);
    bufp->fullCData(oldp+620,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__lcd_reg[1]),8);
    bufp->fullCData(oldp+621,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__lcd_reg[2]),8);
    bufp->fullCData(oldp+622,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__lcd_reg[3]),8);
    bufp->fullIData(oldp+623,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+624,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[0]),32);
    bufp->fullIData(oldp+625,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[1]),32);
    bufp->fullIData(oldp+626,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[2]),32);
    bufp->fullIData(oldp+627,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[3]),32);
    bufp->fullIData(oldp+628,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[4]),32);
    bufp->fullIData(oldp+629,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[5]),32);
    bufp->fullIData(oldp+630,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[6]),32);
    bufp->fullIData(oldp+631,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[7]),32);
    bufp->fullIData(oldp+632,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[8]),32);
    bufp->fullIData(oldp+633,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[9]),32);
    bufp->fullIData(oldp+634,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[10]),32);
    bufp->fullIData(oldp+635,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[11]),32);
    bufp->fullIData(oldp+636,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[12]),32);
    bufp->fullIData(oldp+637,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[13]),32);
    bufp->fullIData(oldp+638,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[14]),32);
    bufp->fullIData(oldp+639,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[15]),32);
    bufp->fullIData(oldp+640,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[16]),32);
    bufp->fullIData(oldp+641,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[17]),32);
    bufp->fullIData(oldp+642,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[18]),32);
    bufp->fullIData(oldp+643,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[19]),32);
    bufp->fullIData(oldp+644,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[20]),32);
    bufp->fullIData(oldp+645,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[21]),32);
    bufp->fullIData(oldp+646,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[22]),32);
    bufp->fullIData(oldp+647,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[23]),32);
    bufp->fullIData(oldp+648,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[24]),32);
    bufp->fullIData(oldp+649,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[25]),32);
    bufp->fullIData(oldp+650,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[26]),32);
    bufp->fullIData(oldp+651,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[27]),32);
    bufp->fullIData(oldp+652,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[28]),32);
    bufp->fullIData(oldp+653,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[29]),32);
    bufp->fullIData(oldp+654,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[30]),32);
    bufp->fullIData(oldp+655,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[31]),32);
    bufp->fullIData(oldp+656,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__i),32);
    bufp->fullBit(oldp+657,(vlSelf->i_clk));
    bufp->fullBit(oldp+658,(vlSelf->i_rst_n));
    bufp->fullIData(oldp+659,(vlSelf->i_io_sw),32);
    bufp->fullBit(oldp+660,(vlSelf->o_insn_vld));
    bufp->fullIData(oldp+661,(vlSelf->o_pc_debug),32);
    bufp->fullIData(oldp+662,(vlSelf->o_io_lcd),32);
    bufp->fullIData(oldp+663,(vlSelf->o_io_ledg),32);
    bufp->fullIData(oldp+664,(vlSelf->o_io_ledr),32);
    bufp->fullCData(oldp+665,(vlSelf->o_io_hex0),7);
    bufp->fullCData(oldp+666,(vlSelf->o_io_hex1),7);
    bufp->fullCData(oldp+667,(vlSelf->o_io_hex2),7);
    bufp->fullCData(oldp+668,(vlSelf->o_io_hex3),7);
    bufp->fullCData(oldp+669,(vlSelf->o_io_hex4),7);
    bufp->fullCData(oldp+670,(vlSelf->o_io_hex5),7);
    bufp->fullCData(oldp+671,(vlSelf->o_io_hex6),7);
    bufp->fullCData(oldp+672,(vlSelf->o_io_hex7),7);
    bufp->fullIData(oldp+673,(((IData)(vlSelf->i_rst_n)
                                ? vlSelf->top__DOT__pipline__DOT__imem__DOT__inst_mem
                               [(0x7ffU & (vlSelf->top__DOT__pipline__DOT__pcF 
                                           >> 2U))]
                                : 0U)),32);
    bufp->fullCData(oldp+674,((0xffU & vlSelf->i_io_sw)),8);
    bufp->fullIData(oldp+675,(0x20U),32);
    bufp->fullBit(oldp+676,(1U));
    bufp->fullCData(oldp+677,(0x33U),7);
    bufp->fullCData(oldp+678,(0x13U),7);
    bufp->fullCData(oldp+679,(0x23U),7);
    bufp->fullCData(oldp+680,(0x63U),7);
    bufp->fullCData(oldp+681,(3U),7);
    bufp->fullCData(oldp+682,(0x37U),7);
    bufp->fullCData(oldp+683,(0x17U),7);
    bufp->fullCData(oldp+684,(0x67U),7);
    bufp->fullCData(oldp+685,(0x6fU),7);
}
