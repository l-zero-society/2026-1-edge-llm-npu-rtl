# DMA read burst / merge / preview 검증 — 2026-11-05 (Asia/Seoul)

작업 시작 branch는 `feat/tpu-rocc-driver`, HEAD는 리뷰 기준과 동일한
`184d888095c0c53829bb0d9ad0b66c1fbbfbd548`이었다. 시작 working tree는 깨끗했고,
상위 경로 및 저장소에 적용되는 AGENTS.md는 발견되지 않았다. HEAD reset,
공유 branch push, PR 생성은 하지 않았다.

실제 build.sbt: Scala 2.13.12 / Chisel 6.7.0 / chiseltest 6.0.0 /
ScalaTest 3.2.16. 기존 Makefile의 DMA 선별 runner를 그대로 사용한다.
리뷰 commit의 12개 통과 기록을 이번 실행 결과로 재사용하지 않는다.

## 변경 파일과 유지한 경계

| 파일 | 이번 변경 |
| --- | --- |
| `src/main/scala/npu/dma/ReadTypes.scala` | logical payload와 64B 확장 DRAM fetch, 큰 TL Get / raw word / segment 종료 계약 |
| `src/main/scala/npu/dma/DmaReadEngine.scala` | 연속 tile 병합용 config-time pass 길이 및 byte counter, source 전환 경계, 전체 word 교집합 assertion, target별 live preview와 permit/accept 연결 |
| `src/test/scala/DmaRead_Test.scala` | 4KiB/128B Get profile의 확장 fetch mock, 원래 회귀 검증 및 merge/preview/permit/mixed-source 검증 |
| `docs/DmaRead.md` | fetch와 병합, live candidate, admission/permit/accept, backend 연결 계약 |
| `reports/dma-read-validation.md` | 이번 실행 명령과 결과 |

IbBurstReader와 IbReadFillArbiter의 기존 production 구현을 재사용했다.
UB/WB/QB/FB/NB controller, RF, ComputeUnit, SW ABI, fusion schedule, 기존
Makefile runner는 변경하지 않았다. Demand/hungry/prefetch 및 OCM credit
정책도 추가하지 않았다. Target별 logical refill 1개, source별 segment 1개,
독립 DRAM/IB issue/return, 순차 commit 및 dual-sink exactly-once를 유지한다.

## 실제 실행

| 명령 | 이번 결과 |
| --- | --- |
| `make dma-read-compile RTL_SBT=sbt` | PASS |
| `make -j1 dma-read-test dma-read-compile RTL_SBT=sbt` | **18 PASS / 0 FAIL**, suite 1개 완료, skipped/errors=0; 이어서 DMA compile PASS |
| `sbt 'Test / compile'` | FAIL: 기존 baseline compile 오류 4건 재확인 (아래). DMA suite 실패 수와 별개 |
| `git diff --check` | PASS |

새 suite의 실제 실행 시간은 9분 58초였으며, 위 combined make의 test 단계는
604초였다. 이 실행에서 독립 DRAM/IB full beat를 같은 cycle에 수락한 경우는
64 cycle로 기록되었다. 이전 commit의 숫자가 아닌 이번 실행 로그의 결과다.

DMA test 명령은 기존 runner를 통해 다음과 같이 실행된다.

```sh
sbt \
  'set Compile / unmanagedSources ~= (_.filter(_.getPath.contains("/npu/dma/")))' \
  'set Test / unmanagedSources ~= (_.filter(_.getName == "DmaRead_Test.scala"))' \
  'testOnly npu.dma.DmaReadTest'
```

## 이번 검증의 대표 조건

아래 숫자는 이번 18개 테스트에서 assertion으로 확인한 실제 결과다.

| 시나리오 | 검사할 segment / Get / raw beat |
| --- | --- |
| Aligned dense 16 x 256B | 1 x 4096B segment / 1 x 4096B Get / 64 beat |
| Aligned compact 256 x 16B | 1 x 4096B segment / 1 x 4096B Get / 64 beat |
| 0x1010 + 4096B | 4080B + 16B segments / 4096B + 64B Gets / 65 beat |
| 위 unaligned payload의 유효 data | 48 + 63*64 + 16B, masks 0111 / 63 x 1111 / 0001 |
| 0x1030 + 32B | [0x1000,0x1080) fetch, raw word 2개에서 각 16B, masks 0001 / 0001 |
| 128B maximum Get profile의 aligned 4096B | segment 1개 / Get 32개 / raw beat 64개 / logical chunk last 1개 |
| Mixed 4096B refill | IB 512B -> DRAM 3584B, 같은 identity와 phase, destination offset 96 -> 608, chunk last 및 completion 각각 1회 |

연속 tile의 일반 길이/짧은 tail 검증은 7*144+48=1056B pass를 사용한다.
80B에서 chunk를 끝내고 976B를 이어 공급한 뒤 다음 pass에서 같은 1056B를
rewind한다. 기존 stride jump, page split, W1/W2 독립 cursor, STREAM/local
cache, 48B physical segment 제한과 auxiliary stream byte trace도 유지한다.
Pass 길이는 config 시 계산하며 issue에 divider나 tile별 반복 체인을 넣지 않았다.

DRAM mock은 readable backing window 전체를 64B raw word로 전송한다.
각 Get은 지원 크기 중 가장 큰 자연 정렬 power-of-two인지, expanded window
안에 있는지 검사한다. Get last와 segment last는 별도로 모델링하고 Get 경계에서
word를 쪼개지 않는다. 무효 head/tail에는 poison을 넣고 OCM/IB byte trace와
coverage에서 배제하는지 검사한다. IB byte map은 fill commit handshake에서만
갱신하며, uncommitted lane을 읽으면 실패한다. 모든 대기에 timeout이 있다.

## 확정한 scheduling 연결

1. 상위 admission이 OCM 공간/chunk entry를 예약하고 `refill`에서 stream,
   phase, context/epoch/refill identity를 staging한다. W1/W2는 이 요청으로 지정한다.
2. `nextReadRequest[target]`는 permit 및 source busy와 무관한 live ReadPlan이다.
   진행 중 segment는 다시 광고하지 않고, 완료 후 다음 segment를 광고한다.
   Invalid IB-only는 가짜 DRAM preview 없이 기존 error 경로를 따른다.
3. 외부 Arbiter가 현재 candidate와 `sourceAvailable[DRAM,IB]`를 보고 target별
   `schedulePermit`을 보낸다. 기본 harness는 모두 high이며 테스트에서 제어한다.
4. Permit된 후보끼리 기존 source별 RR이 중재하고 `acceptedPlan[source]`에
   실제 accept를 표시한다. Cursor/offset은 accept에서만 전진한다. Permit 또는
   관찰만으로 backend 요청/coverage 변경을 만들지 않는다.
5. Accept 후 descriptor는 issue 및 필수 sink commit까지 보존한다. Permit을
   낮춰도 이미 승인된 transfer를 취소/정지하지 않는다. Source 예약 공간은
   backend request.ready 및 OCM free credit과 구분한다.

다른 refill의 fill commit으로 대기 후보가 DRAM에서 IB로 바뀔 수 있다.
Arbiter가 pipeline에 판단을 저장한다면 현재 candidate의 identity/source뿐 아니라
주소, 길이, destination offset 등 segment metadata도 재검증해야 한다.
한 logical refill의 continuation은 admission 때 확보한 기존 예약을 사용한다.
새 refill용 full 조건으로 continuation을 막는 policy는 연결하면 안 된다.

다섯 target의 서로 다른 source/identity 동시 preview, permit low의 16-cycle
대기, IB->UB와 DRAM->WB 동시 accept, DRAM request.ready low/busy 동안의
IB 진행, 같은 source의 여러 permit, accepted descriptor stall 안정성,
commit 전후 live source 변경 및 context/epoch mismatch를 검증한다.

## 실제 IP와 전체 build 제한

실제 DRAM/TL IP는 연결하지 않았다. `engine.io.dram`의 logical descriptor를
후속 adapter가 expanded window로 변환해야 한다. IB는 기존
`engine.io.ib` -> `IbBurstReader.io.burst`, `wordRead/wordResponse`,
`engine.io.fill` write/commit 계약을 사용한다. Fill.ready는 실제 commit ACK다.
물리 단일 port는 기존 IbReadFillArbiter로 중재한다. 확장 fetch padding에는
OCM write, IB write 또는 coverage를 부여하지 않는다. 0B 요청은 기존 API와
같이 invalid이며 assertion으로 금지한다.

이 결과는 testbench TL/DRAM emulation과 Chisel RTL 검증이다. 실제 TL IP,
물리 SRAM, 합성 후 timing/대역폭을 검증한 결과가 아니다.
전체 compile을 실제로 재실행한 결과 다음 기존 오류 4건으로 실패했다.

```text
src/main/scala/EdgeNPUTop.scala:8:  not found: type MacUnit
src/main/scala/EdgeNPUTop.scala:9:  not found: type MXU_16
src/main/scala/EdgeNPUTop.scala:10: not found: type DataOrchUnit_16
src/main/scala/npu/core/Sequencer.scala:28: value out_enable is not a member of ...
```

해당 파일들은 이번 범위에서 수정하지 않았으며 전체 build 성공으로 보고하지
않는다. 이번 검증 결과에는 실행하지 않은 다른 suite의 통과 수를 포함하지 않는다.
