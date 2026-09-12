// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTPU_TOP__SYMS_H_
#define VERILATED_VTPU_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VTPU_top.h"

// INCLUDE MODULE CLASSES
#include "VTPU_top___024root.h"
#include "VTPU_top_Accum_buffer.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VTPU_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VTPU_top* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VTPU_top___024root             TOP;
    VTPU_top_Accum_buffer          TOP__TPU_top__DOT__accumulator__DOT__buffers_0;
    VTPU_top_Accum_buffer          TOP__TPU_top__DOT__accumulator__DOT__buffers_1;
    VTPU_top_Accum_buffer          TOP__TPU_top__DOT__accumulator__DOT__buffers_10;
    VTPU_top_Accum_buffer          TOP__TPU_top__DOT__accumulator__DOT__buffers_11;
    VTPU_top_Accum_buffer          TOP__TPU_top__DOT__accumulator__DOT__buffers_12;
    VTPU_top_Accum_buffer          TOP__TPU_top__DOT__accumulator__DOT__buffers_13;
    VTPU_top_Accum_buffer          TOP__TPU_top__DOT__accumulator__DOT__buffers_14;
    VTPU_top_Accum_buffer          TOP__TPU_top__DOT__accumulator__DOT__buffers_15;
    VTPU_top_Accum_buffer          TOP__TPU_top__DOT__accumulator__DOT__buffers_2;
    VTPU_top_Accum_buffer          TOP__TPU_top__DOT__accumulator__DOT__buffers_3;
    VTPU_top_Accum_buffer          TOP__TPU_top__DOT__accumulator__DOT__buffers_4;
    VTPU_top_Accum_buffer          TOP__TPU_top__DOT__accumulator__DOT__buffers_5;
    VTPU_top_Accum_buffer          TOP__TPU_top__DOT__accumulator__DOT__buffers_6;
    VTPU_top_Accum_buffer          TOP__TPU_top__DOT__accumulator__DOT__buffers_7;
    VTPU_top_Accum_buffer          TOP__TPU_top__DOT__accumulator__DOT__buffers_8;
    VTPU_top_Accum_buffer          TOP__TPU_top__DOT__accumulator__DOT__buffers_9;

    // CONSTRUCTORS
    VTPU_top__Syms(VerilatedContext* contextp, const char* namep, VTPU_top* modelp);
    ~VTPU_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
