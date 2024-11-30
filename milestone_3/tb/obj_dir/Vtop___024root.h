// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(i_clk,0,0);
        VL_IN8(i_rst_n,0,0);
        VL_OUT8(o_insn_vld,0,0);
        VL_OUT8(o_io_hex0,6,0);
        VL_OUT8(o_io_hex1,6,0);
        VL_OUT8(o_io_hex2,6,0);
        VL_OUT8(o_io_hex3,6,0);
        VL_OUT8(o_io_hex4,6,0);
        VL_OUT8(o_io_hex5,6,0);
        VL_OUT8(o_io_hex6,6,0);
        VL_OUT8(o_io_hex7,6,0);
        CData/*0:0*/ top__DOT__pipline__DOT__br_sel;
        CData/*0:0*/ top__DOT__pipline__DOT__stallF;
        CData/*0:0*/ top__DOT__pipline__DOT__stallD;
        CData/*0:0*/ top__DOT__pipline__DOT__flushM;
        CData/*0:0*/ top__DOT__pipline__DOT__flushD;
        CData/*0:0*/ top__DOT__pipline__DOT__flushE;
        CData/*0:0*/ top__DOT__pipline__DOT__rd_wrenD;
        CData/*0:0*/ top__DOT__pipline__DOT__br_unsignedD;
        CData/*0:0*/ top__DOT__pipline__DOT__op_b_selD;
        CData/*3:0*/ top__DOT__pipline__DOT__alu_opD;
        CData/*1:0*/ top__DOT__pipline__DOT__wb_selD;
        CData/*1:0*/ top__DOT__pipline__DOT__store_selD;
        CData/*0:0*/ top__DOT__pipline__DOT__rd_wrenWB;
        CData/*4:0*/ top__DOT__pipline__DOT__rdWB;
        CData/*0:0*/ top__DOT__pipline__DOT__stallE;
        CData/*0:0*/ top__DOT__pipline__DOT__insn_vld;
        CData/*0:0*/ top__DOT__pipline__DOT__insn_vldE;
        CData/*0:0*/ top__DOT__pipline__DOT__insn_vldM;
        CData/*0:0*/ top__DOT__pipline__DOT__insn_vldWB;
        CData/*0:0*/ top__DOT__pipline__DOT__rd_wrenE;
        CData/*1:0*/ top__DOT__pipline__DOT__wb_selE;
        CData/*0:0*/ top__DOT__pipline__DOT__mem_wrenE;
        CData/*3:0*/ top__DOT__pipline__DOT__alu_opE;
        CData/*0:0*/ top__DOT__pipline__DOT__op_a_selE;
        CData/*0:0*/ top__DOT__pipline__DOT__op_b_selE;
        CData/*0:0*/ top__DOT__pipline__DOT__br_unsignedE;
        CData/*2:0*/ top__DOT__pipline__DOT__load_selE;
        CData/*1:0*/ top__DOT__pipline__DOT__store_selE;
        CData/*4:0*/ top__DOT__pipline__DOT__rdE;
        CData/*4:0*/ top__DOT__pipline__DOT__rs1E;
        CData/*4:0*/ top__DOT__pipline__DOT__rs2E;
        CData/*6:0*/ top__DOT__pipline__DOT__opcodeE;
        CData/*1:0*/ top__DOT__pipline__DOT__forw_a_sel;
        CData/*1:0*/ top__DOT__pipline__DOT__forw_b_sel;
        CData/*6:0*/ top__DOT__pipline__DOT__opcodeM;
        CData/*2:0*/ top__DOT__pipline__DOT__load_selM;
        CData/*1:0*/ top__DOT__pipline__DOT__store_selM;
        CData/*0:0*/ top__DOT__pipline__DOT__rd_wrenM;
        CData/*1:0*/ top__DOT__pipline__DOT__wb_selM;
        CData/*0:0*/ top__DOT__pipline__DOT__mem_wrenM;
        CData/*4:0*/ top__DOT__pipline__DOT__rdM;
        CData/*1:0*/ top__DOT__pipline__DOT__wb_selWB;
        CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__adder0__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__1__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__2__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__3__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__4__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__5__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__6__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__7__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__8__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__9__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__10__KET____DOT__adder__DOT__w1;
    };
    struct {
        CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__11__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__12__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__13__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__14__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__15__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__16__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__17__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__18__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__19__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__20__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__21__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__22__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__23__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__24__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__25__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__26__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__27__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__28__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__29__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__30__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__31__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__adder0__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__1__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__2__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__3__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__4__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__5__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__6__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__7__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__8__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__9__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__10__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__11__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__12__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__13__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__14__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__15__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__16__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__17__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__18__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__19__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__20__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__21__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__22__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__23__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__24__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__25__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__26__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__27__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__28__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__29__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__30__KET____DOT__adder__DOT__w1;
        CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__31__KET____DOT__adder__DOT__w1;
        CData/*7:0*/ top__DOT__pipline__DOT__lsu__DOT__led_g_reg;
        CData/*0:0*/ __Vclklast__TOP__i_clk;
        CData/*0:0*/ __Vclklast__TOP__i_rst_n;
        VL_IN(i_io_sw,31,0);
        VL_OUT(o_pc_debug,31,0);
        VL_OUT(o_io_lcd,31,0);
        VL_OUT(o_io_ledg,31,0);
        VL_OUT(o_io_ledr,31,0);
        IData/*31:0*/ top__DOT__pipline__DOT__alu_dataE;
        IData/*31:0*/ top__DOT__pipline__DOT__nxt_pc;
        IData/*31:0*/ top__DOT__pipline__DOT__pcF;
    };
    struct {
        IData/*31:0*/ top__DOT__pipline__DOT__pcD;
        IData/*31:0*/ top__DOT__pipline__DOT__pc_nxtD;
        IData/*31:0*/ top__DOT__pipline__DOT__instrD;
        IData/*31:0*/ top__DOT__pipline__DOT__wb_data;
        IData/*31:0*/ top__DOT__pipline__DOT__immD;
        IData/*31:0*/ top__DOT__pipline__DOT__pcE;
        IData/*31:0*/ top__DOT__pipline__DOT__pc_nxtE;
        IData/*31:0*/ top__DOT__pipline__DOT__o_rs1_dataE;
        IData/*31:0*/ top__DOT__pipline__DOT__o_rs2_dataE;
        IData/*31:0*/ top__DOT__pipline__DOT__immE;
        IData/*31:0*/ top__DOT__pipline__DOT__instrE;
        IData/*31:0*/ top__DOT__pipline__DOT__op_a;
        IData/*31:0*/ top__DOT__pipline__DOT__op_b;
        IData/*31:0*/ top__DOT__pipline__DOT__alu_dataM;
        IData/*31:0*/ top__DOT__pipline__DOT__st_dataM;
        IData/*31:0*/ top__DOT__pipline__DOT__pc_nxtM;
        IData/*31:0*/ top__DOT__pipline__DOT__pcM;
        IData/*31:0*/ top__DOT__pipline__DOT__ld_dataM;
        IData/*31:0*/ top__DOT__pipline__DOT__operand_a;
        IData/*31:0*/ top__DOT__pipline__DOT__operand_b;
        IData/*31:0*/ top__DOT__pipline__DOT__pc_nxtWB;
        IData/*31:0*/ top__DOT__pipline__DOT__ld_dataWB;
        IData/*31:0*/ top__DOT__pipline__DOT__alu_dataWB;
        IData/*31:0*/ top__DOT__pipline__DOT__pcWB;
        IData/*31:0*/ top__DOT__pipline__DOT__regfile__DOT__i;
        IData/*31:0*/ top__DOT__pipline__DOT__alu__DOT____Vxrand_h96fd10a2__0;
        IData/*31:0*/ top__DOT__pipline__DOT__alu__DOT__sum;
        IData/*31:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry;
        IData/*31:0*/ top__DOT__pipline__DOT__brc__DOT__sum;
        IData/*31:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry;
        IData/*31:0*/ top__DOT__pipline__DOT__lsu__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ __Vchglast__TOP__top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry;
        IData/*31:0*/ __Vchglast__TOP__top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry;
        VlUnpacked<IData/*31:0*/, 2048> top__DOT__pipline__DOT__imem__DOT__inst_mem;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__pipline__DOT__regfile__DOT__register;
        VlUnpacked<CData/*7:0*/, 8192> top__DOT__pipline__DOT__lsu__DOT__dmem;
        VlUnpacked<CData/*7:0*/, 4> top__DOT__pipline__DOT__lsu__DOT__sw_reg;
        VlUnpacked<CData/*7:0*/, 8> top__DOT__pipline__DOT__lsu__DOT__hex_reg;
        VlUnpacked<CData/*7:0*/, 4> top__DOT__pipline__DOT__lsu__DOT__led_r_reg;
        VlUnpacked<CData/*7:0*/, 4> top__DOT__pipline__DOT__lsu__DOT__lcd_reg;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
