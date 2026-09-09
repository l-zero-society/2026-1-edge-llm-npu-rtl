package npu.core

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec
import scala.collection.mutable
import scala.util.Random

class GPALUUnitTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior of "GPALUUnit"

  it should "align signed arithmetic, saturation and route valids through bubbles and global stalls" in {
    test(new GPALUUnit()) { dut =>
      val random = new Random(0xace)
      val extrema = Seq(-128, -127, -1, 0, 1, 126, 127)
      case class Result(due: Int, data: Seq[Int], clip: Boolean)
      // Each operation drains before input_mode changes.
      for (direct <- Seq(false, true, false)) {
        dut.io.input_mode.poke((if (direct) 1 else 0).U)
        val pending = mutable.Queue[Result]()
        var enabled = 0
        var heldData: Option[(Seq[BigInt], Seq[BigInt])] = None
        var clipCount = 0
        for (cycle <- 0 until 180) {
          val stalled = cycle % 19 >= 5 && cycle % 19 <= 8
          val valid = cycle < 165 && cycle % 11 != 2
          val mode = cycle % 3
          val shift = if (cycle < 50) 0 else Seq(0, 1, 3, 7, 15, 31)(cycle % 6)
          dut.io.alu_mode.poke(mode.U)
          dut.io.out_shift.poke(shift.U)
          dut.io.stall.poke(stalled.B)
          val a = (0 until 16).map(l => if (cycle < 49) extrema((cycle + l) % 7) else random.nextInt(256) - 128)
          val b = (0 until 16).map(l => if (cycle < 49) extrema(((cycle / 7) + l) % 7) else random.nextInt(256) - 128)
          for (l <- 0 until 16) {
            dut.io.in_vec_a(l).poke(a(l).S)
            dut.io.in_vec_b(l).poke(b(l).S)
            dut.io.in_valid(l).poke(valid.B)
          }
          if (valid && !stalled) {
            val raw = a.zip(b).map { case (x, y) =>
              if (direct) x + y else (mode match {
                case 0 => x
                case 1 => x + y
                case 2 => x * y
              }) >> shift
            }
            val gold = if (direct) raw else raw.map(x => x.max(-128).min(127))
            pending.enqueue(Result(enabled + 3, gold, !direct && raw != gold))
          }
          val due = !stalled && pending.headOption.exists(_.due == enabled)
          dut.io.out_tpu_valid.foreach(_.expect((due && !direct).B))
          dut.io.out_direct_valid.foreach(_.expect((due && direct).B))
          if (due) {
            val gold = pending.dequeue()
            for (l <- 0 until 16) {
              if (direct) dut.io.out_direct(l).expect(gold.data(l).S)
              else dut.io.out_tpu(l).expect(gold.data(l).S)
            }
            dut.io.alu_alert.expect(gold.clip.B)
            if (gold.clip) clipCount += 1
          } else dut.io.alu_alert.expect(false.B)
          val data = (dut.io.out_tpu.map(_.peek().litValue).toSeq,
            dut.io.out_direct.map(_.peek().litValue).toSeq)
          // Consecutive stall edges must freeze both physical data outputs.
          heldData.foreach(previous => assert(data == previous, "Pipeline data changed during stall"))
          heldData = if (stalled) Some(data) else None
          dut.clock.step()
          if (!stalled) enabled += 1
        }
        assert(pending.isEmpty)
        if (!direct) assert(clipCount > 0)
        dut.io.busy.expect(false.B)
      }
    }
  }
}
