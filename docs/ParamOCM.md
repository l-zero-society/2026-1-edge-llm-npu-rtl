# QB / FB Parameter OCM

## 물리 구조

QB와 FB는 각각 독립된 4KB Ping + 4KB Pong SRAM을 사용한다. DMA write는 둘 다
한 cycle에 64B다. CU read granularity만 다르다.

| Buffer | DMA write | CU read | 4KB bank당 read unit | Ping+Pong |
| --- | ---: | ---: | ---: | ---: |
| QB | 64B | 64B | 64 | 128 units |
| FB | 64B | 32B | 128 | 256 units |

`tensor_read_units`는 CU read 단위로 센다. QB의 1 unit은 64B이고 FB의 1 unit은
32B다. Cache wrap, spill bank 전환, valid-unit counter는 모두 이 논리 단위를 쓴다.
CU request의 synchronous read latency는 1 cycle이다.

FB에서는 하나의 64B physical row를 lower 32B와 upper 32B로 나눈다. CU read address
LSB가 slice를 선택하며 selector도 SRAM latency에 맞춰 1 cycle 지연된다. 따라서 read
순서는 항상 lower, upper다.

## Cache와 spill

Cache mode는 전체 logical tensor를 preload한 후 `shoot`을 받는다. 마지막
`tensor_read_units - 1`에서 0으로 순환하므로 physical padding은 보이지 않는다.

Spill mode는 active 4KB bank를 읽는 동안 다른 bank를 DMA로 채운다. 각 bank에 기록된
logical `bankValidUnits`만 소비하고 마지막 synchronous response가 나온 뒤 bank를
비운다. `impending`은 active bank에 8 unit 이하가 남고 다음 bank가 준비되지 않았을
때 올라간다. Tensor 마지막 bank를 다 읽으면 `tensor_wrap`이 pulse한다.

FB tensor가 홀수 개의 32B unit이면 마지막 64B DMA word의 lower half가 최종 block이고
upper half는 padding이다. `bankValidUnits`는 남은 logical unit과 physical unit 중 작은
값으로 닫히므로 padded upper half는 read data로 반환되지 않는다.

## RoPE 소비 규약

FB response는 `Vec(16, UInt(16.W))`, 즉 32B다. 한 accepted RoPE beat가 8개 frequency를
소비한다.

| Accepted beat | 사용하는 half | 다음 32B request |
| ---: | --- | --- |
| 0 | active[0..7] | O |
| 1 | active[8..15] | X, 다음 block promote |
| 2 | active[0..7] | O |
| 3 | active[8..15] | X, 다음 block promote |

Parity는 wall-clock이 아니라 `allValid && !stall && rope_en`인 accepted beat만 센다.
Bubble과 stall은 half selector를 바꾸지 않는다. 이미 요청한 response는 stall 중에도
shadow에 저장한다. Upper-half completion과 response가 같은 edge면 새 response를
직접 active block으로 promote한다. 이 fetch cadence는 `row_change_update`와 독립적이다.

RoPE는 VPU2의 ONLINE layout에서만 활성화된다. `norm_layout=DISTRIBUTED`이면
`rope_en` 요청과 관계없이 RoPE를 bypass하고 FB request를 발생시키지 않는다.
`vpu2_rope_active`는 이 gating이 반영된 실제 활성 상태를 나타낸다.

검증은 `make param-ocm-test`, `make rope-test`, `make vpu-stage-test`로 실행한다.
