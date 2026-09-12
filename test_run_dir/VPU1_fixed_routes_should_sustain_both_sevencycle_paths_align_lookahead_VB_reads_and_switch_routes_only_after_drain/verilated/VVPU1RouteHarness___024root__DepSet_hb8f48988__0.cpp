// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVPU1RouteHarness.h for the primary calling header

#include "VVPU1RouteHarness__pch.h"
#include "VVPU1RouteHarness___024root.h"

void VVPU1RouteHarness___024root___eval_triggers__ico(VVPU1RouteHarness___024root* vlSelf);
void VVPU1RouteHarness___024root___eval_ico(VVPU1RouteHarness___024root* vlSelf);

bool VVPU1RouteHarness___024root___eval_phase__ico(VVPU1RouteHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVPU1RouteHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVPU1RouteHarness___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VVPU1RouteHarness___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VVPU1RouteHarness___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VVPU1RouteHarness___024root___eval_act(VVPU1RouteHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVPU1RouteHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVPU1RouteHarness___024root___eval_act\n"); );
}

void VVPU1RouteHarness___024root___eval_triggers__act(VVPU1RouteHarness___024root* vlSelf);

bool VVPU1RouteHarness___024root___eval_phase__act(VVPU1RouteHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVPU1RouteHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVPU1RouteHarness___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VVPU1RouteHarness___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VVPU1RouteHarness___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void VVPU1RouteHarness___024root___eval_nba(VVPU1RouteHarness___024root* vlSelf);

bool VVPU1RouteHarness___024root___eval_phase__nba(VVPU1RouteHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVPU1RouteHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVPU1RouteHarness___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VVPU1RouteHarness___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VVPU1RouteHarness___024root___dump_triggers__ico(VVPU1RouteHarness___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VVPU1RouteHarness___024root___dump_triggers__nba(VVPU1RouteHarness___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VVPU1RouteHarness___024root___dump_triggers__act(VVPU1RouteHarness___024root* vlSelf);
#endif  // VL_DEBUG

void VVPU1RouteHarness___024root___eval(VVPU1RouteHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVPU1RouteHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVPU1RouteHarness___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VVPU1RouteHarness___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("VPU1RouteHarness.sv", 3791, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VVPU1RouteHarness___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VVPU1RouteHarness___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("VPU1RouteHarness.sv", 3791, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VVPU1RouteHarness___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("VPU1RouteHarness.sv", 3791, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VVPU1RouteHarness___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VVPU1RouteHarness___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VVPU1RouteHarness___024root___eval_debug_assertions(VVPU1RouteHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVPU1RouteHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVPU1RouteHarness___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_tpu_valid & 0xfeU))) {
        Verilated::overWidthError("io_tpu_valid");}
    if (VL_UNLIKELY((vlSelf->io_ub_valid & 0xfeU))) {
        Verilated::overWidthError("io_ub_valid");}
    if (VL_UNLIKELY((vlSelf->io_wb_valid & 0xfeU))) {
        Verilated::overWidthError("io_wb_valid");}
    if (VL_UNLIKELY((vlSelf->io_input_mode & 0xfeU))) {
        Verilated::overWidthError("io_input_mode");}
    if (VL_UNLIKELY((vlSelf->io_output_route & 0xfcU))) {
        Verilated::overWidthError("io_output_route");}
    if (VL_UNLIKELY((vlSelf->io_alu_mode & 0xfcU))) {
        Verilated::overWidthError("io_alu_mode");}
    if (VL_UNLIKELY((vlSelf->io_out_shift & 0xe0U))) {
        Verilated::overWidthError("io_out_shift");}
    if (VL_UNLIKELY((vlSelf->io_act_mask & 0xfcU))) {
        Verilated::overWidthError("io_act_mask");}
    if (VL_UNLIKELY((vlSelf->io_fusion_second & 0xfeU))) {
        Verilated::overWidthError("io_fusion_second");}
    if (VL_UNLIKELY((vlSelf->io_stall & 0xfeU))) {
        Verilated::overWidthError("io_stall");}
    if (VL_UNLIKELY((vlSelf->io_lut_wr_en & 0xfeU))) {
        Verilated::overWidthError("io_lut_wr_en");}
    if (VL_UNLIKELY((vlSelf->io_lut_wr_addr & 0xc0U))) {
        Verilated::overWidthError("io_lut_wr_addr");}
}
#endif  // VL_DEBUG
