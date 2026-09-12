package npu.core

import chisel3._
import chiseltest._
import chiseltest.simulator.VerilatorBackendAnnotation
import org.scalatest.flatspec.AnyFlatSpec
import scala.collection.mutable

class RopeUnitTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior of "RopeUnit"

  private val NumLines = 16
  private val NumPairs = 8
  private val IndexBits = 10
  private val TrigBits = 16
  private val TrigFracBits = 14
  private val WriteBits = 128
  private val FreqBits = 16
  private val LutEntries = 1 << IndexBits
  private val LutWordsPerBurst = WriteBits / TrigBits
  private val Scale = 1 << TrigFracBits

  private def toUInt16(x: Int): Int = x & 0xffff

  private def satSigned8(x: BigInt): Int =
    if (x > 127) 127 else if (x < -128) -128 else x.toInt

  private val cosLut = Array.tabulate(LutEntries) { i =>
    val raw = math.round(math.cos(2.0 * math.Pi * i / LutEntries) * Scale).toInt
    math.max(-32768, math.min(32767, raw))
  }

  private val sinLut = Array.tabulate(LutEntries) { i =>
    val raw = math.round(math.sin(2.0 * math.Pi * i / LutEntries) * Scale).toInt
    math.max(-32768, math.min(32767, raw))
  }

  private def ropePairGolden(
    xEven: Int,
    xOdd: Int,
    m: Int,
    theta: Int
  ): (Int, Int) = {
    val phase = (BigInt(m) * BigInt(theta)) & 0xffff
    val idx = (phase >> (FreqBits - IndexBits)).toInt
    val c = BigInt(cosLut(idx))
    val s = BigInt(sinLut(idx))
    val even = (BigInt(xEven) * c - BigInt(xOdd) * s) >> TrigFracBits
    val odd = (BigInt(xEven) * s + BigInt(xOdd) * c) >> TrigFracBits
    (satSigned8(even), satSigned8(odd))
  }

  private def pokeIdle(dut: RopeUnit): Unit = {
    for (i <- 0 until NumLines) {
      dut.io.in_vec(i).poke(0.S)
      dut.io.in_valid(i).poke(false.B)
      dut.io.freq_block_in(i).poke(0.U)
    }
    dut.io.rope_en.poke(false.B)
    dut.io.stall.poke(false.B)
    dut.io.soft_reset.poke(false.B)
    dut.io.row_change_update.poke(false.B)
    dut.io.position_init.poke(false.B)
    dut.io.base_m_in.poke(0.U)
    dut.io.freq_block_valid.poke(false.B)
    dut.io.lut_cos_wr_en.poke(false.B)
    dut.io.lut_sin_wr_en.poke(false.B)
    dut.io.lut_wr_addr.poke(0.U)
    dut.io.lut_wr_data.foreach(_.poke(0.U))
  }

  private def programTrigLut(
    dut: RopeUnit,
    isCos: Boolean,
    table: Array[Int]
  ): Unit = {
    for (burst <- 0 until LutEntries / LutWordsPerBurst) {
      dut.io.lut_cos_wr_en.poke(isCos.B)
      dut.io.lut_sin_wr_en.poke((!isCos).B)
      dut.io.lut_wr_addr.poke(burst.U)
      for (w <- 0 until LutWordsPerBurst) {
        dut.io.lut_wr_data(w)
          .poke(toUInt16(table(burst * LutWordsPerBurst + w)).U)
      }
      dut.clock.step()
      dut.io.sync_alert.expect(false.B)
    }
    dut.io.lut_cos_wr_en.poke(false.B)
    dut.io.lut_sin_wr_en.poke(false.B)
    dut.clock.step()
  }

  private def programAllTrigLuts(dut: RopeUnit): Unit = {
    programTrigLut(dut, isCos = true, cosLut)
    programTrigLut(dut, isCos = false, sinLut)
    dut.io.lut_ready.expect(true.B)
  }

  private def preload(
    dut: RopeUnit,
    baseM: Int,
    firstBlock: Array[Int]
  ): Unit = {
    dut.io.position_init.poke(true.B)
    dut.io.base_m_in.poke(baseM.U)
    dut.io.rope_en.poke(true.B)
    dut.io.freq_req_block.expect(true.B)
    dut.clock.step()
    dut.io.position_init.poke(false.B)
    dut.io.freq_block_valid.poke(true.B)
    for (i <- 0 until 16) dut.io.freq_block_in(i).poke(firstBlock(i).U)
    dut.io.freq_req_block.expect(false.B)
    dut.clock.step()
    dut.io.freq_block_valid.poke(false.B)
    dut.clock.step()
  }

  it should "bypass data and valid when disabled without requesting FB" in {
    test(new RopeUnit()).withAnnotations(Seq(VerilatorBackendAnnotation)) { dut =>
      pokeIdle(dut)
      for (lane <- 0 until NumLines) {
        val x = lane - 8
        dut.io.in_vec(lane).poke(x.S)
        dut.io.in_valid(lane).poke(true.B)
        dut.io.out_vec(lane).expect(x.S)
        dut.io.out_valid(lane).expect(true.B)
      }
      dut.io.freq_req_block.expect(false.B)
      dut.io.sync_alert.expect(false.B)
    }
  }

  it should "fetch one 32B block for every two accepted beats and preserve position and data through stalls" in {
    test(new RopeUnit()).withAnnotations(Seq(VerilatorBackendAnnotation)) { dut =>
      dut.clock.setTimeout(0)
      pokeIdle(dut)
      dut.io.soft_reset.poke(true.B)
      dut.clock.step()
      dut.io.soft_reset.poke(false.B)
      programAllTrigLuts(dut)

      val baseM = 5
      val blocks = Array.tabulate(24) { block =>
        Array.tabulate(16)(i => (257 + block * 977 + i * 131) & 0xffff)
      }
      preload(dut, baseM, blocks(0))
      dut.io.prefetch_ready.expect(true.B)

      val expected = mutable.Queue[Array[Int]]()
      var pendingResponse: Option[(Int, Array[Int])] = None
      var nextBlock = 1
      var acceptedBeat = 0
      var physicalCycle = 0
      var requestCount = 1
      var sawResponseDuringStall = false
      var sawSameEdgeResponseAndUpper = false
      val totalBeats = 40

      while ((acceptedBeat < totalBeats || expected.nonEmpty) && physicalCycle < 100) {
        val response = pendingResponse
        response match {
          case Some((_, block)) =>
            dut.io.freq_block_valid.poke(true.B)
            for (i <- 0 until 16) dut.io.freq_block_in(i).poke(block(i).U)
          case None =>
            dut.io.freq_block_valid.poke(false.B)
        }

        // Block 1 arrives during stall. Later responses arrive with upper-half
        // completion and exercise the explicit same-edge promotion bypass.
        val stallNow = response.exists(_._1 == 1) || physicalCycle == 15
        val bubbleNow = physicalCycle == 6 || physicalCycle == 14
        val drive = acceptedBeat < totalBeats && !bubbleNow
        val fires = drive && !stallNow
        dut.io.stall.poke(stallNow.B)
        dut.io.row_change_update.poke((fires && acceptedBeat % 32 == 0).B)

        val x = Array.tabulate(NumLines)(i => ((acceptedBeat * 7 + i * 5) % 63) - 31)
        for (lane <- 0 until NumLines) {
          dut.io.in_vec(lane).poke(x(lane).S)
          dut.io.in_valid(lane).poke(drive.B)
        }

        if (fires) {
          val block = blocks(acceptedBeat / 2)
          val halfBase = (acceptedBeat & 1) * NumPairs
          val row = acceptedBeat % 16
          val m = baseM + (acceptedBeat / 32) * 16 + row
          val gold = Array.ofDim[Int](NumLines)
          for (pair <- 0 until NumPairs) {
            val (even, odd) = ropePairGolden(
              x(2 * pair), x(2 * pair + 1), m, block(halfBase + pair)
            )
            gold(2 * pair) = even
            gold(2 * pair + 1) = odd
          }
          expected.enqueue(gold)
        }

        if (!stallNow && dut.io.out_valid(0).peek().litToBoolean) {
          assert(expected.nonEmpty)
          val gold = expected.dequeue()
          for (lane <- 0 until NumLines) {
            dut.io.out_valid(lane).expect(true.B)
            dut.io.out_vec(lane).expect(gold(lane).S)
          }
        } else if (stallNow) {
          dut.io.out_valid.foreach(_.expect(false.B))
        }

        val expectedRequest = fires && (acceptedBeat & 1) == 0
        dut.io.freq_req_block.expect(expectedRequest.B)
        val issued = if (expectedRequest) {
          val id = nextBlock
          nextBlock += 1
          requestCount += 1
          Some((id, blocks(id)))
        } else None

        if (response.nonEmpty && stallNow) sawResponseDuringStall = true
        if (response.nonEmpty && fires && (acceptedBeat & 1) == 1)
          sawSameEdgeResponseAndUpper = true
        dut.io.sync_alert.expect(false.B)
        dut.clock.step()
        pendingResponse = issued
        if (fires) acceptedBeat += 1
        physicalCycle += 1
      }

      assert(acceptedBeat == totalBeats)
      assert(expected.isEmpty)
      assert(requestCount == 1 + totalBeats / 2)
      assert(sawResponseDuringStall)
      assert(sawSameEdgeResponseAndUpper)
    }
  }

  it should "hold half state across bubbles, suppress duplicate requests, and flag a missing next block" in {
    test(new RopeUnit()).withAnnotations(Seq(VerilatorBackendAnnotation)) { dut =>
      pokeIdle(dut)
      val first = Array.tabulate(16)(i => i + 1)
      preload(dut, baseM = 0, first)

      for (lane <- 0 until NumLines) {
        dut.io.in_vec(lane).poke(1.S)
        dut.io.in_valid(lane).poke(true.B)
      }
      dut.io.row_change_update.poke(true.B)
      dut.io.freq_req_block.expect(true.B)
      dut.io.sync_alert.expect(false.B)
      dut.clock.step()

      dut.io.row_change_update.poke(false.B)
      dut.io.in_valid.foreach(_.poke(false.B))
      for (_ <- 0 until 3) {
        dut.io.freq_req_block.expect(false.B)
        dut.io.sync_alert.expect(false.B)
        dut.clock.step()
      }

      dut.io.in_valid.foreach(_.poke(true.B))
      dut.io.freq_req_block.expect(false.B)
      dut.io.sync_alert.expect(true.B)
    }
  }

  it should "raise DFD when traffic starts before position and frequency preload" in {
    test(new RopeUnit()).withAnnotations(Seq(VerilatorBackendAnnotation)) { dut =>
      pokeIdle(dut)
      dut.io.rope_en.poke(true.B)
      dut.io.in_valid.foreach(_.poke(true.B))
      dut.io.in_vec.foreach(_.poke(1.S))
      dut.io.row_change_update.poke(true.B)
      dut.io.sync_alert.expect(true.B)
    }
  }
}
