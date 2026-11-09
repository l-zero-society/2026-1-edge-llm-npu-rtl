package npu.dma

import chisel3._
import chisel3.util._

class ReadPatternView extends Bundle {
  val gemm = Bool()
  val config = new ReadStreamConfig
  val configured = Bool(); val exhausted = Bool()
  val address = UInt(64.W); val room = UInt(13.W)
  val passRemaining = UInt(46.W); val row = UInt(32.W)
  val lastPass = Bool(); val lastRow = Bool(); val nextRowBase = UInt(64.W)
  val nextRowBytes = UInt(46.W)
}
/** Cursor owner. No mapping, backend, arbitration or response state here. */
class AffineReadPattern(gemm: Boolean) extends Module {
  val io = IO(new Bundle {
    val config = Flipped(Valid(new ReadStreamConfig))
    val accept = Flipped(Valid(UInt(13.W)))
    val view = Output(new ReadPatternView)
  })
  val c = Reg(new ReadStreamConfig)
  val configured = RegInit(false.B); val exhausted = RegInit(false.B)
  val row = RegInit(0.U(32.W)); val pass = RegInit(0.U(32.W)); val tile = RegInit(0.U(32.W))
  val within = RegInit(0.U(13.W))
  val passBytes = Reg(UInt(46.W)); val rowBytes = Reg(UInt(46.W)); val remaining = Reg(UInt(46.W))
  val rowBase = Reg(UInt(64.W)); val passBase = Reg(UInt(64.W)); val tileBase = Reg(UInt(64.W))
  when(io.config.valid) {
    val x = io.config.bits
    assert(x.supplyMode <= ReadSupplyMode.LocalWeightCache.U)
    assert(x.rows > 0.U && x.passes > 0.U && x.tiles > 0.U)
    assert(x.tileBytes > 0.U && x.tileBytes <= 4096.U && x.tileBytes(3,0) === 0.U)
    assert(x.tailBytes > 0.U && x.tailBytes <= x.tileBytes && x.tailBytes(3,0) === 0.U)
    assert(x.base(3,0) === 0.U && x.rowStride(3,0) === 0.U && x.passStride(3,0) === 0.U && x.tileStride(3,0) === 0.U)
    val length = (x.tiles - 1.U) * x.tileBytes +& x.tailBytes
    assert(x.lastRowBytes === 0.U || (x.lastRowBytes <= length && x.lastRowBytes(3,0) === 0.U))
    c := x
    when(x.supplyMode === ReadSupplyMode.LocalRowCache.U) { c.passes := 1.U; c.stopAtRowEnd := true.B }
    when(x.supplyMode === ReadSupplyMode.LocalWeightCache.U) { c.rows := 1.U }
    val initial = Mux(x.rows === 1.U && x.lastRowBytes =/= 0.U, x.lastRowBytes, length)
    passBytes := length; rowBytes := initial; remaining := initial
    configured := true.B; exhausted := false.B; row := 0.U; pass := 0.U; tile := 0.U; within := 0.U
    rowBase := x.base; passBase := x.base; tileBase := x.base
  }
  val continuous = c.tileStride === c.tileBytes
  val tileLength = Mux(tile === c.tiles - 1.U, c.tailBytes, c.tileBytes)
  val nextLength = Mux(row + 1.U === c.rows - 1.U && c.lastRowBytes =/= 0.U, c.lastRowBytes, passBytes)
  io.view.gemm := gemm.B
  io.view.config := c; io.view.configured := configured; io.view.exhausted := exhausted
  io.view.address := tileBase + within; io.view.row := row
  io.view.room := Mux(continuous, Mux(remaining < 4096.U, remaining, 4096.U), tileLength - within)
  io.view.passRemaining := remaining; io.view.lastPass := pass === c.passes - 1.U
  io.view.lastRow := row === c.rows - 1.U; io.view.nextRowBase := rowBase + c.rowStride
  io.view.nextRowBytes := nextLength
  when(io.accept.valid) {
    val bytes = io.accept.bits
    assert(configured && !exhausted && bytes > 0.U && bytes <= remaining)
    remaining := remaining - bytes; within := within + bytes
    when(continuous) { tileBase := tileBase + bytes; within := 0.U }
    when(!continuous && within + bytes === tileLength) { within := 0.U; tile := tile + 1.U; tileBase := tileBase + c.tileStride }
    when(bytes === remaining) {
      remaining := rowBytes; within := 0.U; tile := 0.U; pass := pass + 1.U
      passBase := passBase + c.passStride; tileBase := passBase + c.passStride
      when(pass === c.passes - 1.U) {
        when(row =/= c.rows - 1.U) { assert(!(rowBase +& c.rowStride)(64)) }
        pass := 0.U; row := row + 1.U; rowBytes := nextLength; remaining := nextLength
        rowBase := rowBase + c.rowStride; passBase := rowBase + c.rowStride; tileBase := rowBase + c.rowStride
        when(row === c.rows - 1.U) { exhausted := true.B }
      }
    }
  }
}
class GemmReadPattern extends AffineReadPattern(true)
class DirectReadPattern extends AffineReadPattern(false)

/** Select pattern ownership at configuration, never by a current arbiter winner. */
class ReadAddressGenerator extends Module {
  val io = IO(new Bundle {
    val config = Flipped(Valid(new ReadStreamConfig))
    val accept = Flipped(Vec(ReadStream.Count, Valid(UInt(13.W))))
    val view = Output(Vec(ReadStream.Count, new ReadPatternView))
  })
  val direct = RegInit(VecInit(Seq.tabulate(ReadStream.Count)(s => (s >= ReadStream.Quant).B)))
  for (s <- 0 until ReadStream.Count) {
    val g = Module(new GemmReadPattern); val d = Module(new DirectReadPattern)
    val configure = io.config.valid && io.config.bits.stream === s.U
    when(configure) { direct(s) := io.config.bits.direct }
    for ((m, isDirect) <- Seq(g -> false, d -> true)) {
      m.io.config.valid := configure && io.config.bits.direct === isDirect.B
      m.io.config.bits := io.config.bits
      m.io.accept := io.accept(s); m.io.accept.valid := io.accept(s).valid && direct(s) === isDirect.B
    }
    io.view(s) := Mux(direct(s), d.io.view, g.io.view)
  }
}
