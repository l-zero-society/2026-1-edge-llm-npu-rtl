#include "VVPU1RouteHarness.h"
#include "verilated.h"

#define TOP_CLASS VVPU1RouteHarness

#ifndef VM_TRACE_FST
#define VM_TRACE_FST 0
#endif

static const bool verbose = false;

#if VM_TRACE
#if VM_TRACE_FST
  #include "verilated_fst_c.h"
  #define VERILATED_C VerilatedFstC
#else // !(VM_TRACE_FST)
  #include "verilated_vcd_c.h"
  #define VERILATED_C VerilatedVcdC
#endif
#else // !(VM_TRACE)
  #define VERILATED_C VerilatedVcdC
#endif
#include <iostream>


// Override Verilator definition so first $finish ends simulation
// Note: VL_USER_FINISH needs to be defined when compiling Verilator code
static bool encounteredFinish = false;
void vl_finish(const char* filename, int linenum, const char* hier) {
  // std::cout << "finish! (" << filename << ", " << linenum << ", " << hier << ")" << std::endl;
  Verilated::flushCall();
  encounteredFinish = true;
}


static bool encounteredFatal = false;
void vl_fatal(const char* filename, int linenum, const char* hier, const char* msg) {
  std::cerr << "fatal! (" << filename << ", " << linenum << ", " << hier << ", " << msg << ")" << std::endl;
  Verilated::flushCall();
  encounteredFatal = true;
}


static bool encounteredStop = false;
void vl_stop(const char* filename, int linenum, const char* hier) {
  // std::cout << "stop! (" << filename << ", " << linenum << ", " << hier << ")" << std::endl;
  Verilated::flushCall();
  encounteredStop = true;
}


// Global because older versions of verilator do not support contexts
static vluint64_t global_time = 0;
double sc_time_stamp () { return global_time; }

static void _startCoverageAndDump(VERILATED_C** tfp, const std::string& dumpfile, TOP_CLASS* top) {

#if VM_TRACE || VM_COVERAGE
    Verilated::traceEverOn(true);
#endif
#if VM_TRACE
    if (verbose) VL_PRINTF("Enabling waves..\n");
    *tfp = new VERILATED_C;
    top->trace(*tfp, 99);
    (*tfp)->open(dumpfile.c_str());
#endif
}

static int64_t _step(VERILATED_C* tfp, TOP_CLASS* top, vluint64_t& main_time) {
    top->clock = 0;
    global_time = main_time;
    top->eval();
#if VM_TRACE
    if (tfp) tfp->dump(main_time);
#endif
    main_time++;
    top->clock = 1;
    global_time = main_time;
    top->eval();
#if VM_TRACE
    if (tfp) tfp->dump(main_time);
#endif
    main_time++;
    if(encounteredStop) {
      // vl_stop is called by verilator when an assertion fails or when the fatal command is executed
      encounteredStop = false;
      encounteredFinish = false;
      return 2;
    } else if(encounteredFinish) {
      // vl_finish is called by verilator when a finish command is executed (stop(0))
      encounteredFinish = false;
      return 1;
    } else if(encounteredFatal) {
      encounteredFatal = false;
      return 3;
    }
    return 0;
}

static void _finish(VERILATED_C* tfp, TOP_CLASS* top) {
#if VM_TRACE
  if (tfp) tfp->close();
  delete tfp;
#endif
#if VM_COVERAGE
  VerilatedCov::write(R"(/workspace/lzero_01_rtl/test_run_dir/VPU1_fixed_routes_should_flag_and_reject_mode_or_destination_changes_until_the_current_pipeline_drains/coverage.dat)");
#endif
  top->final();
  // TODO: re-enable!
  // delete top;
}

struct sim_state {
  TOP_CLASS* dut;
  VERILATED_C* tfp;
  vluint64_t main_time;

  sim_state() :
    dut(new TOP_CLASS),
    tfp(nullptr),
    main_time(0)
  {
    // std::cout << "Allocating! " << ((long long) dut) << std::endl;
  }

  inline int64_t step(int32_t cycles) {
    for(int32_t i = 0; i < cycles; i++) {
      const int64_t status = _step(tfp, dut, main_time);
      if(status > 0) {
        // early exit on failure
        return (status << 32) | ((int64_t)(i + 1));
      }
    }
    return (int64_t)cycles;
  }
  inline void update() { dut->eval(); }
  inline void finish() {
    dut->eval();
    _finish(tfp, dut);
  }
  inline void resetCoverage() { VerilatedCov::zero(); }
  inline void writeCoverage(const char* filename) {
    VerilatedCov::write(filename);
  }
  inline void poke(int32_t id, int64_t value) {
    const uint64_t u = value;
    // std::cout << "poking: " << std::hex << u << std::endl;
    switch(id) {
      case 0 : dut->reset = u; break;
      case 1 : dut->io_tpu_0 = u; break;
      case 2 : dut->io_tpu_1 = u; break;
      case 3 : dut->io_tpu_2 = u; break;
      case 4 : dut->io_tpu_3 = u; break;
      case 5 : dut->io_tpu_4 = u; break;
      case 6 : dut->io_tpu_5 = u; break;
      case 7 : dut->io_tpu_6 = u; break;
      case 8 : dut->io_tpu_7 = u; break;
      case 9 : dut->io_tpu_8 = u; break;
      case 10 : dut->io_tpu_9 = u; break;
      case 11 : dut->io_tpu_10 = u; break;
      case 12 : dut->io_tpu_11 = u; break;
      case 13 : dut->io_tpu_12 = u; break;
      case 14 : dut->io_tpu_13 = u; break;
      case 15 : dut->io_tpu_14 = u; break;
      case 16 : dut->io_tpu_15 = u; break;
      case 17 : dut->io_tpu_valid = u; break;
      case 18 : dut->io_ub_0 = u; break;
      case 19 : dut->io_ub_1 = u; break;
      case 20 : dut->io_ub_2 = u; break;
      case 21 : dut->io_ub_3 = u; break;
      case 22 : dut->io_ub_4 = u; break;
      case 23 : dut->io_ub_5 = u; break;
      case 24 : dut->io_ub_6 = u; break;
      case 25 : dut->io_ub_7 = u; break;
      case 26 : dut->io_ub_8 = u; break;
      case 27 : dut->io_ub_9 = u; break;
      case 28 : dut->io_ub_10 = u; break;
      case 29 : dut->io_ub_11 = u; break;
      case 30 : dut->io_ub_12 = u; break;
      case 31 : dut->io_ub_13 = u; break;
      case 32 : dut->io_ub_14 = u; break;
      case 33 : dut->io_ub_15 = u; break;
      case 34 : dut->io_wb_0 = u; break;
      case 35 : dut->io_wb_1 = u; break;
      case 36 : dut->io_wb_2 = u; break;
      case 37 : dut->io_wb_3 = u; break;
      case 38 : dut->io_wb_4 = u; break;
      case 39 : dut->io_wb_5 = u; break;
      case 40 : dut->io_wb_6 = u; break;
      case 41 : dut->io_wb_7 = u; break;
      case 42 : dut->io_wb_8 = u; break;
      case 43 : dut->io_wb_9 = u; break;
      case 44 : dut->io_wb_10 = u; break;
      case 45 : dut->io_wb_11 = u; break;
      case 46 : dut->io_wb_12 = u; break;
      case 47 : dut->io_wb_13 = u; break;
      case 48 : dut->io_wb_14 = u; break;
      case 49 : dut->io_wb_15 = u; break;
      case 50 : dut->io_ub_valid = u; break;
      case 51 : dut->io_wb_valid = u; break;
      case 52 : dut->io_vb_read_data_0 = u; break;
      case 53 : dut->io_vb_read_data_1 = u; break;
      case 54 : dut->io_vb_read_data_2 = u; break;
      case 55 : dut->io_vb_read_data_3 = u; break;
      case 56 : dut->io_vb_read_data_4 = u; break;
      case 57 : dut->io_vb_read_data_5 = u; break;
      case 58 : dut->io_vb_read_data_6 = u; break;
      case 59 : dut->io_vb_read_data_7 = u; break;
      case 60 : dut->io_vb_read_data_8 = u; break;
      case 61 : dut->io_vb_read_data_9 = u; break;
      case 62 : dut->io_vb_read_data_10 = u; break;
      case 63 : dut->io_vb_read_data_11 = u; break;
      case 64 : dut->io_vb_read_data_12 = u; break;
      case 65 : dut->io_vb_read_data_13 = u; break;
      case 66 : dut->io_vb_read_data_14 = u; break;
      case 67 : dut->io_vb_read_data_15 = u; break;
      case 68 : dut->io_input_mode = u; break;
      case 69 : dut->io_output_route = u; break;
      case 70 : dut->io_alu_mode = u; break;
      case 71 : dut->io_out_shift = u; break;
      case 72 : dut->io_act_mask = u; break;
      case 73 : dut->io_fusion_second = u; break;
      case 74 : dut->io_matrix_param = u; break;
      case 75 : dut->io_stall = u; break;
      case 76 : dut->io_lut_wr_en = u; break;
      case 77 : dut->io_lut_wr_addr = u; break;
      case 78 : dut->io_lut_wr_data_0 = u; break;
      case 79 : dut->io_lut_wr_data_1 = u; break;
      case 80 : dut->io_lut_wr_data_2 = u; break;
      case 81 : dut->io_lut_wr_data_3 = u; break;
      case 82 : dut->io_lut_wr_data_4 = u; break;
      case 83 : dut->io_lut_wr_data_5 = u; break;
      case 84 : dut->io_lut_wr_data_6 = u; break;
      case 85 : dut->io_lut_wr_data_7 = u; break;
      case 86 : dut->io_lut_wr_data_8 = u; break;
      case 87 : dut->io_lut_wr_data_9 = u; break;
      case 88 : dut->io_lut_wr_data_10 = u; break;
      case 89 : dut->io_lut_wr_data_11 = u; break;
      case 90 : dut->io_lut_wr_data_12 = u; break;
      case 91 : dut->io_lut_wr_data_13 = u; break;
      case 92 : dut->io_lut_wr_data_14 = u; break;
      case 93 : dut->io_lut_wr_data_15 = u; break;

    default:
      std::cerr << "Cannot find the object of id = " << id << std::endl;
      finish();
      break;
    }
  }
  inline int64_t peek(int32_t id) {
    uint64_t value = 0;
    switch(id) {
      case 0 : value = dut->reset; break;
      case 1 : value = dut->io_tpu_0; break;
      case 2 : value = dut->io_tpu_1; break;
      case 3 : value = dut->io_tpu_2; break;
      case 4 : value = dut->io_tpu_3; break;
      case 5 : value = dut->io_tpu_4; break;
      case 6 : value = dut->io_tpu_5; break;
      case 7 : value = dut->io_tpu_6; break;
      case 8 : value = dut->io_tpu_7; break;
      case 9 : value = dut->io_tpu_8; break;
      case 10 : value = dut->io_tpu_9; break;
      case 11 : value = dut->io_tpu_10; break;
      case 12 : value = dut->io_tpu_11; break;
      case 13 : value = dut->io_tpu_12; break;
      case 14 : value = dut->io_tpu_13; break;
      case 15 : value = dut->io_tpu_14; break;
      case 16 : value = dut->io_tpu_15; break;
      case 17 : value = dut->io_tpu_valid; break;
      case 18 : value = dut->io_ub_0; break;
      case 19 : value = dut->io_ub_1; break;
      case 20 : value = dut->io_ub_2; break;
      case 21 : value = dut->io_ub_3; break;
      case 22 : value = dut->io_ub_4; break;
      case 23 : value = dut->io_ub_5; break;
      case 24 : value = dut->io_ub_6; break;
      case 25 : value = dut->io_ub_7; break;
      case 26 : value = dut->io_ub_8; break;
      case 27 : value = dut->io_ub_9; break;
      case 28 : value = dut->io_ub_10; break;
      case 29 : value = dut->io_ub_11; break;
      case 30 : value = dut->io_ub_12; break;
      case 31 : value = dut->io_ub_13; break;
      case 32 : value = dut->io_ub_14; break;
      case 33 : value = dut->io_ub_15; break;
      case 34 : value = dut->io_wb_0; break;
      case 35 : value = dut->io_wb_1; break;
      case 36 : value = dut->io_wb_2; break;
      case 37 : value = dut->io_wb_3; break;
      case 38 : value = dut->io_wb_4; break;
      case 39 : value = dut->io_wb_5; break;
      case 40 : value = dut->io_wb_6; break;
      case 41 : value = dut->io_wb_7; break;
      case 42 : value = dut->io_wb_8; break;
      case 43 : value = dut->io_wb_9; break;
      case 44 : value = dut->io_wb_10; break;
      case 45 : value = dut->io_wb_11; break;
      case 46 : value = dut->io_wb_12; break;
      case 47 : value = dut->io_wb_13; break;
      case 48 : value = dut->io_wb_14; break;
      case 49 : value = dut->io_wb_15; break;
      case 50 : value = dut->io_ub_valid; break;
      case 51 : value = dut->io_wb_valid; break;
      case 52 : value = dut->io_vb_read_data_0; break;
      case 53 : value = dut->io_vb_read_data_1; break;
      case 54 : value = dut->io_vb_read_data_2; break;
      case 55 : value = dut->io_vb_read_data_3; break;
      case 56 : value = dut->io_vb_read_data_4; break;
      case 57 : value = dut->io_vb_read_data_5; break;
      case 58 : value = dut->io_vb_read_data_6; break;
      case 59 : value = dut->io_vb_read_data_7; break;
      case 60 : value = dut->io_vb_read_data_8; break;
      case 61 : value = dut->io_vb_read_data_9; break;
      case 62 : value = dut->io_vb_read_data_10; break;
      case 63 : value = dut->io_vb_read_data_11; break;
      case 64 : value = dut->io_vb_read_data_12; break;
      case 65 : value = dut->io_vb_read_data_13; break;
      case 66 : value = dut->io_vb_read_data_14; break;
      case 67 : value = dut->io_vb_read_data_15; break;
      case 68 : value = dut->io_input_mode; break;
      case 69 : value = dut->io_output_route; break;
      case 70 : value = dut->io_alu_mode; break;
      case 71 : value = dut->io_out_shift; break;
      case 72 : value = dut->io_act_mask; break;
      case 73 : value = dut->io_fusion_second; break;
      case 74 : value = dut->io_matrix_param; break;
      case 75 : value = dut->io_stall; break;
      case 76 : value = dut->io_lut_wr_en; break;
      case 77 : value = dut->io_lut_wr_addr; break;
      case 78 : value = dut->io_lut_wr_data_0; break;
      case 79 : value = dut->io_lut_wr_data_1; break;
      case 80 : value = dut->io_lut_wr_data_2; break;
      case 81 : value = dut->io_lut_wr_data_3; break;
      case 82 : value = dut->io_lut_wr_data_4; break;
      case 83 : value = dut->io_lut_wr_data_5; break;
      case 84 : value = dut->io_lut_wr_data_6; break;
      case 85 : value = dut->io_lut_wr_data_7; break;
      case 86 : value = dut->io_lut_wr_data_8; break;
      case 87 : value = dut->io_lut_wr_data_9; break;
      case 88 : value = dut->io_lut_wr_data_10; break;
      case 89 : value = dut->io_lut_wr_data_11; break;
      case 90 : value = dut->io_lut_wr_data_12; break;
      case 91 : value = dut->io_lut_wr_data_13; break;
      case 92 : value = dut->io_lut_wr_data_14; break;
      case 93 : value = dut->io_lut_wr_data_15; break;
      case 94 : value = dut->io_vb_read_req; break;
      case 95 : value = dut->io_result_0; break;
      case 96 : value = dut->io_result_1; break;
      case 97 : value = dut->io_result_2; break;
      case 98 : value = dut->io_result_3; break;
      case 99 : value = dut->io_result_4; break;
      case 100 : value = dut->io_result_5; break;
      case 101 : value = dut->io_result_6; break;
      case 102 : value = dut->io_result_7; break;
      case 103 : value = dut->io_result_8; break;
      case 104 : value = dut->io_result_9; break;
      case 105 : value = dut->io_result_10; break;
      case 106 : value = dut->io_result_11; break;
      case 107 : value = dut->io_result_12; break;
      case 108 : value = dut->io_result_13; break;
      case 109 : value = dut->io_result_14; break;
      case 110 : value = dut->io_result_15; break;
      case 111 : value = dut->io_vb_valid; break;
      case 112 : value = dut->io_vpu2_valid; break;
      case 113 : value = dut->io_compute_valid; break;
      case 114 : value = dut->io_result_valid; break;
      case 115 : value = dut->io_drained; break;
      case 116 : value = dut->io_control_alert; break;
      case 117 : value = dut->io_sync_alert; break;
      case 118 : value = dut->io_qparam_req; break;

    default:
      std::cerr << "Cannot find the object of id = " << id << std::endl;
      finish();
      return -1;
    }
    // std::cout << "peeking: " << std::hex << value << std::endl;
    return value;
  }
  inline void poke_wide(int32_t id, int32_t offset, int64_t value) {
    const uint64_t u = value;
    WData* data = nullptr;
    size_t words = 0;
    switch(id) {

    default:
      std::cerr << "Cannot find the object of id = " << id << std::endl;
      finish();
      break;
    }
    const size_t firstWord = offset * 2;
    const size_t secondWord = firstWord + 1;
    if(firstWord >= words || firstWord < 0) {
      std::cerr << "Out of bounds index for id = " << id << " index = " << offset << std::endl;
      finish();
    } else if(secondWord >= words) {
      data[firstWord] = u;
    } else {
      data[firstWord] = u & 0xffffffffu;
      data[secondWord] = (u >> 32) & 0xffffffffu;
    }
  }
  inline int64_t peek_wide(int32_t id, int32_t offset) {
    WData* data = nullptr;
    size_t words = 0;
    switch(id) {

    default:
      std::cerr << "Cannot find the object of id = " << id << std::endl;
      finish();
      return -1;
    }
    const size_t firstWord = offset * 2;
    const size_t secondWord = firstWord + 1;
    if(firstWord >= words || firstWord < 0) {
      std::cerr << "Out of bounds index for id = " << id << " index = " << offset << std::endl;
      finish();
      return -1;
    } else if(secondWord >= words) {
      return (uint64_t)data[firstWord];
    } else {
      return (((uint64_t)data[secondWord]) << 32) | ((uint64_t)data[firstWord]);
    }
  }

  inline void set_args(int32_t argc, const char** argv) {
    Verilated::commandArgs(argc, argv);
  }
};

static sim_state* create_sim_state() {
  sim_state *s = new sim_state();
  std::string dumpfile = R"(/workspace/lzero_01_rtl/test_run_dir/VPU1_fixed_routes_should_flag_and_reject_mode_or_destination_changes_until_the_current_pipeline_drains/VPU1RouteHarness.)";
  _startCoverageAndDump(&s->tfp, dumpfile, s->dut);
  return s;
}
// we only export the symbols that we prefixed with a unique id
#if defined _WIN32 || defined __CYGWIN__ || defined __MINGW32__ || defined __MINGW64__
#define _EXPORT __declspec(dllexport)
#else
#define _EXPORT __attribute__((visibility("default")))
#endif
extern "C" {

_EXPORT void* sim_init() {
  // void* ptr = create_sim_state();
  // std::cout << "native ptr: " << std::hex << ptr << std::endl;
  // return ptr;
  return (void*) create_sim_state();
}

_EXPORT int64_t step(void* s, int32_t cycles) {
  return ((sim_state*)s)->step(cycles);
}

_EXPORT void update(void* s) {
  ((sim_state*)s)->update();
}

_EXPORT void finish(void* s) {
  ((sim_state*)s)->finish();
}

_EXPORT void resetCoverage(void* s) {
  ((sim_state*)s)->resetCoverage();
}

_EXPORT void writeCoverage(void* s, const char* filename) {
  ((sim_state*)s)->writeCoverage(filename);
}

_EXPORT void poke(void* s, int32_t id, int64_t value) {
  ((sim_state*)s)->poke(id, value);
}

_EXPORT int64_t peek(void* s, int32_t id) {
  return ((sim_state*)s)->peek(id);
}

_EXPORT void poke_wide(void* s, int32_t id, int32_t offset, int64_t value) {
  ((sim_state*)s)->poke_wide(id, offset, value);
}

_EXPORT int64_t peek_wide(void* s, int32_t id, int32_t offset) {
  return ((sim_state*)s)->peek_wide(id, offset);
}

_EXPORT void set_args(void* s, int32_t argc, const char** argv) {
  ((sim_state*)s)->set_args(argc, argv);
}
} /* extern C */
