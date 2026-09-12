// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTPU_top.h for the primary calling header

#include "VTPU_top__pch.h"
#include "VTPU_top___024root.h"

void VTPU_top___024root___eval_triggers__ico(VTPU_top___024root* vlSelf);
void VTPU_top___024root___eval_ico(VTPU_top___024root* vlSelf);

bool VTPU_top___024root___eval_phase__ico(VTPU_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPU_top___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VTPU_top___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VTPU_top___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VTPU_top___024root___eval_act(VTPU_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPU_top___024root___eval_act\n"); );
}

VL_INLINE_OPT void VTPU_top___024root___nba_sequent__TOP__0(VTPU_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPU_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vdly__TPU_top__DOT__orchestrator__DOT__weightLoadIdx;
    __Vdly__TPU_top__DOT__orchestrator__DOT__weightLoadIdx = 0;
    CData/*0:0*/ __Vdly__TPU_top__DOT__accumulator__DOT__nextCompletedBank;
    __Vdly__TPU_top__DOT__accumulator__DOT__nextCompletedBank = 0;
    CData/*1:0*/ __Vdlyvdim0__TPU_top__DOT__tileCtrlQueue__DOT__ram_row_change_update__v0;
    __Vdlyvdim0__TPU_top__DOT__tileCtrlQueue__DOT__ram_row_change_update__v0 = 0;
    CData/*0:0*/ __Vdlyvval__TPU_top__DOT__tileCtrlQueue__DOT__ram_row_change_update__v0;
    __Vdlyvval__TPU_top__DOT__tileCtrlQueue__DOT__ram_row_change_update__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TPU_top__DOT__tileCtrlQueue__DOT__ram_row_change_update__v0;
    __Vdlyvset__TPU_top__DOT__tileCtrlQueue__DOT__ram_row_change_update__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__TPU_top__DOT__tileCtrlQueue__DOT__ram_fusion_req__v0;
    __Vdlyvdim0__TPU_top__DOT__tileCtrlQueue__DOT__ram_fusion_req__v0 = 0;
    CData/*0:0*/ __Vdlyvval__TPU_top__DOT__tileCtrlQueue__DOT__ram_fusion_req__v0;
    __Vdlyvval__TPU_top__DOT__tileCtrlQueue__DOT__ram_fusion_req__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TPU_top__DOT__tileCtrlQueue__DOT__ram_fusion_req__v0;
    __Vdlyvset__TPU_top__DOT__tileCtrlQueue__DOT__ram_fusion_req__v0 = 0;
    // Body
    __Vdly__TPU_top__DOT__accumulator__DOT__nextCompletedBank 
        = vlSelf->TPU_top__DOT__accumulator__DOT__nextCompletedBank;
    __Vdlyvset__TPU_top__DOT__tileCtrlQueue__DOT__ram_fusion_req__v0 = 0U;
    __Vdlyvset__TPU_top__DOT__tileCtrlQueue__DOT__ram_row_change_update__v0 = 0U;
    __Vdly__TPU_top__DOT__orchestrator__DOT__weightLoadIdx 
        = vlSelf->TPU_top__DOT__orchestrator__DOT__weightLoadIdx;
    if (vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__ram_row_change_update_MPORT_en) {
        __Vdlyvval__TPU_top__DOT__tileCtrlQueue__DOT__ram_fusion_req__v0 
            = ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__buffers_0_io_snapshot) 
               & (0U == vlSelf->TPU_top__DOT__timer__DOT__fusionTileCountdown));
        __Vdlyvset__TPU_top__DOT__tileCtrlQueue__DOT__ram_fusion_req__v0 = 1U;
        __Vdlyvdim0__TPU_top__DOT__tileCtrlQueue__DOT__ram_fusion_req__v0 
            = vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__enq_ptr_value;
        __Vdlyvval__TPU_top__DOT__tileCtrlQueue__DOT__ram_row_change_update__v0 
            = ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__buffers_0_io_snapshot) 
               & (0U == vlSelf->TPU_top__DOT__timer__DOT__nTileCounter));
        __Vdlyvset__TPU_top__DOT__tileCtrlQueue__DOT__ram_row_change_update__v0 = 1U;
        __Vdlyvdim0__TPU_top__DOT__tileCtrlQueue__DOT__ram_row_change_update__v0 
            = vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__enq_ptr_value;
    }
    if (vlSelf->reset) {
        vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__maybe_full = 0U;
        vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__deq_ptr_value = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_15__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_14__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_13__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_12__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_11__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_10__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_9__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_8__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_7__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_6__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_5__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_4__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_3__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_2__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_1__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_0__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_1__DOT__dataPipe_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_1__DOT__validPipe_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_1__DOT__updatePipe_0 = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_15__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_14__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_13__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_12__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_11__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_10__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_9__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_8__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_7__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_6__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_5__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_4__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_3__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_2__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_1__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_0__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_15__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_14__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_13__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_12__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_11__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_10__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_9__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_8__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_7__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_6__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_5__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_4__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_3__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_2__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_1__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_0__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_15__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_14__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_13__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_12__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_11__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_10__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_9__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_8__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_7__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_6__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_5__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_4__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_3__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_2__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_1__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_0__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_15__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_14__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_13__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_12__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_11__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_10__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_9__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_8__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_7__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_6__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_5__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_4__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_3__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_2__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_1__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_0__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_15__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_14__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_13__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_12__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_11__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_10__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_9__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_8__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_7__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_6__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_5__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_4__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_3__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_2__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_1__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_0__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_15__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_14__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_13__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_12__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_11__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_10__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_9__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_8__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_7__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_6__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_5__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_4__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_3__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_2__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_1__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_0__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_15__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_14__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_13__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_12__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_11__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_10__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_9__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_8__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_7__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_6__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_5__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_4__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_3__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_2__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_1__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_0__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_15__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_14__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_13__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_12__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_11__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_10__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_9__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_8__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_7__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_6__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_5__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_4__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_3__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_2__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_1__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_0__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_15__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_14__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_13__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_12__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_11__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_10__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_9__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_8__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_7__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_6__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_5__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_4__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_3__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_2__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_1__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_0__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_15__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_14__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_13__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_12__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_11__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_10__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_9__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_8__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_7__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_6__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_5__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_4__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_3__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_2__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_1__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_0__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_15__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_14__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_13__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_12__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_11__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_10__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_9__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_8__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_7__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_6__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_5__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_4__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_3__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_2__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_1__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_0__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_15__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_14__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_13__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_12__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_11__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_10__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_9__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_8__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_7__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_6__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_5__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_4__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_3__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_2__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_1__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_0__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_15__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_14__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_13__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_12__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_11__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_10__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_9__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_8__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_7__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_6__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_5__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_4__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_3__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_2__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_1__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_0__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_15__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_14__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_13__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_12__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_11__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_10__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_9__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_8__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_7__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_6__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_5__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_4__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_3__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_2__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_1__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_0__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_15__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_14__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_13__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_12__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_11__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_10__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_9__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_8__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_7__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_6__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_5__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_4__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_3__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_2__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_1__DOT__outMacReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_0__DOT__outMacReg = 0U;
        __Vdly__TPU_top__DOT__accumulator__DOT__nextCompletedBank = 0U;
        vlSelf->TPU_top__DOT__accumulator__DOT__streamBank = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2__DOT__dataPipe_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2__DOT__validPipe_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2__DOT__updatePipe_1 = 0U;
        vlSelf->TPU_top__DOT__accumulator__DOT__read_ptr = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3__DOT__dataPipe_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3__DOT__validPipe_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3__DOT__updatePipe_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__dataPipe_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__validPipe_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__updatePipe_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__dataPipe_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__validPipe_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__updatePipe_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__dataPipe_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__validPipe_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__updatePipe_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__dataPipe_6 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__validPipe_6 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__updatePipe_6 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_7 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_7 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_7 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_8 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_8 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_8 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_9 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_9 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_9 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_10 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_10 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_10 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_11 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_11 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_11 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_12 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_12 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_12 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_13 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_13 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_13 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_14 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_14 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_14 = 0U;
        vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_15_r = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_14__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_14__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_14__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_14__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_14__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_14__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_14__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_14__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_14__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_14__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_14__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_14__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_14__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_14__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_14__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_14__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_15_r = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_0__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_0__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_0__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_0__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_0__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_0__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_0__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_0__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_0__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_0__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_0__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_0__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_0__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_0__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_0__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_0__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_1__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_1__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_1__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_1__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_1__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_1__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_1__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_1__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_1__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_1__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_1__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_1__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_1__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_1__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_1__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_1__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_2__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_2__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_2__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_2__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_2__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_2__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_2__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_2__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_2__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_2__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_2__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_2__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_2__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_2__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_2__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_2__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_3__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_3__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_3__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_3__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_3__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_3__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_3__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_3__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_3__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_3__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_3__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_3__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_3__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_3__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_3__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_3__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_4__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_4__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_4__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_4__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_4__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_4__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_4__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_4__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_4__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_4__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_4__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_4__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_4__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_4__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_4__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_4__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_5__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_5__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_5__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_5__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_5__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_5__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_5__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_5__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_5__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_5__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_5__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_5__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_5__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_5__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_5__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_5__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_6__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_6__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_6__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_6__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_6__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_6__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_6__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_6__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_6__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_6__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_6__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_6__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_6__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_6__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_6__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_6__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_7__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_7__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_7__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_7__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_7__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_7__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_7__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_7__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_7__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_7__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_7__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_7__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_7__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_7__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_7__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_7__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_8__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_8__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_8__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_8__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_8__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_8__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_8__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_8__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_8__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_8__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_8__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_8__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_8__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_8__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_8__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_8__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_9__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_9__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_9__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_9__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_9__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_9__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_9__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_9__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_9__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_9__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_9__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_9__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_9__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_9__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_9__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_9__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_10__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_10__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_10__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_10__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_10__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_10__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_10__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_10__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_10__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_10__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_10__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_10__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_10__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_10__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_10__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_10__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_11__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_11__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_11__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_11__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_11__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_11__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_11__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_11__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_11__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_11__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_11__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_11__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_11__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_11__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_11__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_11__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_12__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_12__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_12__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_12__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_12__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_12__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_12__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_12__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_12__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_12__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_12__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_12__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_12__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_12__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_12__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_12__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_13__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_13__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_13__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_13__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_13__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_13__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_13__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_13__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_13__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_13__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_13__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_13__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_13__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_13__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_13__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_13__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_14__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_14__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_14__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_14__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_14__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_14__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_14__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_14__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_14__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_14__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_14__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_14__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_14__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_14__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_14__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_14__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_15__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_15__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_15__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_15__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_15__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_15__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_15__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_15__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_15__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_15__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_15__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_15__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_15__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_15__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_15__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_15__DOT__active_weight = 0U;
        vlSelf->TPU_top__DOT__timer__DOT__fusionTileCountdown = 0xfU;
        vlSelf->TPU_top__DOT__timer__DOT__nTileCounter = 0U;
        vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__enq_ptr_value = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2__DOT__dataPipe_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2__DOT__validPipe_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2__DOT__updatePipe_0 = 0U;
        vlSelf->TPU_top__DOT__accumulator__DOT__streamActive = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3__DOT__dataPipe_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3__DOT__validPipe_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3__DOT__updatePipe_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__dataPipe_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__validPipe_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__updatePipe_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__dataPipe_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__validPipe_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__updatePipe_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__dataPipe_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__validPipe_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__updatePipe_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__dataPipe_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__validPipe_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__updatePipe_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_6 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_6 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_6 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_7 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_7 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_7 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_8 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_8 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_8 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_9 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_9 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_9 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_10 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_10 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_10 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_11 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_11 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_11 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_12 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_12 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_12 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_13 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_13 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_13 = 0U;
        vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_14_r = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_13__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_13__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_13__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_13__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_13__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_13__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_13__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_13__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_13__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_13__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_13__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_13__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_13__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_13__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_13__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_13__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_14_r = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_14__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_14__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_14__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_14__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_14__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_14__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_14__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_14__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_14__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_14__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_14__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_14__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_14__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_14__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_14__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_14__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_6 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_7 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_8 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_9 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_10 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_11 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_12 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_13 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_14 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_15 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_6 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_7 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_8 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_9 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_10 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_11 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_12 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_13 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_14 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_15 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_6 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_7 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_8 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_9 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_10 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_11 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_12 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_13 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_14 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_15 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_6 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_7 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_8 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_9 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_10 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_11 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_12 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_13 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_14 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_15 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_6 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_7 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_8 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_9 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_10 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_11 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_12 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_13 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_14 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_15 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_6 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_7 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_8 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_9 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_10 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_11 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_12 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_13 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_14 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_15 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_6 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_7 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_8 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_9 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_10 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_11 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_12 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_13 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_14 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_15 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_6 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_7 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_8 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_9 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_10 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_11 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_12 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_13 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_14 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_15 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_6 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_7 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_8 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_9 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_10 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_11 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_12 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_13 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_14 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_15 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_6 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_7 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_8 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_9 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_10 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_11 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_12 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_13 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_14 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_15 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_6 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_7 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_8 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_9 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_10 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_11 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_12 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_13 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_14 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_15 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_6 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_7 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_8 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_9 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_10 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_11 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_12 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_13 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_14 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_15 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_6 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_7 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_8 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_9 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_10 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_11 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_12 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_13 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_14 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_15 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_6 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_7 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_8 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_9 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_10 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_11 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_12 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_13 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_14 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_15 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_6 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_7 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_8 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_9 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_10 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_11 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_12 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_13 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_14 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_15 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_6 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_7 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_8 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_9 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_10 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_11 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_12 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_13 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_14 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_15 = 0U;
        __Vdly__TPU_top__DOT__orchestrator__DOT__weightLoadIdx = 0U;
    } else {
        if (((IData)(vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__ram_row_change_update_MPORT_en) 
             != (IData)(vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__do_deq))) {
            vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__maybe_full 
                = vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__ram_row_change_update_MPORT_en;
        }
        if (vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__do_deq) {
            vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__deq_ptr_value 
                = vlSelf->TPU_top__DOT__tileCtrlQueue__DOT___value_T_3;
        }
        if ((1U & (~ (IData)(vlSelf->io_stall)))) {
            vlSelf->TPU_top__DOT__mxu__DOT__macs_15_15__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_15__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_15_14__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_14__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_15_13__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_13__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_15_12__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_12__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_15_11__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_11__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_15_10__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_10__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_15_9__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_9__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_15_8__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_8__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_15_7__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_7__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_15_6__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_6__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_15_5__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_5__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_15_4__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_4__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_15_3__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_3__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_15_2__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_2__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_15_1__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_1__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_15_0__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_0__DOT__add_full);
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_1__DOT__validPipe_0 
                = vlSelf->io_input_valid;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_1__DOT__updatePipe_0 
                = ((IData)(vlSelf->io_input_valid) 
                   & (IData)(vlSelf->io_input_tile_start));
            vlSelf->TPU_top__DOT__mxu__DOT__macs_0_15__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_15__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_0_14__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_14__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_0_13__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_13__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_0_12__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_12__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_0_11__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_11__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_0_10__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_10__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_0_9__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_9__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_0_8__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_8__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_0_7__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_7__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_0_6__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_6__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_0_5__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_5__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_0_4__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_4__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_0_3__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_3__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_0_2__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_2__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_0_1__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_1__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_0_0__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_0__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_14_15__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_15__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_14_14__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_14__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_14_13__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_13__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_14_12__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_12__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_14_11__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_11__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_14_10__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_10__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_14_9__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_9__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_14_8__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_8__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_14_7__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_7__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_14_6__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_6__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_14_5__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_5__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_14_4__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_4__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_14_3__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_3__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_14_2__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_2__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_14_1__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_1__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_14_0__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_0__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_13_15__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_15__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_13_14__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_14__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_13_13__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_13__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_13_12__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_12__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_13_11__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_11__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_13_10__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_10__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_13_9__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_9__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_13_8__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_8__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_13_7__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_7__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_13_6__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_6__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_13_5__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_5__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_13_4__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_4__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_13_3__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_3__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_13_2__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_2__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_13_1__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_1__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_13_0__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_0__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_12_15__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_15__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_12_14__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_14__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_12_13__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_13__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_12_12__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_12__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_12_11__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_11__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_12_10__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_10__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_12_9__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_9__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_12_8__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_8__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_12_7__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_7__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_12_6__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_6__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_12_5__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_5__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_12_4__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_4__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_12_3__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_3__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_12_2__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_2__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_12_1__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_1__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_12_0__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_0__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_11_15__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_15__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_11_14__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_14__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_11_13__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_13__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_11_12__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_12__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_11_11__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_11__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_11_10__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_10__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_11_9__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_9__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_11_8__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_8__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_11_7__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_7__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_11_6__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_6__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_11_5__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_5__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_11_4__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_4__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_11_3__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_3__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_11_2__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_2__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_11_1__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_1__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_11_0__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_0__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_10_15__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_15__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_10_14__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_14__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_10_13__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_13__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_10_12__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_12__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_10_11__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_11__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_10_10__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_10__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_10_9__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_9__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_10_8__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_8__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_10_7__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_7__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_10_6__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_6__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_10_5__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_5__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_10_4__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_4__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_10_3__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_3__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_10_2__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_2__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_10_1__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_1__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_10_0__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_0__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_9_15__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_15__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_9_14__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_14__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_9_13__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_13__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_9_12__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_12__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_9_11__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_11__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_9_10__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_10__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_9_9__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_9__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_9_8__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_8__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_9_7__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_7__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_9_6__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_6__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_9_5__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_5__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_9_4__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_4__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_9_3__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_3__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_9_2__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_2__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_9_1__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_1__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_9_0__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_0__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_8_15__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_15__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_8_14__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_14__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_8_13__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_13__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_8_12__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_12__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_8_11__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_11__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_8_10__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_10__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_8_9__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_9__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_8_8__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_8__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_8_7__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_7__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_8_6__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_6__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_8_5__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_5__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_8_4__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_4__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_8_3__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_3__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_8_2__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_2__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_8_1__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_1__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_8_0__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_0__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_7_15__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_15__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_7_14__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_14__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_7_13__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_13__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_7_12__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_12__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_7_11__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_11__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_7_10__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_10__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_7_9__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_9__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_7_8__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_8__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_7_7__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_7__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_7_6__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_6__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_7_5__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_5__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_7_4__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_4__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_7_3__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_3__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_7_2__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_2__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_7_1__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_1__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_7_0__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_0__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_6_15__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_15__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_6_14__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_14__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_6_13__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_13__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_6_12__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_12__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_6_11__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_11__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_6_10__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_10__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_6_9__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_9__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_6_8__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_8__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_6_7__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_7__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_6_6__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_6__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_6_5__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_5__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_6_4__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_4__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_6_3__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_3__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_6_2__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_2__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_6_1__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_1__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_6_0__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_0__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_5_15__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_15__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_5_14__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_14__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_5_13__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_13__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_5_12__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_12__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_5_11__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_11__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_5_10__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_10__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_5_9__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_9__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_5_8__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_8__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_5_7__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_7__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_5_6__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_6__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_5_5__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_5__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_5_4__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_4__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_5_3__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_3__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_5_2__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_2__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_5_1__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_1__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_5_0__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_0__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_4_15__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_15__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_4_14__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_14__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_4_13__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_13__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_4_12__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_12__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_4_11__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_11__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_4_10__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_10__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_4_9__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_9__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_4_8__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_8__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_4_7__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_7__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_4_6__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_6__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_4_5__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_5__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_4_4__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_4__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_4_3__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_3__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_4_2__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_2__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_4_1__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_1__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_4_0__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_0__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_3_15__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_15__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_3_14__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_14__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_3_13__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_13__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_3_12__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_12__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_3_11__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_11__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_3_10__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_10__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_3_9__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_9__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_3_8__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_8__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_3_7__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_7__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_3_6__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_6__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_3_5__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_5__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_3_4__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_4__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_3_3__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_3__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_3_2__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_2__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_3_1__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_1__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_3_0__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_0__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_2_15__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_15__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_2_14__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_14__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_2_13__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_13__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_2_12__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_12__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_2_11__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_11__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_2_10__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_10__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_2_9__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_9__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_2_8__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_8__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_2_7__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_7__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_2_6__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_6__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_2_5__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_5__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_2_4__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_4__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_2_3__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_3__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_2_2__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_2__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_2_1__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_1__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_2_0__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_0__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_1_15__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_15__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_1_14__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_14__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_1_13__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_13__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_1_12__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_12__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_1_11__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_11__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_1_10__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_10__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_1_9__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_9__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_1_8__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_8__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_1_7__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_7__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_1_6__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_6__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_1_5__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_5__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_1_4__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_4__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_1_3__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_3__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_1_2__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_2__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_1_1__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_1__DOT__add_full);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_1_0__DOT__outMacReg 
                = (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_0__DOT__add_full);
            if (vlSelf->TPU_top__DOT__accumulator_io_snapshot_done) {
                __Vdly__TPU_top__DOT__accumulator__DOT__nextCompletedBank 
                    = (1U & (~ (IData)(vlSelf->TPU_top__DOT__accumulator__DOT__nextCompletedBank)));
                vlSelf->TPU_top__DOT__accumulator__DOT__streamBank 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__nextCompletedBank;
                vlSelf->TPU_top__DOT__accumulator__DOT__read_ptr = 0U;
            } else {
                vlSelf->TPU_top__DOT__accumulator__DOT__read_ptr 
                    = ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__streamActive)
                        ? (IData)(vlSelf->TPU_top__DOT__accumulator__DOT___GEN_46)
                        : 0U);
            }
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2__DOT__dataPipe_1 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2__DOT__dataPipe_0;
            if (vlSelf->io_input_valid) {
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_1__DOT__dataPipe_0 
                    = vlSelf->io_in_input_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2__DOT__dataPipe_0 
                    = vlSelf->io_in_input_2;
            } else {
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_1__DOT__dataPipe_0 = 0U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2__DOT__dataPipe_0 = 0U;
            }
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2__DOT__validPipe_1 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2__DOT__validPipe_0;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2__DOT__updatePipe_1 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2__DOT__updatePipe_0;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3__DOT__dataPipe_2 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3__DOT__dataPipe_1;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3__DOT__validPipe_2 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3__DOT__validPipe_1;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3__DOT__updatePipe_2 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3__DOT__updatePipe_1;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__dataPipe_3 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__dataPipe_2;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__validPipe_3 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__validPipe_2;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__updatePipe_3 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__updatePipe_2;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__dataPipe_4 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__dataPipe_3;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__validPipe_4 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__validPipe_3;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__updatePipe_4 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__updatePipe_3;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__dataPipe_5 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__dataPipe_4;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__validPipe_5 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__validPipe_4;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__updatePipe_5 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__updatePipe_4;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__dataPipe_6 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__dataPipe_5;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__validPipe_6 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__validPipe_5;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__updatePipe_6 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__updatePipe_5;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_7 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_6;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_7 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_6;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_7 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_6;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_8 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_7;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_8 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_7;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_8 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_7;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_9 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_8;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_9 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_8;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_9 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_8;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_10 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_9;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_10 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_9;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_10 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_9;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_11 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_10;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_11 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_10;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_11 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_10;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_12 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_11;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_12 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_11;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_12 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_11;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_13 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_12;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_13 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_12;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_13 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_12;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_14 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_13;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_14 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_13;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_14 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_13;
            vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_15_r 
                = vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_14_r;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_0_14__DOT__outInReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_13__DOT__outInReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_15_14__DOT__outInReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_13__DOT__outInReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_14_14__DOT__outInReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_13__DOT__outInReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_13_14__DOT__outInReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_13__DOT__outInReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_12_14__DOT__outInReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_13__DOT__outInReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_11_14__DOT__outInReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_13__DOT__outInReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_10_14__DOT__outInReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_13__DOT__outInReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_9_14__DOT__outInReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_13__DOT__outInReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_8_14__DOT__outInReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_13__DOT__outInReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_7_14__DOT__outInReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_13__DOT__outInReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_6_14__DOT__outInReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_13__DOT__outInReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_5_14__DOT__outInReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_13__DOT__outInReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_4_14__DOT__outInReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_13__DOT__outInReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_3_14__DOT__outInReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_13__DOT__outInReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_2_14__DOT__outInReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_13__DOT__outInReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_1_14__DOT__outInReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_13__DOT__outInReg;
            vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_15_r 
                = vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_14_r;
            if (vlSelf->io_clear_W) {
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_0__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_0__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_0__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_0__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_0__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_0__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_0__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_0__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_0__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_0__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_0__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_0__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_0__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_0__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_0__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_0__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_1__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_1__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_1__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_1__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_1__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_1__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_1__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_1__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_1__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_1__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_1__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_1__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_1__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_1__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_1__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_1__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_2__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_2__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_2__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_2__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_2__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_2__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_2__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_2__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_2__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_2__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_2__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_2__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_2__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_2__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_2__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_2__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_3__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_3__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_3__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_3__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_3__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_3__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_3__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_3__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_3__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_3__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_3__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_3__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_3__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_3__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_3__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_3__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_4__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_4__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_4__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_4__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_4__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_4__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_4__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_4__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_4__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_4__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_4__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_4__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_4__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_4__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_4__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_4__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_5__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_5__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_5__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_5__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_5__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_5__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_5__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_5__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_5__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_5__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_5__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_5__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_5__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_5__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_5__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_5__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_6__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_6__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_6__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_6__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_6__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_6__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_6__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_6__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_6__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_6__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_6__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_6__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_6__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_6__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_6__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_6__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_7__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_7__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_7__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_7__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_7__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_7__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_7__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_7__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_7__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_7__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_7__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_7__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_7__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_7__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_7__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_7__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_8__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_8__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_8__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_8__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_8__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_8__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_8__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_8__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_8__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_8__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_8__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_8__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_8__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_8__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_8__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_8__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_9__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_9__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_9__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_9__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_9__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_9__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_9__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_9__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_9__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_9__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_9__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_9__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_9__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_9__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_9__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_9__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_10__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_10__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_10__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_10__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_10__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_10__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_10__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_10__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_10__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_10__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_10__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_10__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_10__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_10__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_10__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_10__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_11__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_11__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_11__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_11__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_11__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_11__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_11__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_11__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_11__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_11__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_11__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_11__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_11__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_11__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_11__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_11__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_12__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_12__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_12__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_12__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_12__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_12__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_12__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_12__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_12__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_12__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_12__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_12__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_12__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_12__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_12__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_12__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_13__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_13__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_13__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_13__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_13__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_13__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_13__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_13__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_13__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_13__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_13__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_13__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_13__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_13__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_13__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_13__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_14__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_14__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_14__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_14__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_14__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_14__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_14__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_14__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_14__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_14__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_14__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_14__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_14__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_14__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_14__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_14__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_15__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_15__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_15__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_15__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_15__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_15__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_15__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_15__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_15__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_15__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_15__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_15__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_15__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_15__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_15__DOT__active_weight = 0U;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_15__DOT__active_weight = 0U;
            } else {
                if (vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_0_io_out_weight_update) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_0__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_0;
                }
                if (vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15_io_out_weight_update) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_0__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_15;
                }
                if (vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14_io_out_weight_update) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_0__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_14;
                }
                if (vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13_io_out_weight_update) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_0__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_13;
                }
                if (vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12_io_out_weight_update) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_0__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_12;
                }
                if (vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11_io_out_weight_update) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_0__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_11;
                }
                if (vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10_io_out_weight_update) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_0__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_10;
                }
                if (vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9_io_out_weight_update) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_0__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_9;
                }
                if (vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8_io_out_weight_update) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_0__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_8;
                }
                if (vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7_io_out_weight_update) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_0__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_7;
                }
                if (vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6_io_out_weight_update) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_0__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_6;
                }
                if (vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5_io_out_weight_update) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_0__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_5;
                }
                if (vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4_io_out_weight_update) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_0__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_4;
                }
                if (vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3_io_out_weight_update) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_0__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_3;
                }
                if (vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2_io_out_weight_update) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_0__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_2;
                }
                if (vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_1_io_out_weight_update) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_0__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_1;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_0__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_1__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_0;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_0__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_1__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_15;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_0__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_1__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_14;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_0__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_1__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_13;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_0__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_1__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_12;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_0__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_1__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_11;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_0__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_1__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_10;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_0__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_1__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_9;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_0__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_1__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_8;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_0__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_1__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_7;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_0__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_1__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_6;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_0__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_1__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_5;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_0__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_1__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_4;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_0__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_1__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_3;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_0__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_1__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_2;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_0__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_1__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_1;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_1__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_2__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_0;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_1__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_2__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_15;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_1__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_2__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_14;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_1__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_2__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_13;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_1__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_2__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_12;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_1__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_2__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_11;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_1__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_2__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_10;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_1__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_2__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_9;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_1__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_2__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_8;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_1__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_2__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_7;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_1__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_2__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_6;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_1__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_2__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_5;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_1__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_2__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_4;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_1__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_2__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_3;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_1__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_2__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_2;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_1__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_2__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_1;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_2__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_3__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_0;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_2__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_3__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_15;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_2__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_3__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_14;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_2__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_3__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_13;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_2__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_3__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_12;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_2__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_3__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_11;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_2__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_3__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_10;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_2__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_3__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_9;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_2__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_3__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_8;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_2__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_3__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_7;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_2__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_3__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_6;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_2__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_3__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_5;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_2__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_3__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_4;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_2__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_3__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_3;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_2__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_3__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_2;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_2__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_3__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_1;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_3__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_4__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_0;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_3__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_4__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_15;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_3__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_4__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_14;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_3__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_4__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_13;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_3__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_4__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_12;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_3__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_4__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_11;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_3__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_4__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_10;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_3__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_4__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_9;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_3__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_4__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_8;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_3__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_4__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_7;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_3__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_4__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_6;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_3__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_4__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_5;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_3__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_4__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_4;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_3__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_4__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_3;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_3__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_4__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_2;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_3__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_4__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_1;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_4__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_5__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_0;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_4__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_5__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_15;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_4__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_5__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_14;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_4__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_5__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_13;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_4__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_5__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_12;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_4__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_5__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_11;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_4__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_5__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_10;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_4__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_5__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_9;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_4__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_5__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_8;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_4__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_5__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_7;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_4__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_5__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_6;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_4__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_5__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_5;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_4__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_5__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_4;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_4__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_5__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_3;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_4__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_5__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_2;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_4__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_5__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_1;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_5__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_6__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_0;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_5__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_6__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_15;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_5__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_6__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_14;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_5__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_6__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_13;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_5__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_6__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_12;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_5__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_6__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_11;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_5__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_6__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_10;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_5__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_6__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_9;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_5__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_6__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_8;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_5__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_6__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_7;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_5__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_6__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_6;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_5__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_6__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_5;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_5__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_6__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_4;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_5__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_6__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_3;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_5__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_6__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_2;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_5__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_6__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_1;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_6__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_7__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_0;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_6__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_7__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_15;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_6__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_7__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_14;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_6__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_7__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_13;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_6__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_7__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_12;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_6__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_7__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_11;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_6__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_7__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_10;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_6__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_7__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_9;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_6__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_7__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_8;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_6__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_7__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_7;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_6__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_7__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_6;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_6__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_7__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_5;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_6__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_7__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_4;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_6__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_7__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_3;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_6__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_7__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_2;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_6__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_7__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_1;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_7__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_8__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_0;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_7__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_8__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_15;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_7__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_8__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_14;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_7__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_8__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_13;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_7__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_8__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_12;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_7__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_8__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_11;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_7__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_8__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_10;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_7__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_8__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_9;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_7__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_8__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_8;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_7__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_8__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_7;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_7__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_8__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_6;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_7__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_8__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_5;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_7__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_8__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_4;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_7__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_8__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_3;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_7__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_8__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_2;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_7__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_8__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_1;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_8__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_9__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_0;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_8__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_9__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_15;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_8__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_9__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_14;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_8__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_9__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_13;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_8__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_9__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_12;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_8__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_9__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_11;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_8__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_9__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_10;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_8__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_9__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_9;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_8__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_9__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_8;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_8__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_9__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_7;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_8__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_9__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_6;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_8__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_9__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_5;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_8__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_9__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_4;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_8__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_9__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_3;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_8__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_9__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_2;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_8__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_9__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_1;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_9__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_10__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_0;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_9__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_10__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_15;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_9__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_10__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_14;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_9__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_10__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_13;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_9__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_10__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_12;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_9__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_10__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_11;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_9__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_10__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_10;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_9__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_10__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_9;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_9__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_10__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_8;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_9__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_10__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_7;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_9__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_10__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_6;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_9__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_10__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_5;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_9__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_10__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_4;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_9__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_10__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_3;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_9__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_10__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_2;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_9__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_10__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_1;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_10__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_11__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_0;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_10__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_11__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_15;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_10__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_11__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_14;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_10__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_11__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_13;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_10__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_11__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_12;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_10__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_11__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_11;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_10__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_11__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_10;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_10__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_11__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_9;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_10__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_11__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_8;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_10__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_11__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_7;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_10__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_11__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_6;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_10__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_11__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_5;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_10__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_11__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_4;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_10__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_11__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_3;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_10__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_11__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_2;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_10__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_11__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_1;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_11__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_12__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_0;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_11__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_12__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_15;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_11__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_12__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_14;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_11__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_12__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_13;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_11__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_12__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_12;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_11__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_12__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_11;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_11__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_12__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_10;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_11__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_12__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_9;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_11__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_12__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_8;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_11__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_12__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_7;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_11__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_12__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_6;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_11__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_12__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_5;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_11__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_12__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_4;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_11__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_12__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_3;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_11__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_12__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_2;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_11__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_12__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_1;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_12__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_13__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_0;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_12__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_13__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_15;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_12__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_13__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_14;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_12__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_13__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_13;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_12__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_13__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_12;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_12__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_13__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_11;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_12__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_13__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_10;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_12__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_13__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_9;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_12__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_13__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_8;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_12__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_13__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_7;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_12__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_13__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_6;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_12__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_13__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_5;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_12__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_13__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_4;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_12__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_13__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_3;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_12__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_13__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_2;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_12__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_13__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_1;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_13__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_14__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_0;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_13__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_14__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_15;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_13__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_14__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_14;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_13__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_14__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_13;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_13__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_14__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_12;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_13__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_14__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_11;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_13__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_14__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_10;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_13__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_14__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_9;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_13__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_14__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_8;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_13__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_14__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_7;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_13__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_14__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_6;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_13__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_14__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_5;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_13__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_14__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_4;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_13__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_14__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_3;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_13__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_14__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_2;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_13__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_14__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_1;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_0_14__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_15__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_0;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_15_14__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_15__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_15;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_14_14__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_15__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_14;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_13_14__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_15__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_13;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_12_14__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_15__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_12;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_11_14__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_15__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_11;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_10_14__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_15__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_10;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_9_14__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_15__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_9;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_8_14__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_15__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_8;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_7_14__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_15__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_7;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_6_14__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_15__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_6;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_5_14__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_15__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_5;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_4_14__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_15__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_4;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_3_14__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_15__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_3;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_2_14__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_15__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_2;
                }
                if (vlSelf->TPU_top__DOT__mxu__DOT__macs_1_14__DOT__outWeightUpdateReg) {
                    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_15__DOT__active_weight 
                        = vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_1;
                }
            }
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2__DOT__validPipe_0 
                = vlSelf->io_input_valid;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2__DOT__updatePipe_0 
                = ((IData)(vlSelf->io_input_valid) 
                   & (IData)(vlSelf->io_input_tile_start));
            vlSelf->TPU_top__DOT__accumulator__DOT__streamActive 
                = vlSelf->TPU_top__DOT__accumulator__DOT___GEN_51;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3__DOT__dataPipe_1 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3__DOT__dataPipe_0;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3__DOT__validPipe_1 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3__DOT__validPipe_0;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3__DOT__updatePipe_1 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3__DOT__updatePipe_0;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__dataPipe_2 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__dataPipe_1;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__validPipe_2 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__validPipe_1;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__updatePipe_2 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__updatePipe_1;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__dataPipe_3 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__dataPipe_2;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__validPipe_3 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__validPipe_2;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__updatePipe_3 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__updatePipe_2;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__dataPipe_4 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__dataPipe_3;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__validPipe_4 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__validPipe_3;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__updatePipe_4 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__updatePipe_3;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__dataPipe_5 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__dataPipe_4;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__validPipe_5 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__validPipe_4;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__updatePipe_5 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__updatePipe_4;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_6 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_5;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_6 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_5;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_6 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_5;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_7 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_6;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_7 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_6;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_7 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_6;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_8 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_7;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_8 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_7;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_8 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_7;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_9 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_8;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_9 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_8;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_9 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_8;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_10 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_9;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_10 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_9;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_10 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_9;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_11 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_10;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_11 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_10;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_11 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_10;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_12 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_11;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_12 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_11;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_12 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_11;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_13 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_12;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_13 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_12;
            vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_13 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_12;
            vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_14_r 
                = vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_13_r;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_0_13__DOT__outInReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_12__DOT__outInReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_15_13__DOT__outInReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_12__DOT__outInReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_14_13__DOT__outInReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_12__DOT__outInReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_13_13__DOT__outInReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_12__DOT__outInReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_12_13__DOT__outInReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_12__DOT__outInReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_11_13__DOT__outInReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_12__DOT__outInReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_10_13__DOT__outInReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_12__DOT__outInReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_9_13__DOT__outInReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_12__DOT__outInReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_8_13__DOT__outInReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_12__DOT__outInReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_7_13__DOT__outInReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_12__DOT__outInReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_6_13__DOT__outInReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_12__DOT__outInReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_5_13__DOT__outInReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_12__DOT__outInReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_4_13__DOT__outInReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_12__DOT__outInReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_3_13__DOT__outInReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_12__DOT__outInReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_2_13__DOT__outInReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_12__DOT__outInReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_1_13__DOT__outInReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_12__DOT__outInReg;
            vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_14_r 
                = vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_13_r;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_0_14__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_13__DOT__outWeightUpdateReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_15_14__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_13__DOT__outWeightUpdateReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_14_14__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_13__DOT__outWeightUpdateReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_13_14__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_13__DOT__outWeightUpdateReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_12_14__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_13__DOT__outWeightUpdateReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_11_14__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_13__DOT__outWeightUpdateReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_10_14__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_13__DOT__outWeightUpdateReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_9_14__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_13__DOT__outWeightUpdateReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_8_14__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_13__DOT__outWeightUpdateReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_7_14__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_13__DOT__outWeightUpdateReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_6_14__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_13__DOT__outWeightUpdateReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_5_14__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_13__DOT__outWeightUpdateReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_4_14__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_13__DOT__outWeightUpdateReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_3_14__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_13__DOT__outWeightUpdateReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_2_14__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_13__DOT__outWeightUpdateReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_1_14__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_13__DOT__outWeightUpdateReg;
        }
        if (vlSelf->TPU_top__DOT__accumulator__DOT__buffers_0_io_snapshot) {
            vlSelf->TPU_top__DOT__timer__DOT__fusionTileCountdown 
                = ((IData)(vlSelf->TPU_top__DOT__timer__DOT___io_fusion_req_T)
                    ? 0x1fU : vlSelf->TPU_top__DOT__timer__DOT___fusionTileCountdown_T_1);
            vlSelf->TPU_top__DOT__timer__DOT__nTileCounter 
                = ((IData)(vlSelf->TPU_top__DOT__timer__DOT__lastNTile)
                    ? 0U : vlSelf->TPU_top__DOT__timer__DOT___nTileCounter_T_1);
        }
        if (vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__ram_row_change_update_MPORT_en) {
            vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__enq_ptr_value 
                = vlSelf->TPU_top__DOT__tileCtrlQueue__DOT___value_T_1;
        }
        if (((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->io_weight_valid))) {
            if ((0U == (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__weightLoadIdx))) {
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_0 
                    = vlSelf->io_in_weight_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_1 
                    = vlSelf->io_in_weight_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_2 
                    = vlSelf->io_in_weight_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_3 
                    = vlSelf->io_in_weight_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_4 
                    = vlSelf->io_in_weight_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_5 
                    = vlSelf->io_in_weight_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_6 
                    = vlSelf->io_in_weight_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_7 
                    = vlSelf->io_in_weight_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_8 
                    = vlSelf->io_in_weight_8;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_9 
                    = vlSelf->io_in_weight_9;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_10 
                    = vlSelf->io_in_weight_10;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_11 
                    = vlSelf->io_in_weight_11;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_12 
                    = vlSelf->io_in_weight_12;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_13 
                    = vlSelf->io_in_weight_13;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_14 
                    = vlSelf->io_in_weight_14;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_15 
                    = vlSelf->io_in_weight_15;
            }
            if ((1U == (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__weightLoadIdx))) {
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_0 
                    = vlSelf->io_in_weight_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_1 
                    = vlSelf->io_in_weight_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_2 
                    = vlSelf->io_in_weight_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_3 
                    = vlSelf->io_in_weight_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_4 
                    = vlSelf->io_in_weight_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_5 
                    = vlSelf->io_in_weight_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_6 
                    = vlSelf->io_in_weight_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_7 
                    = vlSelf->io_in_weight_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_8 
                    = vlSelf->io_in_weight_8;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_9 
                    = vlSelf->io_in_weight_9;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_10 
                    = vlSelf->io_in_weight_10;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_11 
                    = vlSelf->io_in_weight_11;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_12 
                    = vlSelf->io_in_weight_12;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_13 
                    = vlSelf->io_in_weight_13;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_14 
                    = vlSelf->io_in_weight_14;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_15 
                    = vlSelf->io_in_weight_15;
            }
            if ((2U == (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__weightLoadIdx))) {
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_0 
                    = vlSelf->io_in_weight_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_1 
                    = vlSelf->io_in_weight_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_2 
                    = vlSelf->io_in_weight_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_3 
                    = vlSelf->io_in_weight_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_4 
                    = vlSelf->io_in_weight_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_5 
                    = vlSelf->io_in_weight_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_6 
                    = vlSelf->io_in_weight_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_7 
                    = vlSelf->io_in_weight_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_8 
                    = vlSelf->io_in_weight_8;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_9 
                    = vlSelf->io_in_weight_9;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_10 
                    = vlSelf->io_in_weight_10;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_11 
                    = vlSelf->io_in_weight_11;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_12 
                    = vlSelf->io_in_weight_12;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_13 
                    = vlSelf->io_in_weight_13;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_14 
                    = vlSelf->io_in_weight_14;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_15 
                    = vlSelf->io_in_weight_15;
            }
            if ((3U == (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__weightLoadIdx))) {
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_0 
                    = vlSelf->io_in_weight_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_1 
                    = vlSelf->io_in_weight_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_2 
                    = vlSelf->io_in_weight_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_3 
                    = vlSelf->io_in_weight_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_4 
                    = vlSelf->io_in_weight_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_5 
                    = vlSelf->io_in_weight_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_6 
                    = vlSelf->io_in_weight_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_7 
                    = vlSelf->io_in_weight_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_8 
                    = vlSelf->io_in_weight_8;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_9 
                    = vlSelf->io_in_weight_9;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_10 
                    = vlSelf->io_in_weight_10;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_11 
                    = vlSelf->io_in_weight_11;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_12 
                    = vlSelf->io_in_weight_12;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_13 
                    = vlSelf->io_in_weight_13;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_14 
                    = vlSelf->io_in_weight_14;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_15 
                    = vlSelf->io_in_weight_15;
            }
            if ((4U == (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__weightLoadIdx))) {
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_0 
                    = vlSelf->io_in_weight_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_1 
                    = vlSelf->io_in_weight_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_2 
                    = vlSelf->io_in_weight_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_3 
                    = vlSelf->io_in_weight_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_4 
                    = vlSelf->io_in_weight_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_5 
                    = vlSelf->io_in_weight_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_6 
                    = vlSelf->io_in_weight_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_7 
                    = vlSelf->io_in_weight_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_8 
                    = vlSelf->io_in_weight_8;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_9 
                    = vlSelf->io_in_weight_9;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_10 
                    = vlSelf->io_in_weight_10;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_11 
                    = vlSelf->io_in_weight_11;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_12 
                    = vlSelf->io_in_weight_12;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_13 
                    = vlSelf->io_in_weight_13;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_14 
                    = vlSelf->io_in_weight_14;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_15 
                    = vlSelf->io_in_weight_15;
            }
            if ((5U == (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__weightLoadIdx))) {
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_0 
                    = vlSelf->io_in_weight_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_1 
                    = vlSelf->io_in_weight_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_2 
                    = vlSelf->io_in_weight_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_3 
                    = vlSelf->io_in_weight_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_4 
                    = vlSelf->io_in_weight_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_5 
                    = vlSelf->io_in_weight_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_6 
                    = vlSelf->io_in_weight_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_7 
                    = vlSelf->io_in_weight_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_8 
                    = vlSelf->io_in_weight_8;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_9 
                    = vlSelf->io_in_weight_9;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_10 
                    = vlSelf->io_in_weight_10;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_11 
                    = vlSelf->io_in_weight_11;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_12 
                    = vlSelf->io_in_weight_12;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_13 
                    = vlSelf->io_in_weight_13;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_14 
                    = vlSelf->io_in_weight_14;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_15 
                    = vlSelf->io_in_weight_15;
            }
            if ((6U == (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__weightLoadIdx))) {
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_0 
                    = vlSelf->io_in_weight_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_1 
                    = vlSelf->io_in_weight_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_2 
                    = vlSelf->io_in_weight_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_3 
                    = vlSelf->io_in_weight_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_4 
                    = vlSelf->io_in_weight_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_5 
                    = vlSelf->io_in_weight_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_6 
                    = vlSelf->io_in_weight_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_7 
                    = vlSelf->io_in_weight_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_8 
                    = vlSelf->io_in_weight_8;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_9 
                    = vlSelf->io_in_weight_9;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_10 
                    = vlSelf->io_in_weight_10;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_11 
                    = vlSelf->io_in_weight_11;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_12 
                    = vlSelf->io_in_weight_12;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_13 
                    = vlSelf->io_in_weight_13;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_14 
                    = vlSelf->io_in_weight_14;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_15 
                    = vlSelf->io_in_weight_15;
            }
            if ((7U == (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__weightLoadIdx))) {
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_0 
                    = vlSelf->io_in_weight_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_1 
                    = vlSelf->io_in_weight_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_2 
                    = vlSelf->io_in_weight_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_3 
                    = vlSelf->io_in_weight_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_4 
                    = vlSelf->io_in_weight_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_5 
                    = vlSelf->io_in_weight_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_6 
                    = vlSelf->io_in_weight_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_7 
                    = vlSelf->io_in_weight_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_8 
                    = vlSelf->io_in_weight_8;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_9 
                    = vlSelf->io_in_weight_9;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_10 
                    = vlSelf->io_in_weight_10;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_11 
                    = vlSelf->io_in_weight_11;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_12 
                    = vlSelf->io_in_weight_12;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_13 
                    = vlSelf->io_in_weight_13;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_14 
                    = vlSelf->io_in_weight_14;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_15 
                    = vlSelf->io_in_weight_15;
            }
            if ((8U == (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__weightLoadIdx))) {
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_0 
                    = vlSelf->io_in_weight_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_1 
                    = vlSelf->io_in_weight_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_2 
                    = vlSelf->io_in_weight_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_3 
                    = vlSelf->io_in_weight_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_4 
                    = vlSelf->io_in_weight_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_5 
                    = vlSelf->io_in_weight_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_6 
                    = vlSelf->io_in_weight_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_7 
                    = vlSelf->io_in_weight_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_8 
                    = vlSelf->io_in_weight_8;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_9 
                    = vlSelf->io_in_weight_9;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_10 
                    = vlSelf->io_in_weight_10;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_11 
                    = vlSelf->io_in_weight_11;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_12 
                    = vlSelf->io_in_weight_12;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_13 
                    = vlSelf->io_in_weight_13;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_14 
                    = vlSelf->io_in_weight_14;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_15 
                    = vlSelf->io_in_weight_15;
            }
            if ((9U == (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__weightLoadIdx))) {
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_0 
                    = vlSelf->io_in_weight_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_1 
                    = vlSelf->io_in_weight_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_2 
                    = vlSelf->io_in_weight_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_3 
                    = vlSelf->io_in_weight_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_4 
                    = vlSelf->io_in_weight_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_5 
                    = vlSelf->io_in_weight_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_6 
                    = vlSelf->io_in_weight_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_7 
                    = vlSelf->io_in_weight_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_8 
                    = vlSelf->io_in_weight_8;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_9 
                    = vlSelf->io_in_weight_9;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_10 
                    = vlSelf->io_in_weight_10;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_11 
                    = vlSelf->io_in_weight_11;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_12 
                    = vlSelf->io_in_weight_12;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_13 
                    = vlSelf->io_in_weight_13;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_14 
                    = vlSelf->io_in_weight_14;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_15 
                    = vlSelf->io_in_weight_15;
            }
            if ((0xaU == (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__weightLoadIdx))) {
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_0 
                    = vlSelf->io_in_weight_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_1 
                    = vlSelf->io_in_weight_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_2 
                    = vlSelf->io_in_weight_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_3 
                    = vlSelf->io_in_weight_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_4 
                    = vlSelf->io_in_weight_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_5 
                    = vlSelf->io_in_weight_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_6 
                    = vlSelf->io_in_weight_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_7 
                    = vlSelf->io_in_weight_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_8 
                    = vlSelf->io_in_weight_8;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_9 
                    = vlSelf->io_in_weight_9;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_10 
                    = vlSelf->io_in_weight_10;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_11 
                    = vlSelf->io_in_weight_11;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_12 
                    = vlSelf->io_in_weight_12;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_13 
                    = vlSelf->io_in_weight_13;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_14 
                    = vlSelf->io_in_weight_14;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_15 
                    = vlSelf->io_in_weight_15;
            }
            if ((0xbU == (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__weightLoadIdx))) {
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_0 
                    = vlSelf->io_in_weight_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_1 
                    = vlSelf->io_in_weight_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_2 
                    = vlSelf->io_in_weight_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_3 
                    = vlSelf->io_in_weight_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_4 
                    = vlSelf->io_in_weight_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_5 
                    = vlSelf->io_in_weight_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_6 
                    = vlSelf->io_in_weight_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_7 
                    = vlSelf->io_in_weight_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_8 
                    = vlSelf->io_in_weight_8;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_9 
                    = vlSelf->io_in_weight_9;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_10 
                    = vlSelf->io_in_weight_10;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_11 
                    = vlSelf->io_in_weight_11;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_12 
                    = vlSelf->io_in_weight_12;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_13 
                    = vlSelf->io_in_weight_13;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_14 
                    = vlSelf->io_in_weight_14;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_15 
                    = vlSelf->io_in_weight_15;
            }
            if ((0xcU == (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__weightLoadIdx))) {
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_0 
                    = vlSelf->io_in_weight_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_1 
                    = vlSelf->io_in_weight_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_2 
                    = vlSelf->io_in_weight_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_3 
                    = vlSelf->io_in_weight_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_4 
                    = vlSelf->io_in_weight_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_5 
                    = vlSelf->io_in_weight_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_6 
                    = vlSelf->io_in_weight_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_7 
                    = vlSelf->io_in_weight_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_8 
                    = vlSelf->io_in_weight_8;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_9 
                    = vlSelf->io_in_weight_9;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_10 
                    = vlSelf->io_in_weight_10;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_11 
                    = vlSelf->io_in_weight_11;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_12 
                    = vlSelf->io_in_weight_12;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_13 
                    = vlSelf->io_in_weight_13;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_14 
                    = vlSelf->io_in_weight_14;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_15 
                    = vlSelf->io_in_weight_15;
            }
            if ((0xdU == (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__weightLoadIdx))) {
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_0 
                    = vlSelf->io_in_weight_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_1 
                    = vlSelf->io_in_weight_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_2 
                    = vlSelf->io_in_weight_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_3 
                    = vlSelf->io_in_weight_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_4 
                    = vlSelf->io_in_weight_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_5 
                    = vlSelf->io_in_weight_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_6 
                    = vlSelf->io_in_weight_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_7 
                    = vlSelf->io_in_weight_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_8 
                    = vlSelf->io_in_weight_8;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_9 
                    = vlSelf->io_in_weight_9;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_10 
                    = vlSelf->io_in_weight_10;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_11 
                    = vlSelf->io_in_weight_11;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_12 
                    = vlSelf->io_in_weight_12;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_13 
                    = vlSelf->io_in_weight_13;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_14 
                    = vlSelf->io_in_weight_14;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_15 
                    = vlSelf->io_in_weight_15;
            }
            if ((0xeU == (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__weightLoadIdx))) {
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_0 
                    = vlSelf->io_in_weight_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_1 
                    = vlSelf->io_in_weight_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_2 
                    = vlSelf->io_in_weight_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_3 
                    = vlSelf->io_in_weight_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_4 
                    = vlSelf->io_in_weight_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_5 
                    = vlSelf->io_in_weight_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_6 
                    = vlSelf->io_in_weight_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_7 
                    = vlSelf->io_in_weight_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_8 
                    = vlSelf->io_in_weight_8;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_9 
                    = vlSelf->io_in_weight_9;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_10 
                    = vlSelf->io_in_weight_10;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_11 
                    = vlSelf->io_in_weight_11;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_12 
                    = vlSelf->io_in_weight_12;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_13 
                    = vlSelf->io_in_weight_13;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_14 
                    = vlSelf->io_in_weight_14;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_15 
                    = vlSelf->io_in_weight_15;
            }
            if ((0xfU == (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__weightLoadIdx))) {
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_0 
                    = vlSelf->io_in_weight_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_1 
                    = vlSelf->io_in_weight_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_2 
                    = vlSelf->io_in_weight_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_3 
                    = vlSelf->io_in_weight_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_4 
                    = vlSelf->io_in_weight_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_5 
                    = vlSelf->io_in_weight_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_6 
                    = vlSelf->io_in_weight_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_7 
                    = vlSelf->io_in_weight_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_8 
                    = vlSelf->io_in_weight_8;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_9 
                    = vlSelf->io_in_weight_9;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_10 
                    = vlSelf->io_in_weight_10;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_11 
                    = vlSelf->io_in_weight_11;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_12 
                    = vlSelf->io_in_weight_12;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_13 
                    = vlSelf->io_in_weight_13;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_14 
                    = vlSelf->io_in_weight_14;
                vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_15 
                    = vlSelf->io_in_weight_15;
                __Vdly__TPU_top__DOT__orchestrator__DOT__weightLoadIdx = 0U;
            } else {
                __Vdly__TPU_top__DOT__orchestrator__DOT__weightLoadIdx 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT___weightLoadIdx_T_1;
            }
        }
    }
    if (__Vdlyvset__TPU_top__DOT__tileCtrlQueue__DOT__ram_fusion_req__v0) {
        vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__ram_fusion_req[__Vdlyvdim0__TPU_top__DOT__tileCtrlQueue__DOT__ram_fusion_req__v0] 
            = __Vdlyvval__TPU_top__DOT__tileCtrlQueue__DOT__ram_fusion_req__v0;
    }
    if (__Vdlyvset__TPU_top__DOT__tileCtrlQueue__DOT__ram_row_change_update__v0) {
        vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__ram_row_change_update[__Vdlyvdim0__TPU_top__DOT__tileCtrlQueue__DOT__ram_row_change_update__v0] 
            = __Vdlyvval__TPU_top__DOT__tileCtrlQueue__DOT__ram_row_change_update__v0;
    }
    vlSelf->TPU_top__DOT__accumulator__DOT__nextCompletedBank 
        = __Vdly__TPU_top__DOT__accumulator__DOT__nextCompletedBank;
    vlSelf->TPU_top__DOT__tileCtrlQueue__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__deq_ptr_value)));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_1_io_out_valid 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_1__DOT__validPipe_0));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2_io_out_valid 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2__DOT__validPipe_1));
    vlSelf->TPU_top__DOT__accumulator__DOT___GEN_46 
        = ((0xfU == (IData)(vlSelf->TPU_top__DOT__accumulator__DOT__read_ptr))
            ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->TPU_top__DOT__accumulator__DOT__read_ptr))));
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
    vlSelf->TPU_top__DOT__orchestrator__DOT__weightLoadIdx 
        = __Vdly__TPU_top__DOT__orchestrator__DOT__weightLoadIdx;
}

VL_INLINE_OPT void VTPU_top___024root___nba_sequent__TOP__1(VTPU_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPU_top___024root___nba_sequent__TOP__1\n"); );
    // Init
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
    // Body
    vlSelf->TPU_top__DOT__timer__DOT___io_fusion_req_T 
        = (0U == vlSelf->TPU_top__DOT__timer__DOT__fusionTileCountdown);
    vlSelf->TPU_top__DOT__timer__DOT___fusionTileCountdown_T_1 
        = (vlSelf->TPU_top__DOT__timer__DOT__fusionTileCountdown 
           - (IData)(1U));
    vlSelf->TPU_top__DOT__timer__DOT___nTileCounter_T_1 
        = ((IData)(1U) + vlSelf->TPU_top__DOT__timer__DOT__nTileCounter);
    vlSelf->TPU_top__DOT__timer__DOT__lastNTile = (vlSelf->TPU_top__DOT__timer__DOT__nTileCounter 
                                                   == 
                                                   (((0U 
                                                      == vlSelf->io_outColNum)
                                                      ? 1U
                                                      : vlSelf->io_outColNum) 
                                                    - (IData)(1U)));
    vlSelf->TPU_top__DOT__tileCtrlQueue__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__enq_ptr_value)));
    TPU_top__DOT__tileCtrlQueue__DOT__ptr_match = ((IData)(vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__deq_ptr_value) 
                                                   == (IData)(vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__enq_ptr_value));
    vlSelf->io_out_valid_0 = ((~ (IData)(vlSelf->io_stall)) 
                              & (IData)(vlSelf->TPU_top__DOT__accumulator__DOT__streamActive));
    vlSelf->TPU_top__DOT__orchestrator__DOT___weightLoadIdx_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__weightLoadIdx)));
    if (vlSelf->reset) {
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3__DOT__dataPipe_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3__DOT__validPipe_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3__DOT__updatePipe_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__dataPipe_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__validPipe_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__updatePipe_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__dataPipe_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__validPipe_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__updatePipe_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__dataPipe_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__validPipe_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__updatePipe_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__dataPipe_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__validPipe_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__updatePipe_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_6 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_6 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_6 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_7 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_7 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_7 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_8 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_8 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_8 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_9 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_9 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_9 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_10 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_10 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_10 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_11 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_11 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_11 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_12 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_12 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_12 = 0U;
        vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_13_r = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_12__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_12__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_12__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_12__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_12__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_12__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_12__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_12__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_12__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_12__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_12__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_12__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_12__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_12__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_12__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_12__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_13_r = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_13__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_13__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_13__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_13__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_13__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_13__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_13__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_13__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_13__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_13__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_13__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_13__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_13__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_13__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_13__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_13__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__dataPipe_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__validPipe_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__updatePipe_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__dataPipe_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__validPipe_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__updatePipe_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__dataPipe_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__validPipe_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__updatePipe_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__dataPipe_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__validPipe_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__updatePipe_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_6 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_6 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_6 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_7 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_7 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_7 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_8 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_8 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_8 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_9 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_9 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_9 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_10 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_10 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_10 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_11 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_11 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_11 = 0U;
        vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_12_r = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_11__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_11__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_11__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_11__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_11__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_11__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_11__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_11__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_11__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_11__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_11__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_11__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_11__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_11__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_11__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_11__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_12_r = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_12__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_12__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_12__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_12__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_12__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_12__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_12__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_12__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_12__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_12__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_12__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_12__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_12__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_12__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_12__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_12__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__dataPipe_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__validPipe_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__updatePipe_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__dataPipe_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__validPipe_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__updatePipe_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__dataPipe_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__validPipe_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__updatePipe_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_6 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_6 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_6 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_7 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_7 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_7 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_8 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_8 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_8 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_9 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_9 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_9 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_10 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_10 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_10 = 0U;
        vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_11_r = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_10__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_10__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_10__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_10__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_10__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_10__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_10__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_10__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_10__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_10__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_10__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_10__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_10__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_10__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_10__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_10__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_11_r = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_11__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_11__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_11__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_11__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_11__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_11__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_11__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_11__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_11__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_11__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_11__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_11__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_11__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_11__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_11__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_11__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__dataPipe_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__validPipe_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__updatePipe_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__dataPipe_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__validPipe_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__updatePipe_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_6 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_6 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_6 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_7 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_7 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_7 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_8 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_8 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_8 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_9 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_9 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_9 = 0U;
        vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_10_r = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_9__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_9__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_9__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_9__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_9__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_9__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_9__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_9__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_9__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_9__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_9__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_9__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_9__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_9__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_9__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_9__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_10_r = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_10__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_10__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_10__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_10__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_10__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_10__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_10__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_10__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_10__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_10__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_10__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_10__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_10__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_10__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_10__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_10__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__dataPipe_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__validPipe_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__updatePipe_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_6 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_6 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_6 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_7 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_7 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_7 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_8 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_8 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_8 = 0U;
        vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_9_r = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_8__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_8__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_8__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_8__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_8__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_8__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_8__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_8__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_8__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_8__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_8__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_8__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_8__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_8__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_8__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_8__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_9_r = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_9__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_9__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_9__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_9__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_9__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_9__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_9__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_9__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_9__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_9__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_9__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_9__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_9__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_9__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_9__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_9__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_6 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_6 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_6 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_7 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_7 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_7 = 0U;
        vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_8_r = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_7__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_7__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_7__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_7__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_7__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_7__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_7__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_7__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_7__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_7__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_7__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_7__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_7__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_7__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_7__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_7__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_8_r = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_8__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_8__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_8__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_8__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_8__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_8__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_8__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_8__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_8__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_8__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_8__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_8__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_8__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_8__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_8__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_8__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_6 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_6 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_6 = 0U;
        vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_7_r = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_6__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_6__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_6__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_6__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_6__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_6__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_6__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_6__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_6__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_6__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_6__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_6__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_6__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_6__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_6__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_6__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_7_r = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_7__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_7__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_7__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_7__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_7__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_7__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_7__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_7__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_7__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_7__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_7__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_7__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_7__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_7__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_7__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_7__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_5 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_5 = 0U;
        vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_6_r = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_5__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_5__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_5__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_5__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_5__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_5__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_5__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_5__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_5__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_5__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_5__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_5__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_5__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_5__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_5__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_5__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_6_r = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_6__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_6__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_6__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_6__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_6__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_6__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_6__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_6__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_6__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_6__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_6__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_6__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_6__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_6__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_6__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_6__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_4 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_4 = 0U;
        vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_5_r = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_4__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_4__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_4__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_4__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_4__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_4__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_4__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_4__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_4__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_4__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_4__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_4__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_4__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_4__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_4__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_4__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_5_r = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_5__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_5__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_5__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_5__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_5__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_5__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_5__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_5__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_5__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_5__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_5__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_5__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_5__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_5__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_5__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_5__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_3 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_3 = 0U;
        vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_4_r = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_3__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_3__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_3__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_3__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_3__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_3__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_3__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_3__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_3__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_3__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_3__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_3__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_3__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_3__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_3__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_3__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_4_r = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_4__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_4__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_4__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_4__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_4__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_4__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_4__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_4__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_4__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_4__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_4__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_4__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_4__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_4__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_4__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_4__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_2 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_2 = 0U;
        vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_3_r = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_2__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_2__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_2__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_2__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_2__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_2__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_2__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_2__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_2__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_2__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_2__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_2__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_2__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_2__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_2__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_2__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_3_r = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_3__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_3__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_3__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_3__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_3__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_3__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_3__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_3__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_3__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_3__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_3__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_3__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_3__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_3__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_3__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_3__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_1 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_1 = 0U;
        vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_2_r = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_1__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_1__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_1__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_1__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_1__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_1__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_1__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_1__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_1__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_1__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_1__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_1__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_1__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_1__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_1__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_1__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_2_r = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_2__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_2__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_2__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_2__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_2__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_2__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_2__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_2__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_2__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_2__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_2__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_2__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_2__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_2__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_2__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_2__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_0 = 0U;
        vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_0 = 0U;
        vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_1_r = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_0__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_0__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_0__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_0__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_0__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_0__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_0__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_0__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_0__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_0__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_0__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_0__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_0__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_0__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_0__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_0__DOT__outInReg = 0U;
        vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_1_r = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_1__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_1__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_1__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_1__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_1__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_1__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_1__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_1__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_1__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_1__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_1__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_1__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_1__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_1__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_1__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_1__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__timer__DOT__kTileCounter = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_0__DOT__outValidReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_0_0__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_15_0__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_14_0__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_13_0__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_12_0__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_11_0__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_10_0__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_9_0__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_8_0__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_7_0__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_6_0__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_5_0__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_4_0__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_3_0__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_2_0__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__mxu__DOT__macs_1_0__DOT__outWeightUpdateReg = 0U;
        vlSelf->TPU_top__DOT__timer__DOT__outputRowCounter = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->io_stall)))) {
            if (vlSelf->io_input_valid) {
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3__DOT__validPipe_0 = 1U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3__DOT__updatePipe_0 
                    = vlSelf->io_input_tile_start;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__dataPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__dataPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__validPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__validPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__updatePipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__updatePipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__dataPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__dataPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__validPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__validPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__updatePipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__updatePipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__dataPipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__dataPipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__validPipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__validPipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__updatePipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__updatePipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__dataPipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__dataPipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__validPipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__validPipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__updatePipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__updatePipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_6 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_6 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_6 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_7 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_7 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_7 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_8 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_8 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_8 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_9 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_8;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_9 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_8;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_9 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_8;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_10 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_9;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_10 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_9;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_10 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_9;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_11 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_10;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_11 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_10;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_11 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_10;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_12 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_11;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_12 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_11;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_12 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_11;
                vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_13_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_12_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_12__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_11__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_12__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_11__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_12__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_11__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_12__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_11__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_12__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_11__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_12__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_11__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_12__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_11__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_12__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_11__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_12__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_11__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_12__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_11__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_12__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_11__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_12__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_11__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_12__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_11__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_12__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_11__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_12__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_11__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_12__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_11__DOT__outInReg;
                vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_13_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_12_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_13__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_12__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_13__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_12__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_13__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_12__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_13__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_12__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_13__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_12__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_13__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_12__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_13__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_12__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_13__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_12__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_13__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_12__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_13__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_12__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_13__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_12__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_13__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_12__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_13__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_12__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_13__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_12__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_13__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_12__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_13__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_12__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__validPipe_0 = 1U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__updatePipe_0 
                    = vlSelf->io_input_tile_start;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__dataPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__dataPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__validPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__validPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__updatePipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__updatePipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__dataPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__dataPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__validPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__validPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__updatePipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__updatePipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__dataPipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__dataPipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__validPipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__validPipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__updatePipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__updatePipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_6 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_6 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_6 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_7 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_7 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_7 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_8 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_8 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_8 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_9 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_8;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_9 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_8;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_9 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_8;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_10 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_9;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_10 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_9;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_10 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_9;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_11 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_10;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_11 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_10;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_11 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_10;
                vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_12_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_11_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_11__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_10__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_11__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_10__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_11__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_10__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_11__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_10__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_11__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_10__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_11__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_10__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_11__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_10__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_11__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_10__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_11__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_10__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_11__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_10__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_11__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_10__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_11__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_10__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_11__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_10__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_11__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_10__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_11__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_10__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_11__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_10__DOT__outInReg;
                vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_12_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_11_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_12__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_11__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_12__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_11__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_12__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_11__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_12__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_11__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_12__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_11__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_12__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_11__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_12__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_11__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_12__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_11__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_12__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_11__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_12__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_11__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_12__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_11__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_12__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_11__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_12__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_11__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_12__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_11__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_12__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_11__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_12__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_11__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__validPipe_0 = 1U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__updatePipe_0 
                    = vlSelf->io_input_tile_start;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__dataPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__dataPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__validPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__validPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__updatePipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__updatePipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__dataPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__dataPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__validPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__validPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__updatePipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__updatePipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_6 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_6 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_6 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_7 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_7 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_7 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_8 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_8 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_8 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_9 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_8;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_9 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_8;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_9 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_8;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_10 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_9;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_10 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_9;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_10 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_9;
                vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_11_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_10_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_10__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_9__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_10__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_9__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_10__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_9__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_10__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_9__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_10__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_9__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_10__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_9__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_10__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_9__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_10__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_9__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_10__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_9__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_10__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_9__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_10__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_9__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_10__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_9__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_10__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_9__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_10__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_9__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_10__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_9__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_10__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_9__DOT__outInReg;
                vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_11_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_10_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_11__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_10__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_11__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_10__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_11__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_10__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_11__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_10__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_11__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_10__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_11__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_10__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_11__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_10__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_11__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_10__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_11__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_10__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_11__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_10__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_11__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_10__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_11__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_10__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_11__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_10__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_11__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_10__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_11__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_10__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_11__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_10__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__validPipe_0 = 1U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__updatePipe_0 
                    = vlSelf->io_input_tile_start;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__dataPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__dataPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__validPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__validPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__updatePipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__updatePipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_6 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_6 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_6 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_7 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_7 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_7 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_8 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_8 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_8 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_9 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_8;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_9 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_8;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_9 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_8;
                vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_10_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_9_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_9__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_8__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_9__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_8__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_9__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_8__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_9__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_8__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_9__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_8__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_9__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_8__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_9__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_8__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_9__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_8__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_9__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_8__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_9__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_8__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_9__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_8__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_9__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_8__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_9__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_8__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_9__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_8__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_9__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_8__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_9__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_8__DOT__outInReg;
                vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_10_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_9_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_10__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_9__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_10__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_9__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_10__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_9__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_10__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_9__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_10__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_9__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_10__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_9__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_10__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_9__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_10__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_9__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_10__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_9__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_10__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_9__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_10__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_9__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_10__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_9__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_10__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_9__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_10__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_9__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_10__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_9__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_10__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_9__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__validPipe_0 = 1U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__updatePipe_0 
                    = vlSelf->io_input_tile_start;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_6 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_6 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_6 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_7 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_7 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_7 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_8 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_8 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_8 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_7;
                vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_9_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_8_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_8__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_7__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_8__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_7__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_8__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_7__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_8__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_7__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_8__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_7__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_8__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_7__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_8__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_7__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_8__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_7__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_8__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_7__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_8__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_7__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_8__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_7__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_8__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_7__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_8__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_7__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_8__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_7__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_8__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_7__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_8__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_7__DOT__outInReg;
                vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_9_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_8_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_9__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_8__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_9__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_8__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_9__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_8__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_9__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_8__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_9__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_8__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_9__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_8__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_9__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_8__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_9__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_8__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_9__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_8__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_9__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_8__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_9__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_8__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_9__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_8__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_9__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_8__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_9__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_8__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_9__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_8__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_9__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_8__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_0 = 1U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_0 
                    = vlSelf->io_input_tile_start;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_6 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_6 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_6 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_7 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_7 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_7 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_6;
                vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_8_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_7_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_7__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_6__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_7__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_6__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_7__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_6__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_7__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_6__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_7__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_6__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_7__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_6__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_7__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_6__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_7__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_6__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_7__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_6__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_7__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_6__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_7__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_6__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_7__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_6__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_7__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_6__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_7__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_6__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_7__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_6__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_7__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_6__DOT__outInReg;
                vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_8_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_7_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_8__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_7__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_8__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_7__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_8__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_7__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_8__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_7__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_8__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_7__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_8__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_7__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_8__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_7__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_8__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_7__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_8__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_7__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_8__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_7__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_8__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_7__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_8__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_7__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_8__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_7__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_8__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_7__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_8__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_7__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_8__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_7__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_0 = 1U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_0 
                    = vlSelf->io_input_tile_start;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_6 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_6 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_6 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_5;
                vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_7_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_6_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_6__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_5__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_6__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_5__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_6__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_5__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_6__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_5__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_6__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_5__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_6__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_5__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_6__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_5__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_6__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_5__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_6__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_5__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_6__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_5__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_6__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_5__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_6__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_5__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_6__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_5__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_6__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_5__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_6__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_5__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_6__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_5__DOT__outInReg;
                vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_7_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_6_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_7__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_6__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_7__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_6__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_7__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_6__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_7__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_6__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_7__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_6__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_7__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_6__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_7__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_6__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_7__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_6__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_7__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_6__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_7__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_6__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_7__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_6__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_7__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_6__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_7__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_6__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_7__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_6__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_7__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_6__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_7__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_6__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_0 = 1U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_0 
                    = vlSelf->io_input_tile_start;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_4;
                vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_6_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_5_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_5__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_4__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_5__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_4__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_5__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_4__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_5__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_4__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_5__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_4__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_5__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_4__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_5__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_4__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_5__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_4__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_5__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_4__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_5__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_4__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_5__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_4__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_5__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_4__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_5__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_4__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_5__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_4__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_5__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_4__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_5__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_4__DOT__outInReg;
                vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_6_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_5_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_6__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_5__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_6__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_5__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_6__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_5__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_6__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_5__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_6__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_5__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_6__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_5__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_6__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_5__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_6__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_5__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_6__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_5__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_6__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_5__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_6__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_5__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_6__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_5__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_6__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_5__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_6__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_5__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_6__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_5__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_6__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_5__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_0 = 1U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_0 
                    = vlSelf->io_input_tile_start;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_3;
                vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_5_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_4_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_4__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_3__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_4__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_3__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_4__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_3__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_4__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_3__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_4__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_3__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_4__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_3__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_4__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_3__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_4__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_3__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_4__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_3__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_4__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_3__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_4__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_3__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_4__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_3__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_4__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_3__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_4__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_3__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_4__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_3__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_4__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_3__DOT__outInReg;
                vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_5_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_4_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_5__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_4__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_5__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_4__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_5__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_4__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_5__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_4__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_5__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_4__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_5__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_4__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_5__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_4__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_5__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_4__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_5__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_4__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_5__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_4__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_5__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_4__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_5__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_4__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_5__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_4__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_5__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_4__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_5__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_4__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_5__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_4__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_0 = 1U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_0 
                    = vlSelf->io_input_tile_start;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_2;
                vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_4_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_3_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_3__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_2__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_3__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_2__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_3__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_2__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_3__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_2__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_3__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_2__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_3__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_2__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_3__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_2__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_3__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_2__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_3__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_2__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_3__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_2__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_3__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_2__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_3__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_2__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_3__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_2__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_3__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_2__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_3__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_2__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_3__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_2__DOT__outInReg;
                vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_4_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_3_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_4__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_3__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_4__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_3__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_4__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_3__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_4__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_3__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_4__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_3__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_4__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_3__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_4__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_3__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_4__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_3__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_4__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_3__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_4__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_3__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_4__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_3__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_4__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_3__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_4__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_3__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_4__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_3__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_4__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_3__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_4__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_3__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_0 = 1U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_0 
                    = vlSelf->io_input_tile_start;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_1;
                vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_3_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_2_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_2__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_1__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_2__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_1__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_2__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_1__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_2__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_1__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_2__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_1__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_2__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_1__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_2__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_1__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_2__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_1__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_2__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_1__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_2__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_1__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_2__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_1__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_2__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_1__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_2__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_1__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_2__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_1__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_2__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_1__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_2__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_1__DOT__outInReg;
                vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_3_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_2_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_3__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_2__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_3__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_2__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_3__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_2__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_3__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_2__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_3__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_2__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_3__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_2__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_3__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_2__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_3__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_2__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_3__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_2__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_3__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_2__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_3__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_2__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_3__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_2__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_3__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_2__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_3__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_2__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_3__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_2__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_3__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_2__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_0 = 1U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_0 
                    = vlSelf->io_input_tile_start;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3__DOT__dataPipe_0 
                    = vlSelf->io_in_input_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__dataPipe_0 
                    = vlSelf->io_in_input_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__dataPipe_0 
                    = vlSelf->io_in_input_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__dataPipe_0 
                    = vlSelf->io_in_input_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__dataPipe_0 
                    = vlSelf->io_in_input_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_0 
                    = vlSelf->io_in_input_8;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_0 
                    = vlSelf->io_in_input_9;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_0 
                    = vlSelf->io_in_input_10;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_0 
                    = vlSelf->io_in_input_11;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_0 
                    = vlSelf->io_in_input_12;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_0 
                    = vlSelf->io_in_input_13;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_0 
                    = vlSelf->io_in_input_14;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_0 
                    = vlSelf->io_in_input_15;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_0;
                vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_2_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_1_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_1__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_0__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_1__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_0__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_1__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_0__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_1__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_0__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_1__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_0__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_1__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_0__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_1__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_0__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_1__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_0__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_1__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_0__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_1__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_0__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_1__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_0__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_1__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_0__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_1__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_0__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_1__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_0__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_1__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_0__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_1__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_0__DOT__outInReg;
                vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_2_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_1_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_2__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_1__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_2__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_1__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_2__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_1__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_2__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_1__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_2__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_1__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_2__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_1__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_2__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_1__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_2__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_1__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_2__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_1__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_2__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_1__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_2__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_1__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_2__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_1__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_2__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_1__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_2__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_1__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_2__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_1__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_2__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_1__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_0 = 1U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_0 
                    = vlSelf->io_input_tile_start;
            } else {
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3__DOT__validPipe_0 = 0U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3__DOT__updatePipe_0 = 0U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__dataPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__dataPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__validPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__validPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__updatePipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__updatePipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__dataPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__dataPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__validPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__validPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__updatePipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__updatePipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__dataPipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__dataPipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__validPipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__validPipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__updatePipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__updatePipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__dataPipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__dataPipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__validPipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__validPipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__updatePipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__updatePipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_6 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_6 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_6 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_7 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_7 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_7 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_8 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_8 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_8 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_9 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_8;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_9 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_8;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_9 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_8;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_10 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_9;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_10 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_9;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_10 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_9;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_11 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_10;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_11 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_10;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_11 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_10;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_12 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_11;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_12 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_11;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_12 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_11;
                vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_13_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_12_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_12__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_11__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_12__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_11__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_12__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_11__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_12__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_11__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_12__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_11__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_12__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_11__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_12__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_11__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_12__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_11__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_12__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_11__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_12__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_11__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_12__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_11__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_12__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_11__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_12__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_11__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_12__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_11__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_12__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_11__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_12__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_11__DOT__outInReg;
                vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_13_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_12_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_13__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_12__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_13__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_12__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_13__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_12__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_13__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_12__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_13__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_12__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_13__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_12__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_13__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_12__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_13__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_12__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_13__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_12__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_13__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_12__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_13__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_12__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_13__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_12__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_13__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_12__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_13__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_12__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_13__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_12__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_13__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_12__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__validPipe_0 = 0U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__updatePipe_0 = 0U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__dataPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__dataPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__validPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__validPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__updatePipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__updatePipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__dataPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__dataPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__validPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__validPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__updatePipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__updatePipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__dataPipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__dataPipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__validPipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__validPipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__updatePipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__updatePipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_6 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_6 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_6 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_7 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_7 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_7 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_8 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_8 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_8 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_9 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_8;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_9 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_8;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_9 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_8;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_10 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_9;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_10 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_9;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_10 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_9;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_11 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_10;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_11 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_10;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_11 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_10;
                vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_12_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_11_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_11__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_10__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_11__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_10__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_11__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_10__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_11__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_10__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_11__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_10__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_11__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_10__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_11__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_10__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_11__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_10__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_11__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_10__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_11__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_10__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_11__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_10__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_11__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_10__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_11__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_10__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_11__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_10__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_11__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_10__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_11__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_10__DOT__outInReg;
                vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_12_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_11_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_12__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_11__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_12__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_11__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_12__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_11__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_12__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_11__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_12__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_11__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_12__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_11__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_12__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_11__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_12__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_11__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_12__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_11__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_12__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_11__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_12__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_11__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_12__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_11__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_12__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_11__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_12__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_11__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_12__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_11__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_12__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_11__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__validPipe_0 = 0U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__updatePipe_0 = 0U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__dataPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__dataPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__validPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__validPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__updatePipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__updatePipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__dataPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__dataPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__validPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__validPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__updatePipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__updatePipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_6 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_6 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_6 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_7 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_7 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_7 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_8 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_8 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_8 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_9 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_8;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_9 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_8;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_9 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_8;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_10 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_9;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_10 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_9;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_10 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_9;
                vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_11_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_10_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_10__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_9__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_10__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_9__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_10__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_9__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_10__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_9__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_10__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_9__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_10__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_9__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_10__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_9__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_10__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_9__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_10__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_9__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_10__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_9__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_10__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_9__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_10__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_9__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_10__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_9__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_10__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_9__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_10__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_9__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_10__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_9__DOT__outInReg;
                vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_11_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_10_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_11__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_10__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_11__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_10__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_11__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_10__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_11__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_10__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_11__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_10__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_11__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_10__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_11__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_10__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_11__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_10__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_11__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_10__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_11__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_10__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_11__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_10__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_11__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_10__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_11__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_10__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_11__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_10__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_11__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_10__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_11__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_10__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__validPipe_0 = 0U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__updatePipe_0 = 0U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__dataPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__dataPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__validPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__validPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__updatePipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__updatePipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_6 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_6 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_6 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_7 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_7 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_7 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_8 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_8 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_8 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_9 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_8;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_9 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_8;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_9 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_8;
                vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_10_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_9_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_9__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_8__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_9__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_8__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_9__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_8__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_9__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_8__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_9__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_8__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_9__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_8__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_9__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_8__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_9__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_8__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_9__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_8__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_9__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_8__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_9__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_8__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_9__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_8__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_9__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_8__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_9__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_8__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_9__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_8__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_9__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_8__DOT__outInReg;
                vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_10_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_9_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_10__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_9__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_10__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_9__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_10__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_9__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_10__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_9__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_10__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_9__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_10__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_9__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_10__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_9__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_10__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_9__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_10__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_9__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_10__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_9__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_10__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_9__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_10__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_9__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_10__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_9__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_10__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_9__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_10__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_9__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_10__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_9__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__validPipe_0 = 0U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__updatePipe_0 = 0U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_6 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_6 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_6 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_7 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_7 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_7 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_8 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_8 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_7;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_8 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_7;
                vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_9_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_8_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_8__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_7__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_8__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_7__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_8__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_7__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_8__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_7__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_8__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_7__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_8__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_7__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_8__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_7__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_8__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_7__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_8__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_7__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_8__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_7__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_8__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_7__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_8__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_7__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_8__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_7__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_8__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_7__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_8__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_7__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_8__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_7__DOT__outInReg;
                vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_9_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_8_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_9__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_8__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_9__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_8__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_9__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_8__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_9__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_8__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_9__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_8__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_9__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_8__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_9__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_8__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_9__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_8__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_9__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_8__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_9__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_8__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_9__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_8__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_9__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_8__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_9__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_8__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_9__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_8__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_9__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_8__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_9__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_8__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_0 = 0U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_0 = 0U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_6 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_6 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_6 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_7 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_7 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_6;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_7 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_6;
                vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_8_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_7_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_7__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_6__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_7__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_6__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_7__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_6__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_7__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_6__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_7__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_6__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_7__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_6__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_7__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_6__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_7__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_6__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_7__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_6__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_7__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_6__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_7__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_6__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_7__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_6__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_7__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_6__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_7__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_6__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_7__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_6__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_7__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_6__DOT__outInReg;
                vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_8_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_7_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_8__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_7__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_8__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_7__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_8__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_7__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_8__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_7__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_8__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_7__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_8__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_7__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_8__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_7__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_8__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_7__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_8__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_7__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_8__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_7__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_8__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_7__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_8__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_7__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_8__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_7__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_8__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_7__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_8__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_7__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_8__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_7__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_0 = 0U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_0 = 0U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_6 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_6 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_5;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_6 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_5;
                vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_7_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_6_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_6__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_5__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_6__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_5__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_6__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_5__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_6__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_5__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_6__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_5__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_6__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_5__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_6__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_5__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_6__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_5__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_6__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_5__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_6__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_5__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_6__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_5__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_6__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_5__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_6__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_5__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_6__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_5__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_6__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_5__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_6__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_5__DOT__outInReg;
                vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_7_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_6_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_7__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_6__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_7__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_6__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_7__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_6__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_7__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_6__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_7__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_6__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_7__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_6__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_7__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_6__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_7__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_6__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_7__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_6__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_7__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_6__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_7__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_6__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_7__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_6__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_7__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_6__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_7__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_6__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_7__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_6__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_7__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_6__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_0 = 0U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_0 = 0U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_4;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_5 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_4;
                vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_6_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_5_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_5__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_4__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_5__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_4__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_5__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_4__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_5__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_4__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_5__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_4__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_5__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_4__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_5__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_4__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_5__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_4__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_5__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_4__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_5__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_4__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_5__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_4__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_5__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_4__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_5__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_4__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_5__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_4__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_5__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_4__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_5__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_4__DOT__outInReg;
                vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_6_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_5_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_6__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_5__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_6__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_5__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_6__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_5__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_6__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_5__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_6__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_5__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_6__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_5__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_6__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_5__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_6__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_5__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_6__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_5__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_6__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_5__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_6__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_5__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_6__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_5__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_6__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_5__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_6__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_5__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_6__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_5__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_6__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_5__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_0 = 0U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_0 = 0U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_3;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_4 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_3;
                vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_5_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_4_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_4__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_3__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_4__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_3__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_4__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_3__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_4__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_3__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_4__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_3__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_4__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_3__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_4__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_3__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_4__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_3__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_4__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_3__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_4__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_3__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_4__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_3__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_4__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_3__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_4__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_3__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_4__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_3__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_4__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_3__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_4__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_3__DOT__outInReg;
                vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_5_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_4_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_5__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_4__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_5__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_4__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_5__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_4__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_5__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_4__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_5__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_4__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_5__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_4__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_5__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_4__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_5__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_4__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_5__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_4__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_5__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_4__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_5__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_4__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_5__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_4__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_5__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_4__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_5__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_4__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_5__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_4__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_5__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_4__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_0 = 0U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_0 = 0U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_2;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_3 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_2;
                vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_4_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_3_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_3__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_2__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_3__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_2__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_3__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_2__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_3__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_2__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_3__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_2__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_3__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_2__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_3__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_2__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_3__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_2__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_3__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_2__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_3__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_2__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_3__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_2__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_3__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_2__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_3__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_2__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_3__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_2__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_3__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_2__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_3__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_2__DOT__outInReg;
                vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_4_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_3_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_4__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_3__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_4__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_3__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_4__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_3__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_4__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_3__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_4__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_3__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_4__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_3__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_4__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_3__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_4__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_3__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_4__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_3__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_4__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_3__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_4__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_3__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_4__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_3__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_4__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_3__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_4__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_3__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_4__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_3__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_4__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_3__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_0 = 0U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_0 = 0U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_1;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_2 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_1;
                vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_3_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_2_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_2__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_1__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_2__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_1__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_2__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_1__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_2__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_1__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_2__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_1__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_2__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_1__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_2__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_1__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_2__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_1__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_2__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_1__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_2__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_1__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_2__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_1__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_2__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_1__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_2__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_1__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_2__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_1__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_2__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_1__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_2__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_1__DOT__outInReg;
                vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_3_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_2_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_3__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_2__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_3__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_2__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_3__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_2__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_3__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_2__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_3__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_2__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_3__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_2__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_3__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_2__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_3__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_2__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_3__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_2__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_3__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_2__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_3__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_2__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_3__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_2__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_3__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_2__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_3__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_2__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_3__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_2__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_3__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_2__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_0 = 0U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_0 = 0U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3__DOT__dataPipe_0 = 0U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__dataPipe_0 = 0U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__dataPipe_0 = 0U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__dataPipe_0 = 0U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__dataPipe_0 = 0U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_0 = 0U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_0 = 0U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_0 = 0U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_0 = 0U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_0 = 0U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_0 = 0U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_0 = 0U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_0 = 0U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_0;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_1 
                    = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_0;
                vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_2_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_1_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_1__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_0__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_1__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_0__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_1__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_0__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_1__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_0__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_1__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_0__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_1__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_0__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_1__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_0__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_1__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_0__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_1__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_0__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_1__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_0__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_1__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_0__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_1__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_0__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_1__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_0__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_1__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_0__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_1__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_0__DOT__outInReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_1__DOT__outInReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_0__DOT__outInReg;
                vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_2_r 
                    = vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_1_r;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_0_2__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_1__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_15_2__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_1__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_14_2__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_1__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_13_2__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_1__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_12_2__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_1__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_11_2__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_1__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_10_2__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_1__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_9_2__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_1__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_8_2__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_1__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_7_2__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_1__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_6_2__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_1__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_5_2__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_1__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_4_2__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_1__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_3_2__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_1__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_2_2__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_1__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__mxu__DOT__macs_1_2__DOT__outWeightUpdateReg 
                    = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_1__DOT__outWeightUpdateReg;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_0 = 0U;
                vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_0 = 0U;
            }
            vlSelf->TPU_top__DOT__accumulator__DOT__firstByCol_1_r 
                = (0U == vlSelf->TPU_top__DOT__timer__DOT__kTileCounter);
            vlSelf->TPU_top__DOT__mxu__DOT__macs_0_0__DOT__outInReg 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_0_io_out_data;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_15_0__DOT__outInReg 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15_io_out_data;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_14_0__DOT__outInReg 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14_io_out_data;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_13_0__DOT__outInReg 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13_io_out_data;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_12_0__DOT__outInReg 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12_io_out_data;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_11_0__DOT__outInReg 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11_io_out_data;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_10_0__DOT__outInReg 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10_io_out_data;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_9_0__DOT__outInReg 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9_io_out_data;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_8_0__DOT__outInReg 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8_io_out_data;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_7_0__DOT__outInReg 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7_io_out_data;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_6_0__DOT__outInReg 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6_io_out_data;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_5_0__DOT__outInReg 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5_io_out_data;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_4_0__DOT__outInReg 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4_io_out_data;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_3_0__DOT__outInReg 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3_io_out_data;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_2_0__DOT__outInReg 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2_io_out_data;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_1_0__DOT__outInReg 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_1_io_out_data;
            vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_1_r 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_0__DOT__outValidReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_0_1__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_0_0__DOT__outWeightUpdateReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_15_1__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_15_0__DOT__outWeightUpdateReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_14_1__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_14_0__DOT__outWeightUpdateReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_13_1__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_13_0__DOT__outWeightUpdateReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_12_1__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_12_0__DOT__outWeightUpdateReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_11_1__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_11_0__DOT__outWeightUpdateReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_10_1__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_10_0__DOT__outWeightUpdateReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_9_1__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_9_0__DOT__outWeightUpdateReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_8_1__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_8_0__DOT__outWeightUpdateReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_7_1__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_7_0__DOT__outWeightUpdateReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_6_1__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_6_0__DOT__outWeightUpdateReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_5_1__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_5_0__DOT__outWeightUpdateReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_4_1__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_4_0__DOT__outWeightUpdateReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_3_1__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_3_0__DOT__outWeightUpdateReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_2_1__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_2_0__DOT__outWeightUpdateReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_1_1__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__mxu__DOT__macs_1_0__DOT__outWeightUpdateReg;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_15_0__DOT__outValidReg 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15_io_out_valid;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_0_0__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_0_io_out_weight_update;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_15_0__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15_io_out_weight_update;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_14_0__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14_io_out_weight_update;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_13_0__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13_io_out_weight_update;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_12_0__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12_io_out_weight_update;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_11_0__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11_io_out_weight_update;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_10_0__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10_io_out_weight_update;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_9_0__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9_io_out_weight_update;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_8_0__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8_io_out_weight_update;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_7_0__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7_io_out_weight_update;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_6_0__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6_io_out_weight_update;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_5_0__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5_io_out_weight_update;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_4_0__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4_io_out_weight_update;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_3_0__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3_io_out_weight_update;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_2_0__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2_io_out_weight_update;
            vlSelf->TPU_top__DOT__mxu__DOT__macs_1_0__DOT__outWeightUpdateReg 
                = vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_1_io_out_weight_update;
        }
        if (vlSelf->TPU_top__DOT__timer__DOT__fire) {
            if ((0xfU == (IData)(vlSelf->TPU_top__DOT__timer__DOT__outputRowCounter))) {
                vlSelf->TPU_top__DOT__timer__DOT__kTileCounter 
                    = ((IData)(vlSelf->TPU_top__DOT__timer__DOT__lastKTile)
                        ? 0U : vlSelf->TPU_top__DOT__timer__DOT___kTileCounter_T_1);
            }
            vlSelf->TPU_top__DOT__timer__DOT__outputRowCounter 
                = ((IData)(vlSelf->TPU_top__DOT__timer__DOT__lastRow)
                    ? 0U : (IData)(vlSelf->TPU_top__DOT__timer__DOT___outputRowCounter_T_1));
        }
    }
    TPU_top__DOT__mxu__DOT__macs_0_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_0)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_15__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_1_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_1)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_15__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_2_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_2)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_15__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_3_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_3)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_15__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_4_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_4)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_15__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_5_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_5)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_15__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_6_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_6)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_15__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_7_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_7)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_15__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_8_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_8)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_15__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_9_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_9)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_15__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_10_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_10)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_15__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_11_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_11)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_15__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_12_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_12)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_15__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_13_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_13)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_15__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_14_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_14)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_15__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_15_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_15_15)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_15__DOT__active_weight))))));
    vlSelf->__VdfgTmp_h3681e6d6__0 = ((IData)(TPU_top__DOT__tileCtrlQueue__DOT__ptr_match) 
                                      & (IData)(vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__maybe_full));
    vlSelf->__VdfgTmp_hd2a28677__0 = ((~ (IData)(vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__maybe_full)) 
                                      & (IData)(TPU_top__DOT__tileCtrlQueue__DOT__ptr_match));
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
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_15__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(TPU_top__DOT__mxu__DOT__macs_0_15__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(TPU_top__DOT__mxu__DOT__macs_0_15__DOT__mul_res))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_0_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_1_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_1_15__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_1_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_2_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_2_15__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_2_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_3_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_3_15__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_3_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_4_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_4_15__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_4_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_5_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_5_15__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_5_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_6_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_6_15__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_6_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_7_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_7_15__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_7_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_8_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_8_15__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_8_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_9_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_9_15__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_9_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_10_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_10_15__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_10_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_11_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_11_15__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_11_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_12_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_12_15__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_12_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_13_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_13_15__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_13_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_14_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_14_15__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_14_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_15_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_15_15__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__do_deq 
        = ((~ (IData)(vlSelf->__VdfgTmp_hd2a28677__0)) 
           & (IData)(vlSelf->TPU_top__DOT__accumulator_io_out_tile_start));
    vlSelf->io_out_meta_row_change_update = ((IData)(vlSelf->TPU_top__DOT__accumulator_io_out_tile_start) 
                                             & ((~ (IData)(vlSelf->__VdfgTmp_hd2a28677__0)) 
                                                & vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__ram_row_change_update
                                                [vlSelf->TPU_top__DOT__tileCtrlQueue__DOT__deq_ptr_value]));
    TPU_top__DOT__mxu__DOT__macs_0_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_0)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_14__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_15_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_15)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_14__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_14_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_14)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_14__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_13_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_13)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_14__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_12_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_12)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_14__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_11_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_11)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_14__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_10_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_10)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_14__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_9_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_9)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_14__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_8_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_8)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_14__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_7_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_7)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_14__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_6_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_6)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_14__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_5_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_5)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_14__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_4_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_4)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_14__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_3_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_3)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_14__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_2_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_2)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_14__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_1_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_14_1)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_14__DOT__active_weight))))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_14__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(TPU_top__DOT__mxu__DOT__macs_0_14__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(TPU_top__DOT__mxu__DOT__macs_0_14__DOT__mul_res))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_14_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_15_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_15_14__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_13_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_14_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_14_14__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_12_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_13_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_13_14__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_11_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_12_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_12_14__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_10_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_11_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_11_14__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_9_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_10_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_10_14__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_8_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_9_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_9_14__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_7_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_8_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_8_14__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_6_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_7_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_7_14__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_5_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_6_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_6_14__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_4_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_5_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_5_14__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_3_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_4_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_4_14__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_2_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_3_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_3_14__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_1_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_2_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_2_14__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_0_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_1_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_1_14__DOT__mul_res)))));
    TPU_top__DOT__mxu__DOT__macs_0_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_0)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_13__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_15_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_15)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_13__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_14_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_14)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_13__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_13_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_13)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_13__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_12_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_12)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_13__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_11_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_11)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_13__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_10_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_10)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_13__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_9_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_9)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_13__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_8_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_8)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_13__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_7_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_7)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_13__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_6_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_6)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_13__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_5_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_5)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_13__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_4_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_4)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_13__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_3_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_3)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_13__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_2_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_2)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_13__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_1_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_13_1)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_13__DOT__active_weight))))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_13__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(TPU_top__DOT__mxu__DOT__macs_0_13__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(TPU_top__DOT__mxu__DOT__macs_0_13__DOT__mul_res))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_14_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_15_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_15_13__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_13_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_14_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_14_13__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_12_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_13_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_13_13__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_11_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_12_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_12_13__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_10_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_11_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_11_13__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_9_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_10_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_10_13__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_8_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_9_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_9_13__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_7_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_8_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_8_13__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_6_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_7_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_7_13__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_5_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_6_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_6_13__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_4_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_5_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_5_13__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_3_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_4_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_4_13__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_2_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_3_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_3_13__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_1_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_2_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_2_13__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_0_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_1_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_1_13__DOT__mul_res)))));
    TPU_top__DOT__mxu__DOT__macs_0_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_0)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_12__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_15_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_15)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_12__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_14_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_14)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_12__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_13_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_13)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_12__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_12_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_12)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_12__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_11_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_11)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_12__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_10_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_10)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_12__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_9_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_9)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_12__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_8_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_8)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_12__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_7_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_7)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_12__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_6_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_6)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_12__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_5_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_5)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_12__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_4_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_4)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_12__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_3_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_3)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_12__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_2_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_2)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_12__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_1_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_12_1)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_12__DOT__active_weight))))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_12__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(TPU_top__DOT__mxu__DOT__macs_0_12__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(TPU_top__DOT__mxu__DOT__macs_0_12__DOT__mul_res))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_14_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_15_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_15_12__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_13_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_14_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_14_12__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_12_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_13_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_13_12__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_11_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_12_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_12_12__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_10_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_11_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_11_12__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_9_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_10_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_10_12__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_8_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_9_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_9_12__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_7_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_8_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_8_12__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_6_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_7_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_7_12__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_5_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_6_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_6_12__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_4_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_5_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_5_12__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_3_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_4_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_4_12__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_2_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_3_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_3_12__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_1_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_2_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_2_12__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_0_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_1_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_1_12__DOT__mul_res)))));
    TPU_top__DOT__mxu__DOT__macs_0_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_0)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_11__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_15_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_15)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_11__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_14_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_14)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_11__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_13_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_13)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_11__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_12_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_12)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_11__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_11_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_11)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_11__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_10_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_10)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_11__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_9_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_9)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_11__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_8_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_8)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_11__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_7_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_7)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_11__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_6_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_6)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_11__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_5_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_5)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_11__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_4_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_4)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_11__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_3_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_3)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_11__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_2_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_2)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_11__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_1_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_11_1)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_11__DOT__active_weight))))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_11__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(TPU_top__DOT__mxu__DOT__macs_0_11__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(TPU_top__DOT__mxu__DOT__macs_0_11__DOT__mul_res))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_14_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_15_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_15_11__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_13_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_14_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_14_11__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_12_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_13_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_13_11__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_11_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_12_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_12_11__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_10_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_11_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_11_11__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_9_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_10_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_10_11__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_8_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_9_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_9_11__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_7_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_8_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_8_11__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_6_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_7_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_7_11__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_5_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_6_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_6_11__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_4_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_5_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_5_11__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_3_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_4_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_4_11__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_2_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_3_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_3_11__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_1_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_2_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_2_11__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_0_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_1_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_1_11__DOT__mul_res)))));
    TPU_top__DOT__mxu__DOT__macs_0_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_0)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_10__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_15_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_15)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_10__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_14_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_14)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_10__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_13_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_13)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_10__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_12_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_12)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_10__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_11_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_11)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_10__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_10_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_10)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_10__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_9_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_9)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_10__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_8_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_8)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_10__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_7_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_7)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_10__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_6_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_6)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_10__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_5_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_5)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_10__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_4_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_4)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_10__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_3_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_3)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_10__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_2_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_2)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_10__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_1_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_10_1)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_10__DOT__active_weight))))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_10__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(TPU_top__DOT__mxu__DOT__macs_0_10__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(TPU_top__DOT__mxu__DOT__macs_0_10__DOT__mul_res))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_14_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_15_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_15_10__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_13_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_14_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_14_10__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_12_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_13_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_13_10__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_11_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_12_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_12_10__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_10_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_11_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_11_10__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_9_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_10_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_10_10__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_8_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_9_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_9_10__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_7_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_8_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_8_10__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_6_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_7_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_7_10__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_5_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_6_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_6_10__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_4_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_5_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_5_10__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_3_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_4_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_4_10__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_2_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_3_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_3_10__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_1_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_2_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_2_10__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_0_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_1_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_1_10__DOT__mul_res)))));
    TPU_top__DOT__mxu__DOT__macs_0_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_0)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_9__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_15_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_15)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_9__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_14_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_14)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_9__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_13_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_13)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_9__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_12_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_12)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_9__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_11_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_11)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_9__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_10_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_10)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_9__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_9_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_9)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_9__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_8_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_8)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_9__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_7_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_7)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_9__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_6_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_6)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_9__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_5_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_5)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_9__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_4_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_4)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_9__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_3_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_3)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_9__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_2_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_2)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_9__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_1_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_9_1)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_9__DOT__active_weight))))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_9__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(TPU_top__DOT__mxu__DOT__macs_0_9__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(TPU_top__DOT__mxu__DOT__macs_0_9__DOT__mul_res))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_14_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_15_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_15_9__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_13_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_14_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_14_9__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_12_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_13_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_13_9__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_11_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_12_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_12_9__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_10_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_11_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_11_9__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_9_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_10_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_10_9__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_8_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_9_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_9_9__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_7_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_8_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_8_9__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_6_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_7_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_7_9__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_5_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_6_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_6_9__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_4_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_5_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_5_9__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_3_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_4_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_4_9__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_2_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_3_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_3_9__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_1_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_2_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_2_9__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_0_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_1_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_1_9__DOT__mul_res)))));
    TPU_top__DOT__mxu__DOT__macs_0_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_0)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_8__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_15_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_15)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_8__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_14_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_14)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_8__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_13_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_13)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_8__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_12_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_12)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_8__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_11_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_11)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_8__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_10_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_10)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_8__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_9_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_9)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_8__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_8_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_8)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_8__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_7_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_7)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_8__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_6_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_6)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_8__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_5_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_5)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_8__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_4_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_4)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_8__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_3_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_3)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_8__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_2_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_2)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_8__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_1_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_8_1)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_8__DOT__active_weight))))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_8__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(TPU_top__DOT__mxu__DOT__macs_0_8__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(TPU_top__DOT__mxu__DOT__macs_0_8__DOT__mul_res))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_14_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_15_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_15_8__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_13_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_14_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_14_8__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_12_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_13_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_13_8__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_11_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_12_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_12_8__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_10_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_11_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_11_8__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_9_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_10_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_10_8__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_8_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_9_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_9_8__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_7_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_8_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_8_8__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_6_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_7_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_7_8__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_5_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_6_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_6_8__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_4_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_5_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_5_8__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_3_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_4_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_4_8__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_2_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_3_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_3_8__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_1_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_2_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_2_8__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_0_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_1_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_1_8__DOT__mul_res)))));
    TPU_top__DOT__mxu__DOT__macs_0_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_0)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_7__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_15_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_15)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_7__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_14_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_14)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_7__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_13_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_13)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_7__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_12_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_12)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_7__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_11_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_11)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_7__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_10_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_10)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_7__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_9_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_9)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_7__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_8_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_8)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_7__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_7_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_7)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_7__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_6_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_6)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_7__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_5_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_5)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_7__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_4_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_4)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_7__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_3_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_3)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_7__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_2_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_2)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_7__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_1_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_7_1)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_7__DOT__active_weight))))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_7__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(TPU_top__DOT__mxu__DOT__macs_0_7__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(TPU_top__DOT__mxu__DOT__macs_0_7__DOT__mul_res))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_14_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_15_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_15_7__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_13_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_14_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_14_7__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_12_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_13_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_13_7__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_11_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_12_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_12_7__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_10_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_11_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_11_7__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_9_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_10_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_10_7__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_8_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_9_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_9_7__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_7_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_8_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_8_7__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_6_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_7_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_7_7__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_5_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_6_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_6_7__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_4_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_5_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_5_7__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_3_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_4_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_4_7__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_2_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_3_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_3_7__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_1_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_2_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_2_7__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_0_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_1_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_1_7__DOT__mul_res)))));
    TPU_top__DOT__mxu__DOT__macs_0_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_0)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_6__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_15_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_15)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_6__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_14_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_14)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_6__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_13_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_13)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_6__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_12_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_12)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_6__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_11_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_11)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_6__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_10_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_10)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_6__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_9_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_9)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_6__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_8_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_8)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_6__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_7_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_7)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_6__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_6_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_6)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_6__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_5_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_5)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_6__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_4_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_4)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_6__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_3_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_3)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_6__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_2_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_2)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_6__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_1_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_6_1)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_6__DOT__active_weight))))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_6__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(TPU_top__DOT__mxu__DOT__macs_0_6__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(TPU_top__DOT__mxu__DOT__macs_0_6__DOT__mul_res))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_14_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_15_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_15_6__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_13_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_14_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_14_6__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_12_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_13_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_13_6__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_11_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_12_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_12_6__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_10_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_11_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_11_6__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_9_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_10_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_10_6__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_8_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_9_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_9_6__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_7_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_8_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_8_6__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_6_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_7_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_7_6__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_5_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_6_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_6_6__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_4_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_5_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_5_6__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_3_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_4_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_4_6__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_2_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_3_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_3_6__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_1_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_2_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_2_6__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_0_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_1_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_1_6__DOT__mul_res)))));
    TPU_top__DOT__mxu__DOT__macs_0_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_0)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_5__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_15_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_15)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_5__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_14_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_14)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_5__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_13_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_13)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_5__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_12_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_12)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_5__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_11_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_11)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_5__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_10_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_10)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_5__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_9_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_9)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_5__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_8_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_8)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_5__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_7_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_7)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_5__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_6_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_6)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_5__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_5_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_5)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_5__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_4_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_4)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_5__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_3_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_3)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_5__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_2_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_2)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_5__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_1_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_5_1)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_5__DOT__active_weight))))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_5__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(TPU_top__DOT__mxu__DOT__macs_0_5__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(TPU_top__DOT__mxu__DOT__macs_0_5__DOT__mul_res))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_14_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_15_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_15_5__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_13_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_14_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_14_5__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_12_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_13_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_13_5__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_11_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_12_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_12_5__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_10_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_11_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_11_5__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_9_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_10_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_10_5__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_8_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_9_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_9_5__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_7_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_8_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_8_5__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_6_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_7_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_7_5__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_5_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_6_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_6_5__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_4_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_5_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_5_5__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_3_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_4_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_4_5__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_2_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_3_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_3_5__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_1_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_2_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_2_5__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_0_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_1_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_1_5__DOT__mul_res)))));
    TPU_top__DOT__mxu__DOT__macs_0_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_0)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_4__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_15_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_15)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_4__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_14_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_14)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_4__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_13_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_13)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_4__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_12_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_12)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_4__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_11_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_11)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_4__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_10_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_10)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_4__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_9_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_9)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_4__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_8_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_8)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_4__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_7_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_7)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_4__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_6_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_6)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_4__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_5_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_5)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_4__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_4_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_4)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_4__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_3_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_3)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_4__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_2_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_2)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_4__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_1_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_4_1)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_4__DOT__active_weight))))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_4__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(TPU_top__DOT__mxu__DOT__macs_0_4__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(TPU_top__DOT__mxu__DOT__macs_0_4__DOT__mul_res))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_14_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_15_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_15_4__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_13_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_14_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_14_4__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_12_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_13_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_13_4__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_11_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_12_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_12_4__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_10_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_11_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_11_4__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_9_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_10_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_10_4__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_8_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_9_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_9_4__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_7_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_8_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_8_4__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_6_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_7_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_7_4__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_5_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_6_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_6_4__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_4_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_5_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_5_4__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_3_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_4_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_4_4__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_2_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_3_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_3_4__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_1_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_2_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_2_4__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_0_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_1_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_1_4__DOT__mul_res)))));
    TPU_top__DOT__mxu__DOT__macs_0_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_0)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_3__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_15_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_15)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_3__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_14_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_14)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_3__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_13_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_13)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_3__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_12_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_12)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_3__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_11_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_11)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_3__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_10_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_10)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_3__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_9_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_9)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_3__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_8_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_8)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_3__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_7_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_7)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_3__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_6_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_6)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_3__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_5_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_5)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_3__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_4_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_4)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_3__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_3_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_3)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_3__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_2_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_2)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_3__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_1_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_3_1)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_3__DOT__active_weight))))));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14_io_out_data 
        = ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14_io_out_valid)
            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_13)
            : 0U);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13_io_out_data 
        = ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13_io_out_valid)
            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_12)
            : 0U);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12_io_out_data 
        = ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12_io_out_valid)
            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_11)
            : 0U);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11_io_out_data 
        = ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11_io_out_valid)
            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_10)
            : 0U);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10_io_out_data 
        = ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10_io_out_valid)
            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_9)
            : 0U);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9_io_out_data 
        = ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9_io_out_valid)
            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_8)
            : 0U);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8_io_out_data 
        = ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8_io_out_valid)
            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_7)
            : 0U);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7_io_out_data 
        = ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7_io_out_valid)
            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__dataPipe_6)
            : 0U);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6_io_out_data 
        = ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6_io_out_valid)
            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__dataPipe_5)
            : 0U);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5_io_out_data 
        = ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5_io_out_valid)
            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__dataPipe_4)
            : 0U);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4_io_out_data 
        = ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4_io_out_valid)
            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__dataPipe_3)
            : 0U);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3_io_out_data 
        = ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3_io_out_valid)
            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3__DOT__dataPipe_2)
            : 0U);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2_io_out_data 
        = ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2_io_out_valid)
            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2__DOT__dataPipe_1)
            : 0U);
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_1_io_out_data 
        = ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_1_io_out_valid)
            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_1__DOT__dataPipe_0)
            : 0U);
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_3__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(TPU_top__DOT__mxu__DOT__macs_0_3__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(TPU_top__DOT__mxu__DOT__macs_0_3__DOT__mul_res))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_14_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_15_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_15_3__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_13_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_14_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_14_3__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_12_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_13_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_13_3__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_11_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_12_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_12_3__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_10_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_11_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_11_3__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_9_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_10_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_10_3__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_8_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_9_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_9_3__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_7_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_8_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_8_3__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_6_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_7_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_7_3__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_5_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_6_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_6_3__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_4_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_5_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_5_3__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_3_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_4_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_4_3__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_2_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_3_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_3_3__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_1_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_2_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_2_3__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_0_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_1_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_1_3__DOT__mul_res)))));
    TPU_top__DOT__mxu__DOT__macs_0_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_0)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_2__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_15_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_15)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_2__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_14_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_14)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_2__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_13_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_13)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_2__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_12_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_12)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_2__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_11_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_11)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_2__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_10_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_10)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_2__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_9_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_9)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_2__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_8_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_8)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_2__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_7_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_7)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_2__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_6_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_6)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_2__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_5_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_5)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_2__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_4_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_4)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_2__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_3_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_3)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_2__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_2_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_2)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_2__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_1_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_2_1)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_2__DOT__active_weight))))));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15_io_out_valid 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_14));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_2__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(TPU_top__DOT__mxu__DOT__macs_0_2__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(TPU_top__DOT__mxu__DOT__macs_0_2__DOT__mul_res))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_14_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_15_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_15_2__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_14));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_13_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_14_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_14_2__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_13));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_12_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_13_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_13_2__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_12));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_11_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_12_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_12_2__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_11));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_10_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_11_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_11_2__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_10));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_9_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_10_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_10_2__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_9));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_8_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_9_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_9_2__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_8));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_7_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_8_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_8_2__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_7));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_6_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_7_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_7_2__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7__DOT__updatePipe_6));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_5_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_6_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_6_2__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6__DOT__updatePipe_5));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_4_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_5_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_5_2__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5__DOT__updatePipe_4));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_3_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_4_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_4_2__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4__DOT__updatePipe_3));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_2_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_3_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_3_2__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3__DOT__updatePipe_2));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_1_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_2_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_2_2__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2__DOT__updatePipe_1));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_0_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_1_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_1_2__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_1_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_1__DOT__updatePipe_0));
    vlSelf->TPU_top__DOT__timer__DOT___kTileCounter_T_1 
        = ((IData)(1U) + vlSelf->TPU_top__DOT__timer__DOT__kTileCounter);
    vlSelf->TPU_top__DOT__timer__DOT__lastKTile = (vlSelf->TPU_top__DOT__timer__DOT__kTileCounter 
                                                   == 
                                                   (((0U 
                                                      == vlSelf->io_intermNum)
                                                      ? 1U
                                                      : vlSelf->io_intermNum) 
                                                    - (IData)(1U)));
    vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15_io_out_data 
        = ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15_io_out_valid)
            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_14)
            : 0U);
    TPU_top__DOT__mxu__DOT__macs_0_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_0)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_0_1__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_15_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_15)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_1__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_14_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_14)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_1__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_14_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_14_io_out_weight_update)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_14)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_14_0__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_13_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_13)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_1__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_13_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_13_io_out_weight_update)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_13)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_13_0__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_12_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_12)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_1__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_12_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_12_io_out_weight_update)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_12)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_12_0__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_11_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_11)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_1__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_11_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_11_io_out_weight_update)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_11)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_11_0__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_10_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_10)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_1__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_10_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_10_io_out_weight_update)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_10)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_10_0__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_9_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_9)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_1__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_9_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_9_io_out_weight_update)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_9)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_9_0__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_8_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_8)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_1__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_8_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_8_io_out_weight_update)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_8)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_8_0__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_7_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_7)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_1__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_7_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_7_io_out_weight_update)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_7)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_7_0__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_6_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_6)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_1__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_6_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_6_io_out_weight_update)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_6)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_6_0__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_5_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_5)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_1__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_5_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_5_io_out_weight_update)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_5)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_5_0__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_4_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_4)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_1__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_4_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_4_io_out_weight_update)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_4)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_4_0__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_3_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_3)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_1__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_3_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_3_io_out_weight_update)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_3)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_3_0__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_2_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_2)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_1__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_2_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_2_io_out_weight_update)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_2)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_2_0__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_1_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_1_1)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_1__DOT__active_weight))))));
    TPU_top__DOT__mxu__DOT__macs_1_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_1_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_1_io_out_weight_update)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_1)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_1_0__DOT__active_weight))))));
    vlSelf->TPU_top__DOT__timer__DOT__fire = ((~ (IData)(vlSelf->io_stall)) 
                                              & (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_0__DOT__outValidReg));
    TPU_top__DOT__mxu__DOT__macs_15_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__skewLanes_15_io_out_weight_update)
                                                            ? (IData)(vlSelf->TPU_top__DOT__orchestrator__DOT__shadowWeight_0_15)
                                                            : (IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_0__DOT__active_weight))))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_0_1__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(TPU_top__DOT__mxu__DOT__macs_0_1__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(TPU_top__DOT__mxu__DOT__macs_0_1__DOT__mul_res))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_14_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_15_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_15_1__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_13_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_14_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_14_1__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_14_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_13_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_14_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_14_0__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_12_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_13_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_13_1__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_13_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_12_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_13_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_13_0__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_11_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_12_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_12_1__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_12_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_11_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_12_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_12_0__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_10_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_11_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_11_1__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_11_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_10_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_11_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_11_0__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_9_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_10_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_10_1__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_10_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_9_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_10_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_10_0__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_8_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_9_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_9_1__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_9_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_8_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_9_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_9_0__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_7_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_8_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_8_1__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_8_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_7_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_8_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_8_0__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_6_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_7_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_7_1__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_7_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_6_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_7_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_7_0__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_5_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_6_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_6_1__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_6_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_5_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_6_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_6_0__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_4_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_5_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_5_1__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_5_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_4_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_5_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_5_0__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_3_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_4_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_4_1__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_4_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_3_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_4_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_4_0__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_2_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_3_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_3_1__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_3_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_2_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_3_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_3_0__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_1_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_2_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_2_1__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_2_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_1_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_2_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_2_0__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_0_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_1_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_1_1__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_1_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_0_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_1_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_1_0__DOT__mul_res)))));
    vlSelf->TPU_top__DOT__timer__DOT__lastRow = (0xfU 
                                                 == (IData)(vlSelf->TPU_top__DOT__timer__DOT__outputRowCounter));
    vlSelf->TPU_top__DOT__timer__DOT___outputRowCounter_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->TPU_top__DOT__timer__DOT__outputRowCounter)));
    vlSelf->TPU_top__DOT__mxu__DOT__macs_15_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->TPU_top__DOT__mxu__DOT__macs_14_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(TPU_top__DOT__mxu__DOT__macs_15_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(TPU_top__DOT__mxu__DOT__macs_15_0__DOT__mul_res)))));
}
