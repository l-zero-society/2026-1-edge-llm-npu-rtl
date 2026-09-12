// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VQUANTACTUNIT_H_
#define VERILATED_VQUANTACTUNIT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class VQuantActUnit__Syms;
class VQuantActUnit___024root;
class VQuantActUnit_QuantActCore;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) VQuantActUnit VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VQuantActUnit__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_IN8(&reset,0,0);
    VL_IN8(&io_input_mode,0,0);
    VL_IN8(&io_in_valid_0,0,0);
    VL_IN8(&io_in_valid_1,0,0);
    VL_IN8(&io_in_valid_2,0,0);
    VL_IN8(&io_in_valid_3,0,0);
    VL_IN8(&io_in_valid_4,0,0);
    VL_IN8(&io_in_valid_5,0,0);
    VL_IN8(&io_in_valid_6,0,0);
    VL_IN8(&io_in_valid_7,0,0);
    VL_IN8(&io_in_valid_8,0,0);
    VL_IN8(&io_in_valid_9,0,0);
    VL_IN8(&io_in_valid_10,0,0);
    VL_IN8(&io_in_valid_11,0,0);
    VL_IN8(&io_in_valid_12,0,0);
    VL_IN8(&io_in_valid_13,0,0);
    VL_IN8(&io_in_valid_14,0,0);
    VL_IN8(&io_in_valid_15,0,0);
    VL_IN8(&io_param_mode,0,0);
    VL_IN8(&io_act_mask,1,0);
    VL_IN8(&io_fusion_second,0,0);
    VL_IN8(&io_stall,0,0);
    VL_IN8(&io_soft_reset,0,0);
    VL_OUT8(&io_qparam_req_line,0,0);
    VL_IN8(&io_qparam_line_valid,0,0);
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
    VL_OUT8(&io_out_vec_0,7,0);
    VL_OUT8(&io_out_vec_1,7,0);
    VL_OUT8(&io_out_vec_2,7,0);
    VL_OUT8(&io_out_vec_3,7,0);
    VL_OUT8(&io_out_vec_4,7,0);
    VL_OUT8(&io_out_vec_5,7,0);
    VL_OUT8(&io_out_vec_6,7,0);
    VL_OUT8(&io_out_vec_7,7,0);
    VL_OUT8(&io_out_vec_8,7,0);
    VL_OUT8(&io_out_vec_9,7,0);
    VL_OUT8(&io_out_vec_10,7,0);
    VL_OUT8(&io_out_vec_11,7,0);
    VL_OUT8(&io_out_vec_12,7,0);
    VL_OUT8(&io_out_vec_13,7,0);
    VL_OUT8(&io_out_vec_14,7,0);
    VL_OUT8(&io_out_vec_15,7,0);
    VL_OUT8(&io_out_valid_0,0,0);
    VL_OUT8(&io_out_valid_1,0,0);
    VL_OUT8(&io_out_valid_2,0,0);
    VL_OUT8(&io_out_valid_3,0,0);
    VL_OUT8(&io_out_valid_4,0,0);
    VL_OUT8(&io_out_valid_5,0,0);
    VL_OUT8(&io_out_valid_6,0,0);
    VL_OUT8(&io_out_valid_7,0,0);
    VL_OUT8(&io_out_valid_8,0,0);
    VL_OUT8(&io_out_valid_9,0,0);
    VL_OUT8(&io_out_valid_10,0,0);
    VL_OUT8(&io_out_valid_11,0,0);
    VL_OUT8(&io_out_valid_12,0,0);
    VL_OUT8(&io_out_valid_13,0,0);
    VL_OUT8(&io_out_valid_14,0,0);
    VL_OUT8(&io_out_valid_15,0,0);
    VL_OUT8(&io_out_lookahead_0,0,0);
    VL_OUT8(&io_out_lookahead_1,0,0);
    VL_OUT8(&io_out_lookahead_2,0,0);
    VL_OUT8(&io_out_lookahead_3,0,0);
    VL_OUT8(&io_out_lookahead_4,0,0);
    VL_OUT8(&io_out_lookahead_5,0,0);
    VL_OUT8(&io_out_lookahead_6,0,0);
    VL_OUT8(&io_out_lookahead_7,0,0);
    VL_OUT8(&io_out_lookahead_8,0,0);
    VL_OUT8(&io_out_lookahead_9,0,0);
    VL_OUT8(&io_out_lookahead_10,0,0);
    VL_OUT8(&io_out_lookahead_11,0,0);
    VL_OUT8(&io_out_lookahead_12,0,0);
    VL_OUT8(&io_out_lookahead_13,0,0);
    VL_OUT8(&io_out_lookahead_14,0,0);
    VL_OUT8(&io_out_lookahead_15,0,0);
    VL_OUT8(&io_busy,0,0);
    VL_OUT8(&io_prefetch_ready,0,0);
    VL_OUT8(&io_lut_ready,0,0);
    VL_OUT8(&io_sync_alert,0,0);
    VL_IN16(&io_in_direct_0,9,0);
    VL_IN16(&io_in_direct_1,9,0);
    VL_IN16(&io_in_direct_2,9,0);
    VL_IN16(&io_in_direct_3,9,0);
    VL_IN16(&io_in_direct_4,9,0);
    VL_IN16(&io_in_direct_5,9,0);
    VL_IN16(&io_in_direct_6,9,0);
    VL_IN16(&io_in_direct_7,9,0);
    VL_IN16(&io_in_direct_8,9,0);
    VL_IN16(&io_in_direct_9,9,0);
    VL_IN16(&io_in_direct_10,9,0);
    VL_IN16(&io_in_direct_11,9,0);
    VL_IN16(&io_in_direct_12,9,0);
    VL_IN16(&io_in_direct_13,9,0);
    VL_IN16(&io_in_direct_14,9,0);
    VL_IN16(&io_in_direct_15,9,0);
    VL_IN(&io_in_tpu_0,31,0);
    VL_IN(&io_in_tpu_1,31,0);
    VL_IN(&io_in_tpu_2,31,0);
    VL_IN(&io_in_tpu_3,31,0);
    VL_IN(&io_in_tpu_4,31,0);
    VL_IN(&io_in_tpu_5,31,0);
    VL_IN(&io_in_tpu_6,31,0);
    VL_IN(&io_in_tpu_7,31,0);
    VL_IN(&io_in_tpu_8,31,0);
    VL_IN(&io_in_tpu_9,31,0);
    VL_IN(&io_in_tpu_10,31,0);
    VL_IN(&io_in_tpu_11,31,0);
    VL_IN(&io_in_tpu_12,31,0);
    VL_IN(&io_in_tpu_13,31,0);
    VL_IN(&io_in_tpu_14,31,0);
    VL_IN(&io_in_tpu_15,31,0);
    VL_IN(&io_matrix_param,31,0);
    VL_IN(&io_qparam_line_in_0,31,0);
    VL_IN(&io_qparam_line_in_1,31,0);
    VL_IN(&io_qparam_line_in_2,31,0);
    VL_IN(&io_qparam_line_in_3,31,0);
    VL_IN(&io_qparam_line_in_4,31,0);
    VL_IN(&io_qparam_line_in_5,31,0);
    VL_IN(&io_qparam_line_in_6,31,0);
    VL_IN(&io_qparam_line_in_7,31,0);
    VL_IN(&io_qparam_line_in_8,31,0);
    VL_IN(&io_qparam_line_in_9,31,0);
    VL_IN(&io_qparam_line_in_10,31,0);
    VL_IN(&io_qparam_line_in_11,31,0);
    VL_IN(&io_qparam_line_in_12,31,0);
    VL_IN(&io_qparam_line_in_13,31,0);
    VL_IN(&io_qparam_line_in_14,31,0);
    VL_IN(&io_qparam_line_in_15,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    VQuantActUnit_QuantActCore* const __PVT__QuantActUnit__DOT__cores_0;
    VQuantActUnit_QuantActCore* const __PVT__QuantActUnit__DOT__cores_1;
    VQuantActUnit_QuantActCore* const __PVT__QuantActUnit__DOT__cores_2;
    VQuantActUnit_QuantActCore* const __PVT__QuantActUnit__DOT__cores_3;
    VQuantActUnit_QuantActCore* const __PVT__QuantActUnit__DOT__cores_4;
    VQuantActUnit_QuantActCore* const __PVT__QuantActUnit__DOT__cores_5;
    VQuantActUnit_QuantActCore* const __PVT__QuantActUnit__DOT__cores_6;
    VQuantActUnit_QuantActCore* const __PVT__QuantActUnit__DOT__cores_7;
    VQuantActUnit_QuantActCore* const __PVT__QuantActUnit__DOT__cores_8;
    VQuantActUnit_QuantActCore* const __PVT__QuantActUnit__DOT__cores_9;
    VQuantActUnit_QuantActCore* const __PVT__QuantActUnit__DOT__cores_10;
    VQuantActUnit_QuantActCore* const __PVT__QuantActUnit__DOT__cores_11;
    VQuantActUnit_QuantActCore* const __PVT__QuantActUnit__DOT__cores_12;
    VQuantActUnit_QuantActCore* const __PVT__QuantActUnit__DOT__cores_13;
    VQuantActUnit_QuantActCore* const __PVT__QuantActUnit__DOT__cores_14;
    VQuantActUnit_QuantActCore* const __PVT__QuantActUnit__DOT__cores_15;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VQuantActUnit___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VQuantActUnit(VerilatedContext* contextp, const char* name = "TOP");
    explicit VQuantActUnit(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VQuantActUnit();
  private:
    VL_UNCOPYABLE(VQuantActUnit);  ///< Copying not allowed

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
