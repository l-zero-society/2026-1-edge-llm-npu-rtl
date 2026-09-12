// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTPU_top.h for the primary calling header

#include "VTPU_top__pch.h"
#include "VTPU_top___024root.h"

VL_ATTR_COLD void VTPU_top___024root___eval_static(VTPU_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPU_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void VTPU_top___024root___eval_initial(VTPU_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPU_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
}

VL_ATTR_COLD void VTPU_top___024root___eval_final(VTPU_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPU_top___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTPU_top___024root___dump_triggers__stl(VTPU_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VTPU_top___024root___eval_phase__stl(VTPU_top___024root* vlSelf);

VL_ATTR_COLD void VTPU_top___024root___eval_settle(VTPU_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPU_top___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VTPU_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("TPU_top.sv", 21075, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VTPU_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTPU_top___024root___dump_triggers__stl(VTPU_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPU_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTPU_top___024root___stl_sequent__TOP__0(VTPU_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPU_top___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ TPU_top__DOT__orchestrator__DOT__skewLanes_0_io_out_valid;
    TPU_top__DOT__orchestrator__DOT__skewLanes_0_io_out_valid = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_0_0__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_0_0__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_0_1__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_0_1__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_0_2__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_0_2__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_0_3__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_0_3__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_0_4__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_0_4__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_0_5__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_0_5__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_0_6__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_0_6__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_0_7__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_0_7__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_0_8__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_0_8__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_0_9__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_0_9__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_0_10__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_0_10__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_0_11__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_0_11__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_0_12__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_0_12__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_0_13__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_0_13__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_0_14__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_0_14__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_0_15__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_0_15__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_1_0__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_1_0__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_1_1__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_1_1__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_1_2__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_1_2__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_1_3__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_1_3__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_1_4__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_1_4__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_1_5__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_1_5__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_1_6__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_1_6__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_1_7__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_1_7__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_1_8__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_1_8__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_1_9__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_1_9__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_1_10__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_1_10__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_1_11__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_1_11__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_1_12__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_1_12__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_1_13__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_1_13__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_1_14__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_1_14__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_1_15__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_1_15__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_2_0__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_2_0__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_2_1__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_2_1__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_2_2__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_2_2__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_2_3__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_2_3__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_2_4__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_2_4__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_2_5__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_2_5__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_2_6__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_2_6__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_2_7__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_2_7__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_2_8__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_2_8__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_2_9__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_2_9__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_2_10__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_2_10__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_2_11__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_2_11__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_2_12__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_2_12__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_2_13__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_2_13__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_2_14__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_2_14__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_2_15__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_2_15__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_3_0__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_3_0__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_3_1__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_3_1__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_3_2__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_3_2__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_3_3__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_3_3__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_3_4__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_3_4__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_3_5__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_3_5__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_3_6__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_3_6__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_3_7__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_3_7__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_3_8__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_3_8__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_3_9__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_3_9__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_3_10__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_3_10__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_3_11__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_3_11__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_3_12__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_3_12__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_3_13__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_3_13__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_3_14__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_3_14__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_3_15__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_3_15__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_4_0__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_4_0__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_4_1__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_4_1__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_4_2__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_4_2__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_4_3__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_4_3__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_4_4__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_4_4__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_4_5__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_4_5__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_4_6__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_4_6__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_4_7__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_4_7__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_4_8__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_4_8__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_4_9__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_4_9__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_4_10__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_4_10__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_4_11__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_4_11__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_4_12__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_4_12__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_4_13__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_4_13__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_4_14__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_4_14__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_4_15__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_4_15__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_5_0__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_5_0__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_5_1__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_5_1__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_5_2__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_5_2__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_5_3__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_5_3__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_5_4__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_5_4__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_5_5__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_5_5__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_5_6__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_5_6__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_5_7__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_5_7__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_5_8__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_5_8__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_5_9__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_5_9__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_5_10__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_5_10__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_5_11__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_5_11__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_5_12__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_5_12__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_5_13__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_5_13__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_5_14__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_5_14__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_5_15__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_5_15__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_6_0__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_6_0__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_6_1__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_6_1__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_6_2__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_6_2__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_6_3__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_6_3__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_6_4__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_6_4__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_6_5__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_6_5__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_6_6__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_6_6__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_6_7__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_6_7__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_6_8__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_6_8__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_6_9__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_6_9__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_6_10__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_6_10__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_6_11__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_6_11__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_6_12__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_6_12__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_6_13__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_6_13__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_6_14__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_6_14__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_6_15__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_6_15__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_7_0__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_7_0__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_7_1__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_7_1__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_7_2__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_7_2__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_7_3__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_7_3__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_7_4__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_7_4__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_7_5__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_7_5__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_7_6__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_7_6__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_7_7__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_7_7__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_7_8__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_7_8__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_7_9__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_7_9__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_7_10__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_7_10__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_7_11__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_7_11__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_7_12__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_7_12__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_7_13__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_7_13__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_7_14__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_7_14__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_7_15__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_7_15__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_8_0__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_8_0__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_8_1__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_8_1__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_8_2__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_8_2__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_8_3__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_8_3__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_8_4__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_8_4__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_8_5__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_8_5__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_8_6__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_8_6__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_8_7__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_8_7__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_8_8__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_8_8__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_8_9__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_8_9__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_8_10__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_8_10__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_8_11__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_8_11__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_8_12__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_8_12__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_8_13__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_8_13__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_8_14__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_8_14__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_8_15__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_8_15__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_9_0__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_9_0__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_9_1__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_9_1__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_9_2__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_9_2__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_9_3__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_9_3__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_9_4__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_9_4__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_9_5__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_9_5__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_9_6__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_9_6__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_9_7__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_9_7__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_9_8__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_9_8__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_9_9__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_9_9__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_9_10__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_9_10__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_9_11__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_9_11__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_9_12__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_9_12__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_9_13__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_9_13__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_9_14__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_9_14__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_9_15__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_9_15__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_10_0__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_10_0__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_10_1__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_10_1__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_10_2__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_10_2__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_10_3__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_10_3__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_10_4__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_10_4__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_10_5__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_10_5__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_10_6__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_10_6__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_10_7__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_10_7__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_10_8__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_10_8__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_10_9__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_10_9__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_10_10__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_10_10__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_10_11__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_10_11__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_10_12__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_10_12__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_10_13__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_10_13__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_10_14__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_10_14__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_10_15__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_10_15__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_11_0__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_11_0__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_11_1__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_11_1__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_11_2__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_11_2__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_11_3__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_11_3__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_11_4__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_11_4__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_11_5__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_11_5__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_11_6__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_11_6__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_11_7__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_11_7__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_11_8__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_11_8__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_11_9__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_11_9__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_11_10__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_11_10__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_11_11__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_11_11__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_11_12__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_11_12__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_11_13__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_11_13__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_11_14__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_11_14__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_11_15__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_11_15__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_12_0__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_12_0__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_12_1__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_12_1__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_12_2__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_12_2__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_12_3__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_12_3__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_12_4__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_12_4__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_12_5__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_12_5__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_12_6__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_12_6__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_12_7__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_12_7__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_12_8__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_12_8__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_12_9__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_12_9__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_12_10__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_12_10__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_12_11__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_12_11__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_12_12__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_12_12__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_12_13__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_12_13__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_12_14__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_12_14__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_12_15__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_12_15__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_13_0__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_13_0__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_13_1__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_13_1__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_13_2__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_13_2__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_13_3__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_13_3__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_13_4__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_13_4__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_13_5__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_13_5__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_13_6__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_13_6__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_13_7__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_13_7__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_13_8__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_13_8__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_13_9__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_13_9__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_13_10__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_13_10__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_13_11__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_13_11__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_13_12__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_13_12__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_13_13__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_13_13__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_13_14__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_13_14__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_13_15__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_13_15__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_14_0__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_14_0__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_14_1__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_14_1__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_14_2__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_14_2__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_14_3__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_14_3__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_14_4__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_14_4__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_14_5__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_14_5__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_14_6__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_14_6__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_14_7__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_14_7__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_14_8__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_14_8__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_14_9__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_14_9__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_14_10__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_14_10__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_14_11__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_14_11__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_14_12__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_14_12__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_14_13__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_14_13__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_14_14__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_14_14__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_14_15__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_14_15__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_15_0__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_15_0__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_15_1__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_15_1__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_15_2__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_15_2__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_15_3__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_15_3__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_15_4__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_15_4__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_15_5__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_15_5__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_15_6__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_15_6__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_15_7__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_15_7__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_15_8__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_15_8__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_15_9__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_15_9__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_15_10__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_15_10__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_15_11__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_15_11__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_15_12__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_15_12__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_15_13__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_15_13__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_15_14__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_15_14__DOT__mul_res = 0;
    SData/*15:0*/ TPU_top__DOT__mxu__DOT__macs_15_15__DOT__mul_res;
    TPU_top__DOT__mxu__DOT__macs_15_15__DOT__mul_res = 0;
    CData/*0:0*/ TPU_top__DOT__tileCtrlQueue__DOT__ptr_match;
    TPU_top__DOT__tileCtrlQueue__DOT__ptr_match = 0;
    CData/*31:0*/ __Vdeeptemp_h1c51d227__0;
    CData/*31:0*/ __Vdeeptemp_h466e0561__0;
    CData/*31:0*/ __Vdeeptemp_hb60a0d72__0;
    // Body
    vlSelf->TPU_top__DOT__timer__DOT__lastRow = (0xfU 
                                                 == (IData)(vlSelf->TPU_top__DOT__timer__DOT__outputRowCounter));
    vlSelf->TPU_top__DOT__timer__DOT___outputRowCounter_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->TPU_top__DOT__timer__DOT__outputRowCounter)));
    vlSelf->TPU_top__DOT__timer__DOT___kTileCounter_T_1 
        = ((IData)(1U) + vlSelf->TPU_top__DOT__timer__DOT__kTileCounter);
    vlSelf->TPU_top__DOT__timer__DOT___nTileCounter_T_1 
        = ((IData)(1U) + vlSelf->TPU_top__DOT__timer__DOT__nTileCounter);
    vlSelf->TPU_top__DOT__timer__DOT___io_fusion_req_T 
        = (0U == vlSelf->TPU_top__DOT__timer__DOT__fusionTileCountdown);
    vlSelf->TPU_top__DOT__timer__DOT___fusionTileCountdown_T_1 
        = (vlSelf->TPU_top__DOT__timer__DOT__fusionTileCountdown 
           - (IData)(1U));
    vlSelf->TPU_top__DOT__accumulator__DOT___GEN_46 
        = ((0xfU == (IData)(vlSelf->TPU_top__DOT__accumulator__DOT__read_ptr))
            ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->TPU_top__DOT__accumulator__DOT__read_ptr))));
    vlSelf->TPU_top__DOT__tileCtrlQueue__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__enq_ptr_value)));
    vlSelf->TPU_top__DOT__tileCtrlQueue__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__deq_ptr_value)));
    vlSelf->TPU_top__DOT__orchestrator__DOT___weightLoadIdx_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__weightLoadIdx)));
    vlSelf->TPU_top__DOT__timer__DOT__lastNTile = (vlSelf->TPU_top__DOT__timer__DOT__nTileCounter 
                                                   == 
                                                   (((0U 
                                                      == vlSelf->io_outColNum)
                                                      ? 1U
                                                      : vlSelf->io_outColNum) 
                                                    - (IData)(1U)));
    vlSelf->TPU_top__DOT__timer__DOT__fire = ((~ (IData)(vlSelf->io_stall)) 
                                              & (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_0__DOT__outValidReg));
    vlSelf->TPU_top__DOT__timer__DOT__lastKTile = (vlSelf->TPU_top__DOT__timer__DOT__kTileCounter 
                                                   == 
                                                   (((0U 
                                                      == vlSelf->io_intermNum)
                                                      ? 1U
                                                      : vlSelf->io_intermNum) 
                                                    - (IData)(1U)));
    vlSelf->TPU_top__DOT__accumulator_io_snapshot_done 
        = ((~ (IData)(vlSelf->io_stall)) & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_15_r) 
                                            & (IData)(vlSelf->TPU_top__DOT__accumulator__DOT__snapshotByCol_15_r)));
    vlSelf->io_out_valid_0 = ((~ (IData)(vlSelf->io_stall)) 
                              & (IData)(vlSelf->TPU_top__DOT__accumulator__DOT__streamActive));
    TPU_top__DOT__tileCtrlQueue__DOT__ptr_match = ((IData)(vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__deq_ptr_value) 
                                                   == (IData)(vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__enq_ptr_value));
    TPU_top__DOT__mxu__DOT__macs_0_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_0)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_1__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_0_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_0)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_2__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_0_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_0)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_3__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_0_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_0)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_4__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_0_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_0)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_5__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_0_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_0)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_6__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_0_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_0)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_7__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_0_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_0)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_8__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_0_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_0)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_9__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_0_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_0)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_10__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_0_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_0)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_11__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_0_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_0)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_12__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_0_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_0)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_13__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_0_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_0)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_14__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_0_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_0)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_15__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_1_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_1)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_1__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_1_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_1)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_2__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_1_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_1)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_3__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_1_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_1)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_4__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_1_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_1)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_5__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_1_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_1)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_6__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_1_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_1)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_7__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_1_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_1)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_8__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_1_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_1)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_9__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_1_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_1)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_10__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_1_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_1)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_11__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_1_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_1)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_12__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_1_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_1)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_13__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_1_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_1)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_14__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_1_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_1)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_15__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_2_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_2)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_1__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_2_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_2)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_2__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_2_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_2)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_3__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_2_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_2)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_4__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_2_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_2)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_5__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_2_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_2)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_6__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_2_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_2)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_7__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_2_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_2)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_8__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_2_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_2)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_9__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_2_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_2)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_10__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_2_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_2)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_11__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_2_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_2)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_12__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_2_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_2)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_13__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_2_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_2)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_14__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_2_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_2)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_15__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_3_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_3)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_1__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_3_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_3)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_2__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_3_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_3)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_3__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_3_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_3)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_4__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_3_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_3)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_5__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_3_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_3)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_6__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_3_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_3)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_7__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_3_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_3)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_8__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_3_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_3)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_9__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_3_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_3)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_10__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_3_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_3)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_11__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_3_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_3)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_12__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_3_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_3)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_13__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_3_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_3)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_14__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_3_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_3)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_15__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_4_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_4)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_1__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_4_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_4)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_2__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_4_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_4)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_3__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_4_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_4)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_4__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_4_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_4)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_5__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_4_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_4)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_6__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_4_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_4)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_7__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_4_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_4)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_8__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_4_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_4)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_9__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_4_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_4)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_10__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_4_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_4)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_11__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_4_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_4)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_12__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_4_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_4)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_13__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_4_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_4)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_14__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_4_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_4)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_15__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_5_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_5)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_1__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_5_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_5)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_2__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_5_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_5)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_3__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_5_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_5)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_4__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_5_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_5)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_5__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_5_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_5)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_6__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_5_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_5)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_7__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_5_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_5)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_8__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_5_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_5)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_9__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_5_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_5)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_10__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_5_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_5)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_11__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_5_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_5)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_12__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_5_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_5)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_13__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_5_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_5)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_14__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_5_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_5)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_15__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_6_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_6)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_1__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_6_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_6)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_2__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_6_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_6)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_3__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_6_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_6)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_4__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_6_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_6)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_5__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_6_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_6)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_6__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_6_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_6)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_7__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_6_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_6)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_8__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_6_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_6)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_9__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_6_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_6)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_10__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_6_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_6)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_11__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_6_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_6)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_12__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_6_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_6)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_13__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_6_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_6)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_14__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_6_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_6)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_15__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_7_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_7)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_1__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_7_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_7)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_2__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_7_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_7)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_3__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_7_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_7)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_4__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_7_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_7)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_5__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_7_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_7)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_6__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_7_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_7)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_7__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_7_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_7)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_8__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_7_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_7)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_9__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_7_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_7)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_10__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_7_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_7)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_11__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_7_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_7)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_12__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_7_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_7)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_13__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_7_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_7)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_14__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_7_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_7)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_15__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_8_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_8)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_1__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_8_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_8)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_2__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_8_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_8)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_3__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_8_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_8)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_4__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_8_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_8)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_5__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_8_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_8)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_6__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_8_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_8)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_7__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_8_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_8)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_8__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_8_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_8)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_9__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_8_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_8)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_10__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_8_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_8)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_11__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_8_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_8)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_12__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_8_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_8)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_13__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_8_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_8)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_14__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_8_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_8)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_15__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_9_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_9)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_1__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_9_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_9)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_2__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_9_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_9)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_3__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_9_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_9)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_4__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_9_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_9)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_5__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_9_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_9)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_6__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_9_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_9)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_7__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_9_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_9)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_8__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_9_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_9)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_9__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_9_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_9)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_10__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_9_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_9)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_11__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_9_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_9)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_12__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_9_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_9)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_13__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_9_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_9)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_14__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_9_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_9)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_15__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_10_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_10)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_1__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_10_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_10)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_2__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_10_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_10)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_3__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_10_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_10)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_4__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_10_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_10)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_5__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_10_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_10)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_6__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_10_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_10)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_7__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_10_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_10)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_8__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_10_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_10)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_9__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_10_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_10)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_10__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_10_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_10)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_11__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_10_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_10)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_12__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_10_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_10)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_13__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_10_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_10)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_14__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_10_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_10)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_15__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_11_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_11)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_1__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_11_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_11)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_2__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_11_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_11)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_3__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_11_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_11)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_4__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_11_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_11)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_5__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_11_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_11)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_6__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_11_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_11)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_7__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_11_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_11)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_8__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_11_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_11)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_9__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_11_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_11)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_10__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_11_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_11)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_11__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_11_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_11)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_12__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_11_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_11)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_13__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_11_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_11)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_14__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_11_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_11)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_15__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_12_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_12)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_1__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_12_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_12)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_2__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_12_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_12)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_3__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_12_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_12)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_4__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_12_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_12)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_5__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_12_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_12)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_6__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_12_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_12)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_7__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_12_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_12)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_8__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_12_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_12)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_9__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_12_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_12)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_10__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_12_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_12)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_11__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_12_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_12)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_12__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_12_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_12)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_13__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_12_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_12)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_14__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_12_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_12)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_15__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_13_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_13)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_1__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_13_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_13)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_2__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_13_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_13)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_3__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_13_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_13)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_4__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_13_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_13)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_5__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_13_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_13)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_6__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_13_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_13)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_7__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_13_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_13)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_8__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_13_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_13)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_9__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_13_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_13)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_10__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_13_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_13)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_11__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_13_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_13)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_12__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_13_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_13)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_13__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_13_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_13)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_14__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_13_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_13)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_15__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_14_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_14)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_1__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_14_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_14)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_2__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_14_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_14)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_3__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_14_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_14)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_4__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_14_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_14)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_5__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_14_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_14)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_6__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_14_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_14)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_7__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_14_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_14)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_8__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_14_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_14)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_9__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_14_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_14)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_10__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_14_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_14)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_11__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_14_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_14)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_12__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_14_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_14)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_13__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_14_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_14)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_14__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_14_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_14)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_15__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_15_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_15)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_1__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_15_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_15)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_2__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_15_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_15)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_3__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_15_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_15)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_4__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_15_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_15)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_5__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_15_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_15)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_6__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_15_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_15)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_7__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_15_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_15)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_8__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_15_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_15)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_9__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_15_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_15)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_10__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_15_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_15)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_11__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_15_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_15)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_12__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_15_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_15)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_13__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_15_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_15)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_14__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_15_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_15)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_15__DOT__active_weight))))));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_1_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_1__DOT__updatePipe_0));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2__DOT__updatePipe_1));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3__DOT__updatePipe_2));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__updatePipe_3));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__updatePipe_4));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__updatePipe_5));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__updatePipe_6));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_7));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_8));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_9));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_10));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_11));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_12));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_13));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_14));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_1_io_out_valid 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_1__DOT__validPipe_0));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2_io_out_valid 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2__DOT__validPipe_1));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3_io_out_valid 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3__DOT__validPipe_2));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4_io_out_valid 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__validPipe_3));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5_io_out_valid 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__validPipe_4));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6_io_out_valid 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__validPipe_5));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7_io_out_valid 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__validPipe_6));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8_io_out_valid 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_7));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9_io_out_valid 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_8));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10_io_out_valid 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_9));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11_io_out_valid 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_10));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12_io_out_valid 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_11));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13_io_out_valid 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_12));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14_io_out_valid 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_13));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15_io_out_valid 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_14));
    TPU_top__DOT__orchestrator__DOT__skewLanes_0_io_out_valid 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->io_input_valid));
    vlSelf->TPU_top__DOT__accumulator__DOT__buffers_0_io_snapshot 
        = ((IData)(vlSelf->TPU_top__DOT__timer__DOT__fire) 
           & ((IData)(vlSelf->TPU_top__DOT__timer__DOT__lastKTile) 
              & (0xfU == (IData)(vlSelf->TPU_top__DOT__timer__DOT__outputRowCounter))));
    vlSelf->TPU_top__DOT__accumulator__DOT___GEN_51 
        = ((IData)(vlSelf->TPU_top__DOT__accumulator_io_snapshot_done) 
           | ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__streamActive)
               ? ((0xfU != (IData)(vlSelf->TPU_top__DOT__accumulator__DOT__read_ptr)) 
                  & (IData)(vlSelf->TPU_top__DOT__accumulator__DOT__streamActive))
               : (IData)(vlSelf->TPU_top__DOT__accumulator__DOT__streamActive)));
    vlSelf->io_out_valid_1 = vlSelf->io_out_valid_0;
    vlSelf->io_out_valid_2 = vlSelf->io_out_valid_0;
    vlSelf->io_out_valid_3 = vlSelf->io_out_valid_0;
    vlSelf->io_out_valid_4 = vlSelf->io_out_valid_0;
    vlSelf->io_out_valid_5 = vlSelf->io_out_valid_0;
    vlSelf->io_out_valid_6 = vlSelf->io_out_valid_0;
    vlSelf->io_out_valid_7 = vlSelf->io_out_valid_0;
    vlSelf->io_out_valid_8 = vlSelf->io_out_valid_0;
    vlSelf->io_out_valid_9 = vlSelf->io_out_valid_0;
    vlSelf->io_out_valid_10 = vlSelf->io_out_valid_0;
    vlSelf->io_out_valid_11 = vlSelf->io_out_valid_0;
    vlSelf->io_out_valid_12 = vlSelf->io_out_valid_0;
    vlSelf->io_out_valid_13 = vlSelf->io_out_valid_0;
    vlSelf->io_out_valid_14 = vlSelf->io_out_valid_0;
    vlSelf->io_out_valid_15 = vlSelf->io_out_valid_0;
    vlSelf->TPU_top__DOT__accumulator_io_out_tile_start 
        = ((IData)(vlSelf->io_out_valid_0) & (0U == (IData)(vlSelf->TPU_top__DOT__accumulator__DOT__read_ptr)));
    vlSelf->__VdfgTmp_h3681e6d6__0 = ((IData)(TPU_top__DOT__tileCtrlQueue__DOT__ptr_match) 
                                      & (IData)(vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__maybe_full));
    vlSelf->__VdfgTmp_hd2a28677__0 = ((~ (IData)(vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__maybe_full)) 
                                      & (IData)(TPU_top__DOT__tileCtrlQueue__DOT__ptr_match));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_1__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(TPU_top__DOT__mxu__DOT__macs_0_1__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(TPU_top__DOT__mxu__DOT__macs_0_1__DOT__mul_res))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_2__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(TPU_top__DOT__mxu__DOT__macs_0_2__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(TPU_top__DOT__mxu__DOT__macs_0_2__DOT__mul_res))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_3__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(TPU_top__DOT__mxu__DOT__macs_0_3__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(TPU_top__DOT__mxu__DOT__macs_0_3__DOT__mul_res))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_4__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(TPU_top__DOT__mxu__DOT__macs_0_4__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(TPU_top__DOT__mxu__DOT__macs_0_4__DOT__mul_res))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_5__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(TPU_top__DOT__mxu__DOT__macs_0_5__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(TPU_top__DOT__mxu__DOT__macs_0_5__DOT__mul_res))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_6__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(TPU_top__DOT__mxu__DOT__macs_0_6__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(TPU_top__DOT__mxu__DOT__macs_0_6__DOT__mul_res))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_7__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(TPU_top__DOT__mxu__DOT__macs_0_7__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(TPU_top__DOT__mxu__DOT__macs_0_7__DOT__mul_res))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_8__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(TPU_top__DOT__mxu__DOT__macs_0_8__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(TPU_top__DOT__mxu__DOT__macs_0_8__DOT__mul_res))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_9__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(TPU_top__DOT__mxu__DOT__macs_0_9__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(TPU_top__DOT__mxu__DOT__macs_0_9__DOT__mul_res))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_10__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(TPU_top__DOT__mxu__DOT__macs_0_10__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(TPU_top__DOT__mxu__DOT__macs_0_10__DOT__mul_res))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_11__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(TPU_top__DOT__mxu__DOT__macs_0_11__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(TPU_top__DOT__mxu__DOT__macs_0_11__DOT__mul_res))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_12__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(TPU_top__DOT__mxu__DOT__macs_0_12__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(TPU_top__DOT__mxu__DOT__macs_0_12__DOT__mul_res))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_13__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(TPU_top__DOT__mxu__DOT__macs_0_13__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(TPU_top__DOT__mxu__DOT__macs_0_13__DOT__mul_res))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_14__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(TPU_top__DOT__mxu__DOT__macs_0_14__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(TPU_top__DOT__mxu__DOT__macs_0_14__DOT__mul_res))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_15__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(TPU_top__DOT__mxu__DOT__macs_0_15__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(TPU_top__DOT__mxu__DOT__macs_0_15__DOT__mul_res))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_0_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_1_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_1_1__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_0_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_1_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_1_2__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_0_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_1_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_1_3__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_0_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_1_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_1_4__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_0_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_1_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_1_5__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_0_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_1_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_1_6__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_0_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_1_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_1_7__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_0_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_1_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_1_8__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_0_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_1_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_1_9__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_0_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_1_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_1_10__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_0_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_1_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_1_11__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_0_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_1_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_1_12__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_0_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_1_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_1_13__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_0_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_1_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_1_14__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_0_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_1_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_1_15__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_1_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_2_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_2_1__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_1_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_2_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_2_2__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_1_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_2_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_2_3__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_1_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_2_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_2_4__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_1_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_2_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_2_5__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_1_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_2_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_2_6__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_1_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_2_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_2_7__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_1_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_2_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_2_8__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_1_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_2_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_2_9__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_1_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_2_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_2_10__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_1_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_2_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_2_11__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_1_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_2_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_2_12__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_1_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_2_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_2_13__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_1_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_2_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_2_14__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_1_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_2_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_2_15__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_2_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_3_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_3_1__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_2_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_3_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_3_2__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_2_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_3_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_3_3__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_2_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_3_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_3_4__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_2_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_3_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_3_5__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_2_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_3_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_3_6__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_2_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_3_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_3_7__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_2_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_3_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_3_8__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_2_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_3_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_3_9__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_2_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_3_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_3_10__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_2_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_3_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_3_11__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_2_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_3_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_3_12__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_2_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_3_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_3_13__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_2_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_3_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_3_14__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_2_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_3_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_3_15__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_3_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_4_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_4_1__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_3_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_4_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_4_2__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_3_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_4_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_4_3__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_3_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_4_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_4_4__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_3_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_4_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_4_5__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_3_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_4_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_4_6__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_3_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_4_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_4_7__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_3_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_4_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_4_8__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_3_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_4_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_4_9__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_3_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_4_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_4_10__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_3_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_4_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_4_11__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_3_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_4_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_4_12__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_3_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_4_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_4_13__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_3_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_4_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_4_14__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_3_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_4_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_4_15__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_4_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_5_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_5_1__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_4_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_5_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_5_2__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_4_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_5_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_5_3__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_4_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_5_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_5_4__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_4_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_5_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_5_5__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_4_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_5_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_5_6__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_4_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_5_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_5_7__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_4_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_5_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_5_8__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_4_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_5_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_5_9__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_4_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_5_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_5_10__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_4_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_5_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_5_11__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_4_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_5_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_5_12__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_4_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_5_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_5_13__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_4_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_5_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_5_14__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_4_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_5_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_5_15__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_5_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_6_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_6_1__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_5_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_6_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_6_2__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_5_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_6_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_6_3__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_5_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_6_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_6_4__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_5_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_6_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_6_5__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_5_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_6_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_6_6__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_5_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_6_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_6_7__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_5_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_6_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_6_8__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_5_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_6_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_6_9__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_5_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_6_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_6_10__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_5_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_6_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_6_11__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_5_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_6_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_6_12__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_5_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_6_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_6_13__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_5_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_6_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_6_14__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_5_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_6_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_6_15__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_6_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_7_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_7_1__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_6_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_7_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_7_2__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_6_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_7_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_7_3__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_6_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_7_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_7_4__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_6_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_7_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_7_5__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_6_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_7_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_7_6__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_6_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_7_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_7_7__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_6_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_7_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_7_8__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_6_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_7_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_7_9__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_6_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_7_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_7_10__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_6_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_7_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_7_11__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_6_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_7_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_7_12__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_6_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_7_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_7_13__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_6_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_7_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_7_14__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_6_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_7_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_7_15__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_7_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_8_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_8_1__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_7_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_8_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_8_2__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_7_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_8_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_8_3__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_7_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_8_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_8_4__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_7_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_8_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_8_5__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_7_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_8_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_8_6__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_7_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_8_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_8_7__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_7_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_8_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_8_8__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_7_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_8_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_8_9__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_7_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_8_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_8_10__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_7_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_8_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_8_11__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_7_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_8_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_8_12__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_7_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_8_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_8_13__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_7_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_8_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_8_14__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_7_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_8_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_8_15__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_8_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_9_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_9_1__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_8_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_9_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_9_2__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_8_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_9_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_9_3__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_8_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_9_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_9_4__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_8_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_9_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_9_5__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_8_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_9_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_9_6__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_8_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_9_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_9_7__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_8_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_9_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_9_8__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_8_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_9_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_9_9__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_8_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_9_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_9_10__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_8_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_9_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_9_11__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_8_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_9_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_9_12__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_8_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_9_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_9_13__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_8_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_9_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_9_14__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_8_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_9_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_9_15__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_9_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_10_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_10_1__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_9_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_10_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_10_2__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_9_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_10_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_10_3__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_9_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_10_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_10_4__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_9_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_10_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_10_5__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_9_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_10_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_10_6__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_9_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_10_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_10_7__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_9_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_10_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_10_8__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_9_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_10_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_10_9__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_9_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_10_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_10_10__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_9_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_10_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_10_11__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_9_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_10_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_10_12__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_9_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_10_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_10_13__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_9_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_10_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_10_14__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_9_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_10_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_10_15__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_10_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_11_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_11_1__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_10_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_11_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_11_2__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_10_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_11_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_11_3__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_10_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_11_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_11_4__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_10_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_11_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_11_5__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_10_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_11_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_11_6__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_10_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_11_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_11_7__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_10_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_11_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_11_8__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_10_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_11_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_11_9__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_10_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_11_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_11_10__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_10_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_11_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_11_11__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_10_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_11_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_11_12__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_10_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_11_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_11_13__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_10_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_11_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_11_14__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_10_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_11_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_11_15__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_11_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_12_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_12_1__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_11_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_12_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_12_2__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_11_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_12_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_12_3__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_11_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_12_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_12_4__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_11_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_12_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_12_5__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_11_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_12_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_12_6__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_11_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_12_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_12_7__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_11_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_12_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_12_8__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_11_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_12_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_12_9__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_11_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_12_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_12_10__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_11_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_12_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_12_11__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_11_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_12_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_12_12__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_11_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_12_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_12_13__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_11_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_12_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_12_14__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_11_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_12_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_12_15__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_12_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_13_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_13_1__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_12_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_13_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_13_2__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_12_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_13_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_13_3__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_12_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_13_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_13_4__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_12_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_13_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_13_5__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_12_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_13_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_13_6__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_12_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_13_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_13_7__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_12_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_13_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_13_8__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_12_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_13_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_13_9__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_12_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_13_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_13_10__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_12_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_13_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_13_11__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_12_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_13_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_13_12__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_12_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_13_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_13_13__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_12_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_13_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_13_14__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_12_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_13_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_13_15__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_13_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_14_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_14_1__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_13_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_14_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_14_2__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_13_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_14_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_14_3__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_13_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_14_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_14_4__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_13_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_14_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_14_5__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_13_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_14_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_14_6__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_13_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_14_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_14_7__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_13_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_14_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_14_8__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_13_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_14_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_14_9__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_13_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_14_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_14_10__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_13_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_14_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_14_11__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_13_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_14_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_14_12__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_13_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_14_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_14_13__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_13_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_14_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_14_14__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_13_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_14_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_14_15__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_14_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_15_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_15_1__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_14_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_15_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_15_2__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_14_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_15_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_15_3__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_14_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_15_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_15_4__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_14_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_15_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_15_5__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_14_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_15_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_15_6__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_14_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_15_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_15_7__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_14_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_15_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_15_8__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_14_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_15_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_15_9__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_14_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_15_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_15_10__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_14_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_15_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_15_11__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_14_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_15_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_15_12__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_14_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_15_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_15_13__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_14_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_15_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_15_14__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_14_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_15_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_15_15__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_1_io_out_data 
        = ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_1_io_out_valid)
            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_1__DOT__dataPipe_0)
            : 0U);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2_io_out_data 
        = ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2_io_out_valid)
            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2__DOT__dataPipe_1)
            : 0U);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3_io_out_data 
        = ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3_io_out_valid)
            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3__DOT__dataPipe_2)
            : 0U);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4_io_out_data 
        = ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4_io_out_valid)
            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__dataPipe_3)
            : 0U);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5_io_out_data 
        = ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5_io_out_valid)
            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__dataPipe_4)
            : 0U);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6_io_out_data 
        = ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6_io_out_valid)
            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__dataPipe_5)
            : 0U);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7_io_out_data 
        = ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7_io_out_valid)
            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__dataPipe_6)
            : 0U);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8_io_out_data 
        = ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8_io_out_valid)
            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_7)
            : 0U);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9_io_out_data 
        = ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9_io_out_valid)
            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_8)
            : 0U);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10_io_out_data 
        = ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10_io_out_valid)
            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_9)
            : 0U);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11_io_out_data 
        = ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11_io_out_valid)
            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_10)
            : 0U);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12_io_out_data 
        = ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12_io_out_valid)
            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_11)
            : 0U);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13_io_out_data 
        = ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13_io_out_valid)
            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_12)
            : 0U);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14_io_out_data 
        = ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14_io_out_valid)
            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_13)
            : 0U);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15_io_out_data 
        = ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15_io_out_valid)
            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_14)
            : 0U);
    if (TPU_top__DOT__orchestrator__DOT__skewLanes_0_io_out_valid) {
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_0_io_out_data 
            = vlSelf->io_in_input_0;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_0_io_out_weight_update 
            = vlSelf->io_input_tile_start;
    } else {
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_0_io_out_data = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_0_io_out_weight_update = 0U;
    }
    vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__ram_row_change_update_MPORT_en 
        = ((~ (IData)(vlSelf->__VdfgTmp_h3681e6d6__0)) 
           & (IData)(vlSelf->TPU_top__DOT__accumulator__DOT__buffers_0_io_snapshot));
    vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__do_deq 
        = ((~ (IData)(vlSelf->__VdfgTmp_hd2a28677__0)) 
           & (IData)(vlSelf->TPU_top__DOT__accumulator_io_out_tile_start));
    vlSelf->io_out_meta_row_change_update = ((IData)(vlSelf->TPU_top__DOT__accumulator_io_out_tile_start) 
                                             & ((~ (IData)(vlSelf->__VdfgTmp_hd2a28677__0)) 
                                                & vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__ram_row_change_update
                                                [vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__deq_ptr_value]));
    vlSelf->io_fusion_req = ((IData)(vlSelf->TPU_top__DOT__accumulator_io_snapshot_done) 
                             & ((~ (IData)(vlSelf->__VdfgTmp_hd2a28677__0)) 
                                & vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__ram_fusion_req
                                [vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__deq_ptr_value]));
    TPU_top__DOT__mxu__DOT__macs_1_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_1_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_1_io_out_weight_update)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_1)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_0__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_2_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2_io_out_weight_update)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_2)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_0__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_3_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3_io_out_weight_update)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_3)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_0__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_4_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4_io_out_weight_update)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_4)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_0__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_5_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5_io_out_weight_update)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_5)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_0__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_6_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6_io_out_weight_update)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_6)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_0__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_7_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7_io_out_weight_update)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_7)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_0__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_8_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8_io_out_weight_update)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_8)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_0__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_9_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9_io_out_weight_update)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_9)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_0__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_10_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10_io_out_weight_update)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_10)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_0__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_11_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11_io_out_weight_update)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_11)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_0__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_12_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12_io_out_weight_update)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_12)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_0__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_13_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13_io_out_weight_update)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_13)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_0__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_14_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14_io_out_weight_update)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_14)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_0__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_15_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15_io_out_weight_update)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_15)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_0__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_0_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_0_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_0_io_out_weight_update)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_0)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_0__DOT__active_weight))))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_0_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_1_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_1_0__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_1_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_2_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_2_0__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_2_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_3_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_3_0__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_3_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_4_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_4_0__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_4_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_5_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_5_0__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_5_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_6_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_6_0__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_6_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_7_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_7_0__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_7_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_8_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_8_0__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_8_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_9_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_9_0__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_9_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_10_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_10_0__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_10_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_11_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_11_0__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_11_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_12_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_12_0__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_12_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_13_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_13_0__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_13_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_14_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_14_0__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_14_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_15_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_15_0__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_0__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(TPU_top__DOT__mxu__DOT__macs_0_0__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(TPU_top__DOT__mxu__DOT__macs_0_0__DOT__mul_res))));
    __Vdeeptemp_h1c51d227__0 = (((~ (IData)(vlSelf->io_stall)) 
                                 & ((1U & (IData)((vlSelf->TPU_top__DOT__mxu__DOT__macs_7_3__DOT__add_full 
                                                   >> 0x20U))) 
                                    != (1U & (IData)(
                                                     (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_3__DOT__add_full 
                                                      >> 0x1fU))))) 
                                | (((~ (IData)(vlSelf->io_stall)) 
                                    & ((1U & (IData)(
                                                     (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_2__DOT__add_full 
                                                      >> 0x20U))) 
                                       != (1U & (IData)(
                                                        (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_2__DOT__add_full 
                                                         >> 0x1fU))))) 
                                   | (((~ (IData)(vlSelf->io_stall)) 
                                       & ((1U & (IData)(
                                                        (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_1__DOT__add_full 
                                                         >> 0x20U))) 
                                          != (1U & (IData)(
                                                           (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_1__DOT__add_full 
                                                            >> 0x1fU))))) 
                                      | (((~ (IData)(vlSelf->io_stall)) 
                                          & ((1U & (IData)(
                                                           (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_0__DOT__add_full 
                                                            >> 0x20U))) 
                                             != (1U 
                                                 & (IData)(
                                                           (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_0__DOT__add_full 
                                                            >> 0x1fU))))) 
                                         | (((~ (IData)(vlSelf->io_stall)) 
                                             & ((1U 
                                                 & (IData)(
                                                           (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_15__DOT__add_full 
                                                            >> 0x20U))) 
                                                != 
                                                (1U 
                                                 & (IData)(
                                                           (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_15__DOT__add_full 
                                                            >> 0x1fU))))) 
                                            | (((~ (IData)(vlSelf->io_stall)) 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_14__DOT__add_full 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_14__DOT__add_full 
                                                               >> 0x1fU))))) 
                                               | (((~ (IData)(vlSelf->io_stall)) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_13__DOT__add_full 
                                                                  >> 0x20U))) 
                                                      != 
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_13__DOT__add_full 
                                                                  >> 0x1fU))))) 
                                                  | (((~ (IData)(vlSelf->io_stall)) 
                                                      & ((1U 
                                                          & (IData)(
                                                                    (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_12__DOT__add_full 
                                                                     >> 0x20U))) 
                                                         != 
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_12__DOT__add_full 
                                                                     >> 0x1fU))))) 
                                                     | (((~ (IData)(vlSelf->io_stall)) 
                                                         & ((1U 
                                                             & (IData)(
                                                                       (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_11__DOT__add_full 
                                                                        >> 0x20U))) 
                                                            != 
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_11__DOT__add_full 
                                                                        >> 0x1fU))))) 
                                                        | (((~ (IData)(vlSelf->io_stall)) 
                                                            & ((1U 
                                                                & (IData)(
                                                                          (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_10__DOT__add_full 
                                                                           >> 0x20U))) 
                                                               != 
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_10__DOT__add_full 
                                                                           >> 0x1fU))))) 
                                                           | (((~ (IData)(vlSelf->io_stall)) 
                                                               & ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_9__DOT__add_full 
                                                                              >> 0x20U))) 
                                                                  != 
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_9__DOT__add_full 
                                                                              >> 0x1fU))))) 
                                                              | (((~ (IData)(vlSelf->io_stall)) 
                                                                  & ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_8__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                     != 
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_8__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                 | (((~ (IData)(vlSelf->io_stall)) 
                                                                     & ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_7__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                        != 
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_7__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                    | (((~ (IData)(vlSelf->io_stall)) 
                                                                        & ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_6__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                           != 
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_6__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                       | (((~ (IData)(vlSelf->io_stall)) 
                                                                           & ((1U 
                                                                               & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_5__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                              != 
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_5__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                          | (((~ (IData)(vlSelf->io_stall)) 
                                                                              & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_4__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_4__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                             | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_3__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_3__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_2__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_2__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_1__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_1__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_0__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_0__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_15__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_15__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_14__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_14__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_13__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_13__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_12__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_12__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_11__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_11__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_10__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_10__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_9__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_9__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_8__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_8__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_7__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_7__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_6__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_6__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_5__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_5__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_4__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_4__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_3__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_3__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_2__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_2__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_1__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_1__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_0__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_0__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_15__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_15__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_14__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_14__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_13__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_13__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_12__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_12__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_11__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_11__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_10__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_10__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_9__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_9__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_8__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_8__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_7__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_7__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_6__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_6__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_5__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_5__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_4__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_4__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_3__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_3__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_2__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_2__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_1__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_1__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_0__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_0__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_15__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_15__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_14__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_14__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_13__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_13__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_12__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_12__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_11__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_11__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_10__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_10__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_9__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_9__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_8__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_8__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_7__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_7__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_6__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_6__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_5__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_5__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_4__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_4__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_3__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_3__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_2__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_2__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_1__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_1__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_0__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_0__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_15__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_15__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_14__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_14__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_13__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_13__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_12__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_12__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_11__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_11__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_10__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_10__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_9__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_9__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_8__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_8__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_7__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_7__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_6__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_6__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_5__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_5__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_4__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_4__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_3__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_3__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_2__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_2__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_1__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_1__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_0__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_0__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_15__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_15__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_14__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_14__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_13__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_13__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_12__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_12__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_11__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_11__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_10__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_10__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_9__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_9__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_8__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_8__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_7__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_7__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_6__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_6__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_5__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_5__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_4__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_4__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_3__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_3__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_2__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_2__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_1__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_1__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_0__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_0__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_15__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_15__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_14__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_14__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_13__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_13__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_12__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_12__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_11__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_11__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_10__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_10__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_9__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_9__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_8__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_8__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_7__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_7__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_6__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_6__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_5__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_5__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_4__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_4__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_3__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_3__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_2__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_2__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_1__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_1__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | ((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_0__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_0__DOT__add_full 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp_hb60a0d72__0 = (((~ (IData)(vlSelf->io_stall)) 
                                 & ((1U & (IData)((vlSelf->TPU_top__DOT__mxu__DOT__macs_14_6__DOT__add_full 
                                                   >> 0x20U))) 
                                    != (1U & (IData)(
                                                     (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_6__DOT__add_full 
                                                      >> 0x1fU))))) 
                                | (((~ (IData)(vlSelf->io_stall)) 
                                    & ((1U & (IData)(
                                                     (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_5__DOT__add_full 
                                                      >> 0x20U))) 
                                       != (1U & (IData)(
                                                        (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_5__DOT__add_full 
                                                         >> 0x1fU))))) 
                                   | (((~ (IData)(vlSelf->io_stall)) 
                                       & ((1U & (IData)(
                                                        (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_4__DOT__add_full 
                                                         >> 0x20U))) 
                                          != (1U & (IData)(
                                                           (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_4__DOT__add_full 
                                                            >> 0x1fU))))) 
                                      | (((~ (IData)(vlSelf->io_stall)) 
                                          & ((1U & (IData)(
                                                           (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_3__DOT__add_full 
                                                            >> 0x20U))) 
                                             != (1U 
                                                 & (IData)(
                                                           (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_3__DOT__add_full 
                                                            >> 0x1fU))))) 
                                         | (((~ (IData)(vlSelf->io_stall)) 
                                             & ((1U 
                                                 & (IData)(
                                                           (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_2__DOT__add_full 
                                                            >> 0x20U))) 
                                                != 
                                                (1U 
                                                 & (IData)(
                                                           (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_2__DOT__add_full 
                                                            >> 0x1fU))))) 
                                            | (((~ (IData)(vlSelf->io_stall)) 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_1__DOT__add_full 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_1__DOT__add_full 
                                                               >> 0x1fU))))) 
                                               | (((~ (IData)(vlSelf->io_stall)) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_0__DOT__add_full 
                                                                  >> 0x20U))) 
                                                      != 
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_0__DOT__add_full 
                                                                  >> 0x1fU))))) 
                                                  | (((~ (IData)(vlSelf->io_stall)) 
                                                      & ((1U 
                                                          & (IData)(
                                                                    (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_15__DOT__add_full 
                                                                     >> 0x20U))) 
                                                         != 
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_15__DOT__add_full 
                                                                     >> 0x1fU))))) 
                                                     | (((~ (IData)(vlSelf->io_stall)) 
                                                         & ((1U 
                                                             & (IData)(
                                                                       (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_14__DOT__add_full 
                                                                        >> 0x20U))) 
                                                            != 
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_14__DOT__add_full 
                                                                        >> 0x1fU))))) 
                                                        | (((~ (IData)(vlSelf->io_stall)) 
                                                            & ((1U 
                                                                & (IData)(
                                                                          (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_13__DOT__add_full 
                                                                           >> 0x20U))) 
                                                               != 
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_13__DOT__add_full 
                                                                           >> 0x1fU))))) 
                                                           | (((~ (IData)(vlSelf->io_stall)) 
                                                               & ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_12__DOT__add_full 
                                                                              >> 0x20U))) 
                                                                  != 
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_12__DOT__add_full 
                                                                              >> 0x1fU))))) 
                                                              | (((~ (IData)(vlSelf->io_stall)) 
                                                                  & ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_11__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                     != 
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_11__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                 | (((~ (IData)(vlSelf->io_stall)) 
                                                                     & ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_10__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                        != 
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_10__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                    | (((~ (IData)(vlSelf->io_stall)) 
                                                                        & ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_9__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                           != 
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_9__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                       | (((~ (IData)(vlSelf->io_stall)) 
                                                                           & ((1U 
                                                                               & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_8__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                              != 
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_8__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                          | (((~ (IData)(vlSelf->io_stall)) 
                                                                              & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_7__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_7__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                             | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_6__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_6__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_5__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_5__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_4__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_4__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_3__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_3__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_2__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_2__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_1__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_1__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_0__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_0__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_15__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_15__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_14__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_14__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_13__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_13__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_12__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_12__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_11__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_11__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_10__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_10__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_9__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_9__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_8__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_8__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_7__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_7__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_6__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_6__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_5__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_5__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_4__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_4__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_3__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_3__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_2__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_2__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_1__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_1__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_0__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_0__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_15__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_15__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_14__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_14__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_13__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_13__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_12__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_12__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_11__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_11__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_10__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_10__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_9__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_9__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_8__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_8__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_7__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_7__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_6__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_6__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_5__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_5__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_4__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_4__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_3__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_3__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_2__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_2__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_1__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_1__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_0__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_0__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_15__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_15__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_14__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_14__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_13__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_13__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_12__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_12__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_11__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_11__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_10__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_10__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_9__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_9__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_8__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_8__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_7__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_7__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_6__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_6__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_5__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_5__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_4__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_4__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_3__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_3__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_2__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_2__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_1__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_1__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_0__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_0__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_15__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_15__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_14__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_14__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_13__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_13__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_12__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_12__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_11__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_11__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_10__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_10__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_9__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_9__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_8__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_8__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_7__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_7__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_6__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_6__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_5__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_5__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_4__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_4__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_3__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_3__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_2__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_2__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_1__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_1__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_0__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_0__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_15__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_15__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_14__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_14__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_13__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_13__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_12__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_12__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_11__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_11__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_10__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_10__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_9__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_9__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_8__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_8__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_7__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_7__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_6__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_6__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_5__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_5__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_4__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_4__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_3__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_3__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_2__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_2__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_1__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_1__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_0__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_0__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_15__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_15__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_14__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_14__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_13__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_13__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_12__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_12__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_11__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_11__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_10__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_10__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_9__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_9__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_8__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_8__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_7__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_7__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_6__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_6__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_5__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_5__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_4__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_4__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | __Vdeeptemp_h1c51d227__0)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp_h466e0561__0 = (((~ (IData)(vlSelf->io_stall)) 
                                 & ((1U & (IData)((vlSelf->TPU_top__DOT__mxu__DOT__macs_14_11__DOT__add_full 
                                                   >> 0x20U))) 
                                    != (1U & (IData)(
                                                     (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_11__DOT__add_full 
                                                      >> 0x1fU))))) 
                                | (((~ (IData)(vlSelf->io_stall)) 
                                    & ((1U & (IData)(
                                                     (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_10__DOT__add_full 
                                                      >> 0x20U))) 
                                       != (1U & (IData)(
                                                        (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_10__DOT__add_full 
                                                         >> 0x1fU))))) 
                                   | (((~ (IData)(vlSelf->io_stall)) 
                                       & ((1U & (IData)(
                                                        (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_9__DOT__add_full 
                                                         >> 0x20U))) 
                                          != (1U & (IData)(
                                                           (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_9__DOT__add_full 
                                                            >> 0x1fU))))) 
                                      | (((~ (IData)(vlSelf->io_stall)) 
                                          & ((1U & (IData)(
                                                           (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_8__DOT__add_full 
                                                            >> 0x20U))) 
                                             != (1U 
                                                 & (IData)(
                                                           (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_8__DOT__add_full 
                                                            >> 0x1fU))))) 
                                         | (((~ (IData)(vlSelf->io_stall)) 
                                             & ((1U 
                                                 & (IData)(
                                                           (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_7__DOT__add_full 
                                                            >> 0x20U))) 
                                                != 
                                                (1U 
                                                 & (IData)(
                                                           (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_7__DOT__add_full 
                                                            >> 0x1fU))))) 
                                            | __Vdeeptemp_hb60a0d72__0)))));
    vlSelf->TPU_top__DOT__mxu_io_mxu_alert = (((~ (IData)(vlSelf->io_stall)) 
                                               & ((1U 
                                                   & (IData)(
                                                             (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_15__DOT__add_full 
                                                              >> 0x20U))) 
                                                  != 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_15__DOT__add_full 
                                                              >> 0x1fU))))) 
                                              | (((~ (IData)(vlSelf->io_stall)) 
                                                  & ((1U 
                                                      & (IData)(
                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_14__DOT__add_full 
                                                                 >> 0x20U))) 
                                                     != 
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_14__DOT__add_full 
                                                                 >> 0x1fU))))) 
                                                 | (((~ (IData)(vlSelf->io_stall)) 
                                                     & ((1U 
                                                         & (IData)(
                                                                   (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_13__DOT__add_full 
                                                                    >> 0x20U))) 
                                                        != 
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_13__DOT__add_full 
                                                                    >> 0x1fU))))) 
                                                    | (((~ (IData)(vlSelf->io_stall)) 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_12__DOT__add_full 
                                                                       >> 0x20U))) 
                                                           != 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_12__DOT__add_full 
                                                                       >> 0x1fU))))) 
                                                       | (((~ (IData)(vlSelf->io_stall)) 
                                                           & ((1U 
                                                               & (IData)(
                                                                         (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_11__DOT__add_full 
                                                                          >> 0x20U))) 
                                                              != 
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_11__DOT__add_full 
                                                                          >> 0x1fU))))) 
                                                          | (((~ (IData)(vlSelf->io_stall)) 
                                                              & ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_10__DOT__add_full 
                                                                             >> 0x20U))) 
                                                                 != 
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_10__DOT__add_full 
                                                                             >> 0x1fU))))) 
                                                             | (((~ (IData)(vlSelf->io_stall)) 
                                                                 & ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_9__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                    != 
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_9__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                    & ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_8__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                       != 
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_8__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                   | (((~ (IData)(vlSelf->io_stall)) 
                                                                       & ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_7__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                          != 
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_7__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                      | (((~ (IData)(vlSelf->io_stall)) 
                                                                          & ((1U 
                                                                              & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_6__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                             != 
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_6__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                         | (((~ (IData)(vlSelf->io_stall)) 
                                                                             & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_5__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_5__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                            | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_4__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_4__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                               | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_3__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_3__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_2__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_2__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_1__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_1__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_0__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_0__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_15__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_15__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_14__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_14__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_13__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_13__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((~ (IData)(vlSelf->io_stall)) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_12__DOT__add_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_12__DOT__add_full 
                                                                                >> 0x1fU))))) 
                                                                                | __Vdeeptemp_h466e0561__0))))))))))))))))))));
}

VL_ATTR_COLD void VTPU_top___024root___eval_triggers__stl(VTPU_top___024root* vlSelf);
VL_ATTR_COLD void VTPU_top___024root___eval_stl(VTPU_top___024root* vlSelf);

VL_ATTR_COLD bool VTPU_top___024root___eval_phase__stl(VTPU_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPU_top___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VTPU_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VTPU_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTPU_top___024root___dump_triggers__ico(VTPU_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPU_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTPU_top___024root___dump_triggers__act(VTPU_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPU_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTPU_top___024root___dump_triggers__nba(VTPU_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPU_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTPU_top___024root___ctor_var_reset(VTPU_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPU_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_in_input_0 = VL_RAND_RESET_I(8);
    vlSelf->io_in_input_1 = VL_RAND_RESET_I(8);
    vlSelf->io_in_input_2 = VL_RAND_RESET_I(8);
    vlSelf->io_in_input_3 = VL_RAND_RESET_I(8);
    vlSelf->io_in_input_4 = VL_RAND_RESET_I(8);
    vlSelf->io_in_input_5 = VL_RAND_RESET_I(8);
    vlSelf->io_in_input_6 = VL_RAND_RESET_I(8);
    vlSelf->io_in_input_7 = VL_RAND_RESET_I(8);
    vlSelf->io_in_input_8 = VL_RAND_RESET_I(8);
    vlSelf->io_in_input_9 = VL_RAND_RESET_I(8);
    vlSelf->io_in_input_10 = VL_RAND_RESET_I(8);
    vlSelf->io_in_input_11 = VL_RAND_RESET_I(8);
    vlSelf->io_in_input_12 = VL_RAND_RESET_I(8);
    vlSelf->io_in_input_13 = VL_RAND_RESET_I(8);
    vlSelf->io_in_input_14 = VL_RAND_RESET_I(8);
    vlSelf->io_in_input_15 = VL_RAND_RESET_I(8);
    vlSelf->io_input_valid = VL_RAND_RESET_I(1);
    vlSelf->io_input_tile_start = VL_RAND_RESET_I(1);
    vlSelf->io_in_weight_0 = VL_RAND_RESET_I(8);
    vlSelf->io_in_weight_1 = VL_RAND_RESET_I(8);
    vlSelf->io_in_weight_2 = VL_RAND_RESET_I(8);
    vlSelf->io_in_weight_3 = VL_RAND_RESET_I(8);
    vlSelf->io_in_weight_4 = VL_RAND_RESET_I(8);
    vlSelf->io_in_weight_5 = VL_RAND_RESET_I(8);
    vlSelf->io_in_weight_6 = VL_RAND_RESET_I(8);
    vlSelf->io_in_weight_7 = VL_RAND_RESET_I(8);
    vlSelf->io_in_weight_8 = VL_RAND_RESET_I(8);
    vlSelf->io_in_weight_9 = VL_RAND_RESET_I(8);
    vlSelf->io_in_weight_10 = VL_RAND_RESET_I(8);
    vlSelf->io_in_weight_11 = VL_RAND_RESET_I(8);
    vlSelf->io_in_weight_12 = VL_RAND_RESET_I(8);
    vlSelf->io_in_weight_13 = VL_RAND_RESET_I(8);
    vlSelf->io_in_weight_14 = VL_RAND_RESET_I(8);
    vlSelf->io_in_weight_15 = VL_RAND_RESET_I(8);
    vlSelf->io_weight_valid = VL_RAND_RESET_I(1);
    vlSelf->io_clear_W = VL_RAND_RESET_I(1);
    vlSelf->io_intermNum = VL_RAND_RESET_I(32);
    vlSelf->io_outColNum = VL_RAND_RESET_I(32);
    vlSelf->io_stall = VL_RAND_RESET_I(1);
    vlSelf->io_out_accum_0 = VL_RAND_RESET_I(32);
    vlSelf->io_out_accum_1 = VL_RAND_RESET_I(32);
    vlSelf->io_out_accum_2 = VL_RAND_RESET_I(32);
    vlSelf->io_out_accum_3 = VL_RAND_RESET_I(32);
    vlSelf->io_out_accum_4 = VL_RAND_RESET_I(32);
    vlSelf->io_out_accum_5 = VL_RAND_RESET_I(32);
    vlSelf->io_out_accum_6 = VL_RAND_RESET_I(32);
    vlSelf->io_out_accum_7 = VL_RAND_RESET_I(32);
    vlSelf->io_out_accum_8 = VL_RAND_RESET_I(32);
    vlSelf->io_out_accum_9 = VL_RAND_RESET_I(32);
    vlSelf->io_out_accum_10 = VL_RAND_RESET_I(32);
    vlSelf->io_out_accum_11 = VL_RAND_RESET_I(32);
    vlSelf->io_out_accum_12 = VL_RAND_RESET_I(32);
    vlSelf->io_out_accum_13 = VL_RAND_RESET_I(32);
    vlSelf->io_out_accum_14 = VL_RAND_RESET_I(32);
    vlSelf->io_out_accum_15 = VL_RAND_RESET_I(32);
    vlSelf->io_out_valid_0 = VL_RAND_RESET_I(1);
    vlSelf->io_out_valid_1 = VL_RAND_RESET_I(1);
    vlSelf->io_out_valid_2 = VL_RAND_RESET_I(1);
    vlSelf->io_out_valid_3 = VL_RAND_RESET_I(1);
    vlSelf->io_out_valid_4 = VL_RAND_RESET_I(1);
    vlSelf->io_out_valid_5 = VL_RAND_RESET_I(1);
    vlSelf->io_out_valid_6 = VL_RAND_RESET_I(1);
    vlSelf->io_out_valid_7 = VL_RAND_RESET_I(1);
    vlSelf->io_out_valid_8 = VL_RAND_RESET_I(1);
    vlSelf->io_out_valid_9 = VL_RAND_RESET_I(1);
    vlSelf->io_out_valid_10 = VL_RAND_RESET_I(1);
    vlSelf->io_out_valid_11 = VL_RAND_RESET_I(1);
    vlSelf->io_out_valid_12 = VL_RAND_RESET_I(1);
    vlSelf->io_out_valid_13 = VL_RAND_RESET_I(1);
    vlSelf->io_out_valid_14 = VL_RAND_RESET_I(1);
    vlSelf->io_out_valid_15 = VL_RAND_RESET_I(1);
    vlSelf->io_out_meta_row_change_update = VL_RAND_RESET_I(1);
    vlSelf->io_fusion_req = VL_RAND_RESET_I(1);
    vlSelf->io_fatal_alert = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu_io_mxu_alert = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator_io_out_tile_start = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator_io_snapshot_done = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_0_io_out_data = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_0_io_out_weight_update = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_1_io_out_data = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_1_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_1_io_out_weight_update = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2_io_out_data = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2_io_out_weight_update = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3_io_out_data = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3_io_out_weight_update = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4_io_out_data = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4_io_out_weight_update = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5_io_out_data = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5_io_out_weight_update = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6_io_out_data = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6_io_out_weight_update = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7_io_out_data = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7_io_out_weight_update = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8_io_out_data = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8_io_out_weight_update = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9_io_out_data = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9_io_out_weight_update = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10_io_out_data = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10_io_out_weight_update = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11_io_out_data = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11_io_out_weight_update = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12_io_out_data = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12_io_out_weight_update = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13_io_out_data = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13_io_out_weight_update = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14_io_out_data = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14_io_out_weight_update = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15_io_out_data = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15_io_out_weight_update = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_0 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_1 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_2 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_3 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_4 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_5 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_6 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_7 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_8 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_9 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_10 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_11 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_12 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_13 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_14 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_15 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_0 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_1 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_2 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_3 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_4 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_5 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_6 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_7 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_8 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_9 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_10 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_11 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_12 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_13 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_14 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_15 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_0 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_1 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_2 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_3 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_4 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_5 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_6 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_7 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_8 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_9 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_10 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_11 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_12 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_13 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_14 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_15 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_0 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_1 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_2 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_3 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_4 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_5 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_6 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_7 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_8 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_9 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_10 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_11 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_12 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_13 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_14 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_15 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_0 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_1 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_2 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_3 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_4 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_5 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_6 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_7 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_8 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_9 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_10 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_11 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_12 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_13 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_14 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_15 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_0 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_1 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_2 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_3 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_4 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_5 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_6 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_7 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_8 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_9 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_10 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_11 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_12 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_13 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_14 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_15 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_0 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_1 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_2 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_3 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_4 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_5 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_6 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_7 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_8 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_9 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_10 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_11 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_12 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_13 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_14 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_15 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_0 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_1 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_2 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_3 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_4 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_5 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_6 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_7 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_8 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_9 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_10 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_11 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_12 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_13 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_14 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_15 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_0 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_1 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_2 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_3 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_4 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_5 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_6 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_7 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_8 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_9 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_10 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_11 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_12 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_13 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_14 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_15 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_0 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_1 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_2 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_3 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_4 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_5 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_6 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_7 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_8 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_9 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_10 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_11 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_12 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_13 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_14 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_15 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_0 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_1 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_2 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_3 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_4 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_5 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_6 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_7 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_8 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_9 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_10 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_11 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_12 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_13 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_14 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_15 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_0 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_1 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_2 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_3 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_4 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_5 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_6 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_7 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_8 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_9 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_10 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_11 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_12 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_13 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_14 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_15 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_0 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_1 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_2 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_3 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_4 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_5 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_6 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_7 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_8 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_9 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_10 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_11 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_12 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_13 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_14 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_15 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_0 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_1 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_2 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_3 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_4 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_5 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_6 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_7 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_8 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_9 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_10 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_11 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_12 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_13 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_14 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_15 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_0 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_1 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_2 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_3 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_4 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_5 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_6 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_7 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_8 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_9 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_10 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_11 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_12 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_13 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_14 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_15 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_0 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_1 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_2 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_3 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_4 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_5 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_6 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_7 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_8 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_9 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_10 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_11 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_12 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_13 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_14 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_15 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__weightLoadIdx = VL_RAND_RESET_I(4);
    vlSelf->TPU_top__DOT__orchestrator__DOT___weightLoadIdx_T_1 = VL_RAND_RESET_I(4);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_1__DOT__dataPipe_0 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_1__DOT__validPipe_0 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_1__DOT__updatePipe_0 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2__DOT__dataPipe_0 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2__DOT__dataPipe_1 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2__DOT__validPipe_0 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2__DOT__validPipe_1 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2__DOT__updatePipe_0 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2__DOT__updatePipe_1 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3__DOT__dataPipe_0 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3__DOT__dataPipe_1 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3__DOT__dataPipe_2 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3__DOT__validPipe_0 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3__DOT__validPipe_1 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3__DOT__validPipe_2 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3__DOT__updatePipe_0 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3__DOT__updatePipe_1 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3__DOT__updatePipe_2 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__dataPipe_0 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__dataPipe_1 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__dataPipe_2 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__dataPipe_3 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__validPipe_0 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__validPipe_1 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__validPipe_2 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__validPipe_3 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__updatePipe_0 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__updatePipe_1 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__updatePipe_2 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__updatePipe_3 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__dataPipe_0 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__dataPipe_1 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__dataPipe_2 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__dataPipe_3 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__dataPipe_4 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__validPipe_0 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__validPipe_1 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__validPipe_2 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__validPipe_3 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__validPipe_4 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__updatePipe_0 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__updatePipe_1 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__updatePipe_2 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__updatePipe_3 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__updatePipe_4 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__dataPipe_0 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__dataPipe_1 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__dataPipe_2 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__dataPipe_3 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__dataPipe_4 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__dataPipe_5 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__validPipe_0 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__validPipe_1 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__validPipe_2 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__validPipe_3 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__validPipe_4 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__validPipe_5 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__updatePipe_0 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__updatePipe_1 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__updatePipe_2 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__updatePipe_3 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__updatePipe_4 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__updatePipe_5 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__dataPipe_0 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__dataPipe_1 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__dataPipe_2 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__dataPipe_3 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__dataPipe_4 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__dataPipe_5 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__dataPipe_6 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__validPipe_0 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__validPipe_1 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__validPipe_2 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__validPipe_3 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__validPipe_4 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__validPipe_5 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__validPipe_6 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__updatePipe_0 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__updatePipe_1 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__updatePipe_2 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__updatePipe_3 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__updatePipe_4 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__updatePipe_5 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__updatePipe_6 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_0 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_1 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_2 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_3 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_4 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_5 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_6 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_7 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_0 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_1 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_2 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_3 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_4 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_5 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_6 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_7 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_0 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_1 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_2 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_3 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_4 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_5 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_6 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_7 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_0 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_1 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_2 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_3 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_4 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_5 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_6 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_7 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_8 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_0 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_1 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_2 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_3 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_4 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_5 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_6 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_7 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_8 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_0 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_1 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_2 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_3 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_4 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_5 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_6 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_7 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_8 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_0 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_1 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_2 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_3 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_4 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_5 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_6 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_7 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_8 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_9 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_0 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_1 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_2 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_3 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_4 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_5 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_6 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_7 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_8 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_9 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_0 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_1 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_2 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_3 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_4 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_5 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_6 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_7 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_8 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_9 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_0 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_1 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_2 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_3 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_4 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_5 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_6 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_7 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_8 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_9 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_10 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_0 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_1 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_2 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_3 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_4 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_5 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_6 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_7 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_8 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_9 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_10 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_0 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_1 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_2 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_3 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_4 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_5 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_6 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_7 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_8 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_9 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_10 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_0 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_1 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_2 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_3 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_4 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_5 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_6 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_7 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_8 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_9 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_10 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_11 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_0 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_1 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_2 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_3 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_4 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_5 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_6 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_7 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_8 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_9 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_10 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_11 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_0 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_1 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_2 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_3 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_4 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_5 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_6 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_7 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_8 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_9 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_10 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_11 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_0 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_1 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_2 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_3 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_4 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_5 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_6 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_7 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_8 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_9 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_10 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_11 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_12 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_0 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_1 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_2 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_3 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_4 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_5 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_6 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_7 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_8 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_9 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_10 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_11 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_12 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_0 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_1 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_2 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_3 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_4 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_5 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_6 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_7 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_8 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_9 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_10 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_11 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_12 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_0 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_1 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_2 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_3 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_4 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_5 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_6 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_7 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_8 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_9 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_10 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_11 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_12 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_13 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_0 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_1 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_2 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_3 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_4 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_5 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_6 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_7 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_8 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_9 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_10 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_11 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_12 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_13 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_0 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_1 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_2 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_3 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_4 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_5 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_6 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_7 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_8 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_9 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_10 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_11 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_12 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_13 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_0 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_1 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_2 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_3 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_4 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_5 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_6 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_7 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_8 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_9 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_10 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_11 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_12 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_13 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_14 = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_0 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_1 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_2 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_3 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_4 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_5 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_6 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_7 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_8 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_9 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_10 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_11 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_12 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_13 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_14 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_0 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_1 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_2 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_3 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_4 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_5 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_6 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_7 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_8 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_9 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_10 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_11 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_12 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_13 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_14 = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_0__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_0__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_0__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_0__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_0__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_1__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_1__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_1__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_1__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_1__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_2__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_2__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_2__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_2__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_2__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_3__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_3__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_3__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_3__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_3__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_4__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_4__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_4__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_4__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_4__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_5__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_5__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_5__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_5__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_5__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_6__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_6__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_6__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_6__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_6__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_7__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_7__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_7__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_7__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_7__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_8__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_8__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_8__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_8__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_8__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_9__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_9__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_9__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_9__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_9__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_10__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_10__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_10__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_10__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_10__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_11__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_11__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_11__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_11__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_11__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_12__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_12__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_12__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_12__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_12__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_13__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_13__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_13__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_13__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_13__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_14__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_14__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_14__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_14__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_14__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_15__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_15__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_15__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_0__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_0__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_0__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_0__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_0__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_1__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_1__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_1__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_1__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_1__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_2__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_2__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_2__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_2__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_2__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_3__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_3__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_3__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_3__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_3__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_4__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_4__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_4__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_4__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_4__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_5__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_5__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_5__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_5__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_5__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_6__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_6__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_6__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_6__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_6__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_7__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_7__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_7__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_7__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_7__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_8__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_8__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_8__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_8__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_8__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_9__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_9__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_9__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_9__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_9__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_10__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_10__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_10__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_10__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_10__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_11__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_11__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_11__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_11__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_11__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_12__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_12__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_12__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_12__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_12__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_13__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_13__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_13__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_13__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_13__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_14__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_14__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_14__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_14__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_14__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_15__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_15__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_15__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_0__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_0__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_0__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_0__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_0__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_1__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_1__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_1__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_1__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_1__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_2__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_2__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_2__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_2__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_2__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_3__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_3__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_3__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_3__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_3__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_4__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_4__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_4__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_4__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_4__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_5__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_5__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_5__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_5__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_5__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_6__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_6__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_6__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_6__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_6__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_7__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_7__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_7__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_7__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_7__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_8__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_8__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_8__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_8__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_8__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_9__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_9__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_9__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_9__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_9__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_10__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_10__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_10__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_10__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_10__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_11__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_11__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_11__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_11__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_11__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_12__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_12__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_12__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_12__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_12__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_13__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_13__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_13__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_13__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_13__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_14__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_14__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_14__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_14__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_14__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_15__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_15__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_15__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_0__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_0__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_0__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_0__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_0__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_1__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_1__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_1__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_1__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_1__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_2__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_2__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_2__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_2__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_2__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_3__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_3__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_3__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_3__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_3__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_4__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_4__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_4__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_4__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_4__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_5__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_5__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_5__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_5__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_5__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_6__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_6__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_6__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_6__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_6__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_7__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_7__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_7__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_7__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_7__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_8__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_8__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_8__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_8__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_8__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_9__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_9__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_9__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_9__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_9__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_10__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_10__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_10__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_10__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_10__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_11__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_11__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_11__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_11__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_11__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_12__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_12__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_12__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_12__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_12__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_13__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_13__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_13__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_13__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_13__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_14__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_14__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_14__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_14__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_14__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_15__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_15__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_15__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_0__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_0__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_0__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_0__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_0__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_1__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_1__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_1__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_1__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_1__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_2__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_2__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_2__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_2__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_2__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_3__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_3__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_3__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_3__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_3__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_4__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_4__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_4__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_4__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_4__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_5__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_5__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_5__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_5__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_5__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_6__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_6__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_6__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_6__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_6__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_7__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_7__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_7__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_7__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_7__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_8__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_8__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_8__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_8__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_8__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_9__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_9__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_9__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_9__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_9__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_10__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_10__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_10__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_10__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_10__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_11__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_11__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_11__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_11__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_11__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_12__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_12__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_12__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_12__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_12__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_13__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_13__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_13__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_13__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_13__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_14__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_14__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_14__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_14__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_14__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_15__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_15__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_15__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_0__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_0__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_0__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_0__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_0__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_1__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_1__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_1__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_1__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_1__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_2__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_2__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_2__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_2__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_2__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_3__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_3__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_3__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_3__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_3__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_4__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_4__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_4__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_4__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_4__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_5__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_5__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_5__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_5__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_5__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_6__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_6__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_6__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_6__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_6__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_7__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_7__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_7__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_7__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_7__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_8__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_8__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_8__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_8__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_8__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_9__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_9__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_9__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_9__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_9__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_10__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_10__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_10__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_10__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_10__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_11__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_11__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_11__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_11__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_11__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_12__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_12__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_12__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_12__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_12__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_13__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_13__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_13__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_13__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_13__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_14__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_14__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_14__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_14__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_14__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_15__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_15__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_15__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_0__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_0__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_0__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_0__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_0__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_1__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_1__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_1__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_1__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_1__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_2__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_2__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_2__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_2__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_2__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_3__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_3__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_3__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_3__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_3__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_4__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_4__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_4__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_4__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_4__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_5__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_5__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_5__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_5__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_5__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_6__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_6__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_6__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_6__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_6__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_7__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_7__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_7__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_7__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_7__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_8__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_8__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_8__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_8__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_8__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_9__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_9__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_9__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_9__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_9__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_10__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_10__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_10__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_10__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_10__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_11__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_11__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_11__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_11__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_11__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_12__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_12__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_12__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_12__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_12__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_13__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_13__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_13__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_13__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_13__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_14__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_14__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_14__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_14__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_14__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_15__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_15__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_15__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_0__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_0__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_0__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_0__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_0__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_1__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_1__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_1__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_1__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_1__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_2__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_2__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_2__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_2__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_2__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_3__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_3__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_3__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_3__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_3__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_4__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_4__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_4__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_4__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_4__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_5__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_5__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_5__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_5__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_5__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_6__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_6__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_6__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_6__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_6__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_7__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_7__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_7__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_7__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_7__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_8__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_8__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_8__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_8__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_8__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_9__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_9__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_9__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_9__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_9__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_10__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_10__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_10__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_10__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_10__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_11__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_11__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_11__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_11__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_11__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_12__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_12__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_12__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_12__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_12__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_13__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_13__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_13__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_13__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_13__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_14__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_14__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_14__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_14__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_14__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_15__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_15__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_15__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_0__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_0__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_0__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_0__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_0__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_1__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_1__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_1__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_1__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_1__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_2__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_2__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_2__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_2__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_2__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_3__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_3__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_3__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_3__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_3__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_4__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_4__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_4__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_4__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_4__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_5__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_5__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_5__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_5__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_5__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_6__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_6__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_6__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_6__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_6__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_7__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_7__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_7__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_7__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_7__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_8__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_8__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_8__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_8__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_8__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_9__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_9__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_9__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_9__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_9__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_10__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_10__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_10__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_10__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_10__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_11__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_11__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_11__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_11__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_11__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_12__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_12__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_12__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_12__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_12__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_13__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_13__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_13__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_13__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_13__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_14__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_14__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_14__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_14__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_14__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_15__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_15__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_15__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_0__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_0__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_0__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_0__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_0__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_1__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_1__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_1__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_1__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_1__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_2__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_2__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_2__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_2__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_2__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_3__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_3__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_3__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_3__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_3__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_4__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_4__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_4__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_4__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_4__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_5__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_5__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_5__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_5__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_5__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_6__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_6__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_6__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_6__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_6__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_7__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_7__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_7__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_7__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_7__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_8__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_8__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_8__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_8__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_8__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_9__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_9__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_9__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_9__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_9__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_10__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_10__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_10__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_10__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_10__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_11__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_11__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_11__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_11__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_11__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_12__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_12__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_12__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_12__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_12__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_13__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_13__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_13__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_13__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_13__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_14__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_14__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_14__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_14__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_14__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_15__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_15__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_15__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_0__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_0__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_0__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_0__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_0__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_1__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_1__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_1__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_1__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_1__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_2__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_2__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_2__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_2__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_2__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_3__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_3__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_3__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_3__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_3__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_4__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_4__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_4__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_4__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_4__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_5__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_5__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_5__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_5__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_5__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_6__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_6__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_6__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_6__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_6__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_7__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_7__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_7__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_7__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_7__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_8__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_8__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_8__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_8__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_8__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_9__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_9__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_9__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_9__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_9__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_10__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_10__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_10__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_10__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_10__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_11__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_11__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_11__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_11__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_11__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_12__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_12__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_12__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_12__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_12__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_13__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_13__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_13__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_13__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_13__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_14__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_14__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_14__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_14__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_14__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_15__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_15__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_15__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_0__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_0__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_0__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_0__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_0__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_1__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_1__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_1__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_1__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_1__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_2__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_2__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_2__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_2__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_2__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_3__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_3__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_3__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_3__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_3__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_4__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_4__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_4__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_4__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_4__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_5__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_5__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_5__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_5__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_5__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_6__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_6__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_6__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_6__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_6__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_7__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_7__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_7__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_7__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_7__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_8__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_8__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_8__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_8__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_8__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_9__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_9__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_9__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_9__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_9__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_10__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_10__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_10__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_10__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_10__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_11__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_11__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_11__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_11__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_11__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_12__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_12__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_12__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_12__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_12__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_13__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_13__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_13__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_13__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_13__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_14__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_14__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_14__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_14__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_14__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_15__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_15__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_15__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_0__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_0__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_0__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_0__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_0__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_1__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_1__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_1__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_1__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_1__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_2__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_2__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_2__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_2__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_2__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_3__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_3__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_3__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_3__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_3__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_4__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_4__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_4__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_4__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_4__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_5__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_5__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_5__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_5__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_5__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_6__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_6__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_6__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_6__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_6__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_7__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_7__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_7__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_7__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_7__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_8__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_8__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_8__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_8__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_8__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_9__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_9__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_9__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_9__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_9__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_10__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_10__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_10__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_10__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_10__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_11__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_11__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_11__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_11__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_11__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_12__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_12__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_12__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_12__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_12__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_13__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_13__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_13__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_13__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_13__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_14__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_14__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_14__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_14__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_14__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_15__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_15__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_15__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_0__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_0__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_0__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_0__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_0__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_1__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_1__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_1__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_1__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_1__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_2__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_2__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_2__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_2__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_2__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_3__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_3__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_3__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_3__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_3__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_4__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_4__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_4__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_4__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_4__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_5__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_5__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_5__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_5__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_5__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_6__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_6__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_6__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_6__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_6__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_7__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_7__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_7__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_7__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_7__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_8__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_8__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_8__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_8__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_8__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_9__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_9__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_9__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_9__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_9__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_10__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_10__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_10__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_10__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_10__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_11__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_11__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_11__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_11__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_11__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_12__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_12__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_12__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_12__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_12__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_13__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_13__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_13__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_13__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_13__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_14__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_14__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_14__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_14__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_14__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_15__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_15__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_15__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_0__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_0__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_0__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_0__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_0__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_1__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_1__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_1__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_1__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_1__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_2__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_2__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_2__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_2__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_2__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_3__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_3__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_3__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_3__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_3__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_4__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_4__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_4__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_4__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_4__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_5__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_5__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_5__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_5__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_5__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_6__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_6__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_6__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_6__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_6__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_7__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_7__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_7__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_7__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_7__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_8__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_8__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_8__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_8__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_8__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_9__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_9__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_9__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_9__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_9__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_10__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_10__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_10__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_10__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_10__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_11__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_11__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_11__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_11__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_11__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_12__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_12__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_12__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_12__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_12__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_13__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_13__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_13__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_13__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_13__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_14__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_14__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_14__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_14__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_14__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_15__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_15__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_15__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_0__DOT__outValidReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_0__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_0__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_0__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_0__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_0__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_1__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_1__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_1__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_1__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_1__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_2__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_2__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_2__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_2__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_2__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_3__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_3__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_3__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_3__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_3__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_4__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_4__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_4__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_4__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_4__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_5__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_5__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_5__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_5__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_5__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_6__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_6__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_6__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_6__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_6__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_7__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_7__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_7__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_7__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_7__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_8__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_8__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_8__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_8__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_8__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_9__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_9__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_9__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_9__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_9__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_10__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_10__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_10__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_10__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_10__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_11__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_11__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_11__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_11__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_11__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_12__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_12__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_12__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_12__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_12__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_13__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_13__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_13__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_13__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_13__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_14__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_14__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_14__DOT__outInReg = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_14__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_14__DOT__outWeightUpdateReg = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_15__DOT__active_weight = VL_RAND_RESET_I(8);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_15__DOT__add_full = VL_RAND_RESET_Q(33);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_15__DOT__outMacReg = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__timer__DOT__fire = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__timer__DOT__outputRowCounter = VL_RAND_RESET_I(4);
    vlSelf->TPU_top__DOT__timer__DOT__kTileCounter = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__timer__DOT__nTileCounter = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__timer__DOT__fusionTileCountdown = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__timer__DOT__lastRow = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__timer__DOT__lastKTile = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__timer__DOT__lastNTile = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__timer__DOT___io_fusion_req_T = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__timer__DOT___kTileCounter_T_1 = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__timer__DOT___outputRowCounter_T_1 = VL_RAND_RESET_I(4);
    vlSelf->TPU_top__DOT__timer__DOT___nTileCounter_T_1 = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__timer__DOT___fusionTileCountdown_T_1 = VL_RAND_RESET_I(32);
    vlSelf->TPU_top__DOT__accumulator__DOT__buffers_0_io_snapshot = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_1_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_1_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__snapshotByCol_1_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_2_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_2_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__snapshotByCol_2_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_3_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_3_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__snapshotByCol_3_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_4_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_4_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__snapshotByCol_4_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_5_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_5_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__snapshotByCol_5_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_6_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_6_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__snapshotByCol_6_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_7_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_7_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__snapshotByCol_7_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_8_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_8_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__snapshotByCol_8_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_9_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_9_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__snapshotByCol_9_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_10_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_10_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__snapshotByCol_10_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_11_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_11_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__snapshotByCol_11_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_12_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_12_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__snapshotByCol_12_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_13_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_13_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__snapshotByCol_13_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_14_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_14_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__snapshotByCol_14_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_15_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_15_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__snapshotByCol_15_r = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__nextCompletedBank = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__streamActive = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__streamBank = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__accumulator__DOT__read_ptr = VL_RAND_RESET_I(4);
    vlSelf->TPU_top__DOT__accumulator__DOT___GEN_46 = VL_RAND_RESET_I(4);
    vlSelf->TPU_top__DOT__accumulator__DOT___GEN_51 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__ram_row_change_update[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__ram_row_change_update_MPORT_en = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__ram_fusion_req[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__enq_ptr_value = VL_RAND_RESET_I(2);
    vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__deq_ptr_value = VL_RAND_RESET_I(2);
    vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__do_deq = VL_RAND_RESET_I(1);
    vlSelf->TPU_top__DOT__tileCtrlQueue__DOT___value_T_1 = VL_RAND_RESET_I(2);
    vlSelf->TPU_top__DOT__tileCtrlQueue__DOT___value_T_3 = VL_RAND_RESET_I(2);
    vlSelf->__VdfgTmp_h3681e6d6__0 = 0;
    vlSelf->__VdfgTmp_hd2a28677__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
}
