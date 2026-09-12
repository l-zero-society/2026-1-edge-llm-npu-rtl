// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTPU_top.h for the primary calling header

#include "VTPU_top__pch.h"
#include "VTPU_top_Accum_buffer.h"
#include "VTPU_top__Syms.h"

VL_INLINE_OPT void VTPU_top_Accum_buffer___ico_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_0__0(VTPU_top_Accum_buffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTPU_top_Accum_buffer___ico_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_0__0\n"); );
    // Body
    vlSelf->__PVT___readWriteCollision_T = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                            & (IData)(vlSymsp->TOP.TPU_top__DOT__mxu__DOT__macs_15_0__DOT__outValidReg));
}

VL_INLINE_OPT void VTPU_top_Accum_buffer___nba_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_0__0(VTPU_top_Accum_buffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTPU_top_Accum_buffer___nba_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_0__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__write_bank;
    __Vdly__write_bank = 0;
    // Body
    __Vdly__write_bank = vlSelf->__PVT__write_bank;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bank0_0 = 0U;
        vlSelf->__PVT__bank0_1 = 0U;
        vlSelf->__PVT__bank0_2 = 0U;
        vlSelf->__PVT__bank0_3 = 0U;
        vlSelf->__PVT__bank0_4 = 0U;
        vlSelf->__PVT__bank0_5 = 0U;
        vlSelf->__PVT__bank0_6 = 0U;
        vlSelf->__PVT__bank0_7 = 0U;
        vlSelf->__PVT__bank0_8 = 0U;
        vlSelf->__PVT__bank0_9 = 0U;
        vlSelf->__PVT__bank0_10 = 0U;
        vlSelf->__PVT__bank0_11 = 0U;
        vlSelf->__PVT__bank0_12 = 0U;
        vlSelf->__PVT__bank0_13 = 0U;
        vlSelf->__PVT__bank0_14 = 0U;
        vlSelf->__PVT__bank0_15 = 0U;
        vlSelf->__PVT__bank1_0 = 0U;
        vlSelf->__PVT__bank1_1 = 0U;
        vlSelf->__PVT__bank1_2 = 0U;
        vlSelf->__PVT__bank1_3 = 0U;
        vlSelf->__PVT__bank1_4 = 0U;
        vlSelf->__PVT__bank1_5 = 0U;
        vlSelf->__PVT__bank1_6 = 0U;
        vlSelf->__PVT__bank1_7 = 0U;
        vlSelf->__PVT__bank1_8 = 0U;
        vlSelf->__PVT__bank1_9 = 0U;
        vlSelf->__PVT__bank1_10 = 0U;
        vlSelf->__PVT__bank1_11 = 0U;
        vlSelf->__PVT__bank1_12 = 0U;
        vlSelf->__PVT__bank1_13 = 0U;
        vlSelf->__PVT__bank1_14 = 0U;
        vlSelf->__PVT__bank1_15 = 0U;
        __Vdly__write_bank = 0U;
        vlSelf->__PVT__row_ptr = 0U;
    } else if (vlSelf->__PVT___readWriteCollision_T) {
        if ((1U & (~ (IData)(vlSelf->__PVT__write_bank)))) {
            if ((0U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_0 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((1U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_1 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((2U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_2 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((3U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_3 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((4U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_4 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((5U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_5 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((6U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_6 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((7U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_7 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((8U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_8 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((9U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_9 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xaU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_10 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xbU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_11 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xcU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_12 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xdU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_13 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xeU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_14 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xfU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_15 = (IData)(vlSelf->__PVT__current_sum_full);
            }
        }
        if (vlSelf->__PVT__write_bank) {
            if ((0U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_0 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((1U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_1 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((2U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_2 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((3U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_3 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((4U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_4 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((5U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_5 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((6U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_6 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((7U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_7 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((8U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_8 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((9U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_9 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xaU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_10 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xbU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_11 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xcU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_12 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xdU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_13 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xeU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_14 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xfU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_15 = (IData)(vlSelf->__PVT__current_sum_full);
            }
        }
        if (vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__buffers_0_io_snapshot) {
            __Vdly__write_bank = (1U & (~ (IData)(vlSelf->__PVT__write_bank)));
        }
        vlSelf->__PVT__row_ptr = ((IData)(vlSelf->__PVT__lastRow)
                                   ? 0U : (IData)(vlSelf->__PVT___row_ptr_T_1));
    }
    vlSelf->__PVT__write_bank = __Vdly__write_bank;
    vlSelf->io_out_scalar = ((IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__streamBank)
                              ? ((0xfU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                  ? vlSelf->__PVT__bank1_15
                                  : ((0xeU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                      ? vlSelf->__PVT__bank1_14
                                      : ((0xdU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                          ? vlSelf->__PVT__bank1_13
                                          : ((0xcU 
                                              == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                              ? vlSelf->__PVT__bank1_12
                                              : ((0xbU 
                                                  == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                  ? vlSelf->__PVT__bank1_11
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                   ? vlSelf->__PVT__bank1_10
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                    ? vlSelf->__PVT__bank1_9
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                     ? vlSelf->__PVT__bank1_8
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                      ? vlSelf->__PVT__bank1_7
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                       ? vlSelf->__PVT__bank1_6
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                        ? vlSelf->__PVT__bank1_5
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                         ? vlSelf->__PVT__bank1_4
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                          ? vlSelf->__PVT__bank1_3
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                           ? vlSelf->__PVT__bank1_2
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                            ? vlSelf->__PVT__bank1_1
                                                            : vlSelf->__PVT__bank1_0)))))))))))))))
                              : ((0xfU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                  ? vlSelf->__PVT__bank0_15
                                  : ((0xeU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                      ? vlSelf->__PVT__bank0_14
                                      : ((0xdU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                          ? vlSelf->__PVT__bank0_13
                                          : ((0xcU 
                                              == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                              ? vlSelf->__PVT__bank0_12
                                              : ((0xbU 
                                                  == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                  ? vlSelf->__PVT__bank0_11
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                   ? vlSelf->__PVT__bank0_10
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                    ? vlSelf->__PVT__bank0_9
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                     ? vlSelf->__PVT__bank0_8
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                      ? vlSelf->__PVT__bank0_7
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                       ? vlSelf->__PVT__bank0_6
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                        ? vlSelf->__PVT__bank0_5
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                         ? vlSelf->__PVT__bank0_4
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                          ? vlSelf->__PVT__bank0_3
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                           ? vlSelf->__PVT__bank0_2
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                            ? vlSelf->__PVT__bank0_1
                                                            : vlSelf->__PVT__bank0_0))))))))))))))));
    vlSelf->__PVT___readWriteCollision_T = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                            & (IData)(vlSymsp->TOP.TPU_top__DOT__mxu__DOT__macs_15_0__DOT__outValidReg));
    vlSelf->__PVT__lastRow = (0xfU == (IData)(vlSelf->__PVT__row_ptr));
    vlSelf->__PVT___row_ptr_T_1 = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__row_ptr)));
    vlSelf->__PVT__current_sum_full = (0x1ffffffffULL 
                                       & (VL_EXTENDS_QI(33,32, 
                                                        ((0U 
                                                          == vlSymsp->TOP.TPU_top__DOT__timer__DOT__kTileCounter)
                                                          ? 0U
                                                          : 
                                                         ((IData)(vlSelf->__PVT__write_bank)
                                                           ? 
                                                          ((0xfU 
                                                            == (IData)(vlSelf->__PVT__row_ptr))
                                                            ? vlSelf->__PVT__bank1_15
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->__PVT__row_ptr))
                                                             ? vlSelf->__PVT__bank1_14
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(vlSelf->__PVT__row_ptr))
                                                              ? vlSelf->__PVT__bank1_13
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(vlSelf->__PVT__row_ptr))
                                                               ? vlSelf->__PVT__bank1_12
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(vlSelf->__PVT__row_ptr))
                                                                ? vlSelf->__PVT__bank1_11
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(vlSelf->__PVT__row_ptr))
                                                                 ? vlSelf->__PVT__bank1_10
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(vlSelf->__PVT__row_ptr))
                                                                  ? vlSelf->__PVT__bank1_9
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(vlSelf->__PVT__row_ptr))
                                                                   ? vlSelf->__PVT__bank1_8
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(vlSelf->__PVT__row_ptr))
                                                                    ? vlSelf->__PVT__bank1_7
                                                                    : 
                                                                   ((6U 
                                                                     == (IData)(vlSelf->__PVT__row_ptr))
                                                                     ? vlSelf->__PVT__bank1_6
                                                                     : 
                                                                    ((5U 
                                                                      == (IData)(vlSelf->__PVT__row_ptr))
                                                                      ? vlSelf->__PVT__bank1_5
                                                                      : 
                                                                     ((4U 
                                                                       == (IData)(vlSelf->__PVT__row_ptr))
                                                                       ? vlSelf->__PVT__bank1_4
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSelf->__PVT__row_ptr))
                                                                        ? vlSelf->__PVT__bank1_3
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelf->__PVT__row_ptr))
                                                                         ? vlSelf->__PVT__bank1_2
                                                                         : 
                                                                        ((1U 
                                                                          == (IData)(vlSelf->__PVT__row_ptr))
                                                                          ? vlSelf->__PVT__bank1_1
                                                                          : vlSelf->__PVT__bank1_0)))))))))))))))
                                                           : 
                                                          ((0xfU 
                                                            == (IData)(vlSelf->__PVT__row_ptr))
                                                            ? vlSelf->__PVT__bank0_15
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->__PVT__row_ptr))
                                                             ? vlSelf->__PVT__bank0_14
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(vlSelf->__PVT__row_ptr))
                                                              ? vlSelf->__PVT__bank0_13
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(vlSelf->__PVT__row_ptr))
                                                               ? vlSelf->__PVT__bank0_12
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(vlSelf->__PVT__row_ptr))
                                                                ? vlSelf->__PVT__bank0_11
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(vlSelf->__PVT__row_ptr))
                                                                 ? vlSelf->__PVT__bank0_10
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(vlSelf->__PVT__row_ptr))
                                                                  ? vlSelf->__PVT__bank0_9
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(vlSelf->__PVT__row_ptr))
                                                                   ? vlSelf->__PVT__bank0_8
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(vlSelf->__PVT__row_ptr))
                                                                    ? vlSelf->__PVT__bank0_7
                                                                    : 
                                                                   ((6U 
                                                                     == (IData)(vlSelf->__PVT__row_ptr))
                                                                     ? vlSelf->__PVT__bank0_6
                                                                     : 
                                                                    ((5U 
                                                                      == (IData)(vlSelf->__PVT__row_ptr))
                                                                      ? vlSelf->__PVT__bank0_5
                                                                      : 
                                                                     ((4U 
                                                                       == (IData)(vlSelf->__PVT__row_ptr))
                                                                       ? vlSelf->__PVT__bank0_4
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSelf->__PVT__row_ptr))
                                                                        ? vlSelf->__PVT__bank0_3
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelf->__PVT__row_ptr))
                                                                         ? vlSelf->__PVT__bank0_2
                                                                         : 
                                                                        ((1U 
                                                                          == (IData)(vlSelf->__PVT__row_ptr))
                                                                          ? vlSelf->__PVT__bank0_1
                                                                          : vlSelf->__PVT__bank0_0)))))))))))))))))) 
                                          + VL_EXTENDS_QI(33,32, vlSymsp->TOP.TPU_top__DOT__mxu__DOT__macs_15_0__DOT__outMacReg)));
}

VL_INLINE_OPT void VTPU_top_Accum_buffer___ico_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_1__0(VTPU_top_Accum_buffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTPU_top_Accum_buffer___ico_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_1__0\n"); );
    // Body
    vlSelf->__PVT___readWriteCollision_T = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                            & (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__accumEnByCol_1_r));
}

VL_INLINE_OPT void VTPU_top_Accum_buffer___nba_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_1__0(VTPU_top_Accum_buffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTPU_top_Accum_buffer___nba_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_1__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__write_bank;
    __Vdly__write_bank = 0;
    // Body
    __Vdly__write_bank = vlSelf->__PVT__write_bank;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bank0_0 = 0U;
        vlSelf->__PVT__bank0_1 = 0U;
        vlSelf->__PVT__bank0_2 = 0U;
        vlSelf->__PVT__bank0_3 = 0U;
        vlSelf->__PVT__bank0_4 = 0U;
        vlSelf->__PVT__bank0_5 = 0U;
        vlSelf->__PVT__bank0_6 = 0U;
        vlSelf->__PVT__bank0_7 = 0U;
        vlSelf->__PVT__bank0_8 = 0U;
        vlSelf->__PVT__bank0_9 = 0U;
        vlSelf->__PVT__bank0_10 = 0U;
        vlSelf->__PVT__bank0_11 = 0U;
        vlSelf->__PVT__bank0_12 = 0U;
        vlSelf->__PVT__bank0_13 = 0U;
        vlSelf->__PVT__bank0_14 = 0U;
        vlSelf->__PVT__bank0_15 = 0U;
        vlSelf->__PVT__bank1_0 = 0U;
        vlSelf->__PVT__bank1_1 = 0U;
        vlSelf->__PVT__bank1_2 = 0U;
        vlSelf->__PVT__bank1_3 = 0U;
        vlSelf->__PVT__bank1_4 = 0U;
        vlSelf->__PVT__bank1_5 = 0U;
        vlSelf->__PVT__bank1_6 = 0U;
        vlSelf->__PVT__bank1_7 = 0U;
        vlSelf->__PVT__bank1_8 = 0U;
        vlSelf->__PVT__bank1_9 = 0U;
        vlSelf->__PVT__bank1_10 = 0U;
        vlSelf->__PVT__bank1_11 = 0U;
        vlSelf->__PVT__bank1_12 = 0U;
        vlSelf->__PVT__bank1_13 = 0U;
        vlSelf->__PVT__bank1_14 = 0U;
        vlSelf->__PVT__bank1_15 = 0U;
        __Vdly__write_bank = 0U;
        vlSelf->__PVT__row_ptr = 0U;
    } else if (vlSelf->__PVT___readWriteCollision_T) {
        if ((1U & (~ (IData)(vlSelf->__PVT__write_bank)))) {
            if ((0U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_0 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((1U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_1 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((2U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_2 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((3U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_3 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((4U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_4 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((5U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_5 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((6U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_6 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((7U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_7 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((8U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_8 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((9U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_9 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xaU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_10 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xbU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_11 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xcU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_12 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xdU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_13 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xeU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_14 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xfU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_15 = (IData)(vlSelf->__PVT__current_sum_full);
            }
        }
        if (vlSelf->__PVT__write_bank) {
            if ((0U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_0 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((1U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_1 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((2U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_2 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((3U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_3 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((4U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_4 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((5U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_5 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((6U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_6 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((7U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_7 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((8U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_8 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((9U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_9 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xaU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_10 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xbU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_11 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xcU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_12 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xdU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_13 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xeU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_14 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xfU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_15 = (IData)(vlSelf->__PVT__current_sum_full);
            }
        }
        if (vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__snapshotByCol_1_r) {
            __Vdly__write_bank = (1U & (~ (IData)(vlSelf->__PVT__write_bank)));
        }
        vlSelf->__PVT__row_ptr = ((IData)(vlSelf->__PVT__lastRow)
                                   ? 0U : (IData)(vlSelf->__PVT___row_ptr_T_1));
    }
    vlSelf->__PVT__write_bank = __Vdly__write_bank;
    vlSelf->io_out_scalar = ((IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__streamBank)
                              ? ((0xfU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                  ? vlSelf->__PVT__bank1_15
                                  : ((0xeU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                      ? vlSelf->__PVT__bank1_14
                                      : ((0xdU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                          ? vlSelf->__PVT__bank1_13
                                          : ((0xcU 
                                              == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                              ? vlSelf->__PVT__bank1_12
                                              : ((0xbU 
                                                  == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                  ? vlSelf->__PVT__bank1_11
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                   ? vlSelf->__PVT__bank1_10
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                    ? vlSelf->__PVT__bank1_9
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                     ? vlSelf->__PVT__bank1_8
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                      ? vlSelf->__PVT__bank1_7
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                       ? vlSelf->__PVT__bank1_6
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                        ? vlSelf->__PVT__bank1_5
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                         ? vlSelf->__PVT__bank1_4
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                          ? vlSelf->__PVT__bank1_3
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                           ? vlSelf->__PVT__bank1_2
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                            ? vlSelf->__PVT__bank1_1
                                                            : vlSelf->__PVT__bank1_0)))))))))))))))
                              : ((0xfU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                  ? vlSelf->__PVT__bank0_15
                                  : ((0xeU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                      ? vlSelf->__PVT__bank0_14
                                      : ((0xdU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                          ? vlSelf->__PVT__bank0_13
                                          : ((0xcU 
                                              == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                              ? vlSelf->__PVT__bank0_12
                                              : ((0xbU 
                                                  == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                  ? vlSelf->__PVT__bank0_11
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                   ? vlSelf->__PVT__bank0_10
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                    ? vlSelf->__PVT__bank0_9
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                     ? vlSelf->__PVT__bank0_8
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                      ? vlSelf->__PVT__bank0_7
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                       ? vlSelf->__PVT__bank0_6
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                        ? vlSelf->__PVT__bank0_5
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                         ? vlSelf->__PVT__bank0_4
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                          ? vlSelf->__PVT__bank0_3
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                           ? vlSelf->__PVT__bank0_2
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                            ? vlSelf->__PVT__bank0_1
                                                            : vlSelf->__PVT__bank0_0))))))))))))))));
    vlSelf->__PVT___readWriteCollision_T = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                            & (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__accumEnByCol_1_r));
    vlSelf->__PVT__lastRow = (0xfU == (IData)(vlSelf->__PVT__row_ptr));
    vlSelf->__PVT___row_ptr_T_1 = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__row_ptr)));
    vlSelf->__PVT__current_sum_full = (0x1ffffffffULL 
                                       & (VL_EXTENDS_QI(33,32, 
                                                        ((IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__firstByCol_1_r)
                                                          ? 0U
                                                          : 
                                                         ((IData)(vlSelf->__PVT__write_bank)
                                                           ? 
                                                          ((0xfU 
                                                            == (IData)(vlSelf->__PVT__row_ptr))
                                                            ? vlSelf->__PVT__bank1_15
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->__PVT__row_ptr))
                                                             ? vlSelf->__PVT__bank1_14
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(vlSelf->__PVT__row_ptr))
                                                              ? vlSelf->__PVT__bank1_13
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(vlSelf->__PVT__row_ptr))
                                                               ? vlSelf->__PVT__bank1_12
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(vlSelf->__PVT__row_ptr))
                                                                ? vlSelf->__PVT__bank1_11
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(vlSelf->__PVT__row_ptr))
                                                                 ? vlSelf->__PVT__bank1_10
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(vlSelf->__PVT__row_ptr))
                                                                  ? vlSelf->__PVT__bank1_9
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(vlSelf->__PVT__row_ptr))
                                                                   ? vlSelf->__PVT__bank1_8
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(vlSelf->__PVT__row_ptr))
                                                                    ? vlSelf->__PVT__bank1_7
                                                                    : 
                                                                   ((6U 
                                                                     == (IData)(vlSelf->__PVT__row_ptr))
                                                                     ? vlSelf->__PVT__bank1_6
                                                                     : 
                                                                    ((5U 
                                                                      == (IData)(vlSelf->__PVT__row_ptr))
                                                                      ? vlSelf->__PVT__bank1_5
                                                                      : 
                                                                     ((4U 
                                                                       == (IData)(vlSelf->__PVT__row_ptr))
                                                                       ? vlSelf->__PVT__bank1_4
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSelf->__PVT__row_ptr))
                                                                        ? vlSelf->__PVT__bank1_3
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelf->__PVT__row_ptr))
                                                                         ? vlSelf->__PVT__bank1_2
                                                                         : 
                                                                        ((1U 
                                                                          == (IData)(vlSelf->__PVT__row_ptr))
                                                                          ? vlSelf->__PVT__bank1_1
                                                                          : vlSelf->__PVT__bank1_0)))))))))))))))
                                                           : 
                                                          ((0xfU 
                                                            == (IData)(vlSelf->__PVT__row_ptr))
                                                            ? vlSelf->__PVT__bank0_15
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->__PVT__row_ptr))
                                                             ? vlSelf->__PVT__bank0_14
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(vlSelf->__PVT__row_ptr))
                                                              ? vlSelf->__PVT__bank0_13
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(vlSelf->__PVT__row_ptr))
                                                               ? vlSelf->__PVT__bank0_12
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(vlSelf->__PVT__row_ptr))
                                                                ? vlSelf->__PVT__bank0_11
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(vlSelf->__PVT__row_ptr))
                                                                 ? vlSelf->__PVT__bank0_10
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(vlSelf->__PVT__row_ptr))
                                                                  ? vlSelf->__PVT__bank0_9
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(vlSelf->__PVT__row_ptr))
                                                                   ? vlSelf->__PVT__bank0_8
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(vlSelf->__PVT__row_ptr))
                                                                    ? vlSelf->__PVT__bank0_7
                                                                    : 
                                                                   ((6U 
                                                                     == (IData)(vlSelf->__PVT__row_ptr))
                                                                     ? vlSelf->__PVT__bank0_6
                                                                     : 
                                                                    ((5U 
                                                                      == (IData)(vlSelf->__PVT__row_ptr))
                                                                      ? vlSelf->__PVT__bank0_5
                                                                      : 
                                                                     ((4U 
                                                                       == (IData)(vlSelf->__PVT__row_ptr))
                                                                       ? vlSelf->__PVT__bank0_4
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSelf->__PVT__row_ptr))
                                                                        ? vlSelf->__PVT__bank0_3
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelf->__PVT__row_ptr))
                                                                         ? vlSelf->__PVT__bank0_2
                                                                         : 
                                                                        ((1U 
                                                                          == (IData)(vlSelf->__PVT__row_ptr))
                                                                          ? vlSelf->__PVT__bank0_1
                                                                          : vlSelf->__PVT__bank0_0)))))))))))))))))) 
                                          + VL_EXTENDS_QI(33,32, vlSymsp->TOP.TPU_top__DOT__mxu__DOT__macs_15_1__DOT__outMacReg)));
}

VL_INLINE_OPT void VTPU_top_Accum_buffer___ico_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_2__0(VTPU_top_Accum_buffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTPU_top_Accum_buffer___ico_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_2__0\n"); );
    // Body
    vlSelf->__PVT___readWriteCollision_T = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                            & (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__accumEnByCol_2_r));
}

VL_INLINE_OPT void VTPU_top_Accum_buffer___nba_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_2__0(VTPU_top_Accum_buffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTPU_top_Accum_buffer___nba_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_2__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__write_bank;
    __Vdly__write_bank = 0;
    // Body
    __Vdly__write_bank = vlSelf->__PVT__write_bank;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bank0_0 = 0U;
        vlSelf->__PVT__bank0_1 = 0U;
        vlSelf->__PVT__bank0_2 = 0U;
        vlSelf->__PVT__bank0_3 = 0U;
        vlSelf->__PVT__bank0_4 = 0U;
        vlSelf->__PVT__bank0_5 = 0U;
        vlSelf->__PVT__bank0_6 = 0U;
        vlSelf->__PVT__bank0_7 = 0U;
        vlSelf->__PVT__bank0_8 = 0U;
        vlSelf->__PVT__bank0_9 = 0U;
        vlSelf->__PVT__bank0_10 = 0U;
        vlSelf->__PVT__bank0_11 = 0U;
        vlSelf->__PVT__bank0_12 = 0U;
        vlSelf->__PVT__bank0_13 = 0U;
        vlSelf->__PVT__bank0_14 = 0U;
        vlSelf->__PVT__bank0_15 = 0U;
        vlSelf->__PVT__bank1_0 = 0U;
        vlSelf->__PVT__bank1_1 = 0U;
        vlSelf->__PVT__bank1_2 = 0U;
        vlSelf->__PVT__bank1_3 = 0U;
        vlSelf->__PVT__bank1_4 = 0U;
        vlSelf->__PVT__bank1_5 = 0U;
        vlSelf->__PVT__bank1_6 = 0U;
        vlSelf->__PVT__bank1_7 = 0U;
        vlSelf->__PVT__bank1_8 = 0U;
        vlSelf->__PVT__bank1_9 = 0U;
        vlSelf->__PVT__bank1_10 = 0U;
        vlSelf->__PVT__bank1_11 = 0U;
        vlSelf->__PVT__bank1_12 = 0U;
        vlSelf->__PVT__bank1_13 = 0U;
        vlSelf->__PVT__bank1_14 = 0U;
        vlSelf->__PVT__bank1_15 = 0U;
        __Vdly__write_bank = 0U;
        vlSelf->__PVT__row_ptr = 0U;
    } else if (vlSelf->__PVT___readWriteCollision_T) {
        if ((1U & (~ (IData)(vlSelf->__PVT__write_bank)))) {
            if ((0U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_0 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((1U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_1 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((2U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_2 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((3U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_3 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((4U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_4 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((5U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_5 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((6U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_6 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((7U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_7 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((8U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_8 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((9U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_9 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xaU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_10 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xbU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_11 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xcU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_12 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xdU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_13 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xeU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_14 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xfU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_15 = (IData)(vlSelf->__PVT__current_sum_full);
            }
        }
        if (vlSelf->__PVT__write_bank) {
            if ((0U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_0 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((1U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_1 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((2U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_2 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((3U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_3 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((4U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_4 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((5U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_5 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((6U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_6 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((7U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_7 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((8U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_8 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((9U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_9 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xaU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_10 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xbU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_11 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xcU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_12 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xdU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_13 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xeU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_14 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xfU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_15 = (IData)(vlSelf->__PVT__current_sum_full);
            }
        }
        if (vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__snapshotByCol_2_r) {
            __Vdly__write_bank = (1U & (~ (IData)(vlSelf->__PVT__write_bank)));
        }
        vlSelf->__PVT__row_ptr = ((IData)(vlSelf->__PVT__lastRow)
                                   ? 0U : (IData)(vlSelf->__PVT___row_ptr_T_1));
    }
    vlSelf->__PVT__write_bank = __Vdly__write_bank;
    vlSelf->io_out_scalar = ((IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__streamBank)
                              ? ((0xfU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                  ? vlSelf->__PVT__bank1_15
                                  : ((0xeU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                      ? vlSelf->__PVT__bank1_14
                                      : ((0xdU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                          ? vlSelf->__PVT__bank1_13
                                          : ((0xcU 
                                              == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                              ? vlSelf->__PVT__bank1_12
                                              : ((0xbU 
                                                  == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                  ? vlSelf->__PVT__bank1_11
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                   ? vlSelf->__PVT__bank1_10
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                    ? vlSelf->__PVT__bank1_9
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                     ? vlSelf->__PVT__bank1_8
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                      ? vlSelf->__PVT__bank1_7
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                       ? vlSelf->__PVT__bank1_6
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                        ? vlSelf->__PVT__bank1_5
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                         ? vlSelf->__PVT__bank1_4
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                          ? vlSelf->__PVT__bank1_3
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                           ? vlSelf->__PVT__bank1_2
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                            ? vlSelf->__PVT__bank1_1
                                                            : vlSelf->__PVT__bank1_0)))))))))))))))
                              : ((0xfU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                  ? vlSelf->__PVT__bank0_15
                                  : ((0xeU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                      ? vlSelf->__PVT__bank0_14
                                      : ((0xdU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                          ? vlSelf->__PVT__bank0_13
                                          : ((0xcU 
                                              == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                              ? vlSelf->__PVT__bank0_12
                                              : ((0xbU 
                                                  == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                  ? vlSelf->__PVT__bank0_11
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                   ? vlSelf->__PVT__bank0_10
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                    ? vlSelf->__PVT__bank0_9
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                     ? vlSelf->__PVT__bank0_8
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                      ? vlSelf->__PVT__bank0_7
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                       ? vlSelf->__PVT__bank0_6
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                        ? vlSelf->__PVT__bank0_5
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                         ? vlSelf->__PVT__bank0_4
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                          ? vlSelf->__PVT__bank0_3
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                           ? vlSelf->__PVT__bank0_2
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                            ? vlSelf->__PVT__bank0_1
                                                            : vlSelf->__PVT__bank0_0))))))))))))))));
    vlSelf->__PVT___readWriteCollision_T = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                            & (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__accumEnByCol_2_r));
    vlSelf->__PVT__lastRow = (0xfU == (IData)(vlSelf->__PVT__row_ptr));
    vlSelf->__PVT___row_ptr_T_1 = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__row_ptr)));
    vlSelf->__PVT__current_sum_full = (0x1ffffffffULL 
                                       & (VL_EXTENDS_QI(33,32, 
                                                        ((IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__firstByCol_2_r)
                                                          ? 0U
                                                          : 
                                                         ((IData)(vlSelf->__PVT__write_bank)
                                                           ? 
                                                          ((0xfU 
                                                            == (IData)(vlSelf->__PVT__row_ptr))
                                                            ? vlSelf->__PVT__bank1_15
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->__PVT__row_ptr))
                                                             ? vlSelf->__PVT__bank1_14
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(vlSelf->__PVT__row_ptr))
                                                              ? vlSelf->__PVT__bank1_13
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(vlSelf->__PVT__row_ptr))
                                                               ? vlSelf->__PVT__bank1_12
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(vlSelf->__PVT__row_ptr))
                                                                ? vlSelf->__PVT__bank1_11
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(vlSelf->__PVT__row_ptr))
                                                                 ? vlSelf->__PVT__bank1_10
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(vlSelf->__PVT__row_ptr))
                                                                  ? vlSelf->__PVT__bank1_9
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(vlSelf->__PVT__row_ptr))
                                                                   ? vlSelf->__PVT__bank1_8
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(vlSelf->__PVT__row_ptr))
                                                                    ? vlSelf->__PVT__bank1_7
                                                                    : 
                                                                   ((6U 
                                                                     == (IData)(vlSelf->__PVT__row_ptr))
                                                                     ? vlSelf->__PVT__bank1_6
                                                                     : 
                                                                    ((5U 
                                                                      == (IData)(vlSelf->__PVT__row_ptr))
                                                                      ? vlSelf->__PVT__bank1_5
                                                                      : 
                                                                     ((4U 
                                                                       == (IData)(vlSelf->__PVT__row_ptr))
                                                                       ? vlSelf->__PVT__bank1_4
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSelf->__PVT__row_ptr))
                                                                        ? vlSelf->__PVT__bank1_3
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelf->__PVT__row_ptr))
                                                                         ? vlSelf->__PVT__bank1_2
                                                                         : 
                                                                        ((1U 
                                                                          == (IData)(vlSelf->__PVT__row_ptr))
                                                                          ? vlSelf->__PVT__bank1_1
                                                                          : vlSelf->__PVT__bank1_0)))))))))))))))
                                                           : 
                                                          ((0xfU 
                                                            == (IData)(vlSelf->__PVT__row_ptr))
                                                            ? vlSelf->__PVT__bank0_15
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->__PVT__row_ptr))
                                                             ? vlSelf->__PVT__bank0_14
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(vlSelf->__PVT__row_ptr))
                                                              ? vlSelf->__PVT__bank0_13
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(vlSelf->__PVT__row_ptr))
                                                               ? vlSelf->__PVT__bank0_12
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(vlSelf->__PVT__row_ptr))
                                                                ? vlSelf->__PVT__bank0_11
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(vlSelf->__PVT__row_ptr))
                                                                 ? vlSelf->__PVT__bank0_10
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(vlSelf->__PVT__row_ptr))
                                                                  ? vlSelf->__PVT__bank0_9
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(vlSelf->__PVT__row_ptr))
                                                                   ? vlSelf->__PVT__bank0_8
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(vlSelf->__PVT__row_ptr))
                                                                    ? vlSelf->__PVT__bank0_7
                                                                    : 
                                                                   ((6U 
                                                                     == (IData)(vlSelf->__PVT__row_ptr))
                                                                     ? vlSelf->__PVT__bank0_6
                                                                     : 
                                                                    ((5U 
                                                                      == (IData)(vlSelf->__PVT__row_ptr))
                                                                      ? vlSelf->__PVT__bank0_5
                                                                      : 
                                                                     ((4U 
                                                                       == (IData)(vlSelf->__PVT__row_ptr))
                                                                       ? vlSelf->__PVT__bank0_4
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSelf->__PVT__row_ptr))
                                                                        ? vlSelf->__PVT__bank0_3
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelf->__PVT__row_ptr))
                                                                         ? vlSelf->__PVT__bank0_2
                                                                         : 
                                                                        ((1U 
                                                                          == (IData)(vlSelf->__PVT__row_ptr))
                                                                          ? vlSelf->__PVT__bank0_1
                                                                          : vlSelf->__PVT__bank0_0)))))))))))))))))) 
                                          + VL_EXTENDS_QI(33,32, vlSymsp->TOP.TPU_top__DOT__mxu__DOT__macs_15_2__DOT__outMacReg)));
}

VL_INLINE_OPT void VTPU_top_Accum_buffer___ico_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_3__0(VTPU_top_Accum_buffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTPU_top_Accum_buffer___ico_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_3__0\n"); );
    // Body
    vlSelf->__PVT___readWriteCollision_T = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                            & (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__accumEnByCol_3_r));
}

VL_INLINE_OPT void VTPU_top_Accum_buffer___nba_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_3__0(VTPU_top_Accum_buffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTPU_top_Accum_buffer___nba_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_3__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__write_bank;
    __Vdly__write_bank = 0;
    // Body
    __Vdly__write_bank = vlSelf->__PVT__write_bank;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bank0_0 = 0U;
        vlSelf->__PVT__bank0_1 = 0U;
        vlSelf->__PVT__bank0_2 = 0U;
        vlSelf->__PVT__bank0_3 = 0U;
        vlSelf->__PVT__bank0_4 = 0U;
        vlSelf->__PVT__bank0_5 = 0U;
        vlSelf->__PVT__bank0_6 = 0U;
        vlSelf->__PVT__bank0_7 = 0U;
        vlSelf->__PVT__bank0_8 = 0U;
        vlSelf->__PVT__bank0_9 = 0U;
        vlSelf->__PVT__bank0_10 = 0U;
        vlSelf->__PVT__bank0_11 = 0U;
        vlSelf->__PVT__bank0_12 = 0U;
        vlSelf->__PVT__bank0_13 = 0U;
        vlSelf->__PVT__bank0_14 = 0U;
        vlSelf->__PVT__bank0_15 = 0U;
        vlSelf->__PVT__bank1_0 = 0U;
        vlSelf->__PVT__bank1_1 = 0U;
        vlSelf->__PVT__bank1_2 = 0U;
        vlSelf->__PVT__bank1_3 = 0U;
        vlSelf->__PVT__bank1_4 = 0U;
        vlSelf->__PVT__bank1_5 = 0U;
        vlSelf->__PVT__bank1_6 = 0U;
        vlSelf->__PVT__bank1_7 = 0U;
        vlSelf->__PVT__bank1_8 = 0U;
        vlSelf->__PVT__bank1_9 = 0U;
        vlSelf->__PVT__bank1_10 = 0U;
        vlSelf->__PVT__bank1_11 = 0U;
        vlSelf->__PVT__bank1_12 = 0U;
        vlSelf->__PVT__bank1_13 = 0U;
        vlSelf->__PVT__bank1_14 = 0U;
        vlSelf->__PVT__bank1_15 = 0U;
        __Vdly__write_bank = 0U;
        vlSelf->__PVT__row_ptr = 0U;
    } else if (vlSelf->__PVT___readWriteCollision_T) {
        if ((1U & (~ (IData)(vlSelf->__PVT__write_bank)))) {
            if ((0U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_0 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((1U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_1 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((2U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_2 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((3U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_3 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((4U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_4 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((5U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_5 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((6U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_6 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((7U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_7 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((8U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_8 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((9U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_9 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xaU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_10 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xbU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_11 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xcU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_12 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xdU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_13 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xeU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_14 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xfU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_15 = (IData)(vlSelf->__PVT__current_sum_full);
            }
        }
        if (vlSelf->__PVT__write_bank) {
            if ((0U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_0 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((1U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_1 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((2U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_2 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((3U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_3 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((4U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_4 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((5U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_5 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((6U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_6 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((7U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_7 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((8U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_8 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((9U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_9 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xaU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_10 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xbU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_11 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xcU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_12 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xdU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_13 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xeU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_14 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xfU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_15 = (IData)(vlSelf->__PVT__current_sum_full);
            }
        }
        if (vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__snapshotByCol_3_r) {
            __Vdly__write_bank = (1U & (~ (IData)(vlSelf->__PVT__write_bank)));
        }
        vlSelf->__PVT__row_ptr = ((IData)(vlSelf->__PVT__lastRow)
                                   ? 0U : (IData)(vlSelf->__PVT___row_ptr_T_1));
    }
    vlSelf->__PVT__write_bank = __Vdly__write_bank;
    vlSelf->io_out_scalar = ((IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__streamBank)
                              ? ((0xfU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                  ? vlSelf->__PVT__bank1_15
                                  : ((0xeU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                      ? vlSelf->__PVT__bank1_14
                                      : ((0xdU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                          ? vlSelf->__PVT__bank1_13
                                          : ((0xcU 
                                              == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                              ? vlSelf->__PVT__bank1_12
                                              : ((0xbU 
                                                  == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                  ? vlSelf->__PVT__bank1_11
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                   ? vlSelf->__PVT__bank1_10
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                    ? vlSelf->__PVT__bank1_9
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                     ? vlSelf->__PVT__bank1_8
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                      ? vlSelf->__PVT__bank1_7
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                       ? vlSelf->__PVT__bank1_6
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                        ? vlSelf->__PVT__bank1_5
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                         ? vlSelf->__PVT__bank1_4
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                          ? vlSelf->__PVT__bank1_3
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                           ? vlSelf->__PVT__bank1_2
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                            ? vlSelf->__PVT__bank1_1
                                                            : vlSelf->__PVT__bank1_0)))))))))))))))
                              : ((0xfU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                  ? vlSelf->__PVT__bank0_15
                                  : ((0xeU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                      ? vlSelf->__PVT__bank0_14
                                      : ((0xdU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                          ? vlSelf->__PVT__bank0_13
                                          : ((0xcU 
                                              == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                              ? vlSelf->__PVT__bank0_12
                                              : ((0xbU 
                                                  == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                  ? vlSelf->__PVT__bank0_11
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                   ? vlSelf->__PVT__bank0_10
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                    ? vlSelf->__PVT__bank0_9
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                     ? vlSelf->__PVT__bank0_8
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                      ? vlSelf->__PVT__bank0_7
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                       ? vlSelf->__PVT__bank0_6
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                        ? vlSelf->__PVT__bank0_5
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                         ? vlSelf->__PVT__bank0_4
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                          ? vlSelf->__PVT__bank0_3
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                           ? vlSelf->__PVT__bank0_2
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                            ? vlSelf->__PVT__bank0_1
                                                            : vlSelf->__PVT__bank0_0))))))))))))))));
    vlSelf->__PVT___readWriteCollision_T = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                            & (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__accumEnByCol_3_r));
    vlSelf->__PVT__lastRow = (0xfU == (IData)(vlSelf->__PVT__row_ptr));
    vlSelf->__PVT___row_ptr_T_1 = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__row_ptr)));
    vlSelf->__PVT__current_sum_full = (0x1ffffffffULL 
                                       & (VL_EXTENDS_QI(33,32, 
                                                        ((IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__firstByCol_3_r)
                                                          ? 0U
                                                          : 
                                                         ((IData)(vlSelf->__PVT__write_bank)
                                                           ? 
                                                          ((0xfU 
                                                            == (IData)(vlSelf->__PVT__row_ptr))
                                                            ? vlSelf->__PVT__bank1_15
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->__PVT__row_ptr))
                                                             ? vlSelf->__PVT__bank1_14
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(vlSelf->__PVT__row_ptr))
                                                              ? vlSelf->__PVT__bank1_13
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(vlSelf->__PVT__row_ptr))
                                                               ? vlSelf->__PVT__bank1_12
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(vlSelf->__PVT__row_ptr))
                                                                ? vlSelf->__PVT__bank1_11
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(vlSelf->__PVT__row_ptr))
                                                                 ? vlSelf->__PVT__bank1_10
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(vlSelf->__PVT__row_ptr))
                                                                  ? vlSelf->__PVT__bank1_9
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(vlSelf->__PVT__row_ptr))
                                                                   ? vlSelf->__PVT__bank1_8
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(vlSelf->__PVT__row_ptr))
                                                                    ? vlSelf->__PVT__bank1_7
                                                                    : 
                                                                   ((6U 
                                                                     == (IData)(vlSelf->__PVT__row_ptr))
                                                                     ? vlSelf->__PVT__bank1_6
                                                                     : 
                                                                    ((5U 
                                                                      == (IData)(vlSelf->__PVT__row_ptr))
                                                                      ? vlSelf->__PVT__bank1_5
                                                                      : 
                                                                     ((4U 
                                                                       == (IData)(vlSelf->__PVT__row_ptr))
                                                                       ? vlSelf->__PVT__bank1_4
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSelf->__PVT__row_ptr))
                                                                        ? vlSelf->__PVT__bank1_3
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelf->__PVT__row_ptr))
                                                                         ? vlSelf->__PVT__bank1_2
                                                                         : 
                                                                        ((1U 
                                                                          == (IData)(vlSelf->__PVT__row_ptr))
                                                                          ? vlSelf->__PVT__bank1_1
                                                                          : vlSelf->__PVT__bank1_0)))))))))))))))
                                                           : 
                                                          ((0xfU 
                                                            == (IData)(vlSelf->__PVT__row_ptr))
                                                            ? vlSelf->__PVT__bank0_15
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->__PVT__row_ptr))
                                                             ? vlSelf->__PVT__bank0_14
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(vlSelf->__PVT__row_ptr))
                                                              ? vlSelf->__PVT__bank0_13
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(vlSelf->__PVT__row_ptr))
                                                               ? vlSelf->__PVT__bank0_12
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(vlSelf->__PVT__row_ptr))
                                                                ? vlSelf->__PVT__bank0_11
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(vlSelf->__PVT__row_ptr))
                                                                 ? vlSelf->__PVT__bank0_10
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(vlSelf->__PVT__row_ptr))
                                                                  ? vlSelf->__PVT__bank0_9
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(vlSelf->__PVT__row_ptr))
                                                                   ? vlSelf->__PVT__bank0_8
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(vlSelf->__PVT__row_ptr))
                                                                    ? vlSelf->__PVT__bank0_7
                                                                    : 
                                                                   ((6U 
                                                                     == (IData)(vlSelf->__PVT__row_ptr))
                                                                     ? vlSelf->__PVT__bank0_6
                                                                     : 
                                                                    ((5U 
                                                                      == (IData)(vlSelf->__PVT__row_ptr))
                                                                      ? vlSelf->__PVT__bank0_5
                                                                      : 
                                                                     ((4U 
                                                                       == (IData)(vlSelf->__PVT__row_ptr))
                                                                       ? vlSelf->__PVT__bank0_4
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSelf->__PVT__row_ptr))
                                                                        ? vlSelf->__PVT__bank0_3
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelf->__PVT__row_ptr))
                                                                         ? vlSelf->__PVT__bank0_2
                                                                         : 
                                                                        ((1U 
                                                                          == (IData)(vlSelf->__PVT__row_ptr))
                                                                          ? vlSelf->__PVT__bank0_1
                                                                          : vlSelf->__PVT__bank0_0)))))))))))))))))) 
                                          + VL_EXTENDS_QI(33,32, vlSymsp->TOP.TPU_top__DOT__mxu__DOT__macs_15_3__DOT__outMacReg)));
}

VL_INLINE_OPT void VTPU_top_Accum_buffer___ico_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_4__0(VTPU_top_Accum_buffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTPU_top_Accum_buffer___ico_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_4__0\n"); );
    // Body
    vlSelf->__PVT___readWriteCollision_T = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                            & (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__accumEnByCol_4_r));
}

VL_INLINE_OPT void VTPU_top_Accum_buffer___nba_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_4__0(VTPU_top_Accum_buffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTPU_top_Accum_buffer___nba_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_4__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__write_bank;
    __Vdly__write_bank = 0;
    // Body
    __Vdly__write_bank = vlSelf->__PVT__write_bank;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bank0_0 = 0U;
        vlSelf->__PVT__bank0_1 = 0U;
        vlSelf->__PVT__bank0_2 = 0U;
        vlSelf->__PVT__bank0_3 = 0U;
        vlSelf->__PVT__bank0_4 = 0U;
        vlSelf->__PVT__bank0_5 = 0U;
        vlSelf->__PVT__bank0_6 = 0U;
        vlSelf->__PVT__bank0_7 = 0U;
        vlSelf->__PVT__bank0_8 = 0U;
        vlSelf->__PVT__bank0_9 = 0U;
        vlSelf->__PVT__bank0_10 = 0U;
        vlSelf->__PVT__bank0_11 = 0U;
        vlSelf->__PVT__bank0_12 = 0U;
        vlSelf->__PVT__bank0_13 = 0U;
        vlSelf->__PVT__bank0_14 = 0U;
        vlSelf->__PVT__bank0_15 = 0U;
        vlSelf->__PVT__bank1_0 = 0U;
        vlSelf->__PVT__bank1_1 = 0U;
        vlSelf->__PVT__bank1_2 = 0U;
        vlSelf->__PVT__bank1_3 = 0U;
        vlSelf->__PVT__bank1_4 = 0U;
        vlSelf->__PVT__bank1_5 = 0U;
        vlSelf->__PVT__bank1_6 = 0U;
        vlSelf->__PVT__bank1_7 = 0U;
        vlSelf->__PVT__bank1_8 = 0U;
        vlSelf->__PVT__bank1_9 = 0U;
        vlSelf->__PVT__bank1_10 = 0U;
        vlSelf->__PVT__bank1_11 = 0U;
        vlSelf->__PVT__bank1_12 = 0U;
        vlSelf->__PVT__bank1_13 = 0U;
        vlSelf->__PVT__bank1_14 = 0U;
        vlSelf->__PVT__bank1_15 = 0U;
        __Vdly__write_bank = 0U;
        vlSelf->__PVT__row_ptr = 0U;
    } else if (vlSelf->__PVT___readWriteCollision_T) {
        if ((1U & (~ (IData)(vlSelf->__PVT__write_bank)))) {
            if ((0U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_0 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((1U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_1 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((2U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_2 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((3U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_3 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((4U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_4 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((5U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_5 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((6U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_6 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((7U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_7 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((8U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_8 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((9U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_9 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xaU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_10 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xbU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_11 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xcU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_12 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xdU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_13 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xeU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_14 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xfU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_15 = (IData)(vlSelf->__PVT__current_sum_full);
            }
        }
        if (vlSelf->__PVT__write_bank) {
            if ((0U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_0 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((1U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_1 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((2U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_2 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((3U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_3 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((4U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_4 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((5U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_5 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((6U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_6 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((7U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_7 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((8U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_8 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((9U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_9 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xaU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_10 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xbU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_11 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xcU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_12 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xdU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_13 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xeU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_14 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xfU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_15 = (IData)(vlSelf->__PVT__current_sum_full);
            }
        }
        if (vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__snapshotByCol_4_r) {
            __Vdly__write_bank = (1U & (~ (IData)(vlSelf->__PVT__write_bank)));
        }
        vlSelf->__PVT__row_ptr = ((IData)(vlSelf->__PVT__lastRow)
                                   ? 0U : (IData)(vlSelf->__PVT___row_ptr_T_1));
    }
    vlSelf->__PVT__write_bank = __Vdly__write_bank;
    vlSelf->io_out_scalar = ((IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__streamBank)
                              ? ((0xfU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                  ? vlSelf->__PVT__bank1_15
                                  : ((0xeU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                      ? vlSelf->__PVT__bank1_14
                                      : ((0xdU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                          ? vlSelf->__PVT__bank1_13
                                          : ((0xcU 
                                              == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                              ? vlSelf->__PVT__bank1_12
                                              : ((0xbU 
                                                  == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                  ? vlSelf->__PVT__bank1_11
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                   ? vlSelf->__PVT__bank1_10
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                    ? vlSelf->__PVT__bank1_9
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                     ? vlSelf->__PVT__bank1_8
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                      ? vlSelf->__PVT__bank1_7
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                       ? vlSelf->__PVT__bank1_6
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                        ? vlSelf->__PVT__bank1_5
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                         ? vlSelf->__PVT__bank1_4
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                          ? vlSelf->__PVT__bank1_3
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                           ? vlSelf->__PVT__bank1_2
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                            ? vlSelf->__PVT__bank1_1
                                                            : vlSelf->__PVT__bank1_0)))))))))))))))
                              : ((0xfU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                  ? vlSelf->__PVT__bank0_15
                                  : ((0xeU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                      ? vlSelf->__PVT__bank0_14
                                      : ((0xdU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                          ? vlSelf->__PVT__bank0_13
                                          : ((0xcU 
                                              == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                              ? vlSelf->__PVT__bank0_12
                                              : ((0xbU 
                                                  == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                  ? vlSelf->__PVT__bank0_11
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                   ? vlSelf->__PVT__bank0_10
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                    ? vlSelf->__PVT__bank0_9
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                     ? vlSelf->__PVT__bank0_8
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                      ? vlSelf->__PVT__bank0_7
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                       ? vlSelf->__PVT__bank0_6
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                        ? vlSelf->__PVT__bank0_5
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                         ? vlSelf->__PVT__bank0_4
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                          ? vlSelf->__PVT__bank0_3
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                           ? vlSelf->__PVT__bank0_2
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                            ? vlSelf->__PVT__bank0_1
                                                            : vlSelf->__PVT__bank0_0))))))))))))))));
    vlSelf->__PVT___readWriteCollision_T = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                            & (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__accumEnByCol_4_r));
    vlSelf->__PVT__lastRow = (0xfU == (IData)(vlSelf->__PVT__row_ptr));
    vlSelf->__PVT___row_ptr_T_1 = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__row_ptr)));
    vlSelf->__PVT__current_sum_full = (0x1ffffffffULL 
                                       & (VL_EXTENDS_QI(33,32, 
                                                        ((IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__firstByCol_4_r)
                                                          ? 0U
                                                          : 
                                                         ((IData)(vlSelf->__PVT__write_bank)
                                                           ? 
                                                          ((0xfU 
                                                            == (IData)(vlSelf->__PVT__row_ptr))
                                                            ? vlSelf->__PVT__bank1_15
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->__PVT__row_ptr))
                                                             ? vlSelf->__PVT__bank1_14
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(vlSelf->__PVT__row_ptr))
                                                              ? vlSelf->__PVT__bank1_13
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(vlSelf->__PVT__row_ptr))
                                                               ? vlSelf->__PVT__bank1_12
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(vlSelf->__PVT__row_ptr))
                                                                ? vlSelf->__PVT__bank1_11
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(vlSelf->__PVT__row_ptr))
                                                                 ? vlSelf->__PVT__bank1_10
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(vlSelf->__PVT__row_ptr))
                                                                  ? vlSelf->__PVT__bank1_9
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(vlSelf->__PVT__row_ptr))
                                                                   ? vlSelf->__PVT__bank1_8
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(vlSelf->__PVT__row_ptr))
                                                                    ? vlSelf->__PVT__bank1_7
                                                                    : 
                                                                   ((6U 
                                                                     == (IData)(vlSelf->__PVT__row_ptr))
                                                                     ? vlSelf->__PVT__bank1_6
                                                                     : 
                                                                    ((5U 
                                                                      == (IData)(vlSelf->__PVT__row_ptr))
                                                                      ? vlSelf->__PVT__bank1_5
                                                                      : 
                                                                     ((4U 
                                                                       == (IData)(vlSelf->__PVT__row_ptr))
                                                                       ? vlSelf->__PVT__bank1_4
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSelf->__PVT__row_ptr))
                                                                        ? vlSelf->__PVT__bank1_3
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelf->__PVT__row_ptr))
                                                                         ? vlSelf->__PVT__bank1_2
                                                                         : 
                                                                        ((1U 
                                                                          == (IData)(vlSelf->__PVT__row_ptr))
                                                                          ? vlSelf->__PVT__bank1_1
                                                                          : vlSelf->__PVT__bank1_0)))))))))))))))
                                                           : 
                                                          ((0xfU 
                                                            == (IData)(vlSelf->__PVT__row_ptr))
                                                            ? vlSelf->__PVT__bank0_15
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->__PVT__row_ptr))
                                                             ? vlSelf->__PVT__bank0_14
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(vlSelf->__PVT__row_ptr))
                                                              ? vlSelf->__PVT__bank0_13
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(vlSelf->__PVT__row_ptr))
                                                               ? vlSelf->__PVT__bank0_12
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(vlSelf->__PVT__row_ptr))
                                                                ? vlSelf->__PVT__bank0_11
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(vlSelf->__PVT__row_ptr))
                                                                 ? vlSelf->__PVT__bank0_10
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(vlSelf->__PVT__row_ptr))
                                                                  ? vlSelf->__PVT__bank0_9
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(vlSelf->__PVT__row_ptr))
                                                                   ? vlSelf->__PVT__bank0_8
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(vlSelf->__PVT__row_ptr))
                                                                    ? vlSelf->__PVT__bank0_7
                                                                    : 
                                                                   ((6U 
                                                                     == (IData)(vlSelf->__PVT__row_ptr))
                                                                     ? vlSelf->__PVT__bank0_6
                                                                     : 
                                                                    ((5U 
                                                                      == (IData)(vlSelf->__PVT__row_ptr))
                                                                      ? vlSelf->__PVT__bank0_5
                                                                      : 
                                                                     ((4U 
                                                                       == (IData)(vlSelf->__PVT__row_ptr))
                                                                       ? vlSelf->__PVT__bank0_4
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSelf->__PVT__row_ptr))
                                                                        ? vlSelf->__PVT__bank0_3
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelf->__PVT__row_ptr))
                                                                         ? vlSelf->__PVT__bank0_2
                                                                         : 
                                                                        ((1U 
                                                                          == (IData)(vlSelf->__PVT__row_ptr))
                                                                          ? vlSelf->__PVT__bank0_1
                                                                          : vlSelf->__PVT__bank0_0)))))))))))))))))) 
                                          + VL_EXTENDS_QI(33,32, vlSymsp->TOP.TPU_top__DOT__mxu__DOT__macs_15_4__DOT__outMacReg)));
}

VL_INLINE_OPT void VTPU_top_Accum_buffer___ico_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_5__0(VTPU_top_Accum_buffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTPU_top_Accum_buffer___ico_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_5__0\n"); );
    // Body
    vlSelf->__PVT___readWriteCollision_T = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                            & (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__accumEnByCol_5_r));
}

VL_INLINE_OPT void VTPU_top_Accum_buffer___nba_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_5__0(VTPU_top_Accum_buffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTPU_top_Accum_buffer___nba_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_5__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__write_bank;
    __Vdly__write_bank = 0;
    // Body
    __Vdly__write_bank = vlSelf->__PVT__write_bank;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bank0_0 = 0U;
        vlSelf->__PVT__bank0_1 = 0U;
        vlSelf->__PVT__bank0_2 = 0U;
        vlSelf->__PVT__bank0_3 = 0U;
        vlSelf->__PVT__bank0_4 = 0U;
        vlSelf->__PVT__bank0_5 = 0U;
        vlSelf->__PVT__bank0_6 = 0U;
        vlSelf->__PVT__bank0_7 = 0U;
        vlSelf->__PVT__bank0_8 = 0U;
        vlSelf->__PVT__bank0_9 = 0U;
        vlSelf->__PVT__bank0_10 = 0U;
        vlSelf->__PVT__bank0_11 = 0U;
        vlSelf->__PVT__bank0_12 = 0U;
        vlSelf->__PVT__bank0_13 = 0U;
        vlSelf->__PVT__bank0_14 = 0U;
        vlSelf->__PVT__bank0_15 = 0U;
        vlSelf->__PVT__bank1_0 = 0U;
        vlSelf->__PVT__bank1_1 = 0U;
        vlSelf->__PVT__bank1_2 = 0U;
        vlSelf->__PVT__bank1_3 = 0U;
        vlSelf->__PVT__bank1_4 = 0U;
        vlSelf->__PVT__bank1_5 = 0U;
        vlSelf->__PVT__bank1_6 = 0U;
        vlSelf->__PVT__bank1_7 = 0U;
        vlSelf->__PVT__bank1_8 = 0U;
        vlSelf->__PVT__bank1_9 = 0U;
        vlSelf->__PVT__bank1_10 = 0U;
        vlSelf->__PVT__bank1_11 = 0U;
        vlSelf->__PVT__bank1_12 = 0U;
        vlSelf->__PVT__bank1_13 = 0U;
        vlSelf->__PVT__bank1_14 = 0U;
        vlSelf->__PVT__bank1_15 = 0U;
        __Vdly__write_bank = 0U;
        vlSelf->__PVT__row_ptr = 0U;
    } else if (vlSelf->__PVT___readWriteCollision_T) {
        if ((1U & (~ (IData)(vlSelf->__PVT__write_bank)))) {
            if ((0U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_0 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((1U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_1 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((2U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_2 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((3U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_3 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((4U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_4 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((5U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_5 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((6U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_6 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((7U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_7 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((8U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_8 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((9U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_9 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xaU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_10 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xbU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_11 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xcU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_12 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xdU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_13 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xeU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_14 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xfU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_15 = (IData)(vlSelf->__PVT__current_sum_full);
            }
        }
        if (vlSelf->__PVT__write_bank) {
            if ((0U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_0 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((1U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_1 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((2U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_2 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((3U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_3 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((4U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_4 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((5U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_5 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((6U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_6 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((7U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_7 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((8U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_8 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((9U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_9 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xaU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_10 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xbU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_11 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xcU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_12 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xdU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_13 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xeU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_14 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xfU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_15 = (IData)(vlSelf->__PVT__current_sum_full);
            }
        }
        if (vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__snapshotByCol_5_r) {
            __Vdly__write_bank = (1U & (~ (IData)(vlSelf->__PVT__write_bank)));
        }
        vlSelf->__PVT__row_ptr = ((IData)(vlSelf->__PVT__lastRow)
                                   ? 0U : (IData)(vlSelf->__PVT___row_ptr_T_1));
    }
    vlSelf->__PVT__write_bank = __Vdly__write_bank;
    vlSelf->io_out_scalar = ((IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__streamBank)
                              ? ((0xfU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                  ? vlSelf->__PVT__bank1_15
                                  : ((0xeU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                      ? vlSelf->__PVT__bank1_14
                                      : ((0xdU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                          ? vlSelf->__PVT__bank1_13
                                          : ((0xcU 
                                              == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                              ? vlSelf->__PVT__bank1_12
                                              : ((0xbU 
                                                  == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                  ? vlSelf->__PVT__bank1_11
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                   ? vlSelf->__PVT__bank1_10
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                    ? vlSelf->__PVT__bank1_9
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                     ? vlSelf->__PVT__bank1_8
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                      ? vlSelf->__PVT__bank1_7
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                       ? vlSelf->__PVT__bank1_6
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                        ? vlSelf->__PVT__bank1_5
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                         ? vlSelf->__PVT__bank1_4
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                          ? vlSelf->__PVT__bank1_3
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                           ? vlSelf->__PVT__bank1_2
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                            ? vlSelf->__PVT__bank1_1
                                                            : vlSelf->__PVT__bank1_0)))))))))))))))
                              : ((0xfU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                  ? vlSelf->__PVT__bank0_15
                                  : ((0xeU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                      ? vlSelf->__PVT__bank0_14
                                      : ((0xdU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                          ? vlSelf->__PVT__bank0_13
                                          : ((0xcU 
                                              == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                              ? vlSelf->__PVT__bank0_12
                                              : ((0xbU 
                                                  == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                  ? vlSelf->__PVT__bank0_11
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                   ? vlSelf->__PVT__bank0_10
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                    ? vlSelf->__PVT__bank0_9
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                     ? vlSelf->__PVT__bank0_8
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                      ? vlSelf->__PVT__bank0_7
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                       ? vlSelf->__PVT__bank0_6
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                        ? vlSelf->__PVT__bank0_5
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                         ? vlSelf->__PVT__bank0_4
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                          ? vlSelf->__PVT__bank0_3
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                           ? vlSelf->__PVT__bank0_2
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                            ? vlSelf->__PVT__bank0_1
                                                            : vlSelf->__PVT__bank0_0))))))))))))))));
    vlSelf->__PVT___readWriteCollision_T = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                            & (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__accumEnByCol_5_r));
    vlSelf->__PVT__lastRow = (0xfU == (IData)(vlSelf->__PVT__row_ptr));
    vlSelf->__PVT___row_ptr_T_1 = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__row_ptr)));
    vlSelf->__PVT__current_sum_full = (0x1ffffffffULL 
                                       & (VL_EXTENDS_QI(33,32, 
                                                        ((IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__firstByCol_5_r)
                                                          ? 0U
                                                          : 
                                                         ((IData)(vlSelf->__PVT__write_bank)
                                                           ? 
                                                          ((0xfU 
                                                            == (IData)(vlSelf->__PVT__row_ptr))
                                                            ? vlSelf->__PVT__bank1_15
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->__PVT__row_ptr))
                                                             ? vlSelf->__PVT__bank1_14
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(vlSelf->__PVT__row_ptr))
                                                              ? vlSelf->__PVT__bank1_13
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(vlSelf->__PVT__row_ptr))
                                                               ? vlSelf->__PVT__bank1_12
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(vlSelf->__PVT__row_ptr))
                                                                ? vlSelf->__PVT__bank1_11
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(vlSelf->__PVT__row_ptr))
                                                                 ? vlSelf->__PVT__bank1_10
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(vlSelf->__PVT__row_ptr))
                                                                  ? vlSelf->__PVT__bank1_9
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(vlSelf->__PVT__row_ptr))
                                                                   ? vlSelf->__PVT__bank1_8
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(vlSelf->__PVT__row_ptr))
                                                                    ? vlSelf->__PVT__bank1_7
                                                                    : 
                                                                   ((6U 
                                                                     == (IData)(vlSelf->__PVT__row_ptr))
                                                                     ? vlSelf->__PVT__bank1_6
                                                                     : 
                                                                    ((5U 
                                                                      == (IData)(vlSelf->__PVT__row_ptr))
                                                                      ? vlSelf->__PVT__bank1_5
                                                                      : 
                                                                     ((4U 
                                                                       == (IData)(vlSelf->__PVT__row_ptr))
                                                                       ? vlSelf->__PVT__bank1_4
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSelf->__PVT__row_ptr))
                                                                        ? vlSelf->__PVT__bank1_3
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelf->__PVT__row_ptr))
                                                                         ? vlSelf->__PVT__bank1_2
                                                                         : 
                                                                        ((1U 
                                                                          == (IData)(vlSelf->__PVT__row_ptr))
                                                                          ? vlSelf->__PVT__bank1_1
                                                                          : vlSelf->__PVT__bank1_0)))))))))))))))
                                                           : 
                                                          ((0xfU 
                                                            == (IData)(vlSelf->__PVT__row_ptr))
                                                            ? vlSelf->__PVT__bank0_15
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->__PVT__row_ptr))
                                                             ? vlSelf->__PVT__bank0_14
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(vlSelf->__PVT__row_ptr))
                                                              ? vlSelf->__PVT__bank0_13
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(vlSelf->__PVT__row_ptr))
                                                               ? vlSelf->__PVT__bank0_12
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(vlSelf->__PVT__row_ptr))
                                                                ? vlSelf->__PVT__bank0_11
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(vlSelf->__PVT__row_ptr))
                                                                 ? vlSelf->__PVT__bank0_10
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(vlSelf->__PVT__row_ptr))
                                                                  ? vlSelf->__PVT__bank0_9
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(vlSelf->__PVT__row_ptr))
                                                                   ? vlSelf->__PVT__bank0_8
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(vlSelf->__PVT__row_ptr))
                                                                    ? vlSelf->__PVT__bank0_7
                                                                    : 
                                                                   ((6U 
                                                                     == (IData)(vlSelf->__PVT__row_ptr))
                                                                     ? vlSelf->__PVT__bank0_6
                                                                     : 
                                                                    ((5U 
                                                                      == (IData)(vlSelf->__PVT__row_ptr))
                                                                      ? vlSelf->__PVT__bank0_5
                                                                      : 
                                                                     ((4U 
                                                                       == (IData)(vlSelf->__PVT__row_ptr))
                                                                       ? vlSelf->__PVT__bank0_4
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSelf->__PVT__row_ptr))
                                                                        ? vlSelf->__PVT__bank0_3
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelf->__PVT__row_ptr))
                                                                         ? vlSelf->__PVT__bank0_2
                                                                         : 
                                                                        ((1U 
                                                                          == (IData)(vlSelf->__PVT__row_ptr))
                                                                          ? vlSelf->__PVT__bank0_1
                                                                          : vlSelf->__PVT__bank0_0)))))))))))))))))) 
                                          + VL_EXTENDS_QI(33,32, vlSymsp->TOP.TPU_top__DOT__mxu__DOT__macs_15_5__DOT__outMacReg)));
}

VL_INLINE_OPT void VTPU_top_Accum_buffer___ico_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_6__0(VTPU_top_Accum_buffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTPU_top_Accum_buffer___ico_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_6__0\n"); );
    // Body
    vlSelf->__PVT___readWriteCollision_T = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                            & (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__accumEnByCol_6_r));
}

VL_INLINE_OPT void VTPU_top_Accum_buffer___nba_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_6__0(VTPU_top_Accum_buffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTPU_top_Accum_buffer___nba_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_6__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__write_bank;
    __Vdly__write_bank = 0;
    // Body
    __Vdly__write_bank = vlSelf->__PVT__write_bank;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bank0_0 = 0U;
        vlSelf->__PVT__bank0_1 = 0U;
        vlSelf->__PVT__bank0_2 = 0U;
        vlSelf->__PVT__bank0_3 = 0U;
        vlSelf->__PVT__bank0_4 = 0U;
        vlSelf->__PVT__bank0_5 = 0U;
        vlSelf->__PVT__bank0_6 = 0U;
        vlSelf->__PVT__bank0_7 = 0U;
        vlSelf->__PVT__bank0_8 = 0U;
        vlSelf->__PVT__bank0_9 = 0U;
        vlSelf->__PVT__bank0_10 = 0U;
        vlSelf->__PVT__bank0_11 = 0U;
        vlSelf->__PVT__bank0_12 = 0U;
        vlSelf->__PVT__bank0_13 = 0U;
        vlSelf->__PVT__bank0_14 = 0U;
        vlSelf->__PVT__bank0_15 = 0U;
        vlSelf->__PVT__bank1_0 = 0U;
        vlSelf->__PVT__bank1_1 = 0U;
        vlSelf->__PVT__bank1_2 = 0U;
        vlSelf->__PVT__bank1_3 = 0U;
        vlSelf->__PVT__bank1_4 = 0U;
        vlSelf->__PVT__bank1_5 = 0U;
        vlSelf->__PVT__bank1_6 = 0U;
        vlSelf->__PVT__bank1_7 = 0U;
        vlSelf->__PVT__bank1_8 = 0U;
        vlSelf->__PVT__bank1_9 = 0U;
        vlSelf->__PVT__bank1_10 = 0U;
        vlSelf->__PVT__bank1_11 = 0U;
        vlSelf->__PVT__bank1_12 = 0U;
        vlSelf->__PVT__bank1_13 = 0U;
        vlSelf->__PVT__bank1_14 = 0U;
        vlSelf->__PVT__bank1_15 = 0U;
        __Vdly__write_bank = 0U;
        vlSelf->__PVT__row_ptr = 0U;
    } else if (vlSelf->__PVT___readWriteCollision_T) {
        if ((1U & (~ (IData)(vlSelf->__PVT__write_bank)))) {
            if ((0U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_0 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((1U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_1 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((2U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_2 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((3U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_3 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((4U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_4 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((5U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_5 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((6U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_6 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((7U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_7 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((8U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_8 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((9U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_9 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xaU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_10 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xbU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_11 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xcU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_12 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xdU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_13 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xeU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_14 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xfU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_15 = (IData)(vlSelf->__PVT__current_sum_full);
            }
        }
        if (vlSelf->__PVT__write_bank) {
            if ((0U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_0 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((1U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_1 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((2U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_2 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((3U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_3 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((4U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_4 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((5U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_5 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((6U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_6 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((7U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_7 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((8U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_8 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((9U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_9 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xaU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_10 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xbU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_11 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xcU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_12 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xdU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_13 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xeU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_14 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xfU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_15 = (IData)(vlSelf->__PVT__current_sum_full);
            }
        }
        if (vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__snapshotByCol_6_r) {
            __Vdly__write_bank = (1U & (~ (IData)(vlSelf->__PVT__write_bank)));
        }
        vlSelf->__PVT__row_ptr = ((IData)(vlSelf->__PVT__lastRow)
                                   ? 0U : (IData)(vlSelf->__PVT___row_ptr_T_1));
    }
    vlSelf->__PVT__write_bank = __Vdly__write_bank;
    vlSelf->io_out_scalar = ((IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__streamBank)
                              ? ((0xfU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                  ? vlSelf->__PVT__bank1_15
                                  : ((0xeU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                      ? vlSelf->__PVT__bank1_14
                                      : ((0xdU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                          ? vlSelf->__PVT__bank1_13
                                          : ((0xcU 
                                              == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                              ? vlSelf->__PVT__bank1_12
                                              : ((0xbU 
                                                  == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                  ? vlSelf->__PVT__bank1_11
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                   ? vlSelf->__PVT__bank1_10
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                    ? vlSelf->__PVT__bank1_9
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                     ? vlSelf->__PVT__bank1_8
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                      ? vlSelf->__PVT__bank1_7
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                       ? vlSelf->__PVT__bank1_6
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                        ? vlSelf->__PVT__bank1_5
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                         ? vlSelf->__PVT__bank1_4
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                          ? vlSelf->__PVT__bank1_3
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                           ? vlSelf->__PVT__bank1_2
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                            ? vlSelf->__PVT__bank1_1
                                                            : vlSelf->__PVT__bank1_0)))))))))))))))
                              : ((0xfU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                  ? vlSelf->__PVT__bank0_15
                                  : ((0xeU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                      ? vlSelf->__PVT__bank0_14
                                      : ((0xdU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                          ? vlSelf->__PVT__bank0_13
                                          : ((0xcU 
                                              == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                              ? vlSelf->__PVT__bank0_12
                                              : ((0xbU 
                                                  == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                  ? vlSelf->__PVT__bank0_11
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                   ? vlSelf->__PVT__bank0_10
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                    ? vlSelf->__PVT__bank0_9
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                     ? vlSelf->__PVT__bank0_8
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                      ? vlSelf->__PVT__bank0_7
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                       ? vlSelf->__PVT__bank0_6
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                        ? vlSelf->__PVT__bank0_5
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                         ? vlSelf->__PVT__bank0_4
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                          ? vlSelf->__PVT__bank0_3
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                           ? vlSelf->__PVT__bank0_2
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                            ? vlSelf->__PVT__bank0_1
                                                            : vlSelf->__PVT__bank0_0))))))))))))))));
    vlSelf->__PVT___readWriteCollision_T = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                            & (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__accumEnByCol_6_r));
    vlSelf->__PVT__lastRow = (0xfU == (IData)(vlSelf->__PVT__row_ptr));
    vlSelf->__PVT___row_ptr_T_1 = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__row_ptr)));
    vlSelf->__PVT__current_sum_full = (0x1ffffffffULL 
                                       & (VL_EXTENDS_QI(33,32, 
                                                        ((IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__firstByCol_6_r)
                                                          ? 0U
                                                          : 
                                                         ((IData)(vlSelf->__PVT__write_bank)
                                                           ? 
                                                          ((0xfU 
                                                            == (IData)(vlSelf->__PVT__row_ptr))
                                                            ? vlSelf->__PVT__bank1_15
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->__PVT__row_ptr))
                                                             ? vlSelf->__PVT__bank1_14
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(vlSelf->__PVT__row_ptr))
                                                              ? vlSelf->__PVT__bank1_13
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(vlSelf->__PVT__row_ptr))
                                                               ? vlSelf->__PVT__bank1_12
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(vlSelf->__PVT__row_ptr))
                                                                ? vlSelf->__PVT__bank1_11
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(vlSelf->__PVT__row_ptr))
                                                                 ? vlSelf->__PVT__bank1_10
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(vlSelf->__PVT__row_ptr))
                                                                  ? vlSelf->__PVT__bank1_9
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(vlSelf->__PVT__row_ptr))
                                                                   ? vlSelf->__PVT__bank1_8
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(vlSelf->__PVT__row_ptr))
                                                                    ? vlSelf->__PVT__bank1_7
                                                                    : 
                                                                   ((6U 
                                                                     == (IData)(vlSelf->__PVT__row_ptr))
                                                                     ? vlSelf->__PVT__bank1_6
                                                                     : 
                                                                    ((5U 
                                                                      == (IData)(vlSelf->__PVT__row_ptr))
                                                                      ? vlSelf->__PVT__bank1_5
                                                                      : 
                                                                     ((4U 
                                                                       == (IData)(vlSelf->__PVT__row_ptr))
                                                                       ? vlSelf->__PVT__bank1_4
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSelf->__PVT__row_ptr))
                                                                        ? vlSelf->__PVT__bank1_3
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelf->__PVT__row_ptr))
                                                                         ? vlSelf->__PVT__bank1_2
                                                                         : 
                                                                        ((1U 
                                                                          == (IData)(vlSelf->__PVT__row_ptr))
                                                                          ? vlSelf->__PVT__bank1_1
                                                                          : vlSelf->__PVT__bank1_0)))))))))))))))
                                                           : 
                                                          ((0xfU 
                                                            == (IData)(vlSelf->__PVT__row_ptr))
                                                            ? vlSelf->__PVT__bank0_15
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->__PVT__row_ptr))
                                                             ? vlSelf->__PVT__bank0_14
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(vlSelf->__PVT__row_ptr))
                                                              ? vlSelf->__PVT__bank0_13
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(vlSelf->__PVT__row_ptr))
                                                               ? vlSelf->__PVT__bank0_12
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(vlSelf->__PVT__row_ptr))
                                                                ? vlSelf->__PVT__bank0_11
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(vlSelf->__PVT__row_ptr))
                                                                 ? vlSelf->__PVT__bank0_10
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(vlSelf->__PVT__row_ptr))
                                                                  ? vlSelf->__PVT__bank0_9
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(vlSelf->__PVT__row_ptr))
                                                                   ? vlSelf->__PVT__bank0_8
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(vlSelf->__PVT__row_ptr))
                                                                    ? vlSelf->__PVT__bank0_7
                                                                    : 
                                                                   ((6U 
                                                                     == (IData)(vlSelf->__PVT__row_ptr))
                                                                     ? vlSelf->__PVT__bank0_6
                                                                     : 
                                                                    ((5U 
                                                                      == (IData)(vlSelf->__PVT__row_ptr))
                                                                      ? vlSelf->__PVT__bank0_5
                                                                      : 
                                                                     ((4U 
                                                                       == (IData)(vlSelf->__PVT__row_ptr))
                                                                       ? vlSelf->__PVT__bank0_4
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSelf->__PVT__row_ptr))
                                                                        ? vlSelf->__PVT__bank0_3
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelf->__PVT__row_ptr))
                                                                         ? vlSelf->__PVT__bank0_2
                                                                         : 
                                                                        ((1U 
                                                                          == (IData)(vlSelf->__PVT__row_ptr))
                                                                          ? vlSelf->__PVT__bank0_1
                                                                          : vlSelf->__PVT__bank0_0)))))))))))))))))) 
                                          + VL_EXTENDS_QI(33,32, vlSymsp->TOP.TPU_top__DOT__mxu__DOT__macs_15_6__DOT__outMacReg)));
}

VL_INLINE_OPT void VTPU_top_Accum_buffer___ico_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_7__0(VTPU_top_Accum_buffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTPU_top_Accum_buffer___ico_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_7__0\n"); );
    // Body
    vlSelf->__PVT___readWriteCollision_T = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                            & (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__accumEnByCol_7_r));
}

VL_INLINE_OPT void VTPU_top_Accum_buffer___nba_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_7__0(VTPU_top_Accum_buffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTPU_top_Accum_buffer___nba_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_7__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__write_bank;
    __Vdly__write_bank = 0;
    // Body
    __Vdly__write_bank = vlSelf->__PVT__write_bank;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bank0_0 = 0U;
        vlSelf->__PVT__bank0_1 = 0U;
        vlSelf->__PVT__bank0_2 = 0U;
        vlSelf->__PVT__bank0_3 = 0U;
        vlSelf->__PVT__bank0_4 = 0U;
        vlSelf->__PVT__bank0_5 = 0U;
        vlSelf->__PVT__bank0_6 = 0U;
        vlSelf->__PVT__bank0_7 = 0U;
        vlSelf->__PVT__bank0_8 = 0U;
        vlSelf->__PVT__bank0_9 = 0U;
        vlSelf->__PVT__bank0_10 = 0U;
        vlSelf->__PVT__bank0_11 = 0U;
        vlSelf->__PVT__bank0_12 = 0U;
        vlSelf->__PVT__bank0_13 = 0U;
        vlSelf->__PVT__bank0_14 = 0U;
        vlSelf->__PVT__bank0_15 = 0U;
        vlSelf->__PVT__bank1_0 = 0U;
        vlSelf->__PVT__bank1_1 = 0U;
        vlSelf->__PVT__bank1_2 = 0U;
        vlSelf->__PVT__bank1_3 = 0U;
        vlSelf->__PVT__bank1_4 = 0U;
        vlSelf->__PVT__bank1_5 = 0U;
        vlSelf->__PVT__bank1_6 = 0U;
        vlSelf->__PVT__bank1_7 = 0U;
        vlSelf->__PVT__bank1_8 = 0U;
        vlSelf->__PVT__bank1_9 = 0U;
        vlSelf->__PVT__bank1_10 = 0U;
        vlSelf->__PVT__bank1_11 = 0U;
        vlSelf->__PVT__bank1_12 = 0U;
        vlSelf->__PVT__bank1_13 = 0U;
        vlSelf->__PVT__bank1_14 = 0U;
        vlSelf->__PVT__bank1_15 = 0U;
        __Vdly__write_bank = 0U;
        vlSelf->__PVT__row_ptr = 0U;
    } else if (vlSelf->__PVT___readWriteCollision_T) {
        if ((1U & (~ (IData)(vlSelf->__PVT__write_bank)))) {
            if ((0U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_0 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((1U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_1 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((2U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_2 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((3U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_3 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((4U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_4 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((5U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_5 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((6U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_6 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((7U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_7 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((8U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_8 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((9U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_9 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xaU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_10 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xbU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_11 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xcU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_12 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xdU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_13 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xeU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_14 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xfU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_15 = (IData)(vlSelf->__PVT__current_sum_full);
            }
        }
        if (vlSelf->__PVT__write_bank) {
            if ((0U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_0 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((1U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_1 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((2U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_2 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((3U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_3 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((4U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_4 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((5U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_5 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((6U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_6 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((7U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_7 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((8U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_8 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((9U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_9 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xaU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_10 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xbU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_11 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xcU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_12 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xdU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_13 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xeU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_14 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xfU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_15 = (IData)(vlSelf->__PVT__current_sum_full);
            }
        }
        if (vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__snapshotByCol_7_r) {
            __Vdly__write_bank = (1U & (~ (IData)(vlSelf->__PVT__write_bank)));
        }
        vlSelf->__PVT__row_ptr = ((IData)(vlSelf->__PVT__lastRow)
                                   ? 0U : (IData)(vlSelf->__PVT___row_ptr_T_1));
    }
    vlSelf->__PVT__write_bank = __Vdly__write_bank;
    vlSelf->io_out_scalar = ((IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__streamBank)
                              ? ((0xfU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                  ? vlSelf->__PVT__bank1_15
                                  : ((0xeU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                      ? vlSelf->__PVT__bank1_14
                                      : ((0xdU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                          ? vlSelf->__PVT__bank1_13
                                          : ((0xcU 
                                              == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                              ? vlSelf->__PVT__bank1_12
                                              : ((0xbU 
                                                  == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                  ? vlSelf->__PVT__bank1_11
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                   ? vlSelf->__PVT__bank1_10
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                    ? vlSelf->__PVT__bank1_9
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                     ? vlSelf->__PVT__bank1_8
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                      ? vlSelf->__PVT__bank1_7
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                       ? vlSelf->__PVT__bank1_6
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                        ? vlSelf->__PVT__bank1_5
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                         ? vlSelf->__PVT__bank1_4
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                          ? vlSelf->__PVT__bank1_3
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                           ? vlSelf->__PVT__bank1_2
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                            ? vlSelf->__PVT__bank1_1
                                                            : vlSelf->__PVT__bank1_0)))))))))))))))
                              : ((0xfU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                  ? vlSelf->__PVT__bank0_15
                                  : ((0xeU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                      ? vlSelf->__PVT__bank0_14
                                      : ((0xdU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                          ? vlSelf->__PVT__bank0_13
                                          : ((0xcU 
                                              == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                              ? vlSelf->__PVT__bank0_12
                                              : ((0xbU 
                                                  == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                  ? vlSelf->__PVT__bank0_11
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                   ? vlSelf->__PVT__bank0_10
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                    ? vlSelf->__PVT__bank0_9
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                     ? vlSelf->__PVT__bank0_8
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                      ? vlSelf->__PVT__bank0_7
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                       ? vlSelf->__PVT__bank0_6
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                        ? vlSelf->__PVT__bank0_5
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                         ? vlSelf->__PVT__bank0_4
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                          ? vlSelf->__PVT__bank0_3
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                           ? vlSelf->__PVT__bank0_2
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                            ? vlSelf->__PVT__bank0_1
                                                            : vlSelf->__PVT__bank0_0))))))))))))))));
    vlSelf->__PVT___readWriteCollision_T = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                            & (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__accumEnByCol_7_r));
    vlSelf->__PVT__lastRow = (0xfU == (IData)(vlSelf->__PVT__row_ptr));
    vlSelf->__PVT___row_ptr_T_1 = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__row_ptr)));
    vlSelf->__PVT__current_sum_full = (0x1ffffffffULL 
                                       & (VL_EXTENDS_QI(33,32, 
                                                        ((IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__firstByCol_7_r)
                                                          ? 0U
                                                          : 
                                                         ((IData)(vlSelf->__PVT__write_bank)
                                                           ? 
                                                          ((0xfU 
                                                            == (IData)(vlSelf->__PVT__row_ptr))
                                                            ? vlSelf->__PVT__bank1_15
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->__PVT__row_ptr))
                                                             ? vlSelf->__PVT__bank1_14
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(vlSelf->__PVT__row_ptr))
                                                              ? vlSelf->__PVT__bank1_13
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(vlSelf->__PVT__row_ptr))
                                                               ? vlSelf->__PVT__bank1_12
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(vlSelf->__PVT__row_ptr))
                                                                ? vlSelf->__PVT__bank1_11
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(vlSelf->__PVT__row_ptr))
                                                                 ? vlSelf->__PVT__bank1_10
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(vlSelf->__PVT__row_ptr))
                                                                  ? vlSelf->__PVT__bank1_9
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(vlSelf->__PVT__row_ptr))
                                                                   ? vlSelf->__PVT__bank1_8
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(vlSelf->__PVT__row_ptr))
                                                                    ? vlSelf->__PVT__bank1_7
                                                                    : 
                                                                   ((6U 
                                                                     == (IData)(vlSelf->__PVT__row_ptr))
                                                                     ? vlSelf->__PVT__bank1_6
                                                                     : 
                                                                    ((5U 
                                                                      == (IData)(vlSelf->__PVT__row_ptr))
                                                                      ? vlSelf->__PVT__bank1_5
                                                                      : 
                                                                     ((4U 
                                                                       == (IData)(vlSelf->__PVT__row_ptr))
                                                                       ? vlSelf->__PVT__bank1_4
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSelf->__PVT__row_ptr))
                                                                        ? vlSelf->__PVT__bank1_3
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelf->__PVT__row_ptr))
                                                                         ? vlSelf->__PVT__bank1_2
                                                                         : 
                                                                        ((1U 
                                                                          == (IData)(vlSelf->__PVT__row_ptr))
                                                                          ? vlSelf->__PVT__bank1_1
                                                                          : vlSelf->__PVT__bank1_0)))))))))))))))
                                                           : 
                                                          ((0xfU 
                                                            == (IData)(vlSelf->__PVT__row_ptr))
                                                            ? vlSelf->__PVT__bank0_15
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->__PVT__row_ptr))
                                                             ? vlSelf->__PVT__bank0_14
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(vlSelf->__PVT__row_ptr))
                                                              ? vlSelf->__PVT__bank0_13
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(vlSelf->__PVT__row_ptr))
                                                               ? vlSelf->__PVT__bank0_12
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(vlSelf->__PVT__row_ptr))
                                                                ? vlSelf->__PVT__bank0_11
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(vlSelf->__PVT__row_ptr))
                                                                 ? vlSelf->__PVT__bank0_10
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(vlSelf->__PVT__row_ptr))
                                                                  ? vlSelf->__PVT__bank0_9
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(vlSelf->__PVT__row_ptr))
                                                                   ? vlSelf->__PVT__bank0_8
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(vlSelf->__PVT__row_ptr))
                                                                    ? vlSelf->__PVT__bank0_7
                                                                    : 
                                                                   ((6U 
                                                                     == (IData)(vlSelf->__PVT__row_ptr))
                                                                     ? vlSelf->__PVT__bank0_6
                                                                     : 
                                                                    ((5U 
                                                                      == (IData)(vlSelf->__PVT__row_ptr))
                                                                      ? vlSelf->__PVT__bank0_5
                                                                      : 
                                                                     ((4U 
                                                                       == (IData)(vlSelf->__PVT__row_ptr))
                                                                       ? vlSelf->__PVT__bank0_4
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSelf->__PVT__row_ptr))
                                                                        ? vlSelf->__PVT__bank0_3
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelf->__PVT__row_ptr))
                                                                         ? vlSelf->__PVT__bank0_2
                                                                         : 
                                                                        ((1U 
                                                                          == (IData)(vlSelf->__PVT__row_ptr))
                                                                          ? vlSelf->__PVT__bank0_1
                                                                          : vlSelf->__PVT__bank0_0)))))))))))))))))) 
                                          + VL_EXTENDS_QI(33,32, vlSymsp->TOP.TPU_top__DOT__mxu__DOT__macs_15_7__DOT__outMacReg)));
}

VL_INLINE_OPT void VTPU_top_Accum_buffer___ico_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_8__0(VTPU_top_Accum_buffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTPU_top_Accum_buffer___ico_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_8__0\n"); );
    // Body
    vlSelf->__PVT___readWriteCollision_T = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                            & (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__accumEnByCol_8_r));
}

VL_INLINE_OPT void VTPU_top_Accum_buffer___nba_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_8__0(VTPU_top_Accum_buffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTPU_top_Accum_buffer___nba_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_8__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__write_bank;
    __Vdly__write_bank = 0;
    // Body
    __Vdly__write_bank = vlSelf->__PVT__write_bank;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bank0_0 = 0U;
        vlSelf->__PVT__bank0_1 = 0U;
        vlSelf->__PVT__bank0_2 = 0U;
        vlSelf->__PVT__bank0_3 = 0U;
        vlSelf->__PVT__bank0_4 = 0U;
        vlSelf->__PVT__bank0_5 = 0U;
        vlSelf->__PVT__bank0_6 = 0U;
        vlSelf->__PVT__bank0_7 = 0U;
        vlSelf->__PVT__bank0_8 = 0U;
        vlSelf->__PVT__bank0_9 = 0U;
        vlSelf->__PVT__bank0_10 = 0U;
        vlSelf->__PVT__bank0_11 = 0U;
        vlSelf->__PVT__bank0_12 = 0U;
        vlSelf->__PVT__bank0_13 = 0U;
        vlSelf->__PVT__bank0_14 = 0U;
        vlSelf->__PVT__bank0_15 = 0U;
        vlSelf->__PVT__bank1_0 = 0U;
        vlSelf->__PVT__bank1_1 = 0U;
        vlSelf->__PVT__bank1_2 = 0U;
        vlSelf->__PVT__bank1_3 = 0U;
        vlSelf->__PVT__bank1_4 = 0U;
        vlSelf->__PVT__bank1_5 = 0U;
        vlSelf->__PVT__bank1_6 = 0U;
        vlSelf->__PVT__bank1_7 = 0U;
        vlSelf->__PVT__bank1_8 = 0U;
        vlSelf->__PVT__bank1_9 = 0U;
        vlSelf->__PVT__bank1_10 = 0U;
        vlSelf->__PVT__bank1_11 = 0U;
        vlSelf->__PVT__bank1_12 = 0U;
        vlSelf->__PVT__bank1_13 = 0U;
        vlSelf->__PVT__bank1_14 = 0U;
        vlSelf->__PVT__bank1_15 = 0U;
        __Vdly__write_bank = 0U;
        vlSelf->__PVT__row_ptr = 0U;
    } else if (vlSelf->__PVT___readWriteCollision_T) {
        if ((1U & (~ (IData)(vlSelf->__PVT__write_bank)))) {
            if ((0U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_0 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((1U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_1 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((2U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_2 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((3U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_3 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((4U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_4 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((5U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_5 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((6U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_6 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((7U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_7 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((8U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_8 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((9U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_9 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xaU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_10 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xbU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_11 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xcU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_12 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xdU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_13 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xeU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_14 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xfU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_15 = (IData)(vlSelf->__PVT__current_sum_full);
            }
        }
        if (vlSelf->__PVT__write_bank) {
            if ((0U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_0 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((1U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_1 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((2U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_2 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((3U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_3 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((4U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_4 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((5U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_5 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((6U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_6 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((7U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_7 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((8U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_8 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((9U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_9 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xaU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_10 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xbU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_11 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xcU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_12 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xdU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_13 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xeU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_14 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xfU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_15 = (IData)(vlSelf->__PVT__current_sum_full);
            }
        }
        if (vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__snapshotByCol_8_r) {
            __Vdly__write_bank = (1U & (~ (IData)(vlSelf->__PVT__write_bank)));
        }
        vlSelf->__PVT__row_ptr = ((IData)(vlSelf->__PVT__lastRow)
                                   ? 0U : (IData)(vlSelf->__PVT___row_ptr_T_1));
    }
    vlSelf->__PVT__write_bank = __Vdly__write_bank;
    vlSelf->io_out_scalar = ((IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__streamBank)
                              ? ((0xfU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                  ? vlSelf->__PVT__bank1_15
                                  : ((0xeU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                      ? vlSelf->__PVT__bank1_14
                                      : ((0xdU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                          ? vlSelf->__PVT__bank1_13
                                          : ((0xcU 
                                              == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                              ? vlSelf->__PVT__bank1_12
                                              : ((0xbU 
                                                  == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                  ? vlSelf->__PVT__bank1_11
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                   ? vlSelf->__PVT__bank1_10
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                    ? vlSelf->__PVT__bank1_9
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                     ? vlSelf->__PVT__bank1_8
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                      ? vlSelf->__PVT__bank1_7
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                       ? vlSelf->__PVT__bank1_6
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                        ? vlSelf->__PVT__bank1_5
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                         ? vlSelf->__PVT__bank1_4
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                          ? vlSelf->__PVT__bank1_3
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                           ? vlSelf->__PVT__bank1_2
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                            ? vlSelf->__PVT__bank1_1
                                                            : vlSelf->__PVT__bank1_0)))))))))))))))
                              : ((0xfU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                  ? vlSelf->__PVT__bank0_15
                                  : ((0xeU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                      ? vlSelf->__PVT__bank0_14
                                      : ((0xdU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                          ? vlSelf->__PVT__bank0_13
                                          : ((0xcU 
                                              == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                              ? vlSelf->__PVT__bank0_12
                                              : ((0xbU 
                                                  == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                  ? vlSelf->__PVT__bank0_11
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                   ? vlSelf->__PVT__bank0_10
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                    ? vlSelf->__PVT__bank0_9
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                     ? vlSelf->__PVT__bank0_8
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                      ? vlSelf->__PVT__bank0_7
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                       ? vlSelf->__PVT__bank0_6
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                        ? vlSelf->__PVT__bank0_5
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                         ? vlSelf->__PVT__bank0_4
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                          ? vlSelf->__PVT__bank0_3
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                           ? vlSelf->__PVT__bank0_2
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                            ? vlSelf->__PVT__bank0_1
                                                            : vlSelf->__PVT__bank0_0))))))))))))))));
    vlSelf->__PVT___readWriteCollision_T = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                            & (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__accumEnByCol_8_r));
    vlSelf->__PVT__lastRow = (0xfU == (IData)(vlSelf->__PVT__row_ptr));
    vlSelf->__PVT___row_ptr_T_1 = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__row_ptr)));
    vlSelf->__PVT__current_sum_full = (0x1ffffffffULL 
                                       & (VL_EXTENDS_QI(33,32, 
                                                        ((IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__firstByCol_8_r)
                                                          ? 0U
                                                          : 
                                                         ((IData)(vlSelf->__PVT__write_bank)
                                                           ? 
                                                          ((0xfU 
                                                            == (IData)(vlSelf->__PVT__row_ptr))
                                                            ? vlSelf->__PVT__bank1_15
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->__PVT__row_ptr))
                                                             ? vlSelf->__PVT__bank1_14
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(vlSelf->__PVT__row_ptr))
                                                              ? vlSelf->__PVT__bank1_13
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(vlSelf->__PVT__row_ptr))
                                                               ? vlSelf->__PVT__bank1_12
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(vlSelf->__PVT__row_ptr))
                                                                ? vlSelf->__PVT__bank1_11
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(vlSelf->__PVT__row_ptr))
                                                                 ? vlSelf->__PVT__bank1_10
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(vlSelf->__PVT__row_ptr))
                                                                  ? vlSelf->__PVT__bank1_9
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(vlSelf->__PVT__row_ptr))
                                                                   ? vlSelf->__PVT__bank1_8
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(vlSelf->__PVT__row_ptr))
                                                                    ? vlSelf->__PVT__bank1_7
                                                                    : 
                                                                   ((6U 
                                                                     == (IData)(vlSelf->__PVT__row_ptr))
                                                                     ? vlSelf->__PVT__bank1_6
                                                                     : 
                                                                    ((5U 
                                                                      == (IData)(vlSelf->__PVT__row_ptr))
                                                                      ? vlSelf->__PVT__bank1_5
                                                                      : 
                                                                     ((4U 
                                                                       == (IData)(vlSelf->__PVT__row_ptr))
                                                                       ? vlSelf->__PVT__bank1_4
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSelf->__PVT__row_ptr))
                                                                        ? vlSelf->__PVT__bank1_3
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelf->__PVT__row_ptr))
                                                                         ? vlSelf->__PVT__bank1_2
                                                                         : 
                                                                        ((1U 
                                                                          == (IData)(vlSelf->__PVT__row_ptr))
                                                                          ? vlSelf->__PVT__bank1_1
                                                                          : vlSelf->__PVT__bank1_0)))))))))))))))
                                                           : 
                                                          ((0xfU 
                                                            == (IData)(vlSelf->__PVT__row_ptr))
                                                            ? vlSelf->__PVT__bank0_15
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->__PVT__row_ptr))
                                                             ? vlSelf->__PVT__bank0_14
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(vlSelf->__PVT__row_ptr))
                                                              ? vlSelf->__PVT__bank0_13
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(vlSelf->__PVT__row_ptr))
                                                               ? vlSelf->__PVT__bank0_12
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(vlSelf->__PVT__row_ptr))
                                                                ? vlSelf->__PVT__bank0_11
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(vlSelf->__PVT__row_ptr))
                                                                 ? vlSelf->__PVT__bank0_10
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(vlSelf->__PVT__row_ptr))
                                                                  ? vlSelf->__PVT__bank0_9
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(vlSelf->__PVT__row_ptr))
                                                                   ? vlSelf->__PVT__bank0_8
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(vlSelf->__PVT__row_ptr))
                                                                    ? vlSelf->__PVT__bank0_7
                                                                    : 
                                                                   ((6U 
                                                                     == (IData)(vlSelf->__PVT__row_ptr))
                                                                     ? vlSelf->__PVT__bank0_6
                                                                     : 
                                                                    ((5U 
                                                                      == (IData)(vlSelf->__PVT__row_ptr))
                                                                      ? vlSelf->__PVT__bank0_5
                                                                      : 
                                                                     ((4U 
                                                                       == (IData)(vlSelf->__PVT__row_ptr))
                                                                       ? vlSelf->__PVT__bank0_4
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSelf->__PVT__row_ptr))
                                                                        ? vlSelf->__PVT__bank0_3
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelf->__PVT__row_ptr))
                                                                         ? vlSelf->__PVT__bank0_2
                                                                         : 
                                                                        ((1U 
                                                                          == (IData)(vlSelf->__PVT__row_ptr))
                                                                          ? vlSelf->__PVT__bank0_1
                                                                          : vlSelf->__PVT__bank0_0)))))))))))))))))) 
                                          + VL_EXTENDS_QI(33,32, vlSymsp->TOP.TPU_top__DOT__mxu__DOT__macs_15_8__DOT__outMacReg)));
}

VL_INLINE_OPT void VTPU_top_Accum_buffer___ico_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_9__0(VTPU_top_Accum_buffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTPU_top_Accum_buffer___ico_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_9__0\n"); );
    // Body
    vlSelf->__PVT___readWriteCollision_T = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                            & (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__accumEnByCol_9_r));
}

VL_INLINE_OPT void VTPU_top_Accum_buffer___nba_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_9__0(VTPU_top_Accum_buffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTPU_top_Accum_buffer___nba_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_9__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__write_bank;
    __Vdly__write_bank = 0;
    // Body
    __Vdly__write_bank = vlSelf->__PVT__write_bank;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bank0_0 = 0U;
        vlSelf->__PVT__bank0_1 = 0U;
        vlSelf->__PVT__bank0_2 = 0U;
        vlSelf->__PVT__bank0_3 = 0U;
        vlSelf->__PVT__bank0_4 = 0U;
        vlSelf->__PVT__bank0_5 = 0U;
        vlSelf->__PVT__bank0_6 = 0U;
        vlSelf->__PVT__bank0_7 = 0U;
        vlSelf->__PVT__bank0_8 = 0U;
        vlSelf->__PVT__bank0_9 = 0U;
        vlSelf->__PVT__bank0_10 = 0U;
        vlSelf->__PVT__bank0_11 = 0U;
        vlSelf->__PVT__bank0_12 = 0U;
        vlSelf->__PVT__bank0_13 = 0U;
        vlSelf->__PVT__bank0_14 = 0U;
        vlSelf->__PVT__bank0_15 = 0U;
        vlSelf->__PVT__bank1_0 = 0U;
        vlSelf->__PVT__bank1_1 = 0U;
        vlSelf->__PVT__bank1_2 = 0U;
        vlSelf->__PVT__bank1_3 = 0U;
        vlSelf->__PVT__bank1_4 = 0U;
        vlSelf->__PVT__bank1_5 = 0U;
        vlSelf->__PVT__bank1_6 = 0U;
        vlSelf->__PVT__bank1_7 = 0U;
        vlSelf->__PVT__bank1_8 = 0U;
        vlSelf->__PVT__bank1_9 = 0U;
        vlSelf->__PVT__bank1_10 = 0U;
        vlSelf->__PVT__bank1_11 = 0U;
        vlSelf->__PVT__bank1_12 = 0U;
        vlSelf->__PVT__bank1_13 = 0U;
        vlSelf->__PVT__bank1_14 = 0U;
        vlSelf->__PVT__bank1_15 = 0U;
        __Vdly__write_bank = 0U;
        vlSelf->__PVT__row_ptr = 0U;
    } else if (vlSelf->__PVT___readWriteCollision_T) {
        if ((1U & (~ (IData)(vlSelf->__PVT__write_bank)))) {
            if ((0U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_0 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((1U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_1 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((2U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_2 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((3U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_3 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((4U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_4 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((5U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_5 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((6U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_6 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((7U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_7 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((8U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_8 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((9U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_9 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xaU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_10 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xbU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_11 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xcU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_12 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xdU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_13 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xeU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_14 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xfU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_15 = (IData)(vlSelf->__PVT__current_sum_full);
            }
        }
        if (vlSelf->__PVT__write_bank) {
            if ((0U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_0 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((1U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_1 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((2U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_2 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((3U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_3 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((4U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_4 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((5U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_5 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((6U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_6 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((7U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_7 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((8U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_8 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((9U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_9 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xaU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_10 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xbU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_11 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xcU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_12 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xdU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_13 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xeU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_14 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xfU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_15 = (IData)(vlSelf->__PVT__current_sum_full);
            }
        }
        if (vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__snapshotByCol_9_r) {
            __Vdly__write_bank = (1U & (~ (IData)(vlSelf->__PVT__write_bank)));
        }
        vlSelf->__PVT__row_ptr = ((IData)(vlSelf->__PVT__lastRow)
                                   ? 0U : (IData)(vlSelf->__PVT___row_ptr_T_1));
    }
    vlSelf->__PVT__write_bank = __Vdly__write_bank;
    vlSelf->io_out_scalar = ((IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__streamBank)
                              ? ((0xfU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                  ? vlSelf->__PVT__bank1_15
                                  : ((0xeU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                      ? vlSelf->__PVT__bank1_14
                                      : ((0xdU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                          ? vlSelf->__PVT__bank1_13
                                          : ((0xcU 
                                              == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                              ? vlSelf->__PVT__bank1_12
                                              : ((0xbU 
                                                  == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                  ? vlSelf->__PVT__bank1_11
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                   ? vlSelf->__PVT__bank1_10
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                    ? vlSelf->__PVT__bank1_9
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                     ? vlSelf->__PVT__bank1_8
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                      ? vlSelf->__PVT__bank1_7
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                       ? vlSelf->__PVT__bank1_6
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                        ? vlSelf->__PVT__bank1_5
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                         ? vlSelf->__PVT__bank1_4
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                          ? vlSelf->__PVT__bank1_3
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                           ? vlSelf->__PVT__bank1_2
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                            ? vlSelf->__PVT__bank1_1
                                                            : vlSelf->__PVT__bank1_0)))))))))))))))
                              : ((0xfU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                  ? vlSelf->__PVT__bank0_15
                                  : ((0xeU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                      ? vlSelf->__PVT__bank0_14
                                      : ((0xdU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                          ? vlSelf->__PVT__bank0_13
                                          : ((0xcU 
                                              == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                              ? vlSelf->__PVT__bank0_12
                                              : ((0xbU 
                                                  == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                  ? vlSelf->__PVT__bank0_11
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                   ? vlSelf->__PVT__bank0_10
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                    ? vlSelf->__PVT__bank0_9
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                     ? vlSelf->__PVT__bank0_8
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                      ? vlSelf->__PVT__bank0_7
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                       ? vlSelf->__PVT__bank0_6
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                        ? vlSelf->__PVT__bank0_5
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                         ? vlSelf->__PVT__bank0_4
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                          ? vlSelf->__PVT__bank0_3
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                           ? vlSelf->__PVT__bank0_2
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                            ? vlSelf->__PVT__bank0_1
                                                            : vlSelf->__PVT__bank0_0))))))))))))))));
    vlSelf->__PVT___readWriteCollision_T = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                            & (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__accumEnByCol_9_r));
    vlSelf->__PVT__lastRow = (0xfU == (IData)(vlSelf->__PVT__row_ptr));
    vlSelf->__PVT___row_ptr_T_1 = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__row_ptr)));
    vlSelf->__PVT__current_sum_full = (0x1ffffffffULL 
                                       & (VL_EXTENDS_QI(33,32, 
                                                        ((IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__firstByCol_9_r)
                                                          ? 0U
                                                          : 
                                                         ((IData)(vlSelf->__PVT__write_bank)
                                                           ? 
                                                          ((0xfU 
                                                            == (IData)(vlSelf->__PVT__row_ptr))
                                                            ? vlSelf->__PVT__bank1_15
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->__PVT__row_ptr))
                                                             ? vlSelf->__PVT__bank1_14
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(vlSelf->__PVT__row_ptr))
                                                              ? vlSelf->__PVT__bank1_13
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(vlSelf->__PVT__row_ptr))
                                                               ? vlSelf->__PVT__bank1_12
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(vlSelf->__PVT__row_ptr))
                                                                ? vlSelf->__PVT__bank1_11
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(vlSelf->__PVT__row_ptr))
                                                                 ? vlSelf->__PVT__bank1_10
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(vlSelf->__PVT__row_ptr))
                                                                  ? vlSelf->__PVT__bank1_9
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(vlSelf->__PVT__row_ptr))
                                                                   ? vlSelf->__PVT__bank1_8
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(vlSelf->__PVT__row_ptr))
                                                                    ? vlSelf->__PVT__bank1_7
                                                                    : 
                                                                   ((6U 
                                                                     == (IData)(vlSelf->__PVT__row_ptr))
                                                                     ? vlSelf->__PVT__bank1_6
                                                                     : 
                                                                    ((5U 
                                                                      == (IData)(vlSelf->__PVT__row_ptr))
                                                                      ? vlSelf->__PVT__bank1_5
                                                                      : 
                                                                     ((4U 
                                                                       == (IData)(vlSelf->__PVT__row_ptr))
                                                                       ? vlSelf->__PVT__bank1_4
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSelf->__PVT__row_ptr))
                                                                        ? vlSelf->__PVT__bank1_3
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelf->__PVT__row_ptr))
                                                                         ? vlSelf->__PVT__bank1_2
                                                                         : 
                                                                        ((1U 
                                                                          == (IData)(vlSelf->__PVT__row_ptr))
                                                                          ? vlSelf->__PVT__bank1_1
                                                                          : vlSelf->__PVT__bank1_0)))))))))))))))
                                                           : 
                                                          ((0xfU 
                                                            == (IData)(vlSelf->__PVT__row_ptr))
                                                            ? vlSelf->__PVT__bank0_15
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->__PVT__row_ptr))
                                                             ? vlSelf->__PVT__bank0_14
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(vlSelf->__PVT__row_ptr))
                                                              ? vlSelf->__PVT__bank0_13
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(vlSelf->__PVT__row_ptr))
                                                               ? vlSelf->__PVT__bank0_12
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(vlSelf->__PVT__row_ptr))
                                                                ? vlSelf->__PVT__bank0_11
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(vlSelf->__PVT__row_ptr))
                                                                 ? vlSelf->__PVT__bank0_10
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(vlSelf->__PVT__row_ptr))
                                                                  ? vlSelf->__PVT__bank0_9
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(vlSelf->__PVT__row_ptr))
                                                                   ? vlSelf->__PVT__bank0_8
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(vlSelf->__PVT__row_ptr))
                                                                    ? vlSelf->__PVT__bank0_7
                                                                    : 
                                                                   ((6U 
                                                                     == (IData)(vlSelf->__PVT__row_ptr))
                                                                     ? vlSelf->__PVT__bank0_6
                                                                     : 
                                                                    ((5U 
                                                                      == (IData)(vlSelf->__PVT__row_ptr))
                                                                      ? vlSelf->__PVT__bank0_5
                                                                      : 
                                                                     ((4U 
                                                                       == (IData)(vlSelf->__PVT__row_ptr))
                                                                       ? vlSelf->__PVT__bank0_4
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSelf->__PVT__row_ptr))
                                                                        ? vlSelf->__PVT__bank0_3
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelf->__PVT__row_ptr))
                                                                         ? vlSelf->__PVT__bank0_2
                                                                         : 
                                                                        ((1U 
                                                                          == (IData)(vlSelf->__PVT__row_ptr))
                                                                          ? vlSelf->__PVT__bank0_1
                                                                          : vlSelf->__PVT__bank0_0)))))))))))))))))) 
                                          + VL_EXTENDS_QI(33,32, vlSymsp->TOP.TPU_top__DOT__mxu__DOT__macs_15_9__DOT__outMacReg)));
}

VL_INLINE_OPT void VTPU_top_Accum_buffer___ico_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_10__0(VTPU_top_Accum_buffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTPU_top_Accum_buffer___ico_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_10__0\n"); );
    // Body
    vlSelf->__PVT___readWriteCollision_T = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                            & (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__accumEnByCol_10_r));
}

VL_INLINE_OPT void VTPU_top_Accum_buffer___nba_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_10__0(VTPU_top_Accum_buffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTPU_top_Accum_buffer___nba_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_10__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__write_bank;
    __Vdly__write_bank = 0;
    // Body
    __Vdly__write_bank = vlSelf->__PVT__write_bank;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bank0_0 = 0U;
        vlSelf->__PVT__bank0_1 = 0U;
        vlSelf->__PVT__bank0_2 = 0U;
        vlSelf->__PVT__bank0_3 = 0U;
        vlSelf->__PVT__bank0_4 = 0U;
        vlSelf->__PVT__bank0_5 = 0U;
        vlSelf->__PVT__bank0_6 = 0U;
        vlSelf->__PVT__bank0_7 = 0U;
        vlSelf->__PVT__bank0_8 = 0U;
        vlSelf->__PVT__bank0_9 = 0U;
        vlSelf->__PVT__bank0_10 = 0U;
        vlSelf->__PVT__bank0_11 = 0U;
        vlSelf->__PVT__bank0_12 = 0U;
        vlSelf->__PVT__bank0_13 = 0U;
        vlSelf->__PVT__bank0_14 = 0U;
        vlSelf->__PVT__bank0_15 = 0U;
        vlSelf->__PVT__bank1_0 = 0U;
        vlSelf->__PVT__bank1_1 = 0U;
        vlSelf->__PVT__bank1_2 = 0U;
        vlSelf->__PVT__bank1_3 = 0U;
        vlSelf->__PVT__bank1_4 = 0U;
        vlSelf->__PVT__bank1_5 = 0U;
        vlSelf->__PVT__bank1_6 = 0U;
        vlSelf->__PVT__bank1_7 = 0U;
        vlSelf->__PVT__bank1_8 = 0U;
        vlSelf->__PVT__bank1_9 = 0U;
        vlSelf->__PVT__bank1_10 = 0U;
        vlSelf->__PVT__bank1_11 = 0U;
        vlSelf->__PVT__bank1_12 = 0U;
        vlSelf->__PVT__bank1_13 = 0U;
        vlSelf->__PVT__bank1_14 = 0U;
        vlSelf->__PVT__bank1_15 = 0U;
        __Vdly__write_bank = 0U;
        vlSelf->__PVT__row_ptr = 0U;
    } else if (vlSelf->__PVT___readWriteCollision_T) {
        if ((1U & (~ (IData)(vlSelf->__PVT__write_bank)))) {
            if ((0U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_0 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((1U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_1 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((2U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_2 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((3U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_3 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((4U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_4 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((5U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_5 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((6U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_6 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((7U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_7 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((8U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_8 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((9U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_9 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xaU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_10 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xbU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_11 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xcU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_12 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xdU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_13 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xeU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_14 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xfU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_15 = (IData)(vlSelf->__PVT__current_sum_full);
            }
        }
        if (vlSelf->__PVT__write_bank) {
            if ((0U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_0 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((1U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_1 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((2U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_2 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((3U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_3 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((4U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_4 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((5U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_5 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((6U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_6 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((7U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_7 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((8U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_8 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((9U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_9 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xaU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_10 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xbU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_11 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xcU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_12 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xdU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_13 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xeU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_14 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xfU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_15 = (IData)(vlSelf->__PVT__current_sum_full);
            }
        }
        if (vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__snapshotByCol_10_r) {
            __Vdly__write_bank = (1U & (~ (IData)(vlSelf->__PVT__write_bank)));
        }
        vlSelf->__PVT__row_ptr = ((IData)(vlSelf->__PVT__lastRow)
                                   ? 0U : (IData)(vlSelf->__PVT___row_ptr_T_1));
    }
    vlSelf->__PVT__write_bank = __Vdly__write_bank;
    vlSelf->io_out_scalar = ((IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__streamBank)
                              ? ((0xfU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                  ? vlSelf->__PVT__bank1_15
                                  : ((0xeU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                      ? vlSelf->__PVT__bank1_14
                                      : ((0xdU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                          ? vlSelf->__PVT__bank1_13
                                          : ((0xcU 
                                              == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                              ? vlSelf->__PVT__bank1_12
                                              : ((0xbU 
                                                  == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                  ? vlSelf->__PVT__bank1_11
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                   ? vlSelf->__PVT__bank1_10
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                    ? vlSelf->__PVT__bank1_9
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                     ? vlSelf->__PVT__bank1_8
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                      ? vlSelf->__PVT__bank1_7
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                       ? vlSelf->__PVT__bank1_6
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                        ? vlSelf->__PVT__bank1_5
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                         ? vlSelf->__PVT__bank1_4
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                          ? vlSelf->__PVT__bank1_3
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                           ? vlSelf->__PVT__bank1_2
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                            ? vlSelf->__PVT__bank1_1
                                                            : vlSelf->__PVT__bank1_0)))))))))))))))
                              : ((0xfU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                  ? vlSelf->__PVT__bank0_15
                                  : ((0xeU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                      ? vlSelf->__PVT__bank0_14
                                      : ((0xdU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                          ? vlSelf->__PVT__bank0_13
                                          : ((0xcU 
                                              == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                              ? vlSelf->__PVT__bank0_12
                                              : ((0xbU 
                                                  == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                  ? vlSelf->__PVT__bank0_11
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                   ? vlSelf->__PVT__bank0_10
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                    ? vlSelf->__PVT__bank0_9
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                     ? vlSelf->__PVT__bank0_8
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                      ? vlSelf->__PVT__bank0_7
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                       ? vlSelf->__PVT__bank0_6
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                        ? vlSelf->__PVT__bank0_5
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                         ? vlSelf->__PVT__bank0_4
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                          ? vlSelf->__PVT__bank0_3
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                           ? vlSelf->__PVT__bank0_2
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                            ? vlSelf->__PVT__bank0_1
                                                            : vlSelf->__PVT__bank0_0))))))))))))))));
    vlSelf->__PVT___readWriteCollision_T = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                            & (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__accumEnByCol_10_r));
    vlSelf->__PVT__lastRow = (0xfU == (IData)(vlSelf->__PVT__row_ptr));
    vlSelf->__PVT___row_ptr_T_1 = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__row_ptr)));
    vlSelf->__PVT__current_sum_full = (0x1ffffffffULL 
                                       & (VL_EXTENDS_QI(33,32, 
                                                        ((IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__firstByCol_10_r)
                                                          ? 0U
                                                          : 
                                                         ((IData)(vlSelf->__PVT__write_bank)
                                                           ? 
                                                          ((0xfU 
                                                            == (IData)(vlSelf->__PVT__row_ptr))
                                                            ? vlSelf->__PVT__bank1_15
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->__PVT__row_ptr))
                                                             ? vlSelf->__PVT__bank1_14
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(vlSelf->__PVT__row_ptr))
                                                              ? vlSelf->__PVT__bank1_13
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(vlSelf->__PVT__row_ptr))
                                                               ? vlSelf->__PVT__bank1_12
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(vlSelf->__PVT__row_ptr))
                                                                ? vlSelf->__PVT__bank1_11
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(vlSelf->__PVT__row_ptr))
                                                                 ? vlSelf->__PVT__bank1_10
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(vlSelf->__PVT__row_ptr))
                                                                  ? vlSelf->__PVT__bank1_9
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(vlSelf->__PVT__row_ptr))
                                                                   ? vlSelf->__PVT__bank1_8
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(vlSelf->__PVT__row_ptr))
                                                                    ? vlSelf->__PVT__bank1_7
                                                                    : 
                                                                   ((6U 
                                                                     == (IData)(vlSelf->__PVT__row_ptr))
                                                                     ? vlSelf->__PVT__bank1_6
                                                                     : 
                                                                    ((5U 
                                                                      == (IData)(vlSelf->__PVT__row_ptr))
                                                                      ? vlSelf->__PVT__bank1_5
                                                                      : 
                                                                     ((4U 
                                                                       == (IData)(vlSelf->__PVT__row_ptr))
                                                                       ? vlSelf->__PVT__bank1_4
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSelf->__PVT__row_ptr))
                                                                        ? vlSelf->__PVT__bank1_3
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelf->__PVT__row_ptr))
                                                                         ? vlSelf->__PVT__bank1_2
                                                                         : 
                                                                        ((1U 
                                                                          == (IData)(vlSelf->__PVT__row_ptr))
                                                                          ? vlSelf->__PVT__bank1_1
                                                                          : vlSelf->__PVT__bank1_0)))))))))))))))
                                                           : 
                                                          ((0xfU 
                                                            == (IData)(vlSelf->__PVT__row_ptr))
                                                            ? vlSelf->__PVT__bank0_15
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->__PVT__row_ptr))
                                                             ? vlSelf->__PVT__bank0_14
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(vlSelf->__PVT__row_ptr))
                                                              ? vlSelf->__PVT__bank0_13
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(vlSelf->__PVT__row_ptr))
                                                               ? vlSelf->__PVT__bank0_12
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(vlSelf->__PVT__row_ptr))
                                                                ? vlSelf->__PVT__bank0_11
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(vlSelf->__PVT__row_ptr))
                                                                 ? vlSelf->__PVT__bank0_10
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(vlSelf->__PVT__row_ptr))
                                                                  ? vlSelf->__PVT__bank0_9
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(vlSelf->__PVT__row_ptr))
                                                                   ? vlSelf->__PVT__bank0_8
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(vlSelf->__PVT__row_ptr))
                                                                    ? vlSelf->__PVT__bank0_7
                                                                    : 
                                                                   ((6U 
                                                                     == (IData)(vlSelf->__PVT__row_ptr))
                                                                     ? vlSelf->__PVT__bank0_6
                                                                     : 
                                                                    ((5U 
                                                                      == (IData)(vlSelf->__PVT__row_ptr))
                                                                      ? vlSelf->__PVT__bank0_5
                                                                      : 
                                                                     ((4U 
                                                                       == (IData)(vlSelf->__PVT__row_ptr))
                                                                       ? vlSelf->__PVT__bank0_4
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSelf->__PVT__row_ptr))
                                                                        ? vlSelf->__PVT__bank0_3
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelf->__PVT__row_ptr))
                                                                         ? vlSelf->__PVT__bank0_2
                                                                         : 
                                                                        ((1U 
                                                                          == (IData)(vlSelf->__PVT__row_ptr))
                                                                          ? vlSelf->__PVT__bank0_1
                                                                          : vlSelf->__PVT__bank0_0)))))))))))))))))) 
                                          + VL_EXTENDS_QI(33,32, vlSymsp->TOP.TPU_top__DOT__mxu__DOT__macs_15_10__DOT__outMacReg)));
}

VL_INLINE_OPT void VTPU_top_Accum_buffer___ico_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_11__0(VTPU_top_Accum_buffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTPU_top_Accum_buffer___ico_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_11__0\n"); );
    // Body
    vlSelf->__PVT___readWriteCollision_T = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                            & (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__accumEnByCol_11_r));
}

VL_INLINE_OPT void VTPU_top_Accum_buffer___nba_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_11__0(VTPU_top_Accum_buffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTPU_top_Accum_buffer___nba_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_11__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__write_bank;
    __Vdly__write_bank = 0;
    // Body
    __Vdly__write_bank = vlSelf->__PVT__write_bank;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bank0_0 = 0U;
        vlSelf->__PVT__bank0_1 = 0U;
        vlSelf->__PVT__bank0_2 = 0U;
        vlSelf->__PVT__bank0_3 = 0U;
        vlSelf->__PVT__bank0_4 = 0U;
        vlSelf->__PVT__bank0_5 = 0U;
        vlSelf->__PVT__bank0_6 = 0U;
        vlSelf->__PVT__bank0_7 = 0U;
        vlSelf->__PVT__bank0_8 = 0U;
        vlSelf->__PVT__bank0_9 = 0U;
        vlSelf->__PVT__bank0_10 = 0U;
        vlSelf->__PVT__bank0_11 = 0U;
        vlSelf->__PVT__bank0_12 = 0U;
        vlSelf->__PVT__bank0_13 = 0U;
        vlSelf->__PVT__bank0_14 = 0U;
        vlSelf->__PVT__bank0_15 = 0U;
        vlSelf->__PVT__bank1_0 = 0U;
        vlSelf->__PVT__bank1_1 = 0U;
        vlSelf->__PVT__bank1_2 = 0U;
        vlSelf->__PVT__bank1_3 = 0U;
        vlSelf->__PVT__bank1_4 = 0U;
        vlSelf->__PVT__bank1_5 = 0U;
        vlSelf->__PVT__bank1_6 = 0U;
        vlSelf->__PVT__bank1_7 = 0U;
        vlSelf->__PVT__bank1_8 = 0U;
        vlSelf->__PVT__bank1_9 = 0U;
        vlSelf->__PVT__bank1_10 = 0U;
        vlSelf->__PVT__bank1_11 = 0U;
        vlSelf->__PVT__bank1_12 = 0U;
        vlSelf->__PVT__bank1_13 = 0U;
        vlSelf->__PVT__bank1_14 = 0U;
        vlSelf->__PVT__bank1_15 = 0U;
        __Vdly__write_bank = 0U;
        vlSelf->__PVT__row_ptr = 0U;
    } else if (vlSelf->__PVT___readWriteCollision_T) {
        if ((1U & (~ (IData)(vlSelf->__PVT__write_bank)))) {
            if ((0U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_0 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((1U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_1 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((2U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_2 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((3U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_3 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((4U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_4 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((5U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_5 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((6U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_6 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((7U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_7 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((8U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_8 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((9U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_9 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xaU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_10 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xbU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_11 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xcU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_12 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xdU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_13 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xeU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_14 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xfU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_15 = (IData)(vlSelf->__PVT__current_sum_full);
            }
        }
        if (vlSelf->__PVT__write_bank) {
            if ((0U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_0 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((1U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_1 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((2U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_2 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((3U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_3 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((4U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_4 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((5U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_5 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((6U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_6 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((7U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_7 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((8U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_8 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((9U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_9 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xaU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_10 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xbU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_11 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xcU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_12 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xdU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_13 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xeU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_14 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xfU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_15 = (IData)(vlSelf->__PVT__current_sum_full);
            }
        }
        if (vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__snapshotByCol_11_r) {
            __Vdly__write_bank = (1U & (~ (IData)(vlSelf->__PVT__write_bank)));
        }
        vlSelf->__PVT__row_ptr = ((IData)(vlSelf->__PVT__lastRow)
                                   ? 0U : (IData)(vlSelf->__PVT___row_ptr_T_1));
    }
    vlSelf->__PVT__write_bank = __Vdly__write_bank;
    vlSelf->io_out_scalar = ((IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__streamBank)
                              ? ((0xfU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                  ? vlSelf->__PVT__bank1_15
                                  : ((0xeU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                      ? vlSelf->__PVT__bank1_14
                                      : ((0xdU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                          ? vlSelf->__PVT__bank1_13
                                          : ((0xcU 
                                              == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                              ? vlSelf->__PVT__bank1_12
                                              : ((0xbU 
                                                  == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                  ? vlSelf->__PVT__bank1_11
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                   ? vlSelf->__PVT__bank1_10
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                    ? vlSelf->__PVT__bank1_9
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                     ? vlSelf->__PVT__bank1_8
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                      ? vlSelf->__PVT__bank1_7
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                       ? vlSelf->__PVT__bank1_6
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                        ? vlSelf->__PVT__bank1_5
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                         ? vlSelf->__PVT__bank1_4
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                          ? vlSelf->__PVT__bank1_3
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                           ? vlSelf->__PVT__bank1_2
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                            ? vlSelf->__PVT__bank1_1
                                                            : vlSelf->__PVT__bank1_0)))))))))))))))
                              : ((0xfU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                  ? vlSelf->__PVT__bank0_15
                                  : ((0xeU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                      ? vlSelf->__PVT__bank0_14
                                      : ((0xdU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                          ? vlSelf->__PVT__bank0_13
                                          : ((0xcU 
                                              == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                              ? vlSelf->__PVT__bank0_12
                                              : ((0xbU 
                                                  == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                  ? vlSelf->__PVT__bank0_11
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                   ? vlSelf->__PVT__bank0_10
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                    ? vlSelf->__PVT__bank0_9
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                     ? vlSelf->__PVT__bank0_8
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                      ? vlSelf->__PVT__bank0_7
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                       ? vlSelf->__PVT__bank0_6
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                        ? vlSelf->__PVT__bank0_5
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                         ? vlSelf->__PVT__bank0_4
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                          ? vlSelf->__PVT__bank0_3
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                           ? vlSelf->__PVT__bank0_2
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                            ? vlSelf->__PVT__bank0_1
                                                            : vlSelf->__PVT__bank0_0))))))))))))))));
    vlSelf->__PVT___readWriteCollision_T = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                            & (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__accumEnByCol_11_r));
    vlSelf->__PVT__lastRow = (0xfU == (IData)(vlSelf->__PVT__row_ptr));
    vlSelf->__PVT___row_ptr_T_1 = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__row_ptr)));
    vlSelf->__PVT__current_sum_full = (0x1ffffffffULL 
                                       & (VL_EXTENDS_QI(33,32, 
                                                        ((IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__firstByCol_11_r)
                                                          ? 0U
                                                          : 
                                                         ((IData)(vlSelf->__PVT__write_bank)
                                                           ? 
                                                          ((0xfU 
                                                            == (IData)(vlSelf->__PVT__row_ptr))
                                                            ? vlSelf->__PVT__bank1_15
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->__PVT__row_ptr))
                                                             ? vlSelf->__PVT__bank1_14
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(vlSelf->__PVT__row_ptr))
                                                              ? vlSelf->__PVT__bank1_13
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(vlSelf->__PVT__row_ptr))
                                                               ? vlSelf->__PVT__bank1_12
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(vlSelf->__PVT__row_ptr))
                                                                ? vlSelf->__PVT__bank1_11
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(vlSelf->__PVT__row_ptr))
                                                                 ? vlSelf->__PVT__bank1_10
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(vlSelf->__PVT__row_ptr))
                                                                  ? vlSelf->__PVT__bank1_9
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(vlSelf->__PVT__row_ptr))
                                                                   ? vlSelf->__PVT__bank1_8
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(vlSelf->__PVT__row_ptr))
                                                                    ? vlSelf->__PVT__bank1_7
                                                                    : 
                                                                   ((6U 
                                                                     == (IData)(vlSelf->__PVT__row_ptr))
                                                                     ? vlSelf->__PVT__bank1_6
                                                                     : 
                                                                    ((5U 
                                                                      == (IData)(vlSelf->__PVT__row_ptr))
                                                                      ? vlSelf->__PVT__bank1_5
                                                                      : 
                                                                     ((4U 
                                                                       == (IData)(vlSelf->__PVT__row_ptr))
                                                                       ? vlSelf->__PVT__bank1_4
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSelf->__PVT__row_ptr))
                                                                        ? vlSelf->__PVT__bank1_3
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelf->__PVT__row_ptr))
                                                                         ? vlSelf->__PVT__bank1_2
                                                                         : 
                                                                        ((1U 
                                                                          == (IData)(vlSelf->__PVT__row_ptr))
                                                                          ? vlSelf->__PVT__bank1_1
                                                                          : vlSelf->__PVT__bank1_0)))))))))))))))
                                                           : 
                                                          ((0xfU 
                                                            == (IData)(vlSelf->__PVT__row_ptr))
                                                            ? vlSelf->__PVT__bank0_15
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->__PVT__row_ptr))
                                                             ? vlSelf->__PVT__bank0_14
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(vlSelf->__PVT__row_ptr))
                                                              ? vlSelf->__PVT__bank0_13
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(vlSelf->__PVT__row_ptr))
                                                               ? vlSelf->__PVT__bank0_12
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(vlSelf->__PVT__row_ptr))
                                                                ? vlSelf->__PVT__bank0_11
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(vlSelf->__PVT__row_ptr))
                                                                 ? vlSelf->__PVT__bank0_10
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(vlSelf->__PVT__row_ptr))
                                                                  ? vlSelf->__PVT__bank0_9
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(vlSelf->__PVT__row_ptr))
                                                                   ? vlSelf->__PVT__bank0_8
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(vlSelf->__PVT__row_ptr))
                                                                    ? vlSelf->__PVT__bank0_7
                                                                    : 
                                                                   ((6U 
                                                                     == (IData)(vlSelf->__PVT__row_ptr))
                                                                     ? vlSelf->__PVT__bank0_6
                                                                     : 
                                                                    ((5U 
                                                                      == (IData)(vlSelf->__PVT__row_ptr))
                                                                      ? vlSelf->__PVT__bank0_5
                                                                      : 
                                                                     ((4U 
                                                                       == (IData)(vlSelf->__PVT__row_ptr))
                                                                       ? vlSelf->__PVT__bank0_4
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSelf->__PVT__row_ptr))
                                                                        ? vlSelf->__PVT__bank0_3
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelf->__PVT__row_ptr))
                                                                         ? vlSelf->__PVT__bank0_2
                                                                         : 
                                                                        ((1U 
                                                                          == (IData)(vlSelf->__PVT__row_ptr))
                                                                          ? vlSelf->__PVT__bank0_1
                                                                          : vlSelf->__PVT__bank0_0)))))))))))))))))) 
                                          + VL_EXTENDS_QI(33,32, vlSymsp->TOP.TPU_top__DOT__mxu__DOT__macs_15_11__DOT__outMacReg)));
}

VL_INLINE_OPT void VTPU_top_Accum_buffer___ico_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_12__0(VTPU_top_Accum_buffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTPU_top_Accum_buffer___ico_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_12__0\n"); );
    // Body
    vlSelf->__PVT___readWriteCollision_T = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                            & (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__accumEnByCol_12_r));
}

VL_INLINE_OPT void VTPU_top_Accum_buffer___nba_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_12__0(VTPU_top_Accum_buffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTPU_top_Accum_buffer___nba_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_12__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__write_bank;
    __Vdly__write_bank = 0;
    // Body
    __Vdly__write_bank = vlSelf->__PVT__write_bank;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bank0_0 = 0U;
        vlSelf->__PVT__bank0_1 = 0U;
        vlSelf->__PVT__bank0_2 = 0U;
        vlSelf->__PVT__bank0_3 = 0U;
        vlSelf->__PVT__bank0_4 = 0U;
        vlSelf->__PVT__bank0_5 = 0U;
        vlSelf->__PVT__bank0_6 = 0U;
        vlSelf->__PVT__bank0_7 = 0U;
        vlSelf->__PVT__bank0_8 = 0U;
        vlSelf->__PVT__bank0_9 = 0U;
        vlSelf->__PVT__bank0_10 = 0U;
        vlSelf->__PVT__bank0_11 = 0U;
        vlSelf->__PVT__bank0_12 = 0U;
        vlSelf->__PVT__bank0_13 = 0U;
        vlSelf->__PVT__bank0_14 = 0U;
        vlSelf->__PVT__bank0_15 = 0U;
        vlSelf->__PVT__bank1_0 = 0U;
        vlSelf->__PVT__bank1_1 = 0U;
        vlSelf->__PVT__bank1_2 = 0U;
        vlSelf->__PVT__bank1_3 = 0U;
        vlSelf->__PVT__bank1_4 = 0U;
        vlSelf->__PVT__bank1_5 = 0U;
        vlSelf->__PVT__bank1_6 = 0U;
        vlSelf->__PVT__bank1_7 = 0U;
        vlSelf->__PVT__bank1_8 = 0U;
        vlSelf->__PVT__bank1_9 = 0U;
        vlSelf->__PVT__bank1_10 = 0U;
        vlSelf->__PVT__bank1_11 = 0U;
        vlSelf->__PVT__bank1_12 = 0U;
        vlSelf->__PVT__bank1_13 = 0U;
        vlSelf->__PVT__bank1_14 = 0U;
        vlSelf->__PVT__bank1_15 = 0U;
        __Vdly__write_bank = 0U;
        vlSelf->__PVT__row_ptr = 0U;
    } else if (vlSelf->__PVT___readWriteCollision_T) {
        if ((1U & (~ (IData)(vlSelf->__PVT__write_bank)))) {
            if ((0U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_0 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((1U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_1 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((2U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_2 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((3U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_3 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((4U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_4 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((5U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_5 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((6U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_6 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((7U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_7 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((8U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_8 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((9U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_9 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xaU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_10 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xbU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_11 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xcU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_12 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xdU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_13 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xeU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_14 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xfU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_15 = (IData)(vlSelf->__PVT__current_sum_full);
            }
        }
        if (vlSelf->__PVT__write_bank) {
            if ((0U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_0 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((1U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_1 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((2U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_2 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((3U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_3 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((4U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_4 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((5U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_5 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((6U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_6 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((7U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_7 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((8U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_8 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((9U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_9 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xaU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_10 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xbU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_11 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xcU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_12 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xdU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_13 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xeU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_14 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xfU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_15 = (IData)(vlSelf->__PVT__current_sum_full);
            }
        }
        if (vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__snapshotByCol_12_r) {
            __Vdly__write_bank = (1U & (~ (IData)(vlSelf->__PVT__write_bank)));
        }
        vlSelf->__PVT__row_ptr = ((IData)(vlSelf->__PVT__lastRow)
                                   ? 0U : (IData)(vlSelf->__PVT___row_ptr_T_1));
    }
    vlSelf->__PVT__write_bank = __Vdly__write_bank;
    vlSelf->io_out_scalar = ((IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__streamBank)
                              ? ((0xfU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                  ? vlSelf->__PVT__bank1_15
                                  : ((0xeU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                      ? vlSelf->__PVT__bank1_14
                                      : ((0xdU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                          ? vlSelf->__PVT__bank1_13
                                          : ((0xcU 
                                              == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                              ? vlSelf->__PVT__bank1_12
                                              : ((0xbU 
                                                  == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                  ? vlSelf->__PVT__bank1_11
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                   ? vlSelf->__PVT__bank1_10
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                    ? vlSelf->__PVT__bank1_9
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                     ? vlSelf->__PVT__bank1_8
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                      ? vlSelf->__PVT__bank1_7
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                       ? vlSelf->__PVT__bank1_6
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                        ? vlSelf->__PVT__bank1_5
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                         ? vlSelf->__PVT__bank1_4
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                          ? vlSelf->__PVT__bank1_3
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                           ? vlSelf->__PVT__bank1_2
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                            ? vlSelf->__PVT__bank1_1
                                                            : vlSelf->__PVT__bank1_0)))))))))))))))
                              : ((0xfU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                  ? vlSelf->__PVT__bank0_15
                                  : ((0xeU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                      ? vlSelf->__PVT__bank0_14
                                      : ((0xdU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                          ? vlSelf->__PVT__bank0_13
                                          : ((0xcU 
                                              == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                              ? vlSelf->__PVT__bank0_12
                                              : ((0xbU 
                                                  == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                  ? vlSelf->__PVT__bank0_11
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                   ? vlSelf->__PVT__bank0_10
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                    ? vlSelf->__PVT__bank0_9
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                     ? vlSelf->__PVT__bank0_8
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                      ? vlSelf->__PVT__bank0_7
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                       ? vlSelf->__PVT__bank0_6
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                        ? vlSelf->__PVT__bank0_5
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                         ? vlSelf->__PVT__bank0_4
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                          ? vlSelf->__PVT__bank0_3
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                           ? vlSelf->__PVT__bank0_2
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                            ? vlSelf->__PVT__bank0_1
                                                            : vlSelf->__PVT__bank0_0))))))))))))))));
    vlSelf->__PVT___readWriteCollision_T = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                            & (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__accumEnByCol_12_r));
    vlSelf->__PVT__lastRow = (0xfU == (IData)(vlSelf->__PVT__row_ptr));
    vlSelf->__PVT___row_ptr_T_1 = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__row_ptr)));
    vlSelf->__PVT__current_sum_full = (0x1ffffffffULL 
                                       & (VL_EXTENDS_QI(33,32, 
                                                        ((IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__firstByCol_12_r)
                                                          ? 0U
                                                          : 
                                                         ((IData)(vlSelf->__PVT__write_bank)
                                                           ? 
                                                          ((0xfU 
                                                            == (IData)(vlSelf->__PVT__row_ptr))
                                                            ? vlSelf->__PVT__bank1_15
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->__PVT__row_ptr))
                                                             ? vlSelf->__PVT__bank1_14
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(vlSelf->__PVT__row_ptr))
                                                              ? vlSelf->__PVT__bank1_13
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(vlSelf->__PVT__row_ptr))
                                                               ? vlSelf->__PVT__bank1_12
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(vlSelf->__PVT__row_ptr))
                                                                ? vlSelf->__PVT__bank1_11
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(vlSelf->__PVT__row_ptr))
                                                                 ? vlSelf->__PVT__bank1_10
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(vlSelf->__PVT__row_ptr))
                                                                  ? vlSelf->__PVT__bank1_9
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(vlSelf->__PVT__row_ptr))
                                                                   ? vlSelf->__PVT__bank1_8
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(vlSelf->__PVT__row_ptr))
                                                                    ? vlSelf->__PVT__bank1_7
                                                                    : 
                                                                   ((6U 
                                                                     == (IData)(vlSelf->__PVT__row_ptr))
                                                                     ? vlSelf->__PVT__bank1_6
                                                                     : 
                                                                    ((5U 
                                                                      == (IData)(vlSelf->__PVT__row_ptr))
                                                                      ? vlSelf->__PVT__bank1_5
                                                                      : 
                                                                     ((4U 
                                                                       == (IData)(vlSelf->__PVT__row_ptr))
                                                                       ? vlSelf->__PVT__bank1_4
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSelf->__PVT__row_ptr))
                                                                        ? vlSelf->__PVT__bank1_3
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelf->__PVT__row_ptr))
                                                                         ? vlSelf->__PVT__bank1_2
                                                                         : 
                                                                        ((1U 
                                                                          == (IData)(vlSelf->__PVT__row_ptr))
                                                                          ? vlSelf->__PVT__bank1_1
                                                                          : vlSelf->__PVT__bank1_0)))))))))))))))
                                                           : 
                                                          ((0xfU 
                                                            == (IData)(vlSelf->__PVT__row_ptr))
                                                            ? vlSelf->__PVT__bank0_15
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->__PVT__row_ptr))
                                                             ? vlSelf->__PVT__bank0_14
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(vlSelf->__PVT__row_ptr))
                                                              ? vlSelf->__PVT__bank0_13
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(vlSelf->__PVT__row_ptr))
                                                               ? vlSelf->__PVT__bank0_12
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(vlSelf->__PVT__row_ptr))
                                                                ? vlSelf->__PVT__bank0_11
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(vlSelf->__PVT__row_ptr))
                                                                 ? vlSelf->__PVT__bank0_10
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(vlSelf->__PVT__row_ptr))
                                                                  ? vlSelf->__PVT__bank0_9
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(vlSelf->__PVT__row_ptr))
                                                                   ? vlSelf->__PVT__bank0_8
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(vlSelf->__PVT__row_ptr))
                                                                    ? vlSelf->__PVT__bank0_7
                                                                    : 
                                                                   ((6U 
                                                                     == (IData)(vlSelf->__PVT__row_ptr))
                                                                     ? vlSelf->__PVT__bank0_6
                                                                     : 
                                                                    ((5U 
                                                                      == (IData)(vlSelf->__PVT__row_ptr))
                                                                      ? vlSelf->__PVT__bank0_5
                                                                      : 
                                                                     ((4U 
                                                                       == (IData)(vlSelf->__PVT__row_ptr))
                                                                       ? vlSelf->__PVT__bank0_4
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSelf->__PVT__row_ptr))
                                                                        ? vlSelf->__PVT__bank0_3
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelf->__PVT__row_ptr))
                                                                         ? vlSelf->__PVT__bank0_2
                                                                         : 
                                                                        ((1U 
                                                                          == (IData)(vlSelf->__PVT__row_ptr))
                                                                          ? vlSelf->__PVT__bank0_1
                                                                          : vlSelf->__PVT__bank0_0)))))))))))))))))) 
                                          + VL_EXTENDS_QI(33,32, vlSymsp->TOP.TPU_top__DOT__mxu__DOT__macs_15_12__DOT__outMacReg)));
}

VL_INLINE_OPT void VTPU_top_Accum_buffer___ico_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_13__0(VTPU_top_Accum_buffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTPU_top_Accum_buffer___ico_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_13__0\n"); );
    // Body
    vlSelf->__PVT___readWriteCollision_T = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                            & (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__accumEnByCol_13_r));
}

VL_INLINE_OPT void VTPU_top_Accum_buffer___nba_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_13__0(VTPU_top_Accum_buffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTPU_top_Accum_buffer___nba_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_13__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__write_bank;
    __Vdly__write_bank = 0;
    // Body
    __Vdly__write_bank = vlSelf->__PVT__write_bank;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bank0_0 = 0U;
        vlSelf->__PVT__bank0_1 = 0U;
        vlSelf->__PVT__bank0_2 = 0U;
        vlSelf->__PVT__bank0_3 = 0U;
        vlSelf->__PVT__bank0_4 = 0U;
        vlSelf->__PVT__bank0_5 = 0U;
        vlSelf->__PVT__bank0_6 = 0U;
        vlSelf->__PVT__bank0_7 = 0U;
        vlSelf->__PVT__bank0_8 = 0U;
        vlSelf->__PVT__bank0_9 = 0U;
        vlSelf->__PVT__bank0_10 = 0U;
        vlSelf->__PVT__bank0_11 = 0U;
        vlSelf->__PVT__bank0_12 = 0U;
        vlSelf->__PVT__bank0_13 = 0U;
        vlSelf->__PVT__bank0_14 = 0U;
        vlSelf->__PVT__bank0_15 = 0U;
        vlSelf->__PVT__bank1_0 = 0U;
        vlSelf->__PVT__bank1_1 = 0U;
        vlSelf->__PVT__bank1_2 = 0U;
        vlSelf->__PVT__bank1_3 = 0U;
        vlSelf->__PVT__bank1_4 = 0U;
        vlSelf->__PVT__bank1_5 = 0U;
        vlSelf->__PVT__bank1_6 = 0U;
        vlSelf->__PVT__bank1_7 = 0U;
        vlSelf->__PVT__bank1_8 = 0U;
        vlSelf->__PVT__bank1_9 = 0U;
        vlSelf->__PVT__bank1_10 = 0U;
        vlSelf->__PVT__bank1_11 = 0U;
        vlSelf->__PVT__bank1_12 = 0U;
        vlSelf->__PVT__bank1_13 = 0U;
        vlSelf->__PVT__bank1_14 = 0U;
        vlSelf->__PVT__bank1_15 = 0U;
        __Vdly__write_bank = 0U;
        vlSelf->__PVT__row_ptr = 0U;
    } else if (vlSelf->__PVT___readWriteCollision_T) {
        if ((1U & (~ (IData)(vlSelf->__PVT__write_bank)))) {
            if ((0U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_0 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((1U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_1 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((2U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_2 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((3U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_3 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((4U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_4 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((5U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_5 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((6U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_6 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((7U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_7 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((8U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_8 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((9U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_9 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xaU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_10 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xbU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_11 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xcU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_12 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xdU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_13 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xeU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_14 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xfU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_15 = (IData)(vlSelf->__PVT__current_sum_full);
            }
        }
        if (vlSelf->__PVT__write_bank) {
            if ((0U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_0 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((1U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_1 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((2U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_2 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((3U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_3 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((4U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_4 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((5U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_5 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((6U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_6 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((7U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_7 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((8U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_8 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((9U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_9 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xaU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_10 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xbU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_11 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xcU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_12 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xdU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_13 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xeU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_14 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xfU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_15 = (IData)(vlSelf->__PVT__current_sum_full);
            }
        }
        if (vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__snapshotByCol_13_r) {
            __Vdly__write_bank = (1U & (~ (IData)(vlSelf->__PVT__write_bank)));
        }
        vlSelf->__PVT__row_ptr = ((IData)(vlSelf->__PVT__lastRow)
                                   ? 0U : (IData)(vlSelf->__PVT___row_ptr_T_1));
    }
    vlSelf->__PVT__write_bank = __Vdly__write_bank;
    vlSelf->io_out_scalar = ((IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__streamBank)
                              ? ((0xfU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                  ? vlSelf->__PVT__bank1_15
                                  : ((0xeU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                      ? vlSelf->__PVT__bank1_14
                                      : ((0xdU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                          ? vlSelf->__PVT__bank1_13
                                          : ((0xcU 
                                              == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                              ? vlSelf->__PVT__bank1_12
                                              : ((0xbU 
                                                  == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                  ? vlSelf->__PVT__bank1_11
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                   ? vlSelf->__PVT__bank1_10
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                    ? vlSelf->__PVT__bank1_9
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                     ? vlSelf->__PVT__bank1_8
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                      ? vlSelf->__PVT__bank1_7
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                       ? vlSelf->__PVT__bank1_6
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                        ? vlSelf->__PVT__bank1_5
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                         ? vlSelf->__PVT__bank1_4
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                          ? vlSelf->__PVT__bank1_3
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                           ? vlSelf->__PVT__bank1_2
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                            ? vlSelf->__PVT__bank1_1
                                                            : vlSelf->__PVT__bank1_0)))))))))))))))
                              : ((0xfU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                  ? vlSelf->__PVT__bank0_15
                                  : ((0xeU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                      ? vlSelf->__PVT__bank0_14
                                      : ((0xdU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                          ? vlSelf->__PVT__bank0_13
                                          : ((0xcU 
                                              == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                              ? vlSelf->__PVT__bank0_12
                                              : ((0xbU 
                                                  == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                  ? vlSelf->__PVT__bank0_11
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                   ? vlSelf->__PVT__bank0_10
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                    ? vlSelf->__PVT__bank0_9
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                     ? vlSelf->__PVT__bank0_8
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                      ? vlSelf->__PVT__bank0_7
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                       ? vlSelf->__PVT__bank0_6
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                        ? vlSelf->__PVT__bank0_5
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                         ? vlSelf->__PVT__bank0_4
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                          ? vlSelf->__PVT__bank0_3
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                           ? vlSelf->__PVT__bank0_2
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                            ? vlSelf->__PVT__bank0_1
                                                            : vlSelf->__PVT__bank0_0))))))))))))))));
    vlSelf->__PVT___readWriteCollision_T = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                            & (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__accumEnByCol_13_r));
    vlSelf->__PVT__lastRow = (0xfU == (IData)(vlSelf->__PVT__row_ptr));
    vlSelf->__PVT___row_ptr_T_1 = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__row_ptr)));
    vlSelf->__PVT__current_sum_full = (0x1ffffffffULL 
                                       & (VL_EXTENDS_QI(33,32, 
                                                        ((IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__firstByCol_13_r)
                                                          ? 0U
                                                          : 
                                                         ((IData)(vlSelf->__PVT__write_bank)
                                                           ? 
                                                          ((0xfU 
                                                            == (IData)(vlSelf->__PVT__row_ptr))
                                                            ? vlSelf->__PVT__bank1_15
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->__PVT__row_ptr))
                                                             ? vlSelf->__PVT__bank1_14
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(vlSelf->__PVT__row_ptr))
                                                              ? vlSelf->__PVT__bank1_13
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(vlSelf->__PVT__row_ptr))
                                                               ? vlSelf->__PVT__bank1_12
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(vlSelf->__PVT__row_ptr))
                                                                ? vlSelf->__PVT__bank1_11
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(vlSelf->__PVT__row_ptr))
                                                                 ? vlSelf->__PVT__bank1_10
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(vlSelf->__PVT__row_ptr))
                                                                  ? vlSelf->__PVT__bank1_9
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(vlSelf->__PVT__row_ptr))
                                                                   ? vlSelf->__PVT__bank1_8
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(vlSelf->__PVT__row_ptr))
                                                                    ? vlSelf->__PVT__bank1_7
                                                                    : 
                                                                   ((6U 
                                                                     == (IData)(vlSelf->__PVT__row_ptr))
                                                                     ? vlSelf->__PVT__bank1_6
                                                                     : 
                                                                    ((5U 
                                                                      == (IData)(vlSelf->__PVT__row_ptr))
                                                                      ? vlSelf->__PVT__bank1_5
                                                                      : 
                                                                     ((4U 
                                                                       == (IData)(vlSelf->__PVT__row_ptr))
                                                                       ? vlSelf->__PVT__bank1_4
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSelf->__PVT__row_ptr))
                                                                        ? vlSelf->__PVT__bank1_3
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelf->__PVT__row_ptr))
                                                                         ? vlSelf->__PVT__bank1_2
                                                                         : 
                                                                        ((1U 
                                                                          == (IData)(vlSelf->__PVT__row_ptr))
                                                                          ? vlSelf->__PVT__bank1_1
                                                                          : vlSelf->__PVT__bank1_0)))))))))))))))
                                                           : 
                                                          ((0xfU 
                                                            == (IData)(vlSelf->__PVT__row_ptr))
                                                            ? vlSelf->__PVT__bank0_15
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->__PVT__row_ptr))
                                                             ? vlSelf->__PVT__bank0_14
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(vlSelf->__PVT__row_ptr))
                                                              ? vlSelf->__PVT__bank0_13
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(vlSelf->__PVT__row_ptr))
                                                               ? vlSelf->__PVT__bank0_12
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(vlSelf->__PVT__row_ptr))
                                                                ? vlSelf->__PVT__bank0_11
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(vlSelf->__PVT__row_ptr))
                                                                 ? vlSelf->__PVT__bank0_10
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(vlSelf->__PVT__row_ptr))
                                                                  ? vlSelf->__PVT__bank0_9
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(vlSelf->__PVT__row_ptr))
                                                                   ? vlSelf->__PVT__bank0_8
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(vlSelf->__PVT__row_ptr))
                                                                    ? vlSelf->__PVT__bank0_7
                                                                    : 
                                                                   ((6U 
                                                                     == (IData)(vlSelf->__PVT__row_ptr))
                                                                     ? vlSelf->__PVT__bank0_6
                                                                     : 
                                                                    ((5U 
                                                                      == (IData)(vlSelf->__PVT__row_ptr))
                                                                      ? vlSelf->__PVT__bank0_5
                                                                      : 
                                                                     ((4U 
                                                                       == (IData)(vlSelf->__PVT__row_ptr))
                                                                       ? vlSelf->__PVT__bank0_4
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSelf->__PVT__row_ptr))
                                                                        ? vlSelf->__PVT__bank0_3
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelf->__PVT__row_ptr))
                                                                         ? vlSelf->__PVT__bank0_2
                                                                         : 
                                                                        ((1U 
                                                                          == (IData)(vlSelf->__PVT__row_ptr))
                                                                          ? vlSelf->__PVT__bank0_1
                                                                          : vlSelf->__PVT__bank0_0)))))))))))))))))) 
                                          + VL_EXTENDS_QI(33,32, vlSymsp->TOP.TPU_top__DOT__mxu__DOT__macs_15_13__DOT__outMacReg)));
}

VL_INLINE_OPT void VTPU_top_Accum_buffer___ico_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_14__0(VTPU_top_Accum_buffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTPU_top_Accum_buffer___ico_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_14__0\n"); );
    // Body
    vlSelf->__PVT___readWriteCollision_T = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                            & (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__accumEnByCol_14_r));
}

VL_INLINE_OPT void VTPU_top_Accum_buffer___nba_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_14__0(VTPU_top_Accum_buffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTPU_top_Accum_buffer___nba_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_14__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__write_bank;
    __Vdly__write_bank = 0;
    // Body
    __Vdly__write_bank = vlSelf->__PVT__write_bank;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bank0_0 = 0U;
        vlSelf->__PVT__bank0_1 = 0U;
        vlSelf->__PVT__bank0_2 = 0U;
        vlSelf->__PVT__bank0_3 = 0U;
        vlSelf->__PVT__bank0_4 = 0U;
        vlSelf->__PVT__bank0_5 = 0U;
        vlSelf->__PVT__bank0_6 = 0U;
        vlSelf->__PVT__bank0_7 = 0U;
        vlSelf->__PVT__bank0_8 = 0U;
        vlSelf->__PVT__bank0_9 = 0U;
        vlSelf->__PVT__bank0_10 = 0U;
        vlSelf->__PVT__bank0_11 = 0U;
        vlSelf->__PVT__bank0_12 = 0U;
        vlSelf->__PVT__bank0_13 = 0U;
        vlSelf->__PVT__bank0_14 = 0U;
        vlSelf->__PVT__bank0_15 = 0U;
        vlSelf->__PVT__bank1_0 = 0U;
        vlSelf->__PVT__bank1_1 = 0U;
        vlSelf->__PVT__bank1_2 = 0U;
        vlSelf->__PVT__bank1_3 = 0U;
        vlSelf->__PVT__bank1_4 = 0U;
        vlSelf->__PVT__bank1_5 = 0U;
        vlSelf->__PVT__bank1_6 = 0U;
        vlSelf->__PVT__bank1_7 = 0U;
        vlSelf->__PVT__bank1_8 = 0U;
        vlSelf->__PVT__bank1_9 = 0U;
        vlSelf->__PVT__bank1_10 = 0U;
        vlSelf->__PVT__bank1_11 = 0U;
        vlSelf->__PVT__bank1_12 = 0U;
        vlSelf->__PVT__bank1_13 = 0U;
        vlSelf->__PVT__bank1_14 = 0U;
        vlSelf->__PVT__bank1_15 = 0U;
        __Vdly__write_bank = 0U;
        vlSelf->__PVT__row_ptr = 0U;
    } else if (vlSelf->__PVT___readWriteCollision_T) {
        if ((1U & (~ (IData)(vlSelf->__PVT__write_bank)))) {
            if ((0U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_0 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((1U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_1 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((2U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_2 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((3U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_3 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((4U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_4 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((5U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_5 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((6U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_6 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((7U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_7 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((8U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_8 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((9U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_9 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xaU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_10 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xbU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_11 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xcU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_12 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xdU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_13 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xeU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_14 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xfU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_15 = (IData)(vlSelf->__PVT__current_sum_full);
            }
        }
        if (vlSelf->__PVT__write_bank) {
            if ((0U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_0 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((1U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_1 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((2U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_2 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((3U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_3 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((4U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_4 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((5U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_5 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((6U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_6 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((7U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_7 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((8U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_8 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((9U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_9 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xaU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_10 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xbU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_11 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xcU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_12 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xdU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_13 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xeU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_14 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xfU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_15 = (IData)(vlSelf->__PVT__current_sum_full);
            }
        }
        if (vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__snapshotByCol_14_r) {
            __Vdly__write_bank = (1U & (~ (IData)(vlSelf->__PVT__write_bank)));
        }
        vlSelf->__PVT__row_ptr = ((IData)(vlSelf->__PVT__lastRow)
                                   ? 0U : (IData)(vlSelf->__PVT___row_ptr_T_1));
    }
    vlSelf->__PVT__write_bank = __Vdly__write_bank;
    vlSelf->io_out_scalar = ((IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__streamBank)
                              ? ((0xfU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                  ? vlSelf->__PVT__bank1_15
                                  : ((0xeU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                      ? vlSelf->__PVT__bank1_14
                                      : ((0xdU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                          ? vlSelf->__PVT__bank1_13
                                          : ((0xcU 
                                              == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                              ? vlSelf->__PVT__bank1_12
                                              : ((0xbU 
                                                  == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                  ? vlSelf->__PVT__bank1_11
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                   ? vlSelf->__PVT__bank1_10
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                    ? vlSelf->__PVT__bank1_9
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                     ? vlSelf->__PVT__bank1_8
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                      ? vlSelf->__PVT__bank1_7
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                       ? vlSelf->__PVT__bank1_6
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                        ? vlSelf->__PVT__bank1_5
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                         ? vlSelf->__PVT__bank1_4
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                          ? vlSelf->__PVT__bank1_3
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                           ? vlSelf->__PVT__bank1_2
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                            ? vlSelf->__PVT__bank1_1
                                                            : vlSelf->__PVT__bank1_0)))))))))))))))
                              : ((0xfU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                  ? vlSelf->__PVT__bank0_15
                                  : ((0xeU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                      ? vlSelf->__PVT__bank0_14
                                      : ((0xdU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                          ? vlSelf->__PVT__bank0_13
                                          : ((0xcU 
                                              == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                              ? vlSelf->__PVT__bank0_12
                                              : ((0xbU 
                                                  == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                  ? vlSelf->__PVT__bank0_11
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                   ? vlSelf->__PVT__bank0_10
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                    ? vlSelf->__PVT__bank0_9
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                     ? vlSelf->__PVT__bank0_8
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                      ? vlSelf->__PVT__bank0_7
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                       ? vlSelf->__PVT__bank0_6
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                        ? vlSelf->__PVT__bank0_5
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                         ? vlSelf->__PVT__bank0_4
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                          ? vlSelf->__PVT__bank0_3
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                           ? vlSelf->__PVT__bank0_2
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                            ? vlSelf->__PVT__bank0_1
                                                            : vlSelf->__PVT__bank0_0))))))))))))))));
    vlSelf->__PVT___readWriteCollision_T = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                            & (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__accumEnByCol_14_r));
    vlSelf->__PVT__lastRow = (0xfU == (IData)(vlSelf->__PVT__row_ptr));
    vlSelf->__PVT___row_ptr_T_1 = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__row_ptr)));
    vlSelf->__PVT__current_sum_full = (0x1ffffffffULL 
                                       & (VL_EXTENDS_QI(33,32, 
                                                        ((IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__firstByCol_14_r)
                                                          ? 0U
                                                          : 
                                                         ((IData)(vlSelf->__PVT__write_bank)
                                                           ? 
                                                          ((0xfU 
                                                            == (IData)(vlSelf->__PVT__row_ptr))
                                                            ? vlSelf->__PVT__bank1_15
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->__PVT__row_ptr))
                                                             ? vlSelf->__PVT__bank1_14
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(vlSelf->__PVT__row_ptr))
                                                              ? vlSelf->__PVT__bank1_13
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(vlSelf->__PVT__row_ptr))
                                                               ? vlSelf->__PVT__bank1_12
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(vlSelf->__PVT__row_ptr))
                                                                ? vlSelf->__PVT__bank1_11
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(vlSelf->__PVT__row_ptr))
                                                                 ? vlSelf->__PVT__bank1_10
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(vlSelf->__PVT__row_ptr))
                                                                  ? vlSelf->__PVT__bank1_9
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(vlSelf->__PVT__row_ptr))
                                                                   ? vlSelf->__PVT__bank1_8
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(vlSelf->__PVT__row_ptr))
                                                                    ? vlSelf->__PVT__bank1_7
                                                                    : 
                                                                   ((6U 
                                                                     == (IData)(vlSelf->__PVT__row_ptr))
                                                                     ? vlSelf->__PVT__bank1_6
                                                                     : 
                                                                    ((5U 
                                                                      == (IData)(vlSelf->__PVT__row_ptr))
                                                                      ? vlSelf->__PVT__bank1_5
                                                                      : 
                                                                     ((4U 
                                                                       == (IData)(vlSelf->__PVT__row_ptr))
                                                                       ? vlSelf->__PVT__bank1_4
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSelf->__PVT__row_ptr))
                                                                        ? vlSelf->__PVT__bank1_3
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelf->__PVT__row_ptr))
                                                                         ? vlSelf->__PVT__bank1_2
                                                                         : 
                                                                        ((1U 
                                                                          == (IData)(vlSelf->__PVT__row_ptr))
                                                                          ? vlSelf->__PVT__bank1_1
                                                                          : vlSelf->__PVT__bank1_0)))))))))))))))
                                                           : 
                                                          ((0xfU 
                                                            == (IData)(vlSelf->__PVT__row_ptr))
                                                            ? vlSelf->__PVT__bank0_15
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->__PVT__row_ptr))
                                                             ? vlSelf->__PVT__bank0_14
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(vlSelf->__PVT__row_ptr))
                                                              ? vlSelf->__PVT__bank0_13
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(vlSelf->__PVT__row_ptr))
                                                               ? vlSelf->__PVT__bank0_12
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(vlSelf->__PVT__row_ptr))
                                                                ? vlSelf->__PVT__bank0_11
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(vlSelf->__PVT__row_ptr))
                                                                 ? vlSelf->__PVT__bank0_10
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(vlSelf->__PVT__row_ptr))
                                                                  ? vlSelf->__PVT__bank0_9
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(vlSelf->__PVT__row_ptr))
                                                                   ? vlSelf->__PVT__bank0_8
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(vlSelf->__PVT__row_ptr))
                                                                    ? vlSelf->__PVT__bank0_7
                                                                    : 
                                                                   ((6U 
                                                                     == (IData)(vlSelf->__PVT__row_ptr))
                                                                     ? vlSelf->__PVT__bank0_6
                                                                     : 
                                                                    ((5U 
                                                                      == (IData)(vlSelf->__PVT__row_ptr))
                                                                      ? vlSelf->__PVT__bank0_5
                                                                      : 
                                                                     ((4U 
                                                                       == (IData)(vlSelf->__PVT__row_ptr))
                                                                       ? vlSelf->__PVT__bank0_4
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSelf->__PVT__row_ptr))
                                                                        ? vlSelf->__PVT__bank0_3
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelf->__PVT__row_ptr))
                                                                         ? vlSelf->__PVT__bank0_2
                                                                         : 
                                                                        ((1U 
                                                                          == (IData)(vlSelf->__PVT__row_ptr))
                                                                          ? vlSelf->__PVT__bank0_1
                                                                          : vlSelf->__PVT__bank0_0)))))))))))))))))) 
                                          + VL_EXTENDS_QI(33,32, vlSymsp->TOP.TPU_top__DOT__mxu__DOT__macs_15_14__DOT__outMacReg)));
}

VL_INLINE_OPT void VTPU_top_Accum_buffer___ico_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_15__0(VTPU_top_Accum_buffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTPU_top_Accum_buffer___ico_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_15__0\n"); );
    // Body
    vlSelf->__PVT___readWriteCollision_T = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                            & (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__accumEnByCol_15_r));
}

VL_INLINE_OPT void VTPU_top_Accum_buffer___nba_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_15__0(VTPU_top_Accum_buffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTPU_top_Accum_buffer___nba_sequent__TOP__TPU_top__DOT__accumulator__DOT__buffers_15__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__write_bank;
    __Vdly__write_bank = 0;
    // Body
    __Vdly__write_bank = vlSelf->__PVT__write_bank;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bank0_0 = 0U;
        vlSelf->__PVT__bank0_1 = 0U;
        vlSelf->__PVT__bank0_2 = 0U;
        vlSelf->__PVT__bank0_3 = 0U;
        vlSelf->__PVT__bank0_4 = 0U;
        vlSelf->__PVT__bank0_5 = 0U;
        vlSelf->__PVT__bank0_6 = 0U;
        vlSelf->__PVT__bank0_7 = 0U;
        vlSelf->__PVT__bank0_8 = 0U;
        vlSelf->__PVT__bank0_9 = 0U;
        vlSelf->__PVT__bank0_10 = 0U;
        vlSelf->__PVT__bank0_11 = 0U;
        vlSelf->__PVT__bank0_12 = 0U;
        vlSelf->__PVT__bank0_13 = 0U;
        vlSelf->__PVT__bank0_14 = 0U;
        vlSelf->__PVT__bank0_15 = 0U;
        vlSelf->__PVT__bank1_0 = 0U;
        vlSelf->__PVT__bank1_1 = 0U;
        vlSelf->__PVT__bank1_2 = 0U;
        vlSelf->__PVT__bank1_3 = 0U;
        vlSelf->__PVT__bank1_4 = 0U;
        vlSelf->__PVT__bank1_5 = 0U;
        vlSelf->__PVT__bank1_6 = 0U;
        vlSelf->__PVT__bank1_7 = 0U;
        vlSelf->__PVT__bank1_8 = 0U;
        vlSelf->__PVT__bank1_9 = 0U;
        vlSelf->__PVT__bank1_10 = 0U;
        vlSelf->__PVT__bank1_11 = 0U;
        vlSelf->__PVT__bank1_12 = 0U;
        vlSelf->__PVT__bank1_13 = 0U;
        vlSelf->__PVT__bank1_14 = 0U;
        vlSelf->__PVT__bank1_15 = 0U;
        __Vdly__write_bank = 0U;
        vlSelf->__PVT__row_ptr = 0U;
    } else if (vlSelf->__PVT___readWriteCollision_T) {
        if ((1U & (~ (IData)(vlSelf->__PVT__write_bank)))) {
            if ((0U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_0 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((1U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_1 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((2U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_2 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((3U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_3 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((4U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_4 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((5U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_5 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((6U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_6 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((7U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_7 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((8U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_8 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((9U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_9 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xaU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_10 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xbU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_11 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xcU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_12 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xdU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_13 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xeU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_14 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xfU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank0_15 = (IData)(vlSelf->__PVT__current_sum_full);
            }
        }
        if (vlSelf->__PVT__write_bank) {
            if ((0U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_0 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((1U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_1 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((2U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_2 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((3U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_3 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((4U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_4 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((5U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_5 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((6U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_6 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((7U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_7 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((8U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_8 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((9U == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_9 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xaU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_10 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xbU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_11 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xcU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_12 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xdU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_13 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xeU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_14 = (IData)(vlSelf->__PVT__current_sum_full);
            }
            if ((0xfU == (IData)(vlSelf->__PVT__row_ptr))) {
                vlSelf->__PVT__bank1_15 = (IData)(vlSelf->__PVT__current_sum_full);
            }
        }
        if (vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__snapshotByCol_15_r) {
            __Vdly__write_bank = (1U & (~ (IData)(vlSelf->__PVT__write_bank)));
        }
        vlSelf->__PVT__row_ptr = ((IData)(vlSelf->__PVT__lastRow)
                                   ? 0U : (IData)(vlSelf->__PVT___row_ptr_T_1));
    }
    vlSelf->__PVT__write_bank = __Vdly__write_bank;
    vlSelf->io_out_scalar = ((IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__streamBank)
                              ? ((0xfU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                  ? vlSelf->__PVT__bank1_15
                                  : ((0xeU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                      ? vlSelf->__PVT__bank1_14
                                      : ((0xdU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                          ? vlSelf->__PVT__bank1_13
                                          : ((0xcU 
                                              == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                              ? vlSelf->__PVT__bank1_12
                                              : ((0xbU 
                                                  == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                  ? vlSelf->__PVT__bank1_11
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                   ? vlSelf->__PVT__bank1_10
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                    ? vlSelf->__PVT__bank1_9
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                     ? vlSelf->__PVT__bank1_8
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                      ? vlSelf->__PVT__bank1_7
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                       ? vlSelf->__PVT__bank1_6
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                        ? vlSelf->__PVT__bank1_5
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                         ? vlSelf->__PVT__bank1_4
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                          ? vlSelf->__PVT__bank1_3
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                           ? vlSelf->__PVT__bank1_2
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                            ? vlSelf->__PVT__bank1_1
                                                            : vlSelf->__PVT__bank1_0)))))))))))))))
                              : ((0xfU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                  ? vlSelf->__PVT__bank0_15
                                  : ((0xeU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                      ? vlSelf->__PVT__bank0_14
                                      : ((0xdU == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                          ? vlSelf->__PVT__bank0_13
                                          : ((0xcU 
                                              == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                              ? vlSelf->__PVT__bank0_12
                                              : ((0xbU 
                                                  == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                  ? vlSelf->__PVT__bank0_11
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                   ? vlSelf->__PVT__bank0_10
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                    ? vlSelf->__PVT__bank0_9
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                     ? vlSelf->__PVT__bank0_8
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                      ? vlSelf->__PVT__bank0_7
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                       ? vlSelf->__PVT__bank0_6
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                        ? vlSelf->__PVT__bank0_5
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                         ? vlSelf->__PVT__bank0_4
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                          ? vlSelf->__PVT__bank0_3
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                           ? vlSelf->__PVT__bank0_2
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__read_ptr))
                                                            ? vlSelf->__PVT__bank0_1
                                                            : vlSelf->__PVT__bank0_0))))))))))))))));
    vlSelf->__PVT___readWriteCollision_T = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                            & (IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__accumEnByCol_15_r));
    vlSelf->__PVT__lastRow = (0xfU == (IData)(vlSelf->__PVT__row_ptr));
    vlSelf->__PVT___row_ptr_T_1 = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__row_ptr)));
    vlSelf->__PVT__current_sum_full = (0x1ffffffffULL 
                                       & (VL_EXTENDS_QI(33,32, 
                                                        ((IData)(vlSymsp->TOP.TPU_top__DOT__accumulator__DOT__firstByCol_15_r)
                                                          ? 0U
                                                          : 
                                                         ((IData)(vlSelf->__PVT__write_bank)
                                                           ? 
                                                          ((0xfU 
                                                            == (IData)(vlSelf->__PVT__row_ptr))
                                                            ? vlSelf->__PVT__bank1_15
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->__PVT__row_ptr))
                                                             ? vlSelf->__PVT__bank1_14
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(vlSelf->__PVT__row_ptr))
                                                              ? vlSelf->__PVT__bank1_13
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(vlSelf->__PVT__row_ptr))
                                                               ? vlSelf->__PVT__bank1_12
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(vlSelf->__PVT__row_ptr))
                                                                ? vlSelf->__PVT__bank1_11
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(vlSelf->__PVT__row_ptr))
                                                                 ? vlSelf->__PVT__bank1_10
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(vlSelf->__PVT__row_ptr))
                                                                  ? vlSelf->__PVT__bank1_9
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(vlSelf->__PVT__row_ptr))
                                                                   ? vlSelf->__PVT__bank1_8
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(vlSelf->__PVT__row_ptr))
                                                                    ? vlSelf->__PVT__bank1_7
                                                                    : 
                                                                   ((6U 
                                                                     == (IData)(vlSelf->__PVT__row_ptr))
                                                                     ? vlSelf->__PVT__bank1_6
                                                                     : 
                                                                    ((5U 
                                                                      == (IData)(vlSelf->__PVT__row_ptr))
                                                                      ? vlSelf->__PVT__bank1_5
                                                                      : 
                                                                     ((4U 
                                                                       == (IData)(vlSelf->__PVT__row_ptr))
                                                                       ? vlSelf->__PVT__bank1_4
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSelf->__PVT__row_ptr))
                                                                        ? vlSelf->__PVT__bank1_3
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelf->__PVT__row_ptr))
                                                                         ? vlSelf->__PVT__bank1_2
                                                                         : 
                                                                        ((1U 
                                                                          == (IData)(vlSelf->__PVT__row_ptr))
                                                                          ? vlSelf->__PVT__bank1_1
                                                                          : vlSelf->__PVT__bank1_0)))))))))))))))
                                                           : 
                                                          ((0xfU 
                                                            == (IData)(vlSelf->__PVT__row_ptr))
                                                            ? vlSelf->__PVT__bank0_15
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->__PVT__row_ptr))
                                                             ? vlSelf->__PVT__bank0_14
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(vlSelf->__PVT__row_ptr))
                                                              ? vlSelf->__PVT__bank0_13
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(vlSelf->__PVT__row_ptr))
                                                               ? vlSelf->__PVT__bank0_12
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(vlSelf->__PVT__row_ptr))
                                                                ? vlSelf->__PVT__bank0_11
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(vlSelf->__PVT__row_ptr))
                                                                 ? vlSelf->__PVT__bank0_10
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(vlSelf->__PVT__row_ptr))
                                                                  ? vlSelf->__PVT__bank0_9
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(vlSelf->__PVT__row_ptr))
                                                                   ? vlSelf->__PVT__bank0_8
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(vlSelf->__PVT__row_ptr))
                                                                    ? vlSelf->__PVT__bank0_7
                                                                    : 
                                                                   ((6U 
                                                                     == (IData)(vlSelf->__PVT__row_ptr))
                                                                     ? vlSelf->__PVT__bank0_6
                                                                     : 
                                                                    ((5U 
                                                                      == (IData)(vlSelf->__PVT__row_ptr))
                                                                      ? vlSelf->__PVT__bank0_5
                                                                      : 
                                                                     ((4U 
                                                                       == (IData)(vlSelf->__PVT__row_ptr))
                                                                       ? vlSelf->__PVT__bank0_4
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSelf->__PVT__row_ptr))
                                                                        ? vlSelf->__PVT__bank0_3
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelf->__PVT__row_ptr))
                                                                         ? vlSelf->__PVT__bank0_2
                                                                         : 
                                                                        ((1U 
                                                                          == (IData)(vlSelf->__PVT__row_ptr))
                                                                          ? vlSelf->__PVT__bank0_1
                                                                          : vlSelf->__PVT__bank0_0)))))))))))))))))) 
                                          + VL_EXTENDS_QI(33,32, vlSymsp->TOP.TPU_top__DOT__mxu__DOT__macs_15_15__DOT__outMacReg)));
}
