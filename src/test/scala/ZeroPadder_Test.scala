package npu.core

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec
import scala.util.Random

class ZeroPadderTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior of "ZeroPadder"
  it should "bypass and expand consecutive M1 vectors on accepted physical beats only" in {
    test(new ZeroPadder()) { dut =>
      val rng = new Random(0x1234)
      dut.io.soft_reset.poke(false.B)
      dut.io.compact_en.poke(false.B)
      // Bypass traffic must not change the starting row of a later compact task.
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
      dut.io.in_valid.poke(false.B)
      dut.io.stall.poke(false.B)
      for (_ <- 0 until 29) {
        dut.io.out_valid.expect(false.B)
        dut.io.busy.expect(false.B)
        dut.clock.step()
      }
      for (tile <- 0 until 3) {
        var row = 0
        var cycle = 0
        while (row < 16 && cycle < 200) {
          val stall = rng.nextInt(4) == 0
          dut.io.stall.poke(stall.B)
          dut.io.in_valid.poke((row == 0).B)
          for (lane <- 0 until 16) {
            val value = 40 + tile * 20 + lane
            dut.io.in_vec(lane).poke(value.U)
            dut.io.out_vec(lane).expect((if (row == 0) value else 0).U)
          }
          dut.io.out_valid.expect((!stall).B)
          dut.io.busy.expect((row != 0).B)
          dut.io.sync_alert.expect(false.B)
          dut.clock.step()
          if (!stall) row += 1
          cycle += 1
        }
        assert(row == 16)
        dut.io.busy.expect(false.B)
      }

      dut.io.stall.poke(false.B)
      dut.io.in_valid.poke(true.B)
      dut.clock.step() // row0
      dut.io.sync_alert.expect(true.B) // early next compact vector
      dut.io.out_vec.foreach(_.expect(0.U))
      dut.io.stall.poke(true.B)
      dut.io.sync_alert.expect(false.B)
      dut.clock.step(5)
      dut.io.stall.poke(false.B)
      dut.io.in_valid.poke(false.B)
      dut.clock.step(15)
      dut.io.busy.expect(false.B)
      dut.io.out_valid.expect(false.B)
    }
  }
}
