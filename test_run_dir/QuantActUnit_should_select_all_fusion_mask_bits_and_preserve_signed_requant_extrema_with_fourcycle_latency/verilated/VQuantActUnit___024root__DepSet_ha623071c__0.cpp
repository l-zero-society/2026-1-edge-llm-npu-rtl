// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQuantActUnit.h for the primary calling header

#include "VQuantActUnit__pch.h"
#include "VQuantActUnit___024root.h"

void VQuantActUnit___024root___eval_triggers__ico(VQuantActUnit___024root* vlSelf);
void VQuantActUnit___024root___eval_ico(VQuantActUnit___024root* vlSelf);

bool VQuantActUnit___024root___eval_phase__ico(VQuantActUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQuantActUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQuantActUnit___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VQuantActUnit___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VQuantActUnit___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VQuantActUnit___024root___eval_act(VQuantActUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQuantActUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQuantActUnit___024root___eval_act\n"); );
}

void VQuantActUnit___024root___eval_triggers__act(VQuantActUnit___024root* vlSelf);

bool VQuantActUnit___024root___eval_phase__act(VQuantActUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQuantActUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQuantActUnit___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VQuantActUnit___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VQuantActUnit___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void VQuantActUnit___024root___eval_nba(VQuantActUnit___024root* vlSelf);

bool VQuantActUnit___024root___eval_phase__nba(VQuantActUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQuantActUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQuantActUnit___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VQuantActUnit___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VQuantActUnit___024root___dump_triggers__ico(VQuantActUnit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VQuantActUnit___024root___dump_triggers__nba(VQuantActUnit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VQuantActUnit___024root___dump_triggers__act(VQuantActUnit___024root* vlSelf);
#endif  // VL_DEBUG

void VQuantActUnit___024root___eval(VQuantActUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQuantActUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQuantActUnit___024root___eval\n"); );
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
            VQuantActUnit___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("QuantActUnit.sv", 1075, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VQuantActUnit___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VQuantActUnit___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("QuantActUnit.sv", 1075, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VQuantActUnit___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("QuantActUnit.sv", 1075, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VQuantActUnit___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VQuantActUnit___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VQuantActUnit___024root___eval_debug_assertions(VQuantActUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQuantActUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQuantActUnit___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_in_direct_0 & 0xfc00U))) {
        Verilated::overWidthError("io_in_direct_0");}
    if (VL_UNLIKELY((vlSelf->io_in_direct_1 & 0xfc00U))) {
        Verilated::overWidthError("io_in_direct_1");}
    if (VL_UNLIKELY((vlSelf->io_in_direct_2 & 0xfc00U))) {
        Verilated::overWidthError("io_in_direct_2");}
    if (VL_UNLIKELY((vlSelf->io_in_direct_3 & 0xfc00U))) {
        Verilated::overWidthError("io_in_direct_3");}
    if (VL_UNLIKELY((vlSelf->io_in_direct_4 & 0xfc00U))) {
        Verilated::overWidthError("io_in_direct_4");}
    if (VL_UNLIKELY((vlSelf->io_in_direct_5 & 0xfc00U))) {
        Verilated::overWidthError("io_in_direct_5");}
    if (VL_UNLIKELY((vlSelf->io_in_direct_6 & 0xfc00U))) {
        Verilated::overWidthError("io_in_direct_6");}
    if (VL_UNLIKELY((vlSelf->io_in_direct_7 & 0xfc00U))) {
        Verilated::overWidthError("io_in_direct_7");}
    if (VL_UNLIKELY((vlSelf->io_in_direct_8 & 0xfc00U))) {
        Verilated::overWidthError("io_in_direct_8");}
    if (VL_UNLIKELY((vlSelf->io_in_direct_9 & 0xfc00U))) {
        Verilated::overWidthError("io_in_direct_9");}
    if (VL_UNLIKELY((vlSelf->io_in_direct_10 & 0xfc00U))) {
        Verilated::overWidthError("io_in_direct_10");}
    if (VL_UNLIKELY((vlSelf->io_in_direct_11 & 0xfc00U))) {
        Verilated::overWidthError("io_in_direct_11");}
    if (VL_UNLIKELY((vlSelf->io_in_direct_12 & 0xfc00U))) {
        Verilated::overWidthError("io_in_direct_12");}
    if (VL_UNLIKELY((vlSelf->io_in_direct_13 & 0xfc00U))) {
        Verilated::overWidthError("io_in_direct_13");}
    if (VL_UNLIKELY((vlSelf->io_in_direct_14 & 0xfc00U))) {
        Verilated::overWidthError("io_in_direct_14");}
    if (VL_UNLIKELY((vlSelf->io_in_direct_15 & 0xfc00U))) {
        Verilated::overWidthError("io_in_direct_15");}
    if (VL_UNLIKELY((vlSelf->io_input_mode & 0xfeU))) {
        Verilated::overWidthError("io_input_mode");}
    if (VL_UNLIKELY((vlSelf->io_in_valid_0 & 0xfeU))) {
        Verilated::overWidthError("io_in_valid_0");}
    if (VL_UNLIKELY((vlSelf->io_in_valid_1 & 0xfeU))) {
        Verilated::overWidthError("io_in_valid_1");}
    if (VL_UNLIKELY((vlSelf->io_in_valid_2 & 0xfeU))) {
        Verilated::overWidthError("io_in_valid_2");}
    if (VL_UNLIKELY((vlSelf->io_in_valid_3 & 0xfeU))) {
        Verilated::overWidthError("io_in_valid_3");}
    if (VL_UNLIKELY((vlSelf->io_in_valid_4 & 0xfeU))) {
        Verilated::overWidthError("io_in_valid_4");}
    if (VL_UNLIKELY((vlSelf->io_in_valid_5 & 0xfeU))) {
        Verilated::overWidthError("io_in_valid_5");}
    if (VL_UNLIKELY((vlSelf->io_in_valid_6 & 0xfeU))) {
        Verilated::overWidthError("io_in_valid_6");}
    if (VL_UNLIKELY((vlSelf->io_in_valid_7 & 0xfeU))) {
        Verilated::overWidthError("io_in_valid_7");}
    if (VL_UNLIKELY((vlSelf->io_in_valid_8 & 0xfeU))) {
        Verilated::overWidthError("io_in_valid_8");}
    if (VL_UNLIKELY((vlSelf->io_in_valid_9 & 0xfeU))) {
        Verilated::overWidthError("io_in_valid_9");}
    if (VL_UNLIKELY((vlSelf->io_in_valid_10 & 0xfeU))) {
        Verilated::overWidthError("io_in_valid_10");}
    if (VL_UNLIKELY((vlSelf->io_in_valid_11 & 0xfeU))) {
        Verilated::overWidthError("io_in_valid_11");}
    if (VL_UNLIKELY((vlSelf->io_in_valid_12 & 0xfeU))) {
        Verilated::overWidthError("io_in_valid_12");}
    if (VL_UNLIKELY((vlSelf->io_in_valid_13 & 0xfeU))) {
        Verilated::overWidthError("io_in_valid_13");}
    if (VL_UNLIKELY((vlSelf->io_in_valid_14 & 0xfeU))) {
        Verilated::overWidthError("io_in_valid_14");}
    if (VL_UNLIKELY((vlSelf->io_in_valid_15 & 0xfeU))) {
        Verilated::overWidthError("io_in_valid_15");}
    if (VL_UNLIKELY((vlSelf->io_param_mode & 0xfeU))) {
        Verilated::overWidthError("io_param_mode");}
    if (VL_UNLIKELY((vlSelf->io_act_mask & 0xfcU))) {
        Verilated::overWidthError("io_act_mask");}
    if (VL_UNLIKELY((vlSelf->io_fusion_second & 0xfeU))) {
        Verilated::overWidthError("io_fusion_second");}
    if (VL_UNLIKELY((vlSelf->io_stall & 0xfeU))) {
        Verilated::overWidthError("io_stall");}
    if (VL_UNLIKELY((vlSelf->io_soft_reset & 0xfeU))) {
        Verilated::overWidthError("io_soft_reset");}
    if (VL_UNLIKELY((vlSelf->io_qparam_line_valid & 0xfeU))) {
        Verilated::overWidthError("io_qparam_line_valid");}
    if (VL_UNLIKELY((vlSelf->io_lut_wr_en & 0xfeU))) {
        Verilated::overWidthError("io_lut_wr_en");}
    if (VL_UNLIKELY((vlSelf->io_lut_wr_addr & 0xc0U))) {
        Verilated::overWidthError("io_lut_wr_addr");}
}
#endif  // VL_DEBUG
