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
    tracep->declBus(c+1,"instr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2,"alu_dataE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+16,"nxt_pc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+272,"pc_nxtF",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+273,"pcF",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+274,"pcD",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+275,"pc_nxtD",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+276,"instrD",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3,"br_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"stallF",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+5,"stallD",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+6,"flushM",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+7,"flushD",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+8,"flushE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+277,"rd_wrenD",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+278,"br_unsignedD",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+279,"op_a_selD",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+280,"op_b_selD",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+281,"alu_opD",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+282,"mem_wrenD",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+283,"wb_selD",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+284,"load_selD",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+285,"store_selD",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+286,"o_rs1_dataD",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+287,"o_rs2_dataD",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+288,"rd_wrenWB",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+289,"rdWB",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+290,"wb_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+291,"immD",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+9,"stallE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+292,"insn_vld",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+293,"insn_vldE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+294,"insn_vldM",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+295,"insn_vldWB",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+296,"rd_wrenE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+297,"wb_selE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+298,"mem_wrenE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+299,"alu_opE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+300,"op_a_selE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+301,"op_b_selE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+302,"br_unsignedE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+303,"load_selE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+304,"store_selE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+305,"pcE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+306,"pc_nxtE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+307,"o_rs1_dataE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+308,"o_rs2_dataE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+309,"immE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+310,"rdE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+311,"rs1E",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+312,"rs2E",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+313,"opcodeE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+314,"op_a",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+315,"op_b",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+316,"forw_a_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+317,"forw_b_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+318,"opcodeM",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+319,"load_selM",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+320,"store_selM",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+321,"rd_wrenM",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+322,"wb_selM",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+323,"mem_wrenM",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+324,"alu_dataM",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+325,"st_dataM",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+326,"pc_nxtM",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+327,"rdM",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+328,"pcM",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+10,"ld_dataM",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+329,"operand_a",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+330,"operand_b",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+17,"br_less",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+331,"br_equal",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+332,"pc_nxtWB",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+333,"ld_dataWB",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+334,"alu_dataWB",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+335,"wb_selWB",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+336,"pcWB",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("ID_IE ");
    tracep->declBit(c+657,"i_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+658,"i_rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+277,"rd_wrenD",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+283,"wb_selD",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+282,"mem_wrenD",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+281,"alu_opD",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+279,"op_a_selD",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+280,"op_b_selD",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+278,"br_unsignedD",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+284,"load_selD",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+285,"store_selD",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+274,"pcD",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+275,"pc_nxtD",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+286,"o_rs1_dataD",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+287,"o_rs2_dataD",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+291,"immD",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+337,"rdD",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+338,"rs1D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+339,"rs2D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+340,"opcodeD",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+9,"stallE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+8,"flushE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+292,"insn_vld",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+296,"rd_wrenE",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+297,"wb_selE",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+298,"mem_wrenE",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+299,"alu_opE",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+300,"op_a_selE",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+301,"op_b_selE",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+302,"br_unsignedE",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+303,"load_selE",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+304,"store_selE",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+305,"pcE",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+306,"pc_nxtE",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+307,"o_rs1_dataE",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+308,"o_rs2_dataE",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+309,"immE",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+310,"rdE",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+311,"rs1E",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+312,"rs2E",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+313,"opcodeE",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+293,"insn_vldE",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IE_IM ");
    tracep->declBit(c+657,"i_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+658,"i_rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+296,"rd_wrenE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+297,"wb_selE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+298,"mem_wrenE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2,"alu_dataE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+315,"op_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+306,"pc_nxtE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+310,"rdE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+303,"load_selE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+304,"store_selE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+313,"opcodeE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+293,"insn_vldE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+305,"pcE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+6,"flushM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+321,"rd_wrenM",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+322,"wb_selM",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+323,"mem_wrenM",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+324,"alu_dataM",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+325,"st_dataM",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+326,"pc_nxtM",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+327,"rdM",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+319,"load_selM",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+320,"store_selM",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+318,"opcodeM",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+294,"insn_vldM",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+328,"pcM",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF_ID ");
    tracep->declBit(c+657,"i_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+658,"i_rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1,"instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+273,"pcF",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+272,"pc_nxtF",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5,"stallD",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+7,"flushD",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+274,"pcD",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+275,"pc_nxtD",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+276,"instrD",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IM_IWB ");
    tracep->declBit(c+657,"i_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+658,"i_rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+321,"rd_wrenM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+322,"wb_selM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+324,"alu_dataM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+10,"ld_dataM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+326,"pc_nxtM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+327,"rdM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+294,"insn_vldM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+328,"pcM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+288,"rd_wrenWB",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+335,"wb_selWB",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+334,"alu_dataWB",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+333,"ld_dataWB",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+332,"pc_nxtWB",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+289,"rdWB",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+295,"insn_vldWB",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+336,"pcWB",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PC ");
    tracep->declBit(c+657,"i_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+658,"i_rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"stallF",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+16,"nxt_pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+273,"pcF",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("adder_four ");
    tracep->declBus(c+273,"pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+272,"pc_nxtF",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+329,"i_operand_a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+330,"i_operand_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+299,"i_alu_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+2,"o_alu_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+18,"cout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+19,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("ripple_adder ");
    tracep->declBus(c+674,"data_size",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+329,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+341,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+675,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+19,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+18,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+20,"carry",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("adder0 ");
    tracep->declBit(c+342,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+343,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+675,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+344,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+345,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+346,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+346,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+347,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[10] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+348,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+349,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+22,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+350,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+24,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+351,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[11] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+352,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+353,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+26,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+27,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+354,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+28,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+355,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[12] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+356,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+357,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+29,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+30,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+358,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+359,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[13] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+360,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+361,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+33,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+34,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+35,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+362,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+36,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+363,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[14] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+364,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+365,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+37,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+38,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+39,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+366,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+40,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+367,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[15] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+368,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+369,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+41,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+42,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+43,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+370,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+44,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+371,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[16] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+372,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+373,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+45,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+46,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+47,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+374,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+48,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+375,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[17] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+376,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+377,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+50,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+51,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+378,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+379,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[18] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+380,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+381,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+53,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+54,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+55,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+382,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+56,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+383,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[19] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+384,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+385,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+57,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+58,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+59,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+386,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+60,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+387,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+388,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+389,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+61,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+62,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+63,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+390,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+391,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[20] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+392,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+393,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+65,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+67,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+394,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+68,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+395,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[21] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+396,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+397,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+69,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+71,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+398,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+72,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+399,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[22] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+400,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+401,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+73,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+74,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+402,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+403,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[23] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+404,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+405,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+77,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+78,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+79,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+406,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+80,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+407,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[24] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+408,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+409,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+82,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+83,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+410,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+84,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+411,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[25] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+412,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+413,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+85,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+86,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+414,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+88,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+415,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[26] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+416,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+417,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+89,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+90,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+91,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+418,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+92,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+419,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[27] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+420,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+421,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+93,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+94,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+95,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+422,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+96,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+423,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[28] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+424,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+425,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+97,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+98,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+99,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+426,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+100,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+427,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[29] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+428,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+429,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+101,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+102,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+103,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+430,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+104,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+431,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+432,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+433,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+105,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+106,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+107,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+434,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+108,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+435,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[30] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+436,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+437,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+109,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+110,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+111,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+438,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+112,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+439,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[31] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+440,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+441,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+113,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+114,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+115,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+442,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+116,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+443,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+444,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+445,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+117,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+118,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+119,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+446,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+120,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+447,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[4] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+448,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+449,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+121,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+122,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+123,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+450,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+124,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+451,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[5] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+452,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+453,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+125,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+126,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+127,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+454,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+128,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+455,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[6] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+456,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+457,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+129,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+130,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+131,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+458,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+132,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+459,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[7] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+460,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+461,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+133,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+134,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+135,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+462,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+136,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+463,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[8] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+464,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+465,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+137,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+138,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+139,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+466,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+467,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[9] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+468,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+469,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+141,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+143,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+470,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+144,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+471,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("brc ");
    tracep->declBus(c+314,"i_rs1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+315,"i_rs2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+302,"i_br_un",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"o_br_less",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+331,"o_br_equal",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+145,"cout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+146,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("ripple_adder ");
    tracep->declBus(c+674,"data_size",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+314,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+472,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+675,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+146,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+145,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+147,"carry",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("adder0 ");
    tracep->declBit(c+473,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+474,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+675,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+475,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+476,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+477,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+477,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+478,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[10] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+479,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+480,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+148,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+149,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+150,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+481,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+151,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+482,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[11] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+483,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+484,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+152,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+153,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+154,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+485,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+155,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+486,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[12] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+487,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+488,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+156,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+157,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+158,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+489,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+159,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+490,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[13] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+491,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+492,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+160,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+161,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+162,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+493,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+163,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+494,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[14] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+495,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+496,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+164,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+165,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+166,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+497,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+167,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+498,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[15] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+499,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+500,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+168,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+169,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+170,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+501,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+171,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+502,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[16] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+503,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+504,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+172,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+173,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+174,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+505,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+175,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+506,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[17] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+507,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+508,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+176,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+177,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+178,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+509,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+179,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+510,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[18] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+511,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+512,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+180,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+181,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+182,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+513,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+183,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+514,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[19] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+515,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+516,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+184,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+185,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+186,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+517,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+187,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+518,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+519,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+520,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+188,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+189,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+190,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+521,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+191,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+522,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[20] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+523,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+524,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+192,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+193,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+194,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+525,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+195,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+526,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[21] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+527,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+528,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+196,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+197,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+198,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+529,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+199,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+530,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[22] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+531,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+532,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+200,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+201,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+202,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+533,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+203,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+534,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[23] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+535,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+536,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+204,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+205,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+206,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+537,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+207,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+538,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[24] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+539,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+540,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+208,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+209,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+210,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+541,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+211,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+542,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[25] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+543,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+544,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+212,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+213,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+214,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+545,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+215,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+546,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[26] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+547,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+548,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+216,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+217,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+218,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+549,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+219,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+550,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[27] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+551,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+552,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+220,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+221,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+222,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+553,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+223,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+554,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[28] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+555,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+556,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+224,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+225,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+226,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+557,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+227,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+558,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[29] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+559,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+560,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+228,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+229,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+230,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+561,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+562,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+563,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+564,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+232,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+233,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+234,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+565,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+235,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+566,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[30] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+567,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+568,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+236,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+237,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+238,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+569,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+239,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+570,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[31] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+571,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+572,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+240,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+241,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+242,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+573,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+243,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+574,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+575,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+576,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+244,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+245,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+246,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+577,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+247,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+578,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[4] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+579,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+580,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+248,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+249,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+250,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+581,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+251,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+582,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[5] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+583,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+584,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+252,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+253,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+254,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+585,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+255,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+586,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[6] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+587,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+588,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+256,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+257,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+258,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+589,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+259,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+590,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[7] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+591,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+592,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+260,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+261,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+262,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+593,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+263,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+594,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[8] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+595,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+596,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+264,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+265,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+266,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+597,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+267,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+598,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[9] ");
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+599,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+600,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+268,"Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+269,"S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+270,"Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+601,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+271,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+602,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("controlB ");
    tracep->declBus(c+1,"instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+331,"br_equal",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"br_less",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+313,"opcodeE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+3,"br_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+11,"func3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+676,"R_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+677,"I_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+678,"S_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+679,"B_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+680,"LOAD_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+681,"LUI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+682,"AUIPC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+683,"JALR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+684,"JAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("controlunit ");
    tracep->declBus(c+276,"instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+277,"rd_wren",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+278,"br_unsigned",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+279,"op_a_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+280,"op_b_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+281,"alu_op",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+282,"mem_wren",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+283,"wb_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+292,"insn_vld",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+284,"load_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+285,"store_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+340,"opcode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+603,"func3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+604,"func7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+676,"R_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+677,"I_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+678,"S_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+679,"B_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+680,"LOAD_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+681,"LUI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+682,"AUIPC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+683,"JALR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+684,"JAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("hazard_unit ");
    tracep->declBus(c+311,"rs1E",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+312,"rs2E",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+327,"rdM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+289,"rdWB",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+321,"rd_wrenM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+288,"rd_wrenWB",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+283,"wb_selD",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+297,"wb_selE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+318,"opcodeM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+313,"opcodeE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+298,"mem_wrenE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"br_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+316,"forw_a_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+317,"forw_b_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+4,"stallF",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+5,"stallD",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+7,"flushD",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+6,"flushM",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9,"stallE",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+8,"flushE",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+685,"branchE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imem ");
    tracep->declBus(c+273,"pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+658,"i_rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1,"instr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("immgen ");
    tracep->declBus(c+276,"instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+291,"imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+340,"opcode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+657,"i_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+658,"i_rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+319,"load_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+320,"store_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+324,"i_lsu_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+325,"i_st_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+323,"i_lsu_wren",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+659,"i_io_sw",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+10,"o_ld_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
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
        tracep->declBus(c+12+i*1,"sw_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    tracep->declBus(c+673,"btn_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
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
    tracep->declBus(c+2,"alu_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+272,"pc_four",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3,"br_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+16,"nxt_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_data ");
    tracep->declBus(c+332,"pc_four",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+333,"ld_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+334,"alu_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+335,"wb_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+290,"wb_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_forward_a ");
    tracep->declBus(c+307,"data1E",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+290,"wb_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+324,"alu_dataM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+316,"forw_a_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+314,"op_a",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_forward_b ");
    tracep->declBus(c+308,"data2E",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+290,"wb_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+324,"alu_dataM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+317,"forw_b_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+315,"op_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("muxa ");
    tracep->declBus(c+314,"op_a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+305,"pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+300,"op_a_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+329,"operand_a",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("muxb ");
    tracep->declBus(c+315,"op_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+309,"imm",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+301,"op_b_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+330,"operand_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBit(c+657,"i_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+658,"i_rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+338,"i_rs1_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+339,"i_rs2_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+286,"o_rs1_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+287,"o_rs2_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+289,"i_rd_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+290,"i_rd_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+288,"i_rd_wren",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
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
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__pipline__DOT__instr),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__pipline__DOT__alu_dataE),32);
    bufp->fullBit(oldp+3,(vlSelf->top__DOT__pipline__DOT__br_sel));
    bufp->fullBit(oldp+4,(vlSelf->top__DOT__pipline__DOT__stallF));
    bufp->fullBit(oldp+5,(vlSelf->top__DOT__pipline__DOT__stallD));
    bufp->fullBit(oldp+6,(vlSelf->top__DOT__pipline__DOT__flushM));
    bufp->fullBit(oldp+7,(vlSelf->top__DOT__pipline__DOT__flushD));
    bufp->fullBit(oldp+8,(vlSelf->top__DOT__pipline__DOT__flushE));
    bufp->fullBit(oldp+9,(vlSelf->top__DOT__pipline__DOT__stallE));
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__pipline__DOT__ld_dataM),32);
    bufp->fullCData(oldp+11,((7U & (vlSelf->top__DOT__pipline__DOT__instr 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__sw_reg[0]),8);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__sw_reg[1]),8);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__sw_reg[2]),8);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__sw_reg[3]),8);
    bufp->fullIData(oldp+16,(((IData)(vlSelf->top__DOT__pipline__DOT__br_sel)
                               ? vlSelf->top__DOT__pipline__DOT__alu_dataE
                               : ((IData)(4U) + vlSelf->top__DOT__pipline__DOT__pcF))),32);
    bufp->fullBit(oldp+17,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__br_unsignedE)
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
    bufp->fullBit(oldp+18,((vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                            >> 0x1fU)));
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__pipline__DOT__alu__DOT__sum),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry),32);
    bufp->fullBit(oldp+21,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 9U))));
    bufp->fullBit(oldp+22,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__10__KET____DOT__adder__DOT__w1) 
                                  ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 9U)))));
    bufp->fullBit(oldp+23,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__10__KET____DOT__adder__DOT__w1) 
                                   & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 9U)) | ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                                  >> 0xaU) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                     >> 0xaU)))))));
    bufp->fullBit(oldp+24,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__10__KET____DOT__adder__DOT__w1) 
                            & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                               >> 9U))));
    bufp->fullBit(oldp+25,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0xaU))));
    bufp->fullBit(oldp+26,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__11__KET____DOT__adder__DOT__w1) 
                                  ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0xaU)))));
    bufp->fullBit(oldp+27,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__11__KET____DOT__adder__DOT__w1) 
                                   & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0xaU)) | (
                                                   (vlSelf->top__DOT__pipline__DOT__operand_a 
                                                    >> 0xbU) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                       >> 0xbU)))))));
    bufp->fullBit(oldp+28,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__11__KET____DOT__adder__DOT__w1) 
                            & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                               >> 0xaU))));
    bufp->fullBit(oldp+29,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0xbU))));
    bufp->fullBit(oldp+30,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__12__KET____DOT__adder__DOT__w1) 
                                  ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0xbU)))));
    bufp->fullBit(oldp+31,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__12__KET____DOT__adder__DOT__w1) 
                                   & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0xbU)) | (
                                                   (vlSelf->top__DOT__pipline__DOT__operand_a 
                                                    >> 0xcU) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                       >> 0xcU)))))));
    bufp->fullBit(oldp+32,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__12__KET____DOT__adder__DOT__w1) 
                            & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                               >> 0xbU))));
    bufp->fullBit(oldp+33,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0xcU))));
    bufp->fullBit(oldp+34,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__13__KET____DOT__adder__DOT__w1) 
                                  ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0xcU)))));
    bufp->fullBit(oldp+35,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__13__KET____DOT__adder__DOT__w1) 
                                   & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0xcU)) | (
                                                   (vlSelf->top__DOT__pipline__DOT__operand_a 
                                                    >> 0xdU) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                       >> 0xdU)))))));
    bufp->fullBit(oldp+36,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__13__KET____DOT__adder__DOT__w1) 
                            & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                               >> 0xcU))));
    bufp->fullBit(oldp+37,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0xdU))));
    bufp->fullBit(oldp+38,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__14__KET____DOT__adder__DOT__w1) 
                                  ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0xdU)))));
    bufp->fullBit(oldp+39,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__14__KET____DOT__adder__DOT__w1) 
                                   & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0xdU)) | (
                                                   (vlSelf->top__DOT__pipline__DOT__operand_a 
                                                    >> 0xeU) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                       >> 0xeU)))))));
    bufp->fullBit(oldp+40,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__14__KET____DOT__adder__DOT__w1) 
                            & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                               >> 0xdU))));
    bufp->fullBit(oldp+41,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0xeU))));
    bufp->fullBit(oldp+42,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__15__KET____DOT__adder__DOT__w1) 
                                  ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0xeU)))));
    bufp->fullBit(oldp+43,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__15__KET____DOT__adder__DOT__w1) 
                                   & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0xeU)) | (
                                                   (vlSelf->top__DOT__pipline__DOT__operand_a 
                                                    >> 0xfU) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                       >> 0xfU)))))));
    bufp->fullBit(oldp+44,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__15__KET____DOT__adder__DOT__w1) 
                            & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                               >> 0xeU))));
    bufp->fullBit(oldp+45,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0xfU))));
    bufp->fullBit(oldp+46,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__16__KET____DOT__adder__DOT__w1) 
                                  ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0xfU)))));
    bufp->fullBit(oldp+47,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__16__KET____DOT__adder__DOT__w1) 
                                   & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0xfU)) | (
                                                   (vlSelf->top__DOT__pipline__DOT__operand_a 
                                                    >> 0x10U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                       >> 0x10U)))))));
    bufp->fullBit(oldp+48,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__16__KET____DOT__adder__DOT__w1) 
                            & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                               >> 0xfU))));
    bufp->fullBit(oldp+49,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0x10U))));
    bufp->fullBit(oldp+50,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__17__KET____DOT__adder__DOT__w1) 
                                  ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0x10U)))));
    bufp->fullBit(oldp+51,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__17__KET____DOT__adder__DOT__w1) 
                                   & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0x10U)) | 
                                  ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x11U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x11U)))))));
    bufp->fullBit(oldp+52,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__17__KET____DOT__adder__DOT__w1) 
                            & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                               >> 0x10U))));
    bufp->fullBit(oldp+53,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0x11U))));
    bufp->fullBit(oldp+54,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__18__KET____DOT__adder__DOT__w1) 
                                  ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0x11U)))));
    bufp->fullBit(oldp+55,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__18__KET____DOT__adder__DOT__w1) 
                                   & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0x11U)) | 
                                  ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x12U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x12U)))))));
    bufp->fullBit(oldp+56,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__18__KET____DOT__adder__DOT__w1) 
                            & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                               >> 0x11U))));
    bufp->fullBit(oldp+57,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0x12U))));
    bufp->fullBit(oldp+58,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__19__KET____DOT__adder__DOT__w1) 
                                  ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0x12U)))));
    bufp->fullBit(oldp+59,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__19__KET____DOT__adder__DOT__w1) 
                                   & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0x12U)) | 
                                  ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x13U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x13U)))))));
    bufp->fullBit(oldp+60,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__19__KET____DOT__adder__DOT__w1) 
                            & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                               >> 0x12U))));
    bufp->fullBit(oldp+61,((1U & vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry)));
    bufp->fullBit(oldp+62,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__1__KET____DOT__adder__DOT__w1) 
                                  ^ vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry))));
    bufp->fullBit(oldp+63,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__1__KET____DOT__adder__DOT__w1) 
                                   & vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry) 
                                  | ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                      >> 1U) & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                   >> 1U)))))));
    bufp->fullBit(oldp+64,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__1__KET____DOT__adder__DOT__w1) 
                            & vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry)));
    bufp->fullBit(oldp+65,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0x13U))));
    bufp->fullBit(oldp+66,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__20__KET____DOT__adder__DOT__w1) 
                                  ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0x13U)))));
    bufp->fullBit(oldp+67,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__20__KET____DOT__adder__DOT__w1) 
                                   & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0x13U)) | 
                                  ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x14U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x14U)))))));
    bufp->fullBit(oldp+68,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__20__KET____DOT__adder__DOT__w1) 
                            & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                               >> 0x13U))));
    bufp->fullBit(oldp+69,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0x14U))));
    bufp->fullBit(oldp+70,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__21__KET____DOT__adder__DOT__w1) 
                                  ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0x14U)))));
    bufp->fullBit(oldp+71,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__21__KET____DOT__adder__DOT__w1) 
                                   & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0x14U)) | 
                                  ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x15U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x15U)))))));
    bufp->fullBit(oldp+72,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__21__KET____DOT__adder__DOT__w1) 
                            & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                               >> 0x14U))));
    bufp->fullBit(oldp+73,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0x15U))));
    bufp->fullBit(oldp+74,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__22__KET____DOT__adder__DOT__w1) 
                                  ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0x15U)))));
    bufp->fullBit(oldp+75,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__22__KET____DOT__adder__DOT__w1) 
                                   & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0x15U)) | 
                                  ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x16U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x16U)))))));
    bufp->fullBit(oldp+76,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__22__KET____DOT__adder__DOT__w1) 
                            & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                               >> 0x15U))));
    bufp->fullBit(oldp+77,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0x16U))));
    bufp->fullBit(oldp+78,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__23__KET____DOT__adder__DOT__w1) 
                                  ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0x16U)))));
    bufp->fullBit(oldp+79,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__23__KET____DOT__adder__DOT__w1) 
                                   & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0x16U)) | 
                                  ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x17U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x17U)))))));
    bufp->fullBit(oldp+80,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__23__KET____DOT__adder__DOT__w1) 
                            & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                               >> 0x16U))));
    bufp->fullBit(oldp+81,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0x17U))));
    bufp->fullBit(oldp+82,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__24__KET____DOT__adder__DOT__w1) 
                                  ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0x17U)))));
    bufp->fullBit(oldp+83,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__24__KET____DOT__adder__DOT__w1) 
                                   & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0x17U)) | 
                                  ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x18U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x18U)))))));
    bufp->fullBit(oldp+84,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__24__KET____DOT__adder__DOT__w1) 
                            & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                               >> 0x17U))));
    bufp->fullBit(oldp+85,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0x18U))));
    bufp->fullBit(oldp+86,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__25__KET____DOT__adder__DOT__w1) 
                                  ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0x18U)))));
    bufp->fullBit(oldp+87,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__25__KET____DOT__adder__DOT__w1) 
                                   & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0x18U)) | 
                                  ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x19U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x19U)))))));
    bufp->fullBit(oldp+88,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__25__KET____DOT__adder__DOT__w1) 
                            & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                               >> 0x18U))));
    bufp->fullBit(oldp+89,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0x19U))));
    bufp->fullBit(oldp+90,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__26__KET____DOT__adder__DOT__w1) 
                                  ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0x19U)))));
    bufp->fullBit(oldp+91,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__26__KET____DOT__adder__DOT__w1) 
                                   & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0x19U)) | 
                                  ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x1aU) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x1aU)))))));
    bufp->fullBit(oldp+92,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__26__KET____DOT__adder__DOT__w1) 
                            & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                               >> 0x19U))));
    bufp->fullBit(oldp+93,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0x1aU))));
    bufp->fullBit(oldp+94,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__27__KET____DOT__adder__DOT__w1) 
                                  ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0x1aU)))));
    bufp->fullBit(oldp+95,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__27__KET____DOT__adder__DOT__w1) 
                                   & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0x1aU)) | 
                                  ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x1bU) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x1bU)))))));
    bufp->fullBit(oldp+96,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__27__KET____DOT__adder__DOT__w1) 
                            & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                               >> 0x1aU))));
    bufp->fullBit(oldp+97,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0x1bU))));
    bufp->fullBit(oldp+98,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__28__KET____DOT__adder__DOT__w1) 
                                  ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0x1bU)))));
    bufp->fullBit(oldp+99,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__28__KET____DOT__adder__DOT__w1) 
                                   & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0x1bU)) | 
                                  ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x1cU) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x1cU)))))));
    bufp->fullBit(oldp+100,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__28__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                >> 0x1bU))));
    bufp->fullBit(oldp+101,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+102,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__29__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0x1cU)))));
    bufp->fullBit(oldp+103,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__29__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                       >> 0x1cU)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                     >> 0x1dU) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                   >> 0x1dU)))))));
    bufp->fullBit(oldp+104,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__29__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                >> 0x1cU))));
    bufp->fullBit(oldp+105,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                   >> 1U))));
    bufp->fullBit(oldp+106,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__2__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 1U)))));
    bufp->fullBit(oldp+107,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__2__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                       >> 1U)) | ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                                   >> 2U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                      >> 2U)))))));
    bufp->fullBit(oldp+108,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__2__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                >> 1U))));
    bufp->fullBit(oldp+109,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+110,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__30__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0x1dU)))));
    bufp->fullBit(oldp+111,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__30__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                       >> 0x1dU)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                     >> 0x1eU) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                   >> 0x1eU)))))));
    bufp->fullBit(oldp+112,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__30__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                >> 0x1dU))));
    bufp->fullBit(oldp+113,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+114,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__31__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0x1eU)))));
    bufp->fullBit(oldp+115,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__31__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                       >> 0x1eU)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                     >> 0x1fU) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                   >> 0x1fU)))))));
    bufp->fullBit(oldp+116,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__31__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                >> 0x1eU))));
    bufp->fullBit(oldp+117,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                   >> 2U))));
    bufp->fullBit(oldp+118,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__3__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 2U)))));
    bufp->fullBit(oldp+119,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__3__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                       >> 2U)) | ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                                   >> 3U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                      >> 3U)))))));
    bufp->fullBit(oldp+120,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__3__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                >> 2U))));
    bufp->fullBit(oldp+121,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                   >> 3U))));
    bufp->fullBit(oldp+122,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__4__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 3U)))));
    bufp->fullBit(oldp+123,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__4__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                       >> 3U)) | ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                                   >> 4U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                      >> 4U)))))));
    bufp->fullBit(oldp+124,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__4__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                >> 3U))));
    bufp->fullBit(oldp+125,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                   >> 4U))));
    bufp->fullBit(oldp+126,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__5__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 4U)))));
    bufp->fullBit(oldp+127,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__5__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                       >> 4U)) | ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                                   >> 5U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                      >> 5U)))))));
    bufp->fullBit(oldp+128,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__5__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                >> 4U))));
    bufp->fullBit(oldp+129,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                   >> 5U))));
    bufp->fullBit(oldp+130,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__6__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 5U)))));
    bufp->fullBit(oldp+131,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__6__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                       >> 5U)) | ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                                   >> 6U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                      >> 6U)))))));
    bufp->fullBit(oldp+132,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__6__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                >> 5U))));
    bufp->fullBit(oldp+133,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                   >> 6U))));
    bufp->fullBit(oldp+134,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__7__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 6U)))));
    bufp->fullBit(oldp+135,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__7__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                       >> 6U)) | ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                                   >> 7U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                      >> 7U)))))));
    bufp->fullBit(oldp+136,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__7__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                >> 6U))));
    bufp->fullBit(oldp+137,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                   >> 7U))));
    bufp->fullBit(oldp+138,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__8__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 7U)))));
    bufp->fullBit(oldp+139,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__8__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                       >> 7U)) | ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                                   >> 8U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                      >> 8U)))))));
    bufp->fullBit(oldp+140,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__8__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                >> 7U))));
    bufp->fullBit(oldp+141,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                   >> 8U))));
    bufp->fullBit(oldp+142,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__9__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 8U)))));
    bufp->fullBit(oldp+143,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__9__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                       >> 8U)) | ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                                   >> 9U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                      >> 9U)))))));
    bufp->fullBit(oldp+144,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__9__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                >> 8U))));
    bufp->fullBit(oldp+145,((vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                             >> 0x1fU)));
    bufp->fullIData(oldp+146,(vlSelf->top__DOT__pipline__DOT__brc__DOT__sum),32);
    bufp->fullIData(oldp+147,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry),32);
    bufp->fullBit(oldp+148,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 9U))));
    bufp->fullBit(oldp+149,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__10__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 9U)))));
    bufp->fullBit(oldp+150,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__10__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 9U)) | ((vlSelf->top__DOT__pipline__DOT__op_a 
                                                   >> 0xaU) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__pipline__DOT__op_b 
                                                      >> 0xaU)))))));
    bufp->fullBit(oldp+151,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__10__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 9U))));
    bufp->fullBit(oldp+152,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0xaU))));
    bufp->fullBit(oldp+153,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__11__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0xaU)))));
    bufp->fullBit(oldp+154,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__11__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 0xaU)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__op_a 
                                     >> 0xbU) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0xbU)))))));
    bufp->fullBit(oldp+155,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__11__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0xaU))));
    bufp->fullBit(oldp+156,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0xbU))));
    bufp->fullBit(oldp+157,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__12__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0xbU)))));
    bufp->fullBit(oldp+158,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__12__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 0xbU)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__op_a 
                                     >> 0xcU) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0xcU)))))));
    bufp->fullBit(oldp+159,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__12__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0xbU))));
    bufp->fullBit(oldp+160,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0xcU))));
    bufp->fullBit(oldp+161,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__13__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+162,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__13__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 0xcU)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__op_a 
                                     >> 0xdU) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0xdU)))))));
    bufp->fullBit(oldp+163,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__13__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0xcU))));
    bufp->fullBit(oldp+164,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0xdU))));
    bufp->fullBit(oldp+165,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__14__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+166,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__14__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 0xdU)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__op_a 
                                     >> 0xeU) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0xeU)))))));
    bufp->fullBit(oldp+167,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__14__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0xdU))));
    bufp->fullBit(oldp+168,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0xeU))));
    bufp->fullBit(oldp+169,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__15__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+170,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__15__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 0xeU)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__op_a 
                                     >> 0xfU) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0xfU)))))));
    bufp->fullBit(oldp+171,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__15__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0xeU))));
    bufp->fullBit(oldp+172,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0xfU))));
    bufp->fullBit(oldp+173,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__16__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0xfU)))));
    bufp->fullBit(oldp+174,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__16__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 0xfU)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__op_a 
                                     >> 0x10U) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0x10U)))))));
    bufp->fullBit(oldp+175,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__16__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0xfU))));
    bufp->fullBit(oldp+176,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x10U))));
    bufp->fullBit(oldp+177,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__17__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x10U)))));
    bufp->fullBit(oldp+178,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__17__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 0x10U)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__op_a 
                                     >> 0x11U) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0x11U)))))));
    bufp->fullBit(oldp+179,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__17__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0x10U))));
    bufp->fullBit(oldp+180,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x11U))));
    bufp->fullBit(oldp+181,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__18__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x11U)))));
    bufp->fullBit(oldp+182,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__18__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 0x11U)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__op_a 
                                     >> 0x12U) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0x12U)))))));
    bufp->fullBit(oldp+183,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__18__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0x11U))));
    bufp->fullBit(oldp+184,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x12U))));
    bufp->fullBit(oldp+185,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__19__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x12U)))));
    bufp->fullBit(oldp+186,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__19__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 0x12U)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__op_a 
                                     >> 0x13U) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0x13U)))))));
    bufp->fullBit(oldp+187,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__19__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0x12U))));
    bufp->fullBit(oldp+188,((1U & vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry)));
    bufp->fullBit(oldp+189,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__1__KET____DOT__adder__DOT__w1) 
                                   ^ vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry))));
    bufp->fullBit(oldp+190,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__1__KET____DOT__adder__DOT__w1) 
                                    & vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry) 
                                   | ((vlSelf->top__DOT__pipline__DOT__op_a 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 1U)))))));
    bufp->fullBit(oldp+191,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__1__KET____DOT__adder__DOT__w1) 
                             & vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry)));
    bufp->fullBit(oldp+192,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x13U))));
    bufp->fullBit(oldp+193,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__20__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x13U)))));
    bufp->fullBit(oldp+194,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__20__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 0x13U)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__op_a 
                                     >> 0x14U) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0x14U)))))));
    bufp->fullBit(oldp+195,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__20__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0x13U))));
    bufp->fullBit(oldp+196,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x14U))));
    bufp->fullBit(oldp+197,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__21__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x14U)))));
    bufp->fullBit(oldp+198,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__21__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 0x14U)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__op_a 
                                     >> 0x15U) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0x15U)))))));
    bufp->fullBit(oldp+199,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__21__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0x14U))));
    bufp->fullBit(oldp+200,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x15U))));
    bufp->fullBit(oldp+201,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__22__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x15U)))));
    bufp->fullBit(oldp+202,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__22__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 0x15U)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__op_a 
                                     >> 0x16U) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0x16U)))))));
    bufp->fullBit(oldp+203,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__22__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0x15U))));
    bufp->fullBit(oldp+204,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x16U))));
    bufp->fullBit(oldp+205,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__23__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x16U)))));
    bufp->fullBit(oldp+206,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__23__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 0x16U)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__op_a 
                                     >> 0x17U) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0x17U)))))));
    bufp->fullBit(oldp+207,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__23__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0x16U))));
    bufp->fullBit(oldp+208,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x17U))));
    bufp->fullBit(oldp+209,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__24__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x17U)))));
    bufp->fullBit(oldp+210,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__24__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 0x17U)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__op_a 
                                     >> 0x18U) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0x18U)))))));
    bufp->fullBit(oldp+211,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__24__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0x17U))));
    bufp->fullBit(oldp+212,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x18U))));
    bufp->fullBit(oldp+213,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__25__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x18U)))));
    bufp->fullBit(oldp+214,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__25__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 0x18U)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__op_a 
                                     >> 0x19U) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0x19U)))))));
    bufp->fullBit(oldp+215,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__25__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0x18U))));
    bufp->fullBit(oldp+216,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x19U))));
    bufp->fullBit(oldp+217,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__26__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+218,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__26__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 0x19U)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__op_a 
                                     >> 0x1aU) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0x1aU)))))));
    bufp->fullBit(oldp+219,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__26__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0x19U))));
    bufp->fullBit(oldp+220,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+221,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__27__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x1aU)))));
    bufp->fullBit(oldp+222,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__27__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 0x1aU)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__op_a 
                                     >> 0x1bU) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0x1bU)))))));
    bufp->fullBit(oldp+223,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__27__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0x1aU))));
    bufp->fullBit(oldp+224,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+225,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__28__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x1bU)))));
    bufp->fullBit(oldp+226,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__28__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 0x1bU)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__op_a 
                                     >> 0x1cU) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0x1cU)))))));
    bufp->fullBit(oldp+227,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__28__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0x1bU))));
    bufp->fullBit(oldp+228,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+229,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__29__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x1cU)))));
    bufp->fullBit(oldp+230,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__29__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 0x1cU)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__op_a 
                                     >> 0x1dU) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0x1dU)))))));
    bufp->fullBit(oldp+231,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__29__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0x1cU))));
    bufp->fullBit(oldp+232,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 1U))));
    bufp->fullBit(oldp+233,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__2__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 1U)))));
    bufp->fullBit(oldp+234,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__2__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 1U)) | ((vlSelf->top__DOT__pipline__DOT__op_a 
                                                   >> 2U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__pipline__DOT__op_b 
                                                      >> 2U)))))));
    bufp->fullBit(oldp+235,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__2__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 1U))));
    bufp->fullBit(oldp+236,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+237,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__30__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x1dU)))));
    bufp->fullBit(oldp+238,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__30__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 0x1dU)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__op_a 
                                     >> 0x1eU) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0x1eU)))))));
    bufp->fullBit(oldp+239,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__30__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0x1dU))));
    bufp->fullBit(oldp+240,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+241,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__31__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x1eU)))));
    bufp->fullBit(oldp+242,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__31__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 0x1eU)) | 
                                   ((vlSelf->top__DOT__pipline__DOT__op_a 
                                     >> 0x1fU) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0x1fU)))))));
    bufp->fullBit(oldp+243,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__31__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0x1eU))));
    bufp->fullBit(oldp+244,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 2U))));
    bufp->fullBit(oldp+245,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__3__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 2U)))));
    bufp->fullBit(oldp+246,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__3__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 2U)) | ((vlSelf->top__DOT__pipline__DOT__op_a 
                                                   >> 3U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__pipline__DOT__op_b 
                                                      >> 3U)))))));
    bufp->fullBit(oldp+247,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__3__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 2U))));
    bufp->fullBit(oldp+248,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 3U))));
    bufp->fullBit(oldp+249,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__4__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 3U)))));
    bufp->fullBit(oldp+250,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__4__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 3U)) | ((vlSelf->top__DOT__pipline__DOT__op_a 
                                                   >> 4U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__pipline__DOT__op_b 
                                                      >> 4U)))))));
    bufp->fullBit(oldp+251,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__4__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 3U))));
    bufp->fullBit(oldp+252,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 4U))));
    bufp->fullBit(oldp+253,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__5__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 4U)))));
    bufp->fullBit(oldp+254,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__5__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 4U)) | ((vlSelf->top__DOT__pipline__DOT__op_a 
                                                   >> 5U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__pipline__DOT__op_b 
                                                      >> 5U)))))));
    bufp->fullBit(oldp+255,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__5__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 4U))));
    bufp->fullBit(oldp+256,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 5U))));
    bufp->fullBit(oldp+257,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__6__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 5U)))));
    bufp->fullBit(oldp+258,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__6__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 5U)) | ((vlSelf->top__DOT__pipline__DOT__op_a 
                                                   >> 6U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__pipline__DOT__op_b 
                                                      >> 6U)))))));
    bufp->fullBit(oldp+259,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__6__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 5U))));
    bufp->fullBit(oldp+260,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 6U))));
    bufp->fullBit(oldp+261,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__7__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 6U)))));
    bufp->fullBit(oldp+262,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__7__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 6U)) | ((vlSelf->top__DOT__pipline__DOT__op_a 
                                                   >> 7U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__pipline__DOT__op_b 
                                                      >> 7U)))))));
    bufp->fullBit(oldp+263,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__7__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 6U))));
    bufp->fullBit(oldp+264,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 7U))));
    bufp->fullBit(oldp+265,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__8__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 7U)))));
    bufp->fullBit(oldp+266,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__8__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 7U)) | ((vlSelf->top__DOT__pipline__DOT__op_a 
                                                   >> 8U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__pipline__DOT__op_b 
                                                      >> 8U)))))));
    bufp->fullBit(oldp+267,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__8__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 7U))));
    bufp->fullBit(oldp+268,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 8U))));
    bufp->fullBit(oldp+269,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__9__KET____DOT__adder__DOT__w1) 
                                   ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 8U)))));
    bufp->fullBit(oldp+270,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__9__KET____DOT__adder__DOT__w1) 
                                    & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                       >> 8U)) | ((vlSelf->top__DOT__pipline__DOT__op_a 
                                                   >> 9U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__pipline__DOT__op_b 
                                                      >> 9U)))))));
    bufp->fullBit(oldp+271,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__9__KET____DOT__adder__DOT__w1) 
                             & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 8U))));
    bufp->fullIData(oldp+272,(((IData)(4U) + vlSelf->top__DOT__pipline__DOT__pcF)),32);
    bufp->fullIData(oldp+273,(vlSelf->top__DOT__pipline__DOT__pcF),32);
    bufp->fullIData(oldp+274,(vlSelf->top__DOT__pipline__DOT__pcD),32);
    bufp->fullIData(oldp+275,(vlSelf->top__DOT__pipline__DOT__pc_nxtD),32);
    bufp->fullIData(oldp+276,(vlSelf->top__DOT__pipline__DOT__instrD),32);
    bufp->fullBit(oldp+277,(vlSelf->top__DOT__pipline__DOT__rd_wrenD));
    bufp->fullBit(oldp+278,(vlSelf->top__DOT__pipline__DOT__br_unsignedD));
    bufp->fullBit(oldp+279,((1U & ((0x40U & vlSelf->top__DOT__pipline__DOT__instrD)
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
    bufp->fullBit(oldp+280,(vlSelf->top__DOT__pipline__DOT__op_b_selD));
    bufp->fullCData(oldp+281,(vlSelf->top__DOT__pipline__DOT__alu_opD),4);
    bufp->fullBit(oldp+282,((IData)(((0x23U == (0x7fU 
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
    bufp->fullCData(oldp+283,(vlSelf->top__DOT__pipline__DOT__wb_selD),2);
    bufp->fullCData(oldp+284,(((0x40U & vlSelf->top__DOT__pipline__DOT__instrD)
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
    bufp->fullCData(oldp+285,(vlSelf->top__DOT__pipline__DOT__store_selD),2);
    bufp->fullIData(oldp+286,((((IData)(vlSelf->top__DOT__pipline__DOT__rd_wrenWB) 
                                & ((IData)(vlSelf->top__DOT__pipline__DOT__rdWB) 
                                   == (0x1fU & (vlSelf->top__DOT__pipline__DOT__instrD 
                                                >> 0xfU))))
                                ? vlSelf->top__DOT__pipline__DOT__wb_data
                                : vlSelf->top__DOT__pipline__DOT__regfile__DOT__register
                               [(0x1fU & (vlSelf->top__DOT__pipline__DOT__instrD 
                                          >> 0xfU))])),32);
    bufp->fullIData(oldp+287,((((IData)(vlSelf->top__DOT__pipline__DOT__rd_wrenWB) 
                                & ((IData)(vlSelf->top__DOT__pipline__DOT__rdWB) 
                                   == (0x1fU & (vlSelf->top__DOT__pipline__DOT__instrD 
                                                >> 0x14U))))
                                ? vlSelf->top__DOT__pipline__DOT__wb_data
                                : vlSelf->top__DOT__pipline__DOT__regfile__DOT__register
                               [(0x1fU & (vlSelf->top__DOT__pipline__DOT__instrD 
                                          >> 0x14U))])),32);
    bufp->fullBit(oldp+288,(vlSelf->top__DOT__pipline__DOT__rd_wrenWB));
    bufp->fullCData(oldp+289,(vlSelf->top__DOT__pipline__DOT__rdWB),5);
    bufp->fullIData(oldp+290,(vlSelf->top__DOT__pipline__DOT__wb_data),32);
    bufp->fullIData(oldp+291,(vlSelf->top__DOT__pipline__DOT__immD),32);
    bufp->fullBit(oldp+292,(vlSelf->top__DOT__pipline__DOT__insn_vld));
    bufp->fullBit(oldp+293,(vlSelf->top__DOT__pipline__DOT__insn_vldE));
    bufp->fullBit(oldp+294,(vlSelf->top__DOT__pipline__DOT__insn_vldM));
    bufp->fullBit(oldp+295,(vlSelf->top__DOT__pipline__DOT__insn_vldWB));
    bufp->fullBit(oldp+296,(vlSelf->top__DOT__pipline__DOT__rd_wrenE));
    bufp->fullCData(oldp+297,(vlSelf->top__DOT__pipline__DOT__wb_selE),2);
    bufp->fullBit(oldp+298,(vlSelf->top__DOT__pipline__DOT__mem_wrenE));
    bufp->fullCData(oldp+299,(vlSelf->top__DOT__pipline__DOT__alu_opE),4);
    bufp->fullBit(oldp+300,(vlSelf->top__DOT__pipline__DOT__op_a_selE));
    bufp->fullBit(oldp+301,(vlSelf->top__DOT__pipline__DOT__op_b_selE));
    bufp->fullBit(oldp+302,(vlSelf->top__DOT__pipline__DOT__br_unsignedE));
    bufp->fullCData(oldp+303,(vlSelf->top__DOT__pipline__DOT__load_selE),3);
    bufp->fullCData(oldp+304,(vlSelf->top__DOT__pipline__DOT__store_selE),2);
    bufp->fullIData(oldp+305,(vlSelf->top__DOT__pipline__DOT__pcE),32);
    bufp->fullIData(oldp+306,(vlSelf->top__DOT__pipline__DOT__pc_nxtE),32);
    bufp->fullIData(oldp+307,(vlSelf->top__DOT__pipline__DOT__o_rs1_dataE),32);
    bufp->fullIData(oldp+308,(vlSelf->top__DOT__pipline__DOT__o_rs2_dataE),32);
    bufp->fullIData(oldp+309,(vlSelf->top__DOT__pipline__DOT__immE),32);
    bufp->fullCData(oldp+310,(vlSelf->top__DOT__pipline__DOT__rdE),5);
    bufp->fullCData(oldp+311,(vlSelf->top__DOT__pipline__DOT__rs1E),5);
    bufp->fullCData(oldp+312,(vlSelf->top__DOT__pipline__DOT__rs2E),5);
    bufp->fullCData(oldp+313,(vlSelf->top__DOT__pipline__DOT__opcodeE),7);
    bufp->fullIData(oldp+314,(vlSelf->top__DOT__pipline__DOT__op_a),32);
    bufp->fullIData(oldp+315,(vlSelf->top__DOT__pipline__DOT__op_b),32);
    bufp->fullCData(oldp+316,(vlSelf->top__DOT__pipline__DOT__forw_a_sel),2);
    bufp->fullCData(oldp+317,(vlSelf->top__DOT__pipline__DOT__forw_b_sel),2);
    bufp->fullCData(oldp+318,(vlSelf->top__DOT__pipline__DOT__opcodeM),7);
    bufp->fullCData(oldp+319,(vlSelf->top__DOT__pipline__DOT__load_selM),3);
    bufp->fullCData(oldp+320,(vlSelf->top__DOT__pipline__DOT__store_selM),2);
    bufp->fullBit(oldp+321,(vlSelf->top__DOT__pipline__DOT__rd_wrenM));
    bufp->fullCData(oldp+322,(vlSelf->top__DOT__pipline__DOT__wb_selM),2);
    bufp->fullBit(oldp+323,(vlSelf->top__DOT__pipline__DOT__mem_wrenM));
    bufp->fullIData(oldp+324,(vlSelf->top__DOT__pipline__DOT__alu_dataM),32);
    bufp->fullIData(oldp+325,(vlSelf->top__DOT__pipline__DOT__st_dataM),32);
    bufp->fullIData(oldp+326,(vlSelf->top__DOT__pipline__DOT__pc_nxtM),32);
    bufp->fullCData(oldp+327,(vlSelf->top__DOT__pipline__DOT__rdM),5);
    bufp->fullIData(oldp+328,(vlSelf->top__DOT__pipline__DOT__pcM),32);
    bufp->fullIData(oldp+329,(vlSelf->top__DOT__pipline__DOT__operand_a),32);
    bufp->fullIData(oldp+330,(vlSelf->top__DOT__pipline__DOT__operand_b),32);
    bufp->fullBit(oldp+331,((vlSelf->top__DOT__pipline__DOT__op_a 
                             == vlSelf->top__DOT__pipline__DOT__op_b)));
    bufp->fullIData(oldp+332,(vlSelf->top__DOT__pipline__DOT__pc_nxtWB),32);
    bufp->fullIData(oldp+333,(vlSelf->top__DOT__pipline__DOT__ld_dataWB),32);
    bufp->fullIData(oldp+334,(vlSelf->top__DOT__pipline__DOT__alu_dataWB),32);
    bufp->fullCData(oldp+335,(vlSelf->top__DOT__pipline__DOT__wb_selWB),2);
    bufp->fullIData(oldp+336,(vlSelf->top__DOT__pipline__DOT__pcWB),32);
    bufp->fullCData(oldp+337,((0x1fU & (vlSelf->top__DOT__pipline__DOT__instrD 
                                        >> 7U))),5);
    bufp->fullCData(oldp+338,((0x1fU & (vlSelf->top__DOT__pipline__DOT__instrD 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+339,((0x1fU & (vlSelf->top__DOT__pipline__DOT__instrD 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+340,((0x7fU & vlSelf->top__DOT__pipline__DOT__instrD)),7);
    bufp->fullIData(oldp+341,((~ vlSelf->top__DOT__pipline__DOT__operand_b)),32);
    bufp->fullBit(oldp+342,((1U & vlSelf->top__DOT__pipline__DOT__operand_a)));
    bufp->fullBit(oldp+343,((1U & (~ vlSelf->top__DOT__pipline__DOT__operand_b))));
    bufp->fullBit(oldp+344,((1U & (~ (IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__adder0__DOT__w1)))));
    bufp->fullBit(oldp+345,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__adder0__DOT__w1) 
                                   | (vlSelf->top__DOT__pipline__DOT__operand_a 
                                      & (~ vlSelf->top__DOT__pipline__DOT__operand_b))))));
    bufp->fullBit(oldp+346,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__adder0__DOT__w1));
    bufp->fullBit(oldp+347,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   & (~ vlSelf->top__DOT__pipline__DOT__operand_b)))));
    bufp->fullBit(oldp+348,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 0xaU))));
    bufp->fullBit(oldp+349,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0xaU)))));
    bufp->fullBit(oldp+350,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__10__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+351,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0xaU) & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+352,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 0xbU))));
    bufp->fullBit(oldp+353,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0xbU)))));
    bufp->fullBit(oldp+354,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__11__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+355,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0xbU) & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+356,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 0xcU))));
    bufp->fullBit(oldp+357,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+358,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__12__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+359,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0xcU) & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+360,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 0xdU))));
    bufp->fullBit(oldp+361,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+362,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__13__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+363,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0xdU) & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+364,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 0xeU))));
    bufp->fullBit(oldp+365,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+366,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__14__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+367,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0xeU) & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+368,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 0xfU))));
    bufp->fullBit(oldp+369,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0xfU)))));
    bufp->fullBit(oldp+370,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__15__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+371,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0xfU) & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                   >> 0xfU))))));
    bufp->fullBit(oldp+372,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 0x10U))));
    bufp->fullBit(oldp+373,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0x10U)))));
    bufp->fullBit(oldp+374,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__16__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+375,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x10U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x10U))))));
    bufp->fullBit(oldp+376,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 0x11U))));
    bufp->fullBit(oldp+377,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0x11U)))));
    bufp->fullBit(oldp+378,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__17__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+379,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x11U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x11U))))));
    bufp->fullBit(oldp+380,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 0x12U))));
    bufp->fullBit(oldp+381,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0x12U)))));
    bufp->fullBit(oldp+382,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__18__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+383,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x12U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x12U))))));
    bufp->fullBit(oldp+384,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 0x13U))));
    bufp->fullBit(oldp+385,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0x13U)))));
    bufp->fullBit(oldp+386,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__19__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+387,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x13U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x13U))))));
    bufp->fullBit(oldp+388,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 1U))));
    bufp->fullBit(oldp+389,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 1U)))));
    bufp->fullBit(oldp+390,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__1__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+391,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 1U) & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                 >> 1U))))));
    bufp->fullBit(oldp+392,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 0x14U))));
    bufp->fullBit(oldp+393,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0x14U)))));
    bufp->fullBit(oldp+394,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__20__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+395,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x14U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x14U))))));
    bufp->fullBit(oldp+396,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 0x15U))));
    bufp->fullBit(oldp+397,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0x15U)))));
    bufp->fullBit(oldp+398,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__21__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+399,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x15U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x15U))))));
    bufp->fullBit(oldp+400,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 0x16U))));
    bufp->fullBit(oldp+401,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0x16U)))));
    bufp->fullBit(oldp+402,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__22__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+403,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x16U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x16U))))));
    bufp->fullBit(oldp+404,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 0x17U))));
    bufp->fullBit(oldp+405,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0x17U)))));
    bufp->fullBit(oldp+406,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__23__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+407,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x17U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x17U))))));
    bufp->fullBit(oldp+408,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 0x18U))));
    bufp->fullBit(oldp+409,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0x18U)))));
    bufp->fullBit(oldp+410,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__24__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+411,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x18U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x18U))))));
    bufp->fullBit(oldp+412,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 0x19U))));
    bufp->fullBit(oldp+413,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+414,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__25__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+415,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x19U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x19U))))));
    bufp->fullBit(oldp+416,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+417,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0x1aU)))));
    bufp->fullBit(oldp+418,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__26__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+419,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x1aU) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x1aU))))));
    bufp->fullBit(oldp+420,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+421,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0x1bU)))));
    bufp->fullBit(oldp+422,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__27__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+423,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x1bU) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x1bU))))));
    bufp->fullBit(oldp+424,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+425,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0x1cU)))));
    bufp->fullBit(oldp+426,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__28__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+427,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x1cU) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x1cU))))));
    bufp->fullBit(oldp+428,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+429,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0x1dU)))));
    bufp->fullBit(oldp+430,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__29__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+431,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x1dU) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x1dU))))));
    bufp->fullBit(oldp+432,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 2U))));
    bufp->fullBit(oldp+433,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 2U)))));
    bufp->fullBit(oldp+434,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__2__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+435,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 2U) & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                 >> 2U))))));
    bufp->fullBit(oldp+436,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+437,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0x1eU)))));
    bufp->fullBit(oldp+438,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__30__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+439,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x1eU) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x1eU))))));
    bufp->fullBit(oldp+440,((vlSelf->top__DOT__pipline__DOT__operand_a 
                             >> 0x1fU)));
    bufp->fullBit(oldp+441,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 0x1fU)))));
    bufp->fullBit(oldp+442,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__31__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+443,(((vlSelf->top__DOT__pipline__DOT__operand_a 
                              >> 0x1fU) & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                              >> 0x1fU)))));
    bufp->fullBit(oldp+444,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 3U))));
    bufp->fullBit(oldp+445,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 3U)))));
    bufp->fullBit(oldp+446,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__3__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+447,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 3U) & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                 >> 3U))))));
    bufp->fullBit(oldp+448,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 4U))));
    bufp->fullBit(oldp+449,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 4U)))));
    bufp->fullBit(oldp+450,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__4__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+451,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 4U) & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                 >> 4U))))));
    bufp->fullBit(oldp+452,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 5U))));
    bufp->fullBit(oldp+453,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 5U)))));
    bufp->fullBit(oldp+454,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__5__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+455,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 5U) & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                 >> 5U))))));
    bufp->fullBit(oldp+456,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 6U))));
    bufp->fullBit(oldp+457,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 6U)))));
    bufp->fullBit(oldp+458,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__6__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+459,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 6U) & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                 >> 6U))))));
    bufp->fullBit(oldp+460,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 7U))));
    bufp->fullBit(oldp+461,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 7U)))));
    bufp->fullBit(oldp+462,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__7__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+463,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 7U) & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                 >> 7U))))));
    bufp->fullBit(oldp+464,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 8U))));
    bufp->fullBit(oldp+465,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 8U)))));
    bufp->fullBit(oldp+466,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__8__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+467,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 8U) & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                 >> 8U))))));
    bufp->fullBit(oldp+468,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                   >> 9U))));
    bufp->fullBit(oldp+469,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                      >> 9U)))));
    bufp->fullBit(oldp+470,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__9__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+471,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 9U) & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                 >> 9U))))));
    bufp->fullIData(oldp+472,((~ vlSelf->top__DOT__pipline__DOT__op_b)),32);
    bufp->fullBit(oldp+473,((1U & vlSelf->top__DOT__pipline__DOT__op_a)));
    bufp->fullBit(oldp+474,((1U & (~ vlSelf->top__DOT__pipline__DOT__op_b))));
    bufp->fullBit(oldp+475,((1U & (~ (IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__adder0__DOT__w1)))));
    bufp->fullBit(oldp+476,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__adder0__DOT__w1) 
                                   | (vlSelf->top__DOT__pipline__DOT__op_a 
                                      & (~ vlSelf->top__DOT__pipline__DOT__op_b))))));
    bufp->fullBit(oldp+477,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__adder0__DOT__w1));
    bufp->fullBit(oldp+478,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   & (~ vlSelf->top__DOT__pipline__DOT__op_b)))));
    bufp->fullBit(oldp+479,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 0xaU))));
    bufp->fullBit(oldp+480,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0xaU)))));
    bufp->fullBit(oldp+481,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__10__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+482,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 0xaU) & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+483,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 0xbU))));
    bufp->fullBit(oldp+484,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0xbU)))));
    bufp->fullBit(oldp+485,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__11__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+486,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 0xbU) & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+487,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 0xcU))));
    bufp->fullBit(oldp+488,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+489,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__12__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+490,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 0xcU) & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+491,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 0xdU))));
    bufp->fullBit(oldp+492,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+493,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__13__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+494,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 0xdU) & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+495,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 0xeU))));
    bufp->fullBit(oldp+496,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+497,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__14__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+498,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 0xeU) & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+499,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 0xfU))));
    bufp->fullBit(oldp+500,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0xfU)))));
    bufp->fullBit(oldp+501,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__15__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+502,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 0xfU) & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0xfU))))));
    bufp->fullBit(oldp+503,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 0x10U))));
    bufp->fullBit(oldp+504,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0x10U)))));
    bufp->fullBit(oldp+505,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__16__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+506,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 0x10U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0x10U))))));
    bufp->fullBit(oldp+507,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 0x11U))));
    bufp->fullBit(oldp+508,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0x11U)))));
    bufp->fullBit(oldp+509,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__17__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+510,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 0x11U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0x11U))))));
    bufp->fullBit(oldp+511,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 0x12U))));
    bufp->fullBit(oldp+512,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0x12U)))));
    bufp->fullBit(oldp+513,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__18__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+514,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 0x12U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0x12U))))));
    bufp->fullBit(oldp+515,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 0x13U))));
    bufp->fullBit(oldp+516,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0x13U)))));
    bufp->fullBit(oldp+517,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__19__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+518,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 0x13U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0x13U))))));
    bufp->fullBit(oldp+519,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 1U))));
    bufp->fullBit(oldp+520,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 1U)))));
    bufp->fullBit(oldp+521,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__1__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+522,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 1U) & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                                 >> 1U))))));
    bufp->fullBit(oldp+523,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 0x14U))));
    bufp->fullBit(oldp+524,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0x14U)))));
    bufp->fullBit(oldp+525,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__20__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+526,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 0x14U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0x14U))))));
    bufp->fullBit(oldp+527,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 0x15U))));
    bufp->fullBit(oldp+528,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0x15U)))));
    bufp->fullBit(oldp+529,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__21__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+530,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 0x15U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0x15U))))));
    bufp->fullBit(oldp+531,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 0x16U))));
    bufp->fullBit(oldp+532,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0x16U)))));
    bufp->fullBit(oldp+533,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__22__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+534,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 0x16U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0x16U))))));
    bufp->fullBit(oldp+535,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 0x17U))));
    bufp->fullBit(oldp+536,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0x17U)))));
    bufp->fullBit(oldp+537,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__23__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+538,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 0x17U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0x17U))))));
    bufp->fullBit(oldp+539,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 0x18U))));
    bufp->fullBit(oldp+540,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0x18U)))));
    bufp->fullBit(oldp+541,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__24__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+542,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 0x18U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0x18U))))));
    bufp->fullBit(oldp+543,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 0x19U))));
    bufp->fullBit(oldp+544,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+545,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__25__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+546,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 0x19U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0x19U))))));
    bufp->fullBit(oldp+547,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+548,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0x1aU)))));
    bufp->fullBit(oldp+549,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__26__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+550,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 0x1aU) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0x1aU))))));
    bufp->fullBit(oldp+551,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+552,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0x1bU)))));
    bufp->fullBit(oldp+553,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__27__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+554,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 0x1bU) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0x1bU))))));
    bufp->fullBit(oldp+555,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+556,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0x1cU)))));
    bufp->fullBit(oldp+557,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__28__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+558,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 0x1cU) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0x1cU))))));
    bufp->fullBit(oldp+559,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+560,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0x1dU)))));
    bufp->fullBit(oldp+561,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__29__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+562,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 0x1dU) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0x1dU))))));
    bufp->fullBit(oldp+563,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 2U))));
    bufp->fullBit(oldp+564,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 2U)))));
    bufp->fullBit(oldp+565,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__2__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+566,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 2U) & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                                 >> 2U))))));
    bufp->fullBit(oldp+567,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+568,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0x1eU)))));
    bufp->fullBit(oldp+569,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__30__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+570,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 0x1eU) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0x1eU))))));
    bufp->fullBit(oldp+571,((vlSelf->top__DOT__pipline__DOT__op_a 
                             >> 0x1fU)));
    bufp->fullBit(oldp+572,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 0x1fU)))));
    bufp->fullBit(oldp+573,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__31__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+574,(((vlSelf->top__DOT__pipline__DOT__op_a 
                              >> 0x1fU) & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                              >> 0x1fU)))));
    bufp->fullBit(oldp+575,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 3U))));
    bufp->fullBit(oldp+576,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 3U)))));
    bufp->fullBit(oldp+577,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__3__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+578,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 3U) & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                                 >> 3U))))));
    bufp->fullBit(oldp+579,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 4U))));
    bufp->fullBit(oldp+580,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 4U)))));
    bufp->fullBit(oldp+581,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__4__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+582,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 4U) & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                                 >> 4U))))));
    bufp->fullBit(oldp+583,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 5U))));
    bufp->fullBit(oldp+584,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 5U)))));
    bufp->fullBit(oldp+585,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__5__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+586,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 5U) & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                                 >> 5U))))));
    bufp->fullBit(oldp+587,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 6U))));
    bufp->fullBit(oldp+588,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 6U)))));
    bufp->fullBit(oldp+589,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__6__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+590,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 6U) & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                                 >> 6U))))));
    bufp->fullBit(oldp+591,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 7U))));
    bufp->fullBit(oldp+592,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 7U)))));
    bufp->fullBit(oldp+593,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__7__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+594,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 7U) & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                                 >> 7U))))));
    bufp->fullBit(oldp+595,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 8U))));
    bufp->fullBit(oldp+596,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 8U)))));
    bufp->fullBit(oldp+597,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__8__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+598,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 8U) & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                                 >> 8U))))));
    bufp->fullBit(oldp+599,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                   >> 9U))));
    bufp->fullBit(oldp+600,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                      >> 9U)))));
    bufp->fullBit(oldp+601,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__9__KET____DOT__adder__DOT__w1));
    bufp->fullBit(oldp+602,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                    >> 9U) & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                                 >> 9U))))));
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
    bufp->fullCData(oldp+673,((0xffU & vlSelf->i_io_sw)),8);
    bufp->fullIData(oldp+674,(0x20U),32);
    bufp->fullBit(oldp+675,(1U));
    bufp->fullCData(oldp+676,(0x33U),7);
    bufp->fullCData(oldp+677,(0x13U),7);
    bufp->fullCData(oldp+678,(0x23U),7);
    bufp->fullCData(oldp+679,(0x63U),7);
    bufp->fullCData(oldp+680,(3U),7);
    bufp->fullCData(oldp+681,(0x37U),7);
    bufp->fullCData(oldp+682,(0x17U),7);
    bufp->fullCData(oldp+683,(0x67U),7);
    bufp->fullCData(oldp+684,(0x6fU),7);
    bufp->fullBit(oldp+685,(vlSelf->top__DOT__pipline__DOT__hazard_unit__DOT__branchE));
}
