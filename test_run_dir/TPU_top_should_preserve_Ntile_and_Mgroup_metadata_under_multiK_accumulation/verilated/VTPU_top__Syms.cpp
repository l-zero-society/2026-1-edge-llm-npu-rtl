// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VTPU_top__pch.h"
#include "VTPU_top.h"
#include "VTPU_top___024root.h"
#include "VTPU_top_Accum_buffer.h"

// FUNCTIONS
VTPU_top__Syms::~VTPU_top__Syms()
{
}

VTPU_top__Syms::VTPU_top__Syms(VerilatedContext* contextp, const char* namep, VTPU_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__TPU_top__DOT__accumulator__DOT__buffers_0{this, Verilated::catName(namep, "TPU_top.accumulator.buffers_0")}
    , TOP__TPU_top__DOT__accumulator__DOT__buffers_1{this, Verilated::catName(namep, "TPU_top.accumulator.buffers_1")}
    , TOP__TPU_top__DOT__accumulator__DOT__buffers_10{this, Verilated::catName(namep, "TPU_top.accumulator.buffers_10")}
    , TOP__TPU_top__DOT__accumulator__DOT__buffers_11{this, Verilated::catName(namep, "TPU_top.accumulator.buffers_11")}
    , TOP__TPU_top__DOT__accumulator__DOT__buffers_12{this, Verilated::catName(namep, "TPU_top.accumulator.buffers_12")}
    , TOP__TPU_top__DOT__accumulator__DOT__buffers_13{this, Verilated::catName(namep, "TPU_top.accumulator.buffers_13")}
    , TOP__TPU_top__DOT__accumulator__DOT__buffers_14{this, Verilated::catName(namep, "TPU_top.accumulator.buffers_14")}
    , TOP__TPU_top__DOT__accumulator__DOT__buffers_15{this, Verilated::catName(namep, "TPU_top.accumulator.buffers_15")}
    , TOP__TPU_top__DOT__accumulator__DOT__buffers_2{this, Verilated::catName(namep, "TPU_top.accumulator.buffers_2")}
    , TOP__TPU_top__DOT__accumulator__DOT__buffers_3{this, Verilated::catName(namep, "TPU_top.accumulator.buffers_3")}
    , TOP__TPU_top__DOT__accumulator__DOT__buffers_4{this, Verilated::catName(namep, "TPU_top.accumulator.buffers_4")}
    , TOP__TPU_top__DOT__accumulator__DOT__buffers_5{this, Verilated::catName(namep, "TPU_top.accumulator.buffers_5")}
    , TOP__TPU_top__DOT__accumulator__DOT__buffers_6{this, Verilated::catName(namep, "TPU_top.accumulator.buffers_6")}
    , TOP__TPU_top__DOT__accumulator__DOT__buffers_7{this, Verilated::catName(namep, "TPU_top.accumulator.buffers_7")}
    , TOP__TPU_top__DOT__accumulator__DOT__buffers_8{this, Verilated::catName(namep, "TPU_top.accumulator.buffers_8")}
    , TOP__TPU_top__DOT__accumulator__DOT__buffers_9{this, Verilated::catName(namep, "TPU_top.accumulator.buffers_9")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__TPU_top__DOT__accumulator__DOT__buffers_0 = &TOP__TPU_top__DOT__accumulator__DOT__buffers_0;
    TOP.__PVT__TPU_top__DOT__accumulator__DOT__buffers_1 = &TOP__TPU_top__DOT__accumulator__DOT__buffers_1;
    TOP.__PVT__TPU_top__DOT__accumulator__DOT__buffers_10 = &TOP__TPU_top__DOT__accumulator__DOT__buffers_10;
    TOP.__PVT__TPU_top__DOT__accumulator__DOT__buffers_11 = &TOP__TPU_top__DOT__accumulator__DOT__buffers_11;
    TOP.__PVT__TPU_top__DOT__accumulator__DOT__buffers_12 = &TOP__TPU_top__DOT__accumulator__DOT__buffers_12;
    TOP.__PVT__TPU_top__DOT__accumulator__DOT__buffers_13 = &TOP__TPU_top__DOT__accumulator__DOT__buffers_13;
    TOP.__PVT__TPU_top__DOT__accumulator__DOT__buffers_14 = &TOP__TPU_top__DOT__accumulator__DOT__buffers_14;
    TOP.__PVT__TPU_top__DOT__accumulator__DOT__buffers_15 = &TOP__TPU_top__DOT__accumulator__DOT__buffers_15;
    TOP.__PVT__TPU_top__DOT__accumulator__DOT__buffers_2 = &TOP__TPU_top__DOT__accumulator__DOT__buffers_2;
    TOP.__PVT__TPU_top__DOT__accumulator__DOT__buffers_3 = &TOP__TPU_top__DOT__accumulator__DOT__buffers_3;
    TOP.__PVT__TPU_top__DOT__accumulator__DOT__buffers_4 = &TOP__TPU_top__DOT__accumulator__DOT__buffers_4;
    TOP.__PVT__TPU_top__DOT__accumulator__DOT__buffers_5 = &TOP__TPU_top__DOT__accumulator__DOT__buffers_5;
    TOP.__PVT__TPU_top__DOT__accumulator__DOT__buffers_6 = &TOP__TPU_top__DOT__accumulator__DOT__buffers_6;
    TOP.__PVT__TPU_top__DOT__accumulator__DOT__buffers_7 = &TOP__TPU_top__DOT__accumulator__DOT__buffers_7;
    TOP.__PVT__TPU_top__DOT__accumulator__DOT__buffers_8 = &TOP__TPU_top__DOT__accumulator__DOT__buffers_8;
    TOP.__PVT__TPU_top__DOT__accumulator__DOT__buffers_9 = &TOP__TPU_top__DOT__accumulator__DOT__buffers_9;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__TPU_top__DOT__accumulator__DOT__buffers_0.__Vconfigure(true);
    TOP__TPU_top__DOT__accumulator__DOT__buffers_1.__Vconfigure(false);
    TOP__TPU_top__DOT__accumulator__DOT__buffers_10.__Vconfigure(false);
    TOP__TPU_top__DOT__accumulator__DOT__buffers_11.__Vconfigure(false);
    TOP__TPU_top__DOT__accumulator__DOT__buffers_12.__Vconfigure(false);
    TOP__TPU_top__DOT__accumulator__DOT__buffers_13.__Vconfigure(false);
    TOP__TPU_top__DOT__accumulator__DOT__buffers_14.__Vconfigure(false);
    TOP__TPU_top__DOT__accumulator__DOT__buffers_15.__Vconfigure(false);
    TOP__TPU_top__DOT__accumulator__DOT__buffers_2.__Vconfigure(false);
    TOP__TPU_top__DOT__accumulator__DOT__buffers_3.__Vconfigure(false);
    TOP__TPU_top__DOT__accumulator__DOT__buffers_4.__Vconfigure(false);
    TOP__TPU_top__DOT__accumulator__DOT__buffers_5.__Vconfigure(false);
    TOP__TPU_top__DOT__accumulator__DOT__buffers_6.__Vconfigure(false);
    TOP__TPU_top__DOT__accumulator__DOT__buffers_7.__Vconfigure(false);
    TOP__TPU_top__DOT__accumulator__DOT__buffers_8.__Vconfigure(false);
    TOP__TPU_top__DOT__accumulator__DOT__buffers_9.__Vconfigure(false);
}
