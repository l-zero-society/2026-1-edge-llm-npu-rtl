# VPU1 QuantAct / GPALU 인터페이스

## 데이터 경로

- TPU: `INT32 → QuantAct → INT8 → GPALU(+ VB INT8) → INT8`
- DIRECT: `UB INT8 + WB INT8 → GPALU forced ADD → signed INT10 → QuantAct LUT → INT8`

DIRECT는 `f(X+Y)`만 수행한다. GPALU는 `alu_mode`와 `out_shift`를 무시하며,
QuantAct는 qparam, `act_mask`, `fusion_second`를 무시하고 activation을 강제한다.
DIRECT에서는 QB request가 발생하지 않는다. 두 경로가 lane당 하나의 LUT를 공유한다.

`VPU1Control.scala`에 input mode(TPU=0, DIRECT=1)와 output route
(BLOCK=0, VB=1, VPU2=2, COMPUTE=3)를 각각 정의한다.
출력 목적지는 입력 mode와 독립적이다.

## 연산 및 포트

GPALU의 `in_vec_a`, `in_vec_b`는 signed INT8이다. TPU에서는 BYPASS/ADD/MUL
결과에 arithmetic `out_shift`(5bit)를 적용한 뒤 [-128,127]로 포화시킨다.
`alu_alert`는 해당 출력 beat의 saturation이며 MUL에도 적용한다.
DIRECT는 [-256,254]의 ADD 결과를 signed INT10으로 보존한다.
`out_tpu_valid`와 `out_direct_valid`는 상호 배타적이다.

QuantAct 입력은 `in_tpu: Vec(16, SInt(32.W))`,
`in_direct: Vec(16, SInt(10.W))`, 공통 `in_valid`이다.
TPU requant 공식은 `((input - zeroPoint) * multiplier) >> shift`이다.
qparam은 두 mode에서 동일한 4B `UInt32` 형식만 사용한다.

| 필드 | 비트 | 해석 |
| --- | --- | --- |
| multiplier | 31:16 | unsigned 16bit |
| reserved | 15:13 | 사용하지 않음 |
| shift | 12:8 | unsigned 5bit |
| zeroPoint | 7:0 | signed INT8 |

- PER_MATRIX: descriptor의 `matrix_param` 4B 하나를 16 lane에 broadcast하며 QB를 읽지 않는다.
- PER_CHANNEL: lane마다 4B, 총 `16 × 4B = 64B`를 QB에서 한 번에 읽는다.
- DIRECT: qparam을 완전히 무시하며 QB를 읽지 않는다.

N이 16의 배수가 아니면 compiler가 마지막 64B block의 남은 qparam을 채운다.
하드웨어는 partial QB transaction을 만들지 않으며 기존 output mask가 invalid lane을 버린다.

`act_mask(0)`는 첫 GEMM, `act_mask(1)`은 두 번째 GEMM에 적용하며
`fusion_second`로 선택한다. Activation OFF는 signed INT8 saturation,
ON은 signed INT10 saturation 후 `index + 512` 주소로 LUT를 읽는다.
-512/0/511은 각각 주소 0/512/1023에 대응한다.
QuantAct의 `out_vec`와 LUT write data는 기존 버스 형식인 UInt(8.W)를 유지하며,
**signed INT8의 2의 보수 비트 패턴**을 전달한다. GPALU 연결 시 `.asSInt`를 사용한다.

## 시간 및 stall 계약

- GPALU: 3개의 stall 없는 clock edge 후 출력.
- QuantAct: 4개의 stall 없는 clock edge 후 출력.
- 두 연결 경로 모두 7개의 stall 없는 clock edge 후 출력, 이후 16 elements/cycle.
- `stall` 동안 입력을 소비하지 않으며 output valid는 false이다. 입력 공급자와 출력
  소비자 모두 같은 global stall을 따라야 한다.
- LUT의 동기 read response는 stall 첫 cycle에도 도착할 수 있다. QuantAct는 이를
  보관하고 stall 해제 시 한 번만 전달한다.
- `out_lookahead`는 QuantAct 출력 1 cycle 전에 발생한다. 이 신호로 VB를 읽고
  다음 cycle의 VB response를 GPALU에 바로 연결한다. operand2에 추가 4-cycle delay를
  넣지 않는다. VB response도 stall 동안 보존해야 한다.
- `busy`는 stall로 가려진 출력과 보관 중인 LUT response까지 포함한다.
  **두 모듈의 busy가 모두 false인 뒤** input mode와 output route를 변경한다.
  ALU 설정과 fusion 설정도 operation 동안 유지한다.

PER_CHANNEL은 최초 QB line을 prefetch하고, 매 16개의 accepted full-lane row마다
shadow를 active로 옮긴다. Tile의 row0에서 다음 line을 요청한다. Bubble/stall은 row를
증가시키지 않으며, 이미 요청한 QB response는 stall 중에도 수신한다.
PER_CHANNEL을 벗어나면 scheduler 상태를 무효화한다. `soft_reset`은 QB scheduler만
초기화하므로 datapath drain 후 사용하며, 재설정 전 기존 QB transaction을 완료해야 한다.
`sync_alert`는 partial-lane valid와 누락된 qparam 등 계약 위반을 알린다.

## 테스트 실행

기존 `lzero_rtl_env` Docker 컨테이너에서 실행한다.

```sh
make gpalu-test   # signed ALU / clip / direct 강제 설정 / stall
make quant-test   # requant / fusion mask / QB / LUT 전체 주소 / stall
make vpu1-test    # 두 경로 / VB lookahead / fusion / route / drain
make vpu1-tests   # 위 세 suite를 한 번의 sbt 실행으로 수행
make vpu-stage-test # production VPU1 두 경로 / VPU2 ONLINE RoPE gating
make production-compile # 현재 production VPU/Compute 배선 컴파일
```

로컬 또는 컨테이너 내부 sbt를 직접 쓰려면 `make vpu1-tests RTL_SBT=sbt`로 실행한다.

통합 연결은 `src/test/scala/VPU1Route_Test.scala`의 별도 harness에 있다.
Harness는 busy 중 mode/route 변경 시 `control_alert`를 내고 기존 설정을 유지한다.
첫 GEMM 결과를 mock VB에 저장한 뒤 두 번째 GEMM과 결합하고, 동기 VB response와
LUT response에 stall이 겹치는 경우를 검증한다.

Production `VPU_Stage1`과 `ComputeUnit`도 동일한 고정 경로를 사용한다. `ComputeUnit`은
QB의 512-bit response와 FB의 256-bit response를 별도 포트로 받고 PB에서 quant/RoPE
parameter를 slice하지 않는다. TPU의 `row_change_update`는 VPU1 latency와 Normalizer의
metadata FIFO를 거쳐 실제 RoPE data beat에 맞춰 전달된다.

## VPU2 구성

Production `VPU_Stage2`는 Normalizer 뒤에 RoPE를 연결한다. Normalizer phase 1 출력은
NB로 보내고, phase 2 출력은 RoPE 입력으로 보낸다. Normalizer BYPASS에서는 VPU2 입력이
RoPE로 바로 연결된다.

RoPE는 `norm_layout=ONLINE`일 때만 `rope_en`을 받아 활성화된다.
`norm_layout=DISTRIBUTED`에서는 RoPE를 강제로 bypass하고 FB request를 내지 않는다.
`rope_active`와 상위 `vpu2_rope_active` 포트는 layout gating 이후의 실제 상태를
나타낸다.
