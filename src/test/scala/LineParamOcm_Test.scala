package npu.core.memory

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class LineParamOcmTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior of "ParamPingPongSRAM"

  private def pokeIdle(dut: ParamPingPongSRAM, units: Int, cache: Boolean): Unit = {
    dut.io.soft_reset.poke(false.B)
    dut.io.enable.poke(true.B)
    dut.io.shoot.poke(false.B)
    dut.io.cache_mode.poke(cache.B)
    dut.io.tensor_read_units.poke(units.U)
    dut.io.dma_valid.poke(false.B)
    dut.io.dma_data.poke(0.U)
    dut.io.dma_chunk_last.poke(false.B)
    dut.io.dma_tensor_last.poke(false.B)
    dut.io.req_line.poke(false.B)
  }

  private def writeWord(
    dut: ParamPingPongSRAM,
    data: BigInt,
    chunkLast: Boolean,
    tensorLast: Boolean
  ): Unit = {
    dut.io.dma_valid.poke(true.B)
    dut.io.dma_data.poke(data.U)
    dut.io.dma_chunk_last.poke(chunkLast.B)
    dut.io.dma_tensor_last.poke(tensorLast.B)
    dut.io.sync_alert.expect(false.B)
    dut.clock.step()
    dut.io.dma_valid.poke(false.B)
    dut.io.dma_chunk_last.poke(false.B)
    dut.io.dma_tensor_last.poke(false.B)
  }

  private def shoot(dut: ParamPingPongSRAM): Unit = {
    dut.io.ready.expect(true.B)
    dut.io.shoot.poke(true.B)
    dut.clock.step()
    dut.io.shoot.poke(false.B)
    dut.io.working.expect(true.B)
  }

  private def readUnit(
    dut: ParamPingPongSRAM,
    expected: BigInt,
    wrap: Boolean = false
  ): Unit = {
    dut.io.req_line.poke(true.B)
    dut.io.tensor_wrap.expect(wrap.B)
    dut.io.sync_alert.expect(false.B)
    dut.clock.step()
    dut.io.line_valid.expect(true.B)
    dut.io.line_data.expect(expected.U)
    dut.io.req_line.poke(false.B)
    dut.clock.step()
    dut.io.line_valid.expect(false.B)
  }

  private def word512(lower: BigInt, upper: BigInt): BigInt =
    lower | (upper << 256)

  it should "provide QB 64B reads with one-cycle latency and wrap a cache across both 4KB banks" in {
    test(new QbController) { dut =>
      val units = 66
      pokeIdle(dut, units, cache = true)
      val data = Array.tabulate(units)(i => BigInt(i + 1) << 400 | BigInt(i + 17))
      for (i <- data.indices) {
        writeWord(
          dut,
          data(i),
          chunkLast = i == 63 || i == data.length - 1,
          tensorLast = i == data.length - 1
        )
      }
      shoot(dut)
      for (i <- data.indices) readUnit(dut, data(i), wrap = i == data.length - 1)
      readUnit(dut, data(0))
    }
  }

  it should "switch QB spill banks at 64 read units and refill the freed bank" in {
    test(new QbController) { dut =>
      val units = 130
      pokeIdle(dut, units, cache = false)
      val data = Array.tabulate(units)(i => BigInt(i + 101) << 384 | BigInt(i + 1))

      for (i <- 0 until 128) {
        writeWord(dut, data(i), chunkLast = i == 63 || i == 127, tensorLast = false)
      }
      shoot(dut)
      for (i <- 0 until 64) readUnit(dut, data(i))
      dut.io.hungry.expect(true.B)

      for (i <- 128 until 130) {
        writeWord(dut, data(i), chunkLast = i == 129, tensorLast = i == 129)
      }
      for (i <- 64 until 128) readUnit(dut, data(i))
      readUnit(dut, data(128))
      readUnit(dut, data(129), wrap = true)
    }
  }

  it should "split each FB DMA word into ordered lower and upper 32B cache reads and skip odd padding" in {
    test(new FbController) { dut =>
      val units = 5
      pokeIdle(dut, units, cache = true)
      val blocks = Array.tabulate(6)(i => BigInt(i + 1) << 200 | BigInt(0x40 + i))
      for (word <- 0 until 3) {
        writeWord(
          dut,
          word512(blocks(2 * word), blocks(2 * word + 1)),
          chunkLast = word == 2,
          tensorLast = word == 2
        )
      }
      shoot(dut)
      for (i <- 0 until units) readUnit(dut, blocks(i), wrap = i == units - 1)
      readUnit(dut, blocks(0))
      assert(blocks(5) != blocks(0), "Padding signature must differ from wrapped data")
    }
  }

  it should "switch FB spill banks at 128 read units and never expose a padded odd tail" in {
    test(new FbController) { dut =>
      val units = 259
      pokeIdle(dut, units, cache = false)
      val logical = Array.tabulate(units)(i => BigInt(i + 1) << 192 | BigInt(i + 3))
      val padding = BigInt("deadbeef", 16) << 128

      for (word <- 0 until 128) {
        writeWord(
          dut,
          word512(logical(2 * word), logical(2 * word + 1)),
          chunkLast = word == 63 || word == 127,
          tensorLast = false
        )
      }
      shoot(dut)
      for (i <- 0 until 128) readUnit(dut, logical(i))

      writeWord(dut, word512(logical(256), logical(257)), chunkLast = false, tensorLast = false)
      writeWord(dut, word512(logical(258), padding), chunkLast = true, tensorLast = true)
      for (i <- 128 until 256) readUnit(dut, logical(i))
      readUnit(dut, logical(256))
      readUnit(dut, logical(257))
      readUnit(dut, logical(258), wrap = true)
    }
  }
}
