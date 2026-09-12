// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VVPU1ROUTEHARNESS_H_
#define VERILATED_VVPU1ROUTEHARNESS_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class VVPU1RouteHarness__Syms;
class VVPU1RouteHarness___024root;
class VVPU1RouteHarness_QuantActCore;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) VVPU1RouteHarness VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VVPU1RouteHarness__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_IN8(&reset,0,0);
    VL_IN8(&io_tpu_valid,0,0);
    VL_IN8(&io_ub_0,7,0);
    VL_IN8(&io_ub_1,7,0);
    VL_IN8(&io_ub_2,7,0);
    VL_IN8(&io_ub_3,7,0);
    VL_IN8(&io_ub_4,7,0);
    VL_IN8(&io_ub_5,7,0);
    VL_IN8(&io_ub_6,7,0);
    VL_IN8(&io_ub_7,7,0);
    VL_IN8(&io_ub_8,7,0);
    VL_IN8(&io_ub_9,7,0);
    VL_IN8(&io_ub_10,7,0);
    VL_IN8(&io_ub_11,7,0);
    VL_IN8(&io_ub_12,7,0);
    VL_IN8(&io_ub_13,7,0);
    VL_IN8(&io_ub_14,7,0);
    VL_IN8(&io_ub_15,7,0);
    VL_IN8(&io_wb_0,7,0);
    VL_IN8(&io_wb_1,7,0);
    VL_IN8(&io_wb_2,7,0);
    VL_IN8(&io_wb_3,7,0);
    VL_IN8(&io_wb_4,7,0);
    VL_IN8(&io_wb_5,7,0);
    VL_IN8(&io_wb_6,7,0);
    VL_IN8(&io_wb_7,7,0);
    VL_IN8(&io_wb_8,7,0);
    VL_IN8(&io_wb_9,7,0);
    VL_IN8(&io_wb_10,7,0);
    VL_IN8(&io_wb_11,7,0);
    VL_IN8(&io_wb_12,7,0);
    VL_IN8(&io_wb_13,7,0);
    VL_IN8(&io_wb_14,7,0);
    VL_IN8(&io_wb_15,7,0);
    VL_IN8(&io_ub_valid,0,0);
    VL_IN8(&io_wb_valid,0,0);
    VL_IN8(&io_vb_read_data_0,7,0);
    VL_IN8(&io_vb_read_data_1,7,0);
    VL_IN8(&io_vb_read_data_2,7,0);
    VL_IN8(&io_vb_read_data_3,7,0);
    VL_IN8(&io_vb_read_data_4,7,0);
    VL_IN8(&io_vb_read_data_5,7,0);
    VL_IN8(&io_vb_read_data_6,7,0);
    VL_IN8(&io_vb_read_data_7,7,0);
    VL_IN8(&io_vb_read_data_8,7,0);
    VL_IN8(&io_vb_read_data_9,7,0);
    VL_IN8(&io_vb_read_data_10,7,0);
    VL_IN8(&io_vb_read_data_11,7,0);
    VL_IN8(&io_vb_read_data_12,7,0);
    VL_IN8(&io_vb_read_data_13,7,0);
    VL_IN8(&io_vb_read_data_14,7,0);
    VL_IN8(&io_vb_read_data_15,7,0);
    VL_OUT8(&io_vb_read_req,0,0);
    VL_IN8(&io_input_mode,0,0);
    VL_IN8(&io_output_route,1,0);
    VL_IN8(&io_alu_mode,1,0);
    VL_IN8(&io_out_shift,4,0);
    VL_IN8(&io_act_mask,1,0);
    VL_IN8(&io_fusion_second,0,0);
    VL_IN8(&io_stall,0,0);
    VL_IN8(&io_lut_wr_en,0,0);
    VL_IN8(&io_lut_wr_addr,5,0);
    VL_IN8(&io_lut_wr_data_0,7,0);
    VL_IN8(&io_lut_wr_data_1,7,0);
    VL_IN8(&io_lut_wr_data_2,7,0);
    VL_IN8(&io_lut_wr_data_3,7,0);
    VL_IN8(&io_lut_wr_data_4,7,0);
    VL_IN8(&io_lut_wr_data_5,7,0);
    VL_IN8(&io_lut_wr_data_6,7,0);
    VL_IN8(&io_lut_wr_data_7,7,0);
    VL_IN8(&io_lut_wr_data_8,7,0);
    VL_IN8(&io_lut_wr_data_9,7,0);
    VL_IN8(&io_lut_wr_data_10,7,0);
    VL_IN8(&io_lut_wr_data_11,7,0);
    VL_IN8(&io_lut_wr_data_12,7,0);
    VL_IN8(&io_lut_wr_data_13,7,0);
    VL_IN8(&io_lut_wr_data_14,7,0);
    VL_IN8(&io_lut_wr_data_15,7,0);
    VL_OUT8(&io_result_0,7,0);
    VL_OUT8(&io_result_1,7,0);
    VL_OUT8(&io_result_2,7,0);
    VL_OUT8(&io_result_3,7,0);
    VL_OUT8(&io_result_4,7,0);
    VL_OUT8(&io_result_5,7,0);
    VL_OUT8(&io_result_6,7,0);
    VL_OUT8(&io_result_7,7,0);
    VL_OUT8(&io_result_8,7,0);
    VL_OUT8(&io_result_9,7,0);
    VL_OUT8(&io_result_10,7,0);
    VL_OUT8(&io_result_11,7,0);
    VL_OUT8(&io_result_12,7,0);
    VL_OUT8(&io_result_13,7,0);
    VL_OUT8(&io_result_14,7,0);
    VL_OUT8(&io_result_15,7,0);
    VL_OUT8(&io_vb_valid,0,0);
    VL_OUT8(&io_vpu2_valid,0,0);
    VL_OUT8(&io_compute_valid,0,0);
    VL_OUT8(&io_result_valid,0,0);
    VL_OUT8(&io_drained,0,0);
    VL_OUT8(&io_control_alert,0,0);
    VL_OUT8(&io_sync_alert,0,0);
    VL_OUT8(&io_qparam_req,0,0);
    VL_IN(&io_tpu_0,31,0);
    VL_IN(&io_tpu_1,31,0);
    VL_IN(&io_tpu_2,31,0);
    VL_IN(&io_tpu_3,31,0);
    VL_IN(&io_tpu_4,31,0);
    VL_IN(&io_tpu_5,31,0);
    VL_IN(&io_tpu_6,31,0);
    VL_IN(&io_tpu_7,31,0);
    VL_IN(&io_tpu_8,31,0);
    VL_IN(&io_tpu_9,31,0);
    VL_IN(&io_tpu_10,31,0);
    VL_IN(&io_tpu_11,31,0);
    VL_IN(&io_tpu_12,31,0);
    VL_IN(&io_tpu_13,31,0);
    VL_IN(&io_tpu_14,31,0);
    VL_IN(&io_tpu_15,31,0);
    VL_IN(&io_matrix_param,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    VVPU1RouteHarness_QuantActCore* const __PVT__VPU1RouteHarness__DOT__qa__DOT__cores_0;
    VVPU1RouteHarness_QuantActCore* const __PVT__VPU1RouteHarness__DOT__qa__DOT__cores_1;
    VVPU1RouteHarness_QuantActCore* const __PVT__VPU1RouteHarness__DOT__qa__DOT__cores_2;
    VVPU1RouteHarness_QuantActCore* const __PVT__VPU1RouteHarness__DOT__qa__DOT__cores_3;
    VVPU1RouteHarness_QuantActCore* const __PVT__VPU1RouteHarness__DOT__qa__DOT__cores_4;
    VVPU1RouteHarness_QuantActCore* const __PVT__VPU1RouteHarness__DOT__qa__DOT__cores_5;
    VVPU1RouteHarness_QuantActCore* const __PVT__VPU1RouteHarness__DOT__qa__DOT__cores_6;
    VVPU1RouteHarness_QuantActCore* const __PVT__VPU1RouteHarness__DOT__qa__DOT__cores_7;
    VVPU1RouteHarness_QuantActCore* const __PVT__VPU1RouteHarness__DOT__qa__DOT__cores_8;
    VVPU1RouteHarness_QuantActCore* const __PVT__VPU1RouteHarness__DOT__qa__DOT__cores_9;
    VVPU1RouteHarness_QuantActCore* const __PVT__VPU1RouteHarness__DOT__qa__DOT__cores_10;
    VVPU1RouteHarness_QuantActCore* const __PVT__VPU1RouteHarness__DOT__qa__DOT__cores_11;
    VVPU1RouteHarness_QuantActCore* const __PVT__VPU1RouteHarness__DOT__qa__DOT__cores_12;
    VVPU1RouteHarness_QuantActCore* const __PVT__VPU1RouteHarness__DOT__qa__DOT__cores_13;
    VVPU1RouteHarness_QuantActCore* const __PVT__VPU1RouteHarness__DOT__qa__DOT__cores_14;
    VVPU1RouteHarness_QuantActCore* const __PVT__VPU1RouteHarness__DOT__qa__DOT__cores_15;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VVPU1RouteHarness___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VVPU1RouteHarness(VerilatedContext* contextp, const char* name = "TOP");
    explicit VVPU1RouteHarness(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VVPU1RouteHarness();
  private:
    VL_UNCOPYABLE(VVPU1RouteHarness);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
};

#endif  // guard
