# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VComputeUnitE2EHarness.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 1
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VComputeUnitE2EHarness \
	VComputeUnitE2EHarness___024root__DepSet_h88a0826c__0 \
	VComputeUnitE2EHarness___024root__DepSet_h88a0826c__1 \
	VComputeUnitE2EHarness___024root__DepSet_h88a0826c__2 \
	VComputeUnitE2EHarness___024root__DepSet_h88a0826c__3 \
	VComputeUnitE2EHarness___024root__DepSet_h88a0826c__4 \
	VComputeUnitE2EHarness___024root__DepSet_he66170a0__0 \
	VComputeUnitE2EHarness_TransposerUnit__DepSet_h84902b55__0 \
	VComputeUnitE2EHarness_TransposerUnit__DepSet_h84902b55__1 \
	VComputeUnitE2EHarness_Accum_buffer__DepSet_he9168938__0 \
	VComputeUnitE2EHarness_QuantActCore__DepSet_h0293e944__0 \
	VComputeUnitE2EHarness_QuantActCore__DepSet_h48874eef__0 \
	VComputeUnitE2EHarness_Universal_Wide_LUT_16__DepSet_h597a2f58__0 \
	VComputeUnitE2EHarness_Universal_Wide_LUT_16__DepSet_h597a2f58__1 \
	VComputeUnitE2EHarness_RopePairCore__DepSet_hf23d7e36__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VComputeUnitE2EHarness__ConstPool_0 \
	VComputeUnitE2EHarness___024root__Slow \
	VComputeUnitE2EHarness___024root__DepSet_h88a0826c__0__Slow \
	VComputeUnitE2EHarness___024root__DepSet_h88a0826c__1__Slow \
	VComputeUnitE2EHarness___024root__DepSet_h88a0826c__2__Slow \
	VComputeUnitE2EHarness___024root__DepSet_he66170a0__0__Slow \
	VComputeUnitE2EHarness_TransposerUnit__Slow \
	VComputeUnitE2EHarness_TransposerUnit__DepSet_h17a35533__0__Slow \
	VComputeUnitE2EHarness_TransposerUnit__DepSet_h84902b55__0__Slow \
	VComputeUnitE2EHarness_Accum_buffer__Slow \
	VComputeUnitE2EHarness_Accum_buffer__DepSet_h86a64782__0__Slow \
	VComputeUnitE2EHarness_Accum_buffer__DepSet_he9168938__0__Slow \
	VComputeUnitE2EHarness_QuantActCore__Slow \
	VComputeUnitE2EHarness_QuantActCore__DepSet_h0293e944__0__Slow \
	VComputeUnitE2EHarness_QuantActCore__DepSet_h48874eef__0__Slow \
	VComputeUnitE2EHarness_Universal_Wide_LUT_16__Slow \
	VComputeUnitE2EHarness_Universal_Wide_LUT_16__DepSet_h75abc66d__0__Slow \
	VComputeUnitE2EHarness_RopePairCore__Slow \
	VComputeUnitE2EHarness_RopePairCore__DepSet_h770bf8b0__0__Slow \
	VComputeUnitE2EHarness_RopePairCore__DepSet_hf23d7e36__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VComputeUnitE2EHarness__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_cov \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
