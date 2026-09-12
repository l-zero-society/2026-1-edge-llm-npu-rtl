// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTPU_top.h for the primary calling header

#include "VTPU_top__pch.h"
#include "VTPU_top__Syms.h"
#include "VTPU_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VTPU_top___024root___dump_triggers__stl(VTPU_top___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VTPU_top___024root___eval_triggers__stl(VTPU_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPU_top___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTPU_top___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void VTPU_top___024root___stl_sequent__TOP__1(VTPU_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPU_top___024root___stl_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->io_out_valid_0) {
        vlSelf->io_out_accum_0 = vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_0.io_out_scalar;
        vlSelf->io_out_accum_1 = vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_1.io_out_scalar;
        vlSelf->io_out_accum_2 = vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_2.io_out_scalar;
        vlSelf->io_out_accum_3 = vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_3.io_out_scalar;
        vlSelf->io_out_accum_4 = vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_4.io_out_scalar;
        vlSelf->io_out_accum_5 = vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_5.io_out_scalar;
        vlSelf->io_out_accum_6 = vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_6.io_out_scalar;
        vlSelf->io_out_accum_7 = vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_7.io_out_scalar;
        vlSelf->io_out_accum_8 = vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_8.io_out_scalar;
        vlSelf->io_out_accum_9 = vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_9.io_out_scalar;
        vlSelf->io_out_accum_10 = vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_10.io_out_scalar;
        vlSelf->io_out_accum_11 = vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_11.io_out_scalar;
        vlSelf->io_out_accum_12 = vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_12.io_out_scalar;
        vlSelf->io_out_accum_13 = vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_13.io_out_scalar;
        vlSelf->io_out_accum_14 = vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_14.io_out_scalar;
        vlSelf->io_out_accum_15 = vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_15.io_out_scalar;
    } else {
        vlSelf->io_out_accum_0 = 0U;
        vlSelf->io_out_accum_1 = 0U;
        vlSelf->io_out_accum_2 = 0U;
        vlSelf->io_out_accum_3 = 0U;
        vlSelf->io_out_accum_4 = 0U;
        vlSelf->io_out_accum_5 = 0U;
        vlSelf->io_out_accum_6 = 0U;
        vlSelf->io_out_accum_7 = 0U;
        vlSelf->io_out_accum_8 = 0U;
        vlSelf->io_out_accum_9 = 0U;
        vlSelf->io_out_accum_10 = 0U;
        vlSelf->io_out_accum_11 = 0U;
        vlSelf->io_out_accum_12 = 0U;
        vlSelf->io_out_accum_13 = 0U;
        vlSelf->io_out_accum_14 = 0U;
        vlSelf->io_out_accum_15 = 0U;
    }
    vlSelf->io_fatal_alert = (((((~ (IData)(vlSelf->io_stall)) 
                                 & (((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_15_r) 
                                     & ((1U & (IData)(
                                                      (vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_15.__PVT__current_sum_full 
                                                       >> 0x20U))) 
                                        != (1U & (IData)(
                                                         (vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_15.__PVT__current_sum_full 
                                                          >> 0x1fU))))) 
                                    | (((0xfU != (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_15.__PVT__row_ptr)) 
                                        & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_15_r) 
                                           & (IData)(vlSelf->TPU_top__DOT__accumulator__DOT__snapshotByCol_15_r))) 
                                       | ((IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_15.__PVT___readWriteCollision_T) 
                                          & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__streamActive) 
                                             & (((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__streamBank) 
                                                 == (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_15.__PVT__write_bank)) 
                                                & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__read_ptr) 
                                                   == (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_15.__PVT__row_ptr)))))))) 
                                | (((~ (IData)(vlSelf->io_stall)) 
                                    & (((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_14_r) 
                                        & ((1U & (IData)(
                                                         (vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_14.__PVT__current_sum_full 
                                                          >> 0x20U))) 
                                           != (1U & (IData)(
                                                            (vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_14.__PVT__current_sum_full 
                                                             >> 0x1fU))))) 
                                       | (((0xfU != (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_14.__PVT__row_ptr)) 
                                           & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_14_r) 
                                              & (IData)(vlSelf->TPU_top__DOT__accumulator__DOT__snapshotByCol_14_r))) 
                                          | ((IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_14.__PVT___readWriteCollision_T) 
                                             & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__streamActive) 
                                                & (((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__streamBank) 
                                                    == (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_14.__PVT__write_bank)) 
                                                   & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__read_ptr) 
                                                      == (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_14.__PVT__row_ptr)))))))) 
                                   | (((~ (IData)(vlSelf->io_stall)) 
                                       & (((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_13_r) 
                                           & ((1U & (IData)(
                                                            (vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_13.__PVT__current_sum_full 
                                                             >> 0x20U))) 
                                              != (1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_13.__PVT__current_sum_full 
                                                             >> 0x1fU))))) 
                                          | (((0xfU 
                                               != (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_13.__PVT__row_ptr)) 
                                              & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_13_r) 
                                                 & (IData)(vlSelf->TPU_top__DOT__accumulator__DOT__snapshotByCol_13_r))) 
                                             | ((IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_13.__PVT___readWriteCollision_T) 
                                                & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__streamActive) 
                                                   & (((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__streamBank) 
                                                       == (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_13.__PVT__write_bank)) 
                                                      & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__read_ptr) 
                                                         == (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_13.__PVT__row_ptr)))))))) 
                                      | (((~ (IData)(vlSelf->io_stall)) 
                                          & (((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_12_r) 
                                              & ((1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_12.__PVT__current_sum_full 
                                                             >> 0x20U))) 
                                                 != 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_12.__PVT__current_sum_full 
                                                             >> 0x1fU))))) 
                                             | (((0xfU 
                                                  != (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_12.__PVT__row_ptr)) 
                                                 & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_12_r) 
                                                    & (IData)(vlSelf->TPU_top__DOT__accumulator__DOT__snapshotByCol_12_r))) 
                                                | ((IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_12.__PVT___readWriteCollision_T) 
                                                   & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__streamActive) 
                                                      & (((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__streamBank) 
                                                          == (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_12.__PVT__write_bank)) 
                                                         & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__read_ptr) 
                                                            == (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_12.__PVT__row_ptr)))))))) 
                                         | (((~ (IData)(vlSelf->io_stall)) 
                                             & (((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_11_r) 
                                                 & ((1U 
                                                     & (IData)(
                                                               (vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_11.__PVT__current_sum_full 
                                                                >> 0x20U))) 
                                                    != 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_11.__PVT__current_sum_full 
                                                                >> 0x1fU))))) 
                                                | (((0xfU 
                                                     != (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_11.__PVT__row_ptr)) 
                                                    & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_11_r) 
                                                       & (IData)(vlSelf->TPU_top__DOT__accumulator__DOT__snapshotByCol_11_r))) 
                                                   | ((IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_11.__PVT___readWriteCollision_T) 
                                                      & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__streamActive) 
                                                         & (((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__streamBank) 
                                                             == (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_11.__PVT__write_bank)) 
                                                            & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__read_ptr) 
                                                               == (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_11.__PVT__row_ptr)))))))) 
                                            | (((~ (IData)(vlSelf->io_stall)) 
                                                & (((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_10_r) 
                                                    & ((1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_10.__PVT__current_sum_full 
                                                                   >> 0x20U))) 
                                                       != 
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_10.__PVT__current_sum_full 
                                                                   >> 0x1fU))))) 
                                                   | (((0xfU 
                                                        != (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_10.__PVT__row_ptr)) 
                                                       & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_10_r) 
                                                          & (IData)(vlSelf->TPU_top__DOT__accumulator__DOT__snapshotByCol_10_r))) 
                                                      | ((IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_10.__PVT___readWriteCollision_T) 
                                                         & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__streamActive) 
                                                            & (((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__streamBank) 
                                                                == (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_10.__PVT__write_bank)) 
                                                               & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__read_ptr) 
                                                                  == (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_10.__PVT__row_ptr)))))))) 
                                               | (((~ (IData)(vlSelf->io_stall)) 
                                                   & (((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_9_r) 
                                                       & ((1U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_9.__PVT__current_sum_full 
                                                                      >> 0x20U))) 
                                                          != 
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_9.__PVT__current_sum_full 
                                                                      >> 0x1fU))))) 
                                                      | (((0xfU 
                                                           != (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_9.__PVT__row_ptr)) 
                                                          & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_9_r) 
                                                             & (IData)(vlSelf->TPU_top__DOT__accumulator__DOT__snapshotByCol_9_r))) 
                                                         | ((IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_9.__PVT___readWriteCollision_T) 
                                                            & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__streamActive) 
                                                               & (((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__streamBank) 
                                                                   == (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_9.__PVT__write_bank)) 
                                                                  & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__read_ptr) 
                                                                     == (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_9.__PVT__row_ptr)))))))) 
                                                  | (((~ (IData)(vlSelf->io_stall)) 
                                                      & (((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_8_r) 
                                                          & ((1U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_8.__PVT__current_sum_full 
                                                                         >> 0x20U))) 
                                                             != 
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_8.__PVT__current_sum_full 
                                                                         >> 0x1fU))))) 
                                                         | (((0xfU 
                                                              != (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_8.__PVT__row_ptr)) 
                                                             & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_8_r) 
                                                                & (IData)(vlSelf->TPU_top__DOT__accumulator__DOT__snapshotByCol_8_r))) 
                                                            | ((IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_8.__PVT___readWriteCollision_T) 
                                                               & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__streamActive) 
                                                                  & (((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__streamBank) 
                                                                      == (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_8.__PVT__write_bank)) 
                                                                     & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__read_ptr) 
                                                                        == (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_8.__PVT__row_ptr)))))))) 
                                                     | (((~ (IData)(vlSelf->io_stall)) 
                                                         & (((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_7_r) 
                                                             & ((1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_7.__PVT__current_sum_full 
                                                                            >> 0x20U))) 
                                                                != 
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_7.__PVT__current_sum_full 
                                                                            >> 0x1fU))))) 
                                                            | (((0xfU 
                                                                 != (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_7.__PVT__row_ptr)) 
                                                                & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_7_r) 
                                                                   & (IData)(vlSelf->TPU_top__DOT__accumulator__DOT__snapshotByCol_7_r))) 
                                                               | ((IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_7.__PVT___readWriteCollision_T) 
                                                                  & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__streamActive) 
                                                                     & (((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__streamBank) 
                                                                         == (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_7.__PVT__write_bank)) 
                                                                        & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__read_ptr) 
                                                                           == (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_7.__PVT__row_ptr)))))))) 
                                                        | (((~ (IData)(vlSelf->io_stall)) 
                                                            & (((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_6_r) 
                                                                & ((1U 
                                                                    & (IData)(
                                                                              (vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_6.__PVT__current_sum_full 
                                                                               >> 0x20U))) 
                                                                   != 
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_6.__PVT__current_sum_full 
                                                                               >> 0x1fU))))) 
                                                               | (((0xfU 
                                                                    != (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_6.__PVT__row_ptr)) 
                                                                   & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_6_r) 
                                                                      & (IData)(vlSelf->TPU_top__DOT__accumulator__DOT__snapshotByCol_6_r))) 
                                                                  | ((IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_6.__PVT___readWriteCollision_T) 
                                                                     & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__streamActive) 
                                                                        & (((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__streamBank) 
                                                                            == (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_6.__PVT__write_bank)) 
                                                                           & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__read_ptr) 
                                                                              == (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_6.__PVT__row_ptr)))))))) 
                                                           | (((~ (IData)(vlSelf->io_stall)) 
                                                               & (((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_5_r) 
                                                                   & ((1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_5.__PVT__current_sum_full 
                                                                                >> 0x20U))) 
                                                                      != 
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_5.__PVT__current_sum_full 
                                                                                >> 0x1fU))))) 
                                                                  | (((0xfU 
                                                                       != (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_5.__PVT__row_ptr)) 
                                                                      & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_5_r) 
                                                                         & (IData)(vlSelf->TPU_top__DOT__accumulator__DOT__snapshotByCol_5_r))) 
                                                                     | ((IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_5.__PVT___readWriteCollision_T) 
                                                                        & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__streamActive) 
                                                                           & (((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__streamBank) 
                                                                               == (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_5.__PVT__write_bank)) 
                                                                              & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__read_ptr) 
                                                                                == (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_5.__PVT__row_ptr)))))))) 
                                                              | (((~ (IData)(vlSelf->io_stall)) 
                                                                  & (((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_4_r) 
                                                                      & ((1U 
                                                                          & (IData)(
                                                                                (vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_4.__PVT__current_sum_full 
                                                                                >> 0x20U))) 
                                                                         != 
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_4.__PVT__current_sum_full 
                                                                                >> 0x1fU))))) 
                                                                     | (((0xfU 
                                                                          != (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_4.__PVT__row_ptr)) 
                                                                         & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_4_r) 
                                                                            & (IData)(vlSelf->TPU_top__DOT__accumulator__DOT__snapshotByCol_4_r))) 
                                                                        | ((IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_4.__PVT___readWriteCollision_T) 
                                                                           & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__streamActive) 
                                                                              & (((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__streamBank) 
                                                                                == (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_4.__PVT__write_bank)) 
                                                                                & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__read_ptr) 
                                                                                == (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_4.__PVT__row_ptr)))))))) 
                                                                 | (((~ (IData)(vlSelf->io_stall)) 
                                                                     & (((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_3_r) 
                                                                         & ((1U 
                                                                             & (IData)(
                                                                                (vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_3.__PVT__current_sum_full 
                                                                                >> 0x20U))) 
                                                                            != 
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_3.__PVT__current_sum_full 
                                                                                >> 0x1fU))))) 
                                                                        | (((0xfU 
                                                                             != (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_3.__PVT__row_ptr)) 
                                                                            & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_3_r) 
                                                                               & (IData)(vlSelf->TPU_top__DOT__accumulator__DOT__snapshotByCol_3_r))) 
                                                                           | ((IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_3.__PVT___readWriteCollision_T) 
                                                                              & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__streamActive) 
                                                                                & (((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__streamBank) 
                                                                                == (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_3.__PVT__write_bank)) 
                                                                                & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__read_ptr) 
                                                                                == (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_3.__PVT__row_ptr)))))))) 
                                                                    | (((~ (IData)(vlSelf->io_stall)) 
                                                                        & (((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_2_r) 
                                                                            & ((1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_2.__PVT__current_sum_full 
                                                                                >> 0x20U))) 
                                                                               != 
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_2.__PVT__current_sum_full 
                                                                                >> 0x1fU))))) 
                                                                           | (((0xfU 
                                                                                != (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_2.__PVT__row_ptr)) 
                                                                               & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_2_r) 
                                                                                & (IData)(vlSelf->TPU_top__DOT__accumulator__DOT__snapshotByCol_2_r))) 
                                                                              | ((IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_2.__PVT___readWriteCollision_T) 
                                                                                & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__streamActive) 
                                                                                & (((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__streamBank) 
                                                                                == (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_2.__PVT__write_bank)) 
                                                                                & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__read_ptr) 
                                                                                == (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_2.__PVT__row_ptr)))))))) 
                                                                       | (((~ (IData)(vlSelf->io_stall)) 
                                                                           & (((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_1_r) 
                                                                               & ((1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_1.__PVT__current_sum_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_1.__PVT__current_sum_full 
                                                                                >> 0x1fU))))) 
                                                                              | (((0xfU 
                                                                                != (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_1.__PVT__row_ptr)) 
                                                                                & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__accumEnByCol_1_r) 
                                                                                & (IData)(vlSelf->TPU_top__DOT__accumulator__DOT__snapshotByCol_1_r))) 
                                                                                | ((IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_1.__PVT___readWriteCollision_T) 
                                                                                & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__streamActive) 
                                                                                & (((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__streamBank) 
                                                                                == (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_1.__PVT__write_bank)) 
                                                                                & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__read_ptr) 
                                                                                == (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_1.__PVT__row_ptr)))))))) 
                                                                          | ((~ (IData)(vlSelf->io_stall)) 
                                                                             & (((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_0__DOT__outValidReg) 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_0.__PVT__current_sum_full 
                                                                                >> 0x20U))) 
                                                                                != 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_0.__PVT__current_sum_full 
                                                                                >> 0x1fU))))) 
                                                                                | (((0xfU 
                                                                                != (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_0.__PVT__row_ptr)) 
                                                                                & ((IData)(vlSelf->TPU_top__DOT__mxu__DOT__macs_15_0__DOT__outValidReg) 
                                                                                & (IData)(vlSelf->TPU_top__DOT__accumulator__DOT__buffers_0_io_snapshot))) 
                                                                                | ((IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_0.__PVT___readWriteCollision_T) 
                                                                                & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__streamActive) 
                                                                                & (((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__streamBank) 
                                                                                == (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_0.__PVT__write_bank)) 
                                                                                & ((IData)(vlSelf->TPU_top__DOT__accumulator__DOT__read_ptr) 
                                                                                == (IData)(vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_0.__PVT__row_ptr))))))))))))))))))))))) 
                               | ((0xfU != (IData)(vlSelf->TPU_top__DOT__accumulator__DOT__read_ptr)) 
                                  & ((IData)(vlSelf->TPU_top__DOT__accumulator_io_snapshot_done) 
                                     & (IData)(vlSelf->TPU_top__DOT__accumulator__DOT__streamActive)))) 
                              | ((IData)(vlSelf->TPU_top__DOT__mxu_io_mxu_alert) 
                                 | (((IData)(vlSelf->__VdfgTmp_h3681e6d6__0) 
                                     & (IData)(vlSelf->TPU_top__DOT__accumulator__DOT__buffers_0_io_snapshot)) 
                                    | ((IData)(vlSelf->__VdfgTmp_hd2a28677__0) 
                                       & ((IData)(vlSelf->TPU_top__DOT__accumulator_io_out_tile_start) 
                                          | (IData)(vlSelf->TPU_top__DOT__accumulator_io_snapshot_done))))));
}

VL_ATTR_COLD void VTPU_top___024root___stl_sequent__TOP__0(VTPU_top___024root* vlSelf);
VL_ATTR_COLD void VTPU_top_Accum_buffer___stl_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_0__0(VTPU_top_Accum_buffer* vlSelf);
VL_ATTR_COLD void VTPU_top_Accum_buffer___stl_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_1__0(VTPU_top_Accum_buffer* vlSelf);
VL_ATTR_COLD void VTPU_top_Accum_buffer___stl_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_2__0(VTPU_top_Accum_buffer* vlSelf);
VL_ATTR_COLD void VTPU_top_Accum_buffer___stl_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_3__0(VTPU_top_Accum_buffer* vlSelf);
VL_ATTR_COLD void VTPU_top_Accum_buffer___stl_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_4__0(VTPU_top_Accum_buffer* vlSelf);
VL_ATTR_COLD void VTPU_top_Accum_buffer___stl_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_5__0(VTPU_top_Accum_buffer* vlSelf);
VL_ATTR_COLD void VTPU_top_Accum_buffer___stl_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_6__0(VTPU_top_Accum_buffer* vlSelf);
VL_ATTR_COLD void VTPU_top_Accum_buffer___stl_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_7__0(VTPU_top_Accum_buffer* vlSelf);
VL_ATTR_COLD void VTPU_top_Accum_buffer___stl_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_8__0(VTPU_top_Accum_buffer* vlSelf);
VL_ATTR_COLD void VTPU_top_Accum_buffer___stl_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_9__0(VTPU_top_Accum_buffer* vlSelf);
VL_ATTR_COLD void VTPU_top_Accum_buffer___stl_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_10__0(VTPU_top_Accum_buffer* vlSelf);
VL_ATTR_COLD void VTPU_top_Accum_buffer___stl_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_11__0(VTPU_top_Accum_buffer* vlSelf);
VL_ATTR_COLD void VTPU_top_Accum_buffer___stl_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_12__0(VTPU_top_Accum_buffer* vlSelf);
VL_ATTR_COLD void VTPU_top_Accum_buffer___stl_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_13__0(VTPU_top_Accum_buffer* vlSelf);
VL_ATTR_COLD void VTPU_top_Accum_buffer___stl_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_14__0(VTPU_top_Accum_buffer* vlSelf);
VL_ATTR_COLD void VTPU_top_Accum_buffer___stl_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_15__0(VTPU_top_Accum_buffer* vlSelf);

VL_ATTR_COLD void VTPU_top___024root___eval_stl(VTPU_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPU_top___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTPU_top___024root___stl_sequent__TOP__0(vlSelf);
        VTPU_top_Accum_buffer___stl_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_0__0((&vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_0));
        VTPU_top_Accum_buffer___stl_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_1__0((&vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_1));
        VTPU_top_Accum_buffer___stl_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_2__0((&vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_2));
        VTPU_top_Accum_buffer___stl_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_3__0((&vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_3));
        VTPU_top_Accum_buffer___stl_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_4__0((&vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_4));
        VTPU_top_Accum_buffer___stl_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_5__0((&vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_5));
        VTPU_top_Accum_buffer___stl_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_6__0((&vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_6));
        VTPU_top_Accum_buffer___stl_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_7__0((&vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_7));
        VTPU_top_Accum_buffer___stl_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_8__0((&vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_8));
        VTPU_top_Accum_buffer___stl_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_9__0((&vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_9));
        VTPU_top_Accum_buffer___stl_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_10__0((&vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_10));
        VTPU_top_Accum_buffer___stl_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_11__0((&vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_11));
        VTPU_top_Accum_buffer___stl_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_12__0((&vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_12));
        VTPU_top_Accum_buffer___stl_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_13__0((&vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_13));
        VTPU_top_Accum_buffer___stl_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_14__0((&vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_14));
        VTPU_top_Accum_buffer___stl_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_15__0((&vlSymsp->TOP__TPU_top__DOT__accumulator__DOT__buffers_15));
        VTPU_top___024root___stl_sequent__TOP__1(vlSelf);
    }
}
