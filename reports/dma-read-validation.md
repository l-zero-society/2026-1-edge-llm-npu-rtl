# Read AG / 정적 IB scratchpad / Arbiter 검증 — 2026-11-09 Asia/Seoul

시작 HEAD는 `41d0d8bb1b62ae5334cd7cef80fd85170bf6e985`, branch는
`feat/tpu-rocc-driver`다. Working tree는 깨끗했고 저장소/상위 경로에 적용되는
AGENTS.md는 없었다. Reset/push/PR 없이 기존 코드를 수정했다.

실제 build: Scala 2.13.12, Chisel 6.7.0, chiseltest 6.0.0, ScalaTest 3.2.16,
sbt 1.12.6 / Homebrew Java 26.0.2.1. 최종 DMA 실행은 설치된 Verilator 5.046
(2026-02-28) backend를 명시했다. DUT/byte model/scoreboard를 바꾸어 backend
실패를 숨긴 것이 아니며, 선택은 테스트 전용 `DMA_TEST_BACKEND` 환경 변수다.
Makefile 기본 backend는 기존 Treadle이다. Sbt 프로세스는 동시에 실행하지 않았다.

## 기준 probe와 단계별 결과

제공한 원문을 먼저 `ArbFenceReview.scala`에 저장하고 다음 명령으로 실행했다.
긴 기존 40개 suite를 수정 전에 반복하지 않았다.

```sh
sbt 'set Compile / unmanagedSources ~= (_.filter(_.getPath.contains("/npu/dma/")))' \
  'set Test / unmanagedSources ~= (_.filter(f => Set("DmaRead_Test.scala","ArbFenceReview.scala").contains(f.getName)))' \
  'testOnly npu.dma.ArbFenceReview'
```

**exit 1, 0 PASS / 1 FAIL**. FinishWriter 성공 후 Invalidate.ready가 32 cycle
동안 false였다. [baseline log](dma-static-baseline.log)에 실제 실패를 보존했다.
원인은 engine이 pageCommand 동안 refill을 수락하지 않는 상태에서 unreserved
selection lock이 destructive control의 drained 판정까지 막는 상호 대기였다.

수정 후 probe는 실제 Invalidate.fire·성공 ACK·page retirement, WB의 최신
full/enabled 재검사와 정확히 한 번 admission/done, consume 후 credit 복구까지
확장했다. 별도 테스트는 실제 reader/미소비 OCM entry가 있으면 여전히 command를
막는지 확인한다. 입력 취소/임의 idle cycle/reset으로 탈출하지 않는다.

Focused 실행 이력은 최종 pass 수와 합산하지 않는다.

- 패턴 분리 직후 direct trace 1 PASS; 강화한 fence Treadle 1 PASS.
- GEMM/fusion/direct/merge의 Treadle focused 실행은 약 10분 실행 후 자체 중단
  (exit 143)했다. 완료되지 않은 4개 선택을 PASS로 보고하지 않는다. 같은 byte
  trace를 Verilator로 재실행해 4 PASS를 확인했다.
- 정적 UB/Norm/bank/fence 초기 focused 12 PASS, 보강 후 15 PASS.
  [focused log](dma-static-focused.log)의 예상 assertion 3종은 정상적으로 catch한
  protocol rejection이며 unexpected regression failure가 아니다.
- NB local capacity·row·source focused 13 PASS; Norm/input-backpressure 5 PASS;
  실제 banked cross-word/마지막 IB commit fence 1 PASS.
- 첫 전체 실행은 기존 AG 18 + Arbiter 관련 24 + 새 static 13 = 55 PASS였다.
  이후 연결 검토에서 동시 config valid의 mutual hold를 독립 테스트로 재현했다:
  [1 FAIL](dma-static-config-before.log) → priority 수정 후
  [1 PASS](dma-static-config-after.log). 이 수정 때문에 소스를 다시 고정하고
  전체 runner를 최종 재실행했다. 앞선 55를 최종 코드 결과로 재사용하지 않는다.

## 구현과 연결

| 파일 | 변경/소유권 |
| --- | --- |
| `ReadPatterns.scala` (신규) | GemmReadPattern/DirectReadPattern의 독립 cursor, 공통 affine helper, accepted-only 진행, 마지막 row 길이와 row-use tag |
| `OcmCacheMap.scala` (신규) | target/stream별 static window, WB W1/W2 독립 entry, page-list 검증, live lookup과 sink-completion 기반 UB row 전환 |
| `NormSpillResolver.scala` (신규) | phase1/phase2 공유 T/H/I 분기와 backpressured 16B commit adapter |
| `IbBankWriteAdapter.scala` (신규) | 3 producer × 4 bank 독립 RR, hold 안정성, same-word read/write 순서, 명시적 legacy merge |
| `DmaReadEngine.scala` | 패턴 state/lookup을 위 모듈로 이동; 공통 segmentation/독립 source descriptor/OCM routing 유지; row event·Norm·bank port 연결 |
| `DmaReadScheduler.scala` | unreserved lock의 control pause 양보, 기존 credit/source policy 유지; 비-DMA local capacity 단일 차감 |
| `DmaReadSystem.scala` | typed config/producer/bank adapters와 Norm readiness/local reservation 연결 |
| `ReadTypes.scala`, `IbPageTypes.scala`, `IbPageTable.scala`, `IbCompactWriter.scala` | row metadata, Norm writer namespace, 다중 durable commit/coverage, 완료 후 row generation 갱신과 writer 종류별 adapter |
| `DmaRead_Test.scala`, `DmaReadScheduler_Test.scala`, `IbPageLifecycle_Test.scala`, `ReviewProbe.scala` | 기존 회귀 유지, 새 typed 필드/byte backing model/hold monitor 및 simulator 선택 |
| `ArbFenceReview.scala`, `StaticScratchpad_Test.scala`, `NormSpill_Test.scala`, `IbBankAdapter_Test.scala` (신규) | fence, row/static map, Norm, bank unit/engine 통합 suite |
| `Makefile`, `docs/DmaRead.md`, 이 보고서/로그/JSON | 실제 runner 포함, 연결·lifetime 계약, 명령/집계/hash |

Main RTL 경로는 `src/main/scala/npu/dma/`, tests는 `src/test/scala/`다.
`IbBurstReader`, `IbReadFillArbiter`는 변경 없이 재사용했다. OCM/RF/ComputeUnit,
실제 TL/DRAM writer 및 SW instruction ABI 파일은 수정하지 않았다.

새 포트는 cacheConfig/cacheWindows/rowTransitions, normConfig와 readiness/byte
출력, normStore/result, normLocalWrite/normDramWrite, bankWrites[4]다. 기존
requests/status/consume/discard, live preview/permit/acceptedPlan과 page-control
API도 유지한다. ReadStreamConfig의 direct/lastRowBytes, ReadPlan의 row-use
metadata는 typed prototype 확장이며 SW opcode/encoding을 정의한 것이 아니다.

## Row timing / mapping / operation 경계

- SW가 window와 물리 page list/수명을 정한다. 자동 replacement가 없고 실제
  page base는 비연속일 수 있다. 전체 선언된 validBytes의 unique 16B durable
  coverage 전에는 부분 hit가 없다. pageValid 이후 새 fill은 승인하지 않는다.
- OCM local reuse/zero-size window는 새 population만 막는다. 이미 유효한 retained
  output을 첫 UB 적재에 읽는 경로는 유지한다. W1/W2·FB/QB도 각자 정책을 가진다.
- 기존 GEMM pass가 유일한 반복 기준이다. 마지막 pass의 마지막 physical segment
  accept에 rowLastUse/current-row/next-row를 latch하고, OCM 및 모든 IB 파생 write
  완료 후에만 다음 row로 바꾼다. 마지막 head만 끝난 상태에서 tail이 남으면 유지한다.
- 동일 edge의 old final commit을 검사한 뒤 UB page만 generation++/coverage·valid
  reset한다. Reader release도 확인한다. pending target이 다음 row dispatch를
  막고, 다른 target/source를 전역 drain하지 않는다. 마지막 row는 다음 base를
  설치하지 않는다. 짧은 row는 capacity/page list를 유지하며 valid 길이만 clamp한다.
- Central Control은 instruction 경계에서 실제 readers/writers/consumers를 drain하고
  다음 SW 배치를 적용한다. Retain/rebind는 physical data/valid/generation을 보존,
  fresh Allocate만 새 generation/invalid로 시작한다. 유지 weight는 보호한다.
- Release의 기존 scoped fence와 destructive command의 실제 lifetime fence는
  유지한다. Selection은 reservation이 아니다. pause 때 lock만 양보하고 staged
  identity는 보존한다. config 포트도 pageCommand > Norm > pattern > window의
  명시적 우선순위로 held valid를 한 번씩 처리한다.

## Norm / credit / banking

Norm은 o<H → NB local(o), H<=o<H+I → page lookup(o-H), 그 뒤 →
dramSpillBase+(o-H-I)다. 양방향에 같은 resolver를 쓰고 실제 I와 4KiB 할당
capacity를 구분한다. Norm page의 compatibility canonical tag는 normal DRAM
namespace lookup에 참여하지 않는다. H/I/R 빈 구간은 전송하지 않는다.

ProducerReady는 parent가 전체 phase1 local/DRAM 완료를 보증하고, wrapper는
추가로 모든 IB page의 publication/lease/generation을 확인한다. Phase2 요청은
external T-H byte만 대상으로 하고 NB destinationOffset=H+external progress를
전달한다. NB local H는 localReservedBytes로 고정 용량에서 한 번 차감한다.
Refill.fire의 4096B/entry 예약과 중복 차감하지 않는다. External consume 후에는
capacity-H가 free이며, local consumer 완료를 Central Control이 확인한 뒤
Norm disable/다음 config에서 H 예약을 반환한다. UB/WB 16KiB·4 entries,
QB/FB/NB 8KiB·2 entries의 기존 integration profile은 유지했다.

실제 IB 1MiB/4×256KiB bank의 선택은 주소[19:18]이다. 서로 다른 4KiB page라는
이유로 다른 bank라 가정하지 않는다. DRAM fill/output/Norm의 identity/data/mask는
각각 bank 선택까지 보존한다. bank별 실제 commit만 coverage에 반영하며 동일
page multiwriter는 금지한다. 한 bank가 stall되어도 다른 bank는 commit할 수 있다.

Output/Norm 입력은 ready/valid backpressure가 가능하다. 테스트는 다음 요청을
이전 commit 대기 중에 계속 제시하고, 입력과 bank payload를 보존하다 정확히 한 번
수락하는지 확인한다. 현재 adapter는 1 transaction/result 슬롯이며 무한 overload를
FIFO로 해결한다고 가정하지 않는다. Read는 별도 64B port다. Pending write가
same-word 충돌을 이기되, 이미 제시한 read가 stall 중이면 그 read를 보존하고 새
same-word write를 기다리게 한다. Backend는 read.fire에서 값을 캡처해야 한다.

## 최종 실행 결과

최종 **11 suite / 56 PASS / 0 FAIL / 0 errors / 0 skipped**다.
모든 최종 XML은 source freeze 이후인 이번 2026-11-09 실행이며, main DMA 13개와
test 8개(총 21 source)의 SHA256이 실행 종료 후에도 동일했다.

| 실제 최종 명령 | exit / 결과 |
| --- | --- |
| `DMA_TEST_BACKEND=verilator make -j1 dma-read-test dma-read-compile dma-arbiter-test dma-static-test RTL_SBT=sbt` | **0**; AG 18 + Arbiter 관련 24 + 새 static 14 PASS; DMA compile PASS |
| `sbt 'Test / compile'` | **1**; 기존 top-level 4건, 신규 DMA 오류는 보고되지 않음 |
| `git diff --check` | **0**, PASS |

| 최종 suite | PASS | FAIL | errors | skipped | suite 시간 |
| --- | ---: | ---: | ---: | ---: | ---: |
| `DmaReadTest` | 18 | 0 | 0 | 0 | 97.450s |
| `DmaSourceSchedulerTest` | 4 | 0 | 0 | 0 | 18.156s |
| `DmaReadArbiterTest` | 9 | 0 | 0 | 0 | 81.190s |
| `IbPageLifecycleTest` | 5 | 0 | 0 | 0 | 45.568s |
| `ReviewProbe` | 4 | 0 | 0 | 0 | 46.203s |
| `ArbFenceReview` | 2 | 0 | 0 | 0 | 29.138s |
| `StaticScratchpadTest` | 6 | 0 | 0 | 0 | 43.688s |
| `StaticMapContractTest` | 1 | 0 | 0 | 0 | 14.791s |
| `NormSpillTest` | 4 | 0 | 0 | 0 | 39.391s |
| `IbBankAdapterTest` | 2 | 0 | 0 | 0 | 8.363s |
| `BankedReadIntegrationTest` | 1 | 0 | 0 | 0 | 14.788s |

Suite는 한 sbt 내부에서 병행될 수 있으므로 시간 합을 wall time으로 해석하지
않는다. Sbt 프로세스/Makefile target 자체는 -j1로 순차 실행했다.
[최종 runner log](dma-static-final.log), [XML case별 집계/고정 hash](dma-static-summary.json),
[full compile log](dma-static-full-compile.log)가 근거다. 로그 내용은 줄 끝 whitespace만
정규화했다. Makefile 파일 필터와 testOnly 목록에 모든 새 파일/class가 들어 있으며,
위 최종 클래스별 실제 실행 개수로 누락되지 않았음을 확인했다.

## 대표 byte / commit 결과

- UB 8192B×3 pass와 다음 512B×3 pass의 검증된 UB payload 합은 **26112B**다.
  첫 row의 source는 DRAM+fill/DRAM/IB/DRAM/IB/DRAM이다. 마지막 tail stall 동안
  window/gen을 유지하고 WB W1/W2는 IB로 진행했다. Tail 완료 후 transition=1,
  UB generation=2/validBytes=512, configured capacity=4096을 확인했다. W1/W2는
  generation=1/valid를 보존했다. 마지막 row 뒤 transition은 추가 발생하지 않았다.
- Unaligned multipage UB head는 서로 떨어진 physical page를 재사용한다. Short
  last row에서 남는 page는 validBytes=0/invalid/writer-closed로 남고 capacity와
  page 목록은 유지한다. Banked 48B segment profile은 final derived commit을
  지연시켜 OCM-first에도 row가 미리 바뀌지 않음을 확인했다.
- Retained output의 local UB 첫 load는 새 write/DRAM request 없이 IB data와 일치했다.
  VPU direct에는 row transition이 없고 FB/QB의 local/spill, fusion W1/W2 독립
  byte trace도 확인했다.

| Norm phase1 배치 | NB local | IB 실제 유효 byte | DRAM spill | 16B durable commits | phase2 DMA payload |
| --- | ---: | ---: | ---: | ---: | ---: |
| NB only | 64 | 0 | 0 | 4 | 0 |
| NB+IB tail | 32 | 512 | 0 | 34 | 512 |
| I=0 spill | 32 | 0 | 192 | 14 | 192 |
| Multipage IB+DRAM | 64 | 4608 | 64 | 296 | 4672 |

Norm 표는 Norm operation만의 수치다. NB-only 뒤 disable/다음 legacy direct
operation의 별도 16B read도 검증했다. Phase1 입력에서 독립 생성한 byte vector와
phase2를 비교했다. IB tail 512B는 4KiB 전체를 valid로 만들지 않았고, 실제 spill
첫 주소 0x9010을 사용했다. Producer 미완료 동안 staged NB admission과 DRAM 요청은
없었다. Complete IB-only 범위는 DRAM request 0이었다. NB local H 예약은 external
consume 뒤에도 유지되고 disable 시 반환됐다.

- Bank backlog: 서로 다른 bank에서 **32 cycle × 96B = 3072B write commit**,
  별도 read port **2048B**. Same-bank는 **168 cycle**로 직렬화해 loss/duplicate와
  stall payload 변화를 검사했다. Input producer backpressure와 이미 stall된 read
  뒤 same-word write가 들어오는 경우도 검사했다.
- Engine 실제 bank 경로: 한 cycle의 **64+16+16=96B durable commit**, 이어 **64B IB
  read + 16B+16B write**의 동시 수락. Fixture 총 OCM payload=128B, durable write=128B.
- 기존 0x1010+4096B: **2 segment / 65 raw beat / 128 compact masked commit / 134
  no-stall simulation cycle**. Dense/compact contiguous 4KiB는 1 segment/1 default
  Get/64 beats. maxGet=128은 1 segment/32 Gets/64 beats였다.
- FinishWriter 직후 held Invalidate는 실제 fire/성공 ACK했다. WB는 최신 full/disabled
  동안 무예약으로 보존됐고 복구 후 admission/done 한 번, consume 뒤 free=8192,
  reserved/buffered/entry=0이었다. 실제 outstanding reader/consumer가 있으면 command는
  계속 대기했다. 같은-cycle Release/ingress, duplicate fill, 네 chunk 뒤 다섯 번째
  차단, 독립 source stall과 dual-sink exactly-once의 기존 회귀도 이번에 통과했다.

## Full build / 미연결 범위

전체 compile은 35 main Scala source를 시도한 뒤 다음 **기존 오류 4건**으로 실패했다.
DMA 선별 compile과 테스트 성공은 전체 build 성공과 별개다. 해당 파일은 수정하지
않았으며 다른 non-DMA regression을 통과한 것으로 보고하지 않는다.

```text
EdgeNPUTop.scala:8   not found: type MacUnit
EdgeNPUTop.scala:9   not found: type MXU_16
EdgeNPUTop.scala:10  not found: type DataOrchUnit_16
npu/core/Sequencer.scala:28  value out_enable is not a member of ...
```

실제 TL/DRAM burst IP, full output DMA writer, 실제 NB/DRAM phase1 writer 및
physical URAM/ECC/bank timing은 후속 연결 대상이다. Norm phase1/output adapter의
1 transaction/result 슬롯은 입력 backpressure를 제공하지만 sustained end-to-end
96B/cycle을 보장하지 않는다. Unaligned fill의 두 masked commit이나 same-bank
경합에서도 지속 96B/cycle을 주장하지 않는다. Physical Fmax는 측정하지 않았다.

최종 HEAD도 `41d0d8bb1b62ae5334cd7cef80fd85170bf6e985`다. Push/PR은 수행하지 않았다.
