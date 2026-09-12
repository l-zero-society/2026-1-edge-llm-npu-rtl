// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVPU1RouteHarness.h for the primary calling header

#include "VVPU1RouteHarness__pch.h"
#include "VVPU1RouteHarness__Syms.h"
#include "VVPU1RouteHarness___024root.h"

void VVPU1RouteHarness___024root___ctor_var_reset(VVPU1RouteHarness___024root* vlSelf);

VVPU1RouteHarness___024root::VVPU1RouteHarness___024root(VVPU1RouteHarness__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VVPU1RouteHarness___024root___ctor_var_reset(this);
}

void VVPU1RouteHarness___024root___configure_coverage(VVPU1RouteHarness___024root* vlSelf, bool first);

void VVPU1RouteHarness___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
    VVPU1RouteHarness___024root___configure_coverage(this, first);
}

VVPU1RouteHarness___024root::~VVPU1RouteHarness___024root() {
}

// Coverage
void VVPU1RouteHarness___024root::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string{name()} + hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
