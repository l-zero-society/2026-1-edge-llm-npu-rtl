// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VComputeUnit.h for the primary calling header

#ifndef VERILATED_VCOMPUTEUNIT_ACCUM_BUFFER_H_
#define VERILATED_VCOMPUTEUNIT_ACCUM_BUFFER_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class VComputeUnit__Syms;

class alignas(VL_CACHE_LINE_BYTES) VComputeUnit_Accum_buffer final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_accum_en,0,0);
    VL_IN8(io_first_tile,0,0);
    VL_IN8(io_snapshot,0,0);
    VL_IN8(io_stall,0,0);
    VL_IN8(io_read_en,0,0);
    VL_IN8(io_read_bank,0,0);
    VL_IN8(io_read_row,3,0);
    VL_OUT8(io_accum_alert,0,0);
    CData/*0:0*/ __PVT__write_bank;
    CData/*3:0*/ __PVT__row_ptr;
    CData/*0:0*/ __PVT__lastRow;
    CData/*0:0*/ __PVT___readWriteCollision_T;
    CData/*3:0*/ __PVT___row_ptr_T_1;
    VL_IN(io_in_scalar,31,0);
    VL_OUT(io_out_scalar,31,0);
    IData/*31:0*/ __PVT__bank0_0;
    IData/*31:0*/ __PVT__bank0_1;
    IData/*31:0*/ __PVT__bank0_2;
    IData/*31:0*/ __PVT__bank0_3;
    IData/*31:0*/ __PVT__bank0_4;
    IData/*31:0*/ __PVT__bank0_5;
    IData/*31:0*/ __PVT__bank0_6;
    IData/*31:0*/ __PVT__bank0_7;
    IData/*31:0*/ __PVT__bank0_8;
    IData/*31:0*/ __PVT__bank0_9;
    IData/*31:0*/ __PVT__bank0_10;
    IData/*31:0*/ __PVT__bank0_11;
    IData/*31:0*/ __PVT__bank0_12;
    IData/*31:0*/ __PVT__bank0_13;
    IData/*31:0*/ __PVT__bank0_14;
    IData/*31:0*/ __PVT__bank0_15;
    IData/*31:0*/ __PVT__bank1_0;
    IData/*31:0*/ __PVT__bank1_1;
    IData/*31:0*/ __PVT__bank1_2;
    IData/*31:0*/ __PVT__bank1_3;
    IData/*31:0*/ __PVT__bank1_4;
    IData/*31:0*/ __PVT__bank1_5;
    IData/*31:0*/ __PVT__bank1_6;
    IData/*31:0*/ __PVT__bank1_7;
    IData/*31:0*/ __PVT__bank1_8;
    IData/*31:0*/ __PVT__bank1_9;
    IData/*31:0*/ __PVT__bank1_10;
    IData/*31:0*/ __PVT__bank1_11;
    IData/*31:0*/ __PVT__bank1_12;
    IData/*31:0*/ __PVT__bank1_13;
    IData/*31:0*/ __PVT__bank1_14;
    IData/*31:0*/ __PVT__bank1_15;
    QData/*32:0*/ __PVT__current_sum_full;

    // INTERNAL VARIABLES
    VComputeUnit__Syms* const vlSymsp;

    // CONSTRUCTORS
    VComputeUnit_Accum_buffer(VComputeUnit__Syms* symsp, const char* v__name);
    ~VComputeUnit_Accum_buffer();
    VL_UNCOPYABLE(VComputeUnit_Accum_buffer);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
