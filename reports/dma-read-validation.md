# DMA Arbiter 리뷰 후속 수정 검증 — 2026-11-08 Asia/Seoul

실제 시작 HEAD: `c3d43201bb5acc58e845fc4bd068ba47073a4cea`, branch
`feat/tpu-rocc-driver`. 작업 트리는 깨끗했다. 상위 경로와 저장소의 적용 가능한
AGENTS.md는 발견되지 않았다. Reset/push/PR 없이 기존 구현을 수정했다.
UB/WB/QB/FB/NB controller, RF, ComputeUnit, SW ABI, 실제 DRAM/TL IP와 output DMA
writer는 수정하지 않았다. Scala 2.13.12 / Chisel 6.7.0 / chiseltest 6.0.0 /
ScalaTest 3.2.16, sbt 1.12.6 / Java 26.0.2.1 환경이다.

## 수정 전 재현

제공된 원문을 `src/test/scala/ReviewProbe.scala`에 먼저 저장하고 다음 명령을
실행했다. 긴 기존 baseline suite는 수정 전에 반복하지 않았다.

```sh
sbt 'set Compile / unmanagedSources ~= (_.filter(_.getPath.contains("/npu/dma/")))' \
  'set Test / unmanagedSources ~= (_.filter(f => Set("DmaRead_Test.scala","ReviewProbe.scala").contains(f.getName)))' \
  'testOnly npu.dma.ReviewProbe'
```

**exit 1, 0 PASS / 2 FAIL / 0 skipped.** 첫 테스트는 32 cycle 동안 WB done이
없었다. 둘째는 닫힌 writer에 commit되어 IbPageTable assertion이 발생했다.
원본 실행은 [dma-review-before.log](dma-review-before.log)에 보존했다.
최초 sandbox 실행은 `~/.sbt/boot/sbt.boot.lock` 접근 거부로 launcher 단계에서
실패했으며, 캐시 접근 권한을 얻어 위 실제 재현을 실행했다. 이 launcher 실패를
RTL 테스트 결과에 합산하지 않는다.

## 원인과 수정

1. **Release와 독립 refill 교착:** 기존 wrapper가 모든 pageCommand에 신규
   ingress/admission hold를 적용하고 scheduler의 모든 OCM entry drain을 기다렸다.
   Release는 lease 변경만 하므로 fence를 해당 context/epoch/logicalId의 staged,
   active, completed OCM 참조와 page의 approved reader로 좁혔다. 무관한 ingress,
   staged admission, dispatch, OCM consume는 계속 진행한다. Release와 같은 cycle의
   새 matching ingress는 대기하며, 기존 staged old consumer는 먼저 끝낸다.
   identity 단위로 보수적으로 보호하므로 같은 논리 object의 다른 page도 기다릴
   수 있다. Allocate/Invalidate/Rebind의 전체 drain, generation, writer completion,
   alias/lifetime 검사는 유지했다. 전체 drained를 강제로 true로 만들지 않았다.
2. **Publication/close 사이 중복 fill:** 기존 `!hit && writerOpen`은 IB lease가
   없는 valid page까지 fill 대상으로 잡았다. 이제 `!pageValid && writerOpen`이
   필요하다. `consumers=0` 할당도 그대로 합법이며, published page의 readable DRAM
   fallback은 `fill=false`로 OCM에만 공급한다. 추가 대기 cycle, assertion 삭제,
   강제 lease 부여 없이 writer close와 같은 cycle의 dispatch도 안전하다.
3. **미예약 held admission:** 기존 locked는 최신 full/enabled/credit을 우회했다.
   매 cycle eligibility를 재검사하고 fire 전 부적격 target은 staged payload를
   보존한 채 선택에서 제외한다. 다른 eligible target은 진행한다. 이 내부 offer는
   eligibility-qualified Decoupled이며, eligible stall 동안 payload를 유지한다.
   Scheduler와 engine은 동일 handshake를 사용한다. 유일한 예약/RR advance는
   engine.refill.fire이다. 이미 fire한 continuation은 full/hungry/enable 변화와
   독립적으로 기존 예약을 사용한다.
4. **UB/WB 실제 용량:** System/Scheduler 통합 기본 profile은 UB/WB 각각
   16384B·4 chunk entries(CWC, PLC0/1/2), QB/FB/NB는 기존 prototype 8192B·2다.
   per-target capacity와 ring wrap을 적용하고 IO counter 폭만 최대값을 사용한다.
   `DmaSchedulerParams()`의 명시적 8192B/2-entry 소형 테스트 profile도 유지했다.

Credit 소유자는 scheduler 하나다. Refill.fire에서 4096B+entry 1개 예약,
OCM payload accept에서 reserve→buffered, done ACK에서 unused reserve만 해제,
정상 consume에서 buffered/entry 반환, error는 matching discardCommit 후 반환한다.
Release 자체가 OCM credit을 해제하지 않는다.

## 회귀 구성

`dma-arbiter-test`는 `ReviewProbe.scala`를 파일 필터와 명시적 testOnly 목록에
추가했다. 원문 두 probe는 다음 정상 driver/scoreboard로 강화했다.

- WB 완료 → UB/WB consume → Release ACK가 timeout 내 각각 한 번 발생한다.
  PageCommand.valid는 handshake에서만 내리고 ACK도 검사한다.
- 두 OCM의 독립 기대 byte trace, durable IB write 정확히 1회/64B,
  두 번째 accepted plan.fill=false, generation=1/coverage=0xf 불변을 검사한다.
- Release와 새 matching/unrelated ingress의 같은-cycle 경합을 검사한다.
  Matching 요청은 handshake 전 대기 후 invalid IB-only 오류를 명시적으로 받으며,
  무관한 WB는 진행한다. 어떠한 요청도 cancel하지 않는다.
- UB/WB 각각 네 4096B refill을 consume 없이 보유하고 다섯 번째는 차단한다.
  UB 소비가 WB credit을 반환하지 않으며 각 target 하나 소비 후 정확히 한 번
  새 admission한다. Aux capacity는 8192B로 남는다.

기존 hold 단위 테스트는 full/disabled에서도 예약되던 잘못된 기대를 제거했다.
Full과 disabled를 따로 검사하고, 다른 target 진행/복구 후 원래 identity의
단 한 번 예약을 검사한다. 기존 4096B free 경계, continuation full 무시,
consume+commit 동시 accounting, staged old-consumer Release, partial publication,
unaligned repacking, dual-sink exactly-once, retain/rebind 회귀는 유지한다.

## 중간 집중 실행

수정 중 `ReviewProbe`와 `DmaSourceSchedulerTest` 집중 실행은 exit 1,
6 PASS / 1 FAIL이었다. Source/admission 4개, 중복 fill 및 UB/WB capacity 2개는
통과했다. Release 테스트가 호출한 consume helper 내부 clock에서 command가
실제로 handshake했는데 driver가 이를 세지 않아 commands=0으로 실패했다.
RTL 교착을 통과로 처리한 것이 아니며, consume 동안에도 모든 clock의 handshake를
관찰하도록 정상 driver를 고쳤다. 두 번째 payload와 ACK를 임의 cycle 지연으로
회피하지 않았다. [집중 실행 log](dma-review-focused.log)에 실패를 보존했다.
이 중간 숫자는 최종 pass 집계와 합산하지 않는다.

## 최종 실행

소스를 고정한 뒤 아래 명령을 실제 실행했다. 최종 **5 suite, 40 PASS /
0 FAIL / 0 errors / 0 skipped**다. 과거 36 PASS나 중간 실행 결과를 재사용하지 않았다.

| 명령 | 실제 exit / 결과 |
| --- | --- |
| `make -j1 dma-read-test dma-read-compile dma-arbiter-test RTL_SBT=sbt` | **0**; AG 18 + Arbiter 관련 22 PASS, DMA compile PASS |
| `sbt 'Test / compile'` | **1**; main compile의 기존 top-level 오류 4건. 신규 DMA 오류는 보고되지 않음 |
| `git diff --check` | **0**, PASS |

| 최종 suite | PASS | FAIL | errors | skipped | suite 시간 |
| --- | ---: | ---: | ---: | ---: | ---: |
| `DmaReadTest` | 18 | 0 | 0 | 0 | 761.013s |
| `DmaSourceSchedulerTest` | 4 | 0 | 0 | 0 | 4.303s |
| `DmaReadArbiterTest` | 9 | 0 | 0 | 0 | 737.506s |
| `IbPageLifecycleTest` | 5 | 0 | 0 | 0 | 342.501s |
| `ReviewProbe` | 4 | 0 | 0 | 0 | 445.650s |

Sbt 프로세스는 순차 실행했다. 한 sbt 내부 suite들은 병행 실행되므로 위 시간을
합쳐 wall time으로 해석하지 않는다. 테스트 결과 XML의 모든 timestamp는 이번
2026-11-08 실행이다. 고정한 main DMA 9개 + test 4개 source SHA256이 전체 실행
후에도 동일함을 확인했다. [실제 runner log](dma-review-validation.log),
[XML 기반 집계·case 이름·hash](dma-review-summary.json),
[전체 compile log](dma-review-full-compile.log)에 근거를 보존했다.
Console log의 줄 끝 whitespace만 정규화했다.

최종 ReviewProbe에서 UB와 WB 각각 16384B/4 entries를 실제로 채웠고,
다섯 번째 요청은 staged 상태에서 예약 0B로 대기했다. 한 target의 4096B 소비는
그 target의 다음 요청만 한 번 승인했다. 마지막 consume 후 각각 free=16384B,
aux targets는 free=8192B였다. Published/unleased 64B page는 두 OCM에 정확한
byte trace를 전달하면서 IB durable write는 1회/64B만 발생했다. 두 번째 plan은
fill=false, coverage=0xf와 generation=1을 유지했다. Release 명령/ACK와 두
refill done은 정상 driver에서 각각 한 번이었다. 기존 staged old-consumer
Release 회귀도 통과했다.

기존 회귀의 이번 측정: 0x1010+4096B는 4080/16B 두 segment, 65 raw beats,
128 compact masked commits, no-stall 134 simulation cycles다. maxGet=128의
aligned 4096B는 1 segment/32 Gets/64 beats/1 chunk last였다. System 독립 port
profile에서 dual-source accept 1 cycle과 simultaneous full-beat 64 cycles를
관찰했다. 이는 해당 simulation profile 결과이며 물리 timing 보장이 아니다.
Output→input retain/rebind의 A/B 반복 전환도 DRAM 재fill 없이 통과했다.

전체 compile 실패는 다음 기존 4건으로 한정됐다. 무관한 top-level 파일은 수정하지
않았다. 전체 build나 나머지 non-DMA regression이 통과했다고 주장하지 않는다.

```text
EdgeNPUTop.scala:8   not found: type MacUnit
EdgeNPUTop.scala:9   not found: type MXU_16
EdgeNPUTop.scala:10  not found: type DataOrchUnit_16
npu/core/Sequencer.scala:28  value out_enable is not a member of ...
```

최종 HEAD도 `c3d43201bb5acc58e845fc4bd068ba47073a4cea`다. Push/PR은 수행하지 않았다.

## 이번 변경 파일과 연결 경계

| 파일 | 후속 수정 |
| --- | --- |
| `src/main/scala/npu/dma/DmaReadEngine.scala` | Release identity별 active fence, 독립 refill 허용, published page fill 금지 |
| `src/main/scala/npu/dma/DmaReadScheduler.scala` | scoped completed ledger fence, eligible held admission, target별 용량/entry/ring limit |
| `src/main/scala/npu/dma/DmaReadSystem.scala` | Release/파괴적 control hold 분리, UB/WB integrated 기본 profile |
| `src/main/scala/npu/dma/IbPageTable.scala` | Release의 reader/동시 acquire 검사; destructive writer/global fence 유지 |
| `src/test/scala/DmaReadScheduler_Test.scala` | full와 disabled held offer의 잘못된 기대 수정 |
| `src/test/scala/ReviewProbe.scala` | 원문 재현을 강화한 네 개의 정식 regression |
| `Makefile` | ReviewProbe 파일과 suite를 dma-arbiter-test에 명시 |
| `docs/DmaRead.md`, 이 보고서 및 dma-review-* 결과물 | 실제 계약, 실행 근거와 source hash |

새 controller/ABI port는 추가하지 않았다. 기존 `requests/status/consume/discardCommit`,
`pageCommand/pageResult`, `producerWrite/producerResult`, `nextReadRequest/permit/acceptedPlan`
계약과 소유자를 재사용한다. Target별 설정만 elaboration parameter로 확장했다.
실제 DRAM/TL은 `dram.request/response`, IB backend는 `wordRead/wordResponse/fill`에
후속 연결한다. `fill.ready`는 durable commit이며 producer input acceptance와 다르다.
실제 IP, 물리 SRAM bank timing, 합성 Fmax, 타 팀 OCM/RF/compute 통합은 검증하지
않았고, 이 수정으로 새로운 64B/128B timing 보장을 주장하지 않는다.
