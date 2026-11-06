# DMA Arbiter / IB page publication 검증 — 2026-11-06 Asia/Seoul

작업 시작 branch는 `feat/tpu-rocc-driver`, 실제 HEAD는
`c75da8b5c62927998ab6d676c8d2b9599c3d7909`이었다. Working tree는 깨끗했고,
적용되는 AGENTS.md는 상위 경로와 저장소에서 발견되지 않았다. HEAD reset,
push 또는 PR 생성은 하지 않았다. 연결된 Notion의 최신 2026-11-06 합의를
읽었으며, 이전 v3/v2의 prefix-hit/원본 offset fill보다 이번 계약을 우선했다.

실제 build.sbt: Scala 2.13.12, Chisel 6.7.0, chiseltest 6.0.0,
ScalaTest 3.2.16. sbt 1.12.6 / Homebrew Java 26.0.2.1에서 실행했다.
Sbt 프로세스는 순차 실행했으며 실제 DRAM/TL IP에 의존하지 않는다.

## Baseline과 최종 실행

변경 전 기존 suite를 이번 세션에서 실행했다. 새 baseline XML은
2026-11-06 02:38:13 시작, 600.847초, **18 PASS / 0 FAIL**이다.
별도 `make dma-read-compile RTL_SBT=sbt`는 exit 0이었다.
이전 대화의 18 PASS를 이번 결과로 재사용한 것이 아니다.
원시 집계는 `dma-baseline-summary.json`에 보존했다.

| 실제 실행 명령 | exit / 결과 |
| --- | --- |
| `make -j1 dma-read-test dma-read-compile RTL_SBT=sbt` | 변경 전 baseline: 테스트 XML 18/0, DMA compile 별도 exit 0 확인 |
| `make -j1 dma-read-test dma-read-compile dma-arbiter-test RTL_SBT=sbt` | exit 0; AG 18 PASS + 새 suite 18 PASS, DMA compile PASS |
| `make -j1 dma-read-test dma-read-compile RTL_SBT=sbt` (소스 고정 후 최종 재실행) | exit 0; AG 18 PASS / 0 FAIL, DMA compile PASS |
| `sbt 'Test / compile'` | exit 1; 기존 top-level compile 오류 4건 재확인, 신규 DMA 오류 없음 |
| `git diff --check` | exit 0, PASS |

최종 결과는 **4 suite, 고유 test 36 PASS / 0 FAIL / 0 skipped / 0 errors**다.
마지막 publication guard와 testbench 변경 후 RTL/test source 12개를 SHA256으로
고정했고, 새 suite 및 마지막 AG 재실행 사이에 source가 바뀌지 않았음을 확인했다.

| 최종 suite | PASS | FAIL | skipped | 실제 test 시간 |
| --- | ---: | ---: | ---: | ---: |
| `DmaReadTest` | 18 | 0 | 0 | 730.872s |
| `DmaSourceSchedulerTest` | 4 | 0 | 0 | 3.387s |
| `DmaReadArbiterTest` | 9 | 0 | 0 | 689.038s |
| `IbPageLifecycleTest` | 5 | 0 | 0 | 331.544s |

서로 다른 suite는 sbt 기본 설정으로 병행 실행될 수 있으므로 위 시간의 합을
전체 wall time으로 보고하지 않는다. Sbt 프로세스 자체는 순차 실행했다.
[XML 기반 집계와 source hash](dma-validation-summary.json),
[실제 실행 log](dma-validation-run.log),
[이번 baseline 집계](dma-baseline-summary.json)에 근거를 보존했다.

새 Makefile `dma-arbiter-test`는 아래 파일을 모두 **실제로 컴파일**한다.

- `DmaRead_Test.scala`: 공통 harness/byte backing model과 기존 AG suite
- `DmaReadScheduler_Test.scala`: `DmaSourceSchedulerTest`, `DmaReadArbiterTest`
- `IbPageLifecycle_Test.scala`: `IbPageLifecycleTest`

새 target의 testOnly 목록은 위 새 suite 3개를 명시한다. 기존 `dma-read-test`의
AG suite도 유지한다. 새 파일을 기존 단일-file filter 밖에 방치하지 않았다.

## 변경 파일

| 파일 | 변경 내용 |
| --- | --- |
| `ReadTypes.scala` | logicalId, allocation generation/physical commit tag, page table 크기/IB capacity parameter |
| `IbPageTypes.scala` | page metadata/state/control/result, consumer leases, compact producer request/result |
| `IbPageTable.scala` | overflow/alias/lifetime 검증, unique coverage, full publication, allocate와 retain/rebind 분리 |
| `IbCompactWriter.scala` | 1~2개 파생 masked write의 durable ACK, held-grant fill/output 중재 및 producer adapter |
| `DmaReadEngine.scala` | full-page lookup, compact mapping, 최종 파생 commit 기반 publication, 기존 독립 source/fanout 유지 |
| `DmaReadScheduler.scala` | P0/P1/P2, source별 accepted-only RR/aging, fair admission, 단일 byte/chunk credit owner와 error ledger |
| `DmaReadSystem.scala` | typed OCM/status/consume/discard adapter, producer/control drain fence, engine/IB/scheduler 통합 |
| `DmaRead_Test.scala` | 새 정책으로 기존 회귀 의미 수정, 공통 byte model 공유, 실제 write/reader/admission scoreboard |
| `DmaReadScheduler_Test.scala` | source unit 및 admission/credit/full/producer/deadlock 통합 검증 |
| `IbPageLifecycle_Test.scala` | compact fill/부분 publication 금지/duplicate/gap/output handoff/잘못된 command 검증 |
| `Makefile` | 기존 runner 유지, 명시적 `dma-arbiter-test` 추가 |
| `docs/DmaRead.md` | 현재 port/state/credit/lifecycle 및 성능 제한 계약 |
| `docs/DmaRead-2026-11-05.md` | 이전 계약을 변경 이력으로 보존; 현재 mapping 정책으로 사용하지 않도록 표시 |
| `reports/dma-read-validation.md`, summary JSON 및 실행 log | 이번 명령/실제 결과와 고정 source hash |

RTL 파일 경로는 `src/main/scala/npu/dma/`, test 경로는 `src/test/scala/`다.
기존 `IbBurstReader`, `IbReadFillArbiter`는 수정 없이 재사용했다.
UB/WB/QB/FB/NB controller, RF, ComputeUnit, SW ABI 파일은 변경하지 않았다.

## 확정한 port와 state ownership

`requests[target]`는 5개의 typed pending 요청을 독립적으로 보존한다.
`status`는 enabled/producerReady/needsExternalSupply/demand/impending/hungry/full,
required page mask와 expected generation을 제공한다. Admission은 단일 engine
refill.fire에서 일어나며 source busy와 독립이다. 이후
`nextReadRequest -> schedulePermit -> acceptedPlan -> backend -> commit/done`으로
진행한다. Source별 winner는 최대 하나이고 engine의 기존 source RR은 fallback이다.

- Engine: canonical cursor, target logical refill, sourceBusy/descriptor, response
  identity/routing 및 dual-sink exactly-once를 계속 단독 소유한다.
- Page table: canonicalStart/validBytes/ibPageBase/context/epoch/logicalId/generation,
  writerOpen, consumer mask, keepWeight, reader count, coverage, pageValid를 소유한다.
- Compact writer: 파생 write part만 추적한다. Source 진행 복사본을 만들지 않는다.
- Scheduler: target pending request, admission RR와 OCM reservation/occupancy/chunk
  ledger를 소유한다. Source scheduler는 priority/RR/age만 관리한다.
- Physical IB arbiters: fill/output write 충돌과 선택적 read/write 공유 port 충돌을
  durable ACK/backpressure로 처리한다. Source priority와 별개다.

기본값: 8 page slots, IB 1MiB, max segment 4096B, OCM target당 8192B/entry 2개,
ageLimit 8. Age는 경쟁하는 eligible 후보가 같은 source에서 실제 accept된
opportunity만 세며 source 변경 시 보존, accept 시 reset된다. 자원이 영구 stall된
시간에 대한 latency 보장을 주장하지 않는다. 동일 priority는 source RR,
admission도 별도 RR로 공정하게 고른다.

Credit은 scheduler만 소유한다. Refill.fire 때 보수적 4096B와 entry 1개를 예약한다.
OCM accept byte는 reserved -> buffered로 이동한다. Done ACK는 unused reserve만
해제하며 buffered bytes/entry를 free로 돌리지 않는다. 정상 consume에서만 data를
반환한다. Error entry는 matching `discardCommit`이 실제 rollback을 확인할 때까지
occupancy와 context error를 보존한다. Tail도 free >=4096B admission 기준을 따른다.
Full/hungry/disabled 변화는 이미 admission한 continuation을 중단하지 않는다.

## 새 page 정책과 검증 조건

한 resident chunk는 전체 4KiB page를 점유하며 validBytes는 16..4096B다.
`ibPageBase + canonicalAddress - canonicalStart`로 offset 0부터 compact 저장한다.
Unique 16B coverage를 OR하며 pageValid 전에는 어떤 prefix도 hit하지 않는다.
4096B page의 512B commit 상태는 miss다. 별도 512B tail page가 전부 commit된
후의 mixed-source refill은 허용한다.

PageValid는 전체 unique range와 raw beat의 **마지막 파생 write commit** 이후다.
첫 파생 write에서 마지막 hole이 메워지고 두 번째가 중복 write여도 publication은
두 번째 durable ACK까지 기다린다. Output은 여기에 producer result drain 및 명시적
FinishWriter도 요구한다. Rebind는 generation/data/coverage/valid를 보존하며,
새 Allocate만 fresh generation과 invalidation을 만든다.

| 대표 조건 | 최종 assertion / 실제 측정 |
| --- | --- |
| Aligned dense/compact 4096B | 1 segment, 1 default Get, 64 raw beat |
| Canonical 0x1010 + 4096B | DRAM 4080/16 segment, 4096/64 Get, 65 raw beat; OCM masks 7/63*15/1 |
| 위 compact IB 저장 | 0x8000..0x8fff, 128 masked durable writes; 첫 segment만 완료하면 pageValid=0; no-stall profile 134 cycle |
| maxGet=128 profile | 1 segment, 32 Get, 64 raw beat, chunk last 1회 |
| 미완성 4096B page | 80B/976B 등의 작은 refill과 duplicate를 누적; 512B commit 시점에도 IB read/partial hit 없음 |
| 독립 512B tail page | 완성된 512B만 IB, 다음 nonresident 3584B는 DRAM; 같은 logical identity/last/done |
| Repacking | DRAM offset 0/16/32/48, tails 16/32/48/144, word crossing과 두 번째 write 장기 stall |
| Credit | 4096 경계/tail, entry exhaustion, full 중 continuation, consume+payload 동시 edge, completion backpressure |
| Error | 이미 전달한 512B를 free로 숨기지 않음; wrong discard identity 거부 후 확인된 discard에서만 반환 |
| Producer row | 필요한 모든 page의 valid/generation/lease/identity를 함께 확인하여 admission 전 대기 |
| Handoff | A(input)/B(output) -> B(input)/A(output) -> A(input)/B(output) -> B(input); custom output data를 DRAM 재요청 없이 replay |
| 안전 거부 | old generation, wrong context/logicalId, layout, range/overflow, IB bound/alias, live consumer/reader/weight overwrite |

기대 byte trace는 config/page spec/producer input sequence로 독립 구성한다.
DUT plan은 backend 응답을 만들기 위한 request로만 사용하며 기대 주소 정답으로
복사하지 않는다. Poison padding, byte-addressed IB commit store, ready/valid hold
monitor, exactly-once/byte count, deterministic bubble과 timeout을 사용한다.
Idle don't-care data peeks만 줄였고, 이전 cycle에 stall된 port는 valid가 내려가도
반드시 검사하여 protocol drop 검증을 유지했다.

## 중간 검증에서 발견한 수정

Focused first-miss suite 최초 실행은 1 FAIL이었다. 재할당과 같은 cycle의 이전
pageValid 상태가 writer 자동-close를 발동시켜 새 writerOpen을 덮는 우선순위
문제였다. Command.fire 동안 auto-close를 막았고 해당 focused suite는 1 PASS로
재실행했다. 이 실패를 baseline 오류로 분류하거나 숨기지 않았다.

중간 새 target은 Source 3 / Integration 8 / Lifecycle 4, 합계 15 PASS였다.
이후 queued consumer drain fence, 추가 admission/physical arbitration 검증 및
마지막 파생-write publication guard를 보강했으므로 이 숫자를 최종 결과로
재사용하지 않는다. Negative protocol 사례는 명시적 error return/ready hold를
검사하는 정상 test다. Expected assertion failure를 정상 회귀 failure로 섞지 않았다.

## IP / build / 성능 제한

실제 DRAM/TL IP와 전체 output DMA writer는 미구현이다. DRAM은 기존 64B
expanded-window + 큰 자연 정렬 power-of-two Get mock을 사용한다. Producer
adapter는 IB commit/lifetime 연결만 제공하며 실제 CU output formatting은 후속이다.
물리 SRAM/ECC/bank timing과 합성 후 Fmax는 검증하지 않았다.

Aligned fill은 one-write-per-cycle 직접 경로다. Unaligned crossing raw beat는
두 masked write를 ACK하므로 한 physical write port에서 해당 beat가 두 cycle을
차지한다. 65 raw beat의 예는 128 write다. Cross-beat gather는 구현하지 않았고,
unaligned sustained 64B/cycle 또는 shared-port aggregate 128B/cycle을 주장하지
않는다. 독립 aligned profile의 실제 dual-source accept/full-beat cycle 수는 최종
실행 로그로 보고한다. 이번 system profile은 실제 dual-source 동시 accept 1회,
두 OCM의 64B full beat 동시 수락 64 cycle을 기록했다. 기존 직접 engine profile도
64 cycle을 기록했다. Unaligned fill의 134 cycle은 4096/134 = 약 30.57B/cycle이며
두 segment의 dispatch/completion overhead를 포함한다. 128개 write의 유효 payload
평균은 32B/write다. Shared profile은 충돌 직렬화와 정확성만 확인한다.

전체 `sbt 'Test / compile'`은 실제로 31개 main Scala source를 컴파일하려다
다음 기존 오류 4건으로 exit 1이었다. DMA 선별 compile과 4개 test suite가 통과한
것이며 전체 build 성공을 주장하지 않는다. 해당 top-level 파일들은 수정하지 않았다.

```text
src/main/scala/EdgeNPUTop.scala:8:  not found: type MacUnit
src/main/scala/EdgeNPUTop.scala:9:  not found: type MXU_16
src/main/scala/EdgeNPUTop.scala:10: not found: type DataOrchUnit_16
src/main/scala/npu/core/Sequencer.scala:28: value out_enable is not a member of ...
```

Production 통합 시 OCM은 drained/reset 상태에서 이 credit owner에 연결하고,
이 profile의 occupancy 변경을 memory accept/consume/discard 통지로 일관되게
연결해야 한다. 다른 local writer가 있는 OCM의 occupancy adapter 및 실제
controller/RF port 연결은 해당 소유자의 후속 통합 대상이다. 본 harness는 DMA
write 및 완료 chunk 소비를 모델링하며 실제 controller 구현을 검증하지 않는다.

최종 HEAD는 시작과 동일한 c75da8b5c62927998ab6d676c8d2b9599c3d7909이며,
공유 branch push/PR은 수행하지 않았다.
