// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRopeUnit.h for the primary calling header

#include "VRopeUnit__pch.h"
#include "VRopeUnit___024root.h"

void VRopeUnit___024root___eval_triggers__ico(VRopeUnit___024root* vlSelf);
void VRopeUnit___024root___eval_ico(VRopeUnit___024root* vlSelf);

bool VRopeUnit___024root___eval_phase__ico(VRopeUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRopeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRopeUnit___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VRopeUnit___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VRopeUnit___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VRopeUnit___024root___eval_act(VRopeUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRopeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRopeUnit___024root___eval_act\n"); );
}

void VRopeUnit___024root___eval_triggers__act(VRopeUnit___024root* vlSelf);

bool VRopeUnit___024root___eval_phase__act(VRopeUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRopeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRopeUnit___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VRopeUnit___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VRopeUnit___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void VRopeUnit___024root___eval_nba(VRopeUnit___024root* vlSelf);

bool VRopeUnit___024root___eval_phase__nba(VRopeUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRopeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRopeUnit___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VRopeUnit___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRopeUnit___024root___dump_triggers__ico(VRopeUnit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VRopeUnit___024root___dump_triggers__nba(VRopeUnit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VRopeUnit___024root___dump_triggers__act(VRopeUnit___024root* vlSelf);
#endif  // VL_DEBUG

void VRopeUnit___024root___eval(VRopeUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRopeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRopeUnit___024root___eval\n"); );
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
            VRopeUnit___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("RopeUnit.sv", 677, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VRopeUnit___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VRopeUnit___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("RopeUnit.sv", 677, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VRopeUnit___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("RopeUnit.sv", 677, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VRopeUnit___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VRopeUnit___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VRopeUnit___024root___eval_debug_assertions(VRopeUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRopeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRopeUnit___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
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
    if (VL_UNLIKELY((vlSelf->io_rope_en & 0xfeU))) {
        Verilated::overWidthError("io_rope_en");}
    if (VL_UNLIKELY((vlSelf->io_stall & 0xfeU))) {
        Verilated::overWidthError("io_stall");}
    if (VL_UNLIKELY((vlSelf->io_soft_reset & 0xfeU))) {
        Verilated::overWidthError("io_soft_reset");}
    if (VL_UNLIKELY((vlSelf->io_row_change_update & 0xfeU))) {
        Verilated::overWidthError("io_row_change_update");}
    if (VL_UNLIKELY((vlSelf->io_position_init & 0xfeU))) {
        Verilated::overWidthError("io_position_init");}
    if (VL_UNLIKELY((vlSelf->io_freq_block_valid & 0xfeU))) {
        Verilated::overWidthError("io_freq_block_valid");}
    if (VL_UNLIKELY((vlSelf->io_lut_cos_wr_en & 0xfeU))) {
        Verilated::overWidthError("io_lut_cos_wr_en");}
    if (VL_UNLIKELY((vlSelf->io_lut_sin_wr_en & 0xfeU))) {
        Verilated::overWidthError("io_lut_sin_wr_en");}
    if (VL_UNLIKELY((vlSelf->io_lut_wr_addr & 0x80U))) {
        Verilated::overWidthError("io_lut_wr_addr");}
}
#endif  // VL_DEBUG
