// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__pipline__DOT__instr),32);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__pipline__DOT__alu_dataE),32);
        bufp->chgBit(oldp+2,(vlSelf->top__DOT__pipline__DOT__br_sel));
        bufp->chgBit(oldp+3,(vlSelf->top__DOT__pipline__DOT__stallF));
        bufp->chgBit(oldp+4,(vlSelf->top__DOT__pipline__DOT__stallD));
        bufp->chgBit(oldp+5,(vlSelf->top__DOT__pipline__DOT__flushM));
        bufp->chgBit(oldp+6,(vlSelf->top__DOT__pipline__DOT__flushD));
        bufp->chgBit(oldp+7,(vlSelf->top__DOT__pipline__DOT__flushE));
        bufp->chgBit(oldp+8,(vlSelf->top__DOT__pipline__DOT__stallE));
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__pipline__DOT__ld_dataM),32);
        bufp->chgCData(oldp+10,((7U & (vlSelf->top__DOT__pipline__DOT__instr 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__sw_reg[0]),8);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__sw_reg[1]),8);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__sw_reg[2]),8);
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__sw_reg[3]),8);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+15,(((IData)(vlSelf->top__DOT__pipline__DOT__br_sel)
                                  ? vlSelf->top__DOT__pipline__DOT__alu_dataE
                                  : ((IData)(4U) + vlSelf->top__DOT__pipline__DOT__pcF))),32);
        bufp->chgBit(oldp+16,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__br_unsignedE)
                                      ? (~ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                            >> 0x1fU))
                                      : (((vlSelf->top__DOT__pipline__DOT__op_a 
                                           >> 0x1fU) 
                                          != (vlSelf->top__DOT__pipline__DOT__op_b 
                                              >> 0x1fU))
                                          ? (vlSelf->top__DOT__pipline__DOT__op_a 
                                             >> 0x1fU)
                                          : (vlSelf->top__DOT__pipline__DOT__brc__DOT__sum 
                                             >> 0x1fU))))));
        bufp->chgBit(oldp+17,((vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                               >> 0x1fU)));
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__pipline__DOT__alu__DOT__sum),32);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry),32);
        bufp->chgBit(oldp+20,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 9U))));
        bufp->chgBit(oldp+21,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__10__KET____DOT__adder__DOT__w1) 
                                     ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                        >> 9U)))));
        bufp->chgBit(oldp+22,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__10__KET____DOT__adder__DOT__w1) 
                                      & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                         >> 9U)) | 
                                     ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                       >> 0xaU) & (~ 
                                                   (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                    >> 0xaU)))))));
        bufp->chgBit(oldp+23,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__10__KET____DOT__adder__DOT__w1) 
                               & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 9U))));
        bufp->chgBit(oldp+24,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0xaU))));
        bufp->chgBit(oldp+25,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__11__KET____DOT__adder__DOT__w1) 
                                     ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                        >> 0xaU)))));
        bufp->chgBit(oldp+26,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__11__KET____DOT__adder__DOT__w1) 
                                      & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                         >> 0xaU)) 
                                     | ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                         >> 0xbU) & 
                                        (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                            >> 0xbU)))))));
        bufp->chgBit(oldp+27,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__11__KET____DOT__adder__DOT__w1) 
                               & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0xaU))));
        bufp->chgBit(oldp+28,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0xbU))));
        bufp->chgBit(oldp+29,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__12__KET____DOT__adder__DOT__w1) 
                                     ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                        >> 0xbU)))));
        bufp->chgBit(oldp+30,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__12__KET____DOT__adder__DOT__w1) 
                                      & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                         >> 0xbU)) 
                                     | ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                         >> 0xcU) & 
                                        (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                            >> 0xcU)))))));
        bufp->chgBit(oldp+31,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__12__KET____DOT__adder__DOT__w1) 
                               & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0xbU))));
        bufp->chgBit(oldp+32,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0xcU))));
        bufp->chgBit(oldp+33,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__13__KET____DOT__adder__DOT__w1) 
                                     ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                        >> 0xcU)))));
        bufp->chgBit(oldp+34,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__13__KET____DOT__adder__DOT__w1) 
                                      & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                         >> 0xcU)) 
                                     | ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                         >> 0xdU) & 
                                        (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                            >> 0xdU)))))));
        bufp->chgBit(oldp+35,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__13__KET____DOT__adder__DOT__w1) 
                               & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0xcU))));
        bufp->chgBit(oldp+36,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0xdU))));
        bufp->chgBit(oldp+37,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__14__KET____DOT__adder__DOT__w1) 
                                     ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                        >> 0xdU)))));
        bufp->chgBit(oldp+38,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__14__KET____DOT__adder__DOT__w1) 
                                      & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                         >> 0xdU)) 
                                     | ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                         >> 0xeU) & 
                                        (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                            >> 0xeU)))))));
        bufp->chgBit(oldp+39,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__14__KET____DOT__adder__DOT__w1) 
                               & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0xdU))));
        bufp->chgBit(oldp+40,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0xeU))));
        bufp->chgBit(oldp+41,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__15__KET____DOT__adder__DOT__w1) 
                                     ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                        >> 0xeU)))));
        bufp->chgBit(oldp+42,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__15__KET____DOT__adder__DOT__w1) 
                                      & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                         >> 0xeU)) 
                                     | ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                         >> 0xfU) & 
                                        (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                            >> 0xfU)))))));
        bufp->chgBit(oldp+43,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__15__KET____DOT__adder__DOT__w1) 
                               & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0xeU))));
        bufp->chgBit(oldp+44,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0xfU))));
        bufp->chgBit(oldp+45,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__16__KET____DOT__adder__DOT__w1) 
                                     ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                        >> 0xfU)))));
        bufp->chgBit(oldp+46,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__16__KET____DOT__adder__DOT__w1) 
                                      & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                         >> 0xfU)) 
                                     | ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                         >> 0x10U) 
                                        & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                              >> 0x10U)))))));
        bufp->chgBit(oldp+47,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__16__KET____DOT__adder__DOT__w1) 
                               & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0xfU))));
        bufp->chgBit(oldp+48,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0x10U))));
        bufp->chgBit(oldp+49,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__17__KET____DOT__adder__DOT__w1) 
                                     ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                        >> 0x10U)))));
        bufp->chgBit(oldp+50,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__17__KET____DOT__adder__DOT__w1) 
                                      & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                         >> 0x10U)) 
                                     | ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                         >> 0x11U) 
                                        & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                              >> 0x11U)))))));
        bufp->chgBit(oldp+51,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__17__KET____DOT__adder__DOT__w1) 
                               & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0x10U))));
        bufp->chgBit(oldp+52,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0x11U))));
        bufp->chgBit(oldp+53,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__18__KET____DOT__adder__DOT__w1) 
                                     ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                        >> 0x11U)))));
        bufp->chgBit(oldp+54,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__18__KET____DOT__adder__DOT__w1) 
                                      & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                         >> 0x11U)) 
                                     | ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                         >> 0x12U) 
                                        & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                              >> 0x12U)))))));
        bufp->chgBit(oldp+55,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__18__KET____DOT__adder__DOT__w1) 
                               & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0x11U))));
        bufp->chgBit(oldp+56,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0x12U))));
        bufp->chgBit(oldp+57,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__19__KET____DOT__adder__DOT__w1) 
                                     ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                        >> 0x12U)))));
        bufp->chgBit(oldp+58,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__19__KET____DOT__adder__DOT__w1) 
                                      & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                         >> 0x12U)) 
                                     | ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                         >> 0x13U) 
                                        & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                              >> 0x13U)))))));
        bufp->chgBit(oldp+59,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__19__KET____DOT__adder__DOT__w1) 
                               & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0x12U))));
        bufp->chgBit(oldp+60,((1U & vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry)));
        bufp->chgBit(oldp+61,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__1__KET____DOT__adder__DOT__w1) 
                                     ^ vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry))));
        bufp->chgBit(oldp+62,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__1__KET____DOT__adder__DOT__w1) 
                                      & vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry) 
                                     | ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                    >> 1U)))))));
        bufp->chgBit(oldp+63,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__1__KET____DOT__adder__DOT__w1) 
                               & vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry)));
        bufp->chgBit(oldp+64,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0x13U))));
        bufp->chgBit(oldp+65,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__20__KET____DOT__adder__DOT__w1) 
                                     ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                        >> 0x13U)))));
        bufp->chgBit(oldp+66,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__20__KET____DOT__adder__DOT__w1) 
                                      & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                         >> 0x13U)) 
                                     | ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                         >> 0x14U) 
                                        & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                              >> 0x14U)))))));
        bufp->chgBit(oldp+67,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__20__KET____DOT__adder__DOT__w1) 
                               & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0x13U))));
        bufp->chgBit(oldp+68,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0x14U))));
        bufp->chgBit(oldp+69,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__21__KET____DOT__adder__DOT__w1) 
                                     ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                        >> 0x14U)))));
        bufp->chgBit(oldp+70,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__21__KET____DOT__adder__DOT__w1) 
                                      & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                         >> 0x14U)) 
                                     | ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                         >> 0x15U) 
                                        & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                              >> 0x15U)))))));
        bufp->chgBit(oldp+71,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__21__KET____DOT__adder__DOT__w1) 
                               & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0x14U))));
        bufp->chgBit(oldp+72,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0x15U))));
        bufp->chgBit(oldp+73,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__22__KET____DOT__adder__DOT__w1) 
                                     ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                        >> 0x15U)))));
        bufp->chgBit(oldp+74,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__22__KET____DOT__adder__DOT__w1) 
                                      & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                         >> 0x15U)) 
                                     | ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                         >> 0x16U) 
                                        & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                              >> 0x16U)))))));
        bufp->chgBit(oldp+75,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__22__KET____DOT__adder__DOT__w1) 
                               & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0x15U))));
        bufp->chgBit(oldp+76,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0x16U))));
        bufp->chgBit(oldp+77,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__23__KET____DOT__adder__DOT__w1) 
                                     ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                        >> 0x16U)))));
        bufp->chgBit(oldp+78,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__23__KET____DOT__adder__DOT__w1) 
                                      & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                         >> 0x16U)) 
                                     | ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                         >> 0x17U) 
                                        & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                              >> 0x17U)))))));
        bufp->chgBit(oldp+79,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__23__KET____DOT__adder__DOT__w1) 
                               & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0x16U))));
        bufp->chgBit(oldp+80,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0x17U))));
        bufp->chgBit(oldp+81,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__24__KET____DOT__adder__DOT__w1) 
                                     ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                        >> 0x17U)))));
        bufp->chgBit(oldp+82,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__24__KET____DOT__adder__DOT__w1) 
                                      & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                         >> 0x17U)) 
                                     | ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                         >> 0x18U) 
                                        & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                              >> 0x18U)))))));
        bufp->chgBit(oldp+83,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__24__KET____DOT__adder__DOT__w1) 
                               & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0x17U))));
        bufp->chgBit(oldp+84,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0x18U))));
        bufp->chgBit(oldp+85,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__25__KET____DOT__adder__DOT__w1) 
                                     ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                        >> 0x18U)))));
        bufp->chgBit(oldp+86,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__25__KET____DOT__adder__DOT__w1) 
                                      & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                         >> 0x18U)) 
                                     | ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                         >> 0x19U) 
                                        & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                              >> 0x19U)))))));
        bufp->chgBit(oldp+87,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__25__KET____DOT__adder__DOT__w1) 
                               & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0x18U))));
        bufp->chgBit(oldp+88,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0x19U))));
        bufp->chgBit(oldp+89,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__26__KET____DOT__adder__DOT__w1) 
                                     ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                        >> 0x19U)))));
        bufp->chgBit(oldp+90,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__26__KET____DOT__adder__DOT__w1) 
                                      & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                         >> 0x19U)) 
                                     | ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                         >> 0x1aU) 
                                        & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                              >> 0x1aU)))))));
        bufp->chgBit(oldp+91,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__26__KET____DOT__adder__DOT__w1) 
                               & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0x19U))));
        bufp->chgBit(oldp+92,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0x1aU))));
        bufp->chgBit(oldp+93,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__27__KET____DOT__adder__DOT__w1) 
                                     ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                        >> 0x1aU)))));
        bufp->chgBit(oldp+94,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__27__KET____DOT__adder__DOT__w1) 
                                      & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                         >> 0x1aU)) 
                                     | ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                         >> 0x1bU) 
                                        & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                              >> 0x1bU)))))));
        bufp->chgBit(oldp+95,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__27__KET____DOT__adder__DOT__w1) 
                               & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0x1aU))));
        bufp->chgBit(oldp+96,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                     >> 0x1bU))));
        bufp->chgBit(oldp+97,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__28__KET____DOT__adder__DOT__w1) 
                                     ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                        >> 0x1bU)))));
        bufp->chgBit(oldp+98,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__28__KET____DOT__adder__DOT__w1) 
                                      & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                         >> 0x1bU)) 
                                     | ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                         >> 0x1cU) 
                                        & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                              >> 0x1cU)))))));
        bufp->chgBit(oldp+99,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__28__KET____DOT__adder__DOT__w1) 
                               & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                  >> 0x1bU))));
        bufp->chgBit(oldp+100,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+101,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__29__KET____DOT__adder__DOT__w1) 
                                      ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+102,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__29__KET____DOT__adder__DOT__w1) 
                                       & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                          >> 0x1cU)) 
                                      | ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                          >> 0x1dU) 
                                         & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                               >> 0x1dU)))))));
        bufp->chgBit(oldp+103,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__29__KET____DOT__adder__DOT__w1) 
                                & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                   >> 0x1cU))));
        bufp->chgBit(oldp+104,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 1U))));
        bufp->chgBit(oldp+105,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__2__KET____DOT__adder__DOT__w1) 
                                      ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                         >> 1U)))));
        bufp->chgBit(oldp+106,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__2__KET____DOT__adder__DOT__w1) 
                                       & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                          >> 1U)) | 
                                      ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                        >> 2U) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                   >> 2U)))))));
        bufp->chgBit(oldp+107,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__2__KET____DOT__adder__DOT__w1) 
                                & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                   >> 1U))));
        bufp->chgBit(oldp+108,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+109,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__30__KET____DOT__adder__DOT__w1) 
                                      ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+110,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__30__KET____DOT__adder__DOT__w1) 
                                       & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                          >> 0x1dU)) 
                                      | ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                          >> 0x1eU) 
                                         & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                               >> 0x1eU)))))));
        bufp->chgBit(oldp+111,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__30__KET____DOT__adder__DOT__w1) 
                                & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                   >> 0x1dU))));
        bufp->chgBit(oldp+112,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+113,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__31__KET____DOT__adder__DOT__w1) 
                                      ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+114,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__31__KET____DOT__adder__DOT__w1) 
                                       & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                          >> 0x1eU)) 
                                      | ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                          >> 0x1fU) 
                                         & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                               >> 0x1fU)))))));
        bufp->chgBit(oldp+115,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__31__KET____DOT__adder__DOT__w1) 
                                & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                   >> 0x1eU))));
        bufp->chgBit(oldp+116,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 2U))));
        bufp->chgBit(oldp+117,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__3__KET____DOT__adder__DOT__w1) 
                                      ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                         >> 2U)))));
        bufp->chgBit(oldp+118,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__3__KET____DOT__adder__DOT__w1) 
                                       & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                          >> 2U)) | 
                                      ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                        >> 3U) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                   >> 3U)))))));
        bufp->chgBit(oldp+119,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__3__KET____DOT__adder__DOT__w1) 
                                & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                   >> 2U))));
        bufp->chgBit(oldp+120,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 3U))));
        bufp->chgBit(oldp+121,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__4__KET____DOT__adder__DOT__w1) 
                                      ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                         >> 3U)))));
        bufp->chgBit(oldp+122,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__4__KET____DOT__adder__DOT__w1) 
                                       & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                          >> 3U)) | 
                                      ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                        >> 4U) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                   >> 4U)))))));
        bufp->chgBit(oldp+123,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__4__KET____DOT__adder__DOT__w1) 
                                & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                   >> 3U))));
        bufp->chgBit(oldp+124,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 4U))));
        bufp->chgBit(oldp+125,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__5__KET____DOT__adder__DOT__w1) 
                                      ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                         >> 4U)))));
        bufp->chgBit(oldp+126,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__5__KET____DOT__adder__DOT__w1) 
                                       & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                          >> 4U)) | 
                                      ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                        >> 5U) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                   >> 5U)))))));
        bufp->chgBit(oldp+127,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__5__KET____DOT__adder__DOT__w1) 
                                & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                   >> 4U))));
        bufp->chgBit(oldp+128,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 5U))));
        bufp->chgBit(oldp+129,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__6__KET____DOT__adder__DOT__w1) 
                                      ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                         >> 5U)))));
        bufp->chgBit(oldp+130,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__6__KET____DOT__adder__DOT__w1) 
                                       & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                          >> 5U)) | 
                                      ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                        >> 6U) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                   >> 6U)))))));
        bufp->chgBit(oldp+131,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__6__KET____DOT__adder__DOT__w1) 
                                & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                   >> 5U))));
        bufp->chgBit(oldp+132,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 6U))));
        bufp->chgBit(oldp+133,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__7__KET____DOT__adder__DOT__w1) 
                                      ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                         >> 6U)))));
        bufp->chgBit(oldp+134,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__7__KET____DOT__adder__DOT__w1) 
                                       & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                          >> 6U)) | 
                                      ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                        >> 7U) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                   >> 7U)))))));
        bufp->chgBit(oldp+135,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__7__KET____DOT__adder__DOT__w1) 
                                & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                   >> 6U))));
        bufp->chgBit(oldp+136,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 7U))));
        bufp->chgBit(oldp+137,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__8__KET____DOT__adder__DOT__w1) 
                                      ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                         >> 7U)))));
        bufp->chgBit(oldp+138,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__8__KET____DOT__adder__DOT__w1) 
                                       & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                          >> 7U)) | 
                                      ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                        >> 8U) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                   >> 8U)))))));
        bufp->chgBit(oldp+139,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__8__KET____DOT__adder__DOT__w1) 
                                & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                   >> 7U))));
        bufp->chgBit(oldp+140,((1U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      >> 8U))));
        bufp->chgBit(oldp+141,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__9__KET____DOT__adder__DOT__w1) 
                                      ^ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                         >> 8U)))));
        bufp->chgBit(oldp+142,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__9__KET____DOT__adder__DOT__w1) 
                                       & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                          >> 8U)) | 
                                      ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                        >> 9U) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                   >> 9U)))))));
        bufp->chgBit(oldp+143,(((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__9__KET____DOT__adder__DOT__w1) 
                                & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                   >> 8U))));
        bufp->chgBit(oldp+144,((vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                >> 0x1fU)));
        bufp->chgIData(oldp+145,(vlSelf->top__DOT__pipline__DOT__brc__DOT__sum),32);
        bufp->chgIData(oldp+146,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry),32);
        bufp->chgBit(oldp+147,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 9U))));
        bufp->chgBit(oldp+148,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__10__KET____DOT__adder__DOT__w1) 
                                      ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                         >> 9U)))));
        bufp->chgBit(oldp+149,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__10__KET____DOT__adder__DOT__w1) 
                                       & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                          >> 9U)) | 
                                      ((vlSelf->top__DOT__pipline__DOT__op_a 
                                        >> 0xaU) & 
                                       (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                           >> 0xaU)))))));
        bufp->chgBit(oldp+150,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__10__KET____DOT__adder__DOT__w1) 
                                & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 9U))));
        bufp->chgBit(oldp+151,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0xaU))));
        bufp->chgBit(oldp+152,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__11__KET____DOT__adder__DOT__w1) 
                                      ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+153,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__11__KET____DOT__adder__DOT__w1) 
                                       & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                          >> 0xaU)) 
                                      | ((vlSelf->top__DOT__pipline__DOT__op_a 
                                          >> 0xbU) 
                                         & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                               >> 0xbU)))))));
        bufp->chgBit(oldp+154,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__11__KET____DOT__adder__DOT__w1) 
                                & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0xaU))));
        bufp->chgBit(oldp+155,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0xbU))));
        bufp->chgBit(oldp+156,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__12__KET____DOT__adder__DOT__w1) 
                                      ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+157,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__12__KET____DOT__adder__DOT__w1) 
                                       & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                          >> 0xbU)) 
                                      | ((vlSelf->top__DOT__pipline__DOT__op_a 
                                          >> 0xcU) 
                                         & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                               >> 0xcU)))))));
        bufp->chgBit(oldp+158,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__12__KET____DOT__adder__DOT__w1) 
                                & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0xbU))));
        bufp->chgBit(oldp+159,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0xcU))));
        bufp->chgBit(oldp+160,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__13__KET____DOT__adder__DOT__w1) 
                                      ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+161,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__13__KET____DOT__adder__DOT__w1) 
                                       & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                          >> 0xcU)) 
                                      | ((vlSelf->top__DOT__pipline__DOT__op_a 
                                          >> 0xdU) 
                                         & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                               >> 0xdU)))))));
        bufp->chgBit(oldp+162,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__13__KET____DOT__adder__DOT__w1) 
                                & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0xcU))));
        bufp->chgBit(oldp+163,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0xdU))));
        bufp->chgBit(oldp+164,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__14__KET____DOT__adder__DOT__w1) 
                                      ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+165,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__14__KET____DOT__adder__DOT__w1) 
                                       & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                          >> 0xdU)) 
                                      | ((vlSelf->top__DOT__pipline__DOT__op_a 
                                          >> 0xeU) 
                                         & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                               >> 0xeU)))))));
        bufp->chgBit(oldp+166,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__14__KET____DOT__adder__DOT__w1) 
                                & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0xdU))));
        bufp->chgBit(oldp+167,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0xeU))));
        bufp->chgBit(oldp+168,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__15__KET____DOT__adder__DOT__w1) 
                                      ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+169,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__15__KET____DOT__adder__DOT__w1) 
                                       & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                          >> 0xeU)) 
                                      | ((vlSelf->top__DOT__pipline__DOT__op_a 
                                          >> 0xfU) 
                                         & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                               >> 0xfU)))))));
        bufp->chgBit(oldp+170,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__15__KET____DOT__adder__DOT__w1) 
                                & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0xeU))));
        bufp->chgBit(oldp+171,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0xfU))));
        bufp->chgBit(oldp+172,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__16__KET____DOT__adder__DOT__w1) 
                                      ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+173,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__16__KET____DOT__adder__DOT__w1) 
                                       & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                          >> 0xfU)) 
                                      | ((vlSelf->top__DOT__pipline__DOT__op_a 
                                          >> 0x10U) 
                                         & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                               >> 0x10U)))))));
        bufp->chgBit(oldp+174,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__16__KET____DOT__adder__DOT__w1) 
                                & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0xfU))));
        bufp->chgBit(oldp+175,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x10U))));
        bufp->chgBit(oldp+176,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__17__KET____DOT__adder__DOT__w1) 
                                      ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+177,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__17__KET____DOT__adder__DOT__w1) 
                                       & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                          >> 0x10U)) 
                                      | ((vlSelf->top__DOT__pipline__DOT__op_a 
                                          >> 0x11U) 
                                         & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                               >> 0x11U)))))));
        bufp->chgBit(oldp+178,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__17__KET____DOT__adder__DOT__w1) 
                                & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x10U))));
        bufp->chgBit(oldp+179,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x11U))));
        bufp->chgBit(oldp+180,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__18__KET____DOT__adder__DOT__w1) 
                                      ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+181,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__18__KET____DOT__adder__DOT__w1) 
                                       & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                          >> 0x11U)) 
                                      | ((vlSelf->top__DOT__pipline__DOT__op_a 
                                          >> 0x12U) 
                                         & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                               >> 0x12U)))))));
        bufp->chgBit(oldp+182,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__18__KET____DOT__adder__DOT__w1) 
                                & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x11U))));
        bufp->chgBit(oldp+183,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x12U))));
        bufp->chgBit(oldp+184,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__19__KET____DOT__adder__DOT__w1) 
                                      ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+185,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__19__KET____DOT__adder__DOT__w1) 
                                       & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                          >> 0x12U)) 
                                      | ((vlSelf->top__DOT__pipline__DOT__op_a 
                                          >> 0x13U) 
                                         & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                               >> 0x13U)))))));
        bufp->chgBit(oldp+186,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__19__KET____DOT__adder__DOT__w1) 
                                & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x12U))));
        bufp->chgBit(oldp+187,((1U & vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry)));
        bufp->chgBit(oldp+188,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__1__KET____DOT__adder__DOT__w1) 
                                      ^ vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry))));
        bufp->chgBit(oldp+189,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__1__KET____DOT__adder__DOT__w1) 
                                       & vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry) 
                                      | ((vlSelf->top__DOT__pipline__DOT__op_a 
                                          >> 1U) & 
                                         (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                             >> 1U)))))));
        bufp->chgBit(oldp+190,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__1__KET____DOT__adder__DOT__w1) 
                                & vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry)));
        bufp->chgBit(oldp+191,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x13U))));
        bufp->chgBit(oldp+192,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__20__KET____DOT__adder__DOT__w1) 
                                      ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+193,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__20__KET____DOT__adder__DOT__w1) 
                                       & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                          >> 0x13U)) 
                                      | ((vlSelf->top__DOT__pipline__DOT__op_a 
                                          >> 0x14U) 
                                         & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                               >> 0x14U)))))));
        bufp->chgBit(oldp+194,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__20__KET____DOT__adder__DOT__w1) 
                                & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x13U))));
        bufp->chgBit(oldp+195,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x14U))));
        bufp->chgBit(oldp+196,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__21__KET____DOT__adder__DOT__w1) 
                                      ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+197,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__21__KET____DOT__adder__DOT__w1) 
                                       & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                          >> 0x14U)) 
                                      | ((vlSelf->top__DOT__pipline__DOT__op_a 
                                          >> 0x15U) 
                                         & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                               >> 0x15U)))))));
        bufp->chgBit(oldp+198,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__21__KET____DOT__adder__DOT__w1) 
                                & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x14U))));
        bufp->chgBit(oldp+199,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x15U))));
        bufp->chgBit(oldp+200,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__22__KET____DOT__adder__DOT__w1) 
                                      ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+201,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__22__KET____DOT__adder__DOT__w1) 
                                       & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                          >> 0x15U)) 
                                      | ((vlSelf->top__DOT__pipline__DOT__op_a 
                                          >> 0x16U) 
                                         & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                               >> 0x16U)))))));
        bufp->chgBit(oldp+202,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__22__KET____DOT__adder__DOT__w1) 
                                & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x15U))));
        bufp->chgBit(oldp+203,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x16U))));
        bufp->chgBit(oldp+204,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__23__KET____DOT__adder__DOT__w1) 
                                      ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+205,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__23__KET____DOT__adder__DOT__w1) 
                                       & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                          >> 0x16U)) 
                                      | ((vlSelf->top__DOT__pipline__DOT__op_a 
                                          >> 0x17U) 
                                         & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                               >> 0x17U)))))));
        bufp->chgBit(oldp+206,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__23__KET____DOT__adder__DOT__w1) 
                                & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x16U))));
        bufp->chgBit(oldp+207,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x17U))));
        bufp->chgBit(oldp+208,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__24__KET____DOT__adder__DOT__w1) 
                                      ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+209,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__24__KET____DOT__adder__DOT__w1) 
                                       & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                          >> 0x17U)) 
                                      | ((vlSelf->top__DOT__pipline__DOT__op_a 
                                          >> 0x18U) 
                                         & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                               >> 0x18U)))))));
        bufp->chgBit(oldp+210,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__24__KET____DOT__adder__DOT__w1) 
                                & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x17U))));
        bufp->chgBit(oldp+211,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x18U))));
        bufp->chgBit(oldp+212,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__25__KET____DOT__adder__DOT__w1) 
                                      ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+213,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__25__KET____DOT__adder__DOT__w1) 
                                       & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                          >> 0x18U)) 
                                      | ((vlSelf->top__DOT__pipline__DOT__op_a 
                                          >> 0x19U) 
                                         & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                               >> 0x19U)))))));
        bufp->chgBit(oldp+214,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__25__KET____DOT__adder__DOT__w1) 
                                & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x18U))));
        bufp->chgBit(oldp+215,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x19U))));
        bufp->chgBit(oldp+216,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__26__KET____DOT__adder__DOT__w1) 
                                      ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+217,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__26__KET____DOT__adder__DOT__w1) 
                                       & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                          >> 0x19U)) 
                                      | ((vlSelf->top__DOT__pipline__DOT__op_a 
                                          >> 0x1aU) 
                                         & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                               >> 0x1aU)))))));
        bufp->chgBit(oldp+218,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__26__KET____DOT__adder__DOT__w1) 
                                & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x19U))));
        bufp->chgBit(oldp+219,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+220,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__27__KET____DOT__adder__DOT__w1) 
                                      ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+221,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__27__KET____DOT__adder__DOT__w1) 
                                       & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                          >> 0x1aU)) 
                                      | ((vlSelf->top__DOT__pipline__DOT__op_a 
                                          >> 0x1bU) 
                                         & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                               >> 0x1bU)))))));
        bufp->chgBit(oldp+222,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__27__KET____DOT__adder__DOT__w1) 
                                & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x1aU))));
        bufp->chgBit(oldp+223,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+224,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__28__KET____DOT__adder__DOT__w1) 
                                      ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+225,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__28__KET____DOT__adder__DOT__w1) 
                                       & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                          >> 0x1bU)) 
                                      | ((vlSelf->top__DOT__pipline__DOT__op_a 
                                          >> 0x1cU) 
                                         & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                               >> 0x1cU)))))));
        bufp->chgBit(oldp+226,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__28__KET____DOT__adder__DOT__w1) 
                                & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x1bU))));
        bufp->chgBit(oldp+227,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+228,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__29__KET____DOT__adder__DOT__w1) 
                                      ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+229,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__29__KET____DOT__adder__DOT__w1) 
                                       & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                          >> 0x1cU)) 
                                      | ((vlSelf->top__DOT__pipline__DOT__op_a 
                                          >> 0x1dU) 
                                         & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                               >> 0x1dU)))))));
        bufp->chgBit(oldp+230,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__29__KET____DOT__adder__DOT__w1) 
                                & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x1cU))));
        bufp->chgBit(oldp+231,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 1U))));
        bufp->chgBit(oldp+232,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__2__KET____DOT__adder__DOT__w1) 
                                      ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                         >> 1U)))));
        bufp->chgBit(oldp+233,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__2__KET____DOT__adder__DOT__w1) 
                                       & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                          >> 1U)) | 
                                      ((vlSelf->top__DOT__pipline__DOT__op_a 
                                        >> 2U) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 2U)))))));
        bufp->chgBit(oldp+234,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__2__KET____DOT__adder__DOT__w1) 
                                & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 1U))));
        bufp->chgBit(oldp+235,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+236,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__30__KET____DOT__adder__DOT__w1) 
                                      ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+237,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__30__KET____DOT__adder__DOT__w1) 
                                       & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                          >> 0x1dU)) 
                                      | ((vlSelf->top__DOT__pipline__DOT__op_a 
                                          >> 0x1eU) 
                                         & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                               >> 0x1eU)))))));
        bufp->chgBit(oldp+238,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__30__KET____DOT__adder__DOT__w1) 
                                & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x1dU))));
        bufp->chgBit(oldp+239,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+240,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__31__KET____DOT__adder__DOT__w1) 
                                      ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+241,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__31__KET____DOT__adder__DOT__w1) 
                                       & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                          >> 0x1eU)) 
                                      | ((vlSelf->top__DOT__pipline__DOT__op_a 
                                          >> 0x1fU) 
                                         & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                               >> 0x1fU)))))));
        bufp->chgBit(oldp+242,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__31__KET____DOT__adder__DOT__w1) 
                                & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 0x1eU))));
        bufp->chgBit(oldp+243,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 2U))));
        bufp->chgBit(oldp+244,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__3__KET____DOT__adder__DOT__w1) 
                                      ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                         >> 2U)))));
        bufp->chgBit(oldp+245,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__3__KET____DOT__adder__DOT__w1) 
                                       & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                          >> 2U)) | 
                                      ((vlSelf->top__DOT__pipline__DOT__op_a 
                                        >> 3U) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 3U)))))));
        bufp->chgBit(oldp+246,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__3__KET____DOT__adder__DOT__w1) 
                                & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 2U))));
        bufp->chgBit(oldp+247,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 3U))));
        bufp->chgBit(oldp+248,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__4__KET____DOT__adder__DOT__w1) 
                                      ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                         >> 3U)))));
        bufp->chgBit(oldp+249,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__4__KET____DOT__adder__DOT__w1) 
                                       & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                          >> 3U)) | 
                                      ((vlSelf->top__DOT__pipline__DOT__op_a 
                                        >> 4U) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 4U)))))));
        bufp->chgBit(oldp+250,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__4__KET____DOT__adder__DOT__w1) 
                                & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 3U))));
        bufp->chgBit(oldp+251,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 4U))));
        bufp->chgBit(oldp+252,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__5__KET____DOT__adder__DOT__w1) 
                                      ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                         >> 4U)))));
        bufp->chgBit(oldp+253,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__5__KET____DOT__adder__DOT__w1) 
                                       & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                          >> 4U)) | 
                                      ((vlSelf->top__DOT__pipline__DOT__op_a 
                                        >> 5U) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 5U)))))));
        bufp->chgBit(oldp+254,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__5__KET____DOT__adder__DOT__w1) 
                                & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 4U))));
        bufp->chgBit(oldp+255,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 5U))));
        bufp->chgBit(oldp+256,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__6__KET____DOT__adder__DOT__w1) 
                                      ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                         >> 5U)))));
        bufp->chgBit(oldp+257,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__6__KET____DOT__adder__DOT__w1) 
                                       & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                          >> 5U)) | 
                                      ((vlSelf->top__DOT__pipline__DOT__op_a 
                                        >> 6U) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 6U)))))));
        bufp->chgBit(oldp+258,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__6__KET____DOT__adder__DOT__w1) 
                                & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 5U))));
        bufp->chgBit(oldp+259,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 6U))));
        bufp->chgBit(oldp+260,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__7__KET____DOT__adder__DOT__w1) 
                                      ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                         >> 6U)))));
        bufp->chgBit(oldp+261,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__7__KET____DOT__adder__DOT__w1) 
                                       & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                          >> 6U)) | 
                                      ((vlSelf->top__DOT__pipline__DOT__op_a 
                                        >> 7U) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 7U)))))));
        bufp->chgBit(oldp+262,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__7__KET____DOT__adder__DOT__w1) 
                                & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 6U))));
        bufp->chgBit(oldp+263,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 7U))));
        bufp->chgBit(oldp+264,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__8__KET____DOT__adder__DOT__w1) 
                                      ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                         >> 7U)))));
        bufp->chgBit(oldp+265,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__8__KET____DOT__adder__DOT__w1) 
                                       & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                          >> 7U)) | 
                                      ((vlSelf->top__DOT__pipline__DOT__op_a 
                                        >> 8U) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 8U)))))));
        bufp->chgBit(oldp+266,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__8__KET____DOT__adder__DOT__w1) 
                                & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 7U))));
        bufp->chgBit(oldp+267,((1U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      >> 8U))));
        bufp->chgBit(oldp+268,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__9__KET____DOT__adder__DOT__w1) 
                                      ^ (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                         >> 8U)))));
        bufp->chgBit(oldp+269,((1U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__9__KET____DOT__adder__DOT__w1) 
                                       & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                          >> 8U)) | 
                                      ((vlSelf->top__DOT__pipline__DOT__op_a 
                                        >> 9U) & (~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 9U)))))));
        bufp->chgBit(oldp+270,(((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__9__KET____DOT__adder__DOT__w1) 
                                & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                   >> 8U))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+271,(((IData)(4U) + vlSelf->top__DOT__pipline__DOT__pcF)),32);
        bufp->chgIData(oldp+272,(vlSelf->top__DOT__pipline__DOT__pcF),32);
        bufp->chgIData(oldp+273,(vlSelf->top__DOT__pipline__DOT__pcD),32);
        bufp->chgIData(oldp+274,(vlSelf->top__DOT__pipline__DOT__pc_nxtD),32);
        bufp->chgIData(oldp+275,(vlSelf->top__DOT__pipline__DOT__instrD),32);
        bufp->chgBit(oldp+276,(vlSelf->top__DOT__pipline__DOT__rd_wrenD));
        bufp->chgBit(oldp+277,(vlSelf->top__DOT__pipline__DOT__br_unsignedD));
        bufp->chgBit(oldp+278,((1U & ((0x40U & vlSelf->top__DOT__pipline__DOT__instrD)
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
                                                  == 
                                                  (0x3fU 
                                                   & vlSelf->top__DOT__pipline__DOT__instrD)))))));
        bufp->chgBit(oldp+279,(vlSelf->top__DOT__pipline__DOT__op_b_selD));
        bufp->chgCData(oldp+280,(vlSelf->top__DOT__pipline__DOT__alu_opD),4);
        bufp->chgBit(oldp+281,((IData)(((0x23U == (0x7fU 
                                                   & vlSelf->top__DOT__pipline__DOT__instrD)) 
                                        & ((0U == (7U 
                                                   & (vlSelf->top__DOT__pipline__DOT__instrD 
                                                      >> 0xcU))) 
                                           | ((1U == 
                                               (7U 
                                                & (vlSelf->top__DOT__pipline__DOT__instrD 
                                                   >> 0xcU))) 
                                              | (2U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->top__DOT__pipline__DOT__instrD 
                                                     >> 0xcU)))))))));
        bufp->chgCData(oldp+282,(vlSelf->top__DOT__pipline__DOT__wb_selD),2);
        bufp->chgCData(oldp+283,(((0x40U & vlSelf->top__DOT__pipline__DOT__instrD)
                                   ? 0U : ((0x20U & vlSelf->top__DOT__pipline__DOT__instrD)
                                            ? 0U : 
                                           ((0x10U 
                                             & vlSelf->top__DOT__pipline__DOT__instrD)
                                             ? 0U : 
                                            ((8U & vlSelf->top__DOT__pipline__DOT__instrD)
                                              ? 0U : 
                                             ((4U & vlSelf->top__DOT__pipline__DOT__instrD)
                                               ? 0U
                                               : ((2U 
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
        bufp->chgCData(oldp+284,(vlSelf->top__DOT__pipline__DOT__store_selD),2);
        bufp->chgIData(oldp+285,((((IData)(vlSelf->top__DOT__pipline__DOT__rd_wrenWB) 
                                   & ((IData)(vlSelf->top__DOT__pipline__DOT__rdWB) 
                                      == (0x1fU & (vlSelf->top__DOT__pipline__DOT__instrD 
                                                   >> 0xfU))))
                                   ? vlSelf->top__DOT__pipline__DOT__wb_data
                                   : vlSelf->top__DOT__pipline__DOT__regfile__DOT__register
                                  [(0x1fU & (vlSelf->top__DOT__pipline__DOT__instrD 
                                             >> 0xfU))])),32);
        bufp->chgIData(oldp+286,((((IData)(vlSelf->top__DOT__pipline__DOT__rd_wrenWB) 
                                   & ((IData)(vlSelf->top__DOT__pipline__DOT__rdWB) 
                                      == (0x1fU & (vlSelf->top__DOT__pipline__DOT__instrD 
                                                   >> 0x14U))))
                                   ? vlSelf->top__DOT__pipline__DOT__wb_data
                                   : vlSelf->top__DOT__pipline__DOT__regfile__DOT__register
                                  [(0x1fU & (vlSelf->top__DOT__pipline__DOT__instrD 
                                             >> 0x14U))])),32);
        bufp->chgBit(oldp+287,(vlSelf->top__DOT__pipline__DOT__rd_wrenWB));
        bufp->chgCData(oldp+288,(vlSelf->top__DOT__pipline__DOT__rdWB),5);
        bufp->chgIData(oldp+289,(vlSelf->top__DOT__pipline__DOT__wb_data),32);
        bufp->chgIData(oldp+290,(vlSelf->top__DOT__pipline__DOT__immD),32);
        bufp->chgBit(oldp+291,(vlSelf->top__DOT__pipline__DOT__insn_vld));
        bufp->chgBit(oldp+292,(vlSelf->top__DOT__pipline__DOT__insn_vldE));
        bufp->chgBit(oldp+293,(vlSelf->top__DOT__pipline__DOT__insn_vldM));
        bufp->chgBit(oldp+294,(vlSelf->top__DOT__pipline__DOT__insn_vldWB));
        bufp->chgBit(oldp+295,(vlSelf->top__DOT__pipline__DOT__rd_wrenE));
        bufp->chgCData(oldp+296,(vlSelf->top__DOT__pipline__DOT__wb_selE),2);
        bufp->chgBit(oldp+297,(vlSelf->top__DOT__pipline__DOT__mem_wrenE));
        bufp->chgCData(oldp+298,(vlSelf->top__DOT__pipline__DOT__alu_opE),4);
        bufp->chgBit(oldp+299,(vlSelf->top__DOT__pipline__DOT__op_a_selE));
        bufp->chgBit(oldp+300,(vlSelf->top__DOT__pipline__DOT__op_b_selE));
        bufp->chgBit(oldp+301,(vlSelf->top__DOT__pipline__DOT__br_unsignedE));
        bufp->chgCData(oldp+302,(vlSelf->top__DOT__pipline__DOT__load_selE),3);
        bufp->chgCData(oldp+303,(vlSelf->top__DOT__pipline__DOT__store_selE),2);
        bufp->chgIData(oldp+304,(vlSelf->top__DOT__pipline__DOT__pcE),32);
        bufp->chgIData(oldp+305,(vlSelf->top__DOT__pipline__DOT__pc_nxtE),32);
        bufp->chgIData(oldp+306,(vlSelf->top__DOT__pipline__DOT__o_rs1_dataE),32);
        bufp->chgIData(oldp+307,(vlSelf->top__DOT__pipline__DOT__o_rs2_dataE),32);
        bufp->chgIData(oldp+308,(vlSelf->top__DOT__pipline__DOT__immE),32);
        bufp->chgCData(oldp+309,(vlSelf->top__DOT__pipline__DOT__rdE),5);
        bufp->chgCData(oldp+310,(vlSelf->top__DOT__pipline__DOT__rs1E),5);
        bufp->chgCData(oldp+311,(vlSelf->top__DOT__pipline__DOT__rs2E),5);
        bufp->chgCData(oldp+312,(vlSelf->top__DOT__pipline__DOT__opcodeE),7);
        bufp->chgIData(oldp+313,(vlSelf->top__DOT__pipline__DOT__op_a),32);
        bufp->chgIData(oldp+314,(vlSelf->top__DOT__pipline__DOT__op_b),32);
        bufp->chgCData(oldp+315,(vlSelf->top__DOT__pipline__DOT__forw_a_sel),2);
        bufp->chgCData(oldp+316,(vlSelf->top__DOT__pipline__DOT__forw_b_sel),2);
        bufp->chgCData(oldp+317,(vlSelf->top__DOT__pipline__DOT__opcodeM),7);
        bufp->chgCData(oldp+318,(vlSelf->top__DOT__pipline__DOT__load_selM),3);
        bufp->chgCData(oldp+319,(vlSelf->top__DOT__pipline__DOT__store_selM),2);
        bufp->chgBit(oldp+320,(vlSelf->top__DOT__pipline__DOT__rd_wrenM));
        bufp->chgCData(oldp+321,(vlSelf->top__DOT__pipline__DOT__wb_selM),2);
        bufp->chgBit(oldp+322,(vlSelf->top__DOT__pipline__DOT__mem_wrenM));
        bufp->chgIData(oldp+323,(vlSelf->top__DOT__pipline__DOT__alu_dataM),32);
        bufp->chgIData(oldp+324,(vlSelf->top__DOT__pipline__DOT__st_dataM),32);
        bufp->chgIData(oldp+325,(vlSelf->top__DOT__pipline__DOT__pc_nxtM),32);
        bufp->chgCData(oldp+326,(vlSelf->top__DOT__pipline__DOT__rdM),5);
        bufp->chgIData(oldp+327,(vlSelf->top__DOT__pipline__DOT__pcM),32);
        bufp->chgIData(oldp+328,(vlSelf->top__DOT__pipline__DOT__operand_a),32);
        bufp->chgIData(oldp+329,(vlSelf->top__DOT__pipline__DOT__operand_b),32);
        bufp->chgBit(oldp+330,((vlSelf->top__DOT__pipline__DOT__op_a 
                                == vlSelf->top__DOT__pipline__DOT__op_b)));
        bufp->chgIData(oldp+331,(vlSelf->top__DOT__pipline__DOT__pc_nxtWB),32);
        bufp->chgIData(oldp+332,(vlSelf->top__DOT__pipline__DOT__ld_dataWB),32);
        bufp->chgIData(oldp+333,(vlSelf->top__DOT__pipline__DOT__alu_dataWB),32);
        bufp->chgCData(oldp+334,(vlSelf->top__DOT__pipline__DOT__wb_selWB),2);
        bufp->chgIData(oldp+335,(vlSelf->top__DOT__pipline__DOT__pcWB),32);
        bufp->chgCData(oldp+336,((0x1fU & (vlSelf->top__DOT__pipline__DOT__instrD 
                                           >> 7U))),5);
        bufp->chgCData(oldp+337,((0x1fU & (vlSelf->top__DOT__pipline__DOT__instrD 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+338,((0x1fU & (vlSelf->top__DOT__pipline__DOT__instrD 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+339,((0x7fU & vlSelf->top__DOT__pipline__DOT__instrD)),7);
        bufp->chgIData(oldp+340,((~ vlSelf->top__DOT__pipline__DOT__operand_b)),32);
        bufp->chgBit(oldp+341,((1U & vlSelf->top__DOT__pipline__DOT__operand_a)));
        bufp->chgBit(oldp+342,((1U & (~ vlSelf->top__DOT__pipline__DOT__operand_b))));
        bufp->chgBit(oldp+343,((1U & (~ (IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__adder0__DOT__w1)))));
        bufp->chgBit(oldp+344,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__adder0__DOT__w1) 
                                      | (vlSelf->top__DOT__pipline__DOT__operand_a 
                                         & (~ vlSelf->top__DOT__pipline__DOT__operand_b))))));
        bufp->chgBit(oldp+345,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__adder0__DOT__w1));
        bufp->chgBit(oldp+346,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                      & (~ vlSelf->top__DOT__pipline__DOT__operand_b)))));
        bufp->chgBit(oldp+347,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                      >> 0xaU))));
        bufp->chgBit(oldp+348,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+349,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__10__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+350,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                       >> 0xaU) & (~ 
                                                   (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                    >> 0xaU))))));
        bufp->chgBit(oldp+351,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                      >> 0xbU))));
        bufp->chgBit(oldp+352,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+353,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__11__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+354,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                       >> 0xbU) & (~ 
                                                   (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                    >> 0xbU))))));
        bufp->chgBit(oldp+355,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                      >> 0xcU))));
        bufp->chgBit(oldp+356,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+357,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__12__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+358,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                       >> 0xcU) & (~ 
                                                   (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                    >> 0xcU))))));
        bufp->chgBit(oldp+359,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                      >> 0xdU))));
        bufp->chgBit(oldp+360,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+361,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__13__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+362,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                       >> 0xdU) & (~ 
                                                   (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                    >> 0xdU))))));
        bufp->chgBit(oldp+363,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                      >> 0xeU))));
        bufp->chgBit(oldp+364,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+365,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__14__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+366,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                       >> 0xeU) & (~ 
                                                   (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                    >> 0xeU))))));
        bufp->chgBit(oldp+367,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                      >> 0xfU))));
        bufp->chgBit(oldp+368,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+369,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__15__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+370,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                       >> 0xfU) & (~ 
                                                   (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                    >> 0xfU))))));
        bufp->chgBit(oldp+371,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                      >> 0x10U))));
        bufp->chgBit(oldp+372,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+373,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__16__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+374,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                       >> 0x10U) & 
                                      (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                          >> 0x10U))))));
        bufp->chgBit(oldp+375,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                      >> 0x11U))));
        bufp->chgBit(oldp+376,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+377,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__17__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+378,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                       >> 0x11U) & 
                                      (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                          >> 0x11U))))));
        bufp->chgBit(oldp+379,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                      >> 0x12U))));
        bufp->chgBit(oldp+380,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+381,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__18__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+382,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                       >> 0x12U) & 
                                      (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                          >> 0x12U))))));
        bufp->chgBit(oldp+383,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                      >> 0x13U))));
        bufp->chgBit(oldp+384,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+385,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__19__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+386,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                       >> 0x13U) & 
                                      (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                          >> 0x13U))))));
        bufp->chgBit(oldp+387,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                      >> 1U))));
        bufp->chgBit(oldp+388,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                         >> 1U)))));
        bufp->chgBit(oldp+389,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__1__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+390,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 1U))))));
        bufp->chgBit(oldp+391,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                      >> 0x14U))));
        bufp->chgBit(oldp+392,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+393,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__20__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+394,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                       >> 0x14U) & 
                                      (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                          >> 0x14U))))));
        bufp->chgBit(oldp+395,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                      >> 0x15U))));
        bufp->chgBit(oldp+396,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+397,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__21__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+398,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                       >> 0x15U) & 
                                      (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                          >> 0x15U))))));
        bufp->chgBit(oldp+399,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                      >> 0x16U))));
        bufp->chgBit(oldp+400,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+401,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__22__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+402,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                       >> 0x16U) & 
                                      (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                          >> 0x16U))))));
        bufp->chgBit(oldp+403,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                      >> 0x17U))));
        bufp->chgBit(oldp+404,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+405,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__23__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+406,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                       >> 0x17U) & 
                                      (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                          >> 0x17U))))));
        bufp->chgBit(oldp+407,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                      >> 0x18U))));
        bufp->chgBit(oldp+408,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+409,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__24__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+410,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                       >> 0x18U) & 
                                      (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                          >> 0x18U))))));
        bufp->chgBit(oldp+411,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                      >> 0x19U))));
        bufp->chgBit(oldp+412,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+413,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__25__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+414,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                       >> 0x19U) & 
                                      (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                          >> 0x19U))))));
        bufp->chgBit(oldp+415,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+416,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+417,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__26__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+418,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                       >> 0x1aU) & 
                                      (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                          >> 0x1aU))))));
        bufp->chgBit(oldp+419,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+420,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+421,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__27__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+422,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                       >> 0x1bU) & 
                                      (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                          >> 0x1bU))))));
        bufp->chgBit(oldp+423,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+424,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+425,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__28__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+426,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                       >> 0x1cU) & 
                                      (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                          >> 0x1cU))))));
        bufp->chgBit(oldp+427,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+428,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+429,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__29__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+430,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                       >> 0x1dU) & 
                                      (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                          >> 0x1dU))))));
        bufp->chgBit(oldp+431,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                      >> 2U))));
        bufp->chgBit(oldp+432,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                         >> 2U)))));
        bufp->chgBit(oldp+433,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__2__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+434,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                       >> 2U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 2U))))));
        bufp->chgBit(oldp+435,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+436,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+437,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__30__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+438,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                       >> 0x1eU) & 
                                      (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                          >> 0x1eU))))));
        bufp->chgBit(oldp+439,((vlSelf->top__DOT__pipline__DOT__operand_a 
                                >> 0x1fU)));
        bufp->chgBit(oldp+440,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                         >> 0x1fU)))));
        bufp->chgBit(oldp+441,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__31__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+442,(((vlSelf->top__DOT__pipline__DOT__operand_a 
                                 >> 0x1fU) & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                 >> 0x1fU)))));
        bufp->chgBit(oldp+443,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                      >> 3U))));
        bufp->chgBit(oldp+444,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                         >> 3U)))));
        bufp->chgBit(oldp+445,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__3__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+446,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 3U))))));
        bufp->chgBit(oldp+447,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                      >> 4U))));
        bufp->chgBit(oldp+448,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                         >> 4U)))));
        bufp->chgBit(oldp+449,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__4__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+450,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                       >> 4U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 4U))))));
        bufp->chgBit(oldp+451,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                      >> 5U))));
        bufp->chgBit(oldp+452,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                         >> 5U)))));
        bufp->chgBit(oldp+453,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__5__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+454,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                       >> 5U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 5U))))));
        bufp->chgBit(oldp+455,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                      >> 6U))));
        bufp->chgBit(oldp+456,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                         >> 6U)))));
        bufp->chgBit(oldp+457,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__6__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+458,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                       >> 6U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 6U))))));
        bufp->chgBit(oldp+459,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                      >> 7U))));
        bufp->chgBit(oldp+460,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                         >> 7U)))));
        bufp->chgBit(oldp+461,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__7__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+462,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                       >> 7U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 7U))))));
        bufp->chgBit(oldp+463,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                      >> 8U))));
        bufp->chgBit(oldp+464,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                         >> 8U)))));
        bufp->chgBit(oldp+465,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__8__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+466,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                       >> 8U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 8U))))));
        bufp->chgBit(oldp+467,((1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                      >> 9U))));
        bufp->chgBit(oldp+468,((1U & (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                         >> 9U)))));
        bufp->chgBit(oldp+469,(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__9__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+470,((1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                                       >> 9U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 9U))))));
        bufp->chgIData(oldp+471,((~ vlSelf->top__DOT__pipline__DOT__op_b)),32);
        bufp->chgBit(oldp+472,((1U & vlSelf->top__DOT__pipline__DOT__op_a)));
        bufp->chgBit(oldp+473,((1U & (~ vlSelf->top__DOT__pipline__DOT__op_b))));
        bufp->chgBit(oldp+474,((1U & (~ (IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__adder0__DOT__w1)))));
        bufp->chgBit(oldp+475,((1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__adder0__DOT__w1) 
                                      | (vlSelf->top__DOT__pipline__DOT__op_a 
                                         & (~ vlSelf->top__DOT__pipline__DOT__op_b))))));
        bufp->chgBit(oldp+476,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__adder0__DOT__w1));
        bufp->chgBit(oldp+477,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                      & (~ vlSelf->top__DOT__pipline__DOT__op_b)))));
        bufp->chgBit(oldp+478,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                      >> 0xaU))));
        bufp->chgBit(oldp+479,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+480,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__10__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+481,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                       >> 0xaU) & (~ 
                                                   (vlSelf->top__DOT__pipline__DOT__op_b 
                                                    >> 0xaU))))));
        bufp->chgBit(oldp+482,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                      >> 0xbU))));
        bufp->chgBit(oldp+483,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+484,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__11__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+485,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                       >> 0xbU) & (~ 
                                                   (vlSelf->top__DOT__pipline__DOT__op_b 
                                                    >> 0xbU))))));
        bufp->chgBit(oldp+486,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                      >> 0xcU))));
        bufp->chgBit(oldp+487,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+488,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__12__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+489,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                       >> 0xcU) & (~ 
                                                   (vlSelf->top__DOT__pipline__DOT__op_b 
                                                    >> 0xcU))))));
        bufp->chgBit(oldp+490,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                      >> 0xdU))));
        bufp->chgBit(oldp+491,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+492,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__13__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+493,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                       >> 0xdU) & (~ 
                                                   (vlSelf->top__DOT__pipline__DOT__op_b 
                                                    >> 0xdU))))));
        bufp->chgBit(oldp+494,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                      >> 0xeU))));
        bufp->chgBit(oldp+495,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+496,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__14__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+497,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                       >> 0xeU) & (~ 
                                                   (vlSelf->top__DOT__pipline__DOT__op_b 
                                                    >> 0xeU))))));
        bufp->chgBit(oldp+498,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                      >> 0xfU))));
        bufp->chgBit(oldp+499,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+500,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__15__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+501,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                       >> 0xfU) & (~ 
                                                   (vlSelf->top__DOT__pipline__DOT__op_b 
                                                    >> 0xfU))))));
        bufp->chgBit(oldp+502,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                      >> 0x10U))));
        bufp->chgBit(oldp+503,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+504,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__16__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+505,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                       >> 0x10U) & 
                                      (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                          >> 0x10U))))));
        bufp->chgBit(oldp+506,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                      >> 0x11U))));
        bufp->chgBit(oldp+507,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+508,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__17__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+509,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                       >> 0x11U) & 
                                      (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                          >> 0x11U))))));
        bufp->chgBit(oldp+510,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                      >> 0x12U))));
        bufp->chgBit(oldp+511,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+512,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__18__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+513,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                       >> 0x12U) & 
                                      (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                          >> 0x12U))))));
        bufp->chgBit(oldp+514,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                      >> 0x13U))));
        bufp->chgBit(oldp+515,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+516,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__19__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+517,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                       >> 0x13U) & 
                                      (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                          >> 0x13U))))));
        bufp->chgBit(oldp+518,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                      >> 1U))));
        bufp->chgBit(oldp+519,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                         >> 1U)))));
        bufp->chgBit(oldp+520,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__1__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+521,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 1U))))));
        bufp->chgBit(oldp+522,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                      >> 0x14U))));
        bufp->chgBit(oldp+523,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+524,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__20__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+525,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                       >> 0x14U) & 
                                      (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                          >> 0x14U))))));
        bufp->chgBit(oldp+526,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                      >> 0x15U))));
        bufp->chgBit(oldp+527,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+528,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__21__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+529,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                       >> 0x15U) & 
                                      (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                          >> 0x15U))))));
        bufp->chgBit(oldp+530,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                      >> 0x16U))));
        bufp->chgBit(oldp+531,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+532,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__22__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+533,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                       >> 0x16U) & 
                                      (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                          >> 0x16U))))));
        bufp->chgBit(oldp+534,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                      >> 0x17U))));
        bufp->chgBit(oldp+535,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+536,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__23__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+537,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                       >> 0x17U) & 
                                      (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                          >> 0x17U))))));
        bufp->chgBit(oldp+538,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                      >> 0x18U))));
        bufp->chgBit(oldp+539,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+540,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__24__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+541,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                       >> 0x18U) & 
                                      (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                          >> 0x18U))))));
        bufp->chgBit(oldp+542,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                      >> 0x19U))));
        bufp->chgBit(oldp+543,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+544,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__25__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+545,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                       >> 0x19U) & 
                                      (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                          >> 0x19U))))));
        bufp->chgBit(oldp+546,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+547,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+548,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__26__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+549,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                       >> 0x1aU) & 
                                      (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                          >> 0x1aU))))));
        bufp->chgBit(oldp+550,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+551,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+552,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__27__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+553,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                       >> 0x1bU) & 
                                      (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                          >> 0x1bU))))));
        bufp->chgBit(oldp+554,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+555,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+556,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__28__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+557,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                       >> 0x1cU) & 
                                      (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                          >> 0x1cU))))));
        bufp->chgBit(oldp+558,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+559,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+560,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__29__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+561,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                       >> 0x1dU) & 
                                      (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                          >> 0x1dU))))));
        bufp->chgBit(oldp+562,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                      >> 2U))));
        bufp->chgBit(oldp+563,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                         >> 2U)))));
        bufp->chgBit(oldp+564,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__2__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+565,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                       >> 2U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 2U))))));
        bufp->chgBit(oldp+566,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+567,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+568,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__30__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+569,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                       >> 0x1eU) & 
                                      (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                          >> 0x1eU))))));
        bufp->chgBit(oldp+570,((vlSelf->top__DOT__pipline__DOT__op_a 
                                >> 0x1fU)));
        bufp->chgBit(oldp+571,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                         >> 0x1fU)))));
        bufp->chgBit(oldp+572,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__31__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+573,(((vlSelf->top__DOT__pipline__DOT__op_a 
                                 >> 0x1fU) & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                                 >> 0x1fU)))));
        bufp->chgBit(oldp+574,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                      >> 3U))));
        bufp->chgBit(oldp+575,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                         >> 3U)))));
        bufp->chgBit(oldp+576,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__3__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+577,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 3U))))));
        bufp->chgBit(oldp+578,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                      >> 4U))));
        bufp->chgBit(oldp+579,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                         >> 4U)))));
        bufp->chgBit(oldp+580,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__4__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+581,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                       >> 4U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 4U))))));
        bufp->chgBit(oldp+582,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                      >> 5U))));
        bufp->chgBit(oldp+583,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                         >> 5U)))));
        bufp->chgBit(oldp+584,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__5__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+585,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                       >> 5U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 5U))))));
        bufp->chgBit(oldp+586,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                      >> 6U))));
        bufp->chgBit(oldp+587,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                         >> 6U)))));
        bufp->chgBit(oldp+588,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__6__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+589,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                       >> 6U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 6U))))));
        bufp->chgBit(oldp+590,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                      >> 7U))));
        bufp->chgBit(oldp+591,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                         >> 7U)))));
        bufp->chgBit(oldp+592,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__7__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+593,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                       >> 7U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 7U))))));
        bufp->chgBit(oldp+594,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                      >> 8U))));
        bufp->chgBit(oldp+595,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                         >> 8U)))));
        bufp->chgBit(oldp+596,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__8__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+597,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                       >> 8U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 8U))))));
        bufp->chgBit(oldp+598,((1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                      >> 9U))));
        bufp->chgBit(oldp+599,((1U & (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                         >> 9U)))));
        bufp->chgBit(oldp+600,(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__9__KET____DOT__adder__DOT__w1));
        bufp->chgBit(oldp+601,((1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                                       >> 9U) & (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 9U))))));
        bufp->chgCData(oldp+602,((7U & (vlSelf->top__DOT__pipline__DOT__instrD 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+603,((vlSelf->top__DOT__pipline__DOT__instrD 
                                  >> 0x19U)),7);
        bufp->chgSData(oldp+604,((0x1fffU & vlSelf->top__DOT__pipline__DOT__alu_dataM)),13);
        bufp->chgCData(oldp+605,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__hex_reg[0]),8);
        bufp->chgCData(oldp+606,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__hex_reg[1]),8);
        bufp->chgCData(oldp+607,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__hex_reg[2]),8);
        bufp->chgCData(oldp+608,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__hex_reg[3]),8);
        bufp->chgCData(oldp+609,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__hex_reg[4]),8);
        bufp->chgCData(oldp+610,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__hex_reg[5]),8);
        bufp->chgCData(oldp+611,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__hex_reg[6]),8);
        bufp->chgCData(oldp+612,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__hex_reg[7]),8);
        bufp->chgCData(oldp+613,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__led_r_reg[0]),8);
        bufp->chgCData(oldp+614,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__led_r_reg[1]),8);
        bufp->chgCData(oldp+615,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__led_r_reg[2]),8);
        bufp->chgCData(oldp+616,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__led_r_reg[3]),8);
        bufp->chgCData(oldp+617,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__led_g_reg),8);
        bufp->chgCData(oldp+618,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__lcd_reg[0]),8);
        bufp->chgCData(oldp+619,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__lcd_reg[1]),8);
        bufp->chgCData(oldp+620,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__lcd_reg[2]),8);
        bufp->chgCData(oldp+621,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__lcd_reg[3]),8);
        bufp->chgIData(oldp+622,(vlSelf->top__DOT__pipline__DOT__lsu__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+623,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[0]),32);
        bufp->chgIData(oldp+624,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[1]),32);
        bufp->chgIData(oldp+625,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[2]),32);
        bufp->chgIData(oldp+626,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[3]),32);
        bufp->chgIData(oldp+627,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[4]),32);
        bufp->chgIData(oldp+628,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[5]),32);
        bufp->chgIData(oldp+629,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[6]),32);
        bufp->chgIData(oldp+630,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[7]),32);
        bufp->chgIData(oldp+631,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[8]),32);
        bufp->chgIData(oldp+632,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[9]),32);
        bufp->chgIData(oldp+633,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[10]),32);
        bufp->chgIData(oldp+634,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[11]),32);
        bufp->chgIData(oldp+635,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[12]),32);
        bufp->chgIData(oldp+636,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[13]),32);
        bufp->chgIData(oldp+637,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[14]),32);
        bufp->chgIData(oldp+638,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[15]),32);
        bufp->chgIData(oldp+639,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[16]),32);
        bufp->chgIData(oldp+640,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[17]),32);
        bufp->chgIData(oldp+641,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[18]),32);
        bufp->chgIData(oldp+642,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[19]),32);
        bufp->chgIData(oldp+643,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[20]),32);
        bufp->chgIData(oldp+644,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[21]),32);
        bufp->chgIData(oldp+645,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[22]),32);
        bufp->chgIData(oldp+646,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[23]),32);
        bufp->chgIData(oldp+647,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[24]),32);
        bufp->chgIData(oldp+648,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[25]),32);
        bufp->chgIData(oldp+649,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[26]),32);
        bufp->chgIData(oldp+650,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[27]),32);
        bufp->chgIData(oldp+651,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[28]),32);
        bufp->chgIData(oldp+652,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[29]),32);
        bufp->chgIData(oldp+653,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[30]),32);
        bufp->chgIData(oldp+654,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[31]),32);
        bufp->chgIData(oldp+655,(vlSelf->top__DOT__pipline__DOT__regfile__DOT__i),32);
    }
    bufp->chgBit(oldp+656,(vlSelf->i_clk));
    bufp->chgBit(oldp+657,(vlSelf->i_rst_n));
    bufp->chgIData(oldp+658,(vlSelf->i_io_sw),32);
    bufp->chgBit(oldp+659,(vlSelf->o_insn_vld));
    bufp->chgIData(oldp+660,(vlSelf->o_pc_debug),32);
    bufp->chgIData(oldp+661,(vlSelf->o_io_lcd),32);
    bufp->chgIData(oldp+662,(vlSelf->o_io_ledg),32);
    bufp->chgIData(oldp+663,(vlSelf->o_io_ledr),32);
    bufp->chgCData(oldp+664,(vlSelf->o_io_hex0),7);
    bufp->chgCData(oldp+665,(vlSelf->o_io_hex1),7);
    bufp->chgCData(oldp+666,(vlSelf->o_io_hex2),7);
    bufp->chgCData(oldp+667,(vlSelf->o_io_hex3),7);
    bufp->chgCData(oldp+668,(vlSelf->o_io_hex4),7);
    bufp->chgCData(oldp+669,(vlSelf->o_io_hex5),7);
    bufp->chgCData(oldp+670,(vlSelf->o_io_hex6),7);
    bufp->chgCData(oldp+671,(vlSelf->o_io_hex7),7);
    bufp->chgCData(oldp+672,((0xffU & vlSelf->i_io_sw)),8);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
