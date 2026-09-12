// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComputeUnitE2EHarness.h for the primary calling header

#include "VComputeUnitE2EHarness__pch.h"
#include "VComputeUnitE2EHarness_QuantActCore.h"
#include "VComputeUnitE2EHarness__Syms.h"

VL_ATTR_COLD void VComputeUnitE2EHarness_QuantActCore___stl_sequent__TOP__ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0__0(VComputeUnitE2EHarness_QuantActCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnitE2EHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnitE2EHarness_QuantActCore___stl_sequent__TOP__ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0__0\n"); );
    // Body
    vlSelf->__VdfgTmp_h017163a2__0 = (((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__s2MultRes 
                                                                   >> 0x30U))))) 
                                       << 0x31U) | vlSelf->__PVT__s2MultRes);
    vlSelf->__PVT__actLut__DOT___GEN_20 = ((IData)(vlSelf->__PVT__actLut__DOT__is_programmed) 
                                           | (IData)(vlSelf->__PVT__actLut__DOT__last_write_ack));
    vlSelf->__PVT__linearReq = ((IData)(vlSelf->__PVT__s3Valid) 
                                & ((~ (IData)(vlSelf->__PVT__s3ActEn)) 
                                   & (~ (IData)(vlSymsp->TOP.io_stall))));
    vlSelf->__PVT__actLut_io_rd_en = ((IData)(vlSelf->__PVT__s3Valid) 
                                      & ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                         & (IData)(vlSelf->__PVT__s3ActEn)));
    vlSelf->__PVT__shifted = (0x1ffffffffffffULL & 
                              VL_SHIFTRS_QQI(49,49,5, vlSelf->__PVT__s2MultRes, (IData)(vlSelf->__PVT__s2Shift)));
    vlSelf->__PVT__actLut_io_rd_data = ((0xfU == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                         ? vlSelf->__PVT__actLut__DOT__lut_mem_15
                                        [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                         : ((0xeU == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                             ? vlSelf->__PVT__actLut__DOT__lut_mem_14
                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                             : ((0xdU 
                                                 == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                 ? 
                                                vlSelf->__PVT__actLut__DOT__lut_mem_13
                                                [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                 : 
                                                ((0xcU 
                                                  == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                  ? 
                                                 vlSelf->__PVT__actLut__DOT__lut_mem_12
                                                 [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                   ? 
                                                  vlSelf->__PVT__actLut__DOT__lut_mem_11
                                                  [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                    ? 
                                                   vlSelf->__PVT__actLut__DOT__lut_mem_10
                                                   [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                     ? 
                                                    vlSelf->__PVT__actLut__DOT__lut_mem_9
                                                    [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                      ? 
                                                     vlSelf->__PVT__actLut__DOT__lut_mem_8
                                                     [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                       ? 
                                                      vlSelf->__PVT__actLut__DOT__lut_mem_7
                                                      [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                        ? 
                                                       vlSelf->__PVT__actLut__DOT__lut_mem_6
                                                       [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                         ? 
                                                        vlSelf->__PVT__actLut__DOT__lut_mem_5
                                                        [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                          ? 
                                                         vlSelf->__PVT__actLut__DOT__lut_mem_4
                                                         [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                           ? 
                                                          vlSelf->__PVT__actLut__DOT__lut_mem_3
                                                          [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                            ? 
                                                           vlSelf->__PVT__actLut__DOT__lut_mem_2
                                                           [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                             ? 
                                                            vlSelf->__PVT__actLut__DOT__lut_mem_1
                                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                             : 
                                                            vlSelf->__PVT__actLut__DOT__lut_mem_0
                                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0])))))))))))))));
    vlSelf->__PVT__rawValid = ((IData)(vlSelf->__PVT__actLut__DOT__io_rd_valid_REG) 
                               | (IData)(vlSelf->__PVT__linearValidD1));
    vlSelf->__PVT___GEN_22 = (0x7ffU & ((IData)(vlSymsp->TOP.io_stall)
                                         ? (IData)(vlSelf->__PVT__s3Idx)
                                         : ((IData)(vlSelf->__PVT__s2Valid)
                                             ? ((IData)(0x200U) 
                                                + (
                                                   ((VL_GTS_IQQ(49, 0x1fffffffffe00ULL, vlSelf->__PVT__shifted) 
                                                     | (VL_GTES_IQQ(49, 0x1ffULL, vlSelf->__PVT__shifted) 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__shifted 
                                                                   >> 9U)))) 
                                                    << 0xaU) 
                                                   | (VL_GTS_IQQ(49, 0x1fffffffffe00ULL, vlSelf->__PVT__shifted)
                                                       ? 0x200U
                                                       : 
                                                      (VL_LTS_IQQ(49, 0x1ffULL, vlSelf->__PVT__shifted)
                                                        ? 0x1ffU
                                                        : 
                                                       (0x3ffU 
                                                        & (IData)(vlSelf->__PVT__shifted))))))
                                             : (IData)(vlSelf->__PVT__s3Idx))));
    vlSelf->io_out_qact = ((IData)(vlSelf->__PVT__holdValid)
                            ? (IData)(vlSelf->__PVT__holdData)
                            : ((IData)(vlSelf->__PVT__actLut__DOT__io_rd_valid_REG)
                                ? (IData)(vlSelf->__PVT__actLut_io_rd_data)
                                : (IData)(vlSelf->__PVT__linearDataD1)));
    vlSelf->__PVT___GEN_27 = (((IData)(vlSymsp->TOP.io_stall) 
                               & ((~ (IData)(vlSelf->__PVT__holdValid)) 
                                  & (IData)(vlSelf->__PVT__rawValid))) 
                              | ((~ ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                     & (IData)(vlSelf->__PVT__holdValid))) 
                                 & (IData)(vlSelf->__PVT__holdValid)));
    vlSelf->io_out_valid = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                            & ((IData)(vlSelf->__PVT__holdValid) 
                               | (IData)(vlSelf->__PVT__rawValid)));
}

VL_ATTR_COLD void VComputeUnitE2EHarness_QuantActCore___stl_sequent__TOP__ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_1__0(VComputeUnitE2EHarness_QuantActCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnitE2EHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnitE2EHarness_QuantActCore___stl_sequent__TOP__ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_1__0\n"); );
    // Body
    vlSelf->__VdfgTmp_h017163a2__0 = (((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__s2MultRes 
                                                                   >> 0x30U))))) 
                                       << 0x31U) | vlSelf->__PVT__s2MultRes);
    vlSelf->__PVT__actLut__DOT___GEN_20 = ((IData)(vlSelf->__PVT__actLut__DOT__is_programmed) 
                                           | (IData)(vlSelf->__PVT__actLut__DOT__last_write_ack));
    vlSelf->__PVT__linearReq = ((IData)(vlSelf->__PVT__s3Valid) 
                                & ((~ (IData)(vlSelf->__PVT__s3ActEn)) 
                                   & (~ (IData)(vlSymsp->TOP.io_stall))));
    vlSelf->__PVT__actLut_io_rd_en = ((IData)(vlSelf->__PVT__s3Valid) 
                                      & ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                         & (IData)(vlSelf->__PVT__s3ActEn)));
    vlSelf->__PVT__shifted = (0x1ffffffffffffULL & 
                              VL_SHIFTRS_QQI(49,49,5, vlSelf->__PVT__s2MultRes, (IData)(vlSelf->__PVT__s2Shift)));
    vlSelf->__PVT__actLut_io_rd_data = ((0xfU == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                         ? vlSelf->__PVT__actLut__DOT__lut_mem_15
                                        [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                         : ((0xeU == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                             ? vlSelf->__PVT__actLut__DOT__lut_mem_14
                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                             : ((0xdU 
                                                 == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                 ? 
                                                vlSelf->__PVT__actLut__DOT__lut_mem_13
                                                [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                 : 
                                                ((0xcU 
                                                  == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                  ? 
                                                 vlSelf->__PVT__actLut__DOT__lut_mem_12
                                                 [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                   ? 
                                                  vlSelf->__PVT__actLut__DOT__lut_mem_11
                                                  [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                    ? 
                                                   vlSelf->__PVT__actLut__DOT__lut_mem_10
                                                   [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                     ? 
                                                    vlSelf->__PVT__actLut__DOT__lut_mem_9
                                                    [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                      ? 
                                                     vlSelf->__PVT__actLut__DOT__lut_mem_8
                                                     [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                       ? 
                                                      vlSelf->__PVT__actLut__DOT__lut_mem_7
                                                      [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                        ? 
                                                       vlSelf->__PVT__actLut__DOT__lut_mem_6
                                                       [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                         ? 
                                                        vlSelf->__PVT__actLut__DOT__lut_mem_5
                                                        [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                          ? 
                                                         vlSelf->__PVT__actLut__DOT__lut_mem_4
                                                         [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                           ? 
                                                          vlSelf->__PVT__actLut__DOT__lut_mem_3
                                                          [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                            ? 
                                                           vlSelf->__PVT__actLut__DOT__lut_mem_2
                                                           [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                             ? 
                                                            vlSelf->__PVT__actLut__DOT__lut_mem_1
                                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                             : 
                                                            vlSelf->__PVT__actLut__DOT__lut_mem_0
                                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0])))))))))))))));
    vlSelf->__PVT__rawValid = ((IData)(vlSelf->__PVT__actLut__DOT__io_rd_valid_REG) 
                               | (IData)(vlSelf->__PVT__linearValidD1));
    vlSelf->__PVT___GEN_22 = (0x7ffU & ((IData)(vlSymsp->TOP.io_stall)
                                         ? (IData)(vlSelf->__PVT__s3Idx)
                                         : ((IData)(vlSelf->__PVT__s2Valid)
                                             ? ((IData)(0x200U) 
                                                + (
                                                   ((VL_GTS_IQQ(49, 0x1fffffffffe00ULL, vlSelf->__PVT__shifted) 
                                                     | (VL_GTES_IQQ(49, 0x1ffULL, vlSelf->__PVT__shifted) 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__shifted 
                                                                   >> 9U)))) 
                                                    << 0xaU) 
                                                   | (VL_GTS_IQQ(49, 0x1fffffffffe00ULL, vlSelf->__PVT__shifted)
                                                       ? 0x200U
                                                       : 
                                                      (VL_LTS_IQQ(49, 0x1ffULL, vlSelf->__PVT__shifted)
                                                        ? 0x1ffU
                                                        : 
                                                       (0x3ffU 
                                                        & (IData)(vlSelf->__PVT__shifted))))))
                                             : (IData)(vlSelf->__PVT__s3Idx))));
    vlSelf->io_out_qact = ((IData)(vlSelf->__PVT__holdValid)
                            ? (IData)(vlSelf->__PVT__holdData)
                            : ((IData)(vlSelf->__PVT__actLut__DOT__io_rd_valid_REG)
                                ? (IData)(vlSelf->__PVT__actLut_io_rd_data)
                                : (IData)(vlSelf->__PVT__linearDataD1)));
    vlSelf->__PVT___GEN_27 = (((IData)(vlSymsp->TOP.io_stall) 
                               & ((~ (IData)(vlSelf->__PVT__holdValid)) 
                                  & (IData)(vlSelf->__PVT__rawValid))) 
                              | ((~ ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                     & (IData)(vlSelf->__PVT__holdValid))) 
                                 & (IData)(vlSelf->__PVT__holdValid)));
}
