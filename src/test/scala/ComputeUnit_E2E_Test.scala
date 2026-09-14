package npu.top

import chisel3._
import chiseltest._
import chiseltest.experimental.expose
import chiseltest.simulator.VerilatorBackendAnnotation
import npu.core._
import org.scalatest.flatspec.AnyFlatSpec

import scala.collection.mutable
import scala.util.Random

// Test-only observation points. expose uses a bore to create top-level outputs
// without adding architectural debug ports to the production ComputeUnit IO.
class ComputeUnitE2EHarness extends ComputeUnit {
  val observedTpuOut = expose(tpu.io.out_accum)
  val observedTpuValid = expose(tpu.io.out_valid(0))
  val observedTpuRowChange = expose(tpu.io.out_meta.row_change_update)
  val observedVpu1Out = expose(vpu1.io.out_vec)
  val observedVpu1Valid = expose(vpu1.io.out_valid(0))
  val observedVpu1RowChange = expose(vpu1.io.out_row_change_update)
  val observedVpu2RowChangeIn = expose(vpu2.io.row_change_update_in)
  val observedNormPhase1Done = expose(vpu2.norm.io.phase1_vector_done)
  val observedNormPhase2RowChange = expose(vpu2.norm.io.phase2_row_change_update_out)
  val observedNormMetadataCount = expose(vpu2.norm.io.metadata_count)
}

class ComputeUnitE2ETest extends AnyFlatSpec with ChiselScalatestTester {
  behavior of "ComputeUnit end-to-end datapath"

  private val Lanes = 16
  private val NormIndexBits = 8
  private val NormEntries = 1 << NormIndexBits
  private val LutFracBits = 14
  private val InvFracBits = 20
  private val AccBits = 32
  private val ScaleBits = 36
  private val OneQ = 1L << LutFracBits
  private val InvSqrt2Q = math.round((1.0 / math.sqrt(2.0)) * OneQ.toDouble)

  private case class NormVector(
    logicalLength: Int,
    beats: Vector[Vector[Int]],
    metadata: Vector[Boolean]
  ) {
    require(beats.length == (logicalLength + Lanes - 1) / Lanes)
    require(beats.forall(_.length == Lanes))
    require(metadata.length == beats.length)
    def logical: Vector[Int] = beats.flatten.take(logicalLength)
  }

  private case class TimedBeat(
    readyEnabledEdge: Int,
    data: Vector[Int],
    rowChange: Boolean,
    acceptedBeat: Int
  )

  private def byte(x: Int): Int = x & 0xff

  private def signedByte(x: BigInt): Int = {
    val clipped = if (x > 127) 127 else if (x < -128) -128 else x.toInt
    byte(clipped)
  }

  private def mask(bits: Int): BigInt = (BigInt(1) << bits) - 1

  private def drive(port: Vec[UInt], values: Seq[Int]): Unit =
    values.zipWithIndex.foreach { case (value, lane) => port(lane).poke(byte(value).U) }

  private def expectBytes(port: Vec[UInt], values: Seq[Int], context: => String): Unit =
    values.zipWithIndex.foreach { case (value, lane) =>
      val actual = port(lane).peek().litValue.toInt
      assert(actual == byte(value), s"$context lane=$lane expected=${byte(value)} actual=$actual")
    }

  private def clearStreamInputs(dut: ComputeUnitE2EHarness): Unit = {
    dut.io.ub_valid.poke(false.B)
    dut.io.wb_valid.poke(false.B)
    dut.io.vb_valid.poke(false.B)
    dut.io.nb_valid.poke(false.B)
    dut.io.tpu_input_tile_start.poke(false.B)
    dut.io.ub_stream_en.poke(false.B)
    dut.io.wb_stream_en.poke(false.B)
    dut.io.comp_stream_en.poke(false.B)
    dut.io.direct_row_change_update.poke(false.B)
  }

  private def initComputeUnit(dut: ComputeUnitE2EHarness): Unit = {
    dut.clock.setTimeout(0)
    Seq(dut.io.ub_in, dut.io.wb_in, dut.io.vb_in, dut.io.nb_in)
      .foreach(_.foreach(_.poke(0.U)))
    clearStreamInputs(dut)
    Seq(
      dut.io.ub_transpose_en,
      dut.io.wb_transpose_en,
      dut.io.output_transpose_en,
      dut.io.vector_compact_in,
      dut.io.vector_compact_out,
      dut.io.tpu_en,
      dut.io.tpu_clear_w,
      dut.io.vpu1_en,
      dut.io.vpu1_fusion_second,
      dut.io.vpu2_en,
      dut.io.vpu2_norm_phase,
      dut.io.vpu2_clr_acc,
      dut.io.vpu2_rope_en,
      dut.io.rope_position_init,
      dut.io.lut_program_start,
      dut.io.qb_valid,
      dut.io.fb_valid,
      dut.io.soft_reset,
      dut.io.stall
    ).foreach(_.poke(false.B))
    dut.io.tpu_interm_num.poke(1.U)
    dut.io.tpu_out_col_num.poke(1.U)
    dut.io.vpu1_input_mode.poke(VPU1InputMode.TPU)
    dut.io.vpu1_output_route.poke(VPU1OutputRoute.BLOCK)
    dut.io.vpu1_param_mode.poke(QuantParamMode.PER_MATRIX)
    dut.io.matrix_quant_param.poke((BigInt(1) << 16).U)
    dut.io.vpu1_act_mask.poke(0.U)
    dut.io.vpu1_alu_mode.poke(GPALUMode.BYPASS)
    dut.io.vpu1_out_shift.poke(0.U)
    dut.io.vpu2_input_sel.poke(0.U)
    dut.io.vpu2_norm_mode.poke(NormMode.BYPASS)
    dut.io.vpu2_norm_layout.poke(NormLayoutMode.DISTRIBUTED)
    dut.io.norm_logical_vector_length.poke(16.U)
    dut.io.norm_inv_vector_length.poke((1 << 16).U)
    dut.io.norm_epsilon.poke(0.U)
    dut.io.rope_base_m.poke(0.U)
    dut.io.lut_write.poke(0.U)
    dut.io.qb_data.foreach(_.poke(0.U))
    dut.io.fb_data.foreach(_.poke(0.U))
  }

  private def assertHealthy(dut: ComputeUnitE2EHarness, context: => String): Unit = {
    assert(!dut.io.control_alert.peek().litToBoolean, s"$context unexpected control_alert")
    assert(!dut.io.fatal_alert.peek().litToBoolean, s"$context unexpected fatal_alert")
  }

  private val identityAct = Vector.tabulate(1024) { index =>
    byte(math.max(-128, math.min(127, index - 512)))
  }

  private val rsqrtScaleTable = Vector.tabulate(NormEntries) { index =>
    val normalized = math.max(1 << (NormIndexBits - 1), index).toDouble /
      (1 << (NormIndexBits - 1)).toDouble
    math.max(0L, math.min(65535L,
      math.round((1.0 / math.sqrt(normalized)) * OneQ.toDouble))).toInt
  }

  private def programLuts(
    dut: ComputeUnitE2EHarness,
    activation: Boolean,
    scaleTable: Option[Vector[Int]]
  ): Unit = {
    clearStreamInputs(dut)
    dut.io.tpu_en.poke(false.B)
    dut.io.vpu1_en.poke(false.B)
    dut.io.vpu2_en.poke(false.B)
    dut.io.stall.poke(false.B)
    val bitmap = (if (activation) 16 else 0) | (if (scaleTable.nonEmpty) 4 else 0)
    dut.io.lut_write.poke(bitmap.U)
    dut.io.lut_program_start.poke(true.B)
    assertHealthy(dut, "LUT start")
    dut.clock.step()
    dut.io.lut_program_start.poke(false.B)

    val payloads = mutable.ArrayBuffer[Vector[Int]]()
    if (activation) {
      for (address <- 0 until 64)
        payloads += identityAct.slice(address * 16, address * 16 + 16)
    }
    scaleTable.foreach { table =>
      require(table.length == NormEntries)
      for (address <- 0 until 32) {
        payloads += Vector.tabulate(16) { byteIndex =>
          val word = table(address * 8 + byteIndex / 2)
          if ((byteIndex & 1) == 0) word & 0xff else (word >> 8) & 0xff
        }
      }
    }

    payloads.zipWithIndex.foreach { case (payload, beat) =>
      drive(dut.io.wb_in, payload)
      dut.io.wb_valid.poke(true.B)
      assert(dut.io.lut_in_ready.peek().litToBoolean, s"LUT payload not ready at beat=$beat")
      assertHealthy(dut, s"LUT beat=$beat")
      dut.clock.step()
    }
    dut.io.wb_valid.poke(false.B)
    dut.clock.step()
    assert(dut.io.lut_prog_done.peek().litToBoolean, "LUT task did not complete after final write ACK")
    assert(!dut.io.lut_prog_busy.peek().litToBoolean, "LUT task remained busy after completion")
    assertHealthy(dut, "LUT completion")
    dut.clock.step()
  }

  private def configureTpu(
    dut: ComputeUnitE2EHarness,
    kTiles: Int,
    nTiles: Int,
    compactInput: Boolean,
    compactOutput: Boolean,
    transposeOperands: Boolean,
    fusion: Boolean
  ): Unit = {
    clearStreamInputs(dut)
    dut.io.ub_transpose_en.poke(transposeOperands.B)
    dut.io.wb_transpose_en.poke(transposeOperands.B)
    dut.io.output_transpose_en.poke(false.B)
    dut.io.vector_compact_in.poke(compactInput.B)
    dut.io.vector_compact_out.poke(compactOutput.B)
    dut.io.tpu_en.poke(true.B)
    dut.io.tpu_interm_num.poke(kTiles.U)
    dut.io.tpu_out_col_num.poke(nTiles.U)
    dut.io.vpu1_en.poke(true.B)
    dut.io.vpu1_input_mode.poke(VPU1InputMode.TPU)
    dut.io.vpu1_output_route.poke(VPU1OutputRoute.COMPUTE)
    dut.io.vpu1_param_mode.poke(QuantParamMode.PER_MATRIX)
    dut.io.matrix_quant_param.poke((BigInt(1) << 16).U)
    dut.io.vpu1_act_mask.poke(0.U)
    dut.io.vpu1_fusion_second.poke(fusion.B)
    dut.io.vpu1_alu_mode.poke(if (fusion) GPALUMode.ADD else GPALUMode.BYPASS)
    dut.io.vpu1_out_shift.poke(0.U)
    dut.io.vpu2_en.poke(false.B)
  }

  private def runTpuOperation(
    dut: ComputeUnitE2EHarness,
    label: String,
    aTiles: Vector[Vector[Vector[Vector[Int]]]],
    wTiles: Vector[Vector[Vector[Vector[Int]]]],
    compactInput: Boolean,
    compactOutput: Boolean,
    transposeOperands: Boolean,
    seed: Long,
    fusionOperands: Option[Vector[Vector[Int]]] = None
  ): Unit = {
    val mGroups = aTiles.length
    val kTiles = aTiles.head.length
    val nTiles = wTiles.length
    require(aTiles.forall(_.length == kTiles))
    require(wTiles.forall(_.length == kTiles))
    require(aTiles.flatten.forall(tile => tile.length == Lanes && tile.forall(_.length == Lanes)))
    require(wTiles.flatten.forall(tile => tile.length == Lanes && tile.forall(_.length == Lanes)))

    val golden = Vector.tabulate(mGroups, nTiles, Lanes, Lanes) { (mg, nt, row, col) =>
      (for {
        kt <- 0 until kTiles
        k <- 0 until Lanes
      } yield aTiles(mg)(kt)(row)(k) * wTiles(nt)(kt)(col)(k)).sum
    }
    val expectedRows = (for {
      mg <- 0 until mGroups
      nt <- 0 until nTiles
      row <- 0 until Lanes
    } yield (mg, nt, row, golden(mg)(nt)(row))).toVector
    fusionOperands.foreach { operands =>
      require(operands.length == expectedRows.length,
        s"$label requires one VB operand per TPU output row")
      require(operands.forall(_.length == Lanes),
        s"$label requires $Lanes lanes in every VB operand")
    }
    val expectedVpuRows = expectedRows.zipWithIndex.map {
      case ((mg, nt, row, data), index) =>
        val quantized = data.map(_.max(-128).min(127))
        val fused = fusionOperands match {
          case Some(operands) => quantized.zip(operands(index)).map {
            case (a, b) => (a + b).max(-128).min(127)
          }
          case None => quantized
        }
        (mg, nt, row, fused)
    }

    configureTpu(dut, kTiles, nTiles, compactInput, compactOutput,
      transposeOperands, fusionOperands.nonEmpty)
    val rng = new Random(seed)
    var physicalCycle = 0
    var tpuSeen = 0
    var vpuSeen = 0
    var outputSeen = 0
    var tpuRowChanges = 0
    var vpuRowChanges = 0
    var vbRequestCount = 0
    var activeVbResponse = Option.empty[Vector[Int]]

    def monitor(stall: Boolean): Unit = {
      val context = s"$label physical=$physicalCycle tpuAccepted=$tpuSeen vpuAccepted=$vpuSeen"
      assertHealthy(dut, context)
      val tpuValid = dut.observedTpuValid.peek().litToBoolean
      val vpuValid = dut.observedVpu1Valid.peek().litToBoolean
      val finalValid = dut.io.compute_out_valid.peek().litToBoolean
      if (stall) {
        assert(!tpuValid && !vpuValid && !finalValid, s"$context valid asserted during stall")
        assert(!dut.observedTpuRowChange.peek().litToBoolean,
          s"$context TPU row-change asserted during stall")
        assert(!dut.observedVpu1RowChange.peek().litToBoolean,
          s"$context VPU1 row-change asserted during stall")
      } else {
        if (tpuValid) {
          assert(tpuSeen < expectedRows.length, s"$context unexpected TPU row")
          val (mg, nt, row, data) = expectedRows(tpuSeen)
          data.zipWithIndex.foreach { case (value, lane) =>
            val actual = dut.observedTpuOut(lane).peek().litValue.toInt
            assert(actual == value,
              s"$label TPU data mismatch physical=$physicalCycle accepted=$tpuSeen " +
                s"mGroup=$mg nTile=$nt row=$row lane=$lane expected=$value actual=$actual")
          }
          val expectedMeta = row == 0 && nt == 0
          val actualMeta = dut.observedTpuRowChange.peek().litToBoolean
          assert(actualMeta == expectedMeta,
            s"$label TPU metadata mismatch physical=$physicalCycle accepted=$tpuSeen " +
              s"mGroup=$mg nTile=$nt row=$row expected=$expectedMeta actual=$actualMeta")
          if (actualMeta) tpuRowChanges += 1
          tpuSeen += 1
        } else assert(!dut.observedTpuRowChange.peek().litToBoolean,
          s"$context TPU metadata without valid")

        if (vpuValid) {
          assert(vpuSeen < expectedVpuRows.length, s"$context unexpected VPU1 row")
          val (mg, nt, row, data) = expectedVpuRows(vpuSeen)
          expectBytes(dut.observedVpu1Out, data,
            s"$label VPU1 physical=$physicalCycle accepted=$vpuSeen mGroup=$mg nTile=$nt row=$row")
          val expectedMeta = row == 0 && nt == 0
          val actualMeta = dut.observedVpu1RowChange.peek().litToBoolean
          assert(actualMeta == expectedMeta,
            s"$label VPU1 metadata mismatch physical=$physicalCycle accepted=$vpuSeen " +
              s"mGroup=$mg nTile=$nt row=$row expected=$expectedMeta actual=$actualMeta")
          if (actualMeta) vpuRowChanges += 1

          val shouldEmit = !compactOutput || row == 0
          assert(finalValid == shouldEmit,
            s"$label final valid mismatch physical=$physicalCycle mGroup=$mg nTile=$nt row=$row " +
              s"expected=$shouldEmit actual=$finalValid")
          if (finalValid) {
            expectBytes(dut.io.compute_out, data,
              s"$label final physical=$physicalCycle output=$outputSeen mGroup=$mg nTile=$nt row=$row")
            outputSeen += 1
          }
          vpuSeen += 1
        } else {
          assert(!dut.observedVpu1RowChange.peek().litToBoolean,
            s"$context VPU1 metadata without valid")
          assert(!finalValid, s"$context final output without VPU1 result")
        }
      }
    }

    def edge(stall: Boolean): Unit = {
      dut.io.stall.poke(stall.B)
      activeVbResponse match {
        case Some(response) =>
          drive(dut.io.vb_in, response)
          dut.io.vb_valid.poke(true.B)
        case None =>
          drive(dut.io.vb_in, Vector.fill(Lanes)(0))
          dut.io.vb_valid.poke(false.B)
      }
      monitor(stall)
      val request = dut.io.vb_req.peek().litToBoolean
      if (fusionOperands.nonEmpty) {
        assert(!request || !stall,
          s"$label VB request asserted during stall at physical=$physicalCycle")
        assert(!request || vbRequestCount < fusionOperands.get.length,
          s"$label unexpected VB request at physical=$physicalCycle request=$vbRequestCount")
      } else {
        assert(!request, s"$label unexpected VB request at physical=$physicalCycle")
      }
      val requestedResponse =
        if (request) Some(fusionOperands.get(vbRequestCount)) else None
      if (request) vbRequestCount += 1
      val responseConsumed = activeVbResponse.nonEmpty && !stall
      dut.clock.step()
      if (responseConsumed) activeVbResponse = None
      requestedResponse.foreach(response => activeVbResponse = Some(response))
      physicalCycle += 1
    }

    def acceptedEdge(): Unit = {
      var accepted = false
      while (!accepted) {
        val stall = rng.nextInt(4) == 0
        edge(stall)
        accepted = !stall
      }
    }

    dut.io.tpu_clear_w.poke(true.B)
    edge(stall = false)
    dut.io.tpu_clear_w.poke(false.B)

    def loadWeight(tile: Vector[Vector[Int]]): Unit = {
      if (transposeOperands) {
        val stored = tile.transpose
        for (row <- 0 until Lanes) {
          drive(dut.io.wb_in, stored(row))
          dut.io.wb_valid.poke(true.B)
          acceptedEdge()
        }
        dut.io.wb_valid.poke(false.B)
        dut.io.wb_stream_en.poke(true.B)
        for (_ <- 0 until Lanes) acceptedEdge()
        dut.io.wb_stream_en.poke(false.B)
      } else {
        for (row <- 0 until Lanes) {
          drive(dut.io.wb_in, tile(row))
          dut.io.wb_valid.poke(true.B)
          acceptedEdge()
        }
        dut.io.wb_valid.poke(false.B)
      }
    }

    def feedInput(tile: Vector[Vector[Int]]): Unit = {
      if (transposeOperands) {
        val stored = tile.transpose
        for (row <- 0 until Lanes) {
          drive(dut.io.ub_in, stored(row))
          dut.io.ub_valid.poke(true.B)
          acceptedEdge()
        }
        dut.io.ub_valid.poke(false.B)
        dut.io.ub_stream_en.poke(true.B)
        for (row <- 0 until Lanes) {
          dut.io.tpu_input_tile_start.poke((row == 0).B)
          acceptedEdge()
        }
        dut.io.ub_stream_en.poke(false.B)
        dut.io.tpu_input_tile_start.poke(false.B)
      } else if (compactInput) {
        drive(dut.io.ub_in, tile.head)
        dut.io.ub_valid.poke(true.B)
        dut.io.tpu_input_tile_start.poke(true.B)
        acceptedEdge()
        dut.io.ub_valid.poke(false.B)
        dut.io.tpu_input_tile_start.poke(false.B)
        for (_ <- 1 until Lanes) {
          assert(dut.io.zero_pad_busy.peek().litToBoolean,
            s"$label ZeroPadder left compact tile early at physical=$physicalCycle")
          acceptedEdge()
        }
        assert(!dut.io.zero_pad_busy.peek().litToBoolean,
          s"$label ZeroPadder did not return to row0")
      } else {
        for (row <- 0 until Lanes) {
          var accepted = false
          while (!accepted) {
            val bubble = rng.nextInt(7) == 0
            val stall = rng.nextInt(4) == 0
            drive(dut.io.ub_in, tile(row))
            dut.io.ub_valid.poke((!bubble).B)
            dut.io.tpu_input_tile_start.poke((row == 0 && !bubble).B)
            edge(stall)
            accepted = !bubble && !stall
          }
        }
        dut.io.ub_valid.poke(false.B)
        dut.io.tpu_input_tile_start.poke(false.B)
      }
    }

    def decodeComputeTile(index: Int): (Int, Int, Int) = {
      val outputTile = index / kTiles
      (outputTile / nTiles, outputTile % nTiles, index % kTiles)
    }

    val totalComputeTiles = mGroups * nTiles * kTiles
    val (_, firstNt, firstKt) = decodeComputeTile(0)
    loadWeight(wTiles(firstNt)(firstKt))
    for (computeTile <- 0 until totalComputeTiles) {
      val (mg, _, kt) = decodeComputeTile(computeTile)
      feedInput(aTiles(mg)(kt))
      if (computeTile + 1 < totalComputeTiles) {
        val (_, nextNt, nextKt) = decodeComputeTile(computeTile + 1)
        loadWeight(wTiles(nextNt)(nextKt))
      }
    }
    clearStreamInputs(dut)

    var drainCycles = 0
    while (vpuSeen < expectedRows.length && drainCycles < 3000) {
      edge(rng.nextInt(5) == 0)
      drainCycles += 1
    }
    assert(tpuSeen == expectedRows.length,
      s"$label missing TPU rows expected=${expectedRows.length} actual=$tpuSeen")
    assert(vpuSeen == expectedRows.length,
      s"$label missing VPU1 rows expected=${expectedRows.length} actual=$vpuSeen")
    val expectedFinal = if (compactOutput) mGroups * nTiles else expectedRows.length
    assert(outputSeen == expectedFinal,
      s"$label final beat count expected=$expectedFinal actual=$outputSeen")
    assert(tpuRowChanges == mGroups,
      s"$label TPU row-change count expected=$mGroups actual=$tpuRowChanges")
    assert(vpuRowChanges == mGroups,
      s"$label VPU1 row-change count expected=$mGroups actual=$vpuRowChanges")
    assert(vbRequestCount == fusionOperands.fold(0)(_.length),
      s"$label VB request count expected=${fusionOperands.fold(0)(_.length)} actual=$vbRequestCount")
    assert(activeVbResponse.isEmpty, s"$label VB response remained pending after drain")
    dut.io.vb_valid.poke(false.B)
    dut.io.stall.poke(false.B)
    dut.clock.step(3)
    assert(!dut.io.compactor_busy.peek().litToBoolean, s"$label Compactor did not drain")
    assertHealthy(dut, s"$label drained")
  }

  private def normalizedIndex(xIn: BigInt): (Int, Int) = {
    val x = xIn & mask(AccBits)
    if (x == 0) (0, 0)
    else {
      val exp = x.bitLength - 1
      val leadingZeros = (AccBits - 1) - exp
      val shifted = (x << leadingZeros) & mask(AccBits)
      val index = ((shifted >> (AccBits - NormIndexBits)).toInt & (NormEntries - 1))
      (index, exp)
    }
  }

  private def invNQ(n: Int): BigInt =
    BigInt(math.round((1.0 / n.toDouble) * (1L << InvFracBits).toDouble))

  private def normScale(stat: BigInt): BigInt = {
    val (index, exp) = normalizedIndex(stat)
    val raw = BigInt(rsqrtScaleTable(index))
    val oddCorrected = if ((exp & 1) != 0) (raw * BigInt(InvSqrt2Q)) >> LutFracBits else raw
    (oddCorrected >> (exp >> 1)) & mask(ScaleBits)
  }

  private def rmsGolden(vector: NormVector, epsilon: BigInt): Vector[Vector[Int]] = {
    val sqSum = vector.logical.foldLeft(BigInt(0))((sum, x) => sum + BigInt(x) * x)
    val meanSq = (sqSum * invNQ(vector.logicalLength)) >> InvFracBits
    val scale = normScale(meanSq + epsilon)
    vector.beats.map(_.map(x => signedByte((BigInt(x) * scale) >> LutFracBits)))
  }

  private def layerGolden(vector: NormVector, epsilon: BigInt): Vector[Vector[Int]] = {
    val sum = vector.logical.foldLeft(BigInt(0))(_ + _)
    val sqSum = vector.logical.foldLeft(BigInt(0))((acc, x) => acc + BigInt(x) * x)
    val invN = invNQ(vector.logicalLength)
    val mean = (sum * invN) >> InvFracBits
    val ex2 = (sqSum * invN) >> InvFracBits
    val variance = (ex2 - mean * mean).max(BigInt(0))
    val scale = normScale(variance + epsilon)
    vector.beats.map(_.map { x =>
      signedByte(((BigInt(x) - mean) * scale) >> LutFracBits)
    })
  }

  private def buildNormVector(length: Int, kind: String): NormVector = {
    val physicalBeats = (length + Lanes - 1) / Lanes
    val values = Vector.tabulate(physicalBeats, Lanes) { (beat, lane) =>
      val element = beat * Lanes + lane
      if (element < length) {
        if (kind == "rms") {
          val magnitude = 1 + ((element * 3 + 1) % 5)
          if ((element & 1) == 0) magnitude else -magnitude
        } else ((element * 5 + 3) % 11) - 3
      } else if (lane == 14) 50 else -40
    }
    val metadata = Vector.tabulate(physicalBeats)(beat => ((beat * 5 + length) % 7) < 3)
    NormVector(length, values, metadata)
  }

  private def configureDistributed(
    dut: ComputeUnitE2EHarness,
    mode: UInt,
    vector: NormVector,
    fromVpu1: Boolean,
    directInputSel: Int
  ): Unit = {
    clearStreamInputs(dut)
    dut.io.ub_transpose_en.poke(false.B)
    dut.io.wb_transpose_en.poke(false.B)
    dut.io.vector_compact_in.poke(false.B)
    dut.io.vector_compact_out.poke(false.B)
    dut.io.tpu_en.poke(false.B)
    dut.io.vpu1_en.poke(fromVpu1.B)
    dut.io.vpu1_input_mode.poke(VPU1InputMode.DIRECT)
    dut.io.vpu1_output_route.poke(if (fromVpu1) VPU1OutputRoute.VPU2 else VPU1OutputRoute.BLOCK)
    dut.io.vpu1_alu_mode.poke(GPALUMode.MUL)
    dut.io.vpu1_out_shift.poke(31.U)
    dut.io.vpu2_en.poke(true.B)
    dut.io.vpu2_input_sel.poke((if (fromVpu1) 2 else directInputSel).U)
    dut.io.vpu2_norm_mode.poke(mode)
    dut.io.vpu2_norm_layout.poke(NormLayoutMode.DISTRIBUTED)
    dut.io.vpu2_norm_phase.poke(false.B)
    dut.io.vpu2_rope_en.poke(false.B)
    dut.io.norm_logical_vector_length.poke(vector.logicalLength.U)
    dut.io.norm_inv_vector_length.poke(invNQ(vector.logicalLength).U)
    dut.io.norm_epsilon.poke(1.U)
    dut.io.vpu2_clr_acc.poke(true.B)
    dut.clock.step()
    dut.io.vpu2_clr_acc.poke(false.B)
    assertHealthy(dut, s"distributed configure N=${vector.logicalLength}")
  }

  private def runDistributedCase(
    dut: ComputeUnitE2EHarness,
    label: String,
    vector: NormVector,
    mode: UInt,
    golden: Vector[Vector[Int]],
    fromVpu1: Boolean,
    directInputSel: Int,
    seed: Long
  ): Unit = {
    configureDistributed(dut, mode, vector, fromVpu1, directInputSel)
    val rng = new Random(seed)
    val phase1Queue = mutable.Queue[(Vector[Int], Boolean, Int)]()
    var sourceBeat = 0
    var phase1Seen = 0
    var physicalCycle = 0
    var requestSeen = false
    var requestCount = 0

    while ((phase1Seen < vector.beats.length || !requestSeen) && physicalCycle < 2000) {
      val stall = rng.nextInt(4) == 0
      val bubble = sourceBeat < vector.beats.length && rng.nextInt(5) == 0
      val send = sourceBeat < vector.beats.length && !bubble
      dut.io.stall.poke(stall.B)
      dut.io.direct_row_change_update.poke(
        (send && vector.metadata(sourceBeat.min(vector.metadata.length - 1))).B)
      if (fromVpu1) {
        drive(dut.io.ub_in, if (send) vector.beats(sourceBeat) else Vector.fill(Lanes)(0))
        drive(dut.io.wb_in, Vector.tabulate(Lanes)(lane => if (send) (lane % 3) - 1 else 0))
        // Preserve the requested vector at the VPU1 output while still using
        // both DIRECT operands: A=(value-B), therefore A+B=value.
        if (send) drive(dut.io.ub_in,
          vector.beats(sourceBeat).zipWithIndex.map { case (value, lane) => value - ((lane % 3) - 1) })
        dut.io.ub_valid.poke(send.B)
        dut.io.wb_valid.poke(send.B)
      } else {
        val data = if (send) vector.beats(sourceBeat) else Vector.fill(Lanes)(0)
        if (directInputSel == 1) {
          drive(dut.io.ub_in, data)
          dut.io.ub_valid.poke(send.B)
          dut.io.nb_valid.poke(false.B)
        } else {
          drive(dut.io.nb_in, data)
          dut.io.nb_valid.poke(send.B)
          dut.io.ub_valid.poke(false.B)
        }
        dut.io.wb_valid.poke(false.B)
      }

      val vpuValid = dut.observedVpu1Valid.peek().litToBoolean
      val nbValid = dut.io.nb_out_valid.peek().litToBoolean
      if (stall) {
        assert(!vpuValid && !nbValid,
          s"$label valid during stall physical=$physicalCycle accepted=$phase1Seen")
      } else if (fromVpu1 && vpuValid) {
        assert(phase1Queue.nonEmpty, s"$label VPU1 output without input at physical=$physicalCycle")
        val (expected, expectedMeta, accepted) = phase1Queue.dequeue()
        expectBytes(dut.observedVpu1Out, expected,
          s"$label VPU1 physical=$physicalCycle accepted=$accepted")
        val actualMeta = dut.observedVpu1RowChange.peek().litToBoolean
        assert(actualMeta == expectedMeta,
          s"$label VPU1 metadata physical=$physicalCycle accepted=$accepted " +
            s"expected=$expectedMeta actual=$actualMeta")
        assert(nbValid, s"$label VPU1 beat did not reach NB at physical=$physicalCycle")
        expectBytes(dut.io.nb_out, expected,
          s"$label NB physical=$physicalCycle accepted=$accepted")
        assert(dut.observedVpu2RowChangeIn.peek().litToBoolean == expectedMeta,
          s"$label VPU2 metadata input mismatch at physical=$physicalCycle accepted=$accepted")
        val expectedDone = phase1Seen == vector.beats.length - 1
        assert(dut.observedNormPhase1Done.peek().litToBoolean == expectedDone,
          s"$label phase1 boundary mismatch at beat=$phase1Seen")
        phase1Seen += 1
      } else if (!fromVpu1 && send && !stall) {
        assert(nbValid, s"$label direct beat did not reach NB at physical=$physicalCycle")
        expectBytes(dut.io.nb_out, vector.beats(sourceBeat),
          s"$label direct NB physical=$physicalCycle accepted=$sourceBeat")
        assert(dut.observedVpu2RowChangeIn.peek().litToBoolean == vector.metadata(sourceBeat),
          s"$label direct metadata input mismatch physical=$physicalCycle beat=$sourceBeat")
        val expectedDone = sourceBeat == vector.beats.length - 1
        assert(dut.observedNormPhase1Done.peek().litToBoolean == expectedDone,
          s"$label direct phase1 boundary mismatch beat=$sourceBeat")
        phase1Seen += 1
      } else if (!fromVpu1) {
        assert(!nbValid, s"$label NB valid without accepted direct beat physical=$physicalCycle")
      }

      val req = dut.io.nb_req.peek().litToBoolean
      if (req) {
        requestSeen = true
        requestCount += 1
      }
      assertHealthy(dut, s"$label phase1 physical=$physicalCycle accepted=$phase1Seen")

      val sourceAccepted = send && !stall
      if (sourceAccepted) {
        if (fromVpu1)
          phase1Queue.enqueue((vector.beats(sourceBeat), vector.metadata(sourceBeat), sourceBeat))
        sourceBeat += 1
      }
      dut.clock.step()
      physicalCycle += 1
    }
    assert(sourceBeat == vector.beats.length && phase1Seen == vector.beats.length,
      s"$label phase1 did not drain source=$sourceBeat output=$phase1Seen")
    assert(requestSeen && requestCount == 1,
      s"$label expected one NB request, saw $requestCount")

    // The request was observed in the preceding cycle. Present the first NB
    // response now to model the production one-cycle SRAM response latency.
    clearStreamInputs(dut)
    dut.io.vpu1_en.poke(false.B)
    dut.io.vpu2_input_sel.poke(0.U)
    dut.io.vpu2_norm_phase.poke(true.B)
    val expectedOut = mutable.Queue[(Vector[Int], Boolean, Int)]()
    var responseBeat = 0
    var outputBeat = 0
    var phase2Cycles = 0
    while ((responseBeat < vector.beats.length || expectedOut.nonEmpty) && phase2Cycles < 1000) {
      val stall = rng.nextInt(4) == 0
      dut.io.stall.poke(stall.B)
      val responseValid = responseBeat < vector.beats.length
      if (responseValid) drive(dut.io.nb_in, vector.beats(responseBeat))
      dut.io.nb_valid.poke(responseValid.B)
      dut.io.direct_row_change_update.poke(false.B)

      val visible = dut.io.compute_out_valid.peek().litToBoolean
      val metaVisible = dut.observedNormPhase2RowChange.peek().litToBoolean
      if (stall) {
        assert(!visible && !metaVisible,
          s"$label phase2 output during stall physical=$physicalCycle")
      } else if (visible) {
        assert(expectedOut.nonEmpty,
          s"$label phase2 output without accepted NB beat physical=$physicalCycle")
        val (expected, expectedMeta, accepted) = expectedOut.dequeue()
        expectBytes(dut.io.compute_out, expected,
          s"$label phase2 physical=$physicalCycle accepted=$accepted output=$outputBeat")
        assert(metaVisible == expectedMeta,
          s"$label phase2 metadata physical=$physicalCycle accepted=$accepted " +
            s"expected=$expectedMeta actual=$metaVisible")
        outputBeat += 1
      } else assert(!metaVisible, s"$label phase2 metadata without output valid")

      if (responseValid && !stall) {
        expectedOut.enqueue((golden(responseBeat), vector.metadata(responseBeat), responseBeat))
        responseBeat += 1
      }
      assertHealthy(dut, s"$label phase2 physical=$physicalCycle response=$responseBeat")
      dut.clock.step()
      physicalCycle += 1
      phase2Cycles += 1
    }
    dut.io.nb_valid.poke(false.B)
    dut.io.stall.poke(false.B)
    assert(outputBeat == vector.beats.length,
      s"$label phase2 output count expected=${vector.beats.length} actual=$outputBeat")
    assert(dut.observedNormMetadataCount.peek().litValue == 0,
      s"$label metadata FIFO did not drain: count=${dut.observedNormMetadataCount.peek().litValue}")
    assertHealthy(dut, s"$label complete")
    dut.clock.step(3)
  }

  it should "compute multi-M multi-K multi-N GEMM and preserve TPU row metadata" in {
    test(new ComputeUnitE2EHarness()).withAnnotations(Seq(VerilatorBackendAnnotation)) { dut =>
      initComputeUnit(dut)
      val a = Vector.tabulate(2, 2, Lanes, Lanes) { (mg, kt, row, k) =>
        ((mg * 3 + kt * 2 + row + k * 2) % 7) - 3
      }
      val w = Vector.tabulate(2, 2, Lanes, Lanes) { (nt, kt, col, k) =>
        if (k == (col * 3 + nt * 5 + kt * 7) % Lanes) {
          if (((col + nt + kt) & 1) == 0) 1 else -1
        } else 0
      }
      runTpuOperation(dut, "GEMM-32x32x32", a, w,
        compactInput = false, compactOutput = false,
        transposeOperands = false, seed = 0x41a2L)

      val tx = Vector.tabulate(1, 1, Lanes, Lanes) { (_, _, row, k) =>
        ((row * 2 + k * 3) % 9) - 4
      }
      val tw = Vector.tabulate(1, 1, Lanes, Lanes) { (_, _, col, k) =>
        if (k == (col + 5) % Lanes) 1 else 0
      }
      runTpuOperation(dut, "GEMM-transposed-16x16x16", tx, tw,
        compactInput = false, compactOutput = false,
        transposeOperands = true, seed = 0x41a3L)
    }
  }

  it should "fuse TPU GEMM results with one-cycle VB responses under stalls" in {
    test(new ComputeUnitE2EHarness()).withAnnotations(Seq(VerilatorBackendAnnotation)) { dut =>
      initComputeUnit(dut)
      val a = Vector.tabulate(1, 1, Lanes, Lanes) { (_, _, row, k) =>
        ((row * 19 + k * 11 + 7) % 81) - 40
      }
      val w = Vector.tabulate(1, 1, Lanes, Lanes) { (_, _, col, k) =>
        if (k == col) {
          if ((col & 1) == 0) 2 else -2
        } else 0
      }
      val vb = Vector.tabulate(Lanes, Lanes) { (row, lane) =>
        ((row * 7 + lane * 13 + 3) % 31) - 15
      }
      runTpuOperation(dut, "GEMM-QuantAct-GPALU-ADD-VB", a, w,
        compactInput = false, compactOutput = false,
        transposeOperands = false, seed = 0x96f1L,
        fusionOperands = Some(vb))
    }
  }

  it should "compute compact-input GEMV with tiled K/N and compact or physical output" in {
    test(new ComputeUnitE2EHarness()).withAnnotations(Seq(VerilatorBackendAnnotation)) { dut =>
      initComputeUnit(dut)
      val x = Vector.tabulate(32)(k => ((k * 5 + 2) % 7) - 3)
      val a = Vector.tabulate(1, 2, Lanes, Lanes) { (_, kt, row, k) =>
        if (row == 0) x(kt * Lanes + k) else 0
      }
      val w = Vector.tabulate(2, 2, Lanes, Lanes) { (nt, kt, col, k) =>
        val globalK = kt * Lanes + k
        if (globalK == (nt * Lanes + col + 3) % 32) 1
        else if (globalK == (nt * Lanes + col + 11) % 32) -1
        else 0
      }
      runTpuOperation(dut, "GEMV-compact-1x32x32", a, w,
        compactInput = true, compactOutput = true,
        transposeOperands = false, seed = 0x52b1L)
      runTpuOperation(dut, "GEMV-physical-1x32x32", a, w,
        compactInput = true, compactOutput = false,
        transposeOperands = false, seed = 0x52b2L)
    }
  }

  it should "align VPU1 DIRECT data and row metadata over VB COMPUTE and VPU2 routes" in {
    test(new ComputeUnitE2EHarness()).withAnnotations(Seq(VerilatorBackendAnnotation)) { dut =>
      initComputeUnit(dut)
      programLuts(dut, activation = true, scaleTable = None)
      dut.io.vpu1_en.poke(true.B)
      dut.io.vpu1_input_mode.poke(VPU1InputMode.DIRECT)
      dut.io.vpu1_alu_mode.poke(GPALUMode.MUL)
      dut.io.vpu1_out_shift.poke(31.U)
      dut.io.vpu2_norm_mode.poke(NormMode.BYPASS)
      dut.io.vpu2_norm_layout.poke(NormLayoutMode.DISTRIBUTED)
      dut.io.vpu2_input_sel.poke(2.U)
      val rng = new Random(0x63c4L)
      var enabledEdge = 0
      var physicalCycle = 0
      var globalAccepted = 0

      for ((route, routeName) <- Seq(
        (VPU1OutputRoute.VB, "VB"),
        (VPU1OutputRoute.COMPUTE, "COMPUTE"),
        (VPU1OutputRoute.VPU2, "VPU2")
      )) {
        dut.io.vpu1_output_route.poke(route)
        dut.io.vpu2_en.poke((route == VPU1OutputRoute.VPU2).B)
        val pending = mutable.Queue[TimedBeat]()
        var accepted = 0
        var outputs = 0
        while ((accepted < 32 || pending.nonEmpty) && physicalCycle < 5000) {
          val stall = rng.nextInt(4) == 0
          val bubble = accepted < 32 && rng.nextInt(5) == 0
          val send = accepted < 32 && !bubble
          val a = Vector.tabulate(Lanes)(lane => ((accepted * 3 + lane * 2) % 25) - 12)
          val b = Vector.tabulate(Lanes)(lane => ((accepted + lane * 3) % 9) - 4)
          val sum = a.zip(b).map { case (x, y) => x + y }
          val marker = Set(0, 7, 16, 29).contains(accepted) ||
            ((globalAccepted * 17 + 3) % 19 == 0)
          drive(dut.io.ub_in, a)
          drive(dut.io.wb_in, b)
          dut.io.ub_valid.poke(send.B)
          dut.io.wb_valid.poke(send.B)
          dut.io.direct_row_change_update.poke((send && marker).B)
          dut.io.stall.poke(stall.B)

          val due = !stall && pending.headOption.exists(_.readyEnabledEdge == enabledEdge)
          val vpuValid = dut.observedVpu1Valid.peek().litToBoolean
          assert(vpuValid == due,
            s"DIRECT-$routeName valid mismatch physical=$physicalCycle enabled=$enabledEdge " +
              s"accepted=$accepted expected=$due actual=$vpuValid")
          if (due) {
            val expected = pending.dequeue()
            expectBytes(dut.observedVpu1Out, expected.data,
              s"DIRECT-$routeName physical=$physicalCycle accepted=${expected.acceptedBeat}")
            val actualMeta = dut.observedVpu1RowChange.peek().litToBoolean
            assert(actualMeta == expected.rowChange,
              s"DIRECT-$routeName metadata physical=$physicalCycle accepted=${expected.acceptedBeat} " +
                s"expected=${expected.rowChange} actual=$actualMeta")
            routeName match {
              case "VB" =>
                assert(dut.io.vb_out_valid.peek().litToBoolean, "DIRECT-VB missing external valid")
                expectBytes(dut.io.vb_out, expected.data, "DIRECT-VB external")
              case "COMPUTE" =>
                assert(dut.io.compute_out_valid.peek().litToBoolean, "DIRECT-COMPUTE missing external valid")
                expectBytes(dut.io.compute_out, expected.data, "DIRECT-COMPUTE external")
              case _ =>
                assert(dut.io.compute_out_valid.peek().litToBoolean, "DIRECT-VPU2 missing external valid")
                expectBytes(dut.io.compute_out, expected.data, "DIRECT-VPU2 external")
                assert(dut.observedVpu2RowChangeIn.peek().litToBoolean == expected.rowChange,
                  s"DIRECT-VPU2 metadata input mismatch accepted=${expected.acceptedBeat}")
            }
            outputs += 1
          } else {
            assert(!dut.observedVpu1RowChange.peek().litToBoolean,
              s"DIRECT-$routeName metadata without output physical=$physicalCycle")
          }
          assertHealthy(dut, s"DIRECT-$routeName physical=$physicalCycle accepted=$accepted")
          if (send && !stall) {
            pending.enqueue(TimedBeat(enabledEdge + 7, sum, marker, accepted))
            accepted += 1
            globalAccepted += 1
          }
          dut.clock.step()
          if (!stall) enabledEdge += 1
          physicalCycle += 1
        }
        clearStreamInputs(dut)
        dut.io.stall.poke(false.B)
        dut.clock.step(3)
        assert(outputs == 32, s"DIRECT-$routeName expected 32 outputs, saw $outputs")
        assert(!dut.io.vpu1_busy.peek().litToBoolean, s"DIRECT-$routeName did not drain")
      }
      assert(globalAccepted == 96, s"DIRECT stress accepted $globalAccepted beats instead of 96")
    }
  }

  it should "normalize VPU1 DIRECT streams through distributed NB phase1 and phase2" in {
    test(new ComputeUnitE2EHarness()).withAnnotations(Seq(VerilatorBackendAnnotation)) { dut =>
      initComputeUnit(dut)
      programLuts(dut, activation = true, scaleTable = Some(rsqrtScaleTable))
      val rms = buildNormVector(30, "rms")
      runDistributedCase(dut, "VPU1-RMSNorm-N30", rms, NormMode.RMSNORM,
        rmsGolden(rms, 1), fromVpu1 = true, directInputSel = 1, seed = 0x74d1L)
      val layer = buildNormVector(48, "layer")
      runDistributedCase(dut, "VPU1-LayerNorm-N48", layer, NormMode.LAYERNORM,
        layerGolden(layer, 1), fromVpu1 = true, directInputSel = 1, seed = 0x74d2L)
    }
  }

  it should "normalize direct UB and NB streams with distributed metadata preservation" in {
    test(new ComputeUnitE2EHarness()).withAnnotations(Seq(VerilatorBackendAnnotation)) { dut =>
      initComputeUnit(dut)
      programLuts(dut, activation = false, scaleTable = Some(rsqrtScaleTable))
      val rms = buildNormVector(30, "rms")
      runDistributedCase(dut, "UB-RMSNorm-N30", rms, NormMode.RMSNORM,
        rmsGolden(rms, 1), fromVpu1 = false, directInputSel = 1, seed = 0x85e1L)
      val layer = buildNormVector(48, "layer")
      runDistributedCase(dut, "NB-LayerNorm-N48", layer, NormMode.LAYERNORM,
        layerGolden(layer, 1), fromVpu1 = false, directInputSel = 0, seed = 0x85e2L)
    }
  }
}
