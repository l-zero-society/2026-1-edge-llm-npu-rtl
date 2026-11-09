package npu.dma

import chisel3._
import chisel3.util._

object ReadStream {
  val Input = 0; val Weight1 = 1; val Weight2 = 2
  val Quant = 3; val Freq = 4; val NormSpill = 5
  val Count = 6
}
object ReadTarget {
  val UB = 0; val WB = 1; val QB = 2; val FB = 3; val NB = 4
  val Count = 5
}
object ReadSupplyMode {
  val Stream = 0
  val LocalRowCache = 1
  val LocalWeightCache = 2
}
case class DmaReadParams(regions: Int = 2, pagesPerRegion: Int = 4, maxSegmentBytes: Int = 4096,
                         ibCapacityBytes: BigInt = BigInt(1) << 20) {
  require(regions > 0 && pagesPerRegion > 0)
  require(maxSegmentBytes >= 16 && maxSegmentBytes <= 4096 && maxSegmentBytes % 16 == 0)
  require(ibCapacityBytes >= 4096 && ibCapacityBytes % 4096 == 0 && ibCapacityBytes < (BigInt(1) << 64))
  // Legacy elaboration parameters now size a flat physical-page table.
  val cachePages: Int = regions * pagesPerRegion
  val regionBits: Int = math.max(1, log2Ceil(cachePages))
}

/** Typed hardware contract, not an instruction/SW ABI. Iterate row -> pass -> tile.
  * Each tile contributes tileBytes (last tile: tailBytes), at tileStride spacing.
  * Input STREAM: passStride=0, passes=required passes; LOCAL_ROW_CACHE:
  * passes=1, stopAtRowEnd=true, one refill event per new row. Weight W[n,k]:
  * STREAM weights: row=m (rowStride=0), pass=n, tile=k; cached weights:
  * rows=1, pass=n, tile=k. Transposed/tiled layouts use the affine strides.
  * Fusion phases are explicitly selected by RefillRequest.stream/phase.
  */
class ReadStreamConfig extends Bundle {
  val stream = UInt(3.W)
  val direct = Bool() // VPU/aux pattern; never emits GEMM row reuse events
  val lastRowBytes = UInt(32.W) // 0 = normal row length; otherwise final-row payload
  val supplyMode = UInt(2.W)
  val base = UInt(64.W)
  val rows = UInt(32.W)
  val passes = UInt(32.W)
  val tiles = UInt(32.W)
  val rowStride = UInt(64.W)
  val passStride = UInt(64.W)
  val tileStride = UInt(64.W)
  val tileBytes = UInt(13.W)
  val tailBytes = UInt(13.W)
  val stopAtRowEnd = Bool()
  val ibOnly = Bool()
}
class RefillRequest extends Bundle {
  val target = UInt(3.W)
  val stream = UInt(3.W)
  val phase = UInt(8.W)
  val contextId = UInt(16.W)
  val epoch = UInt(16.W)
  val logicalId = UInt(16.W)
  val refillId = UInt(16.W)
  val destinationOffset = UInt(32.W)
  val payloadBytes = UInt(13.W) // maximum logical chunk; row/stream end may shorten it
}
class ReadIdentity extends Bundle {
  val target = UInt(3.W)
  val contextId = UInt(16.W)
  val epoch = UInt(16.W)
  val logicalId = UInt(16.W)
  val refillId = UInt(16.W)
}
class ReadPlan(p: DmaReadParams) extends Bundle {
  val identity = new ReadIdentity
  val stream = UInt(3.W)
  val phase = UInt(8.W)
  val destinationOffset = UInt(32.W)
  val canonicalAddress = UInt(64.W)
  val address = UInt(64.W) // resolved physical source address
  val sourceIB = Bool()
  val payloadBytes = UInt(13.W)
  val row = UInt(32.W)
  val rowLastUse = Bool()
  val hasNextRow = Bool()
  val nextRowBase = UInt(64.W)
  val nextRowBytes = UInt(46.W)
  val chunkLast = Bool()
  val streamLast = Bool()
  val fill = Bool()
  val fillAddress = UInt(64.W)
  val region = UInt(p.regionBits.W)
  val generation = UInt(32.W)
}
/** address/payloadBytes describe the logical 16B-aligned payload (1..4096B,
  * with a positive multiple of 16 bytes; zero length is invalid).
  * DRAM fetches [alignDown(address,64), alignUp(address+payloadBytes,64)). SW
  * guarantees readable backing for this whole window. A TL adapter decomposes
  * it into supported naturally aligned power-of-two Gets (default mock: <=4KiB).
  * IB accesses only the selected word lanes; padding never acquires coverage.
  */
class ReadBurstRequest(p: DmaReadParams) extends Bundle { val plan = new ReadPlan(p) }
/** One response per aligned 64B word; firstLane/laneCount are its intersection
  * with the logical payload. payloadOffset counts payload bytes, not padding.
  * Responses are ordered within a segment, including across TL subrequests.
  * Get boundaries never split a raw word. segmentLast is the final fetched word
  * of the backend segment, never merely a TL Get last or logical chunk last.
  */
class ReadBurstResponse extends Bundle {
  val identity = new ReadIdentity
  val data = UInt(512.W)
  val payloadOffset = UInt(13.W)
  val firstLane = UInt(2.W)
  val laneCount = UInt(3.W)
  val segmentLast = Bool()
}
class ReadBurstPort(p: DmaReadParams) extends Bundle {
  val request = Decoupled(new ReadBurstRequest(p))
  val response = Flipped(Decoupled(new ReadBurstResponse))
}
class MemoryReadData extends Bundle {
  val identity = new ReadIdentity
  def memoryContextId: UInt = identity.contextId
  val destinationOffset = UInt(32.W)
  val memoryData = UInt(512.W)
  val memoryLaneValidMask = UInt(4.W)
  val memoryChunkLast = Bool()
  val memoryStreamLast = Bool()
}
class RefillDone extends Bundle {
  val identity = new ReadIdentity
  val committedBytes = UInt(13.W)
  val error = Bool() // IB-only range unavailable; no invented DRAM fallback
}
/** ready is a WRITE COMMIT acknowledgement. A backend with a request queue
  * must retain ready low until the write is durable/visible to later reads.
  * Data and mask are in COMPACT IB physical word lanes, after repacking.
  */
class IbFillWrite extends Bundle {
  val identity = new ReadIdentity
  val wordAddress = UInt(64.W)
  val data = UInt(512.W)
  val laneMask = UInt(4.W)
  val page = UInt(16.W)
  val generation = UInt(32.W)
}
class IbWordRead extends Bundle {
  val wordAddress = UInt(64.W)
  val laneMask = UInt(4.W) // only these lanes may be accessed/returned
}
