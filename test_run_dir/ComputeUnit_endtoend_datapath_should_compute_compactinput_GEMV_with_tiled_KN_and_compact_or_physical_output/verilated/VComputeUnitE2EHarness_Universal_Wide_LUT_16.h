// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VComputeUnitE2EHarness.h for the primary calling header

#ifndef VERILATED_VCOMPUTEUNITE2EHARNESS_UNIVERSAL_WIDE_LUT_16_H_
#define VERILATED_VCOMPUTEUNITE2EHARNESS_UNIVERSAL_WIDE_LUT_16_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class VComputeUnitE2EHarness__Syms;

class alignas(VL_CACHE_LINE_BYTES) VComputeUnitE2EHarness_Universal_Wide_LUT_16 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_wr_en,0,0);
    VL_IN8(io_wr_addr,4,0);
    VL_IN8(io_rd_en,0,0);
    VL_IN8(io_rd_addr,7,0);
    VL_OUT8(io_rd_valid,0,0);
    VL_OUT8(io_lut_ready,0,0);
    CData/*4:0*/ __PVT__lut_mem_0_rd_vec_addr_pipe_0;
    CData/*4:0*/ __PVT__lut_mem_1_rd_vec_addr_pipe_0;
    CData/*4:0*/ __PVT__lut_mem_2_rd_vec_addr_pipe_0;
    CData/*4:0*/ __PVT__lut_mem_3_rd_vec_addr_pipe_0;
    CData/*4:0*/ __PVT__lut_mem_4_rd_vec_addr_pipe_0;
    CData/*4:0*/ __PVT__lut_mem_5_rd_vec_addr_pipe_0;
    CData/*4:0*/ __PVT__lut_mem_6_rd_vec_addr_pipe_0;
    CData/*4:0*/ __PVT__lut_mem_7_rd_vec_addr_pipe_0;
    CData/*0:0*/ __PVT__is_programmed;
    CData/*0:0*/ __PVT__last_write_ack;
    CData/*0:0*/ __PVT___GEN_12;
    CData/*2:0*/ __PVT__rd_col_delayed;
    CData/*0:0*/ __PVT__io_rd_valid_REG;
    VL_IN16(io_wr_data_0,15,0);
    VL_IN16(io_wr_data_1,15,0);
    VL_IN16(io_wr_data_2,15,0);
    VL_IN16(io_wr_data_3,15,0);
    VL_IN16(io_wr_data_4,15,0);
    VL_IN16(io_wr_data_5,15,0);
    VL_IN16(io_wr_data_6,15,0);
    VL_IN16(io_wr_data_7,15,0);
    VL_OUT16(io_rd_data,15,0);
    VlUnpacked<SData/*15:0*/, 32> __PVT__lut_mem_0;
    VlUnpacked<SData/*15:0*/, 32> __PVT__lut_mem_1;
    VlUnpacked<SData/*15:0*/, 32> __PVT__lut_mem_2;
    VlUnpacked<SData/*15:0*/, 32> __PVT__lut_mem_3;
    VlUnpacked<SData/*15:0*/, 32> __PVT__lut_mem_4;
    VlUnpacked<SData/*15:0*/, 32> __PVT__lut_mem_5;
    VlUnpacked<SData/*15:0*/, 32> __PVT__lut_mem_6;
    VlUnpacked<SData/*15:0*/, 32> __PVT__lut_mem_7;

    // INTERNAL VARIABLES
    VComputeUnitE2EHarness__Syms* const vlSymsp;

    // CONSTRUCTORS
    VComputeUnitE2EHarness_Universal_Wide_LUT_16(VComputeUnitE2EHarness__Syms* symsp, const char* v__name);
    ~VComputeUnitE2EHarness_Universal_Wide_LUT_16();
    VL_UNCOPYABLE(VComputeUnitE2EHarness_Universal_Wide_LUT_16);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
