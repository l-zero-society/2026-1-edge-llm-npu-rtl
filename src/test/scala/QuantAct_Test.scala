package npu.core

import chisel3._
import chiseltest._
import chiseltest.simulator.VerilatorBackendAnnotation
import org.scalatest.flatspec.AnyFlatSpec
import scala.collection.mutable

class QuantActUnitTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior of "QuantActUnit"

  private val NumLines = 16
  private val IndexBits = 10
  private val OutBits = 8
  private val WriteBits = 128
  private val LutEntries = 1 << IndexBits
  private val LutWordsPerBurst = WriteBits / OutBits

  private def packParam(mult: Int, shift: Int, zp: Int): BigInt = {
    require(mult >= 0 && mult <= 0xffff)
    require(shift >= 0 && shift <= 31)
    require(zp >= -128 && zp <= 127)
    (BigInt(mult) << 16) | (BigInt(shift) << 8) | BigInt(zp & 0xff)
  }

  private def signed8(x: Int): Int = {
    val y = x & 0xff
    if (y >= 128) y - 256 else y
  }

  private def quantGolden(in: BigInt, param: BigInt, actEn: Boolean, lut: Array[Int]): Int = {
    val zp = signed8((param & 0xff).toInt)
    val shift = ((param >> 8) & 0x1f).toInt
    val mult = ((param >> 16) & 0xffff).toInt
    val sub = in - BigInt(zp)
    val product = sub * BigInt(mult)
    val shifted = product >> shift
    if (actEn) {
      val signed10 = shifted.max(BigInt(-512)).min(BigInt(511)).toInt
      lut(signed10 + 512)
    } else shifted.max(BigInt(-128)).min(BigInt(127)).toInt & 0xff
  }

  private def pokeIdle(dut: QuantActUnit): Unit = {
    for (i <- 0 until NumLines) {
      dut.io.in_tpu(i).poke(0.S)
      dut.io.in_direct(i).poke(0.S)
      dut.io.in_valid(i).poke(false.B)
      dut.io.qparam_line_in(i).poke(0.U)
    }
    dut.io.input_mode.poke(0.U)
    dut.io.fusion_second.poke(false.B)
    dut.io.param_mode.poke(0.U)
    dut.io.matrix_param.poke(0.U)
    dut.io.act_mask.poke(0.U)
    dut.io.stall.poke(false.B)
    dut.io.soft_reset.poke(false.B)
    dut.io.qparam_line_valid.poke(false.B)
    dut.io.lut_wr_en.poke(false.B)
    dut.io.lut_wr_addr.poke(0.U)
    for (w <- 0 until LutWordsPerBurst) dut.io.lut_wr_data(w).poke(0.U)
  }

  private def programActivationLut(dut: QuantActUnit, lut: Array[Int]): Unit = {
    require(lut.length == LutEntries)
    for (burst <- 0 until LutEntries / LutWordsPerBurst) {
      dut.io.lut_wr_en.poke(true.B)
      dut.io.lut_wr_addr.poke(burst.U)
      for (w <- 0 until LutWordsPerBurst) {
        val idx = burst * LutWordsPerBurst + w
        dut.io.lut_wr_data(w).poke(lut(idx).U(OutBits.W))
      }
      dut.clock.step()
      dut.io.sync_alert.expect(false.B)
    }
    dut.io.lut_wr_en.poke(false.B)
    var guard = 0
    while (!dut.io.lut_ready.peek().litToBoolean && guard < 8) {
      dut.clock.step()
      dut.io.sync_alert.expect(false.B)
      guard += 1
    }
    dut.io.lut_ready.expect(true.B)
  }

  private def drain(dut: QuantActUnit, expected: mutable.Queue[Array[Int]], maxCycles: Int = 32): Unit = {
    var guard = 0
    while (expected.nonEmpty && guard < maxCycles) {
      if (dut.io.out_valid(0).peek().litToBoolean) {
        val gold = expected.dequeue()
        for (i <- 0 until NumLines) {
          dut.io.out_valid(i).expect(true.B)
          dut.io.out_vec(i).expect(gold(i).U(OutBits.W))
        }
      }
      dut.io.sync_alert.expect(false.B)
      dut.clock.step()
      guard += 1
    }
    assert(expected.isEmpty, s"Timed out with ${expected.size} QuantAct outputs pending")
  }

  it should "broadcast one PER_MATRIX parameter and support activation LUT / linear bypass" in {
    test(new QuantActUnit(numLines = NumLines, writeBits = WriteBits, indexBits = IndexBits, inBits = 32, outBits = OutBits)).withAnnotations(Seq(VerilatorBackendAnnotation)) { dut =>
      pokeIdle(dut)
      dut.io.soft_reset.poke(true.B)
      dut.clock.step()
      dut.io.soft_reset.poke(false.B)

      val lut = Array.tabulate(LutEntries)(i => (i * 29 + 11) & 0xff)
      programActivationLut(dut, lut)

      val matrixParam = packParam(mult = 3, shift = 4, zp = -5)
      dut.io.param_mode.poke(0.U)
      dut.io.matrix_param.poke(matrixParam.U(32.W))
      dut.io.qparam_req_line.expect(false.B)
      dut.io.prefetch_ready.expect(true.B)

      for (actEn <- Seq(false, true)) {
        dut.io.act_mask.poke((if (actEn) 3 else 0).U)
        val expected = mutable.Queue[Array[Int]]()

        for (row <- 0 until 6) {
          val gold = Array.ofDim[Int](NumLines)
          for (lane <- 0 until NumLines) {
            val x = BigInt(20 + row * 17 + lane * 9)
            dut.io.in_tpu(lane).poke(x.S(32.W))
            dut.io.in_valid(lane).poke(true.B)
            gold(lane) = quantGolden(x, matrixParam, actEn, lut)
          }
          expected.enqueue(gold)
          dut.io.qparam_req_line.expect(false.B)
          dut.io.sync_alert.expect(false.B)
          if (dut.io.out_valid(0).peek().litToBoolean) {
            val prior = expected.dequeue()
            for (lane <- 0 until NumLines) {
              dut.io.out_valid(lane).expect(true.B)
              dut.io.out_vec(lane).expect(prior(lane).U(OutBits.W))
            }
          }
          dut.clock.step()
        }

        for (lane <- 0 until NumLines) {
          dut.io.in_valid(lane).poke(false.B)
          dut.io.in_tpu(lane).poke(0.S)
        }
        drain(dut, expected)
      }
    }
  }

  it should "prefetch 64B PER_CHANNEL lines, swap shadow to active every 16 accepted rows, and tolerate stalls" in {
    test(new QuantActUnit(numLines = NumLines, writeBits = WriteBits, indexBits = IndexBits, inBits = 32, outBits = OutBits)).withAnnotations(Seq(VerilatorBackendAnnotation)) { dut =>
      pokeIdle(dut)
      dut.io.soft_reset.poke(true.B)
      dut.clock.step()
      dut.io.soft_reset.poke(false.B)

      val lut = Array.tabulate(LutEntries)(i => i & 0xff)
      programActivationLut(dut, lut)
      dut.io.param_mode.poke(1.U)
      dut.io.act_mask.poke(0.U)

      val lineA = Array.tabulate(NumLines) { lane =>
        packParam(1 + (lane % 4), 3 + (lane % 3), lane - 8)
      }
      val lineB = Array.tabulate(NumLines) { lane =>
        packParam(5 + (lane % 5), 4 + (lane % 2), 7 - lane)
      }
      // A partial final N tile is still a complete 16 x UInt32 QB response.
      // Lanes 0..4 are real; lanes 5..15 are compiler-provided padding whose
      // output is discarded by the existing downstream lane mask.
      val paddedFinalLine = Array.tabulate(NumLines) { lane =>
        if (lane < 5) packParam(9 + lane, 5, lane - 2)
        else packParam(0, 0, 0)
      }
      val qbLines = Array(lineA, lineB, paddedFinalLine)
      var nextQbLine = 0
      var pendingResponse: Option[Array[BigInt]] = None
      var requestCount = 0

      def drivePendingResponse(): Unit = pendingResponse match {
        case Some(line) =>
          dut.io.qparam_line_valid.poke(true.B)
          for (lane <- 0 until NumLines) dut.io.qparam_line_in(lane).poke(line(lane).U(32.W))
        case None =>
          dut.io.qparam_line_valid.poke(false.B)
          for (lane <- 0 until NumLines) dut.io.qparam_line_in(lane).poke(0.U)
      }

      def sampleRequest(): Option[Array[BigInt]] = {
        if (dut.io.qparam_req_line.peek().litToBoolean) {
          val line = qbLines(nextQbLine % qbLines.length)
          nextQbLine += 1
          requestCount += 1
          Some(line)
        } else None
      }

      var prefetchGuard = 0
      while (!dut.io.prefetch_ready.peek().litToBoolean && prefetchGuard < 16) {
        drivePendingResponse()
        for (lane <- 0 until NumLines) {
          dut.io.in_valid(lane).poke(false.B)
          dut.io.in_tpu(lane).poke(0.S)
        }
        val next = sampleRequest()
        dut.io.sync_alert.expect(false.B)
        dut.clock.step()
        pendingResponse = next
        prefetchGuard += 1
      }
      dut.io.prefetch_ready.expect(true.B)
      assert(requestCount == 1, s"Expected one initial QB request, got $requestCount")

      val expected = mutable.Queue[Array[Int]]()
      val totalAcceptedRows = 3 * 16
      var acceptedRows = 0
      var physicalCycle = 0

      while ((acceptedRows < totalAcceptedRows || expected.nonEmpty) && physicalCycle < 300) {
        drivePendingResponse()
        val stallNow = pendingResponse.nonEmpty || (physicalCycle % 17 == 6) || (physicalCycle % 29 == 11)
        dut.io.stall.poke(stallNow.B)
        val driveInput = acceptedRows < totalAcceptedRows && physicalCycle % 11 != 3

        if (driveInput) {
          val tile = acceptedRows / 16
          val row = acceptedRows % 16
          val params = qbLines(tile % qbLines.length)
          val gold = Array.ofDim[Int](NumLines)
          for (lane <- 0 until NumLines) {
            val x = BigInt(-180 + tile * 51 + row * 13 + lane * 9)
            dut.io.in_tpu(lane).poke(x.S(32.W))
            dut.io.in_valid(lane).poke(true.B)
            gold(lane) = quantGolden(x, params(lane), actEn = false, lut)
          }
          if (!stallNow) expected.enqueue(gold)
        } else {
          for (lane <- 0 until NumLines) {
            dut.io.in_tpu(lane).poke(0.S)
            dut.io.in_valid(lane).poke(false.B)
          }
        }

        if (!stallNow && dut.io.out_valid(0).peek().litToBoolean) {
          assert(expected.nonEmpty, "QuantAct output with empty scoreboard")
          val gold = expected.dequeue()
          for (lane <- 0 until NumLines) {
            dut.io.out_valid(lane).expect(true.B)
            dut.io.out_vec(lane).expect(gold(lane).U(OutBits.W))
          }
        }

        val next = sampleRequest()
        if (stallNow) for (lane <- 0 until NumLines) dut.io.out_valid(lane).expect(false.B)
        dut.io.sync_alert.expect(false.B)
        dut.clock.step()
        pendingResponse = next
        if (driveInput && !stallNow) acceptedRows += 1
        physicalCycle += 1
      }

      assert(acceptedRows == totalAcceptedRows)
      assert(expected.isEmpty)
      assert(requestCount == 4, s"Expected exactly 4 QB requests, got $requestCount")
    }
  }

  it should "flag a partial-lane valid beat" in {
    test(new QuantActUnit()).withAnnotations(Seq(VerilatorBackendAnnotation)) { dut =>
      pokeIdle(dut)
      dut.io.param_mode.poke(0.U)
      dut.io.matrix_param.poke(packParam(1, 2, 0).U)
      for (lane <- 0 until NumLines) dut.io.in_valid(lane).poke((lane != 15).B)
      dut.io.sync_alert.expect(true.B)
    }
  }

  it should "select all fusion mask bits and preserve signed requant extrema with four-cycle latency" in {
    test(new QuantActUnit()).withAnnotations(Seq(VerilatorBackendAnnotation)) { dut =>
      pokeIdle(dut)
      val lut = Array.tabulate(LutEntries)(i => ((i * 29) ^ (i >> 3) ^ (i >> 8)) & 255)
      programActivationLut(dut, lut)
      val inputs = Seq(BigInt(Int.MinValue), BigInt(Int.MaxValue), BigInt(-513), BigInt(-512),
        BigInt(-129), BigInt(-128), BigInt(-1), BigInt(0), BigInt(127), BigInt(128), BigInt(511), BigInt(512))
      val params = Seq(packParam(1, 0, 0), packParam(65535, 31, -128),
        packParam(65535, 0, 127), packParam(0, 0, -5), packParam(3, 2, -7))
      for (mask <- 0 until 4; second <- Seq(false, true); param <- params) {
        dut.io.act_mask.poke(mask.U)
        dut.io.fusion_second.poke(second.B)
        dut.io.matrix_param.poke(param.U)
        val active = (mask & (if (second) 2 else 1)) != 0
        val pending = mutable.Queue[(Int, Array[Int])]()
        for (cycle <- 0 until 12) {
          val valid = cycle < 6 && cycle != 2
          for (lane <- 0 until NumLines) {
            val x = inputs((cycle + lane) % inputs.size)
            dut.io.in_tpu(lane).poke(x.S(32.W))
            dut.io.in_valid(lane).poke(valid.B)
          }
          if (valid) pending.enqueue((cycle + 4, Array.tabulate(NumLines)(lane =>
            quantGolden(inputs((cycle + lane) % inputs.size), param, active, lut))))
          val due = pending.headOption.exists(_._1 == cycle)
          dut.io.out_valid.foreach(_.expect(due.B))
          if (due) {
            val gold = pending.dequeue()._2
            for (lane <- 0 until NumLines) dut.io.out_vec(lane).expect(gold(lane).U)
          }
          dut.io.qparam_req_line.expect(false.B)
          dut.io.sync_alert.expect(false.B)
          dut.clock.step()
        }
        assert(pending.isEmpty)
        dut.io.busy.expect(false.B)
      }
    }
  }

  it should "force direct activation, ignore every qparam, and retain LUT responses across stalls" in {
    test(new QuantActUnit()).withAnnotations(Seq(VerilatorBackendAnnotation)) { dut =>
      pokeIdle(dut)
      dut.io.input_mode.poke(1.U)
      dut.io.param_mode.poke(1.U)
      // Two address signatures distinguish all 1024 addresses, including 0/512/1023.
      for (signature <- 0 until 2) {
        val lut = Array.tabulate(LutEntries)(i => if (signature == 0) i & 255 else (i >> 8) + 137)
        programActivationLut(dut, lut)
        val pending = mutable.Queue[(Int, Array[Int])]()
        var enabledCycle = 0
        var row = 0
        var cycle = 0
        while ((row < 65 || pending.nonEmpty) && cycle < 240) {
          // Includes a stall exactly when the first synchronous LUT response arrives.
          val stalled = (cycle >= 4 && cycle <= 7) || cycle % 13 == 9 || cycle % 13 == 10
          val valid = row < 65 && cycle % 17 != 12
          dut.io.stall.poke(stalled.B)
          dut.io.matrix_param.poke(packParam(if (cycle % 2 == 0) 0 else 65535, cycle % 32, (cycle % 256) - 128).U)
          dut.io.act_mask.poke((cycle % 4).U)
          dut.io.fusion_second.poke((cycle % 2 == 0).B)
          dut.io.qparam_line_valid.poke((cycle % 3 == 0).B)
          val xs = Array.tabulate(NumLines)(lane =>
            if (row == 0) Seq(-512, 0, 511)(lane % 3) else ((row - 1) * 16 + lane) % 1024 - 512)
          for (lane <- 0 until NumLines) {
            dut.io.in_direct(lane).poke(xs(lane).S)
            dut.io.in_tpu(lane).poke(Int.MaxValue.S)
            dut.io.in_valid(lane).poke(valid.B)
            dut.io.qparam_line_in(lane).poke(packParam(65535, 0, 127).U)
          }
          if (valid && !stalled) {
            pending.enqueue((enabledCycle + 4, xs.map(x => lut(x + 512))))
            row += 1
          }
          val due = !stalled && pending.headOption.exists(_._1 == enabledCycle)
          dut.io.out_valid.foreach(_.expect(due.B))
          if (due) {
            val gold = pending.dequeue()._2
            for (lane <- 0 until NumLines) dut.io.out_vec(lane).expect(gold(lane).U)
          }
          dut.io.qparam_req_line.expect(false.B)
          dut.io.sync_alert.expect(false.B)
          dut.clock.step()
          if (!stalled) enabledCycle += 1
          cycle += 1
        }
        assert(row == 65 && pending.isEmpty)
        dut.io.in_valid.foreach(_.poke(false.B))
        dut.io.stall.poke(false.B)
        dut.io.qparam_line_valid.poke(false.B)
        dut.clock.step(5)
        dut.io.out_valid.foreach(_.expect(false.B))
        dut.io.busy.expect(false.B)
      }
    }
  }


  it should "instantiate exactly one shared activation LUT for each of the sixteen lanes" in {
    val fir = circt.stage.ChiselStage.emitCHIRRTL(new QuantActUnit())
    // Follow the elaborated hierarchy (rather than counting source declarations).
    val modules = fir.split("(?m)^  module ").drop(1)
    val instance = "(?m)\\s*inst \\S+ of (\\S+)".r
    val children = modules.map { body =>
      val name = body.takeWhile(c => !c.isWhitespace && c != ':')
      name -> instance.findAllMatchIn(body).map(_.group(1)).toSeq
    }.toMap
    def countLuts(name: String): Int = {
      if (name.startsWith("Universal_Wide_LUT")) 1
      else children.getOrElse(name, Seq.empty).map(countLuts).sum
    }
    assert(countLuts("QuantActUnit") == 16)
    val laneModules = children.keys.filter(_.startsWith("QuantActCore")).toSeq
    assert(laneModules.nonEmpty)
    laneModules.foreach(name => assert(countLuts(name) == 1))
  }

}
