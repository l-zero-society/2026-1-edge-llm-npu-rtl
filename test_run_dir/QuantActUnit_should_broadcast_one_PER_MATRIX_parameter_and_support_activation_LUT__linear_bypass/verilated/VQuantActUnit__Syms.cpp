// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VQuantActUnit__pch.h"
#include "VQuantActUnit.h"
#include "VQuantActUnit___024root.h"
#include "VQuantActUnit_QuantActCore.h"

// FUNCTIONS
VQuantActUnit__Syms::~VQuantActUnit__Syms()
{
}

VQuantActUnit__Syms::VQuantActUnit__Syms(VerilatedContext* contextp, const char* namep, VQuantActUnit* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__QuantActUnit__DOT__cores_0{this, Verilated::catName(namep, "QuantActUnit.cores_0")}
    , TOP__QuantActUnit__DOT__cores_1{this, Verilated::catName(namep, "QuantActUnit.cores_1")}
    , TOP__QuantActUnit__DOT__cores_10{this, Verilated::catName(namep, "QuantActUnit.cores_10")}
    , TOP__QuantActUnit__DOT__cores_11{this, Verilated::catName(namep, "QuantActUnit.cores_11")}
    , TOP__QuantActUnit__DOT__cores_12{this, Verilated::catName(namep, "QuantActUnit.cores_12")}
    , TOP__QuantActUnit__DOT__cores_13{this, Verilated::catName(namep, "QuantActUnit.cores_13")}
    , TOP__QuantActUnit__DOT__cores_14{this, Verilated::catName(namep, "QuantActUnit.cores_14")}
    , TOP__QuantActUnit__DOT__cores_15{this, Verilated::catName(namep, "QuantActUnit.cores_15")}
    , TOP__QuantActUnit__DOT__cores_2{this, Verilated::catName(namep, "QuantActUnit.cores_2")}
    , TOP__QuantActUnit__DOT__cores_3{this, Verilated::catName(namep, "QuantActUnit.cores_3")}
    , TOP__QuantActUnit__DOT__cores_4{this, Verilated::catName(namep, "QuantActUnit.cores_4")}
    , TOP__QuantActUnit__DOT__cores_5{this, Verilated::catName(namep, "QuantActUnit.cores_5")}
    , TOP__QuantActUnit__DOT__cores_6{this, Verilated::catName(namep, "QuantActUnit.cores_6")}
    , TOP__QuantActUnit__DOT__cores_7{this, Verilated::catName(namep, "QuantActUnit.cores_7")}
    , TOP__QuantActUnit__DOT__cores_8{this, Verilated::catName(namep, "QuantActUnit.cores_8")}
    , TOP__QuantActUnit__DOT__cores_9{this, Verilated::catName(namep, "QuantActUnit.cores_9")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__QuantActUnit__DOT__cores_0 = &TOP__QuantActUnit__DOT__cores_0;
    TOP.__PVT__QuantActUnit__DOT__cores_1 = &TOP__QuantActUnit__DOT__cores_1;
    TOP.__PVT__QuantActUnit__DOT__cores_10 = &TOP__QuantActUnit__DOT__cores_10;
    TOP.__PVT__QuantActUnit__DOT__cores_11 = &TOP__QuantActUnit__DOT__cores_11;
    TOP.__PVT__QuantActUnit__DOT__cores_12 = &TOP__QuantActUnit__DOT__cores_12;
    TOP.__PVT__QuantActUnit__DOT__cores_13 = &TOP__QuantActUnit__DOT__cores_13;
    TOP.__PVT__QuantActUnit__DOT__cores_14 = &TOP__QuantActUnit__DOT__cores_14;
    TOP.__PVT__QuantActUnit__DOT__cores_15 = &TOP__QuantActUnit__DOT__cores_15;
    TOP.__PVT__QuantActUnit__DOT__cores_2 = &TOP__QuantActUnit__DOT__cores_2;
    TOP.__PVT__QuantActUnit__DOT__cores_3 = &TOP__QuantActUnit__DOT__cores_3;
    TOP.__PVT__QuantActUnit__DOT__cores_4 = &TOP__QuantActUnit__DOT__cores_4;
    TOP.__PVT__QuantActUnit__DOT__cores_5 = &TOP__QuantActUnit__DOT__cores_5;
    TOP.__PVT__QuantActUnit__DOT__cores_6 = &TOP__QuantActUnit__DOT__cores_6;
    TOP.__PVT__QuantActUnit__DOT__cores_7 = &TOP__QuantActUnit__DOT__cores_7;
    TOP.__PVT__QuantActUnit__DOT__cores_8 = &TOP__QuantActUnit__DOT__cores_8;
    TOP.__PVT__QuantActUnit__DOT__cores_9 = &TOP__QuantActUnit__DOT__cores_9;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__QuantActUnit__DOT__cores_0.__Vconfigure(true);
    TOP__QuantActUnit__DOT__cores_1.__Vconfigure(false);
    TOP__QuantActUnit__DOT__cores_10.__Vconfigure(false);
    TOP__QuantActUnit__DOT__cores_11.__Vconfigure(false);
    TOP__QuantActUnit__DOT__cores_12.__Vconfigure(false);
    TOP__QuantActUnit__DOT__cores_13.__Vconfigure(false);
    TOP__QuantActUnit__DOT__cores_14.__Vconfigure(false);
    TOP__QuantActUnit__DOT__cores_15.__Vconfigure(false);
    TOP__QuantActUnit__DOT__cores_2.__Vconfigure(false);
    TOP__QuantActUnit__DOT__cores_3.__Vconfigure(false);
    TOP__QuantActUnit__DOT__cores_4.__Vconfigure(false);
    TOP__QuantActUnit__DOT__cores_5.__Vconfigure(false);
    TOP__QuantActUnit__DOT__cores_6.__Vconfigure(false);
    TOP__QuantActUnit__DOT__cores_7.__Vconfigure(false);
    TOP__QuantActUnit__DOT__cores_8.__Vconfigure(false);
    TOP__QuantActUnit__DOT__cores_9.__Vconfigure(false);
}
