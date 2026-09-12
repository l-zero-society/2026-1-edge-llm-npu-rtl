// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VVPU1ROUTEHARNESS__SYMS_H_
#define VERILATED_VVPU1ROUTEHARNESS__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VVPU1RouteHarness.h"

// INCLUDE MODULE CLASSES
#include "VVPU1RouteHarness___024root.h"
#include "VVPU1RouteHarness_QuantActCore.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VVPU1RouteHarness__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VVPU1RouteHarness* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VVPU1RouteHarness___024root    TOP;
    VVPU1RouteHarness_QuantActCore TOP__VPU1RouteHarness__DOT__qa__DOT__cores_0;
    VVPU1RouteHarness_QuantActCore TOP__VPU1RouteHarness__DOT__qa__DOT__cores_1;
    VVPU1RouteHarness_QuantActCore TOP__VPU1RouteHarness__DOT__qa__DOT__cores_10;
    VVPU1RouteHarness_QuantActCore TOP__VPU1RouteHarness__DOT__qa__DOT__cores_11;
    VVPU1RouteHarness_QuantActCore TOP__VPU1RouteHarness__DOT__qa__DOT__cores_12;
    VVPU1RouteHarness_QuantActCore TOP__VPU1RouteHarness__DOT__qa__DOT__cores_13;
    VVPU1RouteHarness_QuantActCore TOP__VPU1RouteHarness__DOT__qa__DOT__cores_14;
    VVPU1RouteHarness_QuantActCore TOP__VPU1RouteHarness__DOT__qa__DOT__cores_15;
    VVPU1RouteHarness_QuantActCore TOP__VPU1RouteHarness__DOT__qa__DOT__cores_2;
    VVPU1RouteHarness_QuantActCore TOP__VPU1RouteHarness__DOT__qa__DOT__cores_3;
    VVPU1RouteHarness_QuantActCore TOP__VPU1RouteHarness__DOT__qa__DOT__cores_4;
    VVPU1RouteHarness_QuantActCore TOP__VPU1RouteHarness__DOT__qa__DOT__cores_5;
    VVPU1RouteHarness_QuantActCore TOP__VPU1RouteHarness__DOT__qa__DOT__cores_6;
    VVPU1RouteHarness_QuantActCore TOP__VPU1RouteHarness__DOT__qa__DOT__cores_7;
    VVPU1RouteHarness_QuantActCore TOP__VPU1RouteHarness__DOT__qa__DOT__cores_8;
    VVPU1RouteHarness_QuantActCore TOP__VPU1RouteHarness__DOT__qa__DOT__cores_9;

    // CONSTRUCTORS
    VVPU1RouteHarness__Syms(VerilatedContext* contextp, const char* namep, VVPU1RouteHarness* modelp);
    ~VVPU1RouteHarness__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
