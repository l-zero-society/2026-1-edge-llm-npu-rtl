# DMA read 검증 결과 — 2026-11-05 (Asia/Seoul)

기준 checkout은 `feat/tpu-rocc-driver`, HEAD는
`054ceba1ee7d8da506fd65235a059b70c2d13d06`이다. 작업 시작 시 working tree는
깨끗했다. HEAD를 되돌리거나 기존 팀원 코드를 수정하지 않았고 push/PR도 하지
않았다. 상위 경로 및 저장소 source에 적용되는 AGENTS.md는 발견되지 않았다.

실제 환경: Scala 2.13.12, Chisel 6.7.0, chiseltest 6.0.0, ScalaTest 3.2.16,
sbt 1.12.6, Homebrew OpenJDK 26.0.2.1, macOS arm64.

## 변경 파일

| 파일 | 내용 |
| --- | --- |
| `src/main/scala/npu/dma/ReadTypes.scala` | 6개 stream, 5개 target, 공급 mode, config/refill/plan/identity, 공통 burst, OCM 및 IB backing 계약 |
| `src/main/scala/npu/dma/DmaReadEngine.scala` | 독립 canonical cursor, additive affine traversal, segmentation/resolver, coverage, source 예약 및 독립 반환 경로, commit 기반 fill-through |
| `src/main/scala/npu/dma/IbBurstReader.scala` | word/lane 선택과 ordered metadata FIFO를 사용하는 production IB burst controller |
| `src/main/scala/npu/dma/IbReadFillArbiter.scala` | 단일 IB backing port 충돌을 막는 round-robin 중재 및 stalled grant 예약 |
| `src/test/scala/DmaRead_Test.scala` | 독립 harness, exact-range TL mock, byte-addressed IB backing store, trace 및 backpressure 검증 |
| `Makefile` | `dma-read-test`, `dma-read-compile` 독립 runner |
| `.gitignore` | 붙어 있던 `*.tar.gztest_run_dir/`를 분리해 생성된 test artifact를 ignore |
| `docs/DmaRead.md` | 설정 예시, phase/row event, backend 연결, commit/permission/drain 계약과 범위 |
| `reports/dma-read-validation.md` | 실행 명령, 결과 및 한계 |

## 실행 명령과 결과

최종 DMA suite는 **12/12 PASS** (1 suite, failures/errors/skipped=0)다.
테스트 실행 시간은 3분 22초였으며, 이어서 독립 DMA compile도 통과했다.

| 실제 실행 명령 | 결과 |
| --- | --- |
| `make -j1 dma-read-test dma-read-compile RTL_SBT=sbt` | 최종 DMA 12/12 PASS, DMA compile PASS |
| `make -j1 dma-read-test dma-read-compile param-ocm-test production-compile RTL_SBT=sbt` | 이전 DMA 10/10 PASS, DMA compile PASS, 기존 QB/FB 4/4 PASS, 기존 production source 구성 compile PASS |
| 동일 DMA runner의 최초 shared-port 확장 실행 | 11 PASS / 1 FAIL: shared-port 조합 루프 검출. 아래 수정 후 재검증 |
| DMA source/test 선별 후 `testOnly npu.dma.DmaReadTest -- -z "shared backing port"` | 수정 후 해당 테스트 1/1 PASS |
| `git diff --check` 및 신규 파일 whitespace 검사 | PASS |
| `sbt 'Test / compile'` | FAIL: 작업 전 baseline source 오류 4건 (아래) |

Makefile에서 DMA suite는 아래 sbt 명령으로 전개된다. 실제 DRAM IP, Rocket
Chip/Diplomacy 또는 완성된 UB/WB/RF controller를 요구하지 않는다.

```sh
sbt \
  'set Compile / unmanagedSources ~= (_.filter(_.getPath.contains("/npu/dma/")))' \
  'set Test / unmanagedSources ~= (_.filter(_.getName == "DmaRead_Test.scala"))' \
  'testOnly npu.dma.DmaReadTest'
```

`production-compile`은 저장소에 기존부터 있던 `COMPUTE_SOURCES` 선별 빌드다.
전체 source build가 통과했다는 의미가 아니다. 첫 sandbox 실행은
`/Users/mac/.sbt/boot/sbt.boot.lock (Operation not permitted)`로 시작되지 않았으며,
허용된 sbt 실행으로 재시도한 전체 컴파일에서 다음 baseline 오류를 확인했다.

```text
src/main/scala/EdgeNPUTop.scala:8:  not found: type MacUnit
src/main/scala/EdgeNPUTop.scala:9:  not found: type MXU_16
src/main/scala/EdgeNPUTop.scala:10: not found: type DataOrchUnit_16
src/main/scala/npu/core/Sequencer.scala:28: value out_enable is not a member of ...
```

이 파일들은 변경하지 않았다. 전체 compile/regression이 통과했다고 보고하지
않는다. 실행한 기존 regression은 `npu.core.memory.LineParamOcmTest`의 4개
QB/FB 테스트다.

Shared-port 확장 테스트가 검출한 조합 루프는 IB hit response ready가 DRAM
fill ready에 불필요하게 의존한 경로였다. source=IB의 fill 수락 조건을
elaboration 시 상수 true로 분리하여, IB metadata FIFO와 shared-port grant를
통한 조합 순환을 제거했다. IB source에서 fill을 요청하지 않는다는 assertion도
추가했다. 수정 후 focused 테스트와 최종 전체 suite 12개가 모두 통과했다.

## 검증 내용

주소별 서로 다른 DRAM byte 함수와 독립적인 기대 주소/byte trace를 비교한다.
IB는 실제 write commit에서만 byte map을 갱신하며, 초기화되지 않은 byte를
읽으면 테스트가 실패한다. raw 응답의 무효 lane은 poison으로 채운다.

1. DRAM과 IB 각각에서 0/16/32/48B offset, 16/32/48/64B 및 144B payload,
   page-end tail, compact mask와 byte order, 무효 출력 lane의 zeroing을 확인한다.
2. GEMM M/N-pass/K 및 input rewind, weight stride jump, W1/W2 독립 cursor와
   명시적 fusion phase, compact input, STREAM/LOCAL_ROW_CACHE/
   LOCAL_WEIGHT_CACHE, Quant/Freq/NormSpill 반복 공급을 확인한다.
3. 첫 in-region DRAM miss의 실제 OCM+IB 쓰기, out-of-region의 fill 없음,
   commit 전 hit 금지, 재요청 IB hit 시 DRAM 요청 없음, partial coverage,
   page 간 source 변경, gap, 분산 region, 중복 write, stale epoch와 drained
   mapping 교체를 확인한다. IB-only invalid는 fallback 없이 error로 끝난다.
4. DRAM/IB latency와 bubble, OCM 먼저/IB 먼저 수락, 완료 및 issue stall에서
   stable valid/data/metadata, target 예약, latched context/epoch/refill routing을
   확인한다. 독립 source의 동일 cycle full beat 수락과 연속 full beat를 검사한다.
5. 16/32/64B TL mock Get마다 자연 정렬, power-of-two, 요청 구간 포함 관계를
   검사한다. Get 끝, physical segment 끝, logical chunk/stream 끝을 구분한다.
6. tile 중간 chunk 종료/재개 및 48B backend segment 제한, 여러 segment를 거친
   동일 범위의 fill 후 IB hit를 확인한다. 별도 shared-port harness에서는 IB
   read/fill command가 동시에 backing port에 나가지 않는지 확인한다.

모든 wait에 timeout이 있으며 drop/duplicate/reorder/early-last는 byte trace,
전달 길이, last 횟수, coverage 및 RTL assertion으로 검출한다.

최종 실행은 DRAM→WB와 IB→UB가 같은 cycle에 64B씩 수락하는 경우를
**64 cycle** 기록했다. 이는 모델에서 128B/cycle 반환 경로를 확인한 결과이며,
합성 후 실제 하드웨어 대역폭 측정은 아니다. single-port 충돌 테스트는 별도로
ready/backpressure와 command 상호 배제를 검사한다.

## 유지한 경계와 실제 IP 연결점

UB/WB controller, QB/FB controller, ComputeUnit 및 RF 파일은 변경하지 않았다.
상위/RF 담당자는 typed `config`, `mapping`, `refill`에 연결하고, OCM 담당자는
`memory(target)`의 compact lane mask/last/identity와 `done(target)`에 연결한다.
기존 64B 무조건 write에 partial beat를 그대로 연결하는 것은 지원하지 않는다.
Fusion phase와 local-row의 다음 row 공급 event는 상위 scheduler가 제공한다.

- 실제 DRAM/TL read adapter: `DmaReadEngine.io.dram.request/response`.
- IB DMA burst: `DmaReadEngine.io.ib` ↔ `IbBurstReader.io.burst`.
- IB backing read: `IbBurstReader.io.wordRead/wordResponse`.
- IB fill write/commit: `DmaReadEngine.io.fill`. `ready`는 해당 write의 실제
  commit ACK다. 단순 queue enqueue ACK를 연결하면 안 된다.
- 단일 backing port: `IbReadFillArbiter`의 read/fill 및 backingRead/backingFill.
  read response는 그대로 ordered 반환한다. bank-aware backend는 동일한
  reservation/backpressure 계약으로 중재기를 대체할 수 있다.
- Mapping 교체: `drained`와 mapping/config ready. 외부 IB reader도 상위에서
  drain해야 한다. mapping이 승인된 뒤 완료까지 metadata를 바꾸지 않는다.

실제 TL IP나 물리 IB SRAM은 구현/검증한 것으로 주장하지 않는다. testbench
모델의 결과이며, 합성 후 주파수/타이밍/물리 banking 성능 측정도 아니다.
IB-only preload는 이 fill 경로로 commit coverage를 얻어야 하며, 외부 preload용
coverage 등록 ABI는 새로 만들지 않았다. 버스 오류 응답의 처리도 향후 transport
adapter 계약에서 다뤄야 한다.
