// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVPU1RouteHarness.h for the primary calling header

#include "VVPU1RouteHarness__pch.h"
#include "VVPU1RouteHarness__Syms.h"
#include "VVPU1RouteHarness___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VVPU1RouteHarness___024root___dump_triggers__stl(VVPU1RouteHarness___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VVPU1RouteHarness___024root___eval_triggers__stl(VVPU1RouteHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVPU1RouteHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVPU1RouteHarness___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VVPU1RouteHarness___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void VVPU1RouteHarness___024root___stl_sequent__TOP__0(VVPU1RouteHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVPU1RouteHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVPU1RouteHarness___024root___stl_sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ VPU1RouteHarness__DOT__qa__DOT___anyValid_T;
    VPU1RouteHarness__DOT__qa__DOT___anyValid_T = 0;
    SData/*15:0*/ __VdfgTmp_h3b9a44b6__0;
    __VdfgTmp_h3b9a44b6__0 = 0;
    // Body
    vlSelf->VPU1RouteHarness__DOT____VdfgTmp_ha4a0e0fa__0 
        = ((IData)(vlSelf->io_ub_valid) & (IData)(vlSelf->io_wb_valid));
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT___result_T_1 
        = (0x1ffU & (VL_EXTENDS_II(9,8, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s1A)) 
                     + VL_EXTENDS_II(9,8, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s1B))));
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__shifted 
        = (0xffffU & VL_SHIFTRS_III(16,16,5, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s2Result), (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s2Shift)));
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_1__DOT___result_T_1 
        = (0x1ffU & (VL_EXTENDS_II(9,8, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_1__DOT__s1A)) 
                     + VL_EXTENDS_II(9,8, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_1__DOT__s1B))));
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_1__DOT__shifted 
        = (0xffffU & VL_SHIFTRS_III(16,16,5, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_1__DOT__s2Result), (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s2Shift)));
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_2__DOT___result_T_1 
        = (0x1ffU & (VL_EXTENDS_II(9,8, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_2__DOT__s1A)) 
                     + VL_EXTENDS_II(9,8, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_2__DOT__s1B))));
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_2__DOT__shifted 
        = (0xffffU & VL_SHIFTRS_III(16,16,5, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_2__DOT__s2Result), (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s2Shift)));
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_3__DOT___result_T_1 
        = (0x1ffU & (VL_EXTENDS_II(9,8, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_3__DOT__s1A)) 
                     + VL_EXTENDS_II(9,8, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_3__DOT__s1B))));
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_3__DOT__shifted 
        = (0xffffU & VL_SHIFTRS_III(16,16,5, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_3__DOT__s2Result), (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s2Shift)));
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_4__DOT___result_T_1 
        = (0x1ffU & (VL_EXTENDS_II(9,8, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_4__DOT__s1A)) 
                     + VL_EXTENDS_II(9,8, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_4__DOT__s1B))));
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_4__DOT__shifted 
        = (0xffffU & VL_SHIFTRS_III(16,16,5, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_4__DOT__s2Result), (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s2Shift)));
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_5__DOT___result_T_1 
        = (0x1ffU & (VL_EXTENDS_II(9,8, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_5__DOT__s1A)) 
                     + VL_EXTENDS_II(9,8, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_5__DOT__s1B))));
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_5__DOT__shifted 
        = (0xffffU & VL_SHIFTRS_III(16,16,5, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_5__DOT__s2Result), (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s2Shift)));
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_6__DOT___result_T_1 
        = (0x1ffU & (VL_EXTENDS_II(9,8, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_6__DOT__s1A)) 
                     + VL_EXTENDS_II(9,8, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_6__DOT__s1B))));
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_6__DOT__shifted 
        = (0xffffU & VL_SHIFTRS_III(16,16,5, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_6__DOT__s2Result), (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s2Shift)));
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_7__DOT___result_T_1 
        = (0x1ffU & (VL_EXTENDS_II(9,8, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_7__DOT__s1A)) 
                     + VL_EXTENDS_II(9,8, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_7__DOT__s1B))));
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_7__DOT__shifted 
        = (0xffffU & VL_SHIFTRS_III(16,16,5, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_7__DOT__s2Result), (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s2Shift)));
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_8__DOT___result_T_1 
        = (0x1ffU & (VL_EXTENDS_II(9,8, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_8__DOT__s1A)) 
                     + VL_EXTENDS_II(9,8, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_8__DOT__s1B))));
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_8__DOT__shifted 
        = (0xffffU & VL_SHIFTRS_III(16,16,5, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_8__DOT__s2Result), (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s2Shift)));
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_9__DOT___result_T_1 
        = (0x1ffU & (VL_EXTENDS_II(9,8, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_9__DOT__s1A)) 
                     + VL_EXTENDS_II(9,8, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_9__DOT__s1B))));
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_9__DOT__shifted 
        = (0xffffU & VL_SHIFTRS_III(16,16,5, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_9__DOT__s2Result), (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s2Shift)));
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_10__DOT___result_T_1 
        = (0x1ffU & (VL_EXTENDS_II(9,8, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_10__DOT__s1A)) 
                     + VL_EXTENDS_II(9,8, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_10__DOT__s1B))));
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_10__DOT__shifted 
        = (0xffffU & VL_SHIFTRS_III(16,16,5, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_10__DOT__s2Result), (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s2Shift)));
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_11__DOT___result_T_1 
        = (0x1ffU & (VL_EXTENDS_II(9,8, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_11__DOT__s1A)) 
                     + VL_EXTENDS_II(9,8, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_11__DOT__s1B))));
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_11__DOT__shifted 
        = (0xffffU & VL_SHIFTRS_III(16,16,5, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_11__DOT__s2Result), (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s2Shift)));
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_12__DOT___result_T_1 
        = (0x1ffU & (VL_EXTENDS_II(9,8, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_12__DOT__s1A)) 
                     + VL_EXTENDS_II(9,8, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_12__DOT__s1B))));
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_12__DOT__shifted 
        = (0xffffU & VL_SHIFTRS_III(16,16,5, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_12__DOT__s2Result), (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s2Shift)));
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_13__DOT___result_T_1 
        = (0x1ffU & (VL_EXTENDS_II(9,8, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_13__DOT__s1A)) 
                     + VL_EXTENDS_II(9,8, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_13__DOT__s1B))));
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_13__DOT__shifted 
        = (0xffffU & VL_SHIFTRS_III(16,16,5, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_13__DOT__s2Result), (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s2Shift)));
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_14__DOT___result_T_1 
        = (0x1ffU & (VL_EXTENDS_II(9,8, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_14__DOT__s1A)) 
                     + VL_EXTENDS_II(9,8, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_14__DOT__s1B))));
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_14__DOT__shifted 
        = (0xffffU & VL_SHIFTRS_III(16,16,5, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_14__DOT__s2Result), (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s2Shift)));
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_15__DOT___result_T_1 
        = (0x1ffU & (VL_EXTENDS_II(9,8, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_15__DOT__s1A)) 
                     + VL_EXTENDS_II(9,8, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_15__DOT__s1B))));
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_15__DOT__shifted 
        = (0xffffU & VL_SHIFTRS_III(16,16,5, (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_15__DOT__s2Result), (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s2Shift)));
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT___io_out_tpu_valid_T 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s3Valid));
    __VdfgTmp_h3b9a44b6__0 = ((((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_15.__PVT__s1Valid) 
                                | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_15.__PVT__s2Valid) 
                                   | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_15.__PVT__s3Valid) 
                                      | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_15.__PVT__rawValid) 
                                         | (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_15.__PVT__holdValid))))) 
                               << 0xfU) | ((((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_14.__PVT__s1Valid) 
                                             | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_14.__PVT__s2Valid) 
                                                | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_14.__PVT__s3Valid) 
                                                   | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_14.__PVT__rawValid) 
                                                      | (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_14.__PVT__holdValid))))) 
                                            << 0xeU) 
                                           | ((((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_13.__PVT__s1Valid) 
                                                | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_13.__PVT__s2Valid) 
                                                   | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_13.__PVT__s3Valid) 
                                                      | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_13.__PVT__rawValid) 
                                                         | (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_13.__PVT__holdValid))))) 
                                               << 0xdU) 
                                              | ((((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_12.__PVT__s1Valid) 
                                                   | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_12.__PVT__s2Valid) 
                                                      | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_12.__PVT__s3Valid) 
                                                         | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_12.__PVT__rawValid) 
                                                            | (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_12.__PVT__holdValid))))) 
                                                  << 0xcU) 
                                                 | ((((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_11.__PVT__s1Valid) 
                                                      | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_11.__PVT__s2Valid) 
                                                         | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_11.__PVT__s3Valid) 
                                                            | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_11.__PVT__rawValid) 
                                                               | (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_11.__PVT__holdValid))))) 
                                                     << 0xbU) 
                                                    | ((((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_10.__PVT__s1Valid) 
                                                         | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_10.__PVT__s2Valid) 
                                                            | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_10.__PVT__s3Valid) 
                                                               | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_10.__PVT__rawValid) 
                                                                  | (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_10.__PVT__holdValid))))) 
                                                        << 0xaU) 
                                                       | ((((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_9.__PVT__s1Valid) 
                                                            | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_9.__PVT__s2Valid) 
                                                               | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_9.__PVT__s3Valid) 
                                                                  | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_9.__PVT__rawValid) 
                                                                     | (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_9.__PVT__holdValid))))) 
                                                           << 9U) 
                                                          | ((((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_8.__PVT__s1Valid) 
                                                               | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_8.__PVT__s2Valid) 
                                                                  | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_8.__PVT__s3Valid) 
                                                                     | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_8.__PVT__rawValid) 
                                                                        | (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_8.__PVT__holdValid))))) 
                                                              << 8U) 
                                                             | ((((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_7.__PVT__s1Valid) 
                                                                  | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_7.__PVT__s2Valid) 
                                                                     | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_7.__PVT__s3Valid) 
                                                                        | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_7.__PVT__rawValid) 
                                                                           | (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_7.__PVT__holdValid))))) 
                                                                 << 7U) 
                                                                | ((((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_6.__PVT__s1Valid) 
                                                                     | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_6.__PVT__s2Valid) 
                                                                        | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_6.__PVT__s3Valid) 
                                                                           | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_6.__PVT__rawValid) 
                                                                              | (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_6.__PVT__holdValid))))) 
                                                                    << 6U) 
                                                                   | ((((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_5.__PVT__s1Valid) 
                                                                        | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_5.__PVT__s2Valid) 
                                                                           | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_5.__PVT__s3Valid) 
                                                                              | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_5.__PVT__rawValid) 
                                                                                | (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_5.__PVT__holdValid))))) 
                                                                       << 5U) 
                                                                      | ((((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_4.__PVT__s1Valid) 
                                                                           | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_4.__PVT__s2Valid) 
                                                                              | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_4.__PVT__s3Valid) 
                                                                                | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_4.__PVT__rawValid) 
                                                                                | (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_4.__PVT__holdValid))))) 
                                                                          << 4U) 
                                                                         | ((((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_3.__PVT__s1Valid) 
                                                                              | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_3.__PVT__s2Valid) 
                                                                                | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_3.__PVT__s3Valid) 
                                                                                | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_3.__PVT__rawValid) 
                                                                                | (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_3.__PVT__holdValid))))) 
                                                                             << 3U) 
                                                                            | ((((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_2.__PVT__s1Valid) 
                                                                                | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_2.__PVT__s2Valid) 
                                                                                | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_2.__PVT__s3Valid) 
                                                                                | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_2.__PVT__rawValid) 
                                                                                | (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_2.__PVT__holdValid))))) 
                                                                                << 2U) 
                                                                               | ((((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_1.__PVT__s1Valid) 
                                                                                | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_1.__PVT__s2Valid) 
                                                                                | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_1.__PVT__s3Valid) 
                                                                                | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_1.__PVT__rawValid) 
                                                                                | (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_1.__PVT__holdValid))))) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_0.__PVT__s1Valid) 
                                                                                | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_0.__PVT__s2Valid) 
                                                                                | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_0.__PVT__s3Valid) 
                                                                                | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_0.__PVT__rawValid) 
                                                                                | (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_0.__PVT__holdValid))))))))))))))))))));
    vlSelf->VPU1RouteHarness__DOT__busy = (0U != ((
                                                   (((IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_15__DOT__s1Valid) 
                                                     | ((IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_15__DOT__s2Valid) 
                                                        | (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_15__DOT__s3Valid))) 
                                                    << 0xfU) 
                                                   | ((((IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_14__DOT__s1Valid) 
                                                        | ((IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_14__DOT__s2Valid) 
                                                           | (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_14__DOT__s3Valid))) 
                                                       << 0xeU) 
                                                      | ((((IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_13__DOT__s1Valid) 
                                                           | ((IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_13__DOT__s2Valid) 
                                                              | (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_13__DOT__s3Valid))) 
                                                          << 0xdU) 
                                                         | ((((IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_12__DOT__s1Valid) 
                                                              | ((IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_12__DOT__s2Valid) 
                                                                 | (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_12__DOT__s3Valid))) 
                                                             << 0xcU) 
                                                            | ((((IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_11__DOT__s1Valid) 
                                                                 | ((IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_11__DOT__s2Valid) 
                                                                    | (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_11__DOT__s3Valid))) 
                                                                << 0xbU) 
                                                               | ((((IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_10__DOT__s1Valid) 
                                                                    | ((IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_10__DOT__s2Valid) 
                                                                       | (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_10__DOT__s3Valid))) 
                                                                   << 0xaU) 
                                                                  | ((((IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_9__DOT__s1Valid) 
                                                                       | ((IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_9__DOT__s2Valid) 
                                                                          | (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_9__DOT__s3Valid))) 
                                                                      << 9U) 
                                                                     | ((((IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_8__DOT__s1Valid) 
                                                                          | ((IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_8__DOT__s2Valid) 
                                                                             | (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_8__DOT__s3Valid))) 
                                                                         << 8U) 
                                                                        | ((((IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_7__DOT__s1Valid) 
                                                                             | ((IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_7__DOT__s2Valid) 
                                                                                | (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_7__DOT__s3Valid))) 
                                                                            << 7U) 
                                                                           | ((((IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_6__DOT__s1Valid) 
                                                                                | ((IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_6__DOT__s2Valid) 
                                                                                | (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_6__DOT__s3Valid))) 
                                                                               << 6U) 
                                                                              | ((((IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_5__DOT__s1Valid) 
                                                                                | ((IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_5__DOT__s2Valid) 
                                                                                | (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_5__DOT__s3Valid))) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_4__DOT__s1Valid) 
                                                                                | ((IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_4__DOT__s2Valid) 
                                                                                | (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_4__DOT__s3Valid))) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_3__DOT__s1Valid) 
                                                                                | ((IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_3__DOT__s2Valid) 
                                                                                | (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_3__DOT__s3Valid))) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_2__DOT__s1Valid) 
                                                                                | ((IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_2__DOT__s2Valid) 
                                                                                | (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_2__DOT__s3Valid))) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_1__DOT__s1Valid) 
                                                                                | ((IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_1__DOT__s2Valid) 
                                                                                | (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_1__DOT__s3Valid))) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s1Valid) 
                                                                                | ((IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s2Valid) 
                                                                                | (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s3Valid)))))))))))))))))) 
                                                  | (IData)(__VdfgTmp_h3b9a44b6__0)));
    vlSelf->io_drained = (1U & (~ (IData)(vlSelf->VPU1RouteHarness__DOT__busy)));
    if (vlSelf->VPU1RouteHarness__DOT__busy) {
        vlSelf->io_control_alert = (((IData)(vlSelf->io_input_mode) 
                                     != (IData)(vlSelf->VPU1RouteHarness__DOT__savedMode)) 
                                    | ((IData)(vlSelf->io_output_route) 
                                       != (IData)(vlSelf->VPU1RouteHarness__DOT__savedRoute)));
        vlSelf->VPU1RouteHarness__DOT__route = vlSelf->VPU1RouteHarness__DOT__savedRoute;
        vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_0_io_input_mode 
            = vlSelf->VPU1RouteHarness__DOT__savedMode;
    } else {
        vlSelf->io_control_alert = 0U;
        vlSelf->VPU1RouteHarness__DOT__route = vlSelf->io_output_route;
        vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_0_io_input_mode 
            = vlSelf->io_input_mode;
    }
    if (vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_0_io_input_mode) {
        vlSelf->io_result_0 = (0xffU & (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_0.io_out_qact));
        vlSelf->io_result_1 = (0xffU & (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_1.io_out_qact));
        vlSelf->io_result_2 = (0xffU & (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_2.io_out_qact));
        vlSelf->io_result_3 = (0xffU & (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_3.io_out_qact));
        vlSelf->io_result_4 = (0xffU & (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_4.io_out_qact));
        vlSelf->io_result_5 = (0xffU & (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_5.io_out_qact));
        vlSelf->io_result_6 = (0xffU & (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_6.io_out_qact));
        vlSelf->io_result_7 = (0xffU & (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_7.io_out_qact));
        vlSelf->io_result_8 = (0xffU & (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_8.io_out_qact));
        vlSelf->io_result_9 = (0xffU & (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_9.io_out_qact));
        vlSelf->io_result_10 = (0xffU & (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_10.io_out_qact));
        vlSelf->io_result_11 = (0xffU & (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_11.io_out_qact));
        vlSelf->io_result_12 = (0xffU & (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_12.io_out_qact));
        vlSelf->io_result_13 = (0xffU & (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_13.io_out_qact));
        vlSelf->io_result_14 = (0xffU & (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_14.io_out_qact));
        vlSelf->io_result_15 = (0xffU & (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_15.io_out_qact));
        vlSelf->io_result_valid = vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_0.io_out_valid;
        vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_0_io_in_valid 
            = ((IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT___io_out_tpu_valid_T) 
               & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s3Direct));
        vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_1_io_in_valid 
            = (((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_1__DOT__s3Valid)) 
               & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s3Direct));
        vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_2_io_in_valid 
            = (((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_2__DOT__s3Valid)) 
               & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s3Direct));
        vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_3_io_in_valid 
            = (((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_3__DOT__s3Valid)) 
               & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s3Direct));
        vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_4_io_in_valid 
            = (((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_4__DOT__s3Valid)) 
               & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s3Direct));
        vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_5_io_in_valid 
            = (((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_5__DOT__s3Valid)) 
               & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s3Direct));
        vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_6_io_in_valid 
            = (((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_6__DOT__s3Valid)) 
               & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s3Direct));
        vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_7_io_in_valid 
            = (((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_7__DOT__s3Valid)) 
               & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s3Direct));
        vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_8_io_in_valid 
            = (((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_8__DOT__s3Valid)) 
               & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s3Direct));
        vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_9_io_in_valid 
            = (((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_9__DOT__s3Valid)) 
               & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s3Direct));
        vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_10_io_in_valid 
            = (((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_10__DOT__s3Valid)) 
               & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s3Direct));
        vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_11_io_in_valid 
            = (((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_11__DOT__s3Valid)) 
               & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s3Direct));
        vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_12_io_in_valid 
            = (((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_12__DOT__s3Valid)) 
               & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s3Direct));
        vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_13_io_in_valid 
            = (((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_13__DOT__s3Valid)) 
               & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s3Direct));
        vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_14_io_in_valid 
            = (((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_14__DOT__s3Valid)) 
               & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s3Direct));
        vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_15_io_in_valid 
            = (((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_15__DOT__s3Valid)) 
               & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s3Direct));
    } else {
        vlSelf->io_result_0 = (0xffU & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__io_out_tpu_r));
        vlSelf->io_result_1 = (0xffU & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_1__DOT__io_out_tpu_r));
        vlSelf->io_result_2 = (0xffU & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_2__DOT__io_out_tpu_r));
        vlSelf->io_result_3 = (0xffU & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_3__DOT__io_out_tpu_r));
        vlSelf->io_result_4 = (0xffU & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_4__DOT__io_out_tpu_r));
        vlSelf->io_result_5 = (0xffU & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_5__DOT__io_out_tpu_r));
        vlSelf->io_result_6 = (0xffU & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_6__DOT__io_out_tpu_r));
        vlSelf->io_result_7 = (0xffU & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_7__DOT__io_out_tpu_r));
        vlSelf->io_result_8 = (0xffU & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_8__DOT__io_out_tpu_r));
        vlSelf->io_result_9 = (0xffU & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_9__DOT__io_out_tpu_r));
        vlSelf->io_result_10 = (0xffU & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_10__DOT__io_out_tpu_r));
        vlSelf->io_result_11 = (0xffU & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_11__DOT__io_out_tpu_r));
        vlSelf->io_result_12 = (0xffU & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_12__DOT__io_out_tpu_r));
        vlSelf->io_result_13 = (0xffU & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_13__DOT__io_out_tpu_r));
        vlSelf->io_result_14 = (0xffU & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_14__DOT__io_out_tpu_r));
        vlSelf->io_result_15 = (0xffU & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_15__DOT__io_out_tpu_r));
        vlSelf->io_result_valid = ((~ (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s3Direct)) 
                                   & (IData)(vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT___io_out_tpu_valid_T));
        vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_0_io_in_valid 
            = vlSelf->io_tpu_valid;
        vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_1_io_in_valid 
            = vlSelf->io_tpu_valid;
        vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_2_io_in_valid 
            = vlSelf->io_tpu_valid;
        vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_3_io_in_valid 
            = vlSelf->io_tpu_valid;
        vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_4_io_in_valid 
            = vlSelf->io_tpu_valid;
        vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_5_io_in_valid 
            = vlSelf->io_tpu_valid;
        vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_6_io_in_valid 
            = vlSelf->io_tpu_valid;
        vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_7_io_in_valid 
            = vlSelf->io_tpu_valid;
        vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_8_io_in_valid 
            = vlSelf->io_tpu_valid;
        vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_9_io_in_valid 
            = vlSelf->io_tpu_valid;
        vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_10_io_in_valid 
            = vlSelf->io_tpu_valid;
        vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_11_io_in_valid 
            = vlSelf->io_tpu_valid;
        vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_12_io_in_valid 
            = vlSelf->io_tpu_valid;
        vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_13_io_in_valid 
            = vlSelf->io_tpu_valid;
        vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_14_io_in_valid 
            = vlSelf->io_tpu_valid;
        vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_15_io_in_valid 
            = vlSelf->io_tpu_valid;
    }
    vlSelf->io_vb_read_req = ((~ (IData)(vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_0_io_input_mode)) 
                              & ((0U != (IData)(vlSelf->io_alu_mode)) 
                                 & ((~ (IData)(vlSelf->io_stall)) 
                                    & (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_0.__PVT__s3Valid))));
    vlSelf->io_vb_valid = ((IData)(vlSelf->io_result_valid) 
                           & (1U == (IData)(vlSelf->VPU1RouteHarness__DOT__route)));
    vlSelf->io_vpu2_valid = ((IData)(vlSelf->io_result_valid) 
                             & (2U == (IData)(vlSelf->VPU1RouteHarness__DOT__route)));
    vlSelf->io_compute_valid = ((IData)(vlSelf->io_result_valid) 
                                & (3U == (IData)(vlSelf->VPU1RouteHarness__DOT__route)));
    VPU1RouteHarness__DOT__qa__DOT___anyValid_T = (
                                                   ((IData)(vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_15_io_in_valid) 
                                                    << 0xfU) 
                                                   | (((IData)(vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_14_io_in_valid) 
                                                       << 0xeU) 
                                                      | (((IData)(vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_13_io_in_valid) 
                                                          << 0xdU) 
                                                         | (((IData)(vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_12_io_in_valid) 
                                                             << 0xcU) 
                                                            | (((IData)(vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_11_io_in_valid) 
                                                                << 0xbU) 
                                                               | (((IData)(vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_10_io_in_valid) 
                                                                   << 0xaU) 
                                                                  | (((IData)(vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_9_io_in_valid) 
                                                                      << 9U) 
                                                                     | (((IData)(vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_8_io_in_valid) 
                                                                         << 8U) 
                                                                        | (((IData)(vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_7_io_in_valid) 
                                                                            << 7U) 
                                                                           | (((IData)(vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_6_io_in_valid) 
                                                                               << 6U) 
                                                                              | (((IData)(vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_5_io_in_valid) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_4_io_in_valid) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_3_io_in_valid) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_2_io_in_valid) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_1_io_in_valid) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_0_io_in_valid))))))))))))))));
    vlSelf->io_sync_alert = (((((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_15.__PVT__expectedRdValid) 
                                != (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_15.__PVT__actLut__DOT__io_rd_valid_REG)) 
                               | (((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_15.__PVT__expectedWrValid) 
                                   != (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_15.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                  | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_15.__PVT__holdValid) 
                                     & ((~ (IData)(vlSelf->io_stall)) 
                                        & (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_15.__PVT__rawValid))))) 
                              | ((((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_14.__PVT__expectedRdValid) 
                                   != (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_14.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                  | (((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_14.__PVT__expectedWrValid) 
                                      != (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_14.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                     | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_14.__PVT__holdValid) 
                                        & ((~ (IData)(vlSelf->io_stall)) 
                                           & (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_14.__PVT__rawValid))))) 
                                 | ((((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_13.__PVT__expectedRdValid) 
                                      != (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_13.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                     | (((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_13.__PVT__expectedWrValid) 
                                         != (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_13.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                        | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_13.__PVT__holdValid) 
                                           & ((~ (IData)(vlSelf->io_stall)) 
                                              & (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_13.__PVT__rawValid))))) 
                                    | ((((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_12.__PVT__expectedRdValid) 
                                         != (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_12.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                        | (((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_12.__PVT__expectedWrValid) 
                                            != (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_12.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                           | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_12.__PVT__holdValid) 
                                              & ((~ (IData)(vlSelf->io_stall)) 
                                                 & (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_12.__PVT__rawValid))))) 
                                       | ((((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_11.__PVT__expectedRdValid) 
                                            != (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_11.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                           | (((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_11.__PVT__expectedWrValid) 
                                               != (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_11.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                              | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_11.__PVT__holdValid) 
                                                 & ((~ (IData)(vlSelf->io_stall)) 
                                                    & (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_11.__PVT__rawValid))))) 
                                          | ((((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_10.__PVT__expectedRdValid) 
                                               != (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_10.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                              | (((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_10.__PVT__expectedWrValid) 
                                                  != (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_10.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                                 | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_10.__PVT__holdValid) 
                                                    & ((~ (IData)(vlSelf->io_stall)) 
                                                       & (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_10.__PVT__rawValid))))) 
                                             | ((((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_9.__PVT__expectedRdValid) 
                                                  != (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_9.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                                 | (((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_9.__PVT__expectedWrValid) 
                                                     != (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_9.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                                    | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_9.__PVT__holdValid) 
                                                       & ((~ (IData)(vlSelf->io_stall)) 
                                                          & (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_9.__PVT__rawValid))))) 
                                                | ((((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_8.__PVT__expectedRdValid) 
                                                     != (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_8.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                                    | (((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_8.__PVT__expectedWrValid) 
                                                        != (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_8.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                                       | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_8.__PVT__holdValid) 
                                                          & ((~ (IData)(vlSelf->io_stall)) 
                                                             & (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_8.__PVT__rawValid))))) 
                                                   | ((((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_7.__PVT__expectedRdValid) 
                                                        != (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_7.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                                       | (((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_7.__PVT__expectedWrValid) 
                                                           != (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_7.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                                          | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_7.__PVT__holdValid) 
                                                             & ((~ (IData)(vlSelf->io_stall)) 
                                                                & (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_7.__PVT__rawValid))))) 
                                                      | ((((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_6.__PVT__expectedRdValid) 
                                                           != (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_6.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                                          | (((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_6.__PVT__expectedWrValid) 
                                                              != (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_6.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                                             | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_6.__PVT__holdValid) 
                                                                & ((~ (IData)(vlSelf->io_stall)) 
                                                                   & (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_6.__PVT__rawValid))))) 
                                                         | ((((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_5.__PVT__expectedRdValid) 
                                                              != (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_5.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                                             | (((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_5.__PVT__expectedWrValid) 
                                                                 != (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_5.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                                                | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_5.__PVT__holdValid) 
                                                                   & ((~ (IData)(vlSelf->io_stall)) 
                                                                      & (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_5.__PVT__rawValid))))) 
                                                            | ((((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_4.__PVT__expectedRdValid) 
                                                                 != (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_4.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                                                | (((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_4.__PVT__expectedWrValid) 
                                                                    != (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_4.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                                                   | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_4.__PVT__holdValid) 
                                                                      & ((~ (IData)(vlSelf->io_stall)) 
                                                                         & (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_4.__PVT__rawValid))))) 
                                                               | ((((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_3.__PVT__expectedRdValid) 
                                                                    != (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_3.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                                                   | (((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_3.__PVT__expectedWrValid) 
                                                                       != (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_3.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                                                      | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_3.__PVT__holdValid) 
                                                                         & ((~ (IData)(vlSelf->io_stall)) 
                                                                            & (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_3.__PVT__rawValid))))) 
                                                                  | ((((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_2.__PVT__expectedRdValid) 
                                                                       != (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_2.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                                                      | (((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_2.__PVT__expectedWrValid) 
                                                                          != (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_2.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                                                         | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_2.__PVT__holdValid) 
                                                                            & ((~ (IData)(vlSelf->io_stall)) 
                                                                               & (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_2.__PVT__rawValid))))) 
                                                                     | ((((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_1.__PVT__expectedRdValid) 
                                                                          != (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_1.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                                                         | (((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_1.__PVT__expectedWrValid) 
                                                                             != (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_1.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                                                            | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_1.__PVT__holdValid) 
                                                                               & ((~ (IData)(vlSelf->io_stall)) 
                                                                                & (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_1.__PVT__rawValid))))) 
                                                                        | (((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_0.__PVT__expectedRdValid) 
                                                                            != (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_0.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                                                           | (((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_0.__PVT__expectedWrValid) 
                                                                               != (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_0.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                                                              | ((IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_0.__PVT__holdValid) 
                                                                                & ((~ (IData)(vlSelf->io_stall)) 
                                                                                & (IData)(vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_0.__PVT__rawValid)))))))))))))))))))) 
                             | ((~ (IData)((0xffffU 
                                            == (IData)(VPU1RouteHarness__DOT__qa__DOT___anyValid_T)))) 
                                & (0U != (IData)(VPU1RouteHarness__DOT__qa__DOT___anyValid_T))));
}

VL_ATTR_COLD void VVPU1RouteHarness_QuantActCore___stl_sequent__TOP__VPU1RouteHarness__DOT__qa__DOT__cores_0__0(VVPU1RouteHarness_QuantActCore* vlSelf);
VL_ATTR_COLD void VVPU1RouteHarness_QuantActCore___stl_sequent__TOP__VPU1RouteHarness__DOT__qa__DOT__cores_1__0(VVPU1RouteHarness_QuantActCore* vlSelf);

VL_ATTR_COLD void VVPU1RouteHarness___024root___eval_stl(VVPU1RouteHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVPU1RouteHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVPU1RouteHarness___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VVPU1RouteHarness_QuantActCore___stl_sequent__TOP__VPU1RouteHarness__DOT__qa__DOT__cores_0__0((&vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_0));
        VVPU1RouteHarness_QuantActCore___stl_sequent__TOP__VPU1RouteHarness__DOT__qa__DOT__cores_1__0((&vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_1));
        VVPU1RouteHarness_QuantActCore___stl_sequent__TOP__VPU1RouteHarness__DOT__qa__DOT__cores_1__0((&vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_2));
        VVPU1RouteHarness_QuantActCore___stl_sequent__TOP__VPU1RouteHarness__DOT__qa__DOT__cores_1__0((&vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_3));
        VVPU1RouteHarness_QuantActCore___stl_sequent__TOP__VPU1RouteHarness__DOT__qa__DOT__cores_1__0((&vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_4));
        VVPU1RouteHarness_QuantActCore___stl_sequent__TOP__VPU1RouteHarness__DOT__qa__DOT__cores_1__0((&vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_5));
        VVPU1RouteHarness_QuantActCore___stl_sequent__TOP__VPU1RouteHarness__DOT__qa__DOT__cores_1__0((&vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_6));
        VVPU1RouteHarness_QuantActCore___stl_sequent__TOP__VPU1RouteHarness__DOT__qa__DOT__cores_1__0((&vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_7));
        VVPU1RouteHarness_QuantActCore___stl_sequent__TOP__VPU1RouteHarness__DOT__qa__DOT__cores_1__0((&vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_8));
        VVPU1RouteHarness_QuantActCore___stl_sequent__TOP__VPU1RouteHarness__DOT__qa__DOT__cores_1__0((&vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_9));
        VVPU1RouteHarness_QuantActCore___stl_sequent__TOP__VPU1RouteHarness__DOT__qa__DOT__cores_1__0((&vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_10));
        VVPU1RouteHarness_QuantActCore___stl_sequent__TOP__VPU1RouteHarness__DOT__qa__DOT__cores_1__0((&vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_11));
        VVPU1RouteHarness_QuantActCore___stl_sequent__TOP__VPU1RouteHarness__DOT__qa__DOT__cores_1__0((&vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_12));
        VVPU1RouteHarness_QuantActCore___stl_sequent__TOP__VPU1RouteHarness__DOT__qa__DOT__cores_1__0((&vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_13));
        VVPU1RouteHarness_QuantActCore___stl_sequent__TOP__VPU1RouteHarness__DOT__qa__DOT__cores_1__0((&vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_14));
        VVPU1RouteHarness_QuantActCore___stl_sequent__TOP__VPU1RouteHarness__DOT__qa__DOT__cores_1__0((&vlSymsp->TOP__VPU1RouteHarness__DOT__qa__DOT__cores_15));
        VVPU1RouteHarness___024root___stl_sequent__TOP__0(vlSelf);
    }
}
