// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComputeUnit.h for the primary calling header

#include "VComputeUnit__pch.h"
#include "VComputeUnit_Universal_Wide_LUT_16.h"
#include "VComputeUnit__Syms.h"

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_rd_addr));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__io_rd_valid_REG = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_rd_en));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
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
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_1__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_1__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_1_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_1_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_1_io_rd_addr));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__io_rd_valid_REG = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_1_io_rd_en));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
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
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_2__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_2__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_2_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_2_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__lut_mem_6_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_2_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__lut_mem_5_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_2_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__lut_mem_1_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_2_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__lut_mem_0_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_2_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__lut_mem_2_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_2_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__lut_mem_3_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_2_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_2_io_rd_addr));
        vlSelf->__PVT__lut_mem_4_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_2_io_rd_addr) 
                        >> 3U));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__io_rd_valid_REG = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_2_io_rd_en));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
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
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_3__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_3__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_3_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_3_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_3_io_rd_addr));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__io_rd_valid_REG = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_3_io_rd_en));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
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
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_4__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_4__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_4_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_4_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__lut_mem_6_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_4_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__lut_mem_5_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_4_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__lut_mem_1_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_4_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__lut_mem_0_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_4_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__lut_mem_2_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_4_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__lut_mem_3_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_4_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_4_io_rd_addr));
        vlSelf->__PVT__lut_mem_4_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_4_io_rd_addr) 
                        >> 3U));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__io_rd_valid_REG = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_4_io_rd_en));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
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
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_5__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_5__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_5_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_5_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_5_io_rd_addr));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__io_rd_valid_REG = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_5_io_rd_en));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
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
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_6__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_6__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_6_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_6_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__lut_mem_6_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_6_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__lut_mem_5_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_6_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__lut_mem_1_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_6_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__lut_mem_0_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_6_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__lut_mem_2_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_6_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__lut_mem_3_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_6_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_6_io_rd_addr));
        vlSelf->__PVT__lut_mem_4_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_6_io_rd_addr) 
                        >> 3U));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__io_rd_valid_REG = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_6_io_rd_en));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
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
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_7__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_7__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_7_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_7_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_7_io_rd_addr));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__io_rd_valid_REG = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_7_io_rd_en));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
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
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_8__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_8__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_8_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_8_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__lut_mem_6_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_8_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__lut_mem_5_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_8_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__lut_mem_1_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_8_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__lut_mem_0_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_8_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__lut_mem_2_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_8_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__lut_mem_3_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_8_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_8_io_rd_addr));
        vlSelf->__PVT__lut_mem_4_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_8_io_rd_addr) 
                        >> 3U));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__io_rd_valid_REG = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_8_io_rd_en));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
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
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_9__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_9__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_9_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_9_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_9_io_rd_addr));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__io_rd_valid_REG = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_9_io_rd_en));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
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
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_10__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_10__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_10_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_10_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__lut_mem_6_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_10_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__lut_mem_5_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_10_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__lut_mem_1_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_10_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__lut_mem_0_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_10_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__lut_mem_2_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_10_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__lut_mem_3_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_10_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_10_io_rd_addr));
        vlSelf->__PVT__lut_mem_4_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_10_io_rd_addr) 
                        >> 3U));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__io_rd_valid_REG = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_10_io_rd_en));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
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
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_11__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_11__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_11_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_11_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_11_io_rd_addr));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__io_rd_valid_REG = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_11_io_rd_en));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
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
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_12__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_12__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_12_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_12_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__lut_mem_6_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_12_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__lut_mem_5_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_12_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__lut_mem_1_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_12_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__lut_mem_0_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_12_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__lut_mem_2_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_12_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__lut_mem_3_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_12_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_12_io_rd_addr));
        vlSelf->__PVT__lut_mem_4_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_12_io_rd_addr) 
                        >> 3U));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__io_rd_valid_REG = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_12_io_rd_en));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
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
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_13__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_13__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_13_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_13_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_13_io_rd_addr));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__io_rd_valid_REG = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_13_io_rd_en));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
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
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_14__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_14__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_14_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_14_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__lut_mem_6_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_14_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__lut_mem_5_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_14_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__lut_mem_1_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_14_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__lut_mem_0_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_14_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__lut_mem_2_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_14_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__lut_mem_3_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_14_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_14_io_rd_addr));
        vlSelf->__PVT__lut_mem_4_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_14_io_rd_addr) 
                        >> 3U));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__io_rd_valid_REG = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_14_io_rd_en));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
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
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_15__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_15__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_15_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_15_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_15_io_rd_addr));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__io_rd_valid_REG = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_15_io_rd_en));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
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
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_0__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_0__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_0_io_rd_en) {
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_0_io_rd_addr));
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_0_io_rd_addr) 
                        >> 3U));
    }
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_1__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_1__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_0_io_rd_en) {
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_1_io_rd_addr));
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_1_io_rd_addr) 
                        >> 3U));
    }
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_2__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_2__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_0_io_rd_en) {
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_2_io_rd_addr));
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_2_io_rd_addr) 
                        >> 3U));
    }
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_3__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_3__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_0_io_rd_en) {
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_3_io_rd_addr));
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_3_io_rd_addr) 
                        >> 3U));
    }
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_4__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_4__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_0_io_rd_en) {
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_4_io_rd_addr));
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_4_io_rd_addr) 
                        >> 3U));
    }
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_5__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_5__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_0_io_rd_en) {
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_5_io_rd_addr));
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_5_io_rd_addr) 
                        >> 3U));
    }
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_6__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_6__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_0_io_rd_en) {
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_6_io_rd_addr));
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_6_io_rd_addr) 
                        >> 3U));
    }
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_7__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_7__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_0_io_rd_en) {
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_7_io_rd_addr));
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_7_io_rd_addr) 
                        >> 3U));
    }
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_8__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_8__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_0_io_rd_en) {
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_8_io_rd_addr));
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_8_io_rd_addr) 
                        >> 3U));
    }
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_9__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_9__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_0_io_rd_en) {
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_9_io_rd_addr));
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_9_io_rd_addr) 
                        >> 3U));
    }
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_10__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_10__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_0_io_rd_en) {
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_10_io_rd_addr));
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_10_io_rd_addr) 
                        >> 3U));
    }
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_11__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_11__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_0_io_rd_en) {
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_11_io_rd_addr));
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_11_io_rd_addr) 
                        >> 3U));
    }
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_12__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_12__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_0_io_rd_en) {
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_12_io_rd_addr));
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_12_io_rd_addr) 
                        >> 3U));
    }
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_13__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_13__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_0_io_rd_en) {
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_13_io_rd_addr));
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_13_io_rd_addr) 
                        >> 3U));
    }
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_14__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_14__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_0_io_rd_en) {
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_14_io_rd_addr));
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_14_io_rd_addr) 
                        >> 3U));
    }
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_15__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_15__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_0_io_rd_en) {
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_15_io_rd_addr));
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_15_io_rd_addr) 
                        >> 3U));
    }
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0_io_rd_addr));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_1__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_1__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_1_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_1_io_rd_addr));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_2__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_2__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_2_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_2_io_rd_addr));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_3__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_3__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_3_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_3_io_rd_addr));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_4__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_4__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_4_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_4_io_rd_addr));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_5__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_5__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_5_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_5_io_rd_addr));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_6__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_6__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_6_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_6_io_rd_addr));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_7__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_7__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_7_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_7_io_rd_addr));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_8__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_8__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_8_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_8_io_rd_addr));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_9__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_9__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_9_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_9_io_rd_addr));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_10__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_10__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_10_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_10_io_rd_addr));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_11__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_11__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_11_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_11_io_rd_addr));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_12__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_12__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_12_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_12_io_rd_addr));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_13__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_13__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_13_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_13_io_rd_addr));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_14__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_14__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_14_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_14_io_rd_addr));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_15__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_15__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_15_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_15_io_rd_addr));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_0__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_0__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_0_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_0_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_0_io_rd_addr));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__io_rd_valid_REG = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_0_io_rd_en));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
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
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_1__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_1__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_1_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_1_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_1_io_rd_addr));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__io_rd_valid_REG = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_1_io_rd_en));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
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
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_2__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_2__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_1_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_2_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_2_io_rd_addr));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__io_rd_valid_REG = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_1_io_rd_en));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
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
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_3__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_3__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_1_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_3_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_3_io_rd_addr));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__io_rd_valid_REG = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_1_io_rd_en));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
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
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_4__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_4__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_1_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_4_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_4_io_rd_addr));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__io_rd_valid_REG = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_1_io_rd_en));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
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
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_5__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_5__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_1_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_5_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_5_io_rd_addr));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__io_rd_valid_REG = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_1_io_rd_en));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
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
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_6__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_6__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_1_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_6_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_6_io_rd_addr));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__io_rd_valid_REG = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_1_io_rd_en));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
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
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_7__0(VComputeUnit_Universal_Wide_LUT_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Universal_Wide_LUT_16___nba_sequent__TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_7__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = (0x1fU & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address));
    }
    if (vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_1_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x1fU & ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_7_io_rd_addr) 
                        >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_7_io_rd_addr));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__io_rd_valid_REG = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_1_io_rd_en));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_0_io_wr_en) 
                                         & (0x1fU == 
                                            (0x1fU 
                                             & (IData)(vlSymsp->TOP.ComputeUnit__DOT__lutProgrammer__DOT__address)))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
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
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}
