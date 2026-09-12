.PHONY: up shell setup gen test down clean mxu-test tpu-test norm-test norm-distributed-test rope-test quant-test gpalu-test vpu1-test vpu1-tests vpu-stage-test param-ocm-test production-compile zero-padder-test compactor-test lut-program-test compute-unit-test compute-regression

# Override for local sbt: make quant-test RTL_SBT=sbt
RTL_SBT ?= docker exec -e MAKEFLAGS lzero_rtl_env sbt
VPU1_SOURCES = 'set Compile / unmanagedSources ~= (_.filter(f => Set("VPU1Control.scala", "GPALU.scala", "QuantActUnit.scala", "UniversalLUT.scala").contains(f.getName)))'
COMPUTE_SOURCES = 'set Compile / unmanagedSources ~= (_.filter(f => Set("MXU.scala", "Orch.scala", "Accum.scala", "ComputeTimer.scala", "TPU.scala", "Transposer.scala", "ZeroPadder.scala", "Compactor.scala", "LutProgrammingController.scala", "VPU1Control.scala", "GPALU.scala", "QuantActUnit.scala", "UniversalLUT.scala", "NormUnit.scala", "Rope.scala", "LineParamOcm.scala", "Ocm.scala", "VPU.scala", "Comp.scala").contains(f.getName)))'

# L-ZERO RTL Track 간편 명령어 세트
# 1. 환경 빌드 및 실행
up:
	docker compose up -d --build

# 2. 컨테이너 내부 접속 (가장 많이 씀)
shell:
	docker exec -it lzero_rtl_env /bin/bash

setup:
	@echo "Rocket-chip essential library building (5-10min)"
	mkdir -p /usr/local/riscv64-unknown-elf/share/riscv-tests

	# 1. Macros 빌드 2. CDE 빌드 3. Hardfloat 빌드 4. Diplomacy 빌드 5. Rocket-chip 본체 빌드
	cd rocket-chip && \
	/usr/local/bin/mill --no-server macros.publishLocal && \
	/usr/local/bin/mill --no-server cde.publishLocal && \
	/usr/local/bin/mill --no-server "hardfloat[6.7.0].publishLocal" && \
	/usr/local/bin/mill --no-server "diplomacy[6.7.0].publishLocal" && \
	/usr/local/bin/mill --no-server "rocketchip[6.7.0].publishLocal"

	@echo "build succes! 'sbt compile' is available"

# 3. Chisel 컴파일 및 Verilog 생성 (접속 안 하고 밖에서 바로 실행)
gen:
	docker exec -it lzero_rtl_env sbt "runMain TPU_Main"

# 4. Chisel 컴파일 및 Verilog 생성 (접속 안 하고 밖에서 바로 실행)
test:
	docker exec -it lzero_rtl_env sbt test

mxu-test:
	docker exec -it lzero_rtl_env sbt \
	  'set Compile / unmanagedSources ~= (_.filter(f => f.getName == "MXU.scala" || f.getName == "Orch.scala" || f.getName == "MxuOrchUnit.scala"))' \
	  'set Test / unmanagedSources ~= (_.filter(_.getName == "MxuOrch_Test.scala"))' \
	  'testOnly npu.core.MxuOrchUnitTest'

tpu-test:
	$(RTL_SBT) \
	  'set Compile / unmanagedSources ~= (_.filter(f => f.getName == "MXU.scala" || f.getName == "Orch.scala" || f.getName == "Accum.scala" || f.getName == "ComputeTimer.scala" || f.getName == "TPU.scala"))' \
	  'set Test / unmanagedSources ~= (_.filter(_.getName == "TPU_Test.scala"))' \
	  'testOnly npu.top.TPUTopTest'

norm-test:
	$(RTL_SBT) \
	  'set Compile / unmanagedSources ~= (_.filter(f => f.getName == "UniversalLUT.scala" || f.getName == "NormUnit.scala"))' \
	  'set Test / unmanagedSources ~= (_.filter(_.getName == "NormUnit_Test.scala"))' \
	  'testOnly npu.core.NormUnitOnlineTest'

norm-distributed-test:
	$(RTL_SBT) \
	  'set Compile / unmanagedSources ~= (_.filter(f => f.getName == "UniversalLUT.scala" || f.getName == "NormUnit.scala"))' \
	  'set Test / unmanagedSources ~= (_.filter(_.getName == "NormUnit_Distributed_Test.scala"))' \
	  'testOnly npu.core.NormUnitDistributedTest'
	  # 'testOnly npu.core.NormUnitDistributedTest -- -z "preserve distributed Softmax correction"'
	  # 'testOnly npu.core.NormUnitDistributedTest -- -z "padded distributed Milakov Softmax"'

rope-test:
	$(RTL_SBT) \
	  'set Compile / unmanagedSources ~= (_.filter(f => Set("Rope.scala", "UniversalLUT.scala").contains(f.getName)))' \
	  'set Test / unmanagedSources ~= (_.filter(_.getName == "Rope_Test.scala"))' \
	  'testOnly npu.core.RopeUnitTest'

quant-test:
	$(RTL_SBT) $(VPU1_SOURCES) \
	  'set Test / unmanagedSources ~= (_.filter(_.getName == "QuantAct_Test.scala"))' \
	  'testOnly npu.core.QuantActUnitTest'

gpalu-test:
	$(RTL_SBT) $(VPU1_SOURCES) \
	  'set Test / unmanagedSources ~= (_.filter(_.getName == "GPALU_Test.scala"))' \
	  'testOnly npu.core.GPALUUnitTest'

vpu1-test:
	$(RTL_SBT) $(VPU1_SOURCES) \
	  'set Test / unmanagedSources ~= (_.filter(_.getName == "VPU1Route_Test.scala"))' \
	  'testOnly npu.core.VPU1RouteTest'

# One sbt invocation for the complete VPU1 regression.
vpu1-tests:
	$(RTL_SBT) $(VPU1_SOURCES) \
	  'set Test / unmanagedSources ~= (_.filter(f => Set("GPALU_Test.scala", "QuantAct_Test.scala", "VPU1Route_Test.scala").contains(f.getName)))' \
	  'testOnly npu.core.GPALUUnitTest npu.core.QuantActUnitTest npu.core.VPU1RouteTest'

# Production VPU_Stage1/VPU_Stage2 composition and layout gating.
vpu-stage-test:
	$(RTL_SBT) \
	  'set Compile / unmanagedSources ~= (_.filter(f => Set("VPU1Control.scala", "GPALU.scala", "QuantActUnit.scala", "UniversalLUT.scala", "NormUnit.scala", "Rope.scala", "VPU.scala").contains(f.getName)))' \
	  'set Test / unmanagedSources ~= (_.filter(_.getName == "VPU_Test.scala"))' \
	  'testOnly npu.top.VPUStageTest'

param-ocm-test:
	$(RTL_SBT) \
	  'set Compile / unmanagedSources ~= (_.filter(_.getName == "LineParamOcm.scala"))' \
	  'set Test / unmanagedSources ~= (_.filter(_.getName == "LineParamOcm_Test.scala"))' \
	  'testOnly npu.core.memory.LineParamOcmTest'

production-compile:
	$(RTL_SBT) $(COMPUTE_SOURCES) compile

zero-padder-test:
	$(RTL_SBT) \
	  'set Compile / unmanagedSources ~= (_.filter(_.getName == "ZeroPadder.scala"))' \
	  'set Test / unmanagedSources ~= (_.filter(_.getName == "ZeroPadder_Test.scala"))' \
	  'testOnly npu.core.ZeroPadderTest'

compactor-test:
	$(RTL_SBT) \
	  'set Compile / unmanagedSources ~= (_.filter(_.getName == "Compactor.scala"))' \
	  'set Test / unmanagedSources ~= (_.filter(_.getName == "Compactor_Test.scala"))' \
	  'testOnly npu.core.CompactorTest'

lut-program-test:
	$(RTL_SBT) \
	  'set Compile / unmanagedSources ~= (_.filter(f => Set("LutProgrammingController.scala", "UniversalLUT.scala").contains(f.getName)))' \
	  'set Test / unmanagedSources ~= (_.filter(_.getName == "LutProgrammingController_Test.scala"))' \
	  'testOnly npu.core.LutProgrammingControllerTest'

# chiseltest 6 forces a top-header include, which prevents GCC from using
# Verilator 5.020's PCH. Disable only the PCH include flags in this child build.
# Export through docker exec as well as local RTL_SBT=sbt invocations.
compute-unit-test tpu-test quant-test rope-test vpu1-test vpu1-tests norm-test norm-distributed-test: export MAKEFLAGS += VK_PCH_I_FAST= VK_PCH_I_SLOW=
compute-unit-test:
	$(RTL_SBT) $(COMPUTE_SOURCES) \
	  'set Test / unmanagedSources ~= (_.filter(_.getName == "ComputeUnit_Test.scala"))' \
	  'testOnly npu.top.ComputeUnitTest'

# Sequential invocations avoid concurrent sbt writes into the same target tree.
compute-regression:
	$(MAKE) -j1 zero-padder-test compactor-test lut-program-test compute-unit-test vpu-stage-test tpu-test vpu1-tests quant-test rope-test norm-test norm-distributed-test param-ocm-test production-compile

# 5. 종료
down:
	docker compose down

# 6. 청소 (Clean)
clean:
	docker exec -it lzero_rtl_env sbt clean
	rm -rf out/ generated/
