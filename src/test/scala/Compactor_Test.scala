package npu.core

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec
import scala.util.Random

class CompactorTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior of "Compactor"
  it should "retain only row0 online across tiles bubbles and stalls with a pure bypass" in {
    test(new Compactor()) { dut =>
      val rng = new Random(0x4321)
      dut.io.soft_reset.poke(false.B)
      dut.io.compact_en.poke(false.B)
      for (cycle <- 0 until 23) {
        val valid = cycle % 3 != 0
        val stall = rng.nextBoolean()
        dut.io.in_valid.poke(valid.B)
        dut.io.stall.poke(stall.B)
        for (lane <- 0 until 16) {
          dut.io.in_vec(lane).poke((cycle + lane).U)
          dut.io.out_vec(lane).expect((cycle + lane).U)
        }
        dut.io.out_valid.expect((valid && !stall).B)
        dut.io.busy.expect(false.B)
        dut.clock.step()
      }
      dut.io.compact_en.poke(true.B)
      var accepted = 0
      var cycles = 0
      var outputs = 0
      while (accepted < 64 && cycles < 300) {
        val stall = rng.nextInt(4) == 0
        val valid = cycles > 20 && rng.nextInt(3) != 0
        dut.io.stall.poke(stall.B)
        dut.io.in_valid.poke(valid.B)
        val emit = valid && !stall && accepted % 16 == 0
        for (lane <- 0 until 16) {
          val value = (accepted * 7 + lane) & 255
          dut.io.in_vec(lane).poke(value.U)
          if (emit) dut.io.out_vec(lane).expect(value.U)
        }
        dut.io.out_valid.expect(emit.B)
        dut.io.busy.expect((accepted % 16 != 0).B)
        dut.io.sync_alert.expect(false.B)
        if (emit) outputs += 1
        dut.clock.step()
        if (valid && !stall) accepted += 1
        cycles += 1
      }
      assert(accepted == 64 && outputs == 4)
      dut.io.busy.expect(false.B)
      dut.io.in_valid.poke(false.B)
      dut.io.stall.poke(false.B)
      dut.clock.step(19)
      dut.io.out_valid.expect(false.B)
      dut.io.busy.expect(false.B)
    }
  }
}
