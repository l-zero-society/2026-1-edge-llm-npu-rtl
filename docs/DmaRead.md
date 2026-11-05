# DMA read integration contract

`npu.dma.DmaReadEngine` is a standalone production RTL block. The checkout has
no existing DMA AG, DMA arbiter, DRAM read transport or IB backing SRAM to reuse.
`IbBurstReader` is production RTL; the DRAM/TL transport and IB backing store in
`DmaRead_Test.scala` are **testbench models only**. Passing these tests does not
validate an actual TileLink IP.

No changes to ComputeUnit, UB/WB controllers, QB/FB controllers or RF are needed
to compile/test this block. Existing OCM write interfaces are not lane-aware;
they must be connected by their owners to the typed `memory` ports. Wiring a
partial beat directly to an existing unconditional 64B write would be incorrect.
Instruction decoding, SW ABI, bank swapping, output DMA writes and the central
scheduler remain outside this block.

## Configuration and logical traversal

`config` accepts a `ReadStreamConfig` for Input, Weight1, Weight2, Quant, Freq or
NormSpill. Each stream owns independent base, row/pass/tile/within-tile cursors;
both weight streams may feed WB. Address is:

```
base + row*rowStride + pass*passStride + tile*tileStride + withinTile
```

Loop order is row -> pass -> tile -> bytes. The final tile of every pass uses
`tailBytes`; other tiles use `tileBytes`. All bases/strides/payloads are multiples
of 16B. Payloads and tiles are 16..4096B. Strides describe the actual tiled or
transposed memory layout; there is no second IB traversal counter. Counts are
strictly positive; the caller must provide addresses without 64-bit overflow.

| Supply | Typed configuration |
| --- | --- |
| GEMM input STREAM | rows=M rows, passes=required N/phase passes, rowStride=input row stride, passStride=0, tile=K |
| GEMM input LOCAL_ROW_CACHE | rows=M rows, passes=1, stopAtRowEnd=true; request once on each new-row event |
| Weight STREAM | rows=M repeats, rowStride=0, passes=N groups, passStride=weight N stride, tile=K |
| Weight local cache | rows=1, passes=N groups, tile=K; supply the unique working set once |
| Dense INT8 | tileBytes=256, tileStride=physical tile spacing |
| Compact input | tileBytes=16, tileStride=physical compact tile spacing |
| Linear / VPU direct / Quant / Freq / NormSpill | base includes supplied offset; explicit tiles, tail, row/pass repeats and strides |

The upper layer chooses `supplyMode` (STREAM, LOCAL_ROW_CACHE or
LOCAL_WEIGHT_CACHE). The engine normalizes LOCAL_ROW_CACHE to passes=1 and
stopAtRowEnd=true, and LOCAL_WEIGHT_CACHE to rows=1. Thus callers may keep
the logical STREAM counts when choosing a cache mode; the unique row/working
set is supplied once. For weights, N is the pass dimension and M is the row
repeat dimension with rowStride=0. Other streams use STREAM with explicit counts.
For fusion, the cached WB working-set size is **W1 unique bytes + W2 unique
bytes**. W1 and W2 configs/cursors remain separate. `refill.stream` and
`refill.phase` explicitly select scheduler phase/block events in the existing
output-group order. No physical burst count selects a phase. Input STREAM passes
must include the externally required W2 input supply; local row cache supplies
the unique row once and UB replays it. DMA does not implement UB chunk replay.
QB/FB payload length is supplied explicitly, independent of their 64B/32B compute
read units. The table defines hardware setup, not a newly assigned SW ABI.

`refill` carries target (UB/WB/QB/FB/NB), stream, phase, contextId, epoch,
refillId, logical destinationOffset and payloadBytes (maximum chunk, <=4096B).
It stops at the requested chunk length, stream end, or configured row boundary.
Multiple refills continue the same stream cursor. The cursor advances exactly
once when a segment is accepted into a source reservation, observable at
`acceptedPlan`; backend request, return and commit happen later. A source request
is latched and stable even if backend ready remains low. Stream exhaustion blocks
further requests until reconfiguration. A failed IB-only resolution leaves the
failed segment cursor unchanged and returns `done.error` with committed bytes.

One logical refill is reserved per target; one target at a time may use a stream.
Segments to a target commit in order. Plans split at tile/stride/repeat boundaries,
4KiB pages, mappings, tails and `maxSegmentBytes`. Tile boundaries may split even
when adjacent tiles are contiguous. `memoryChunkLast` occurs only at the logical
chunk end; `memoryStreamLast` only at the stream end. `destinationOffset` advances
by delivered payload bytes, not raw bus word sizes.

## Mappings and fill-through

`mapping` installs/replaces a region slot with canonical and IB 4KiB-aligned
bases, pageCount, contextId and epoch. The default prototype has two entries,
four pages per entry; `DmaReadParams` changes these elaboration-time bounds.
Separate slots support scattered regions. Physical IB regions must not alias;
canonical regions in one context/epoch must not overlap. There is no replacement
policy, TLB or instruction-level address translation.

Mapping **and** stream config writes are accepted only at `drained`: all approved
refills, source reservations, return sinks and completion handshakes have finished.
The caller must drain other users of the same IB before replacing a region.
All mapping metadata used by approved requests remains fixed until completion.
Updating a slot invalidates its coverage. No outside writer may change mapped IB
storage without a drained mapping update to invalidate its coverage.

For an in-range address, IB address is `ibBase + canonical - canonicalBase`;
the original page offset is preserved. Validity uses a per-page bitmap with one
bit per 16B lane, including separate context/epoch mapping tags. Every lane of a
candidate segment must be committed to hit; partial coverage conservatively
misses for that entire candidate. Repeated writes OR the same coverage bits and
cannot make unfilled bytes valid. Empty pages, gaps and old epochs never hit.

Out-of-region misses read DRAM and deliver only OCM data. In-region misses read
DRAM and deliver both OCM and **actual** IB write data, starting with the first
read. `fill` is a stable ready/valid port with identity, physical 64B word address,
512b raw data and a four-bit 16B lane mask in the **original word lanes**.
`fill.ready` acknowledges an actual durable write commit. A backend that queues
writes must retain ready low until that particular write has committed; ready
must be able to acknowledge the held valid beat without requiring an earlier
ready/valid request transfer. This deliberately makes acceptance and commit one
event. Coverage changes only on that event. Padding and unselected lanes must
not be written. A discontinuous next segment translates its own canonical
address; it does not append to the previous physical fill address.

`ibOnly` permits only committed mapped data. An invalid/unmapped candidate
returns an error completion; it never invents a DRAM source. This prototype
populates coverage through this fill port, so externally preloaded IB data must
first acquire coverage through a supported fill or a future explicit committed
coverage-loading extension (no unverified valid-bit input is provided).

## Backend ports and response adaptation

Connect the future DRAM/TL IP at `engine.io.dram`. Connect `engine.io.ib` to
`IbBurstReader.io.burst`, then attach SRAM at `wordRead` / `wordResponse`.
Connect `engine.io.fill` to the IB write/commit adapter. `IbReadFillArbiter`
provides a conservative single-port integration: connect its `read` to the
burst reader's `wordRead`, its `fill` to the engine's fill, and its two backing
outputs to the physical adapter. It grants at most one backing command per
cycle, locks a stalled selection, and alternates when both request. A physically
banked backend may replace it with bank-aware grants. The suite exercises both
independent backing ports and this shared-port arbiter; it does not validate a
specific physical banking implementation.

Both sources accept the same `ReadBurstRequest(plan)` exact-range contract:
read only `[address,address+payloadBytes)`. A 16B-aligned payload is not
automatically a legal single TL Get. The future TL adapter must split it into
legal naturally aligned power-of-two requests without over-read. The test model
supports 16/32/64B Gets: `0x1030 + 32B` becomes two 16B Gets. A raw word may
include poison in unselected lanes, but the transport must not access protected
or unallocated lanes on behalf of this request. IB `wordRead.laneMask` expresses
the same permission requirement to a lane/bank-aware backend.

`ReadBurstResponse` carries latched request identity, raw aligned 512b data,
payloadOffset, firstLane, laneCount and segmentLast. The adapter must return
payload sequentially, with 1..4 lanes inside the current 64B word. Responses may
split a word further (e.g. at a TL Get boundary). `segmentLast` means the entire
DMA backend segment, **not** TL Get last. Identity, contiguous offsets, exact
length and last are checked by RTL assertions. Backends must hold all response
fields stable while valid && !ready. Transport exceptions are not part of this
prototype interface and must be handled before presenting a successful response.

The OCM adapter moves firstLane to lane 0, zeroes inactive lanes, and emits only
0001/0011/0111/1111. Raw lane 3's 16B becomes output lane 0 with mask 0001.
OCM consumers append `popcount(mask)*16B`. They must not infer an offset from IB
fill masks. `memoryContextId` aliases `identity.contextId` in the typed bundle
(the complete identity also preserves target, epoch and refillId).

DRAM and IB have separate issue reservations and return datapaths. Different
targets may both accept a 64B beat in the same cycle (128B total); neither path
uses a common return register. IB word reads are pipelined using a metadata FIFO.
For fill-through, each response tracks OCM and IB sink acceptance independently;
one sink may accept early without receiving duplicate data while the other
stalls. OCM last marks its own final payload; `done` becomes valid only when all
required OCM and IB commits finish. Completion is itself stable ready/valid and
reserves the target until accepted. No global compute stall controls DMA.

## Running verification

```
make dma-read-test RTL_SBT=sbt
make dma-read-compile RTL_SBT=sbt
make production-compile RTL_SBT=sbt
make param-ocm-test RTL_SBT=sbt
git diff --check
```

The DMA suite uses address-dependent DRAM bytes, a byte-addressed IB backing
store updated only on write commit, independently constructed logical byte
traces, poison lanes, deterministic independent backpressure and timeouts.
It includes alignment/tails, GEMM rewinds/strides, W1/W2 phase events, compact
row-cache versus STREAM, linear auxiliary streams, fill/hit/epoch/partial-page
cases, source transitions, IB-only errors, target reservation, and concurrent
DRAM/IB full-width return checks. Results and any baseline failures are recorded
in `reports/dma-read-validation.md` after execution.
