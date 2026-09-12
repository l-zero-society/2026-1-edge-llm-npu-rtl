package npu.core

import chisel3._
import chisel3.util._
import chiseltest._
import npu.utils.Universal_Wide_LUT
import org.scalatest.flatspec.AnyFlatSpec
import scala.util.Random

// Real memories establish write-commit timing and narrow-read byte ordering.
class LutProgrammingHarness extends Module {
  val programmer = Module(new LutProgrammingController())
  val io = IO(new Bundle {
    val prog = chiselTypeOf(programmer.io)
    val rd_en = Input(Bool())
    val rd_target = Input(UInt(3.W))
    val rd_addr = Input(UInt(10.W))
    val rd_data = Output(UInt(16.W))
    val rd_valid = Output(Bool())
    val write_ack = Output(Bool())
  })
  programmer.io <> io.prog
  val tables = Seq((10, 8), (8, 16), (8, 16), (10, 16), (10, 16))
    .map { case (idx, bits) => Module(new Universal_Wide_LUT(idx, bits, 128)) }
  val enables = Seq(programmer.io.act_wr_en, programmer.io.exp_wr_en,
    programmer.io.scale_wr_en, programmer.io.sin_wr_en, programmer.io.cos_wr_en)
  for ((table, index) <- tables.zipWithIndex) {
    table.io.wr_en := enables(index)
    table.io.wr_addr := programmer.io.target_addr
    if (index == 0) table.io.wr_data := programmer.io.act_wr_data
    else table.io.wr_data := programmer.io.wide_wr_data
    table.io.rd_en := io.rd_en && io.rd_target === index.U
    table.io.rd_addr := io.rd_addr
  }
  io.write_ack := VecInit(tables.map(_.io.wr_valid)).asUInt.orR
  io.rd_valid := VecInit(tables.map(_.io.rd_valid)).asUInt.orR
  io.rd_data := Mux1H(tables.map(t => t.io.rd_valid -> t.io.rd_data.pad(16)))
}

class LutProgrammingControllerTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior of "LutProgrammingController"
  it should "program selected tables in fixed order with latched selection commit delay and little endian words" in {
    test(new LutProgrammingHarness()) { dut =>
      dut.clock.setTimeout(0)
      val p = dut.io.prog
      val rng = new Random(0x55aa)
      val counts = Seq(64, 32, 32, 128, 128)
      p.start.poke(false.B)
      p.in_valid.poke(false.B)
      p.in_data.poke(0.U)
      p.lut_write.poke(0.U)
      p.stall.poke(false.B)
      p.soft_reset.poke(false.B)
      dut.io.rd_en.poke(false.B)
      dut.io.rd_target.poke(0.U)
      dut.io.rd_addr.poke(0.U)

      for ((mask, task) <- Seq(31, 21, 16, 1, 0).zipWithIndex) {
        p.start.poke(true.B)
        p.lut_write.poke(mask.U)
        p.stall.poke(true.B)
        dut.clock.step(2)
        p.busy.expect(false.B)
        p.in_ready.expect(false.B)
        p.stall.poke(false.B)
        dut.clock.step()
        p.start.poke(false.B)
        val expected = (0 until 5).filter(i => (mask & (1 << (4 - i))) != 0)
          .flatMap(i => (0 until counts(i)).map(addr => (i, addr)))
        if (mask == 21) assert(expected.size == 224)
        if (mask == 31) assert(expected.size == 384)
        p.busy.expect((mask != 0).B)
        p.done.expect((mask == 0).B)
        var beat = 0
        var cycle = 0
        var previousFire = false
        def bytes(target: Int, address: Int): Seq[Int] =
          (0 until 16).map(b => (task * 23 + target * 39 + address * 17 + b * 3) & 255)
        while (beat < expected.size && cycle < 1500) {
          val (target, address) = expected(beat)
          val stall = rng.nextInt(4) == 0
          val valid = rng.nextInt(5) != 0
          val fire = valid && !stall
          p.stall.poke(stall.B)
          p.in_valid.poke(valid.B)
          p.lut_write.poke((mask ^ 31).U) // must not change the active selection
          val data = bytes(target, address)
          p.in_data.poke(data.zipWithIndex.map { case (b, i) => BigInt(b) << (8 * i) }.reduce(_ | _).U)
          p.target.expect(target.U)
          p.target_addr.expect(address.U)
          p.in_ready.expect((!stall).B)
          p.done.expect(false.B)
          dut.io.write_ack.expect(previousFire.B)
          val enables = Seq(p.act_wr_en, p.exp_wr_en, p.scale_wr_en, p.sin_wr_en, p.cos_wr_en)
          for (i <- 0 until 5) enables(i).expect((fire && i == target).B)
          for (i <- 0 until 16) p.act_wr_data(i).expect(data(i).U)
          for (i <- 0 until 8) p.wide_wr_data(i).expect((data(2*i) | (data(2*i+1) << 8)).U)
          if (target == 0) p.act_wr_addr.expect(address.U)
          else if (target <= 2) p.norm_wr_addr.expect(address.U)
          else p.rope_wr_addr.expect(address.U)
          p.alert.expect(false.B)
          dut.clock.step()
          previousFire = fire
          if (fire) beat += 1
          cycle += 1
        }
        assert(beat == expected.size)
        p.in_valid.poke(false.B)
        if (mask != 0) {
          // Final wr_en committed at the last edge. ACK is now high, but done
          // must wait through this ACK cycle even when tables were already ready.
          dut.io.write_ack.expect(true.B)
          p.done.expect(false.B)
          p.busy.expect(true.B)
          p.in_ready.expect(false.B)
          p.stall.poke(true.B)
          dut.clock.step(3)
          p.done.expect(false.B)
          p.busy.expect(true.B)
          p.stall.poke(false.B)
          dut.clock.step()
          p.done.expect(true.B)
          p.busy.expect(false.B)
        }
        dut.clock.step()
        p.done.expect(false.B)
        // Read the full programmed contents through each real narrow LUT port.
        for ((target, address) <- expected; offset <- 0 until (if (target == 0) 16 else 8)) {
          val data = bytes(target, address)
          val gold = if (target == 0) data(offset)
            else data(2*offset) | (data(2*offset+1) << 8)
          dut.io.rd_en.poke(true.B)
          dut.io.rd_target.poke(target.U)
          dut.io.rd_addr.poke((address * (if (target == 0) 16 else 8) + offset).U)
          dut.clock.step()
          dut.io.rd_valid.expect(true.B)
          dut.io.rd_data.expect(gold.U)
        }
        dut.io.rd_en.poke(false.B)
        dut.clock.step()
      }
      // Restart while streaming is rejected and does not rewind the target.
      p.start.poke(true.B)
      p.lut_write.poke(1.U)
      dut.clock.step()
      p.lut_write.poke(16.U)
      p.alert.expect(true.B)
      dut.clock.step()
      p.target.expect(LutTarget.COS)
      p.target_addr.expect(0.U)
      p.start.poke(false.B)
      p.soft_reset.poke(true.B)
      dut.clock.step()
      p.busy.expect(false.B)
      p.done.expect(false.B)
    }
  }
}
