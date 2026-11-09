# Read AG, static IB scratchpad and read arbitration

Active prototype contract: **2026-11-09 Asia/Seoul**. SW/compiler chooses operand
OCM cache/spill modes, canonical windows, physical IB page placement and lifetime.
Runtime typed configuration transports that choice; this is not a SW instruction
ABI and there is no automatic IB replacement policy. Controller/RF/ComputeUnit,
real TileLink IP and the complete output/DRAM writer remain outside this module.

## State ownership and interfaces

| Block | Owner |
| --- | --- |
| `GemmReadPattern`, `DirectReadPattern` | Separate per-stream cursor state; common affine-loop helper; configuration, row/pass/tile/within, residual bytes, rewind and exhaustion |
| `ReadAddressGenerator` | Configuration-time pattern selection; forwards only actual accepted segment bytes to its selected cursor |
| `OcmCacheMap` | One static entry per stream (W1/W2 are distinct WB entries), population policy, current UB window/row identity and completion-driven row transitions |
| `DmaReadEngine` | Common segment limits, source slots/descriptors, backend issue, raw response masks, OCM routing and dual-sink exactly-once tracking |
| `IbPageTable` | Physical allocation, context/epoch/generation, writer/consumer/reader lifetime, unique coverage and whole-page publication |
| `NormSpillResolver` | Shared phase1/phase2 local/IB/real-DRAM coordinates; no synthetic DRAM origin |
| `NormPhase1Adapter`, `IbProducerAdapter` | Bounded backpressured transaction/result slots; producer commit routing, not a full Norm/output writer |
| `IbBankWriteAdapter`, `IbReadWriteHazard` | Physical bank conflict and same-word read/write ordering; independent of the read source scheduler |
| `DmaReadScheduler` | Pending requests, admission, one credit owner, priority/RR/aging; no copy of engine sourceBusy or response state |

Boundary configuration ports have a fixed progress order: pageCommand >
normConfig > pattern config > cacheConfig. Concurrent offers hold their payloads
and are accepted once in that order after the existing drain fence; they do not
mutually hold each other and require no cancellation or empty cycle.

No pipeline stage was added between pattern preview, lookup and scheduling.
`ReadPlan` now latches row, rowLastUse, hasNextRow, nextRowBase and nextRowBytes
alongside target/context/epoch/logicalId/refillId/stream/phase, canonical/resolved
address, size, destination offset, generation, fill and logical last tags.
Accepted descriptors stay unchanged through backend stalls and mandatory commits.

Production `DmaReadSystem` uses four bank write ports by default. Its ports are:

- `config`: `ReadStreamConfig` (including `direct` and optional `lastRowBytes=0`
  for the normal final-row length); each active pattern advances on acceptedPlan only.
- `cacheConfig`: `OcmCacheConfig` with target, stream, identity, mappedStartAddr,
  mappedSize, rowBytes, localReuse, rollingRows, pageCount and pageSlots.
- `normConfig`: enable/disable plus T/H/I, actual dramSpillBase, identity and
  assigned page slots/generations. `normReady`, `normExternalBytes`, `normLocalBytes`
  expose producer publication and capacity information.
- Five `requests/status/consume/discardCommit`, memory/done, live nextReadRequest,
  sourceAvailable, schedulePermit/acceptedPlan and admission/credit observability.
- `dram.request/response`, `wordRead/wordResponse`, `bankWrites[4]`.
- Output `producerWrite/producerResult`; `normStore/normStoreResult` and
  `normLocalWrite/normDramWrite` commit adapters for a producer/mock writer.
- Existing pageCommand/pageResult allocation/lifetime API remains available.

`bankedWrites=false` explicitly selects the old single `fill` port through a
locked compatibility merge. `sharedIbPort=true` is supported in that profile with
the existing read/fill arbiter; it is not a four-bank bandwidth configuration.
Existing regression harnesses select this compatibility profile explicitly.
Legacy callers omitting cacheConfig retain per-page STREAM lookup/population from
PageCommand mappings; static production integration configures every active
stream, including local/zero-size entries. cacheWindows is meaningful only after
configuration of that stream.

## Patterns and static maps

GEMM retains row -> pass -> tile order, stride jumps, pass rewind, short tails,
partial-tile chunk continuation, contiguous tile merging and independent W1/W2
cursors with explicit fusion phase. `tileStride == tileBytes` merges through the
pass using configuration-time length and residual byte counters, not a divider.
VPU/aux direct mode owns its own linear/stride/repeat cursor and emits no GEMM
row-reuse event, including when direct mode supplies UB.

LOCAL_ROW_CACHE supplies a row once (passes normalized to one); OCM performs
compute reuse. LOCAL_WEIGHT_CACHE supplies the unique working set once. Local
OCM modes suppress new IB fills, as does a static map with localReuse or mappedSize
zero. **These controls do not disable reads of already valid leased IB data**,
including an output retained from the preceding operation. FB/QB can similarly
use local reuse or a configured spill window, without conflating compute units
with DMA payload bytes.

The compiler allocates page-table slots with 4KiB-aligned physical ibPageBase and
16B-aligned canonicalStart/declared validBytes. `cacheConfig.pageSlots[i]` references
these allocations; their physical bases may be noncontiguous. Configuration
checks identity, declared lengths, alignment, overflow of start+mappedSize, list
bounds, duplicate slots and live ownership by other stream entries. The physical
allocator independently rejects aliasing/bounds/unsafe reuse and canonical overlap
within one identity/address namespace. Rolling UB windows require exclusive, readable DRAM-fill allocations. The compiler must keep future row windows
disjoint from other live canonical allocations; row advancement asserts this too.

For canonical relative byte offset r, the resident page is the configured slot
at r>>12 and its physical byte is ibPageBase+(r&4095). Page metadata validates that
the compiler supplied the corresponding canonical subrange. Storage begins at IB
offset zero even for canonical 0x1010. Tail fragmentation is unused, never packed
with another chunk. mappedSize and the page list stay fixed for an instruction;
only the current UB start and valid row length change. A short final row clamps
validBytes without shrinking capacity. Surplus reserved pages have internal
validBytes=0, writer closed and no hit; the external Allocate API still requires
16..4096B. Such inactive slots retain their allocation/lease until boundary release.

Coverage ORs unique committed 16B lanes. A 4096B page with only 512B written is
entirely a miss; a separately declared complete 512B tail can hit. Duplicate writes
do not advance coverage. A published page never receives a new fill descriptor,
even if it lacks an IB consumer lease: readable DRAM can supply OCM with fill=false.
Unpublished/IB-only/unreadable data cannot invent a DRAM source. Identity and full
range validity are checked; fill commit and read permission remain separate.

## UB row completion timing

For spill, the first traversal populates the configured row head, subsequent
passes read published head pages from IB and the nonresident tail from DRAM.
colNum is the existing GEMM pass count: first traversal plus colNum-1 repeats.
There is no independent head/Get/chunk repetition counter.

The pattern tags the final segment of the final pass with rowLastUse and the
current/next row metadata. Preview and accept do not modify the mapping. The
latched tag reaches the final raw response; only response.fire after OCM and all
required IB derived writes have committed emits rowCommit. `OcmCacheMap` then
advances the row once; `IbPageTable` clears only the owned UB pages' coverage/valid,
increments generation, installs the next canonical head and reopens its fill writer.
An old final write is validated/committed before this same-edge reset. An IB last
read must release its reader lease on that edge. No old response can remain.

The target's pending segment blocks its next dispatch until this edge, so a new
row never observes the previous window. Other targets/sources continue; no global
drain or explicit Invalidate is inserted. W1/W2 and other static windows remain
unchanged. The final row does not install a nonexistent next base.

Example: row=8192, mappedSize=4096, colNum=3. The six 4096B chunks use
DRAM+fill / DRAM / IB / DRAM / IB / DRAM. Reading the final head is insufficient;
the sixth chunk's final sink completion changes the row. Tests also cover colNum=1,
unaligned/multi-segment heads, multiple noncontiguous pages, short last rows and
independently delayed OCM or final IB commits.

## Norm: shared coordinates and producer readiness

Let T=totalBytes, H=localBytes, I=ibBytes and R=T-H-I. Validate 0<=H<=T,
0<=I<=T-H, 16B alignment, page capacity/identity/generation and real DRAM end
overflow. `dramSpillBase` is the first actual spill byte, not D-S.

| Logical offset o | Phase1 store / phase2 source |
| --- | --- |
| o < H | NB local offset o |
| H <= o < H+I | pageSlots[(o-H)>>12], physical offset (o-H)&4095 |
| H+I <= o < T | dramSpillBase + (o-H-I) |

The same combinational resolver drives both directions, cutting at range/page
boundaries and skipping empty intervals. Norm-writer pages use a separate logical
address namespace: their compatibility canonical tag does not participate in
normal DRAM-window lookup or prevent another operand's DRAM read. No fabricated
DRAM address is used to locate Norm IB bytes. Allocation capacity never replaces I.

`normStore.ready` captures one 16B input; its data/identity/offset must remain
stable while not ready. normLocalWrite/normDramWrite.ready are durable ACKs;
Norm IB requests use the producer adapter's capture and later durable result.
normStoreResult follows that commit (or explicit validation error). This is a
routing/commit adapter; downstream NB and DRAM writers are typed ports/mocks.
FinishWriter publishes completed Norm pages only after all producer results drain;
retain/rebind adds the next reader lease without changing data or generation.

Phase2 starts at offset H and reports T-H external bytes. The caller submits
positive <=4096B refills with destinationOffset=H+external progress. NB-only creates
no DMA request; NB+IB creates no DRAM request; I=0 real DRAM spill is supported.
NB producerReady must confirm the WHOLE producer's local/DRAM work is complete;
the wrapper additionally waits for all Norm IB pages to be valid, writer-closed,
leased and identity/generation matched. A pending unready NB request does not
block independent WB admission. Disable Norm at a drained operation boundary to
restore legacy direct NormSpill configuration.

The scheduler reserves the NB local H bytes as fixed non-DMA capacity while this
Norm configuration is enabled. `status.localReservedBytes` is the typed equivalent
for other non-DMA owners and excludes DMA bytes already counted by the scheduler.
NB config overrides it with H. It is a capacity reservation, not another DMA chunk
entry or duplicated delivered-byte charge. H must fit the target. After external
consume free is capacity-H; Central Control confirms local consumer completion
before disabling/reconfiguring Norm and releasing that local reservation.

## Banking, commit and backpressure

The 1MiB prototype has four 256KiB banks, 64B words; bank=IB address[19:18]. Two
4KiB pages can share a bank. Engine output-fill, output-producer and Norm-producer
addresses/data/masks/identity remain independent through bank selection. Each bank
has its own locked RR write arbiter and durable ready ACK. Other banks can commit
while one stalls. One allocation has one writer owner; simultaneous commits to
different pages update coverage independently. Same-page multiwriter commits assert.

The compact writer emits one or two physical masked writes for a raw beat. OCM
can accept first or IB can commit first; neither is retransmitted. Invalid expanded
DRAM head/tail lanes are never written or counted. A segment/refill does not finish
before all mandatory derived commits. Output/Norm producer request/result slots
provide bounded backpressure, not an unbounded overload queue.

The separate 64B read port serializes same-word hazards. A pending write wins
unless a read descriptor was already offered and stalled; that read is preserved
and later same-word writes wait. The backend samples data at read request.fire
and returns that captured word even if its response is delayed. Different words
may read/write concurrently (physical integration must provide the corresponding
read/write ports or apply downstream backpressure).

The bank-fabric backlog test commits 64+16+16B in each of 32 cycles: 3072 durable
write bytes, 96B/cycle, plus 2048 separate read-port bytes. The engine integration
also observes an actual 96B triple commit. Same-bank contention is serialized;
unaligned fill may take two masked writes. Producer adapters currently hold one
transaction/result, so this is NOT a sustained end-to-end 96B/cycle guarantee.
No physical URAM timing, ECC/banking implementation or post-synthesis Fmax is claimed.

## Admission, source scheduling and boundaries

Sequence: stage -> engine.refill.fire -> live nextReadRequest -> permit ->
acceptedPlan -> backend -> sink commit/done. New admission rechecks full/enabled,
producer readiness, free>=4096B and a chunk entry every cycle. Selected/held offers
are unreserved and may yield to another eligible target. Reserve 4096B+one entry
only at refill.fire; accepted payload moves reserve to occupancy; done releases
unused reserve only; consume releases buffered bytes/entry. Error occupancy waits
for matching discardCommit. Fixed local reservations are deducted exactly once.
Admitted continuations ignore subsequent full/hungry/enable changes.

Default integration: UB/WB each 16KiB and 4 entries (CWC, PLC0/1/2); QB/FB/NB retain
8KiB/2 entries. Explicit small test profiles remain. DRAM/IB independently choose
one live winner each, P0=demand||impending > hungry > prefetch, accepted-only source
RR, saturating accepted-opportunity aging (default limit 8). Source slots free
independently. Global compute stall does not gate any memory path.

Instruction changes are Central Control's drained boundary: last submissions and
actual readers/writers/consumers complete before changing SW placement. Output B
can retain/rebind as next input B with data/valid/generation unchanged; new-data
Allocate requires fresh generation and invalid state. Retained weights remain
pinned; swapping does not permit overwrite of a still-used A. Clear obsolete
stream ownership with cacheConfig(mappedSize=0,pageCount=0) before assigning its
pages to another stream. No arbitrary Invalidate is needed for ordinary row or
retained operation handoff.

The legacy control adapter remains: Release uses its logical-identity/reader
fence; destructive Allocate/Invalidate/Rebind retain global active/OCM-entry and
writer lifetime checks. An unreserved selection lock yields during admissionPause
and does not count as an outstanding transaction. Its staged WB identity remains.
FinishWriter followed immediately by held Invalidate now handshakes/ACKs without
cancel/reset/idle-cycle workaround; WB then rechecks latest full/enabled and
executes once. A real outstanding reader or consumer still blocks destruction.

## Running validation

```sh
DMA_TEST_BACKEND=verilator make -j1 dma-read-test dma-read-compile dma-arbiter-test RTL_SBT=sbt
DMA_TEST_BACKEND=verilator make -j1 dma-static-test RTL_SBT=sbt
sbt 'Test / compile'
git diff --check
```

The optional test backend environment changes only the simulator; default remains
Treadle. All existing 40 regressions remain explicitly listed/filtered. The arbiter
runner also includes ArbFenceReview; dma-static-test explicitly compiles/runs the
static-map, UB timing, Norm and bank suites. Stimuli use deterministic schedules
and fixed seed 0x4c5a2026, byte-addressed stores, poison padding, hold monitors,
exactly-once scoreboards and bounded waits. Three invalid-map assertion cases are
expected protocol rejections, separate from unexpected regression failures.
See [the execution report](../reports/dma-read-validation.md) for actual results,
commands, source hashes and the independent full-build baseline limitation.
