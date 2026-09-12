// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VQUANTACTUNIT__SYMS_H_
#define VERILATED_VQUANTACTUNIT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VQuantActUnit.h"

// INCLUDE MODULE CLASSES
#include "VQuantActUnit___024root.h"
#include "VQuantActUnit_QuantActCore.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VQuantActUnit__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VQuantActUnit* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VQuantActUnit___024root        TOP;
    VQuantActUnit_QuantActCore     TOP__QuantActUnit__DOT__cores_0;
    VQuantActUnit_QuantActCore     TOP__QuantActUnit__DOT__cores_1;
    VQuantActUnit_QuantActCore     TOP__QuantActUnit__DOT__cores_10;
    VQuantActUnit_QuantActCore     TOP__QuantActUnit__DOT__cores_11;
    VQuantActUnit_QuantActCore     TOP__QuantActUnit__DOT__cores_12;
    VQuantActUnit_QuantActCore     TOP__QuantActUnit__DOT__cores_13;
    VQuantActUnit_QuantActCore     TOP__QuantActUnit__DOT__cores_14;
    VQuantActUnit_QuantActCore     TOP__QuantActUnit__DOT__cores_15;
    VQuantActUnit_QuantActCore     TOP__QuantActUnit__DOT__cores_2;
    VQuantActUnit_QuantActCore     TOP__QuantActUnit__DOT__cores_3;
    VQuantActUnit_QuantActCore     TOP__QuantActUnit__DOT__cores_4;
    VQuantActUnit_QuantActCore     TOP__QuantActUnit__DOT__cores_5;
    VQuantActUnit_QuantActCore     TOP__QuantActUnit__DOT__cores_6;
    VQuantActUnit_QuantActCore     TOP__QuantActUnit__DOT__cores_7;
    VQuantActUnit_QuantActCore     TOP__QuantActUnit__DOT__cores_8;
    VQuantActUnit_QuantActCore     TOP__QuantActUnit__DOT__cores_9;

    // CONSTRUCTORS
    VQuantActUnit__Syms(VerilatedContext* contextp, const char* namep, VQuantActUnit* modelp);
    ~VQuantActUnit__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
