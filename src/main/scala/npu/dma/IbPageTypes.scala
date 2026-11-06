package npu.dma

import chisel3._
import chisel3.util._

object IbWriter { val DramFill = 0; val Output = 1 }
object IbPageOp {
  val Allocate = 0; val Rebind = 1; val Release = 2
  val FinishWriter = 3; val AbortWriter = 4; val Invalidate = 5
}
object IbPageError {
  val None = 0; val Identity = 1; val Lifetime = 2; val Range = 3
  val Alias = 4; val Layout = 5; val Incomplete = 6
}
class IbPageMetadata extends Bundle {
  val canonicalStart = UInt(64.W)
  val validBytes = UInt(13.W)
  val ibPageBase = UInt(64.W)
  val contextId = UInt(16.W)
  val epoch = UInt(16.W)
  val logicalId = UInt(16.W)
  val generation = UInt(32.W)
  val layout = UInt(16.W)
  val writer = UInt(1.W)
  val dramReadable = Bool()
  val consumers = UInt(8.W) // explicit leases; all consumers must release
  val keepWeight = Bool()
}
class IbPageState extends Bundle {
  val allocated = Bool()
  val metadata = new IbPageMetadata
  val pageValid = Bool()
  val writerOpen = Bool()
  val readers = UInt(4.W)
  val coverage = UInt(256.W) // unique committed 16B lanes; never partial hit
}
class IbPageCommand(p: DmaReadParams) extends Bundle {
  val op = UInt(3.W)
  val page = UInt(p.regionBits.W)
  val expectedContext = UInt(16.W)
  val expectedEpoch = UInt(16.W)
  val expectedLogicalId = UInt(16.W)
  val expectedGeneration = UInt(32.W)
  val replacement = new IbPageMetadata
  val releaseConsumers = UInt(8.W)
  val releaseWeight = Bool()
}
class IbPageResult(p: DmaReadParams) extends Bundle {
  val page = UInt(p.regionBits.W)
  val op = UInt(3.W)
  val error = UInt(3.W)
  def success: Bool = error === 0.U
}
class IbReaderLease(p: DmaReadParams) extends Bundle {
  val page = UInt(p.regionBits.W)
  val generation = UInt(32.W)
}
class IbProducerWrite(p: DmaReadParams) extends Bundle {
  val page = UInt(p.regionBits.W)
  val identity = new ReadIdentity
  val generation = UInt(32.W)
  val offset = UInt(13.W)
  val laneCount = UInt(3.W)
  val data = UInt(512.W) // prefix lanes; offset is relative to the IB page
}
class IbProducerResult extends Bundle {
  val identity = new ReadIdentity
  val error = Bool()
}
class IbCompactWrite extends Bundle {
  val identity = new ReadIdentity
  val page = UInt(16.W)
  val generation = UInt(32.W)
  val address = UInt(64.W)
  val laneCount = UInt(3.W)
  val data = UInt(512.W)
}

object IbPageChecks {
  def identity(m: IbPageMetadata, id: ReadIdentity): Bool =
    m.contextId === id.contextId && m.epoch === id.epoch && m.logicalId === id.logicalId
  def lengthMask(bytes: UInt): UInt = Fill(256, 1.U(1.W)) >> (256.U - (bytes >> 4))
}
