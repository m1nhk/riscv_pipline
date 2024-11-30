// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__pipline__DOT__alu__DOT____Vxrand_h96fd10a2__0 
        = VL_RAND_RESET_I(32);
    VL_READMEM_N(true, 32, 2048, 0, std::string{"mem.dump"}
                 ,  &(vlSelf->top__DOT__pipline__DOT__imem__DOT__inst_mem)
                 , 0, ~0ULL);
}

extern const VlUnpacked<CData/*0:0*/, 4096> Vtop__ConstPool__TABLE_h1f2434b8_0;

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Init
    CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__1__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__2__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__3__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__4__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__5__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__6__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__7__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__8__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__9__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__10__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__11__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__12__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__13__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__14__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__15__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__16__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__17__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__18__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__19__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__20__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__21__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__22__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__23__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__24__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__25__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__26__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__27__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__28__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__29__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__30__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__31__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__1__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__2__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__3__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__4__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__5__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__6__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__7__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__8__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__9__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__10__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__11__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__12__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__13__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__14__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__15__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__16__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__17__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__18__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__19__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__20__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__21__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__22__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__23__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__24__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__25__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__26__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__27__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__28__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__29__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__30__KET____DOT__adder__DOT__w2;
    CData/*0:0*/ top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__31__KET____DOT__adder__DOT__w2;
    SData/*11:0*/ __Vtableidx1;
    // Body
    vlSelf->top__DOT__pipline__DOT__lsu__DOT__sw_reg[0U] 
        = (0xffU & vlSelf->i_io_sw);
    vlSelf->top__DOT__pipline__DOT__lsu__DOT__sw_reg[1U] 
        = (0xffU & (vlSelf->i_io_sw >> 8U));
    vlSelf->top__DOT__pipline__DOT__lsu__DOT__sw_reg[2U] 
        = (0xffU & (vlSelf->i_io_sw >> 0x10U));
    vlSelf->top__DOT__pipline__DOT__lsu__DOT__sw_reg[3U] 
        = (vlSelf->i_io_sw >> 0x18U);
    if ((0x40U & vlSelf->top__DOT__pipline__DOT__instrD)) {
        vlSelf->top__DOT__pipline__DOT__insn_vld = 
            (1U & (IData)(((0x20U == (0x30U & vlSelf->top__DOT__pipline__DOT__instrD)) 
                           & ((8U & vlSelf->top__DOT__pipline__DOT__instrD)
                               ? (IData)((7U == (7U 
                                                 & vlSelf->top__DOT__pipline__DOT__instrD)))
                               : ((4U & vlSelf->top__DOT__pipline__DOT__instrD)
                                   ? ((vlSelf->top__DOT__pipline__DOT__instrD 
                                       >> 1U) & vlSelf->top__DOT__pipline__DOT__instrD)
                                   : ((vlSelf->top__DOT__pipline__DOT__instrD 
                                       >> 1U) & vlSelf->top__DOT__pipline__DOT__instrD))))));
        vlSelf->top__DOT__pipline__DOT__rd_wrenD = 
            (1U & (IData)(((0x20U == (0x30U & vlSelf->top__DOT__pipline__DOT__instrD)) 
                           & ((8U & vlSelf->top__DOT__pipline__DOT__instrD)
                               ? (IData)((7U == (7U 
                                                 & vlSelf->top__DOT__pipline__DOT__instrD)))
                               : (IData)((7U == (7U 
                                                 & vlSelf->top__DOT__pipline__DOT__instrD)))))));
        vlSelf->top__DOT__pipline__DOT__op_b_selD = 
            (1U & (IData)(((0x20U == (0x30U & vlSelf->top__DOT__pipline__DOT__instrD)) 
                           & ((8U & vlSelf->top__DOT__pipline__DOT__instrD)
                               ? (IData)((7U == (7U 
                                                 & vlSelf->top__DOT__pipline__DOT__instrD)))
                               : ((4U & vlSelf->top__DOT__pipline__DOT__instrD)
                                   ? ((vlSelf->top__DOT__pipline__DOT__instrD 
                                       >> 1U) & vlSelf->top__DOT__pipline__DOT__instrD)
                                   : ((vlSelf->top__DOT__pipline__DOT__instrD 
                                       >> 1U) & vlSelf->top__DOT__pipline__DOT__instrD))))));
        vlSelf->top__DOT__pipline__DOT__alu_opD = 0U;
        vlSelf->top__DOT__pipline__DOT__br_unsignedD = 0U;
        if ((0x20U & vlSelf->top__DOT__pipline__DOT__instrD)) {
            if ((0x10U & vlSelf->top__DOT__pipline__DOT__instrD)) {
                vlSelf->top__DOT__pipline__DOT__wb_selD = 0U;
                vlSelf->top__DOT__pipline__DOT__immD = 0U;
            } else if ((8U & vlSelf->top__DOT__pipline__DOT__instrD)) {
                if ((4U & vlSelf->top__DOT__pipline__DOT__instrD)) {
                    if ((2U & vlSelf->top__DOT__pipline__DOT__instrD)) {
                        if ((1U & vlSelf->top__DOT__pipline__DOT__instrD)) {
                            vlSelf->top__DOT__pipline__DOT__wb_selD = 2U;
                            vlSelf->top__DOT__pipline__DOT__immD 
                                = (((- (IData)((vlSelf->top__DOT__pipline__DOT__instrD 
                                                >> 0x1fU))) 
                                    << 0x14U) | ((0xff000U 
                                                  & vlSelf->top__DOT__pipline__DOT__instrD) 
                                                 | ((0x800U 
                                                     & (vlSelf->top__DOT__pipline__DOT__instrD 
                                                        >> 9U)) 
                                                    | ((0x7e0U 
                                                        & (vlSelf->top__DOT__pipline__DOT__instrD 
                                                           >> 0x14U)) 
                                                       | (0x1eU 
                                                          & (vlSelf->top__DOT__pipline__DOT__instrD 
                                                             >> 0x14U))))));
                        } else {
                            vlSelf->top__DOT__pipline__DOT__wb_selD = 0U;
                            vlSelf->top__DOT__pipline__DOT__immD = 0U;
                        }
                    } else {
                        vlSelf->top__DOT__pipline__DOT__wb_selD = 0U;
                        vlSelf->top__DOT__pipline__DOT__immD = 0U;
                    }
                } else {
                    vlSelf->top__DOT__pipline__DOT__wb_selD = 0U;
                    vlSelf->top__DOT__pipline__DOT__immD = 0U;
                }
            } else if ((4U & vlSelf->top__DOT__pipline__DOT__instrD)) {
                if ((2U & vlSelf->top__DOT__pipline__DOT__instrD)) {
                    if ((1U & vlSelf->top__DOT__pipline__DOT__instrD)) {
                        vlSelf->top__DOT__pipline__DOT__wb_selD = 3U;
                        vlSelf->top__DOT__pipline__DOT__immD 
                            = (((- (IData)((vlSelf->top__DOT__pipline__DOT__instrD 
                                            >> 0x1fU))) 
                                << 0xbU) | (0x7ffU 
                                            & (vlSelf->top__DOT__pipline__DOT__instrD 
                                               >> 0x14U)));
                    } else {
                        vlSelf->top__DOT__pipline__DOT__wb_selD = 0U;
                        vlSelf->top__DOT__pipline__DOT__immD = 0U;
                    }
                } else {
                    vlSelf->top__DOT__pipline__DOT__wb_selD = 0U;
                    vlSelf->top__DOT__pipline__DOT__immD = 0U;
                }
            } else {
                vlSelf->top__DOT__pipline__DOT__wb_selD = 0U;
                vlSelf->top__DOT__pipline__DOT__immD 
                    = ((2U & vlSelf->top__DOT__pipline__DOT__instrD)
                        ? ((1U & vlSelf->top__DOT__pipline__DOT__instrD)
                            ? (((- (IData)((vlSelf->top__DOT__pipline__DOT__instrD 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0x800U 
                                             & (vlSelf->top__DOT__pipline__DOT__instrD 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelf->top__DOT__pipline__DOT__instrD 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->top__DOT__pipline__DOT__instrD 
                                                     >> 7U)))))
                            : 0U) : 0U);
            }
        } else {
            vlSelf->top__DOT__pipline__DOT__wb_selD = 0U;
            vlSelf->top__DOT__pipline__DOT__immD = 0U;
        }
        vlSelf->top__DOT__pipline__DOT__store_selD = 0U;
    } else if ((0x20U & vlSelf->top__DOT__pipline__DOT__instrD)) {
        if ((0x10U & vlSelf->top__DOT__pipline__DOT__instrD)) {
            vlSelf->top__DOT__pipline__DOT__insn_vld 
                = (1U & ((~ (vlSelf->top__DOT__pipline__DOT__instrD 
                             >> 3U)) & ((4U & vlSelf->top__DOT__pipline__DOT__instrD)
                                         ? ((vlSelf->top__DOT__pipline__DOT__instrD 
                                             >> 1U) 
                                            & vlSelf->top__DOT__pipline__DOT__instrD)
                                         : ((vlSelf->top__DOT__pipline__DOT__instrD 
                                             >> 1U) 
                                            & (vlSelf->top__DOT__pipline__DOT__instrD 
                                               & (~ 
                                                  ((0x20U 
                                                    != 
                                                    (vlSelf->top__DOT__pipline__DOT__instrD 
                                                     >> 0x19U)) 
                                                   & (0U 
                                                      != 
                                                      (vlSelf->top__DOT__pipline__DOT__instrD 
                                                       >> 0x19U)))))))));
            vlSelf->top__DOT__pipline__DOT__op_b_selD 
                = (1U & (IData)((7U == (0xfU & vlSelf->top__DOT__pipline__DOT__instrD))));
            if ((8U & vlSelf->top__DOT__pipline__DOT__instrD)) {
                vlSelf->top__DOT__pipline__DOT__alu_opD = 0U;
                vlSelf->top__DOT__pipline__DOT__br_unsignedD = 0U;
                vlSelf->top__DOT__pipline__DOT__immD = 0U;
            } else if ((4U & vlSelf->top__DOT__pipline__DOT__instrD)) {
                if ((2U & vlSelf->top__DOT__pipline__DOT__instrD)) {
                    if ((1U & vlSelf->top__DOT__pipline__DOT__instrD)) {
                        vlSelf->top__DOT__pipline__DOT__alu_opD = 0xaU;
                        vlSelf->top__DOT__pipline__DOT__immD 
                            = (0xfffff000U & vlSelf->top__DOT__pipline__DOT__instrD);
                    } else {
                        vlSelf->top__DOT__pipline__DOT__alu_opD = 0U;
                        vlSelf->top__DOT__pipline__DOT__immD = 0U;
                    }
                } else {
                    vlSelf->top__DOT__pipline__DOT__alu_opD = 0U;
                    vlSelf->top__DOT__pipline__DOT__immD = 0U;
                }
                vlSelf->top__DOT__pipline__DOT__br_unsignedD = 0U;
            } else {
                if ((2U & vlSelf->top__DOT__pipline__DOT__instrD)) {
                    if ((1U & vlSelf->top__DOT__pipline__DOT__instrD)) {
                        if (((0x20U != (vlSelf->top__DOT__pipline__DOT__instrD 
                                        >> 0x19U)) 
                             & (0U != (vlSelf->top__DOT__pipline__DOT__instrD 
                                       >> 0x19U)))) {
                            vlSelf->top__DOT__pipline__DOT__alu_opD = 0U;
                            vlSelf->top__DOT__pipline__DOT__br_unsignedD = 0U;
                        } else {
                            vlSelf->top__DOT__pipline__DOT__alu_opD 
                                = ((0x4000U & vlSelf->top__DOT__pipline__DOT__instrD)
                                    ? ((0x2000U & vlSelf->top__DOT__pipline__DOT__instrD)
                                        ? ((0x1000U 
                                            & vlSelf->top__DOT__pipline__DOT__instrD)
                                            ? 6U : 5U)
                                        : ((0x1000U 
                                            & vlSelf->top__DOT__pipline__DOT__instrD)
                                            ? ((0x40000000U 
                                                & vlSelf->top__DOT__pipline__DOT__instrD)
                                                ? 9U
                                                : 8U)
                                            : 4U)) : 
                                   ((0x2000U & vlSelf->top__DOT__pipline__DOT__instrD)
                                     ? ((0x1000U & vlSelf->top__DOT__pipline__DOT__instrD)
                                         ? 3U : 2U)
                                     : ((0x1000U & vlSelf->top__DOT__pipline__DOT__instrD)
                                         ? 7U : ((0x40000000U 
                                                  & vlSelf->top__DOT__pipline__DOT__instrD)
                                                  ? 1U
                                                  : 0U))));
                            vlSelf->top__DOT__pipline__DOT__br_unsignedD = 0U;
                            if ((1U & (~ (vlSelf->top__DOT__pipline__DOT__instrD 
                                          >> 0xeU)))) {
                                if ((0x2000U & vlSelf->top__DOT__pipline__DOT__instrD)) {
                                    if ((0x1000U & vlSelf->top__DOT__pipline__DOT__instrD)) {
                                        vlSelf->top__DOT__pipline__DOT__br_unsignedD = 1U;
                                    }
                                }
                            }
                        }
                    } else {
                        vlSelf->top__DOT__pipline__DOT__alu_opD = 0U;
                        vlSelf->top__DOT__pipline__DOT__br_unsignedD = 0U;
                    }
                } else {
                    vlSelf->top__DOT__pipline__DOT__alu_opD = 0U;
                    vlSelf->top__DOT__pipline__DOT__br_unsignedD = 0U;
                }
                vlSelf->top__DOT__pipline__DOT__immD = 0U;
            }
            vlSelf->top__DOT__pipline__DOT__store_selD = 0U;
        } else {
            if ((8U & vlSelf->top__DOT__pipline__DOT__instrD)) {
                vlSelf->top__DOT__pipline__DOT__insn_vld = 0U;
                vlSelf->top__DOT__pipline__DOT__store_selD = 0U;
                vlSelf->top__DOT__pipline__DOT__immD = 0U;
            } else if ((4U & vlSelf->top__DOT__pipline__DOT__instrD)) {
                vlSelf->top__DOT__pipline__DOT__insn_vld = 0U;
                vlSelf->top__DOT__pipline__DOT__store_selD = 0U;
                vlSelf->top__DOT__pipline__DOT__immD = 0U;
            } else if ((2U & vlSelf->top__DOT__pipline__DOT__instrD)) {
                if ((1U & vlSelf->top__DOT__pipline__DOT__instrD)) {
                    vlSelf->top__DOT__pipline__DOT__insn_vld = 1U;
                    if ((0U != (7U & (vlSelf->top__DOT__pipline__DOT__instrD 
                                      >> 0xcU)))) {
                        if ((1U != (7U & (vlSelf->top__DOT__pipline__DOT__instrD 
                                          >> 0xcU)))) {
                            if ((2U != (7U & (vlSelf->top__DOT__pipline__DOT__instrD 
                                              >> 0xcU)))) {
                                vlSelf->top__DOT__pipline__DOT__insn_vld = 0U;
                            }
                        }
                    }
                    vlSelf->top__DOT__pipline__DOT__store_selD 
                        = ((0U == (7U & (vlSelf->top__DOT__pipline__DOT__instrD 
                                         >> 0xcU)))
                            ? 1U : ((1U == (7U & (vlSelf->top__DOT__pipline__DOT__instrD 
                                                  >> 0xcU)))
                                     ? 2U : ((2U == 
                                              (7U & 
                                               (vlSelf->top__DOT__pipline__DOT__instrD 
                                                >> 0xcU)))
                                              ? 3U : 0U)));
                    vlSelf->top__DOT__pipline__DOT__immD 
                        = (((- (IData)((vlSelf->top__DOT__pipline__DOT__instrD 
                                        >> 0x1fU))) 
                            << 0xbU) | ((0x7e0U & (vlSelf->top__DOT__pipline__DOT__instrD 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->top__DOT__pipline__DOT__instrD 
                                            >> 7U))));
                } else {
                    vlSelf->top__DOT__pipline__DOT__insn_vld = 0U;
                    vlSelf->top__DOT__pipline__DOT__store_selD = 0U;
                    vlSelf->top__DOT__pipline__DOT__immD = 0U;
                }
            } else {
                vlSelf->top__DOT__pipline__DOT__insn_vld = 0U;
                vlSelf->top__DOT__pipline__DOT__store_selD = 0U;
                vlSelf->top__DOT__pipline__DOT__immD = 0U;
            }
            vlSelf->top__DOT__pipline__DOT__op_b_selD 
                = (1U & (IData)(((3U == (0xfU & vlSelf->top__DOT__pipline__DOT__instrD)) 
                                 & ((0U == (7U & (vlSelf->top__DOT__pipline__DOT__instrD 
                                                  >> 0xcU))) 
                                    | ((1U == (7U & 
                                               (vlSelf->top__DOT__pipline__DOT__instrD 
                                                >> 0xcU))) 
                                       | (2U == (7U 
                                                 & (vlSelf->top__DOT__pipline__DOT__instrD 
                                                    >> 0xcU))))))));
            vlSelf->top__DOT__pipline__DOT__alu_opD = 0U;
            vlSelf->top__DOT__pipline__DOT__br_unsignedD = 0U;
        }
        vlSelf->top__DOT__pipline__DOT__rd_wrenD = 
            (1U & (IData)(((0x10U == (0x18U & vlSelf->top__DOT__pipline__DOT__instrD)) 
                           & ((4U & vlSelf->top__DOT__pipline__DOT__instrD)
                               ? ((vlSelf->top__DOT__pipline__DOT__instrD 
                                   >> 1U) & vlSelf->top__DOT__pipline__DOT__instrD)
                               : ((vlSelf->top__DOT__pipline__DOT__instrD 
                                   >> 1U) & (vlSelf->top__DOT__pipline__DOT__instrD 
                                             & (~ (
                                                   (0x20U 
                                                    != 
                                                    (vlSelf->top__DOT__pipline__DOT__instrD 
                                                     >> 0x19U)) 
                                                   & (0U 
                                                      != 
                                                      (vlSelf->top__DOT__pipline__DOT__instrD 
                                                       >> 0x19U))))))))));
        vlSelf->top__DOT__pipline__DOT__wb_selD = 0U;
    } else {
        if ((0x10U & vlSelf->top__DOT__pipline__DOT__instrD)) {
            if ((8U & vlSelf->top__DOT__pipline__DOT__instrD)) {
                vlSelf->top__DOT__pipline__DOT__insn_vld = 0U;
                vlSelf->top__DOT__pipline__DOT__alu_opD = 0U;
                vlSelf->top__DOT__pipline__DOT__br_unsignedD = 0U;
                vlSelf->top__DOT__pipline__DOT__immD = 0U;
            } else if ((4U & vlSelf->top__DOT__pipline__DOT__instrD)) {
                vlSelf->top__DOT__pipline__DOT__insn_vld 
                    = (IData)((3U == (3U & vlSelf->top__DOT__pipline__DOT__instrD)));
                vlSelf->top__DOT__pipline__DOT__alu_opD = 0U;
                vlSelf->top__DOT__pipline__DOT__br_unsignedD = 0U;
                vlSelf->top__DOT__pipline__DOT__immD 
                    = ((2U & vlSelf->top__DOT__pipline__DOT__instrD)
                        ? ((1U & vlSelf->top__DOT__pipline__DOT__instrD)
                            ? (0xfffff000U & vlSelf->top__DOT__pipline__DOT__instrD)
                            : 0U) : 0U);
            } else if ((2U & vlSelf->top__DOT__pipline__DOT__instrD)) {
                if ((1U & vlSelf->top__DOT__pipline__DOT__instrD)) {
                    vlSelf->top__DOT__pipline__DOT__insn_vld = 1U;
                    if ((0x4000U & vlSelf->top__DOT__pipline__DOT__instrD)) {
                        if ((1U & (~ (vlSelf->top__DOT__pipline__DOT__instrD 
                                      >> 0xdU)))) {
                            if ((0x1000U & vlSelf->top__DOT__pipline__DOT__instrD)) {
                                if ((1U & (~ ((0U == 
                                               (vlSelf->top__DOT__pipline__DOT__instrD 
                                                >> 0x19U)) 
                                              | (0x20U 
                                                 == 
                                                 (vlSelf->top__DOT__pipline__DOT__instrD 
                                                  >> 0x19U)))))) {
                                    vlSelf->top__DOT__pipline__DOT__insn_vld = 0U;
                                }
                            }
                        }
                        vlSelf->top__DOT__pipline__DOT__alu_opD 
                            = ((0x2000U & vlSelf->top__DOT__pipline__DOT__instrD)
                                ? ((0x1000U & vlSelf->top__DOT__pipline__DOT__instrD)
                                    ? 6U : 5U) : ((0x1000U 
                                                   & vlSelf->top__DOT__pipline__DOT__instrD)
                                                   ? 
                                                  (((0U 
                                                     == 
                                                     (vlSelf->top__DOT__pipline__DOT__instrD 
                                                      >> 0x19U)) 
                                                    | (0x20U 
                                                       == 
                                                       (vlSelf->top__DOT__pipline__DOT__instrD 
                                                        >> 0x19U)))
                                                    ? 
                                                   ((0x40000000U 
                                                     & vlSelf->top__DOT__pipline__DOT__instrD)
                                                     ? 9U
                                                     : 8U)
                                                    : 0U)
                                                   : 4U));
                    } else {
                        if ((1U & (~ (vlSelf->top__DOT__pipline__DOT__instrD 
                                      >> 0xdU)))) {
                            if ((0x1000U & vlSelf->top__DOT__pipline__DOT__instrD)) {
                                if ((0U != (vlSelf->top__DOT__pipline__DOT__instrD 
                                            >> 0x19U))) {
                                    vlSelf->top__DOT__pipline__DOT__insn_vld = 0U;
                                }
                            }
                        }
                        vlSelf->top__DOT__pipline__DOT__alu_opD 
                            = ((0x2000U & vlSelf->top__DOT__pipline__DOT__instrD)
                                ? ((0x1000U & vlSelf->top__DOT__pipline__DOT__instrD)
                                    ? 3U : 2U) : ((0x1000U 
                                                   & vlSelf->top__DOT__pipline__DOT__instrD)
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (vlSelf->top__DOT__pipline__DOT__instrD 
                                                     >> 0x19U))
                                                    ? 7U
                                                    : 0U)
                                                   : 0U));
                    }
                    vlSelf->top__DOT__pipline__DOT__br_unsignedD = 0U;
                    if ((1U & (~ (vlSelf->top__DOT__pipline__DOT__instrD 
                                  >> 0xeU)))) {
                        if ((0x2000U & vlSelf->top__DOT__pipline__DOT__instrD)) {
                            if ((0x1000U & vlSelf->top__DOT__pipline__DOT__instrD)) {
                                vlSelf->top__DOT__pipline__DOT__br_unsignedD = 1U;
                            }
                        }
                    }
                    vlSelf->top__DOT__pipline__DOT__immD 
                        = (((- (IData)((vlSelf->top__DOT__pipline__DOT__instrD 
                                        >> 0x1fU))) 
                            << 0xbU) | (0x7ffU & (vlSelf->top__DOT__pipline__DOT__instrD 
                                                  >> 0x14U)));
                } else {
                    vlSelf->top__DOT__pipline__DOT__insn_vld = 0U;
                    vlSelf->top__DOT__pipline__DOT__alu_opD = 0U;
                    vlSelf->top__DOT__pipline__DOT__br_unsignedD = 0U;
                    vlSelf->top__DOT__pipline__DOT__immD = 0U;
                }
            } else {
                vlSelf->top__DOT__pipline__DOT__insn_vld = 0U;
                vlSelf->top__DOT__pipline__DOT__alu_opD = 0U;
                vlSelf->top__DOT__pipline__DOT__br_unsignedD = 0U;
                vlSelf->top__DOT__pipline__DOT__immD = 0U;
            }
            vlSelf->top__DOT__pipline__DOT__rd_wrenD 
                = (1U & ((~ (vlSelf->top__DOT__pipline__DOT__instrD 
                             >> 3U)) & ((4U & vlSelf->top__DOT__pipline__DOT__instrD)
                                         ? ((vlSelf->top__DOT__pipline__DOT__instrD 
                                             >> 1U) 
                                            & vlSelf->top__DOT__pipline__DOT__instrD)
                                         : ((vlSelf->top__DOT__pipline__DOT__instrD 
                                             >> 1U) 
                                            & vlSelf->top__DOT__pipline__DOT__instrD))));
            vlSelf->top__DOT__pipline__DOT__op_b_selD 
                = (1U & ((~ (vlSelf->top__DOT__pipline__DOT__instrD 
                             >> 3U)) & ((4U & vlSelf->top__DOT__pipline__DOT__instrD)
                                         ? ((vlSelf->top__DOT__pipline__DOT__instrD 
                                             >> 1U) 
                                            & vlSelf->top__DOT__pipline__DOT__instrD)
                                         : ((vlSelf->top__DOT__pipline__DOT__instrD 
                                             >> 1U) 
                                            & vlSelf->top__DOT__pipline__DOT__instrD))));
            vlSelf->top__DOT__pipline__DOT__wb_selD = 0U;
        } else {
            if ((8U & vlSelf->top__DOT__pipline__DOT__instrD)) {
                vlSelf->top__DOT__pipline__DOT__insn_vld = 0U;
                vlSelf->top__DOT__pipline__DOT__wb_selD = 0U;
                vlSelf->top__DOT__pipline__DOT__immD = 0U;
            } else if ((4U & vlSelf->top__DOT__pipline__DOT__instrD)) {
                vlSelf->top__DOT__pipline__DOT__insn_vld = 0U;
                vlSelf->top__DOT__pipline__DOT__wb_selD = 0U;
                vlSelf->top__DOT__pipline__DOT__immD = 0U;
            } else if ((2U & vlSelf->top__DOT__pipline__DOT__instrD)) {
                if ((1U & vlSelf->top__DOT__pipline__DOT__instrD)) {
                    vlSelf->top__DOT__pipline__DOT__insn_vld = 1U;
                    if ((0x4000U & vlSelf->top__DOT__pipline__DOT__instrD)) {
                        if ((0x2000U & vlSelf->top__DOT__pipline__DOT__instrD)) {
                            vlSelf->top__DOT__pipline__DOT__insn_vld = 0U;
                            vlSelf->top__DOT__pipline__DOT__wb_selD = 0U;
                        } else {
                            vlSelf->top__DOT__pipline__DOT__wb_selD = 1U;
                        }
                    } else if ((0x2000U & vlSelf->top__DOT__pipline__DOT__instrD)) {
                        if ((0x1000U & vlSelf->top__DOT__pipline__DOT__instrD)) {
                            vlSelf->top__DOT__pipline__DOT__insn_vld = 0U;
                            vlSelf->top__DOT__pipline__DOT__wb_selD = 0U;
                        } else {
                            vlSelf->top__DOT__pipline__DOT__wb_selD = 1U;
                        }
                    } else {
                        vlSelf->top__DOT__pipline__DOT__wb_selD = 1U;
                    }
                    vlSelf->top__DOT__pipline__DOT__immD 
                        = (((- (IData)((vlSelf->top__DOT__pipline__DOT__instrD 
                                        >> 0x1fU))) 
                            << 0xbU) | (0x7ffU & (vlSelf->top__DOT__pipline__DOT__instrD 
                                                  >> 0x14U)));
                } else {
                    vlSelf->top__DOT__pipline__DOT__insn_vld = 0U;
                    vlSelf->top__DOT__pipline__DOT__wb_selD = 0U;
                    vlSelf->top__DOT__pipline__DOT__immD = 0U;
                }
            } else {
                vlSelf->top__DOT__pipline__DOT__insn_vld = 0U;
                vlSelf->top__DOT__pipline__DOT__wb_selD = 0U;
                vlSelf->top__DOT__pipline__DOT__immD = 0U;
            }
            vlSelf->top__DOT__pipline__DOT__rd_wrenD 
                = (1U & (IData)(((3U == (0xfU & vlSelf->top__DOT__pipline__DOT__instrD)) 
                                 & ((0x4000U & vlSelf->top__DOT__pipline__DOT__instrD)
                                     ? (~ (vlSelf->top__DOT__pipline__DOT__instrD 
                                           >> 0xdU))
                                     : (IData)((0x3000U 
                                                != 
                                                (0x3000U 
                                                 & vlSelf->top__DOT__pipline__DOT__instrD)))))));
            vlSelf->top__DOT__pipline__DOT__op_b_selD 
                = (1U & (IData)(((3U == (0xfU & vlSelf->top__DOT__pipline__DOT__instrD)) 
                                 & ((0x4000U & vlSelf->top__DOT__pipline__DOT__instrD)
                                     ? (~ (vlSelf->top__DOT__pipline__DOT__instrD 
                                           >> 0xdU))
                                     : (IData)((0x3000U 
                                                != 
                                                (0x3000U 
                                                 & vlSelf->top__DOT__pipline__DOT__instrD)))))));
            vlSelf->top__DOT__pipline__DOT__alu_opD = 0U;
            vlSelf->top__DOT__pipline__DOT__br_unsignedD = 0U;
        }
        vlSelf->top__DOT__pipline__DOT__store_selD = 0U;
    }
    vlSelf->o_io_hex0 = (0x7fU & vlSelf->top__DOT__pipline__DOT__lsu__DOT__hex_reg
                         [0U]);
    vlSelf->o_io_hex1 = (0x7fU & vlSelf->top__DOT__pipline__DOT__lsu__DOT__hex_reg
                         [1U]);
    vlSelf->o_io_hex2 = (0x7fU & vlSelf->top__DOT__pipline__DOT__lsu__DOT__hex_reg
                         [2U]);
    vlSelf->o_io_hex3 = (0x7fU & vlSelf->top__DOT__pipline__DOT__lsu__DOT__hex_reg
                         [3U]);
    vlSelf->o_io_hex4 = (0x7fU & vlSelf->top__DOT__pipline__DOT__lsu__DOT__hex_reg
                         [4U]);
    vlSelf->o_io_hex5 = (0x7fU & vlSelf->top__DOT__pipline__DOT__lsu__DOT__hex_reg
                         [5U]);
    vlSelf->o_io_hex6 = (0x7fU & vlSelf->top__DOT__pipline__DOT__lsu__DOT__hex_reg
                         [6U]);
    vlSelf->o_io_hex7 = (0x7fU & vlSelf->top__DOT__pipline__DOT__lsu__DOT__hex_reg
                         [7U]);
    vlSelf->o_io_ledg = vlSelf->top__DOT__pipline__DOT__lsu__DOT__led_g_reg;
    vlSelf->o_io_ledr = ((0xff000000U & vlSelf->o_io_ledr) 
                         | ((vlSelf->top__DOT__pipline__DOT__lsu__DOT__led_r_reg
                             [2U] << 0x10U) | ((vlSelf->top__DOT__pipline__DOT__lsu__DOT__led_r_reg
                                                [1U] 
                                                << 8U) 
                                               | vlSelf->top__DOT__pipline__DOT__lsu__DOT__led_r_reg
                                               [0U])));
    vlSelf->o_io_ledr = ((0xffffffU & vlSelf->o_io_ledr) 
                         | (vlSelf->top__DOT__pipline__DOT__lsu__DOT__led_r_reg
                            [3U] << 0x18U));
    vlSelf->o_io_lcd = ((0xff000000U & vlSelf->o_io_lcd) 
                        | ((vlSelf->top__DOT__pipline__DOT__lsu__DOT__lcd_reg
                            [2U] << 0x10U) | ((vlSelf->top__DOT__pipline__DOT__lsu__DOT__lcd_reg
                                               [1U] 
                                               << 8U) 
                                              | vlSelf->top__DOT__pipline__DOT__lsu__DOT__lcd_reg
                                              [0U])));
    vlSelf->o_io_lcd = ((0xffffffU & vlSelf->o_io_lcd) 
                        | (vlSelf->top__DOT__pipline__DOT__lsu__DOT__lcd_reg
                           [3U] << 0x18U));
    vlSelf->top__DOT__pipline__DOT__wb_data = ((2U 
                                                & (IData)(vlSelf->top__DOT__pipline__DOT__wb_selWB))
                                                ? vlSelf->top__DOT__pipline__DOT__pc_nxtWB
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->top__DOT__pipline__DOT__wb_selWB))
                                                    ? vlSelf->top__DOT__pipline__DOT__ld_dataWB
                                                    : vlSelf->top__DOT__pipline__DOT__alu_dataWB));
    vlSelf->top__DOT__pipline__DOT__forw_a_sel = ((
                                                   ((IData)(vlSelf->top__DOT__pipline__DOT__rd_wrenM) 
                                                    & (0U 
                                                       != (IData)(vlSelf->top__DOT__pipline__DOT__rdM))) 
                                                   & ((IData)(vlSelf->top__DOT__pipline__DOT__rdM) 
                                                      == (IData)(vlSelf->top__DOT__pipline__DOT__rs1E)))
                                                   ? 2U
                                                   : 
                                                  ((((IData)(vlSelf->top__DOT__pipline__DOT__rd_wrenWB) 
                                                     & (0U 
                                                        != (IData)(vlSelf->top__DOT__pipline__DOT__rdWB))) 
                                                    & ((IData)(vlSelf->top__DOT__pipline__DOT__rdWB) 
                                                       == (IData)(vlSelf->top__DOT__pipline__DOT__rs1E)))
                                                    ? 1U
                                                    : 0U));
    vlSelf->top__DOT__pipline__DOT__forw_b_sel = ((
                                                   ((IData)(vlSelf->top__DOT__pipline__DOT__rd_wrenM) 
                                                    & (0U 
                                                       != (IData)(vlSelf->top__DOT__pipline__DOT__rdM))) 
                                                   & ((IData)(vlSelf->top__DOT__pipline__DOT__rdM) 
                                                      == (IData)(vlSelf->top__DOT__pipline__DOT__rs2E)))
                                                   ? 2U
                                                   : 
                                                  ((((IData)(vlSelf->top__DOT__pipline__DOT__rd_wrenWB) 
                                                     & (0U 
                                                        != (IData)(vlSelf->top__DOT__pipline__DOT__rdWB))) 
                                                    & ((IData)(vlSelf->top__DOT__pipline__DOT__rdWB) 
                                                       == (IData)(vlSelf->top__DOT__pipline__DOT__rs2E)))
                                                    ? 1U
                                                    : 0U));
    vlSelf->top__DOT__pipline__DOT__instr = ((IData)(vlSelf->i_rst_n)
                                              ? vlSelf->top__DOT__pipline__DOT__imem__DOT__inst_mem
                                             [(0x7ffU 
                                               & (vlSelf->top__DOT__pipline__DOT__pcF 
                                                  >> 2U))]
                                              : 0U);
    if ((0x4000U & vlSelf->top__DOT__pipline__DOT__alu_dataM)) {
        if ((0x800U & vlSelf->top__DOT__pipline__DOT__alu_dataM)) {
            if ((0x10U & vlSelf->top__DOT__pipline__DOT__alu_dataM)) {
                if ((0x10U & vlSelf->top__DOT__pipline__DOT__alu_dataM)) {
                    vlSelf->top__DOT__pipline__DOT__ld_dataM 
                        = ((0xffffff00U & vlSelf->top__DOT__pipline__DOT__ld_dataM) 
                           | (0xffU & vlSelf->i_io_sw));
                }
            } else if ((4U & (IData)(vlSelf->top__DOT__pipline__DOT__load_selM))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__pipline__DOT__load_selM) 
                              >> 1U)))) {
                    vlSelf->top__DOT__pipline__DOT__ld_dataM 
                        = ((1U & (IData)(vlSelf->top__DOT__pipline__DOT__load_selM))
                            ? ((vlSelf->top__DOT__pipline__DOT__lsu__DOT__sw_reg
                                [3U] << 0x18U) | ((
                                                   vlSelf->top__DOT__pipline__DOT__lsu__DOT__sw_reg
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->top__DOT__pipline__DOT__lsu__DOT__sw_reg
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->top__DOT__pipline__DOT__lsu__DOT__sw_reg
                                                     [0U])))
                            : ((vlSelf->top__DOT__pipline__DOT__lsu__DOT__sw_reg
                                [1U] << 8U) | vlSelf->top__DOT__pipline__DOT__lsu__DOT__sw_reg
                               [0U]));
                }
            } else if ((2U & (IData)(vlSelf->top__DOT__pipline__DOT__load_selM))) {
                vlSelf->top__DOT__pipline__DOT__ld_dataM 
                    = ((1U & (IData)(vlSelf->top__DOT__pipline__DOT__load_selM))
                        ? vlSelf->top__DOT__pipline__DOT__lsu__DOT__sw_reg
                       [0U] : (((- (IData)((1U & (vlSelf->top__DOT__pipline__DOT__lsu__DOT__sw_reg
                                                  [1U] 
                                                  >> 7U)))) 
                                << 0x10U) | ((vlSelf->top__DOT__pipline__DOT__lsu__DOT__sw_reg
                                              [1U] 
                                              << 8U) 
                                             | vlSelf->top__DOT__pipline__DOT__lsu__DOT__sw_reg
                                             [0U])));
            } else if ((1U & (IData)(vlSelf->top__DOT__pipline__DOT__load_selM))) {
                vlSelf->top__DOT__pipline__DOT__ld_dataM 
                    = (((- (IData)((1U & (vlSelf->top__DOT__pipline__DOT__lsu__DOT__sw_reg
                                          [0U] >> 7U)))) 
                        << 8U) | vlSelf->top__DOT__pipline__DOT__lsu__DOT__sw_reg
                       [0U]);
            }
        } else if ((0U == (3U & (vlSelf->top__DOT__pipline__DOT__alu_dataM 
                                 >> 4U)))) {
            if ((4U & (IData)(vlSelf->top__DOT__pipline__DOT__load_selM))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__pipline__DOT__load_selM) 
                              >> 1U)))) {
                    vlSelf->top__DOT__pipline__DOT__ld_dataM 
                        = ((1U & (IData)(vlSelf->top__DOT__pipline__DOT__load_selM))
                            ? ((vlSelf->top__DOT__pipline__DOT__lsu__DOT__led_r_reg
                                [3U] << 0x18U) | ((
                                                   vlSelf->top__DOT__pipline__DOT__lsu__DOT__led_r_reg
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->top__DOT__pipline__DOT__lsu__DOT__led_r_reg
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->top__DOT__pipline__DOT__lsu__DOT__led_r_reg
                                                     [0U])))
                            : ((vlSelf->top__DOT__pipline__DOT__lsu__DOT__led_r_reg
                                [1U] << 8U) | vlSelf->top__DOT__pipline__DOT__lsu__DOT__led_r_reg
                               [0U]));
                }
            } else if ((2U & (IData)(vlSelf->top__DOT__pipline__DOT__load_selM))) {
                vlSelf->top__DOT__pipline__DOT__ld_dataM 
                    = ((1U & (IData)(vlSelf->top__DOT__pipline__DOT__load_selM))
                        ? vlSelf->top__DOT__pipline__DOT__lsu__DOT__led_r_reg
                       [0U] : (((- (IData)((1U & (vlSelf->top__DOT__pipline__DOT__lsu__DOT__led_r_reg
                                                  [1U] 
                                                  >> 7U)))) 
                                << 0x10U) | ((vlSelf->top__DOT__pipline__DOT__lsu__DOT__led_r_reg
                                              [1U] 
                                              << 8U) 
                                             | vlSelf->top__DOT__pipline__DOT__lsu__DOT__led_r_reg
                                             [0U])));
            } else if ((1U & (IData)(vlSelf->top__DOT__pipline__DOT__load_selM))) {
                vlSelf->top__DOT__pipline__DOT__ld_dataM 
                    = (((- (IData)((1U & (vlSelf->top__DOT__pipline__DOT__lsu__DOT__led_r_reg
                                          [0U] >> 7U)))) 
                        << 8U) | vlSelf->top__DOT__pipline__DOT__lsu__DOT__led_r_reg
                       [0U]);
            }
        } else if ((1U == (3U & (vlSelf->top__DOT__pipline__DOT__alu_dataM 
                                 >> 4U)))) {
            vlSelf->top__DOT__pipline__DOT__ld_dataM 
                = vlSelf->top__DOT__pipline__DOT__lsu__DOT__led_g_reg;
        }
    } else if ((0x800U & vlSelf->top__DOT__pipline__DOT__alu_dataM)) {
        if ((4U & (IData)(vlSelf->top__DOT__pipline__DOT__load_selM))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__pipline__DOT__load_selM) 
                          >> 1U)))) {
                vlSelf->top__DOT__pipline__DOT__ld_dataM 
                    = ((1U & (IData)(vlSelf->top__DOT__pipline__DOT__load_selM))
                        ? ((vlSelf->top__DOT__pipline__DOT__lsu__DOT__dmem
                            [(0x1fffU & ((IData)(3U) 
                                         + vlSelf->top__DOT__pipline__DOT__alu_dataM))] 
                            << 0x18U) | ((vlSelf->top__DOT__pipline__DOT__lsu__DOT__dmem
                                          [(0x1fffU 
                                            & ((IData)(2U) 
                                               + vlSelf->top__DOT__pipline__DOT__alu_dataM))] 
                                          << 0x10U) 
                                         | ((vlSelf->top__DOT__pipline__DOT__lsu__DOT__dmem
                                             [(0x1fffU 
                                               & ((IData)(1U) 
                                                  + vlSelf->top__DOT__pipline__DOT__alu_dataM))] 
                                             << 8U) 
                                            | vlSelf->top__DOT__pipline__DOT__lsu__DOT__dmem
                                            [(0x1fffU 
                                              & vlSelf->top__DOT__pipline__DOT__alu_dataM)])))
                        : ((vlSelf->top__DOT__pipline__DOT__lsu__DOT__dmem
                            [(0x1fffU & ((IData)(1U) 
                                         + vlSelf->top__DOT__pipline__DOT__alu_dataM))] 
                            << 8U) | vlSelf->top__DOT__pipline__DOT__lsu__DOT__dmem
                           [(0x1fffU & vlSelf->top__DOT__pipline__DOT__alu_dataM)]));
            }
        } else if ((2U & (IData)(vlSelf->top__DOT__pipline__DOT__load_selM))) {
            vlSelf->top__DOT__pipline__DOT__ld_dataM 
                = ((1U & (IData)(vlSelf->top__DOT__pipline__DOT__load_selM))
                    ? vlSelf->top__DOT__pipline__DOT__lsu__DOT__dmem
                   [(0x1fffU & vlSelf->top__DOT__pipline__DOT__alu_dataM)]
                    : (((- (IData)((1U & (vlSelf->top__DOT__pipline__DOT__lsu__DOT__dmem
                                          [(0x1fffU 
                                            & ((IData)(1U) 
                                               + vlSelf->top__DOT__pipline__DOT__alu_dataM))] 
                                          >> 7U)))) 
                        << 0x10U) | ((vlSelf->top__DOT__pipline__DOT__lsu__DOT__dmem
                                      [(0x1fffU & ((IData)(1U) 
                                                   + vlSelf->top__DOT__pipline__DOT__alu_dataM))] 
                                      << 8U) | vlSelf->top__DOT__pipline__DOT__lsu__DOT__dmem
                                     [(0x1fffU & vlSelf->top__DOT__pipline__DOT__alu_dataM)])));
        } else if ((1U & (IData)(vlSelf->top__DOT__pipline__DOT__load_selM))) {
            vlSelf->top__DOT__pipline__DOT__ld_dataM 
                = (((- (IData)((1U & (vlSelf->top__DOT__pipline__DOT__lsu__DOT__dmem
                                      [(0x1fffU & vlSelf->top__DOT__pipline__DOT__alu_dataM)] 
                                      >> 7U)))) << 8U) 
                   | vlSelf->top__DOT__pipline__DOT__lsu__DOT__dmem
                   [(0x1fffU & vlSelf->top__DOT__pipline__DOT__alu_dataM)]);
        }
    } else if ((4U & (IData)(vlSelf->top__DOT__pipline__DOT__load_selM))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__pipline__DOT__load_selM) 
                      >> 1U)))) {
            vlSelf->top__DOT__pipline__DOT__ld_dataM 
                = ((1U & (IData)(vlSelf->top__DOT__pipline__DOT__load_selM))
                    ? ((vlSelf->top__DOT__pipline__DOT__lsu__DOT__dmem
                        [(0x1fffU & ((IData)(3U) + vlSelf->top__DOT__pipline__DOT__alu_dataM))] 
                        << 0x18U) | ((vlSelf->top__DOT__pipline__DOT__lsu__DOT__dmem
                                      [(0x1fffU & ((IData)(2U) 
                                                   + vlSelf->top__DOT__pipline__DOT__alu_dataM))] 
                                      << 0x10U) | (
                                                   (vlSelf->top__DOT__pipline__DOT__lsu__DOT__dmem
                                                    [
                                                    (0x1fffU 
                                                     & ((IData)(1U) 
                                                        + vlSelf->top__DOT__pipline__DOT__alu_dataM))] 
                                                    << 8U) 
                                                   | vlSelf->top__DOT__pipline__DOT__lsu__DOT__dmem
                                                   [
                                                   (0x1fffU 
                                                    & vlSelf->top__DOT__pipline__DOT__alu_dataM)])))
                    : ((vlSelf->top__DOT__pipline__DOT__lsu__DOT__dmem
                        [(0x1fffU & ((IData)(1U) + vlSelf->top__DOT__pipline__DOT__alu_dataM))] 
                        << 8U) | vlSelf->top__DOT__pipline__DOT__lsu__DOT__dmem
                       [(0x1fffU & vlSelf->top__DOT__pipline__DOT__alu_dataM)]));
        }
    } else if ((2U & (IData)(vlSelf->top__DOT__pipline__DOT__load_selM))) {
        vlSelf->top__DOT__pipline__DOT__ld_dataM = 
            ((1U & (IData)(vlSelf->top__DOT__pipline__DOT__load_selM))
              ? vlSelf->top__DOT__pipline__DOT__lsu__DOT__dmem
             [(0x1fffU & vlSelf->top__DOT__pipline__DOT__alu_dataM)]
              : (((- (IData)((1U & (vlSelf->top__DOT__pipline__DOT__lsu__DOT__dmem
                                    [(0x1fffU & ((IData)(1U) 
                                                 + vlSelf->top__DOT__pipline__DOT__alu_dataM))] 
                                    >> 7U)))) << 0x10U) 
                 | ((vlSelf->top__DOT__pipline__DOT__lsu__DOT__dmem
                     [(0x1fffU & ((IData)(1U) + vlSelf->top__DOT__pipline__DOT__alu_dataM))] 
                     << 8U) | vlSelf->top__DOT__pipline__DOT__lsu__DOT__dmem
                    [(0x1fffU & vlSelf->top__DOT__pipline__DOT__alu_dataM)])));
    } else if ((1U & (IData)(vlSelf->top__DOT__pipline__DOT__load_selM))) {
        vlSelf->top__DOT__pipline__DOT__ld_dataM = 
            (((- (IData)((1U & (vlSelf->top__DOT__pipline__DOT__lsu__DOT__dmem
                                [(0x1fffU & vlSelf->top__DOT__pipline__DOT__alu_dataM)] 
                                >> 7U)))) << 8U) | 
             vlSelf->top__DOT__pipline__DOT__lsu__DOT__dmem
             [(0x1fffU & vlSelf->top__DOT__pipline__DOT__alu_dataM)]);
    }
    vlSelf->top__DOT__pipline__DOT__op_a = ((0U == (IData)(vlSelf->top__DOT__pipline__DOT__forw_a_sel))
                                             ? vlSelf->top__DOT__pipline__DOT__o_rs1_dataE
                                             : ((1U 
                                                 == (IData)(vlSelf->top__DOT__pipline__DOT__forw_a_sel))
                                                 ? vlSelf->top__DOT__pipline__DOT__wb_data
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->top__DOT__pipline__DOT__forw_a_sel))
                                                  ? vlSelf->top__DOT__pipline__DOT__alu_dataM
                                                  : 0U)));
    vlSelf->top__DOT__pipline__DOT__op_b = ((0U == (IData)(vlSelf->top__DOT__pipline__DOT__forw_b_sel))
                                             ? vlSelf->top__DOT__pipline__DOT__o_rs2_dataE
                                             : ((1U 
                                                 == (IData)(vlSelf->top__DOT__pipline__DOT__forw_b_sel))
                                                 ? vlSelf->top__DOT__pipline__DOT__wb_data
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->top__DOT__pipline__DOT__forw_b_sel))
                                                  ? vlSelf->top__DOT__pipline__DOT__alu_dataM
                                                  : 0U)));
    vlSelf->top__DOT__pipline__DOT__operand_a = ((IData)(vlSelf->top__DOT__pipline__DOT__op_a_selE)
                                                  ? vlSelf->top__DOT__pipline__DOT__pcE
                                                  : vlSelf->top__DOT__pipline__DOT__op_a);
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__1__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                  >> 1U) ^ (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                               >> 1U))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__2__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                  >> 2U) ^ (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                               >> 2U))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__3__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                  >> 3U) ^ (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                               >> 3U))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__4__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                  >> 4U) ^ (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                               >> 4U))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__5__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                  >> 5U) ^ (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                               >> 5U))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__6__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                  >> 6U) ^ (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                               >> 6U))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__7__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                  >> 7U) ^ (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                               >> 7U))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__8__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                  >> 8U) ^ (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                               >> 8U))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__9__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                  >> 9U) ^ (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                               >> 9U))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__10__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                  >> 0xaU) ^ (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                 >> 0xaU))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__11__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                  >> 0xbU) ^ (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                 >> 0xbU))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__12__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                  >> 0xcU) ^ (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                 >> 0xcU))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__13__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                  >> 0xdU) ^ (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                 >> 0xdU))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__14__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                  >> 0xeU) ^ (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                 >> 0xeU))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__15__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                  >> 0xfU) ^ (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                 >> 0xfU))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__16__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                  >> 0x10U) ^ (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                  >> 0x10U))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__17__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                  >> 0x11U) ^ (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                  >> 0x11U))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__18__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                  >> 0x12U) ^ (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                  >> 0x12U))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__19__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                  >> 0x13U) ^ (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                  >> 0x13U))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__20__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                  >> 0x14U) ^ (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                  >> 0x14U))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__21__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                  >> 0x15U) ^ (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                  >> 0x15U))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__22__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                  >> 0x16U) ^ (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                  >> 0x16U))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__23__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                  >> 0x17U) ^ (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                  >> 0x17U))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__24__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                  >> 0x18U) ^ (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                  >> 0x18U))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__25__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                  >> 0x19U) ^ (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                  >> 0x19U))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__26__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                  >> 0x1aU) ^ (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                  >> 0x1aU))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__27__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                  >> 0x1bU) ^ (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                  >> 0x1bU))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__28__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                  >> 0x1cU) ^ (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                  >> 0x1cU))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__29__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                  >> 0x1dU) ^ (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                  >> 0x1dU))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__30__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__op_a 
                  >> 0x1eU) ^ (~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                  >> 0x1eU))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__31__KET____DOT__adder__DOT__w1 
        = (1U ^ ((vlSelf->top__DOT__pipline__DOT__op_a 
                  ^ vlSelf->top__DOT__pipline__DOT__op_b) 
                 >> 0x1fU));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__adder0__DOT__w1 
        = (1U & (vlSelf->top__DOT__pipline__DOT__op_a 
                 ^ (~ vlSelf->top__DOT__pipline__DOT__op_b)));
    vlSelf->top__DOT__pipline__DOT__operand_b = ((IData)(vlSelf->top__DOT__pipline__DOT__op_b_selE)
                                                  ? vlSelf->top__DOT__pipline__DOT__immE
                                                  : vlSelf->top__DOT__pipline__DOT__op_b);
    vlSelf->top__DOT__pipline__DOT__brc__DOT__sum = 
        ((0xfffffffeU & vlSelf->top__DOT__pipline__DOT__brc__DOT__sum) 
         | (1U & (~ (IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__adder0__DOT__w1))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
        = ((0xfffffffeU & vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry) 
           | (1U & ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__adder0__DOT__w1) 
                    | (vlSelf->top__DOT__pipline__DOT__op_a 
                       & (~ vlSelf->top__DOT__pipline__DOT__op_b)))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__1__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                  >> 1U) ^ (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                               >> 1U))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__2__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                  >> 2U) ^ (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                               >> 2U))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__3__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                  >> 3U) ^ (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                               >> 3U))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__4__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                  >> 4U) ^ (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                               >> 4U))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__5__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                  >> 5U) ^ (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                               >> 5U))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__6__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                  >> 6U) ^ (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                               >> 6U))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__7__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                  >> 7U) ^ (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                               >> 7U))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__8__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                  >> 8U) ^ (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                               >> 8U))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__9__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                  >> 9U) ^ (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                               >> 9U))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__10__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                  >> 0xaU) ^ (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                 >> 0xaU))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__11__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                  >> 0xbU) ^ (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                 >> 0xbU))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__12__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                  >> 0xcU) ^ (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                 >> 0xcU))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__13__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                  >> 0xdU) ^ (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                 >> 0xdU))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__14__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                  >> 0xeU) ^ (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                 >> 0xeU))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__15__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                  >> 0xfU) ^ (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                 >> 0xfU))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__16__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                  >> 0x10U) ^ (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                  >> 0x10U))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__17__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                  >> 0x11U) ^ (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                  >> 0x11U))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__18__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                  >> 0x12U) ^ (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                  >> 0x12U))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__19__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                  >> 0x13U) ^ (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                  >> 0x13U))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__20__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                  >> 0x14U) ^ (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                  >> 0x14U))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__21__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                  >> 0x15U) ^ (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                  >> 0x15U))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__22__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                  >> 0x16U) ^ (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                  >> 0x16U))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__23__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                  >> 0x17U) ^ (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                  >> 0x17U))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__24__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                  >> 0x18U) ^ (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                  >> 0x18U))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__25__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                  >> 0x19U) ^ (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                  >> 0x19U))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__26__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                  >> 0x1aU) ^ (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                  >> 0x1aU))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__27__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                  >> 0x1bU) ^ (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                  >> 0x1bU))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__28__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                  >> 0x1cU) ^ (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                  >> 0x1cU))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__29__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                  >> 0x1dU) ^ (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                  >> 0x1dU))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__30__KET____DOT__adder__DOT__w1 
        = (1U & ((vlSelf->top__DOT__pipline__DOT__operand_a 
                  >> 0x1eU) ^ (~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                  >> 0x1eU))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__31__KET____DOT__adder__DOT__w1 
        = (1U ^ ((vlSelf->top__DOT__pipline__DOT__operand_a 
                  ^ vlSelf->top__DOT__pipline__DOT__operand_b) 
                 >> 0x1fU));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__adder0__DOT__w1 
        = (1U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                 ^ (~ vlSelf->top__DOT__pipline__DOT__operand_b)));
    top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__1__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__1__KET____DOT__adder__DOT__w1) 
           & vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry);
    top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__2__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__2__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
              >> 1U));
    top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__3__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__3__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
              >> 2U));
    top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__4__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__4__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
              >> 3U));
    top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__5__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__5__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
              >> 4U));
    top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__6__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__6__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
              >> 5U));
    top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__7__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__7__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
              >> 6U));
    top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__8__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__8__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
              >> 7U));
    top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__9__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__9__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
              >> 8U));
    top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__10__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__10__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
              >> 9U));
    top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__11__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__11__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
              >> 0xaU));
    top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__12__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__12__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
              >> 0xbU));
    top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__13__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__13__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
              >> 0xcU));
    top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__14__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__14__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
              >> 0xdU));
    top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__15__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__15__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
              >> 0xeU));
    top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__16__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__16__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
              >> 0xfU));
    top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__17__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__17__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
              >> 0x10U));
    top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__18__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__18__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
              >> 0x11U));
    top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__19__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__19__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
              >> 0x12U));
    top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__20__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__20__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
              >> 0x13U));
    top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__21__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__21__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
              >> 0x14U));
    top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__22__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__22__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
              >> 0x15U));
    top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__23__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__23__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
              >> 0x16U));
    top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__24__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__24__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
              >> 0x17U));
    top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__25__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__25__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
              >> 0x18U));
    top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__26__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__26__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
              >> 0x19U));
    top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__27__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__27__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
              >> 0x1aU));
    top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__28__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__28__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
              >> 0x1bU));
    top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__29__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__29__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
              >> 0x1cU));
    top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__30__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__30__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
              >> 0x1dU));
    top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__31__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__31__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
              >> 0x1eU));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__sum = 
        ((0xfffffff9U & vlSelf->top__DOT__pipline__DOT__brc__DOT__sum) 
         | ((4U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__2__KET____DOT__adder__DOT__w1) 
                    << 2U) ^ (0xfffffffcU & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                             << 1U)))) 
            | (2U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__1__KET____DOT__adder__DOT__w1) 
                      ^ vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry) 
                     << 1U))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__sum = 
        ((0xffffffe7U & vlSelf->top__DOT__pipline__DOT__brc__DOT__sum) 
         | ((0x10U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__4__KET____DOT__adder__DOT__w1) 
                       << 4U) ^ (0xfffffff0U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                                << 1U)))) 
            | (8U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__3__KET____DOT__adder__DOT__w1) 
                      << 3U) ^ (0xfffffff8U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                               << 1U))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__sum = 
        ((0xffffff9fU & vlSelf->top__DOT__pipline__DOT__brc__DOT__sum) 
         | ((0x40U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__6__KET____DOT__adder__DOT__w1) 
                       << 6U) ^ (0xffffffc0U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                                << 1U)))) 
            | (0x20U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__5__KET____DOT__adder__DOT__w1) 
                         << 5U) ^ (0xffffffe0U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                                  << 1U))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__sum = 
        ((0xfffffe7fU & vlSelf->top__DOT__pipline__DOT__brc__DOT__sum) 
         | ((0x100U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__8__KET____DOT__adder__DOT__w1) 
                        << 8U) ^ (0xffffff00U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                                 << 1U)))) 
            | (0x80U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__7__KET____DOT__adder__DOT__w1) 
                         << 7U) ^ (0xffffff80U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                                  << 1U))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__sum = 
        ((0xfffff9ffU & vlSelf->top__DOT__pipline__DOT__brc__DOT__sum) 
         | ((0x400U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__10__KET____DOT__adder__DOT__w1) 
                        << 0xaU) ^ (0xfffffc00U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                                   << 1U)))) 
            | (0x200U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__9__KET____DOT__adder__DOT__w1) 
                          << 9U) ^ (0xfffffe00U & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                                   << 1U))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__sum = 
        ((0xffffe7ffU & vlSelf->top__DOT__pipline__DOT__brc__DOT__sum) 
         | ((0x1000U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__12__KET____DOT__adder__DOT__w1) 
                         << 0xcU) ^ (0xfffff000U & 
                                     (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      << 1U)))) | (0x800U 
                                                   & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__11__KET____DOT__adder__DOT__w1) 
                                                       << 0xbU) 
                                                      ^ 
                                                      (0xfffff800U 
                                                       & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                                          << 1U))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__sum = 
        ((0xffff9fffU & vlSelf->top__DOT__pipline__DOT__brc__DOT__sum) 
         | ((0x4000U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__14__KET____DOT__adder__DOT__w1) 
                         << 0xeU) ^ (0xffffc000U & 
                                     (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                      << 1U)))) | (0x2000U 
                                                   & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__13__KET____DOT__adder__DOT__w1) 
                                                       << 0xdU) 
                                                      ^ 
                                                      (0xffffe000U 
                                                       & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                                          << 1U))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__sum = 
        ((0xfffe7fffU & vlSelf->top__DOT__pipline__DOT__brc__DOT__sum) 
         | ((0x10000U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__16__KET____DOT__adder__DOT__w1) 
                          << 0x10U) ^ (0xffff0000U 
                                       & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                          << 1U)))) 
            | (0x8000U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__15__KET____DOT__adder__DOT__w1) 
                           << 0xfU) ^ (0xffff8000U 
                                       & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                          << 1U))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__sum = 
        ((0xfff9ffffU & vlSelf->top__DOT__pipline__DOT__brc__DOT__sum) 
         | ((0x40000U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__18__KET____DOT__adder__DOT__w1) 
                          << 0x12U) ^ (0xfffc0000U 
                                       & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                          << 1U)))) 
            | (0x20000U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__17__KET____DOT__adder__DOT__w1) 
                            << 0x11U) ^ (0xfffe0000U 
                                         & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                            << 1U))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__sum = 
        ((0xffe7ffffU & vlSelf->top__DOT__pipline__DOT__brc__DOT__sum) 
         | ((0x100000U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__20__KET____DOT__adder__DOT__w1) 
                           << 0x14U) ^ (0xfff00000U 
                                        & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                           << 1U)))) 
            | (0x80000U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__19__KET____DOT__adder__DOT__w1) 
                            << 0x13U) ^ (0xfff80000U 
                                         & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                            << 1U))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__sum = 
        ((0xff9fffffU & vlSelf->top__DOT__pipline__DOT__brc__DOT__sum) 
         | ((0x400000U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__22__KET____DOT__adder__DOT__w1) 
                           << 0x16U) ^ (0xffc00000U 
                                        & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                           << 1U)))) 
            | (0x200000U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__21__KET____DOT__adder__DOT__w1) 
                             << 0x15U) ^ (0xffe00000U 
                                          & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                             << 1U))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__sum = 
        ((0xfe7fffffU & vlSelf->top__DOT__pipline__DOT__brc__DOT__sum) 
         | ((0x1000000U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__24__KET____DOT__adder__DOT__w1) 
                            << 0x18U) ^ (0xff000000U 
                                         & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                            << 1U)))) 
            | (0x800000U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__23__KET____DOT__adder__DOT__w1) 
                             << 0x17U) ^ (0xff800000U 
                                          & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                             << 1U))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__sum = 
        ((0xf9ffffffU & vlSelf->top__DOT__pipline__DOT__brc__DOT__sum) 
         | ((0x4000000U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__26__KET____DOT__adder__DOT__w1) 
                            << 0x1aU) ^ (0xfc000000U 
                                         & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                            << 1U)))) 
            | (0x2000000U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__25__KET____DOT__adder__DOT__w1) 
                              << 0x19U) ^ (0xfe000000U 
                                           & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                              << 1U))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__sum = 
        ((0xe7ffffffU & vlSelf->top__DOT__pipline__DOT__brc__DOT__sum) 
         | ((0x10000000U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__28__KET____DOT__adder__DOT__w1) 
                             << 0x1cU) ^ (0xf0000000U 
                                          & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                             << 1U)))) 
            | (0x8000000U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__27__KET____DOT__adder__DOT__w1) 
                              << 0x1bU) ^ (0xf8000000U 
                                           & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                              << 1U))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__sum = 
        ((0x9fffffffU & vlSelf->top__DOT__pipline__DOT__brc__DOT__sum) 
         | ((0x40000000U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__30__KET____DOT__adder__DOT__w1) 
                             << 0x1eU) ^ (0xc0000000U 
                                          & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                             << 1U)))) 
            | (0x20000000U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__29__KET____DOT__adder__DOT__w1) 
                               << 0x1dU) ^ (0xe0000000U 
                                            & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                               << 1U))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__sum = 
        ((0x7fffffffU & vlSelf->top__DOT__pipline__DOT__brc__DOT__sum) 
         | (0x80000000U & (((IData)(vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__31__KET____DOT__adder__DOT__w1) 
                            << 0x1fU) ^ (0x80000000U 
                                         & (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                            << 1U)))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__sum = 
        ((0xfffffffeU & vlSelf->top__DOT__pipline__DOT__alu__DOT__sum) 
         | (1U & (~ (IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__adder0__DOT__w1))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
        = ((0xfffffffeU & vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry) 
           | (1U & ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__adder0__DOT__w1) 
                    | (vlSelf->top__DOT__pipline__DOT__operand_a 
                       & (~ vlSelf->top__DOT__pipline__DOT__operand_b)))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
        = ((0xfffffffdU & vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry) 
           | (2U & (((IData)(top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__1__KET____DOT__adder__DOT__w2) 
                     << 1U) | (0xfffffffeU & (vlSelf->top__DOT__pipline__DOT__op_a 
                                              & ((~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 1U)) 
                                                 << 1U))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
        = ((0xfffffffbU & vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry) 
           | (4U & (((IData)(top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__2__KET____DOT__adder__DOT__w2) 
                     << 2U) | (0xfffffffcU & (vlSelf->top__DOT__pipline__DOT__op_a 
                                              & ((~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 2U)) 
                                                 << 2U))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
        = ((0xfffffff7U & vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry) 
           | (8U & (((IData)(top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__3__KET____DOT__adder__DOT__w2) 
                     << 3U) | (0xfffffff8U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                              & ((~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 3U)) 
                                                 << 3U))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
        = ((0xffffffefU & vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry) 
           | (0x10U & (((IData)(top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__4__KET____DOT__adder__DOT__w2) 
                        << 4U) | (0xfffffff0U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                                 & ((~ 
                                                     (vlSelf->top__DOT__pipline__DOT__op_b 
                                                      >> 4U)) 
                                                    << 4U))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
        = ((0xffffffdfU & vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry) 
           | (0x20U & (((IData)(top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__5__KET____DOT__adder__DOT__w2) 
                        << 5U) | (0xffffffe0U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                                 & ((~ 
                                                     (vlSelf->top__DOT__pipline__DOT__op_b 
                                                      >> 5U)) 
                                                    << 5U))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
        = ((0xffffffbfU & vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry) 
           | (0x40U & (((IData)(top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__6__KET____DOT__adder__DOT__w2) 
                        << 6U) | (0xffffffc0U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                                 & ((~ 
                                                     (vlSelf->top__DOT__pipline__DOT__op_b 
                                                      >> 6U)) 
                                                    << 6U))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
        = ((0xffffff7fU & vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry) 
           | (0x80U & (((IData)(top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__7__KET____DOT__adder__DOT__w2) 
                        << 7U) | (0xffffff80U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                                 & ((~ 
                                                     (vlSelf->top__DOT__pipline__DOT__op_b 
                                                      >> 7U)) 
                                                    << 7U))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
        = ((0xfffffeffU & vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry) 
           | (0x100U & (((IData)(top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__8__KET____DOT__adder__DOT__w2) 
                         << 8U) | (0xffffff00U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                                  & ((~ 
                                                      (vlSelf->top__DOT__pipline__DOT__op_b 
                                                       >> 8U)) 
                                                     << 8U))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
        = ((0xfffffdffU & vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry) 
           | (0x200U & (((IData)(top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__9__KET____DOT__adder__DOT__w2) 
                         << 9U) | (0xfffffe00U & (vlSelf->top__DOT__pipline__DOT__op_a 
                                                  & ((~ 
                                                      (vlSelf->top__DOT__pipline__DOT__op_b 
                                                       >> 9U)) 
                                                     << 9U))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
        = ((0xfffffbffU & vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry) 
           | (0x400U & (((IData)(top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__10__KET____DOT__adder__DOT__w2) 
                         << 0xaU) | (0xfffffc00U & 
                                     (vlSelf->top__DOT__pipline__DOT__op_a 
                                      & ((~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                             >> 0xaU)) 
                                         << 0xaU))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
        = ((0xfffff7ffU & vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry) 
           | (0x800U & (((IData)(top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__11__KET____DOT__adder__DOT__w2) 
                         << 0xbU) | (0xfffff800U & 
                                     (vlSelf->top__DOT__pipline__DOT__op_a 
                                      & ((~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                             >> 0xbU)) 
                                         << 0xbU))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
        = ((0xffffefffU & vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry) 
           | (0x1000U & (((IData)(top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__12__KET____DOT__adder__DOT__w2) 
                          << 0xcU) | (0xfffff000U & 
                                      (vlSelf->top__DOT__pipline__DOT__op_a 
                                       & ((~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                              >> 0xcU)) 
                                          << 0xcU))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
        = ((0xffffdfffU & vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry) 
           | (0x2000U & (((IData)(top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__13__KET____DOT__adder__DOT__w2) 
                          << 0xdU) | (0xffffe000U & 
                                      (vlSelf->top__DOT__pipline__DOT__op_a 
                                       & ((~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                              >> 0xdU)) 
                                          << 0xdU))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
        = ((0xffffbfffU & vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry) 
           | (0x4000U & (((IData)(top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__14__KET____DOT__adder__DOT__w2) 
                          << 0xeU) | (0xffffc000U & 
                                      (vlSelf->top__DOT__pipline__DOT__op_a 
                                       & ((~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                              >> 0xeU)) 
                                          << 0xeU))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
        = ((0xffff7fffU & vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry) 
           | (0x8000U & (((IData)(top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__15__KET____DOT__adder__DOT__w2) 
                          << 0xfU) | (0xffff8000U & 
                                      (vlSelf->top__DOT__pipline__DOT__op_a 
                                       & ((~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                              >> 0xfU)) 
                                          << 0xfU))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
        = ((0xfffeffffU & vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry) 
           | (0x10000U & (((IData)(top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__16__KET____DOT__adder__DOT__w2) 
                           << 0x10U) | (0xffff0000U 
                                        & (vlSelf->top__DOT__pipline__DOT__op_a 
                                           & ((~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0x10U)) 
                                              << 0x10U))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
        = ((0xfffdffffU & vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry) 
           | (0x20000U & (((IData)(top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__17__KET____DOT__adder__DOT__w2) 
                           << 0x11U) | (0xfffe0000U 
                                        & (vlSelf->top__DOT__pipline__DOT__op_a 
                                           & ((~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0x11U)) 
                                              << 0x11U))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
        = ((0xfffbffffU & vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry) 
           | (0x40000U & (((IData)(top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__18__KET____DOT__adder__DOT__w2) 
                           << 0x12U) | (0xfffc0000U 
                                        & (vlSelf->top__DOT__pipline__DOT__op_a 
                                           & ((~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0x12U)) 
                                              << 0x12U))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
        = ((0xfff7ffffU & vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry) 
           | (0x80000U & (((IData)(top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__19__KET____DOT__adder__DOT__w2) 
                           << 0x13U) | (0xfff80000U 
                                        & (vlSelf->top__DOT__pipline__DOT__op_a 
                                           & ((~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0x13U)) 
                                              << 0x13U))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
        = ((0xffefffffU & vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry) 
           | (0x100000U & (((IData)(top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__20__KET____DOT__adder__DOT__w2) 
                            << 0x14U) | (0xfff00000U 
                                         & (vlSelf->top__DOT__pipline__DOT__op_a 
                                            & ((~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0x14U)) 
                                               << 0x14U))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
        = ((0xffdfffffU & vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry) 
           | (0x200000U & (((IData)(top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__21__KET____DOT__adder__DOT__w2) 
                            << 0x15U) | (0xffe00000U 
                                         & (vlSelf->top__DOT__pipline__DOT__op_a 
                                            & ((~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0x15U)) 
                                               << 0x15U))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
        = ((0xffbfffffU & vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry) 
           | (0x400000U & (((IData)(top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__22__KET____DOT__adder__DOT__w2) 
                            << 0x16U) | (0xffc00000U 
                                         & (vlSelf->top__DOT__pipline__DOT__op_a 
                                            & ((~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0x16U)) 
                                               << 0x16U))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
        = ((0xff7fffffU & vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry) 
           | (0x800000U & (((IData)(top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__23__KET____DOT__adder__DOT__w2) 
                            << 0x17U) | (0xff800000U 
                                         & (vlSelf->top__DOT__pipline__DOT__op_a 
                                            & ((~ (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0x17U)) 
                                               << 0x17U))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
        = ((0xfeffffffU & vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry) 
           | (0x1000000U & (((IData)(top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__24__KET____DOT__adder__DOT__w2) 
                             << 0x18U) | (0xff000000U 
                                          & (vlSelf->top__DOT__pipline__DOT__op_a 
                                             & ((~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0x18U)) 
                                                << 0x18U))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
        = ((0xfdffffffU & vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry) 
           | (0x2000000U & (((IData)(top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__25__KET____DOT__adder__DOT__w2) 
                             << 0x19U) | (0xfe000000U 
                                          & (vlSelf->top__DOT__pipline__DOT__op_a 
                                             & ((~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0x19U)) 
                                                << 0x19U))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
        = ((0xfbffffffU & vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry) 
           | (0x4000000U & (((IData)(top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__26__KET____DOT__adder__DOT__w2) 
                             << 0x1aU) | (0xfc000000U 
                                          & (vlSelf->top__DOT__pipline__DOT__op_a 
                                             & ((~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0x1aU)) 
                                                << 0x1aU))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
        = ((0xf7ffffffU & vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry) 
           | (0x8000000U & (((IData)(top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__27__KET____DOT__adder__DOT__w2) 
                             << 0x1bU) | (0xf8000000U 
                                          & (vlSelf->top__DOT__pipline__DOT__op_a 
                                             & ((~ 
                                                 (vlSelf->top__DOT__pipline__DOT__op_b 
                                                  >> 0x1bU)) 
                                                << 0x1bU))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
        = ((0xefffffffU & vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry) 
           | (0x10000000U & (((IData)(top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__28__KET____DOT__adder__DOT__w2) 
                              << 0x1cU) | (0xf0000000U 
                                           & (vlSelf->top__DOT__pipline__DOT__op_a 
                                              & ((~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0x1cU)) 
                                                 << 0x1cU))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
        = ((0xdfffffffU & vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry) 
           | (0x20000000U & (((IData)(top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__29__KET____DOT__adder__DOT__w2) 
                              << 0x1dU) | (0xe0000000U 
                                           & (vlSelf->top__DOT__pipline__DOT__op_a 
                                              & ((~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0x1dU)) 
                                                 << 0x1dU))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
        = ((0xbfffffffU & vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry) 
           | (0x40000000U & (((IData)(top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__30__KET____DOT__adder__DOT__w2) 
                              << 0x1eU) | (0xc0000000U 
                                           & (vlSelf->top__DOT__pipline__DOT__op_a 
                                              & ((~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0x1eU)) 
                                                 << 0x1eU))))));
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
        = ((0x7fffffffU & vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry) 
           | (0x80000000U & (((IData)(top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__31__KET____DOT__adder__DOT__w2) 
                              << 0x1fU) | (0x80000000U 
                                           & (vlSelf->top__DOT__pipline__DOT__op_a 
                                              & ((~ 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0x1fU)) 
                                                 << 0x1fU))))));
    __Vtableidx1 = (((vlSelf->top__DOT__pipline__DOT__op_a 
                      == vlSelf->top__DOT__pipline__DOT__op_b) 
                     << 0xbU) | ((0x400U & (((IData)(vlSelf->top__DOT__pipline__DOT__br_unsignedE)
                                              ? (~ 
                                                 (vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry 
                                                  >> 0x1fU))
                                              : (((vlSelf->top__DOT__pipline__DOT__op_a 
                                                   >> 0x1fU) 
                                                  != 
                                                  (vlSelf->top__DOT__pipline__DOT__op_b 
                                                   >> 0x1fU))
                                                  ? 
                                                 (vlSelf->top__DOT__pipline__DOT__op_a 
                                                  >> 0x1fU)
                                                  : 
                                                 (vlSelf->top__DOT__pipline__DOT__brc__DOT__sum 
                                                  >> 0x1fU))) 
                                            << 0xaU)) 
                                 | ((0x380U & (vlSelf->top__DOT__pipline__DOT__instr 
                                               >> 5U)) 
                                    | (IData)(vlSelf->top__DOT__pipline__DOT__opcodeE))));
    vlSelf->top__DOT__pipline__DOT__br_sel = Vtop__ConstPool__TABLE_h1f2434b8_0
        [__Vtableidx1];
    top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__1__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__1__KET____DOT__adder__DOT__w1) 
           & vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry);
    top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__2__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__2__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
              >> 1U));
    top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__3__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__3__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
              >> 2U));
    top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__4__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__4__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
              >> 3U));
    top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__5__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__5__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
              >> 4U));
    top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__6__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__6__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
              >> 5U));
    top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__7__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__7__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
              >> 6U));
    top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__8__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__8__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
              >> 7U));
    top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__9__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__9__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
              >> 8U));
    top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__10__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__10__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
              >> 9U));
    top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__11__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__11__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
              >> 0xaU));
    top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__12__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__12__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
              >> 0xbU));
    top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__13__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__13__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
              >> 0xcU));
    top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__14__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__14__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
              >> 0xdU));
    top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__15__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__15__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
              >> 0xeU));
    top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__16__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__16__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
              >> 0xfU));
    top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__17__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__17__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
              >> 0x10U));
    top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__18__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__18__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
              >> 0x11U));
    top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__19__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__19__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
              >> 0x12U));
    top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__20__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__20__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
              >> 0x13U));
    top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__21__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__21__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
              >> 0x14U));
    top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__22__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__22__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
              >> 0x15U));
    top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__23__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__23__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
              >> 0x16U));
    top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__24__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__24__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
              >> 0x17U));
    top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__25__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__25__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
              >> 0x18U));
    top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__26__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__26__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
              >> 0x19U));
    top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__27__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__27__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
              >> 0x1aU));
    top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__28__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__28__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
              >> 0x1bU));
    top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__29__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__29__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
              >> 0x1cU));
    top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__30__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__30__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
              >> 0x1dU));
    top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__31__KET____DOT__adder__DOT__w2 
        = ((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__31__KET____DOT__adder__DOT__w1) 
           & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
              >> 0x1eU));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__sum = 
        ((0xfffffff9U & vlSelf->top__DOT__pipline__DOT__alu__DOT__sum) 
         | ((4U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__2__KET____DOT__adder__DOT__w1) 
                    << 2U) ^ (0xfffffffcU & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                             << 1U)))) 
            | (2U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__1__KET____DOT__adder__DOT__w1) 
                      ^ vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry) 
                     << 1U))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__sum = 
        ((0xffffffe7U & vlSelf->top__DOT__pipline__DOT__alu__DOT__sum) 
         | ((0x10U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__4__KET____DOT__adder__DOT__w1) 
                       << 4U) ^ (0xfffffff0U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                                << 1U)))) 
            | (8U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__3__KET____DOT__adder__DOT__w1) 
                      << 3U) ^ (0xfffffff8U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                               << 1U))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__sum = 
        ((0xffffff9fU & vlSelf->top__DOT__pipline__DOT__alu__DOT__sum) 
         | ((0x40U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__6__KET____DOT__adder__DOT__w1) 
                       << 6U) ^ (0xffffffc0U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                                << 1U)))) 
            | (0x20U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__5__KET____DOT__adder__DOT__w1) 
                         << 5U) ^ (0xffffffe0U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                                  << 1U))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__sum = 
        ((0xfffffe7fU & vlSelf->top__DOT__pipline__DOT__alu__DOT__sum) 
         | ((0x100U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__8__KET____DOT__adder__DOT__w1) 
                        << 8U) ^ (0xffffff00U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                                 << 1U)))) 
            | (0x80U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__7__KET____DOT__adder__DOT__w1) 
                         << 7U) ^ (0xffffff80U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                                  << 1U))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__sum = 
        ((0xfffff9ffU & vlSelf->top__DOT__pipline__DOT__alu__DOT__sum) 
         | ((0x400U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__10__KET____DOT__adder__DOT__w1) 
                        << 0xaU) ^ (0xfffffc00U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                                   << 1U)))) 
            | (0x200U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__9__KET____DOT__adder__DOT__w1) 
                          << 9U) ^ (0xfffffe00U & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                                   << 1U))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__sum = 
        ((0xffffe7ffU & vlSelf->top__DOT__pipline__DOT__alu__DOT__sum) 
         | ((0x1000U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__12__KET____DOT__adder__DOT__w1) 
                         << 0xcU) ^ (0xfffff000U & 
                                     (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      << 1U)))) | (0x800U 
                                                   & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__11__KET____DOT__adder__DOT__w1) 
                                                       << 0xbU) 
                                                      ^ 
                                                      (0xfffff800U 
                                                       & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                                          << 1U))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__sum = 
        ((0xffff9fffU & vlSelf->top__DOT__pipline__DOT__alu__DOT__sum) 
         | ((0x4000U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__14__KET____DOT__adder__DOT__w1) 
                         << 0xeU) ^ (0xffffc000U & 
                                     (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                      << 1U)))) | (0x2000U 
                                                   & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__13__KET____DOT__adder__DOT__w1) 
                                                       << 0xdU) 
                                                      ^ 
                                                      (0xffffe000U 
                                                       & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                                          << 1U))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__sum = 
        ((0xfffe7fffU & vlSelf->top__DOT__pipline__DOT__alu__DOT__sum) 
         | ((0x10000U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__16__KET____DOT__adder__DOT__w1) 
                          << 0x10U) ^ (0xffff0000U 
                                       & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                          << 1U)))) 
            | (0x8000U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__15__KET____DOT__adder__DOT__w1) 
                           << 0xfU) ^ (0xffff8000U 
                                       & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                          << 1U))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__sum = 
        ((0xfff9ffffU & vlSelf->top__DOT__pipline__DOT__alu__DOT__sum) 
         | ((0x40000U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__18__KET____DOT__adder__DOT__w1) 
                          << 0x12U) ^ (0xfffc0000U 
                                       & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                          << 1U)))) 
            | (0x20000U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__17__KET____DOT__adder__DOT__w1) 
                            << 0x11U) ^ (0xfffe0000U 
                                         & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                            << 1U))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__sum = 
        ((0xffe7ffffU & vlSelf->top__DOT__pipline__DOT__alu__DOT__sum) 
         | ((0x100000U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__20__KET____DOT__adder__DOT__w1) 
                           << 0x14U) ^ (0xfff00000U 
                                        & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                           << 1U)))) 
            | (0x80000U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__19__KET____DOT__adder__DOT__w1) 
                            << 0x13U) ^ (0xfff80000U 
                                         & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                            << 1U))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__sum = 
        ((0xff9fffffU & vlSelf->top__DOT__pipline__DOT__alu__DOT__sum) 
         | ((0x400000U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__22__KET____DOT__adder__DOT__w1) 
                           << 0x16U) ^ (0xffc00000U 
                                        & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                           << 1U)))) 
            | (0x200000U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__21__KET____DOT__adder__DOT__w1) 
                             << 0x15U) ^ (0xffe00000U 
                                          & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                             << 1U))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__sum = 
        ((0xfe7fffffU & vlSelf->top__DOT__pipline__DOT__alu__DOT__sum) 
         | ((0x1000000U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__24__KET____DOT__adder__DOT__w1) 
                            << 0x18U) ^ (0xff000000U 
                                         & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                            << 1U)))) 
            | (0x800000U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__23__KET____DOT__adder__DOT__w1) 
                             << 0x17U) ^ (0xff800000U 
                                          & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                             << 1U))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__sum = 
        ((0xf9ffffffU & vlSelf->top__DOT__pipline__DOT__alu__DOT__sum) 
         | ((0x4000000U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__26__KET____DOT__adder__DOT__w1) 
                            << 0x1aU) ^ (0xfc000000U 
                                         & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                            << 1U)))) 
            | (0x2000000U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__25__KET____DOT__adder__DOT__w1) 
                              << 0x19U) ^ (0xfe000000U 
                                           & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                              << 1U))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__sum = 
        ((0xe7ffffffU & vlSelf->top__DOT__pipline__DOT__alu__DOT__sum) 
         | ((0x10000000U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__28__KET____DOT__adder__DOT__w1) 
                             << 0x1cU) ^ (0xf0000000U 
                                          & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                             << 1U)))) 
            | (0x8000000U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__27__KET____DOT__adder__DOT__w1) 
                              << 0x1bU) ^ (0xf8000000U 
                                           & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                              << 1U))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__sum = 
        ((0x9fffffffU & vlSelf->top__DOT__pipline__DOT__alu__DOT__sum) 
         | ((0x40000000U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__30__KET____DOT__adder__DOT__w1) 
                             << 0x1eU) ^ (0xc0000000U 
                                          & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                             << 1U)))) 
            | (0x20000000U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__29__KET____DOT__adder__DOT__w1) 
                               << 0x1dU) ^ (0xe0000000U 
                                            & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                               << 1U))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__sum = 
        ((0x7fffffffU & vlSelf->top__DOT__pipline__DOT__alu__DOT__sum) 
         | (0x80000000U & (((IData)(vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__31__KET____DOT__adder__DOT__w1) 
                            << 0x1fU) ^ (0x80000000U 
                                         & (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                                            << 1U)))));
    vlSelf->top__DOT__pipline__DOT__stallD = 0U;
    vlSelf->top__DOT__pipline__DOT__stallF = 0U;
    vlSelf->top__DOT__pipline__DOT__stallE = 0U;
    if (((((IData)(vlSelf->top__DOT__pipline__DOT__rd_wrenM) 
           & (0U != (IData)(vlSelf->top__DOT__pipline__DOT__rdM))) 
          & (3U == (IData)(vlSelf->top__DOT__pipline__DOT__opcodeM))) 
         & (((IData)(vlSelf->top__DOT__pipline__DOT__rdM) 
             == (IData)(vlSelf->top__DOT__pipline__DOT__rs1E)) 
            | ((IData)(vlSelf->top__DOT__pipline__DOT__rdM) 
               == (IData)(vlSelf->top__DOT__pipline__DOT__rs2E))))) {
        vlSelf->top__DOT__pipline__DOT__stallD = 1U;
        vlSelf->top__DOT__pipline__DOT__stallF = 1U;
        vlSelf->top__DOT__pipline__DOT__stallE = 1U;
        vlSelf->top__DOT__pipline__DOT__flushM = 0U;
        vlSelf->top__DOT__pipline__DOT__flushM = 1U;
    } else {
        vlSelf->top__DOT__pipline__DOT__flushM = 0U;
    }
    if ((((IData)(vlSelf->top__DOT__pipline__DOT__br_sel) 
          & (0U != (IData)(vlSelf->top__DOT__pipline__DOT__rdM))) 
         & ((0x63U == (IData)(vlSelf->top__DOT__pipline__DOT__opcodeE)) 
            & (((IData)(vlSelf->top__DOT__pipline__DOT__rdWB) 
                == (IData)(vlSelf->top__DOT__pipline__DOT__rs1E)) 
               | ((IData)(vlSelf->top__DOT__pipline__DOT__rdWB) 
                  == (IData)(vlSelf->top__DOT__pipline__DOT__rs2E)))))) {
        vlSelf->top__DOT__pipline__DOT__stallD = 0U;
        vlSelf->top__DOT__pipline__DOT__stallF = 1U;
        vlSelf->top__DOT__pipline__DOT__stallE = 0U;
        vlSelf->top__DOT__pipline__DOT__flushM = 0U;
    }
    vlSelf->top__DOT__pipline__DOT__flushD = 0U;
    if (((((IData)(vlSelf->top__DOT__pipline__DOT__rd_wrenM) 
           & (0U != (IData)(vlSelf->top__DOT__pipline__DOT__rdM))) 
          & (3U == (IData)(vlSelf->top__DOT__pipline__DOT__opcodeM))) 
         & (((IData)(vlSelf->top__DOT__pipline__DOT__rdM) 
             == (IData)(vlSelf->top__DOT__pipline__DOT__rs1E)) 
            | ((IData)(vlSelf->top__DOT__pipline__DOT__rdM) 
               == (IData)(vlSelf->top__DOT__pipline__DOT__rs2E))))) {
        vlSelf->top__DOT__pipline__DOT__flushD = 0U;
    }
    if ((((IData)(vlSelf->top__DOT__pipline__DOT__br_sel) 
          & (0U != (IData)(vlSelf->top__DOT__pipline__DOT__rdM))) 
         & ((0x63U == (IData)(vlSelf->top__DOT__pipline__DOT__opcodeE)) 
            & (((IData)(vlSelf->top__DOT__pipline__DOT__rdWB) 
                == (IData)(vlSelf->top__DOT__pipline__DOT__rs1E)) 
               | ((IData)(vlSelf->top__DOT__pipline__DOT__rdWB) 
                  == (IData)(vlSelf->top__DOT__pipline__DOT__rs2E)))))) {
        vlSelf->top__DOT__pipline__DOT__flushD = 1U;
    }
    if ((((IData)(vlSelf->top__DOT__pipline__DOT__rd_wrenM) 
          & (0U != (IData)(vlSelf->top__DOT__pipline__DOT__rdM))) 
         & (0x6fU == (IData)(vlSelf->top__DOT__pipline__DOT__opcodeE)))) {
        vlSelf->top__DOT__pipline__DOT__stallD = 0U;
        vlSelf->top__DOT__pipline__DOT__stallF = 1U;
        vlSelf->top__DOT__pipline__DOT__stallE = 0U;
        vlSelf->top__DOT__pipline__DOT__flushM = 0U;
        vlSelf->top__DOT__pipline__DOT__flushD = 1U;
    }
    vlSelf->top__DOT__pipline__DOT__flushE = 0U;
    if (((((IData)(vlSelf->top__DOT__pipline__DOT__rd_wrenM) 
           & (0U != (IData)(vlSelf->top__DOT__pipline__DOT__rdM))) 
          & (3U == (IData)(vlSelf->top__DOT__pipline__DOT__opcodeM))) 
         & (((IData)(vlSelf->top__DOT__pipline__DOT__rdM) 
             == (IData)(vlSelf->top__DOT__pipline__DOT__rs1E)) 
            | ((IData)(vlSelf->top__DOT__pipline__DOT__rdM) 
               == (IData)(vlSelf->top__DOT__pipline__DOT__rs2E))))) {
        vlSelf->top__DOT__pipline__DOT__flushE = 0U;
    }
    if ((((IData)(vlSelf->top__DOT__pipline__DOT__br_sel) 
          & (0U != (IData)(vlSelf->top__DOT__pipline__DOT__rdM))) 
         & ((0x63U == (IData)(vlSelf->top__DOT__pipline__DOT__opcodeE)) 
            & (((IData)(vlSelf->top__DOT__pipline__DOT__rdWB) 
                == (IData)(vlSelf->top__DOT__pipline__DOT__rs1E)) 
               | ((IData)(vlSelf->top__DOT__pipline__DOT__rdWB) 
                  == (IData)(vlSelf->top__DOT__pipline__DOT__rs2E)))))) {
        vlSelf->top__DOT__pipline__DOT__flushE = 1U;
    }
    if ((((IData)(vlSelf->top__DOT__pipline__DOT__rd_wrenM) 
          & (0U != (IData)(vlSelf->top__DOT__pipline__DOT__rdM))) 
         & (0x6fU == (IData)(vlSelf->top__DOT__pipline__DOT__opcodeE)))) {
        vlSelf->top__DOT__pipline__DOT__flushE = 1U;
    }
    if (((((IData)(vlSelf->top__DOT__pipline__DOT__rd_wrenM) 
           & (0U != (IData)(vlSelf->top__DOT__pipline__DOT__rdM))) 
          & (0x67U == (IData)(vlSelf->top__DOT__pipline__DOT__opcodeE))) 
         & (((IData)(vlSelf->top__DOT__pipline__DOT__rdWB) 
             == (IData)(vlSelf->top__DOT__pipline__DOT__rs1E)) 
            | ((IData)(vlSelf->top__DOT__pipline__DOT__rdWB) 
               == (IData)(vlSelf->top__DOT__pipline__DOT__rs2E))))) {
        vlSelf->top__DOT__pipline__DOT__stallD = 0U;
        vlSelf->top__DOT__pipline__DOT__stallF = 1U;
        vlSelf->top__DOT__pipline__DOT__stallE = 0U;
        vlSelf->top__DOT__pipline__DOT__flushM = 0U;
        vlSelf->top__DOT__pipline__DOT__flushD = 1U;
        vlSelf->top__DOT__pipline__DOT__flushE = 1U;
    }
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
        = ((0xfffffffdU & vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry) 
           | (2U & (((IData)(top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__1__KET____DOT__adder__DOT__w2) 
                     << 1U) | (0xfffffffeU & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                              & ((~ 
                                                  (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                   >> 1U)) 
                                                 << 1U))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
        = ((0xfffffffbU & vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry) 
           | (4U & (((IData)(top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__2__KET____DOT__adder__DOT__w2) 
                     << 2U) | (0xfffffffcU & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                              & ((~ 
                                                  (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                   >> 2U)) 
                                                 << 2U))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
        = ((0xfffffff7U & vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry) 
           | (8U & (((IData)(top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__3__KET____DOT__adder__DOT__w2) 
                     << 3U) | (0xfffffff8U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                              & ((~ 
                                                  (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                   >> 3U)) 
                                                 << 3U))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
        = ((0xffffffefU & vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry) 
           | (0x10U & (((IData)(top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__4__KET____DOT__adder__DOT__w2) 
                        << 4U) | (0xfffffff0U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                                 & ((~ 
                                                     (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                      >> 4U)) 
                                                    << 4U))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
        = ((0xffffffdfU & vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry) 
           | (0x20U & (((IData)(top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__5__KET____DOT__adder__DOT__w2) 
                        << 5U) | (0xffffffe0U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                                 & ((~ 
                                                     (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                      >> 5U)) 
                                                    << 5U))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
        = ((0xffffffbfU & vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry) 
           | (0x40U & (((IData)(top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__6__KET____DOT__adder__DOT__w2) 
                        << 6U) | (0xffffffc0U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                                 & ((~ 
                                                     (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                      >> 6U)) 
                                                    << 6U))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
        = ((0xffffff7fU & vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry) 
           | (0x80U & (((IData)(top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__7__KET____DOT__adder__DOT__w2) 
                        << 7U) | (0xffffff80U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                                 & ((~ 
                                                     (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                      >> 7U)) 
                                                    << 7U))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
        = ((0xfffffeffU & vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry) 
           | (0x100U & (((IData)(top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__8__KET____DOT__adder__DOT__w2) 
                         << 8U) | (0xffffff00U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                                  & ((~ 
                                                      (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                       >> 8U)) 
                                                     << 8U))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
        = ((0xfffffdffU & vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry) 
           | (0x200U & (((IData)(top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__9__KET____DOT__adder__DOT__w2) 
                         << 9U) | (0xfffffe00U & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                                  & ((~ 
                                                      (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                       >> 9U)) 
                                                     << 9U))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
        = ((0xfffffbffU & vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry) 
           | (0x400U & (((IData)(top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__10__KET____DOT__adder__DOT__w2) 
                         << 0xaU) | (0xfffffc00U & 
                                     (vlSelf->top__DOT__pipline__DOT__operand_a 
                                      & ((~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                             >> 0xaU)) 
                                         << 0xaU))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
        = ((0xfffff7ffU & vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry) 
           | (0x800U & (((IData)(top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__11__KET____DOT__adder__DOT__w2) 
                         << 0xbU) | (0xfffff800U & 
                                     (vlSelf->top__DOT__pipline__DOT__operand_a 
                                      & ((~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                             >> 0xbU)) 
                                         << 0xbU))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
        = ((0xffffefffU & vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry) 
           | (0x1000U & (((IData)(top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__12__KET____DOT__adder__DOT__w2) 
                          << 0xcU) | (0xfffff000U & 
                                      (vlSelf->top__DOT__pipline__DOT__operand_a 
                                       & ((~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                              >> 0xcU)) 
                                          << 0xcU))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
        = ((0xffffdfffU & vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry) 
           | (0x2000U & (((IData)(top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__13__KET____DOT__adder__DOT__w2) 
                          << 0xdU) | (0xffffe000U & 
                                      (vlSelf->top__DOT__pipline__DOT__operand_a 
                                       & ((~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                              >> 0xdU)) 
                                          << 0xdU))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
        = ((0xffffbfffU & vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry) 
           | (0x4000U & (((IData)(top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__14__KET____DOT__adder__DOT__w2) 
                          << 0xeU) | (0xffffc000U & 
                                      (vlSelf->top__DOT__pipline__DOT__operand_a 
                                       & ((~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                              >> 0xeU)) 
                                          << 0xeU))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
        = ((0xffff7fffU & vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry) 
           | (0x8000U & (((IData)(top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__15__KET____DOT__adder__DOT__w2) 
                          << 0xfU) | (0xffff8000U & 
                                      (vlSelf->top__DOT__pipline__DOT__operand_a 
                                       & ((~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                              >> 0xfU)) 
                                          << 0xfU))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
        = ((0xfffeffffU & vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry) 
           | (0x10000U & (((IData)(top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__16__KET____DOT__adder__DOT__w2) 
                           << 0x10U) | (0xffff0000U 
                                        & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                           & ((~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x10U)) 
                                              << 0x10U))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
        = ((0xfffdffffU & vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry) 
           | (0x20000U & (((IData)(top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__17__KET____DOT__adder__DOT__w2) 
                           << 0x11U) | (0xfffe0000U 
                                        & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                           & ((~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x11U)) 
                                              << 0x11U))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
        = ((0xfffbffffU & vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry) 
           | (0x40000U & (((IData)(top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__18__KET____DOT__adder__DOT__w2) 
                           << 0x12U) | (0xfffc0000U 
                                        & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                           & ((~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x12U)) 
                                              << 0x12U))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
        = ((0xfff7ffffU & vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry) 
           | (0x80000U & (((IData)(top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__19__KET____DOT__adder__DOT__w2) 
                           << 0x13U) | (0xfff80000U 
                                        & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                           & ((~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x13U)) 
                                              << 0x13U))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
        = ((0xffefffffU & vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry) 
           | (0x100000U & (((IData)(top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__20__KET____DOT__adder__DOT__w2) 
                            << 0x14U) | (0xfff00000U 
                                         & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                            & ((~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                   >> 0x14U)) 
                                               << 0x14U))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
        = ((0xffdfffffU & vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry) 
           | (0x200000U & (((IData)(top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__21__KET____DOT__adder__DOT__w2) 
                            << 0x15U) | (0xffe00000U 
                                         & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                            & ((~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                   >> 0x15U)) 
                                               << 0x15U))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
        = ((0xffbfffffU & vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry) 
           | (0x400000U & (((IData)(top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__22__KET____DOT__adder__DOT__w2) 
                            << 0x16U) | (0xffc00000U 
                                         & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                            & ((~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                   >> 0x16U)) 
                                               << 0x16U))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
        = ((0xff7fffffU & vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry) 
           | (0x800000U & (((IData)(top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__23__KET____DOT__adder__DOT__w2) 
                            << 0x17U) | (0xff800000U 
                                         & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                            & ((~ (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                   >> 0x17U)) 
                                               << 0x17U))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
        = ((0xfeffffffU & vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry) 
           | (0x1000000U & (((IData)(top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__24__KET____DOT__adder__DOT__w2) 
                             << 0x18U) | (0xff000000U 
                                          & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                             & ((~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x18U)) 
                                                << 0x18U))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
        = ((0xfdffffffU & vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry) 
           | (0x2000000U & (((IData)(top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__25__KET____DOT__adder__DOT__w2) 
                             << 0x19U) | (0xfe000000U 
                                          & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                             & ((~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x19U)) 
                                                << 0x19U))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
        = ((0xfbffffffU & vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry) 
           | (0x4000000U & (((IData)(top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__26__KET____DOT__adder__DOT__w2) 
                             << 0x1aU) | (0xfc000000U 
                                          & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                             & ((~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x1aU)) 
                                                << 0x1aU))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
        = ((0xf7ffffffU & vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry) 
           | (0x8000000U & (((IData)(top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__27__KET____DOT__adder__DOT__w2) 
                             << 0x1bU) | (0xf8000000U 
                                          & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                             & ((~ 
                                                 (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x1bU)) 
                                                << 0x1bU))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
        = ((0xefffffffU & vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry) 
           | (0x10000000U & (((IData)(top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__28__KET____DOT__adder__DOT__w2) 
                              << 0x1cU) | (0xf0000000U 
                                           & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                              & ((~ 
                                                  (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                   >> 0x1cU)) 
                                                 << 0x1cU))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
        = ((0xdfffffffU & vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry) 
           | (0x20000000U & (((IData)(top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__29__KET____DOT__adder__DOT__w2) 
                              << 0x1dU) | (0xe0000000U 
                                           & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                              & ((~ 
                                                  (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                   >> 0x1dU)) 
                                                 << 0x1dU))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
        = ((0xbfffffffU & vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry) 
           | (0x40000000U & (((IData)(top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__30__KET____DOT__adder__DOT__w2) 
                              << 0x1eU) | (0xc0000000U 
                                           & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                              & ((~ 
                                                  (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                   >> 0x1eU)) 
                                                 << 0x1eU))))));
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
        = ((0x7fffffffU & vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry) 
           | (0x80000000U & (((IData)(top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__31__KET____DOT__adder__DOT__w2) 
                              << 0x1fU) | (0x80000000U 
                                           & (vlSelf->top__DOT__pipline__DOT__operand_a 
                                              & ((~ 
                                                  (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                   >> 0x1fU)) 
                                                 << 0x1fU))))));
    if ((8U & (IData)(vlSelf->top__DOT__pipline__DOT__alu_opE))) {
        if ((4U & (IData)(vlSelf->top__DOT__pipline__DOT__alu_opE))) {
            vlSelf->top__DOT__pipline__DOT__alu_dataE 
                = vlSelf->top__DOT__pipline__DOT__alu__DOT____Vxrand_h96fd10a2__0;
        } else if ((2U & (IData)(vlSelf->top__DOT__pipline__DOT__alu_opE))) {
            vlSelf->top__DOT__pipline__DOT__alu_dataE 
                = ((1U & (IData)(vlSelf->top__DOT__pipline__DOT__alu_opE))
                    ? vlSelf->top__DOT__pipline__DOT__alu__DOT____Vxrand_h96fd10a2__0
                    : vlSelf->top__DOT__pipline__DOT__operand_b);
        } else if ((1U & (IData)(vlSelf->top__DOT__pipline__DOT__alu_opE))) {
            vlSelf->top__DOT__pipline__DOT__alu_dataE 
                = vlSelf->top__DOT__pipline__DOT__operand_a;
            if ((1U & vlSelf->top__DOT__pipline__DOT__operand_b)) {
                vlSelf->top__DOT__pipline__DOT__alu_dataE 
                    = ((0x80000000U & vlSelf->top__DOT__pipline__DOT__operand_a) 
                       | (vlSelf->top__DOT__pipline__DOT__alu_dataE 
                          >> 1U));
            }
            if ((2U & vlSelf->top__DOT__pipline__DOT__operand_b)) {
                vlSelf->top__DOT__pipline__DOT__alu_dataE 
                    = (((- (IData)((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x1fU))) << 0x1eU) 
                       | (vlSelf->top__DOT__pipline__DOT__alu_dataE 
                          >> 2U));
            }
            if ((4U & vlSelf->top__DOT__pipline__DOT__operand_b)) {
                vlSelf->top__DOT__pipline__DOT__alu_dataE 
                    = (((- (IData)((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x1fU))) << 0x1cU) 
                       | (vlSelf->top__DOT__pipline__DOT__alu_dataE 
                          >> 4U));
            }
            if ((8U & vlSelf->top__DOT__pipline__DOT__operand_b)) {
                vlSelf->top__DOT__pipline__DOT__alu_dataE 
                    = (((- (IData)((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x1fU))) << 0x18U) 
                       | (vlSelf->top__DOT__pipline__DOT__alu_dataE 
                          >> 8U));
            }
            if ((0x10U & vlSelf->top__DOT__pipline__DOT__operand_b)) {
                vlSelf->top__DOT__pipline__DOT__alu_dataE 
                    = (((- (IData)((vlSelf->top__DOT__pipline__DOT__operand_a 
                                    >> 0x1fU))) << 0x10U) 
                       | (vlSelf->top__DOT__pipline__DOT__alu_dataE 
                          >> 0x10U));
            }
        } else {
            vlSelf->top__DOT__pipline__DOT__alu_dataE 
                = vlSelf->top__DOT__pipline__DOT__operand_a;
            if ((1U & vlSelf->top__DOT__pipline__DOT__operand_b)) {
                vlSelf->top__DOT__pipline__DOT__alu_dataE 
                    = (vlSelf->top__DOT__pipline__DOT__alu_dataE 
                       >> 1U);
            }
            if ((2U & vlSelf->top__DOT__pipline__DOT__operand_b)) {
                vlSelf->top__DOT__pipline__DOT__alu_dataE 
                    = (vlSelf->top__DOT__pipline__DOT__alu_dataE 
                       >> 2U);
            }
            if ((4U & vlSelf->top__DOT__pipline__DOT__operand_b)) {
                vlSelf->top__DOT__pipline__DOT__alu_dataE 
                    = (vlSelf->top__DOT__pipline__DOT__alu_dataE 
                       >> 4U);
            }
            if ((8U & vlSelf->top__DOT__pipline__DOT__operand_b)) {
                vlSelf->top__DOT__pipline__DOT__alu_dataE 
                    = (vlSelf->top__DOT__pipline__DOT__alu_dataE 
                       >> 8U);
            }
            if ((0x10U & vlSelf->top__DOT__pipline__DOT__operand_b)) {
                vlSelf->top__DOT__pipline__DOT__alu_dataE 
                    = (vlSelf->top__DOT__pipline__DOT__alu_dataE 
                       >> 0x10U);
            }
        }
    } else if ((4U & (IData)(vlSelf->top__DOT__pipline__DOT__alu_opE))) {
        if ((2U & (IData)(vlSelf->top__DOT__pipline__DOT__alu_opE))) {
            if ((1U & (IData)(vlSelf->top__DOT__pipline__DOT__alu_opE))) {
                vlSelf->top__DOT__pipline__DOT__alu_dataE 
                    = vlSelf->top__DOT__pipline__DOT__operand_a;
                if ((1U & vlSelf->top__DOT__pipline__DOT__operand_b)) {
                    vlSelf->top__DOT__pipline__DOT__alu_dataE 
                        = (vlSelf->top__DOT__pipline__DOT__alu_dataE 
                           << 1U);
                }
                if ((2U & vlSelf->top__DOT__pipline__DOT__operand_b)) {
                    vlSelf->top__DOT__pipline__DOT__alu_dataE 
                        = (vlSelf->top__DOT__pipline__DOT__alu_dataE 
                           << 2U);
                }
                if ((4U & vlSelf->top__DOT__pipline__DOT__operand_b)) {
                    vlSelf->top__DOT__pipline__DOT__alu_dataE 
                        = (vlSelf->top__DOT__pipline__DOT__alu_dataE 
                           << 4U);
                }
                if ((8U & vlSelf->top__DOT__pipline__DOT__operand_b)) {
                    vlSelf->top__DOT__pipline__DOT__alu_dataE 
                        = (vlSelf->top__DOT__pipline__DOT__alu_dataE 
                           << 8U);
                }
                if ((0x10U & vlSelf->top__DOT__pipline__DOT__operand_b)) {
                    vlSelf->top__DOT__pipline__DOT__alu_dataE 
                        = (vlSelf->top__DOT__pipline__DOT__alu_dataE 
                           << 0x10U);
                }
            } else {
                vlSelf->top__DOT__pipline__DOT__alu_dataE 
                    = (vlSelf->top__DOT__pipline__DOT__operand_a 
                       & vlSelf->top__DOT__pipline__DOT__operand_b);
            }
        } else {
            vlSelf->top__DOT__pipline__DOT__alu_dataE 
                = ((1U & (IData)(vlSelf->top__DOT__pipline__DOT__alu_opE))
                    ? (vlSelf->top__DOT__pipline__DOT__operand_a 
                       | vlSelf->top__DOT__pipline__DOT__operand_b)
                    : (vlSelf->top__DOT__pipline__DOT__operand_a 
                       ^ vlSelf->top__DOT__pipline__DOT__operand_b));
        }
    } else {
        vlSelf->top__DOT__pipline__DOT__alu_dataE = 
            ((2U & (IData)(vlSelf->top__DOT__pipline__DOT__alu_opE))
              ? ((1U & (IData)(vlSelf->top__DOT__pipline__DOT__alu_opE))
                  ? (1U & (~ (vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry 
                              >> 0x1fU))) : (((vlSelf->top__DOT__pipline__DOT__operand_a 
                                               >> 0x1fU) 
                                              != (vlSelf->top__DOT__pipline__DOT__operand_b 
                                                  >> 0x1fU))
                                              ? (vlSelf->top__DOT__pipline__DOT__operand_a 
                                                 >> 0x1fU)
                                              : (vlSelf->top__DOT__pipline__DOT__alu__DOT__sum 
                                                 >> 0x1fU)))
              : ((1U & (IData)(vlSelf->top__DOT__pipline__DOT__alu_opE))
                  ? ((IData)(1U) + (vlSelf->top__DOT__pipline__DOT__operand_a 
                                    + (~ vlSelf->top__DOT__pipline__DOT__operand_b)))
                  : (vlSelf->top__DOT__pipline__DOT__operand_a 
                     + vlSelf->top__DOT__pipline__DOT__operand_b)));
    }
    vlSelf->top__DOT__pipline__DOT__nxt_pc = ((IData)(vlSelf->top__DOT__pipline__DOT__br_sel)
                                               ? vlSelf->top__DOT__pipline__DOT__alu_dataE
                                               : ((IData)(4U) 
                                                  + vlSelf->top__DOT__pipline__DOT__pcF));
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__i_clk = vlSelf->i_clk;
    vlSelf->__Vclklast__TOP__i_rst_n = vlSelf->i_rst_n;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->i_clk = VL_RAND_RESET_I(1);
    vlSelf->i_rst_n = VL_RAND_RESET_I(1);
    vlSelf->i_io_sw = VL_RAND_RESET_I(32);
    vlSelf->o_insn_vld = VL_RAND_RESET_I(1);
    vlSelf->o_pc_debug = VL_RAND_RESET_I(32);
    vlSelf->o_io_lcd = VL_RAND_RESET_I(32);
    vlSelf->o_io_ledg = VL_RAND_RESET_I(32);
    vlSelf->o_io_ledr = VL_RAND_RESET_I(32);
    vlSelf->o_io_hex0 = VL_RAND_RESET_I(7);
    vlSelf->o_io_hex1 = VL_RAND_RESET_I(7);
    vlSelf->o_io_hex2 = VL_RAND_RESET_I(7);
    vlSelf->o_io_hex3 = VL_RAND_RESET_I(7);
    vlSelf->o_io_hex4 = VL_RAND_RESET_I(7);
    vlSelf->o_io_hex5 = VL_RAND_RESET_I(7);
    vlSelf->o_io_hex6 = VL_RAND_RESET_I(7);
    vlSelf->o_io_hex7 = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__pipline__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipline__DOT__alu_dataE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipline__DOT__nxt_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipline__DOT__pcF = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipline__DOT__pcD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipline__DOT__pc_nxtD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipline__DOT__instrD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipline__DOT__br_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__stallF = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__stallD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__flushM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__flushD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__flushE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__rd_wrenD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__br_unsignedD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__op_b_selD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__alu_opD = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipline__DOT__wb_selD = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipline__DOT__store_selD = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipline__DOT__rd_wrenWB = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__rdWB = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__pipline__DOT__wb_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipline__DOT__immD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipline__DOT__stallE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__insn_vld = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__insn_vldE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__insn_vldM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__insn_vldWB = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__rd_wrenE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__wb_selE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipline__DOT__mem_wrenE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__alu_opE = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipline__DOT__op_a_selE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__op_b_selE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__br_unsignedE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__load_selE = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__pipline__DOT__store_selE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipline__DOT__pcE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipline__DOT__pc_nxtE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipline__DOT__o_rs1_dataE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipline__DOT__o_rs2_dataE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipline__DOT__immE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipline__DOT__rdE = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__pipline__DOT__rs1E = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__pipline__DOT__rs2E = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__pipline__DOT__opcodeE = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__pipline__DOT__op_a = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipline__DOT__op_b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipline__DOT__forw_a_sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipline__DOT__forw_b_sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipline__DOT__opcodeM = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__pipline__DOT__load_selM = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__pipline__DOT__store_selM = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipline__DOT__rd_wrenM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__wb_selM = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipline__DOT__mem_wrenM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__alu_dataM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipline__DOT__st_dataM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipline__DOT__pc_nxtM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipline__DOT__rdM = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__pipline__DOT__pcM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipline__DOT__ld_dataM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipline__DOT__operand_a = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipline__DOT__operand_b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipline__DOT__pc_nxtWB = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipline__DOT__ld_dataWB = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipline__DOT__alu_dataWB = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipline__DOT__wb_selWB = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipline__DOT__pcWB = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2048; ++__Vi0) {
        vlSelf->top__DOT__pipline__DOT__imem__DOT__inst_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__pipline__DOT__regfile__DOT__register[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__pipline__DOT__regfile__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipline__DOT__alu__DOT____Vxrand_h96fd10a2__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipline__DOT__alu__DOT__sum = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__adder0__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__1__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__2__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__3__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__4__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__5__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__6__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__7__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__8__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__9__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__10__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__11__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__12__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__13__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__14__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__15__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__16__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__17__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__18__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__19__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__20__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__21__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__22__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__23__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__24__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__25__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__26__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__27__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__28__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__29__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__30__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__genblk1__BRA__31__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__brc__DOT__sum = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__adder0__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__1__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__2__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__3__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__4__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__5__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__6__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__7__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__8__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__9__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__10__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__11__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__12__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__13__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__14__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__15__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__16__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__17__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__18__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__19__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__20__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__21__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__22__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__23__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__24__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__25__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__26__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__27__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__28__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__29__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__30__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__genblk1__BRA__31__KET____DOT__adder__DOT__w1 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<8192; ++__Vi0) {
        vlSelf->top__DOT__pipline__DOT__lsu__DOT__dmem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__pipline__DOT__lsu__DOT__sw_reg[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__pipline__DOT__lsu__DOT__hex_reg[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__pipline__DOT__lsu__DOT__led_r_reg[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__pipline__DOT__lsu__DOT__led_g_reg = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__pipline__DOT__lsu__DOT__lcd_reg[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__pipline__DOT__lsu__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipline__DOT__hazard_unit__DOT__branchE = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__pipline__DOT__alu__DOT__ripple_adder__DOT__carry = VL_RAND_RESET_I(32);
    vlSelf->__Vchglast__TOP__top__DOT__pipline__DOT__brc__DOT__ripple_adder__DOT__carry = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
