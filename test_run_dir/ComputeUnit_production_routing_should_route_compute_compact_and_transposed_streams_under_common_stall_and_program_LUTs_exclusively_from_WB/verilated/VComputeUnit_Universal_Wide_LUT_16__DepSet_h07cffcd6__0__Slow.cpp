// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComputeUnit.h for the primary calling header

#include "VComputeUnit__pch.h"
#include "VComputeUnit_Universal_Wide_LUT_16.h"

VL_ATTR_COLD void VComputeUnit_Universal_Wide_LUT_16___stl_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___stl_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0__0\n"); );
    // Body
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
    vlSelf->io_rd_data = ((7U == (IData)(vlSelf->__PVT__rd_col_delayed))
                           ? vlSelf->__PVT__lut_mem_7
                          [vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                           : ((6U == (IData)(vlSelf->__PVT__rd_col_delayed))
                               ? vlSelf->__PVT__lut_mem_6
                              [vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                               : ((5U == (IData)(vlSelf->__PVT__rd_col_delayed))
                                   ? vlSelf->__PVT__lut_mem_5
                                  [vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                   : ((4U == (IData)(vlSelf->__PVT__rd_col_delayed))
                                       ? vlSelf->__PVT__lut_mem_4
                                      [vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                       : ((3U == (IData)(vlSelf->__PVT__rd_col_delayed))
                                           ? vlSelf->__PVT__lut_mem_3
                                          [vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                           : ((2U == (IData)(vlSelf->__PVT__rd_col_delayed))
                                               ? vlSelf->__PVT__lut_mem_2
                                              [vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                               : ((1U 
                                                   == (IData)(vlSelf->__PVT__rd_col_delayed))
                                                   ? 
                                                  vlSelf->__PVT__lut_mem_1
                                                  [vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                   : 
                                                  vlSelf->__PVT__lut_mem_0
                                                  [vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0])))))));
}

VL_ATTR_COLD void VComputeUnit_Universal_Wide_LUT_16___stl_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_2__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___stl_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_2__0\n"); );
    // Body
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
    vlSelf->io_rd_data = ((7U == (IData)(vlSelf->__PVT__rd_col_delayed))
                           ? vlSelf->__PVT__lut_mem_7
                          [vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                           : ((6U == (IData)(vlSelf->__PVT__rd_col_delayed))
                               ? vlSelf->__PVT__lut_mem_6
                              [vlSelf->__PVT__lut_mem_6_rd_vec_addr_pipe_0]
                               : ((5U == (IData)(vlSelf->__PVT__rd_col_delayed))
                                   ? vlSelf->__PVT__lut_mem_5
                                  [vlSelf->__PVT__lut_mem_5_rd_vec_addr_pipe_0]
                                   : ((4U == (IData)(vlSelf->__PVT__rd_col_delayed))
                                       ? vlSelf->__PVT__lut_mem_4
                                      [vlSelf->__PVT__lut_mem_4_rd_vec_addr_pipe_0]
                                       : ((3U == (IData)(vlSelf->__PVT__rd_col_delayed))
                                           ? vlSelf->__PVT__lut_mem_3
                                          [vlSelf->__PVT__lut_mem_3_rd_vec_addr_pipe_0]
                                           : ((2U == (IData)(vlSelf->__PVT__rd_col_delayed))
                                               ? vlSelf->__PVT__lut_mem_2
                                              [vlSelf->__PVT__lut_mem_2_rd_vec_addr_pipe_0]
                                               : ((1U 
                                                   == (IData)(vlSelf->__PVT__rd_col_delayed))
                                                   ? 
                                                  vlSelf->__PVT__lut_mem_1
                                                  [vlSelf->__PVT__lut_mem_1_rd_vec_addr_pipe_0]
                                                   : 
                                                  vlSelf->__PVT__lut_mem_0
                                                  [vlSelf->__PVT__lut_mem_0_rd_vec_addr_pipe_0])))))));
}

VL_ATTR_COLD void VComputeUnit_Universal_Wide_LUT_16___stl_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_0__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___stl_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_0__0\n"); );
    // Body
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_ATTR_COLD void VComputeUnit_Universal_Wide_LUT_16___ctor_var_reset(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_wr_en = VL_RAND_RESET_I(1);
    vlSelf->io_wr_addr = VL_RAND_RESET_I(5);
    vlSelf->io_wr_data_0 = VL_RAND_RESET_I(16);
    vlSelf->io_wr_data_1 = VL_RAND_RESET_I(16);
    vlSelf->io_wr_data_2 = VL_RAND_RESET_I(16);
    vlSelf->io_wr_data_3 = VL_RAND_RESET_I(16);
    vlSelf->io_wr_data_4 = VL_RAND_RESET_I(16);
    vlSelf->io_wr_data_5 = VL_RAND_RESET_I(16);
    vlSelf->io_wr_data_6 = VL_RAND_RESET_I(16);
    vlSelf->io_wr_data_7 = VL_RAND_RESET_I(16);
    vlSelf->io_rd_en = VL_RAND_RESET_I(1);
    vlSelf->io_rd_addr = VL_RAND_RESET_I(8);
    vlSelf->io_rd_data = VL_RAND_RESET_I(16);
    vlSelf->io_rd_valid = VL_RAND_RESET_I(1);
    vlSelf->io_lut_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__lut_mem_0[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->__PVT__lut_mem_0_rd_vec_addr_pipe_0 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__lut_mem_1[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->__PVT__lut_mem_1_rd_vec_addr_pipe_0 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__lut_mem_2[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->__PVT__lut_mem_2_rd_vec_addr_pipe_0 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__lut_mem_3[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->__PVT__lut_mem_3_rd_vec_addr_pipe_0 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__lut_mem_4[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->__PVT__lut_mem_4_rd_vec_addr_pipe_0 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__lut_mem_5[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->__PVT__lut_mem_5_rd_vec_addr_pipe_0 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__lut_mem_6[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->__PVT__lut_mem_6_rd_vec_addr_pipe_0 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__lut_mem_7[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__is_programmed = VL_RAND_RESET_I(1);
    vlSelf->__PVT__last_write_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_12 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rd_col_delayed = VL_RAND_RESET_I(3);
    vlSelf->__PVT__io_rd_valid_REG = VL_RAND_RESET_I(1);
}

VL_ATTR_COLD void VComputeUnit_Universal_Wide_LUT_16___configure_coverage(VComputeUnit_Universal_Wide_LUT_16* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
}
