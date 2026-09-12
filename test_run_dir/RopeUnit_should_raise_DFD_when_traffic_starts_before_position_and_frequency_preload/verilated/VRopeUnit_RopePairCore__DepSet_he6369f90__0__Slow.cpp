// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRopeUnit.h for the primary calling header

#include "VRopeUnit__pch.h"
#include "VRopeUnit_RopePairCore.h"
#include "VRopeUnit__Syms.h"

VL_ATTR_COLD void VRopeUnit_RopePairCore___stl_sequent__TOP__RopeUnit__DOT__pairs_0__0(VRopeUnit_RopePairCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRopeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VRopeUnit_RopePairCore___stl_sequent__TOP__RopeUnit__DOT__pairs_0__0\n"); );
    // Init
    SData/*15:0*/ __PVT__cosLut_io_rd_data;
    __PVT__cosLut_io_rd_data = 0;
    SData/*15:0*/ __PVT__sinLut_io_rd_data;
    __PVT__sinLut_io_rd_data = 0;
    IData/*24:0*/ __PVT__evenFull;
    __PVT__evenFull = 0;
    IData/*24:0*/ __PVT__oddFull;
    __PVT__oddFull = 0;
    // Body
    vlSelf->__PVT__cosLut__DOT___GEN_12 = ((IData)(vlSelf->__PVT__cosLut__DOT__is_programmed) 
                                           | (IData)(vlSelf->__PVT__cosLut__DOT__last_write_ack));
    vlSelf->__PVT__sinLut__DOT___GEN_12 = ((IData)(vlSelf->__PVT__sinLut__DOT__is_programmed) 
                                           | (IData)(vlSelf->__PVT__sinLut__DOT__last_write_ack));
    if ((7U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_7
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_7
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((6U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_6
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_6
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((5U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_5
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_5
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((4U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_4
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_4
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((3U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_3
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_3
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((2U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_2
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_2
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((1U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_1
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_1
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_0
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_0
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    }
    vlSelf->__PVT__coeffValid = vlSelf->__PVT__cosLut__DOT__io_rd_valid_REG;
    vlSelf->__PVT__cosLut_io_rd_en = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                      & (IData)(vlSymsp->TOP.RopeUnit__DOT__pairs_0_io_in_valid));
    __PVT__evenFull = (0x1ffffffU & (VL_EXTENDS_II(25,24, 
                                                   (0xffffffU 
                                                    & VL_MULS_III(24, 
                                                                  (0xffffffU 
                                                                   & VL_EXTENDS_II(24,8, (IData)(vlSelf->__PVT__xEvenD1))), 
                                                                  (0xffffffU 
                                                                   & VL_EXTENDS_II(24,16, (IData)(__PVT__cosLut_io_rd_data)))))) 
                                     - VL_EXTENDS_II(25,24, 
                                                     (0xffffffU 
                                                      & VL_MULS_III(24, 
                                                                    (0xffffffU 
                                                                     & VL_EXTENDS_II(24,8, (IData)(vlSelf->__PVT__xOddD1))), 
                                                                    (0xffffffU 
                                                                     & VL_EXTENDS_II(24,16, (IData)(__PVT__sinLut_io_rd_data))))))));
    __PVT__oddFull = (0x1ffffffU & (VL_EXTENDS_II(25,24, 
                                                  (0xffffffU 
                                                   & VL_MULS_III(24, 
                                                                 (0xffffffU 
                                                                  & VL_EXTENDS_II(24,8, (IData)(vlSelf->__PVT__xEvenD1))), 
                                                                 (0xffffffU 
                                                                  & VL_EXTENDS_II(24,16, (IData)(__PVT__sinLut_io_rd_data)))))) 
                                    + VL_EXTENDS_II(25,24, 
                                                    (0xffffffU 
                                                     & VL_MULS_III(24, 
                                                                   (0xffffffU 
                                                                    & VL_EXTENDS_II(24,8, (IData)(vlSelf->__PVT__xOddD1))), 
                                                                   (0xffffffU 
                                                                    & VL_EXTENDS_II(24,16, (IData)(__PVT__cosLut_io_rd_data))))))));
    vlSelf->__PVT___GEN_3 = (((IData)(vlSymsp->TOP.io_stall) 
                              & ((~ (IData)(vlSelf->__PVT__holdValid)) 
                                 & (IData)(vlSelf->__PVT__coeffValid))) 
                             | ((~ ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                    & (IData)(vlSelf->__PVT__holdValid))) 
                                & (IData)(vlSelf->__PVT__holdValid)));
    vlSelf->io_out_valid = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                            & ((IData)(vlSelf->__PVT__holdValid) 
                               | (IData)(vlSelf->__PVT__coeffValid)));
    vlSelf->__PVT__rawEven = (VL_LTS_III(11, 0x7fU, 
                                         (0x7ffU & 
                                          (__PVT__evenFull 
                                           >> 0xeU)))
                               ? 0x7fU : (VL_GTS_III(11, 0x780U, 
                                                     (0x7ffU 
                                                      & (__PVT__evenFull 
                                                         >> 0xeU)))
                                           ? 0x80U : 
                                          (0xffU & 
                                           (__PVT__evenFull 
                                            >> 0xeU))));
    vlSelf->__PVT__rawOdd = (VL_LTS_III(11, 0x7fU, 
                                        (0x7ffU & (__PVT__oddFull 
                                                   >> 0xeU)))
                              ? 0x7fU : (VL_GTS_III(11, 0x780U, 
                                                    (0x7ffU 
                                                     & (__PVT__oddFull 
                                                        >> 0xeU)))
                                          ? 0x80U : 
                                         (0xffU & (__PVT__oddFull 
                                                   >> 0xeU))));
}
