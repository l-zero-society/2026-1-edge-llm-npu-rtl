# DMA read, scheduler and IB page contract

Active contract: **2026-11-06 Asia/Seoul**. This supersedes region/prefix-hit and
raw-offset-preserving fill in the [2026-11-05 history](DmaRead-2026-11-05.md).
The Chisel implementation is a prototype with testbench DRAM/TL and IB storage.
It does not implement a real TL IP, DMA output writer, instruction ABI, RF or CU
controller. Existing UB/WB/QB/FB/NB, RF and ComputeUnit files are unchanged.

## Blocks and state ownership

| Owner | State / responsibility |
| --- | --- |
| `DmaReadEngine` | Canonical stream cursors, target logical refill, source slots, latched backend descriptors, response identity/routing and OCM/fill exactly-once fanout |
| `IbPageTable` | Allocation metadata, unique coverage, full publication, allocation generation, consumer leases, retained weights and outstanding IB readers |
| `IbCompactWriter` | First/second derived masked-write acceptance for one held compact beat |
| `IbProducerAdapter` | One captured output write and one durable result; rejects invalid producer writes before storage |
| `IbWriteArbiter` | Round-robin physical DRAM-fill/output-writer arbitration; held selection under backpressure |
| `DmaSourceScheduler` | Current-source priority, accepted-only RR and saturating age; no duplicate sourceBusy/response state |
| `DmaReadScheduler` | Five pending request slots, fair admission, logical OCM reservation, completed chunk ledger and error/discard state |
| `IbBurstReader`, `IbReadFillArbiter` | Existing ordered IB reads and optional shared physical-port arbitration |

`DmaReadSystem` connects these blocks. Its two source paths remain independent.
The engine's source RR remains a safe direct-engine fallback; the system's source
scheduler emits at most one target permit per source, so its winner is definitive.

Prototype parameters (not a SW ABI):

- `DmaReadParams`: default 8 page-table slots (`regions * pagesPerRegion`, legacy
  elaboration names only), max physical segment 4096B, physical IB capacity 1MiB.
- `DmaSchedulerParams`: per-target capacity 8192B, chunk entries 2, `ageLimit=8`.
  The aging threshold is an implementation default, not a measured latency SLA.
- A consumer mask has 8 explicit lease bits. IDs/context/epoch remain typed 16b;
  allocation generation is 32b and may not wrap/reuse an old value in a slot.

## Configuration and traversal

`ReadStreamConfig` still describes Input/W1/W2/Quant/Freq/NormSpill using
`base + row*rowStride + pass*passStride + tile*tileStride + withinTile`.
Row -> pass -> tile is the logical order. All addresses/strides/payloads are
16B aligned. Tiles and final tails are positive 16B multiples up to 4096B.

| Supply | Configuration |
| --- | --- |
| Input STREAM | rows=M, passes=required N/fusion passes, passStride=0, tile=K |
| Input LOCAL_ROW_CACHE | passes normalized to 1, stopAtRowEnd; one unique row supplied per row event |
| Weight STREAM | rows=M repeats, rowStride=0, passes=N groups, tile=K |
| Weight LOCAL_WEIGHT_CACHE | rows normalized to 1; unique working set supplied once |
| Dense/compact | normally 256B/16B tiles, but arbitrary 16B multiples (e.g. 144B) are legal |
| Direct/aux streams | explicit base+offset, length, strides and repetitions; no inference from QB/FB CU units |

W1/W2 cursors are independent despite sharing WB. Fusion phase/stream is explicitly
selected in each refill, with no physical-burst-count schedule or new UB replay.
The cached fusion weight footprint is W1 unique bytes plus W2 unique bytes.

`tileStride == tileBytes` merges a continuous pass, including its short last
tile. Pass length is computed at config; residual bytes and additions advance
issue without a tile divider or per-tile combinational traversal. Strides,
passes/repeats/rows, logical chunks/phases, canonical 4KiB boundaries, resident
chunk boundaries and maxSegmentBytes split segments. Cursor advancement happens
only at acceptedPlan, including IB hits and partial-tile chunk continuations.
Zero-byte refill/config payloads are invalid and asserted, not zero-mask transfers.

`RefillRequest` adds a `logicalId` namespace to context/epoch/refill identity.
The caller configures streams before submitting requests and does not overflow
64b canonical traversal arithmetic. This is a typed integration API, not a new
instruction encoding.

## Page allocation, lookup and publication

A slot owns an entire **4KiB physical page**, even for a 16B tail. No other chunk
may be packed into its unused space. `IbPageMetadata` separates:

- `canonicalStart` (16B aligned), `validBytes` (16..4096B), `ibPageBase` (4KiB aligned);
- context, epoch, logicalId, allocation generation and layout;
- writer kind (DRAM fill or output), DRAM backing readability, consumers and keepWeight.

State additionally includes allocated/pageValid/writerOpen, unique 16B coverage
and outstanding IB reader count. Lookup requires matching context/epoch/logicalId
and an overflow-safe canonical range. Translation is
`ibPageBase + canonicalAddress - canonicalStart`. All allocated physical pages
are disjoint; same-identity canonical ranges cannot alias. Physical bounds and
65b overflow checks reject invalid allocations.

Coverage is completion tracking only. **There are no partial/prefix hits.** A
validBytes=4096 allocation with 512B committed is entirely a miss. Repeated or
out-of-order writes OR unique bits; total write byte counts cannot publish it.
A complete validBytes=512 tail page can hit its 512B; unused physical bytes have
no mapping or validity. A mixed refill across that complete tail and a nonresident
range can still use IB 512B then DRAM 3584B.

For DRAM fill, pageValid is published only after coverage equals the declared
range AND the raw beat's final derived write has committed. Even when its first
write fills the last unique hole and the second only duplicates covered lanes,
publication waits for the second ACK. The DRAM writer remains open until its
source drains. For output, full coverage alone is insufficient: FinishWriter
must also confirm the producer transaction/result stream has drained.

Pages and logical refills are independent. Small 80B/976B refills can accumulate
one page. Strided segments look up their canonical ranges independently; their
logical refill total does not invent a contiguous page. A 4096B allocation at
canonical 0x1010 uses one IB page even though the engine issues 4080B/16B DRAM
segments. Physical segment last alone does not publish the page.

## Control and operation handoff

`pageCommand` is drained, one-at-a-time, with a held `pageResult` (`error==0`
means success). Wrong expected context/epoch/logicalId/generation, unsafe lifetime,
alias, range/overflow, layout and incomplete publication return explicit errors.
No rejected command mutates page metadata/storage.

| Operation | Contract |
| --- | --- |
| Allocate | Require old lifetime released, writer/readers drained, fresh larger generation. Clear coverage/valid; assign one writer. Output starts with no consumers/weight pin; DRAM fill requires readable backing. |
| Release | Explicitly clear selected consumer lease bits and optionally the weight pin, after drain. Clearing one consumer does not release the others. |
| FinishWriter | Output only; require full coverage and all producer durable results acknowledged. Close producer and publish. May finish a producer while a different page is being read; this is not a rebind. |
| Rebind | Require valid completed data, no old consumers/readers, all output producers complete, same physical page, length, generation and compatible layout. Preserve data, coverage and pageValid while changing logical binding/new leases. |
| AbortWriter | Explicitly abort an open unpublished writer; does not free any OCM occupancy. |
| Invalidate | Require no live consumer, weight pin, reader or writer. Retire mapping/coverage; a new allocation still needs a larger generation. |

Retained output B can become next input B without copy or DRAM refill. A is not
reused as output until all old consumers release and delayed IB responses drain.
A retained weight pin independently prohibits overwrite. Physical input/output
partitions do not exist; these are allocation roles. Rebind never bumps generation
or clears valid. New-data allocation does both. Late old producer requests are
rejected before they reach the physical write port.

The prototype uses conservative operation boundaries. Destructive control waits
for engine reads and scheduler OCM chunks to drain and for producer ACK drain;
rebind/reuse also checks producer completion. `engine.drained` by itself proves
none of the producer completion conditions. Staged old consumers block release
of their page; a held control request lets them drain instead of deadlocking new
admission. Staged next-context producer waiters may remain while a completed
unleased output is rebound. Configuration similarly drains staged work before
replacing a stream. New ingress is held during control/config; no cancel exists.

## Compact write and durable ACK contracts

A DRAM raw word contributes only its logical intersection. OCM receives compact
low lanes and prefix mask 0001/0011/0111/1111. IB instead uses allocation-relative
addresses. For 0x1010+4096B, data is stored at **0x8000..0x8fff**, not 0x8010.
Fetch padding is never stored or counted in coverage/length/cursors/credit.

The compact writer removes raw firstLane, then places valid lanes at the IB
address. A crossing raw beat emits two masked writes, tracking each once. OCM may
accept first, or IB may commit first; raw response advances only after OCM and
all derived writes complete. Data/mask/address/identity/generation stay stable
while a write is stalled. IB replay returns the same logical byte sequence even
when its raw beat boundaries differ from DRAM.

`IbFillWrite.ready` is the actual durable write ACK, not queue acceptance. The
backend must be able to acknowledge a held valid write without needing an earlier
ready/valid enqueue event. The port carries page slot + generation and request
identity along with physical word address/data/mask. It is the unified DRAM-fill
and producer write port. The physical writer arbiter locks a stalled command;
DRAM fill and output can never own the same allocation simultaneously.

`producerWrite.ready` has a different, explicit meaning: capture one local
`IbProducerWrite` request. `producerResult` is emitted only after all derived
durable writes, or with error if validation rejects the request before storage.
FinishWriter waits for these results to be acknowledged. Producer data is already
compact prefix lanes at a 16B-aligned page-relative offset; this is a bounded
commit/lifetime adapter, not a DRAM output DMA implementation.

Aligned full-word fill remains a direct one-write-per-cycle path. This prototype
uses two ACKed masked writes for a crossing beat rather than a cross-beat gather
buffer. A single physical write port therefore needs two cycles for such a full
raw beat. The unaligned 4096B example has 65 DRAM raw beats and 128 masked writes;
the validation report records measured simulator cycles. No unaligned sustained
64B/cycle or shared-port 128B/cycle claim is made. The independent, aligned profile
counts actual simultaneous full-beat acceptance separately.

## DRAM/TL and IB backend connections

The logical request is address+payloadBytes. DRAM reads
`[alignDown(address,64), alignUp(address+payloadBytes,64))`. SW guarantees readable
backing for this expanded window; there is no extra padding permission checker.
The TL mock partitions it into largest supported naturally aligned power-of-two
Gets, default maximum 4096B, separately tested at maximum 128B. Each Get returns
64B raw words. TL Get last, backend segmentLast, logical memoryChunkLast,
memoryStreamLast, page publication, refillDone and operation completion differ.

- Aligned 4096B: one segment, one default Get, 64 raw words.
- 0x1010+4096B: 4080B/16B segments, 4096B/64B Gets, 65 words, valid OCM lengths
  48 + 63*64 + 16 and masks 7 / 63*15 / 1.
- 0x1030+32B: expanded [0x1000,0x1080), two words each with 16 valid bytes.
- Maximum Get 128B: aligned 4096B still has one segment and 64 raw words, but 32 Gets.

Attach real DRAM transport at `dram.request/response`. IB uses
`IbBurstReader.burst`, `wordRead/wordResponse` and the unified `fill` commit port.
`IbReadFillArbiter` optionally serializes all backing reads/writes for a shared
physical port; it is distinct from source priority and the fill/output write
arbiter. Bank-aware physical logic may replace it with the same held-grant and
commit contract. Real TL IP, physical SRAM/ECC/banking and post-synthesis timing
remain unverified integration work.

## Admission, credit and source scheduling

`DmaReadSystem` exposes five typed `requests`, `status`, `consume` and
`discardCommit` ports plus memory/done, page control, producer, backend and debug
ports. Controller names can be adapted to these types without editing controllers.

The sequence is ingress staging -> **engine.refill.fire admission** -> live
nextReadRequest -> source permit -> acceptedPlan -> backend -> sink commits/done.
W1/W2/phase/context are preserved in the staged request. One target slot may hold
the next pending request while its previous logical refill drains. Admission RR
is fair across targets and never gated by a source being busy. Already active
streams are excluded to preserve one cursor owner. An offered admission descriptor
is irrevocable while engine ready is low; identity/data remain stable, and RR or
credits do not move until its fire. Published producer readiness may not be revoked
while such an offer is outstanding; destructive metadata control is fenced.

New admission requires enabled, needsExternalSupply, producerReady, not-full,
free >=4096B and a free chunk entry. The first tiled-row dependency can specify a
required page mask and expected generations: ALL those pages must be published,
writer-closed, leased and match the request identity. One page finishing does not
make the whole producer row ready. Invalid IB-only is a separate explicit engine
error; producer waiting is held before admission. Unpublished producer data with
unreadable DRAM backing cannot silently fall back to DRAM.

The scheduler is the sole byte/entry credit owner. `full` is an additional
controller admission hold, not a second byte-reservation counter. An adapter must
not subtract the same reservation in another free-space owner.

| Event | Credit action |
| --- | --- |
| engine.refill.fire | Reserve 4096B and one chunk entry, even for a tail |
| OCM valid && ready | Move actual payload bytes from reserved to buffered occupancy |
| done valid && ready | Release unused reservation; enqueue completed/error chunk metadata; keep buffered bytes and the entry |
| consume | Free only bytes of the oldest completed non-error entry; chunkLast releases its entry |
| discardCommit | Confirm physical rollback of the oldest error entry with matching identity; then free its remaining occupancy/entry and clear context error |

Example 16B tail: 4096B reserved -> 16B occupancy + 4080B reserve -> done releases
4080B only -> consume frees the final 16B/entry. Completion backpressure preserves
reservation/occupancy. Error data is never silently freed; error entries reject
normal consume and block further admission until confirmed discard. Partial
consume, reserve, data and completion accounting are combined without double
subtraction. Full (<4096B free), hungry, enabled and needsExternalSupply changes
do not stop an admitted continuation. Consumers here retire completed chunks;
consumption before completion is conservatively outside this adapter profile.

Source selection uses current live candidates, with sourceAvailable representing
only the engine slot. Per source: aged candidates first; otherwise P0=demand or
impending, then P1=hungry, then P2=valid supplied prefetch. Equal priority uses
source RR. Age saturates at the parameter limit, increments only when another
eligible candidate on its current source is ACTUALLY accepted, survives source
changes and resets on accept/new logical admission. RR moves only on acceptedPlan.
Source busy time is not a fairness latency bound. The scheduler never copies
engine sourceBusy, response descriptors or dual-sink progress. Compute stall does
not clock-enable or suppress any memory request/commit/done path.

## Verification and history

```sh
make -j1 dma-read-test dma-read-compile RTL_SBT=sbt
make -j1 dma-arbiter-test RTL_SBT=sbt
sbt 'Test / compile'
git diff --check
```

The new target explicitly compiles DmaRead_Test.scala (shared byte model),
DmaReadScheduler_Test.scala and IbPageLifecycle_Test.scala, and runs the three
new suite classes. The existing read target retains its AG/transport regressions.
Expected bytes come from configurations, page specs and independent producer
sequences, not DUT cursor/plan copies. The backing model commits actual masked
writes and rejects uninitialized IB reads. Deterministic bubbles, poison,
stability monitors, exactly-once scoreboards and bounded waits cover the paths.
Idle don't-care data peeks are skipped; a previously stalled port is ALWAYS
checked, even if valid is withdrawn.

See [validation results](../reports/dma-read-validation.md) for commands, counts,
negative protocol rejections, measured cases and the unrelated full-build limits.
Current architecture sources: [Arbiter](https://app.notion.com/p/3eb397c48d6381e69b3af905613c424b),
[AG](https://app.notion.com/p/3eb397c48d63812daf13e86e76e09cd3),
[IB](https://app.notion.com/p/3db397c48d638142892afbdfe330e11e), latest agreement 2026-11-06.
The archived v3/v2 partial-valid/offset-preserving policy is design history only.
