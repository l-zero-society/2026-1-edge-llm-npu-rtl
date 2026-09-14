# ComputeUnit E2E regression

## Metadata contract

`direct_row_change_update`가 추가된 이유는 기존 VPU1 DIRECT 경로가 TPU metadata만
선택하여 direct beat의 row-change를 항상 버렸고, ComputeUnit의 VPU2 direct UB/NB
경로에도 metadata 입력이 없었기 때문이다.

- TPU mode: `TPU.out_meta.row_change_update`를 VPU1 data와 같은 7 enabled-edge
  pipeline으로 전달한다. M-group마다 N-tile 0의 row 0에서 한 번만 assert된다.
- DIRECT mode: Central Control이 accepted UB/WB 또는 NB beat와 함께
  `direct_row_change_update`를 공급한다. VPU1 DIRECT에서는 7 enabled edge 뒤 matching
  output과 함께 나오며, VPU2 direct에서는 accepted input과 함께 metadata FIFO에
  저장된다.
- `stall` edge는 latency와 stream counter에 포함되지 않는다. Metadata output은 matching
  `out_valid` 없이 assert될 수 없다.
- DISTRIBUTED Normalizer의 vector boundary는 `logical_vector_length`로 생성한다.
  Row-change는 phase1/phase2 beat에 붙는 metadata일 뿐 boundary를 바꾸지 않는다.

## Functional cases

| Case | Shape/path | Numerical golden | Fixed seed |
| --- | --- | --- | ---: |
| Multi-tile GEMM | M=32, K=32, N=32; 2 M-groups × 2 K-tiles × 2 N-tiles | Scala `Y[m,n] = sum(X[m,k] * W[n,k])`; sparse signed W | `0x41a2` |
| Transposed GEMM | M=16, K=16, N=16; TR1+TR2 enabled | Same independent GEMM golden | `0x41a3` |
| TPU fusion ADD | M=16, K=16, N=16; TPU → QuantAct → GPALU → COMPUTE | Requantized INT8 GEMM row + one-cycle VB response; 16 VB requests, randomized stalls | `0x96f1` |
| GEMV compact | M=1, K=32, N=32; ZP input; compact and physical output variants | Independent dot product for both N tiles | `0x52b1`, `0x52b2` |
| VPU1 DIRECT | 96 accepted beats over VB/COMPUTE/VPU2 routes | Signed `A+B` followed by identity activation LUT | `0x63c4` |
| VPU1 → VPU2 | DISTRIBUTED RMSNorm N=30, LayerNorm N=48 | Independent Scala fixed-point statistics/LUT model | `0x74d1`, `0x74d2` |
| UB/NB → VPU2 | UB RMSNorm N=30, NB LayerNorm N=48 | Same fixed-point golden; N=30 uses two nonzero padding sentinels excluded from statistics | `0x85e1`, `0x85e2` |

The N=30 case carries 14 real lanes and 2 padded lanes on its last physical beat. The
padding sentinel values are processed in phase2 but excluded from phase1 statistics, so
the test detects an incorrect statistics mask. N=48 contains a true middle beat.

The test-only `ComputeUnitE2EHarness` uses `chiseltest.experimental.expose` to observe TPU,
VPU1, and Normalizer metadata. Production ComputeUnit receives no test/debug output port.

## Commands and results

Executed in the required order on 2026-09-12:

| Command | Result |
| --- | --- |
| `make production-compile` | PASS, 19 production Scala sources |
| `make tpu-test` | PASS, 4/4 |
| `make vpu1-tests` | PASS, 9/9 |
| `make norm-distributed-test` | PASS, 5/5 |
| `make compute-unit-test` | PASS, 1/1 |
| `make compute-fusion-test` | PASS, 1/1 |
| `make compute-e2e-test` | PASS, 6/6 |
| `make compute-regression` | PASS baseline, 40 unique tests; 46 executions including repeated QuantAct |
| `make compute-e2e-report` | PASS after fusion addition, 41/41 current test results |
| `git diff --check` | PASS |

`make compute-e2e-test` and `make compute-regression` generate:

- `reports/compute-test-results.csv`: machine-readable test case, status, duration, timestamp.
- `reports/compute-test-results.svg`: standalone duration/PASS visualization.

The report is regenerated from `target/test-reports/TEST-*.xml` by
`scripts/render_compute_test_results.py`.
