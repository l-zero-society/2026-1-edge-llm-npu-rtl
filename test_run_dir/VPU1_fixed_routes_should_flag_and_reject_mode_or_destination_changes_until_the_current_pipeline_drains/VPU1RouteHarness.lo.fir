FIRRTL version 1.2.0
circuit VPU1RouteHarness :
  module Universal_Wide_LUT : @[src/main/scala/npu/utils/UniversalLUT.scala 6:7]
    input clock : Clock @[src/main/scala/npu/utils/UniversalLUT.scala 6:7]
    input reset : UInt<1> @[src/main/scala/npu/utils/UniversalLUT.scala 6:7]
    input io_wr_en : UInt<1> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_addr : UInt<5> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_0 : UInt<8> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_1 : UInt<8> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_2 : UInt<8> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_3 : UInt<8> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_4 : UInt<8> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_5 : UInt<8> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_6 : UInt<8> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_7 : UInt<8> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_8 : UInt<8> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_9 : UInt<8> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_10 : UInt<8> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_11 : UInt<8> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_12 : UInt<8> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_13 : UInt<8> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_14 : UInt<8> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_15 : UInt<8> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_16 : UInt<8> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_17 : UInt<8> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_18 : UInt<8> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_19 : UInt<8> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_20 : UInt<8> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_21 : UInt<8> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_22 : UInt<8> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_23 : UInt<8> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_24 : UInt<8> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_25 : UInt<8> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_26 : UInt<8> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_27 : UInt<8> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_28 : UInt<8> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_29 : UInt<8> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_30 : UInt<8> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_31 : UInt<8> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    output io_wr_valid : UInt<1> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_rd_en : UInt<1> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_rd_addr : UInt<10> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    output io_rd_data : UInt<8> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    output io_rd_valid : UInt<1> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    output io_lut_ready : UInt<1> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]

    mem lut_mem_0 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 32
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_1 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 32
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_2 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 32
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_3 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 32
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_4 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 32
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_5 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 32
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_6 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 32
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_7 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 32
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_8 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 32
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_9 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 32
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_10 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 32
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_11 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 32
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_12 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 32
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_13 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 32
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_14 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 32
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_15 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 32
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_16 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 32
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_17 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 32
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_18 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 32
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_19 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 32
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_20 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 32
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_21 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 32
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_22 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 32
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_23 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 32
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_24 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 32
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_25 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 32
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_26 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 32
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_27 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 32
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_28 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 32
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_29 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 32
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_30 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 32
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_31 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 32
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    node _GEN_0 = validif(io_wr_en, io_wr_addr) @[src/main/scala/npu/utils/UniversalLUT.scala 46:19 48:18]
    node _GEN_1 = validif(io_wr_en, clock) @[src/main/scala/npu/utils/UniversalLUT.scala 46:19 48:18]
    node _GEN_2 = mux(io_wr_en, UInt<1>("h1"), UInt<1>("h0")) @[src/main/scala/npu/utils/UniversalLUT.scala 46:19 48:18 41:28]
    node _GEN_3 = validif(io_wr_en, UInt<1>("h1")) @[src/main/scala/npu/utils/UniversalLUT.scala 46:19 48:18]
    node _GEN_4 = validif(io_wr_en, io_wr_data_0) @[src/main/scala/npu/utils/UniversalLUT.scala 46:19 48:18]
    node _GEN_5 = validif(io_wr_en, io_wr_data_1) @[src/main/scala/npu/utils/UniversalLUT.scala 46:19 48:18]
    node _GEN_6 = validif(io_wr_en, io_wr_data_2) @[src/main/scala/npu/utils/UniversalLUT.scala 46:19 48:18]
    node _GEN_7 = validif(io_wr_en, io_wr_data_3) @[src/main/scala/npu/utils/UniversalLUT.scala 46:19 48:18]
    node _GEN_8 = validif(io_wr_en, io_wr_data_4) @[src/main/scala/npu/utils/UniversalLUT.scala 46:19 48:18]
    node _GEN_9 = validif(io_wr_en, io_wr_data_5) @[src/main/scala/npu/utils/UniversalLUT.scala 46:19 48:18]
    node _GEN_10 = validif(io_wr_en, io_wr_data_6) @[src/main/scala/npu/utils/UniversalLUT.scala 46:19 48:18]
    node _GEN_11 = validif(io_wr_en, io_wr_data_7) @[src/main/scala/npu/utils/UniversalLUT.scala 46:19 48:18]
    node _GEN_12 = validif(io_wr_en, io_wr_data_8) @[src/main/scala/npu/utils/UniversalLUT.scala 46:19 48:18]
    node _GEN_13 = validif(io_wr_en, io_wr_data_9) @[src/main/scala/npu/utils/UniversalLUT.scala 46:19 48:18]
    node _GEN_14 = validif(io_wr_en, io_wr_data_10) @[src/main/scala/npu/utils/UniversalLUT.scala 46:19 48:18]
    node _GEN_15 = validif(io_wr_en, io_wr_data_11) @[src/main/scala/npu/utils/UniversalLUT.scala 46:19 48:18]
    node _GEN_16 = validif(io_wr_en, io_wr_data_12) @[src/main/scala/npu/utils/UniversalLUT.scala 46:19 48:18]
    node _GEN_17 = validif(io_wr_en, io_wr_data_13) @[src/main/scala/npu/utils/UniversalLUT.scala 46:19 48:18]
    node _GEN_18 = validif(io_wr_en, io_wr_data_14) @[src/main/scala/npu/utils/UniversalLUT.scala 46:19 48:18]
    node _GEN_19 = validif(io_wr_en, io_wr_data_15) @[src/main/scala/npu/utils/UniversalLUT.scala 46:19 48:18]
    node _GEN_20 = validif(io_wr_en, io_wr_data_16) @[src/main/scala/npu/utils/UniversalLUT.scala 46:19 48:18]
    node _GEN_21 = validif(io_wr_en, io_wr_data_17) @[src/main/scala/npu/utils/UniversalLUT.scala 46:19 48:18]
    node _GEN_22 = validif(io_wr_en, io_wr_data_18) @[src/main/scala/npu/utils/UniversalLUT.scala 46:19 48:18]
    node _GEN_23 = validif(io_wr_en, io_wr_data_19) @[src/main/scala/npu/utils/UniversalLUT.scala 46:19 48:18]
    node _GEN_24 = validif(io_wr_en, io_wr_data_20) @[src/main/scala/npu/utils/UniversalLUT.scala 46:19 48:18]
    node _GEN_25 = validif(io_wr_en, io_wr_data_21) @[src/main/scala/npu/utils/UniversalLUT.scala 46:19 48:18]
    node _GEN_26 = validif(io_wr_en, io_wr_data_22) @[src/main/scala/npu/utils/UniversalLUT.scala 46:19 48:18]
    node _GEN_27 = validif(io_wr_en, io_wr_data_23) @[src/main/scala/npu/utils/UniversalLUT.scala 46:19 48:18]
    node _GEN_28 = validif(io_wr_en, io_wr_data_24) @[src/main/scala/npu/utils/UniversalLUT.scala 46:19 48:18]
    node _GEN_29 = validif(io_wr_en, io_wr_data_25) @[src/main/scala/npu/utils/UniversalLUT.scala 46:19 48:18]
    node _GEN_30 = validif(io_wr_en, io_wr_data_26) @[src/main/scala/npu/utils/UniversalLUT.scala 46:19 48:18]
    node _GEN_31 = validif(io_wr_en, io_wr_data_27) @[src/main/scala/npu/utils/UniversalLUT.scala 46:19 48:18]
    node _GEN_32 = validif(io_wr_en, io_wr_data_28) @[src/main/scala/npu/utils/UniversalLUT.scala 46:19 48:18]
    node _GEN_33 = validif(io_wr_en, io_wr_data_29) @[src/main/scala/npu/utils/UniversalLUT.scala 46:19 48:18]
    node _GEN_34 = validif(io_wr_en, io_wr_data_30) @[src/main/scala/npu/utils/UniversalLUT.scala 46:19 48:18]
    node _GEN_35 = validif(io_wr_en, io_wr_data_31) @[src/main/scala/npu/utils/UniversalLUT.scala 46:19 48:18]
    reg io_wr_valid_REG : UInt<1>, clock with :
      reset => (UInt<1>("h0"), io_wr_valid_REG) @[src/main/scala/npu/utils/UniversalLUT.scala 51:25]
    reg is_programmed : UInt<1>, clock with :
      reset => (UInt<1>("h0"), is_programmed) @[src/main/scala/npu/utils/UniversalLUT.scala 57:31]
    node _last_write_ack_T = eq(io_wr_addr, UInt<5>("h1f")) @[src/main/scala/npu/utils/UniversalLUT.scala 58:56]
    node _last_write_ack_T_1 = and(io_wr_en, _last_write_ack_T) @[src/main/scala/npu/utils/UniversalLUT.scala 58:41]
    reg last_write_ack : UInt<1>, clock with :
      reset => (UInt<1>("h0"), last_write_ack) @[src/main/scala/npu/utils/UniversalLUT.scala 58:31]
    node _GEN_36 = mux(last_write_ack, UInt<1>("h1"), is_programmed) @[src/main/scala/npu/utils/UniversalLUT.scala 60:25 61:19 57:31]
    node rd_row = bits(io_rd_addr, 9, 5) @[src/main/scala/npu/utils/UniversalLUT.scala 71:26]
    node rd_col = bits(io_rd_addr, 4, 0) @[src/main/scala/npu/utils/UniversalLUT.scala 72:26]
    node _GEN_37 = validif(io_rd_en, rd_row) @[src/main/scala/npu/utils/UniversalLUT.scala 75:{28,28}]
    node _GEN_38 = mux(io_rd_en, UInt<1>("h1"), UInt<1>("h0")) @[src/main/scala/npu/utils/UniversalLUT.scala 41:28 75:{28,28}]
    node _rd_vec_WIRE = _GEN_37 @[src/main/scala/npu/utils/UniversalLUT.scala 75:28]
    node _GEN_39 = validif(io_rd_en, _rd_vec_WIRE) @[src/main/scala/npu/utils/UniversalLUT.scala 75:{28,28}]
    node _GEN_40 = validif(io_rd_en, clock) @[src/main/scala/npu/utils/UniversalLUT.scala 75:{28,28}]
    reg rd_col_delayed : UInt<5>, clock with :
      reset => (UInt<1>("h0"), rd_col_delayed) @[src/main/scala/npu/utils/UniversalLUT.scala 78:33]
    node _GEN_41 = mux(io_rd_en, rd_col, rd_col_delayed) @[src/main/scala/npu/utils/UniversalLUT.scala 78:{33,33,33}]
    node _GEN_42 = validif(eq(UInt<1>("h0"), rd_col_delayed), lut_mem_0.rd_vec.data) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_43 = mux(eq(UInt<1>("h1"), rd_col_delayed), lut_mem_1.rd_vec.data, _GEN_42) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_44 = mux(eq(UInt<2>("h2"), rd_col_delayed), lut_mem_2.rd_vec.data, _GEN_43) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_45 = mux(eq(UInt<2>("h3"), rd_col_delayed), lut_mem_3.rd_vec.data, _GEN_44) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_46 = mux(eq(UInt<3>("h4"), rd_col_delayed), lut_mem_4.rd_vec.data, _GEN_45) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_47 = mux(eq(UInt<3>("h5"), rd_col_delayed), lut_mem_5.rd_vec.data, _GEN_46) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_48 = mux(eq(UInt<3>("h6"), rd_col_delayed), lut_mem_6.rd_vec.data, _GEN_47) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_49 = mux(eq(UInt<3>("h7"), rd_col_delayed), lut_mem_7.rd_vec.data, _GEN_48) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_50 = mux(eq(UInt<4>("h8"), rd_col_delayed), lut_mem_8.rd_vec.data, _GEN_49) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_51 = mux(eq(UInt<4>("h9"), rd_col_delayed), lut_mem_9.rd_vec.data, _GEN_50) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_52 = mux(eq(UInt<4>("ha"), rd_col_delayed), lut_mem_10.rd_vec.data, _GEN_51) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_53 = mux(eq(UInt<4>("hb"), rd_col_delayed), lut_mem_11.rd_vec.data, _GEN_52) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_54 = mux(eq(UInt<4>("hc"), rd_col_delayed), lut_mem_12.rd_vec.data, _GEN_53) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_55 = mux(eq(UInt<4>("hd"), rd_col_delayed), lut_mem_13.rd_vec.data, _GEN_54) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_56 = mux(eq(UInt<4>("he"), rd_col_delayed), lut_mem_14.rd_vec.data, _GEN_55) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_57 = mux(eq(UInt<4>("hf"), rd_col_delayed), lut_mem_15.rd_vec.data, _GEN_56) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_58 = mux(eq(UInt<5>("h10"), rd_col_delayed), lut_mem_16.rd_vec.data, _GEN_57) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_59 = mux(eq(UInt<5>("h11"), rd_col_delayed), lut_mem_17.rd_vec.data, _GEN_58) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_60 = mux(eq(UInt<5>("h12"), rd_col_delayed), lut_mem_18.rd_vec.data, _GEN_59) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_61 = mux(eq(UInt<5>("h13"), rd_col_delayed), lut_mem_19.rd_vec.data, _GEN_60) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_62 = mux(eq(UInt<5>("h14"), rd_col_delayed), lut_mem_20.rd_vec.data, _GEN_61) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_63 = mux(eq(UInt<5>("h15"), rd_col_delayed), lut_mem_21.rd_vec.data, _GEN_62) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_64 = mux(eq(UInt<5>("h16"), rd_col_delayed), lut_mem_22.rd_vec.data, _GEN_63) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_65 = mux(eq(UInt<5>("h17"), rd_col_delayed), lut_mem_23.rd_vec.data, _GEN_64) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_66 = mux(eq(UInt<5>("h18"), rd_col_delayed), lut_mem_24.rd_vec.data, _GEN_65) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_67 = mux(eq(UInt<5>("h19"), rd_col_delayed), lut_mem_25.rd_vec.data, _GEN_66) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_68 = mux(eq(UInt<5>("h1a"), rd_col_delayed), lut_mem_26.rd_vec.data, _GEN_67) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_69 = mux(eq(UInt<5>("h1b"), rd_col_delayed), lut_mem_27.rd_vec.data, _GEN_68) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_70 = mux(eq(UInt<5>("h1c"), rd_col_delayed), lut_mem_28.rd_vec.data, _GEN_69) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_71 = mux(eq(UInt<5>("h1d"), rd_col_delayed), lut_mem_29.rd_vec.data, _GEN_70) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_72 = mux(eq(UInt<5>("h1e"), rd_col_delayed), lut_mem_30.rd_vec.data, _GEN_71) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_73 = mux(eq(UInt<5>("h1f"), rd_col_delayed), lut_mem_31.rd_vec.data, _GEN_72) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    reg io_rd_valid_REG : UInt<1>, clock with :
      reset => (UInt<1>("h0"), io_rd_valid_REG) @[src/main/scala/npu/utils/UniversalLUT.scala 84:25]
    node _lut_mem_rd_vec_data_rd_col_delayed = _GEN_73 @[src/main/scala/npu/utils/UniversalLUT.scala 81:15]
    io_wr_valid <= io_wr_valid_REG @[src/main/scala/npu/utils/UniversalLUT.scala 51:15]
    io_rd_data <= _lut_mem_rd_vec_data_rd_col_delayed @[src/main/scala/npu/utils/UniversalLUT.scala 81:15]
    io_rd_valid <= io_rd_valid_REG @[src/main/scala/npu/utils/UniversalLUT.scala 84:15]
    io_lut_ready <= is_programmed @[src/main/scala/npu/utils/UniversalLUT.scala 65:16]
    lut_mem_0.rd_vec.addr <= _GEN_39
    lut_mem_1.rd_vec.addr <= _GEN_39
    lut_mem_2.rd_vec.addr <= _GEN_39
    lut_mem_3.rd_vec.addr <= _GEN_39
    lut_mem_4.rd_vec.addr <= _GEN_39
    lut_mem_5.rd_vec.addr <= _GEN_39
    lut_mem_6.rd_vec.addr <= _GEN_39
    lut_mem_7.rd_vec.addr <= _GEN_39
    lut_mem_8.rd_vec.addr <= _GEN_39
    lut_mem_9.rd_vec.addr <= _GEN_39
    lut_mem_10.rd_vec.addr <= _GEN_39
    lut_mem_11.rd_vec.addr <= _GEN_39
    lut_mem_12.rd_vec.addr <= _GEN_39
    lut_mem_13.rd_vec.addr <= _GEN_39
    lut_mem_14.rd_vec.addr <= _GEN_39
    lut_mem_15.rd_vec.addr <= _GEN_39
    lut_mem_16.rd_vec.addr <= _GEN_39
    lut_mem_17.rd_vec.addr <= _GEN_39
    lut_mem_18.rd_vec.addr <= _GEN_39
    lut_mem_19.rd_vec.addr <= _GEN_39
    lut_mem_20.rd_vec.addr <= _GEN_39
    lut_mem_21.rd_vec.addr <= _GEN_39
    lut_mem_22.rd_vec.addr <= _GEN_39
    lut_mem_23.rd_vec.addr <= _GEN_39
    lut_mem_24.rd_vec.addr <= _GEN_39
    lut_mem_25.rd_vec.addr <= _GEN_39
    lut_mem_26.rd_vec.addr <= _GEN_39
    lut_mem_27.rd_vec.addr <= _GEN_39
    lut_mem_28.rd_vec.addr <= _GEN_39
    lut_mem_29.rd_vec.addr <= _GEN_39
    lut_mem_30.rd_vec.addr <= _GEN_39
    lut_mem_31.rd_vec.addr <= _GEN_39
    lut_mem_0.rd_vec.en <= _GEN_38
    lut_mem_1.rd_vec.en <= _GEN_38
    lut_mem_2.rd_vec.en <= _GEN_38
    lut_mem_3.rd_vec.en <= _GEN_38
    lut_mem_4.rd_vec.en <= _GEN_38
    lut_mem_5.rd_vec.en <= _GEN_38
    lut_mem_6.rd_vec.en <= _GEN_38
    lut_mem_7.rd_vec.en <= _GEN_38
    lut_mem_8.rd_vec.en <= _GEN_38
    lut_mem_9.rd_vec.en <= _GEN_38
    lut_mem_10.rd_vec.en <= _GEN_38
    lut_mem_11.rd_vec.en <= _GEN_38
    lut_mem_12.rd_vec.en <= _GEN_38
    lut_mem_13.rd_vec.en <= _GEN_38
    lut_mem_14.rd_vec.en <= _GEN_38
    lut_mem_15.rd_vec.en <= _GEN_38
    lut_mem_16.rd_vec.en <= _GEN_38
    lut_mem_17.rd_vec.en <= _GEN_38
    lut_mem_18.rd_vec.en <= _GEN_38
    lut_mem_19.rd_vec.en <= _GEN_38
    lut_mem_20.rd_vec.en <= _GEN_38
    lut_mem_21.rd_vec.en <= _GEN_38
    lut_mem_22.rd_vec.en <= _GEN_38
    lut_mem_23.rd_vec.en <= _GEN_38
    lut_mem_24.rd_vec.en <= _GEN_38
    lut_mem_25.rd_vec.en <= _GEN_38
    lut_mem_26.rd_vec.en <= _GEN_38
    lut_mem_27.rd_vec.en <= _GEN_38
    lut_mem_28.rd_vec.en <= _GEN_38
    lut_mem_29.rd_vec.en <= _GEN_38
    lut_mem_30.rd_vec.en <= _GEN_38
    lut_mem_31.rd_vec.en <= _GEN_38
    lut_mem_0.rd_vec.clk <= _GEN_40
    lut_mem_1.rd_vec.clk <= _GEN_40
    lut_mem_2.rd_vec.clk <= _GEN_40
    lut_mem_3.rd_vec.clk <= _GEN_40
    lut_mem_4.rd_vec.clk <= _GEN_40
    lut_mem_5.rd_vec.clk <= _GEN_40
    lut_mem_6.rd_vec.clk <= _GEN_40
    lut_mem_7.rd_vec.clk <= _GEN_40
    lut_mem_8.rd_vec.clk <= _GEN_40
    lut_mem_9.rd_vec.clk <= _GEN_40
    lut_mem_10.rd_vec.clk <= _GEN_40
    lut_mem_11.rd_vec.clk <= _GEN_40
    lut_mem_12.rd_vec.clk <= _GEN_40
    lut_mem_13.rd_vec.clk <= _GEN_40
    lut_mem_14.rd_vec.clk <= _GEN_40
    lut_mem_15.rd_vec.clk <= _GEN_40
    lut_mem_16.rd_vec.clk <= _GEN_40
    lut_mem_17.rd_vec.clk <= _GEN_40
    lut_mem_18.rd_vec.clk <= _GEN_40
    lut_mem_19.rd_vec.clk <= _GEN_40
    lut_mem_20.rd_vec.clk <= _GEN_40
    lut_mem_21.rd_vec.clk <= _GEN_40
    lut_mem_22.rd_vec.clk <= _GEN_40
    lut_mem_23.rd_vec.clk <= _GEN_40
    lut_mem_24.rd_vec.clk <= _GEN_40
    lut_mem_25.rd_vec.clk <= _GEN_40
    lut_mem_26.rd_vec.clk <= _GEN_40
    lut_mem_27.rd_vec.clk <= _GEN_40
    lut_mem_28.rd_vec.clk <= _GEN_40
    lut_mem_29.rd_vec.clk <= _GEN_40
    lut_mem_30.rd_vec.clk <= _GEN_40
    lut_mem_31.rd_vec.clk <= _GEN_40
    lut_mem_0.MPORT.addr <= _GEN_0
    lut_mem_1.MPORT.addr <= _GEN_0
    lut_mem_2.MPORT.addr <= _GEN_0
    lut_mem_3.MPORT.addr <= _GEN_0
    lut_mem_4.MPORT.addr <= _GEN_0
    lut_mem_5.MPORT.addr <= _GEN_0
    lut_mem_6.MPORT.addr <= _GEN_0
    lut_mem_7.MPORT.addr <= _GEN_0
    lut_mem_8.MPORT.addr <= _GEN_0
    lut_mem_9.MPORT.addr <= _GEN_0
    lut_mem_10.MPORT.addr <= _GEN_0
    lut_mem_11.MPORT.addr <= _GEN_0
    lut_mem_12.MPORT.addr <= _GEN_0
    lut_mem_13.MPORT.addr <= _GEN_0
    lut_mem_14.MPORT.addr <= _GEN_0
    lut_mem_15.MPORT.addr <= _GEN_0
    lut_mem_16.MPORT.addr <= _GEN_0
    lut_mem_17.MPORT.addr <= _GEN_0
    lut_mem_18.MPORT.addr <= _GEN_0
    lut_mem_19.MPORT.addr <= _GEN_0
    lut_mem_20.MPORT.addr <= _GEN_0
    lut_mem_21.MPORT.addr <= _GEN_0
    lut_mem_22.MPORT.addr <= _GEN_0
    lut_mem_23.MPORT.addr <= _GEN_0
    lut_mem_24.MPORT.addr <= _GEN_0
    lut_mem_25.MPORT.addr <= _GEN_0
    lut_mem_26.MPORT.addr <= _GEN_0
    lut_mem_27.MPORT.addr <= _GEN_0
    lut_mem_28.MPORT.addr <= _GEN_0
    lut_mem_29.MPORT.addr <= _GEN_0
    lut_mem_30.MPORT.addr <= _GEN_0
    lut_mem_31.MPORT.addr <= _GEN_0
    lut_mem_0.MPORT.en <= _GEN_2
    lut_mem_1.MPORT.en <= _GEN_2
    lut_mem_2.MPORT.en <= _GEN_2
    lut_mem_3.MPORT.en <= _GEN_2
    lut_mem_4.MPORT.en <= _GEN_2
    lut_mem_5.MPORT.en <= _GEN_2
    lut_mem_6.MPORT.en <= _GEN_2
    lut_mem_7.MPORT.en <= _GEN_2
    lut_mem_8.MPORT.en <= _GEN_2
    lut_mem_9.MPORT.en <= _GEN_2
    lut_mem_10.MPORT.en <= _GEN_2
    lut_mem_11.MPORT.en <= _GEN_2
    lut_mem_12.MPORT.en <= _GEN_2
    lut_mem_13.MPORT.en <= _GEN_2
    lut_mem_14.MPORT.en <= _GEN_2
    lut_mem_15.MPORT.en <= _GEN_2
    lut_mem_16.MPORT.en <= _GEN_2
    lut_mem_17.MPORT.en <= _GEN_2
    lut_mem_18.MPORT.en <= _GEN_2
    lut_mem_19.MPORT.en <= _GEN_2
    lut_mem_20.MPORT.en <= _GEN_2
    lut_mem_21.MPORT.en <= _GEN_2
    lut_mem_22.MPORT.en <= _GEN_2
    lut_mem_23.MPORT.en <= _GEN_2
    lut_mem_24.MPORT.en <= _GEN_2
    lut_mem_25.MPORT.en <= _GEN_2
    lut_mem_26.MPORT.en <= _GEN_2
    lut_mem_27.MPORT.en <= _GEN_2
    lut_mem_28.MPORT.en <= _GEN_2
    lut_mem_29.MPORT.en <= _GEN_2
    lut_mem_30.MPORT.en <= _GEN_2
    lut_mem_31.MPORT.en <= _GEN_2
    lut_mem_0.MPORT.clk <= _GEN_1
    lut_mem_1.MPORT.clk <= _GEN_1
    lut_mem_2.MPORT.clk <= _GEN_1
    lut_mem_3.MPORT.clk <= _GEN_1
    lut_mem_4.MPORT.clk <= _GEN_1
    lut_mem_5.MPORT.clk <= _GEN_1
    lut_mem_6.MPORT.clk <= _GEN_1
    lut_mem_7.MPORT.clk <= _GEN_1
    lut_mem_8.MPORT.clk <= _GEN_1
    lut_mem_9.MPORT.clk <= _GEN_1
    lut_mem_10.MPORT.clk <= _GEN_1
    lut_mem_11.MPORT.clk <= _GEN_1
    lut_mem_12.MPORT.clk <= _GEN_1
    lut_mem_13.MPORT.clk <= _GEN_1
    lut_mem_14.MPORT.clk <= _GEN_1
    lut_mem_15.MPORT.clk <= _GEN_1
    lut_mem_16.MPORT.clk <= _GEN_1
    lut_mem_17.MPORT.clk <= _GEN_1
    lut_mem_18.MPORT.clk <= _GEN_1
    lut_mem_19.MPORT.clk <= _GEN_1
    lut_mem_20.MPORT.clk <= _GEN_1
    lut_mem_21.MPORT.clk <= _GEN_1
    lut_mem_22.MPORT.clk <= _GEN_1
    lut_mem_23.MPORT.clk <= _GEN_1
    lut_mem_24.MPORT.clk <= _GEN_1
    lut_mem_25.MPORT.clk <= _GEN_1
    lut_mem_26.MPORT.clk <= _GEN_1
    lut_mem_27.MPORT.clk <= _GEN_1
    lut_mem_28.MPORT.clk <= _GEN_1
    lut_mem_29.MPORT.clk <= _GEN_1
    lut_mem_30.MPORT.clk <= _GEN_1
    lut_mem_31.MPORT.clk <= _GEN_1
    lut_mem_0.MPORT.data <= _GEN_4
    lut_mem_1.MPORT.data <= _GEN_5
    lut_mem_2.MPORT.data <= _GEN_6
    lut_mem_3.MPORT.data <= _GEN_7
    lut_mem_4.MPORT.data <= _GEN_8
    lut_mem_5.MPORT.data <= _GEN_9
    lut_mem_6.MPORT.data <= _GEN_10
    lut_mem_7.MPORT.data <= _GEN_11
    lut_mem_8.MPORT.data <= _GEN_12
    lut_mem_9.MPORT.data <= _GEN_13
    lut_mem_10.MPORT.data <= _GEN_14
    lut_mem_11.MPORT.data <= _GEN_15
    lut_mem_12.MPORT.data <= _GEN_16
    lut_mem_13.MPORT.data <= _GEN_17
    lut_mem_14.MPORT.data <= _GEN_18
    lut_mem_15.MPORT.data <= _GEN_19
    lut_mem_16.MPORT.data <= _GEN_20
    lut_mem_17.MPORT.data <= _GEN_21
    lut_mem_18.MPORT.data <= _GEN_22
    lut_mem_19.MPORT.data <= _GEN_23
    lut_mem_20.MPORT.data <= _GEN_24
    lut_mem_21.MPORT.data <= _GEN_25
    lut_mem_22.MPORT.data <= _GEN_26
    lut_mem_23.MPORT.data <= _GEN_27
    lut_mem_24.MPORT.data <= _GEN_28
    lut_mem_25.MPORT.data <= _GEN_29
    lut_mem_26.MPORT.data <= _GEN_30
    lut_mem_27.MPORT.data <= _GEN_31
    lut_mem_28.MPORT.data <= _GEN_32
    lut_mem_29.MPORT.data <= _GEN_33
    lut_mem_30.MPORT.data <= _GEN_34
    lut_mem_31.MPORT.data <= _GEN_35
    lut_mem_0.MPORT.mask <= _GEN_3
    lut_mem_1.MPORT.mask <= _GEN_3
    lut_mem_2.MPORT.mask <= _GEN_3
    lut_mem_3.MPORT.mask <= _GEN_3
    lut_mem_4.MPORT.mask <= _GEN_3
    lut_mem_5.MPORT.mask <= _GEN_3
    lut_mem_6.MPORT.mask <= _GEN_3
    lut_mem_7.MPORT.mask <= _GEN_3
    lut_mem_8.MPORT.mask <= _GEN_3
    lut_mem_9.MPORT.mask <= _GEN_3
    lut_mem_10.MPORT.mask <= _GEN_3
    lut_mem_11.MPORT.mask <= _GEN_3
    lut_mem_12.MPORT.mask <= _GEN_3
    lut_mem_13.MPORT.mask <= _GEN_3
    lut_mem_14.MPORT.mask <= _GEN_3
    lut_mem_15.MPORT.mask <= _GEN_3
    lut_mem_16.MPORT.mask <= _GEN_3
    lut_mem_17.MPORT.mask <= _GEN_3
    lut_mem_18.MPORT.mask <= _GEN_3
    lut_mem_19.MPORT.mask <= _GEN_3
    lut_mem_20.MPORT.mask <= _GEN_3
    lut_mem_21.MPORT.mask <= _GEN_3
    lut_mem_22.MPORT.mask <= _GEN_3
    lut_mem_23.MPORT.mask <= _GEN_3
    lut_mem_24.MPORT.mask <= _GEN_3
    lut_mem_25.MPORT.mask <= _GEN_3
    lut_mem_26.MPORT.mask <= _GEN_3
    lut_mem_27.MPORT.mask <= _GEN_3
    lut_mem_28.MPORT.mask <= _GEN_3
    lut_mem_29.MPORT.mask <= _GEN_3
    lut_mem_30.MPORT.mask <= _GEN_3
    lut_mem_31.MPORT.mask <= _GEN_3
    io_wr_valid_REG <= mux(reset, UInt<1>("h0"), io_wr_en) @[src/main/scala/npu/utils/UniversalLUT.scala 51:{25,25,25}]
    is_programmed <= mux(reset, UInt<1>("h0"), _GEN_36) @[src/main/scala/npu/utils/UniversalLUT.scala 57:{31,31}]
    last_write_ack <= mux(reset, UInt<1>("h0"), _last_write_ack_T_1) @[src/main/scala/npu/utils/UniversalLUT.scala 58:{31,31,31}]
    rd_col_delayed <= _GEN_41
    io_rd_valid_REG <= mux(reset, UInt<1>("h0"), io_rd_en) @[src/main/scala/npu/utils/UniversalLUT.scala 84:{25,25,25}]

  module QuantActCore : @[src/main/scala/npu/core/QuantActUnit.scala 20:7]
    input clock : Clock @[src/main/scala/npu/core/QuantActUnit.scala 20:7]
    input reset : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 20:7]
    input io_in_tpu : SInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    input io_in_direct : SInt<10> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    input io_input_mode : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    input io_in_valid : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    input io_param : UInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    input io_act_mask : UInt<2> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    input io_fusion_second : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    input io_stall : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    input io_lut_wr_en : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    input io_lut_wr_addr : UInt<5> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    input io_lut_wr_data_0 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    input io_lut_wr_data_1 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    input io_lut_wr_data_2 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    input io_lut_wr_data_3 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    input io_lut_wr_data_4 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    input io_lut_wr_data_5 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    input io_lut_wr_data_6 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    input io_lut_wr_data_7 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    input io_lut_wr_data_8 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    input io_lut_wr_data_9 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    input io_lut_wr_data_10 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    input io_lut_wr_data_11 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    input io_lut_wr_data_12 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    input io_lut_wr_data_13 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    input io_lut_wr_data_14 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    input io_lut_wr_data_15 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    input io_lut_wr_data_16 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    input io_lut_wr_data_17 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    input io_lut_wr_data_18 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    input io_lut_wr_data_19 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    input io_lut_wr_data_20 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    input io_lut_wr_data_21 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    input io_lut_wr_data_22 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    input io_lut_wr_data_23 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    input io_lut_wr_data_24 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    input io_lut_wr_data_25 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    input io_lut_wr_data_26 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    input io_lut_wr_data_27 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    input io_lut_wr_data_28 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    input io_lut_wr_data_29 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    input io_lut_wr_data_30 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    input io_lut_wr_data_31 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    output io_out_qact : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    output io_out_valid : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    output io_out_lookahead : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    output io_busy : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    output io_lut_ready : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]
    output io_sync_alert : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 34:14]

    inst actLut of Universal_Wide_LUT @[src/main/scala/npu/core/QuantActUnit.scala 124:11]
    node run = eq(io_stall, UInt<1>("h0")) @[src/main/scala/npu/core/QuantActUnit.scala 58:13]
    node direct = eq(io_input_mode, UInt<1>("h1")) @[src/main/scala/npu/core/QuantActUnit.scala 59:30]
    node _selectedActEn_T = bits(io_act_mask, 1, 1) @[src/main/scala/npu/core/QuantActUnit.scala 60:56]
    node _selectedActEn_T_1 = bits(io_act_mask, 0, 0) @[src/main/scala/npu/core/QuantActUnit.scala 60:72]
    node selectedActEn = mux(io_fusion_second, _selectedActEn_T, _selectedActEn_T_1) @[src/main/scala/npu/core/QuantActUnit.scala 60:26]
    node _zp_T = bits(io_param, 7, 0) @[src/main/scala/npu/core/QuantActUnit.scala 62:23]
    node zp = asSInt(_zp_T) @[src/main/scala/npu/core/QuantActUnit.scala 62:30]
    node shift = bits(io_param, 12, 8) @[src/main/scala/npu/core/QuantActUnit.scala 63:23]
    node mult = bits(io_param, 31, 16) @[src/main/scala/npu/core/QuantActUnit.scala 64:23]
    reg s1Sub : SInt<33>, clock with :
      reset => (UInt<1>("h0"), s1Sub) @[src/main/scala/npu/core/QuantActUnit.scala 66:21]
    reg s1Mult : UInt<16>, clock with :
      reset => (UInt<1>("h0"), s1Mult) @[src/main/scala/npu/core/QuantActUnit.scala 67:21]
    reg s1Shift : UInt<5>, clock with :
      reset => (UInt<1>("h0"), s1Shift) @[src/main/scala/npu/core/QuantActUnit.scala 68:21]
    reg s1ActEn : UInt<1>, clock with :
      reset => (UInt<1>("h0"), s1ActEn) @[src/main/scala/npu/core/QuantActUnit.scala 69:21]
    reg s1Direct : UInt<1>, clock with :
      reset => (UInt<1>("h0"), s1Direct) @[src/main/scala/npu/core/QuantActUnit.scala 70:21]
    reg s1Valid : UInt<1>, clock with :
      reset => (UInt<1>("h0"), s1Valid) @[src/main/scala/npu/core/QuantActUnit.scala 71:25]
    node _s1Sub_T = pad(io_in_direct, 33) @[src/main/scala/npu/core/QuantActUnit.scala 76:46]
    node _s1Sub_T_1 = pad(io_in_tpu, 33) @[src/main/scala/npu/core/QuantActUnit.scala 77:22]
    node _s1Sub_T_2 = pad(zp, 33) @[src/main/scala/npu/core/QuantActUnit.scala 77:43]
    node _s1Sub_T_3 = sub(_s1Sub_T_1, _s1Sub_T_2) @[src/main/scala/npu/core/QuantActUnit.scala 77:35]
    node _s1Sub_T_4 = tail(_s1Sub_T_3, 1) @[src/main/scala/npu/core/QuantActUnit.scala 77:35]
    node _s1Sub_T_5 = asSInt(_s1Sub_T_4) @[src/main/scala/npu/core/QuantActUnit.scala 77:35]
    node _s1Sub_T_6 = mux(direct, _s1Sub_T, _s1Sub_T_5) @[src/main/scala/npu/core/QuantActUnit.scala 76:21]
    node _s1Mult_T = mux(direct, UInt<1>("h1"), mult) @[src/main/scala/npu/core/QuantActUnit.scala 78:21]
    node _s1Shift_T = mux(direct, UInt<1>("h0"), shift) @[src/main/scala/npu/core/QuantActUnit.scala 79:21]
    node _s1ActEn_T = or(direct, selectedActEn) @[src/main/scala/npu/core/QuantActUnit.scala 80:25]
    node _GEN_0 = mux(io_in_valid, _s1Sub_T_6, s1Sub) @[src/main/scala/npu/core/QuantActUnit.scala 75:23 76:15 66:21]
    node _GEN_1 = mux(io_in_valid, _s1Mult_T, s1Mult) @[src/main/scala/npu/core/QuantActUnit.scala 75:23 78:15 67:21]
    node _GEN_2 = mux(io_in_valid, _s1Shift_T, s1Shift) @[src/main/scala/npu/core/QuantActUnit.scala 75:23 79:15 68:21]
    node _GEN_3 = mux(io_in_valid, _s1ActEn_T, s1ActEn) @[src/main/scala/npu/core/QuantActUnit.scala 75:23 80:15 69:21]
    node _GEN_4 = mux(io_in_valid, direct, s1Direct) @[src/main/scala/npu/core/QuantActUnit.scala 75:23 81:16 70:21]
    node _GEN_5 = mux(run, io_in_valid, s1Valid) @[src/main/scala/npu/core/QuantActUnit.scala 73:13 74:13 71:25]
    node _GEN_6 = mux(run, _GEN_0, s1Sub) @[src/main/scala/npu/core/QuantActUnit.scala 73:13 66:21]
    node _GEN_7 = mux(run, _GEN_1, s1Mult) @[src/main/scala/npu/core/QuantActUnit.scala 73:13 67:21]
    node _GEN_8 = mux(run, _GEN_2, s1Shift) @[src/main/scala/npu/core/QuantActUnit.scala 73:13 68:21]
    node _GEN_9 = mux(run, _GEN_3, s1ActEn) @[src/main/scala/npu/core/QuantActUnit.scala 73:13 69:21]
    node _GEN_10 = mux(run, _GEN_4, s1Direct) @[src/main/scala/npu/core/QuantActUnit.scala 73:13 70:21]
    reg s2MultRes : SInt<49>, clock with :
      reset => (UInt<1>("h0"), s2MultRes) @[src/main/scala/npu/core/QuantActUnit.scala 85:22]
    reg s2Shift : UInt<5>, clock with :
      reset => (UInt<1>("h0"), s2Shift) @[src/main/scala/npu/core/QuantActUnit.scala 86:22]
    reg s2ActEn : UInt<1>, clock with :
      reset => (UInt<1>("h0"), s2ActEn) @[src/main/scala/npu/core/QuantActUnit.scala 87:22]
    reg s2Valid : UInt<1>, clock with :
      reset => (UInt<1>("h0"), s2Valid) @[src/main/scala/npu/core/QuantActUnit.scala 88:26]
    node _s2MultRes_T = cvt(s1Mult) @[src/main/scala/npu/core/QuantActUnit.scala 93:56]
    node _s2MultRes_T_1 = mul(s1Sub, _s2MultRes_T) @[src/main/scala/npu/core/QuantActUnit.scala 93:47]
    node _s2MultRes_T_2 = mux(s1Direct, s1Sub, _s2MultRes_T_1) @[src/main/scala/npu/core/QuantActUnit.scala 93:23]
    node _GEN_11 = mux(s1Valid, _s2MultRes_T_2, s2MultRes) @[src/main/scala/npu/core/QuantActUnit.scala 92:19 93:17 85:22]
    node _GEN_12 = mux(s1Valid, s1Shift, s2Shift) @[src/main/scala/npu/core/QuantActUnit.scala 92:19 94:17 86:22]
    node _GEN_13 = mux(s1Valid, s1ActEn, s2ActEn) @[src/main/scala/npu/core/QuantActUnit.scala 92:19 95:17 87:22]
    node _GEN_14 = mux(run, s1Valid, s2Valid) @[src/main/scala/npu/core/QuantActUnit.scala 90:13 91:13 88:26]
    node _GEN_15 = mux(run, _GEN_11, s2MultRes) @[src/main/scala/npu/core/QuantActUnit.scala 90:13 85:22]
    node _GEN_16 = mux(run, _GEN_12, s2Shift) @[src/main/scala/npu/core/QuantActUnit.scala 90:13 86:22]
    node _GEN_17 = mux(run, _GEN_13, s2ActEn) @[src/main/scala/npu/core/QuantActUnit.scala 90:13 87:22]
    node shifted = dshr(s2MultRes, s2Shift) @[src/main/scala/npu/core/QuantActUnit.scala 99:27]
    node _clampedSigned10_T = lt(shifted, asSInt(UInt<10>("h200"))) @[src/main/scala/npu/core/QuantActUnit.scala 101:34]
    node _clampedSigned10_T_1 = gt(shifted, asSInt(UInt<10>("h1ff"))) @[src/main/scala/npu/core/QuantActUnit.scala 102:17]
    node _clampedSigned10_T_2 = mux(_clampedSigned10_T_1, asSInt(UInt<10>("h1ff")), shifted) @[src/main/scala/npu/core/QuantActUnit.scala 102:8]
    node _clampedSigned10_T_3 = mux(_clampedSigned10_T, asSInt(UInt<10>("h200")), _clampedSigned10_T_2) @[src/main/scala/npu/core/QuantActUnit.scala 101:25]
    node clampedSigned10 = asSInt(bits(_clampedSigned10_T_3, 9, 0)) @[src/main/scala/npu/core/QuantActUnit.scala 100:29 101:19]
    node _lutAddress_T = pad(clampedSigned10, 11) @[src/main/scala/npu/core/QuantActUnit.scala 104:40]
    node _lutAddress_T_1 = add(_lutAddress_T, asSInt(UInt<11>("h200"))) @[src/main/scala/npu/core/QuantActUnit.scala 104:45]
    node _lutAddress_T_2 = tail(_lutAddress_T_1, 1) @[src/main/scala/npu/core/QuantActUnit.scala 104:45]
    node _lutAddress_T_3 = asSInt(_lutAddress_T_2) @[src/main/scala/npu/core/QuantActUnit.scala 104:45]
    node lutAddress = asUInt(_lutAddress_T_3) @[src/main/scala/npu/core/QuantActUnit.scala 104:60]
    node _clampedSigned8_T = lt(shifted, asSInt(UInt<8>("h80"))) @[src/main/scala/npu/core/QuantActUnit.scala 106:33]
    node _clampedSigned8_T_1 = gt(shifted, asSInt(UInt<8>("h7f"))) @[src/main/scala/npu/core/QuantActUnit.scala 107:17]
    node _clampedSigned8_T_2 = mux(_clampedSigned8_T_1, asSInt(UInt<8>("h7f")), shifted) @[src/main/scala/npu/core/QuantActUnit.scala 107:8]
    node _clampedSigned8_T_3 = mux(_clampedSigned8_T, asSInt(UInt<8>("h80")), _clampedSigned8_T_2) @[src/main/scala/npu/core/QuantActUnit.scala 106:24]
    reg s3Idx : UInt<10>, clock with :
      reset => (UInt<1>("h0"), s3Idx) @[src/main/scala/npu/core/QuantActUnit.scala 109:18]
    reg s3Linear : UInt<8>, clock with :
      reset => (UInt<1>("h0"), s3Linear) @[src/main/scala/npu/core/QuantActUnit.scala 110:21]
    reg s3ActEn : UInt<1>, clock with :
      reset => (UInt<1>("h0"), s3ActEn) @[src/main/scala/npu/core/QuantActUnit.scala 111:20]
    reg s3Valid : UInt<1>, clock with :
      reset => (UInt<1>("h0"), s3Valid) @[src/main/scala/npu/core/QuantActUnit.scala 112:24]
    node clampedSigned8 = asSInt(bits(_clampedSigned8_T_3, 7, 0)) @[src/main/scala/npu/core/QuantActUnit.scala 105:28 106:18]
    node _s3Linear_T = asUInt(clampedSigned8) @[src/main/scala/npu/core/QuantActUnit.scala 118:34]
    node _GEN_18 = mux(s2Valid, lutAddress, s3Idx) @[src/main/scala/npu/core/QuantActUnit.scala 116:19 117:13 109:18]
    node _GEN_19 = mux(s2Valid, _s3Linear_T, s3Linear) @[src/main/scala/npu/core/QuantActUnit.scala 116:19 118:16 110:21]
    node _GEN_20 = mux(s2Valid, s2ActEn, s3ActEn) @[src/main/scala/npu/core/QuantActUnit.scala 116:19 119:15 111:20]
    node _GEN_21 = mux(run, s2Valid, s3Valid) @[src/main/scala/npu/core/QuantActUnit.scala 114:13 115:13 112:24]
    node _GEN_22 = mux(run, _GEN_18, s3Idx) @[src/main/scala/npu/core/QuantActUnit.scala 114:13 109:18]
    node _GEN_23 = mux(run, _GEN_19, s3Linear) @[src/main/scala/npu/core/QuantActUnit.scala 114:13 110:21]
    node _GEN_24 = mux(run, _GEN_20, s3ActEn) @[src/main/scala/npu/core/QuantActUnit.scala 114:13 111:20]
    node _actReq_T = and(s3Valid, s3ActEn) @[src/main/scala/npu/core/QuantActUnit.scala 134:24]
    node actReq = and(_actReq_T, run) @[src/main/scala/npu/core/QuantActUnit.scala 134:35]
    node _linearReq_T = eq(s3ActEn, UInt<1>("h0")) @[src/main/scala/npu/core/QuantActUnit.scala 135:30]
    node _linearReq_T_1 = and(s3Valid, _linearReq_T) @[src/main/scala/npu/core/QuantActUnit.scala 135:27]
    node linearReq = and(_linearReq_T_1, run) @[src/main/scala/npu/core/QuantActUnit.scala 135:39]
    reg linearDataD1 : UInt<8>, clock with :
      reset => (UInt<1>("h0"), linearDataD1) @[src/main/scala/npu/core/QuantActUnit.scala 140:31]
    node _GEN_25 = mux(linearReq, s3Linear, linearDataD1) @[src/main/scala/npu/core/QuantActUnit.scala 140:{31,31,31}]
    reg linearValidD1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), linearValidD1) @[src/main/scala/npu/core/QuantActUnit.scala 141:30]
    node rawValid = or(actLut.io_rd_valid, linearValidD1) @[src/main/scala/npu/core/QuantActUnit.scala 143:37]
    node rawData = mux(actLut.io_rd_valid, actLut.io_rd_data, linearDataD1) @[src/main/scala/npu/core/QuantActUnit.scala 144:20]
    reg holdValid : UInt<1>, clock with :
      reset => (UInt<1>("h0"), holdValid) @[src/main/scala/npu/core/QuantActUnit.scala 148:26]
    reg holdData : UInt<8>, clock with :
      reset => (UInt<1>("h0"), holdData) @[src/main/scala/npu/core/QuantActUnit.scala 149:22]
    node _T = and(io_stall, rawValid) @[src/main/scala/npu/core/QuantActUnit.scala 151:17]
    node _T_1 = eq(holdValid, UInt<1>("h0")) @[src/main/scala/npu/core/QuantActUnit.scala 151:32]
    node _T_2 = and(_T, _T_1) @[src/main/scala/npu/core/QuantActUnit.scala 151:29]
    node _T_3 = and(run, holdValid) @[src/main/scala/npu/core/QuantActUnit.scala 154:18]
    node _GEN_26 = mux(_T_3, UInt<1>("h0"), holdValid) @[src/main/scala/npu/core/QuantActUnit.scala 154:32 155:15 148:26]
    node _GEN_27 = mux(_T_2, UInt<1>("h1"), _GEN_26) @[src/main/scala/npu/core/QuantActUnit.scala 151:44 152:15]
    node _GEN_28 = mux(_T_2, rawData, holdData) @[src/main/scala/npu/core/QuantActUnit.scala 151:44 153:14 149:22]
    node _io_out_qact_T = mux(holdValid, holdData, rawData) @[src/main/scala/npu/core/QuantActUnit.scala 158:21]
    node _io_out_valid_T = or(holdValid, rawValid) @[src/main/scala/npu/core/QuantActUnit.scala 159:37]
    node _io_out_valid_T_1 = and(run, _io_out_valid_T) @[src/main/scala/npu/core/QuantActUnit.scala 159:23]
    reg expectedRdValid : UInt<1>, clock with :
      reset => (UInt<1>("h0"), expectedRdValid) @[src/main/scala/npu/core/QuantActUnit.scala 161:32]
    reg expectedWrValid : UInt<1>, clock with :
      reset => (UInt<1>("h0"), expectedWrValid) @[src/main/scala/npu/core/QuantActUnit.scala 162:32]
    node _io_sync_alert_T = neq(expectedRdValid, actLut.io_rd_valid) @[src/main/scala/npu/core/QuantActUnit.scala 165:22]
    node _io_sync_alert_T_1 = neq(expectedWrValid, actLut.io_wr_valid) @[src/main/scala/npu/core/QuantActUnit.scala 166:22]
    node _io_sync_alert_T_2 = or(_io_sync_alert_T, _io_sync_alert_T_1) @[src/main/scala/npu/core/QuantActUnit.scala 165:46]
    node _io_sync_alert_T_3 = and(holdValid, rawValid) @[src/main/scala/npu/core/QuantActUnit.scala 167:16]
    node _io_sync_alert_T_4 = and(_io_sync_alert_T_3, run) @[src/main/scala/npu/core/QuantActUnit.scala 167:28]
    node _io_sync_alert_T_5 = or(_io_sync_alert_T_2, _io_sync_alert_T_4) @[src/main/scala/npu/core/QuantActUnit.scala 166:46]
    node _io_out_lookahead_T = and(s3Valid, run) @[src/main/scala/npu/core/QuantActUnit.scala 169:31]
    node _io_busy_T = or(s1Valid, s2Valid) @[src/main/scala/npu/core/QuantActUnit.scala 170:22]
    node _io_busy_T_1 = or(_io_busy_T, s3Valid) @[src/main/scala/npu/core/QuantActUnit.scala 170:33]
    node _io_busy_T_2 = or(_io_busy_T_1, rawValid) @[src/main/scala/npu/core/QuantActUnit.scala 170:44]
    node _io_busy_T_3 = or(_io_busy_T_2, holdValid) @[src/main/scala/npu/core/QuantActUnit.scala 170:56]
    io_out_qact <= _io_out_qact_T @[src/main/scala/npu/core/QuantActUnit.scala 158:15]
    io_out_valid <= _io_out_valid_T_1 @[src/main/scala/npu/core/QuantActUnit.scala 159:16]
    io_out_lookahead <= _io_out_lookahead_T @[src/main/scala/npu/core/QuantActUnit.scala 169:20]
    io_busy <= _io_busy_T_3 @[src/main/scala/npu/core/QuantActUnit.scala 170:11]
    io_lut_ready <= actLut.io_lut_ready @[src/main/scala/npu/core/QuantActUnit.scala 171:16]
    io_sync_alert <= _io_sync_alert_T_5 @[src/main/scala/npu/core/QuantActUnit.scala 164:17]
    s1Sub <= _GEN_6
    s1Mult <= _GEN_7
    s1Shift <= _GEN_8
    s1ActEn <= _GEN_9
    s1Direct <= _GEN_10
    s1Valid <= mux(reset, UInt<1>("h0"), _GEN_5) @[src/main/scala/npu/core/QuantActUnit.scala 71:{25,25}]
    s2MultRes <= asSInt(bits(_GEN_15, 48, 0))
    s2Shift <= _GEN_16
    s2ActEn <= _GEN_17
    s2Valid <= mux(reset, UInt<1>("h0"), _GEN_14) @[src/main/scala/npu/core/QuantActUnit.scala 88:{26,26}]
    s3Idx <= bits(_GEN_22, 9, 0)
    s3Linear <= _GEN_23
    s3ActEn <= _GEN_24
    s3Valid <= mux(reset, UInt<1>("h0"), _GEN_21) @[src/main/scala/npu/core/QuantActUnit.scala 112:{24,24}]
    actLut.clock <= clock
    actLut.reset <= reset
    actLut.io_wr_en <= io_lut_wr_en @[src/main/scala/npu/core/QuantActUnit.scala 130:21]
    actLut.io_wr_addr <= io_lut_wr_addr @[src/main/scala/npu/core/QuantActUnit.scala 131:21]
    actLut.io_wr_data_0 <= io_lut_wr_data_0 @[src/main/scala/npu/core/QuantActUnit.scala 132:21]
    actLut.io_wr_data_1 <= io_lut_wr_data_1 @[src/main/scala/npu/core/QuantActUnit.scala 132:21]
    actLut.io_wr_data_2 <= io_lut_wr_data_2 @[src/main/scala/npu/core/QuantActUnit.scala 132:21]
    actLut.io_wr_data_3 <= io_lut_wr_data_3 @[src/main/scala/npu/core/QuantActUnit.scala 132:21]
    actLut.io_wr_data_4 <= io_lut_wr_data_4 @[src/main/scala/npu/core/QuantActUnit.scala 132:21]
    actLut.io_wr_data_5 <= io_lut_wr_data_5 @[src/main/scala/npu/core/QuantActUnit.scala 132:21]
    actLut.io_wr_data_6 <= io_lut_wr_data_6 @[src/main/scala/npu/core/QuantActUnit.scala 132:21]
    actLut.io_wr_data_7 <= io_lut_wr_data_7 @[src/main/scala/npu/core/QuantActUnit.scala 132:21]
    actLut.io_wr_data_8 <= io_lut_wr_data_8 @[src/main/scala/npu/core/QuantActUnit.scala 132:21]
    actLut.io_wr_data_9 <= io_lut_wr_data_9 @[src/main/scala/npu/core/QuantActUnit.scala 132:21]
    actLut.io_wr_data_10 <= io_lut_wr_data_10 @[src/main/scala/npu/core/QuantActUnit.scala 132:21]
    actLut.io_wr_data_11 <= io_lut_wr_data_11 @[src/main/scala/npu/core/QuantActUnit.scala 132:21]
    actLut.io_wr_data_12 <= io_lut_wr_data_12 @[src/main/scala/npu/core/QuantActUnit.scala 132:21]
    actLut.io_wr_data_13 <= io_lut_wr_data_13 @[src/main/scala/npu/core/QuantActUnit.scala 132:21]
    actLut.io_wr_data_14 <= io_lut_wr_data_14 @[src/main/scala/npu/core/QuantActUnit.scala 132:21]
    actLut.io_wr_data_15 <= io_lut_wr_data_15 @[src/main/scala/npu/core/QuantActUnit.scala 132:21]
    actLut.io_wr_data_16 <= io_lut_wr_data_16 @[src/main/scala/npu/core/QuantActUnit.scala 132:21]
    actLut.io_wr_data_17 <= io_lut_wr_data_17 @[src/main/scala/npu/core/QuantActUnit.scala 132:21]
    actLut.io_wr_data_18 <= io_lut_wr_data_18 @[src/main/scala/npu/core/QuantActUnit.scala 132:21]
    actLut.io_wr_data_19 <= io_lut_wr_data_19 @[src/main/scala/npu/core/QuantActUnit.scala 132:21]
    actLut.io_wr_data_20 <= io_lut_wr_data_20 @[src/main/scala/npu/core/QuantActUnit.scala 132:21]
    actLut.io_wr_data_21 <= io_lut_wr_data_21 @[src/main/scala/npu/core/QuantActUnit.scala 132:21]
    actLut.io_wr_data_22 <= io_lut_wr_data_22 @[src/main/scala/npu/core/QuantActUnit.scala 132:21]
    actLut.io_wr_data_23 <= io_lut_wr_data_23 @[src/main/scala/npu/core/QuantActUnit.scala 132:21]
    actLut.io_wr_data_24 <= io_lut_wr_data_24 @[src/main/scala/npu/core/QuantActUnit.scala 132:21]
    actLut.io_wr_data_25 <= io_lut_wr_data_25 @[src/main/scala/npu/core/QuantActUnit.scala 132:21]
    actLut.io_wr_data_26 <= io_lut_wr_data_26 @[src/main/scala/npu/core/QuantActUnit.scala 132:21]
    actLut.io_wr_data_27 <= io_lut_wr_data_27 @[src/main/scala/npu/core/QuantActUnit.scala 132:21]
    actLut.io_wr_data_28 <= io_lut_wr_data_28 @[src/main/scala/npu/core/QuantActUnit.scala 132:21]
    actLut.io_wr_data_29 <= io_lut_wr_data_29 @[src/main/scala/npu/core/QuantActUnit.scala 132:21]
    actLut.io_wr_data_30 <= io_lut_wr_data_30 @[src/main/scala/npu/core/QuantActUnit.scala 132:21]
    actLut.io_wr_data_31 <= io_lut_wr_data_31 @[src/main/scala/npu/core/QuantActUnit.scala 132:21]
    actLut.io_rd_en <= actReq @[src/main/scala/npu/core/QuantActUnit.scala 137:21]
    actLut.io_rd_addr <= s3Idx @[src/main/scala/npu/core/QuantActUnit.scala 138:21]
    linearDataD1 <= mux(reset, UInt<1>("h0"), _GEN_25) @[src/main/scala/npu/core/QuantActUnit.scala 140:{31,31}]
    linearValidD1 <= mux(reset, UInt<1>("h0"), linearReq) @[src/main/scala/npu/core/QuantActUnit.scala 141:{30,30,30}]
    holdValid <= mux(reset, UInt<1>("h0"), _GEN_27) @[src/main/scala/npu/core/QuantActUnit.scala 148:{26,26}]
    holdData <= _GEN_28
    expectedRdValid <= mux(reset, UInt<1>("h0"), actReq) @[src/main/scala/npu/core/QuantActUnit.scala 161:{32,32,32}]
    expectedWrValid <= mux(reset, UInt<1>("h0"), io_lut_wr_en) @[src/main/scala/npu/core/QuantActUnit.scala 162:{32,32,32}]

  module QuantActUnit : @[src/main/scala/npu/core/QuantActUnit.scala 188:7]
    input clock : Clock @[src/main/scala/npu/core/QuantActUnit.scala 188:7]
    input reset : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 188:7]
    input io_in_tpu_0 : SInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_tpu_1 : SInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_tpu_2 : SInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_tpu_3 : SInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_tpu_4 : SInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_tpu_5 : SInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_tpu_6 : SInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_tpu_7 : SInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_tpu_8 : SInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_tpu_9 : SInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_tpu_10 : SInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_tpu_11 : SInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_tpu_12 : SInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_tpu_13 : SInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_tpu_14 : SInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_tpu_15 : SInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_direct_0 : SInt<10> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_direct_1 : SInt<10> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_direct_2 : SInt<10> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_direct_3 : SInt<10> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_direct_4 : SInt<10> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_direct_5 : SInt<10> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_direct_6 : SInt<10> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_direct_7 : SInt<10> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_direct_8 : SInt<10> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_direct_9 : SInt<10> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_direct_10 : SInt<10> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_direct_11 : SInt<10> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_direct_12 : SInt<10> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_direct_13 : SInt<10> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_direct_14 : SInt<10> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_direct_15 : SInt<10> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_input_mode : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_valid_0 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_valid_1 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_valid_2 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_valid_3 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_valid_4 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_valid_5 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_valid_6 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_valid_7 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_valid_8 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_valid_9 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_valid_10 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_valid_11 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_valid_12 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_valid_13 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_valid_14 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_in_valid_15 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_param_mode : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_matrix_param : UInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_act_mask : UInt<2> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_fusion_second : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_stall : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_soft_reset : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_qparam_req_line : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_qparam_line_in_0 : UInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_qparam_line_in_1 : UInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_qparam_line_in_2 : UInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_qparam_line_in_3 : UInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_qparam_line_in_4 : UInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_qparam_line_in_5 : UInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_qparam_line_in_6 : UInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_qparam_line_in_7 : UInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_qparam_line_in_8 : UInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_qparam_line_in_9 : UInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_qparam_line_in_10 : UInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_qparam_line_in_11 : UInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_qparam_line_in_12 : UInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_qparam_line_in_13 : UInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_qparam_line_in_14 : UInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_qparam_line_in_15 : UInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_qparam_line_valid : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_lut_wr_en : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_lut_wr_addr : UInt<5> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_lut_wr_data_0 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_lut_wr_data_1 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_lut_wr_data_2 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_lut_wr_data_3 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_lut_wr_data_4 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_lut_wr_data_5 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_lut_wr_data_6 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_lut_wr_data_7 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_lut_wr_data_8 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_lut_wr_data_9 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_lut_wr_data_10 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_lut_wr_data_11 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_lut_wr_data_12 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_lut_wr_data_13 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_lut_wr_data_14 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_lut_wr_data_15 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_lut_wr_data_16 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_lut_wr_data_17 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_lut_wr_data_18 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_lut_wr_data_19 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_lut_wr_data_20 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_lut_wr_data_21 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_lut_wr_data_22 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_lut_wr_data_23 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_lut_wr_data_24 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_lut_wr_data_25 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_lut_wr_data_26 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_lut_wr_data_27 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_lut_wr_data_28 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_lut_wr_data_29 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_lut_wr_data_30 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    input io_lut_wr_data_31 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_vec_0 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_vec_1 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_vec_2 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_vec_3 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_vec_4 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_vec_5 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_vec_6 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_vec_7 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_vec_8 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_vec_9 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_vec_10 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_vec_11 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_vec_12 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_vec_13 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_vec_14 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_vec_15 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_valid_0 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_valid_1 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_valid_2 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_valid_3 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_valid_4 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_valid_5 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_valid_6 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_valid_7 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_valid_8 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_valid_9 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_valid_10 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_valid_11 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_valid_12 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_valid_13 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_valid_14 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_valid_15 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_lookahead_0 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_lookahead_1 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_lookahead_2 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_lookahead_3 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_lookahead_4 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_lookahead_5 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_lookahead_6 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_lookahead_7 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_lookahead_8 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_lookahead_9 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_lookahead_10 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_lookahead_11 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_lookahead_12 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_lookahead_13 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_lookahead_14 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_out_lookahead_15 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_busy : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_prefetch_ready : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_lut_ready : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]
    output io_sync_alert : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 203:14]

    inst cores_0 of QuantActCore @[src/main/scala/npu/core/QuantActUnit.scala 329:13]
    inst cores_1 of QuantActCore @[src/main/scala/npu/core/QuantActUnit.scala 329:13]
    inst cores_2 of QuantActCore @[src/main/scala/npu/core/QuantActUnit.scala 329:13]
    inst cores_3 of QuantActCore @[src/main/scala/npu/core/QuantActUnit.scala 329:13]
    inst cores_4 of QuantActCore @[src/main/scala/npu/core/QuantActUnit.scala 329:13]
    inst cores_5 of QuantActCore @[src/main/scala/npu/core/QuantActUnit.scala 329:13]
    inst cores_6 of QuantActCore @[src/main/scala/npu/core/QuantActUnit.scala 329:13]
    inst cores_7 of QuantActCore @[src/main/scala/npu/core/QuantActUnit.scala 329:13]
    inst cores_8 of QuantActCore @[src/main/scala/npu/core/QuantActUnit.scala 329:13]
    inst cores_9 of QuantActCore @[src/main/scala/npu/core/QuantActUnit.scala 329:13]
    inst cores_10 of QuantActCore @[src/main/scala/npu/core/QuantActUnit.scala 329:13]
    inst cores_11 of QuantActCore @[src/main/scala/npu/core/QuantActUnit.scala 329:13]
    inst cores_12 of QuantActCore @[src/main/scala/npu/core/QuantActUnit.scala 329:13]
    inst cores_13 of QuantActCore @[src/main/scala/npu/core/QuantActUnit.scala 329:13]
    inst cores_14 of QuantActCore @[src/main/scala/npu/core/QuantActUnit.scala 329:13]
    inst cores_15 of QuantActCore @[src/main/scala/npu/core/QuantActUnit.scala 329:13]
    node run = eq(io_stall, UInt<1>("h0")) @[src/main/scala/npu/core/QuantActUnit.scala 238:13]
    node _perChannel_T = eq(io_input_mode, UInt<1>("h0")) @[src/main/scala/npu/core/QuantActUnit.scala 239:34]
    node _perChannel_T_1 = eq(io_param_mode, UInt<1>("h1")) @[src/main/scala/npu/core/QuantActUnit.scala 240:19]
    node perChannel = and(_perChannel_T, _perChannel_T_1) @[src/main/scala/npu/core/QuantActUnit.scala 239:56]
    node anyValid_lo_lo_lo = cat(io_in_valid_1, io_in_valid_0) @[src/main/scala/npu/core/QuantActUnit.scala 242:30]
    node anyValid_lo_lo_hi = cat(io_in_valid_3, io_in_valid_2) @[src/main/scala/npu/core/QuantActUnit.scala 242:30]
    node anyValid_lo_lo = cat(anyValid_lo_lo_hi, anyValid_lo_lo_lo) @[src/main/scala/npu/core/QuantActUnit.scala 242:30]
    node anyValid_lo_hi_lo = cat(io_in_valid_5, io_in_valid_4) @[src/main/scala/npu/core/QuantActUnit.scala 242:30]
    node anyValid_lo_hi_hi = cat(io_in_valid_7, io_in_valid_6) @[src/main/scala/npu/core/QuantActUnit.scala 242:30]
    node anyValid_lo_hi = cat(anyValid_lo_hi_hi, anyValid_lo_hi_lo) @[src/main/scala/npu/core/QuantActUnit.scala 242:30]
    node anyValid_lo = cat(anyValid_lo_hi, anyValid_lo_lo) @[src/main/scala/npu/core/QuantActUnit.scala 242:30]
    node anyValid_hi_lo_lo = cat(io_in_valid_9, io_in_valid_8) @[src/main/scala/npu/core/QuantActUnit.scala 242:30]
    node anyValid_hi_lo_hi = cat(io_in_valid_11, io_in_valid_10) @[src/main/scala/npu/core/QuantActUnit.scala 242:30]
    node anyValid_hi_lo = cat(anyValid_hi_lo_hi, anyValid_hi_lo_lo) @[src/main/scala/npu/core/QuantActUnit.scala 242:30]
    node anyValid_hi_hi_lo = cat(io_in_valid_13, io_in_valid_12) @[src/main/scala/npu/core/QuantActUnit.scala 242:30]
    node anyValid_hi_hi_hi = cat(io_in_valid_15, io_in_valid_14) @[src/main/scala/npu/core/QuantActUnit.scala 242:30]
    node anyValid_hi_hi = cat(anyValid_hi_hi_hi, anyValid_hi_hi_lo) @[src/main/scala/npu/core/QuantActUnit.scala 242:30]
    node anyValid_hi = cat(anyValid_hi_hi, anyValid_hi_lo) @[src/main/scala/npu/core/QuantActUnit.scala 242:30]
    node _anyValid_T = cat(anyValid_hi, anyValid_lo) @[src/main/scala/npu/core/QuantActUnit.scala 242:30]
    node anyValid = orr(_anyValid_T) @[src/main/scala/npu/core/QuantActUnit.scala 242:37]
    node allValid_lo_lo_lo = cat(io_in_valid_1, io_in_valid_0) @[src/main/scala/npu/core/QuantActUnit.scala 243:30]
    node allValid_lo_lo_hi = cat(io_in_valid_3, io_in_valid_2) @[src/main/scala/npu/core/QuantActUnit.scala 243:30]
    node allValid_lo_lo = cat(allValid_lo_lo_hi, allValid_lo_lo_lo) @[src/main/scala/npu/core/QuantActUnit.scala 243:30]
    node allValid_lo_hi_lo = cat(io_in_valid_5, io_in_valid_4) @[src/main/scala/npu/core/QuantActUnit.scala 243:30]
    node allValid_lo_hi_hi = cat(io_in_valid_7, io_in_valid_6) @[src/main/scala/npu/core/QuantActUnit.scala 243:30]
    node allValid_lo_hi = cat(allValid_lo_hi_hi, allValid_lo_hi_lo) @[src/main/scala/npu/core/QuantActUnit.scala 243:30]
    node allValid_lo = cat(allValid_lo_hi, allValid_lo_lo) @[src/main/scala/npu/core/QuantActUnit.scala 243:30]
    node allValid_hi_lo_lo = cat(io_in_valid_9, io_in_valid_8) @[src/main/scala/npu/core/QuantActUnit.scala 243:30]
    node allValid_hi_lo_hi = cat(io_in_valid_11, io_in_valid_10) @[src/main/scala/npu/core/QuantActUnit.scala 243:30]
    node allValid_hi_lo = cat(allValid_hi_lo_hi, allValid_hi_lo_lo) @[src/main/scala/npu/core/QuantActUnit.scala 243:30]
    node allValid_hi_hi_lo = cat(io_in_valid_13, io_in_valid_12) @[src/main/scala/npu/core/QuantActUnit.scala 243:30]
    node allValid_hi_hi_hi = cat(io_in_valid_15, io_in_valid_14) @[src/main/scala/npu/core/QuantActUnit.scala 243:30]
    node allValid_hi_hi = cat(allValid_hi_hi_hi, allValid_hi_hi_lo) @[src/main/scala/npu/core/QuantActUnit.scala 243:30]
    node allValid_hi = cat(allValid_hi_hi, allValid_hi_lo) @[src/main/scala/npu/core/QuantActUnit.scala 243:30]
    node _allValid_T = cat(allValid_hi, allValid_lo) @[src/main/scala/npu/core/QuantActUnit.scala 243:30]
    node allValid = andr(_allValid_T) @[src/main/scala/npu/core/QuantActUnit.scala 243:37]
    node inputFire = and(allValid, run) @[src/main/scala/npu/core/QuantActUnit.scala 244:28]
    reg rowCounter : UInt<4>, clock with :
      reset => (UInt<1>("h0"), rowCounter) @[src/main/scala/npu/core/QuantActUnit.scala 246:27]
    node _tileStart_T = eq(rowCounter, UInt<1>("h0")) @[src/main/scala/npu/core/QuantActUnit.scala 247:44]
    node tileStart = and(inputFire, _tileStart_T) @[src/main/scala/npu/core/QuantActUnit.scala 247:29]
    node _tileEnd_T = eq(rowCounter, UInt<4>("hf")) @[src/main/scala/npu/core/QuantActUnit.scala 248:44]
    node tileEnd = and(inputFire, _tileEnd_T) @[src/main/scala/npu/core/QuantActUnit.scala 248:29]
    node _T = eq(perChannel, UInt<1>("h0")) @[src/main/scala/npu/core/QuantActUnit.scala 250:25]
    node _T_1 = or(io_soft_reset, _T) @[src/main/scala/npu/core/QuantActUnit.scala 250:22]
    node _rowCounter_T = add(rowCounter, UInt<1>("h1")) @[src/main/scala/npu/core/QuantActUnit.scala 256:32]
    node _rowCounter_T_1 = tail(_rowCounter_T, 1) @[src/main/scala/npu/core/QuantActUnit.scala 256:32]
    node _GEN_0 = mux(tileEnd, UInt<1>("h0"), _rowCounter_T_1) @[src/main/scala/npu/core/QuantActUnit.scala 253:19 254:18 256:18]
    node _GEN_1 = mux(inputFire, _GEN_0, rowCounter) @[src/main/scala/npu/core/QuantActUnit.scala 252:25 246:27]
    node _GEN_2 = mux(_T_1, UInt<1>("h0"), _GEN_1) @[src/main/scala/npu/core/QuantActUnit.scala 250:38 251:16]
    reg activeParam_0 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), activeParam_0) @[src/main/scala/npu/core/QuantActUnit.scala 261:12]
    reg activeParam_1 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), activeParam_1) @[src/main/scala/npu/core/QuantActUnit.scala 261:12]
    reg activeParam_2 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), activeParam_2) @[src/main/scala/npu/core/QuantActUnit.scala 261:12]
    reg activeParam_3 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), activeParam_3) @[src/main/scala/npu/core/QuantActUnit.scala 261:12]
    reg activeParam_4 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), activeParam_4) @[src/main/scala/npu/core/QuantActUnit.scala 261:12]
    reg activeParam_5 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), activeParam_5) @[src/main/scala/npu/core/QuantActUnit.scala 261:12]
    reg activeParam_6 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), activeParam_6) @[src/main/scala/npu/core/QuantActUnit.scala 261:12]
    reg activeParam_7 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), activeParam_7) @[src/main/scala/npu/core/QuantActUnit.scala 261:12]
    reg activeParam_8 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), activeParam_8) @[src/main/scala/npu/core/QuantActUnit.scala 261:12]
    reg activeParam_9 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), activeParam_9) @[src/main/scala/npu/core/QuantActUnit.scala 261:12]
    reg activeParam_10 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), activeParam_10) @[src/main/scala/npu/core/QuantActUnit.scala 261:12]
    reg activeParam_11 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), activeParam_11) @[src/main/scala/npu/core/QuantActUnit.scala 261:12]
    reg activeParam_12 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), activeParam_12) @[src/main/scala/npu/core/QuantActUnit.scala 261:12]
    reg activeParam_13 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), activeParam_13) @[src/main/scala/npu/core/QuantActUnit.scala 261:12]
    reg activeParam_14 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), activeParam_14) @[src/main/scala/npu/core/QuantActUnit.scala 261:12]
    reg activeParam_15 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), activeParam_15) @[src/main/scala/npu/core/QuantActUnit.scala 261:12]
    reg shadowParam_0 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), shadowParam_0) @[src/main/scala/npu/core/QuantActUnit.scala 264:12]
    reg shadowParam_1 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), shadowParam_1) @[src/main/scala/npu/core/QuantActUnit.scala 264:12]
    reg shadowParam_2 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), shadowParam_2) @[src/main/scala/npu/core/QuantActUnit.scala 264:12]
    reg shadowParam_3 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), shadowParam_3) @[src/main/scala/npu/core/QuantActUnit.scala 264:12]
    reg shadowParam_4 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), shadowParam_4) @[src/main/scala/npu/core/QuantActUnit.scala 264:12]
    reg shadowParam_5 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), shadowParam_5) @[src/main/scala/npu/core/QuantActUnit.scala 264:12]
    reg shadowParam_6 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), shadowParam_6) @[src/main/scala/npu/core/QuantActUnit.scala 264:12]
    reg shadowParam_7 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), shadowParam_7) @[src/main/scala/npu/core/QuantActUnit.scala 264:12]
    reg shadowParam_8 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), shadowParam_8) @[src/main/scala/npu/core/QuantActUnit.scala 264:12]
    reg shadowParam_9 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), shadowParam_9) @[src/main/scala/npu/core/QuantActUnit.scala 264:12]
    reg shadowParam_10 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), shadowParam_10) @[src/main/scala/npu/core/QuantActUnit.scala 264:12]
    reg shadowParam_11 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), shadowParam_11) @[src/main/scala/npu/core/QuantActUnit.scala 264:12]
    reg shadowParam_12 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), shadowParam_12) @[src/main/scala/npu/core/QuantActUnit.scala 264:12]
    reg shadowParam_13 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), shadowParam_13) @[src/main/scala/npu/core/QuantActUnit.scala 264:12]
    reg shadowParam_14 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), shadowParam_14) @[src/main/scala/npu/core/QuantActUnit.scala 264:12]
    reg shadowParam_15 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), shadowParam_15) @[src/main/scala/npu/core/QuantActUnit.scala 264:12]
    reg activeValid : UInt<1>, clock with :
      reset => (UInt<1>("h0"), activeValid) @[src/main/scala/npu/core/QuantActUnit.scala 266:28]
    reg shadowValid : UInt<1>, clock with :
      reset => (UInt<1>("h0"), shadowValid) @[src/main/scala/npu/core/QuantActUnit.scala 267:28]
    reg reqOutstanding : UInt<1>, clock with :
      reset => (UInt<1>("h0"), reqOutstanding) @[src/main/scala/npu/core/QuantActUnit.scala 268:31]
    node consumeShadow = and(perChannel, tileStart) @[src/main/scala/npu/core/QuantActUnit.scala 273:16]
    node _io_qparam_req_line_T = eq(io_soft_reset, UInt<1>("h0")) @[src/main/scala/npu/core/QuantActUnit.scala 276:19]
    node _io_qparam_req_line_T_1 = and(perChannel, _io_qparam_req_line_T) @[src/main/scala/npu/core/QuantActUnit.scala 276:16]
    node _io_qparam_req_line_T_2 = eq(reqOutstanding, UInt<1>("h0")) @[src/main/scala/npu/core/QuantActUnit.scala 277:5]
    node _io_qparam_req_line_T_3 = and(_io_qparam_req_line_T_1, _io_qparam_req_line_T_2) @[src/main/scala/npu/core/QuantActUnit.scala 276:34]
    node _io_qparam_req_line_T_4 = eq(shadowValid, UInt<1>("h0")) @[src/main/scala/npu/core/QuantActUnit.scala 278:6]
    node _io_qparam_req_line_T_5 = or(_io_qparam_req_line_T_4, consumeShadow) @[src/main/scala/npu/core/QuantActUnit.scala 278:19]
    node _io_qparam_req_line_T_6 = and(_io_qparam_req_line_T_3, _io_qparam_req_line_T_5) @[src/main/scala/npu/core/QuantActUnit.scala 277:21]
    node _T_2 = eq(perChannel, UInt<1>("h0")) @[src/main/scala/npu/core/QuantActUnit.scala 282:25]
    node _T_3 = or(io_soft_reset, _T_2) @[src/main/scala/npu/core/QuantActUnit.scala 282:22]
    node _GEN_3 = mux(io_qparam_req_line, UInt<1>("h1"), reqOutstanding) @[src/main/scala/npu/core/QuantActUnit.scala 287:30 288:22 268:31]
    node _GEN_4 = mux(shadowValid, shadowParam_0, activeParam_0) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 292:25 293:21]
    node _GEN_5 = mux(shadowValid, shadowParam_1, activeParam_1) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 292:25 293:21]
    node _GEN_6 = mux(shadowValid, shadowParam_2, activeParam_2) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 292:25 293:21]
    node _GEN_7 = mux(shadowValid, shadowParam_3, activeParam_3) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 292:25 293:21]
    node _GEN_8 = mux(shadowValid, shadowParam_4, activeParam_4) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 292:25 293:21]
    node _GEN_9 = mux(shadowValid, shadowParam_5, activeParam_5) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 292:25 293:21]
    node _GEN_10 = mux(shadowValid, shadowParam_6, activeParam_6) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 292:25 293:21]
    node _GEN_11 = mux(shadowValid, shadowParam_7, activeParam_7) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 292:25 293:21]
    node _GEN_12 = mux(shadowValid, shadowParam_8, activeParam_8) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 292:25 293:21]
    node _GEN_13 = mux(shadowValid, shadowParam_9, activeParam_9) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 292:25 293:21]
    node _GEN_14 = mux(shadowValid, shadowParam_10, activeParam_10) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 292:25 293:21]
    node _GEN_15 = mux(shadowValid, shadowParam_11, activeParam_11) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 292:25 293:21]
    node _GEN_16 = mux(shadowValid, shadowParam_12, activeParam_12) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 292:25 293:21]
    node _GEN_17 = mux(shadowValid, shadowParam_13, activeParam_13) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 292:25 293:21]
    node _GEN_18 = mux(shadowValid, shadowParam_14, activeParam_14) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 292:25 293:21]
    node _GEN_19 = mux(shadowValid, shadowParam_15, activeParam_15) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 292:25 293:21]
    node _GEN_20 = mux(shadowValid, UInt<1>("h1"), activeValid) @[src/main/scala/npu/core/QuantActUnit.scala 292:25 294:21 266:28]
    node _GEN_21 = mux(consumeShadow, _GEN_4, activeParam_0) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 291:25]
    node _GEN_22 = mux(consumeShadow, _GEN_5, activeParam_1) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 291:25]
    node _GEN_23 = mux(consumeShadow, _GEN_6, activeParam_2) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 291:25]
    node _GEN_24 = mux(consumeShadow, _GEN_7, activeParam_3) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 291:25]
    node _GEN_25 = mux(consumeShadow, _GEN_8, activeParam_4) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 291:25]
    node _GEN_26 = mux(consumeShadow, _GEN_9, activeParam_5) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 291:25]
    node _GEN_27 = mux(consumeShadow, _GEN_10, activeParam_6) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 291:25]
    node _GEN_28 = mux(consumeShadow, _GEN_11, activeParam_7) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 291:25]
    node _GEN_29 = mux(consumeShadow, _GEN_12, activeParam_8) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 291:25]
    node _GEN_30 = mux(consumeShadow, _GEN_13, activeParam_9) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 291:25]
    node _GEN_31 = mux(consumeShadow, _GEN_14, activeParam_10) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 291:25]
    node _GEN_32 = mux(consumeShadow, _GEN_15, activeParam_11) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 291:25]
    node _GEN_33 = mux(consumeShadow, _GEN_16, activeParam_12) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 291:25]
    node _GEN_34 = mux(consumeShadow, _GEN_17, activeParam_13) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 291:25]
    node _GEN_35 = mux(consumeShadow, _GEN_18, activeParam_14) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 291:25]
    node _GEN_36 = mux(consumeShadow, _GEN_19, activeParam_15) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 291:25]
    node _GEN_37 = mux(consumeShadow, _GEN_20, activeValid) @[src/main/scala/npu/core/QuantActUnit.scala 291:25 266:28]
    node _GEN_38 = mux(consumeShadow, UInt<1>("h0"), shadowValid) @[src/main/scala/npu/core/QuantActUnit.scala 291:25 296:19 267:28]
    node _T_4 = and(io_qparam_line_valid, perChannel) @[src/main/scala/npu/core/QuantActUnit.scala 300:31]
    node _GEN_39 = mux(_T_4, io_qparam_line_in_0, shadowParam_0) @[src/main/scala/npu/core/QuantActUnit.scala 264:12 300:46 301:19]
    node _GEN_40 = mux(_T_4, io_qparam_line_in_1, shadowParam_1) @[src/main/scala/npu/core/QuantActUnit.scala 264:12 300:46 301:19]
    node _GEN_41 = mux(_T_4, io_qparam_line_in_2, shadowParam_2) @[src/main/scala/npu/core/QuantActUnit.scala 264:12 300:46 301:19]
    node _GEN_42 = mux(_T_4, io_qparam_line_in_3, shadowParam_3) @[src/main/scala/npu/core/QuantActUnit.scala 264:12 300:46 301:19]
    node _GEN_43 = mux(_T_4, io_qparam_line_in_4, shadowParam_4) @[src/main/scala/npu/core/QuantActUnit.scala 264:12 300:46 301:19]
    node _GEN_44 = mux(_T_4, io_qparam_line_in_5, shadowParam_5) @[src/main/scala/npu/core/QuantActUnit.scala 264:12 300:46 301:19]
    node _GEN_45 = mux(_T_4, io_qparam_line_in_6, shadowParam_6) @[src/main/scala/npu/core/QuantActUnit.scala 264:12 300:46 301:19]
    node _GEN_46 = mux(_T_4, io_qparam_line_in_7, shadowParam_7) @[src/main/scala/npu/core/QuantActUnit.scala 264:12 300:46 301:19]
    node _GEN_47 = mux(_T_4, io_qparam_line_in_8, shadowParam_8) @[src/main/scala/npu/core/QuantActUnit.scala 264:12 300:46 301:19]
    node _GEN_48 = mux(_T_4, io_qparam_line_in_9, shadowParam_9) @[src/main/scala/npu/core/QuantActUnit.scala 264:12 300:46 301:19]
    node _GEN_49 = mux(_T_4, io_qparam_line_in_10, shadowParam_10) @[src/main/scala/npu/core/QuantActUnit.scala 264:12 300:46 301:19]
    node _GEN_50 = mux(_T_4, io_qparam_line_in_11, shadowParam_11) @[src/main/scala/npu/core/QuantActUnit.scala 264:12 300:46 301:19]
    node _GEN_51 = mux(_T_4, io_qparam_line_in_12, shadowParam_12) @[src/main/scala/npu/core/QuantActUnit.scala 264:12 300:46 301:19]
    node _GEN_52 = mux(_T_4, io_qparam_line_in_13, shadowParam_13) @[src/main/scala/npu/core/QuantActUnit.scala 264:12 300:46 301:19]
    node _GEN_53 = mux(_T_4, io_qparam_line_in_14, shadowParam_14) @[src/main/scala/npu/core/QuantActUnit.scala 264:12 300:46 301:19]
    node _GEN_54 = mux(_T_4, io_qparam_line_in_15, shadowParam_15) @[src/main/scala/npu/core/QuantActUnit.scala 264:12 300:46 301:19]
    node _GEN_55 = mux(_T_4, UInt<1>("h1"), _GEN_38) @[src/main/scala/npu/core/QuantActUnit.scala 300:46 302:19]
    node _GEN_56 = mux(_T_4, UInt<1>("h0"), _GEN_3) @[src/main/scala/npu/core/QuantActUnit.scala 300:46 303:22]
    node _GEN_57 = mux(_T_3, UInt<1>("h0"), _GEN_37) @[src/main/scala/npu/core/QuantActUnit.scala 282:38 283:17]
    node _GEN_58 = mux(_T_3, UInt<1>("h0"), _GEN_55) @[src/main/scala/npu/core/QuantActUnit.scala 282:38 284:17]
    node _GEN_59 = mux(_T_3, UInt<1>("h0"), _GEN_56) @[src/main/scala/npu/core/QuantActUnit.scala 282:38 285:20]
    node _GEN_60 = mux(_T_3, activeParam_0, _GEN_21) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 282:38]
    node _GEN_61 = mux(_T_3, activeParam_1, _GEN_22) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 282:38]
    node _GEN_62 = mux(_T_3, activeParam_2, _GEN_23) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 282:38]
    node _GEN_63 = mux(_T_3, activeParam_3, _GEN_24) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 282:38]
    node _GEN_64 = mux(_T_3, activeParam_4, _GEN_25) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 282:38]
    node _GEN_65 = mux(_T_3, activeParam_5, _GEN_26) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 282:38]
    node _GEN_66 = mux(_T_3, activeParam_6, _GEN_27) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 282:38]
    node _GEN_67 = mux(_T_3, activeParam_7, _GEN_28) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 282:38]
    node _GEN_68 = mux(_T_3, activeParam_8, _GEN_29) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 282:38]
    node _GEN_69 = mux(_T_3, activeParam_9, _GEN_30) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 282:38]
    node _GEN_70 = mux(_T_3, activeParam_10, _GEN_31) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 282:38]
    node _GEN_71 = mux(_T_3, activeParam_11, _GEN_32) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 282:38]
    node _GEN_72 = mux(_T_3, activeParam_12, _GEN_33) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 282:38]
    node _GEN_73 = mux(_T_3, activeParam_13, _GEN_34) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 282:38]
    node _GEN_74 = mux(_T_3, activeParam_14, _GEN_35) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 282:38]
    node _GEN_75 = mux(_T_3, activeParam_15, _GEN_36) @[src/main/scala/npu/core/QuantActUnit.scala 261:12 282:38]
    node _GEN_76 = mux(_T_3, shadowParam_0, _GEN_39) @[src/main/scala/npu/core/QuantActUnit.scala 264:12 282:38]
    node _GEN_77 = mux(_T_3, shadowParam_1, _GEN_40) @[src/main/scala/npu/core/QuantActUnit.scala 264:12 282:38]
    node _GEN_78 = mux(_T_3, shadowParam_2, _GEN_41) @[src/main/scala/npu/core/QuantActUnit.scala 264:12 282:38]
    node _GEN_79 = mux(_T_3, shadowParam_3, _GEN_42) @[src/main/scala/npu/core/QuantActUnit.scala 264:12 282:38]
    node _GEN_80 = mux(_T_3, shadowParam_4, _GEN_43) @[src/main/scala/npu/core/QuantActUnit.scala 264:12 282:38]
    node _GEN_81 = mux(_T_3, shadowParam_5, _GEN_44) @[src/main/scala/npu/core/QuantActUnit.scala 264:12 282:38]
    node _GEN_82 = mux(_T_3, shadowParam_6, _GEN_45) @[src/main/scala/npu/core/QuantActUnit.scala 264:12 282:38]
    node _GEN_83 = mux(_T_3, shadowParam_7, _GEN_46) @[src/main/scala/npu/core/QuantActUnit.scala 264:12 282:38]
    node _GEN_84 = mux(_T_3, shadowParam_8, _GEN_47) @[src/main/scala/npu/core/QuantActUnit.scala 264:12 282:38]
    node _GEN_85 = mux(_T_3, shadowParam_9, _GEN_48) @[src/main/scala/npu/core/QuantActUnit.scala 264:12 282:38]
    node _GEN_86 = mux(_T_3, shadowParam_10, _GEN_49) @[src/main/scala/npu/core/QuantActUnit.scala 264:12 282:38]
    node _GEN_87 = mux(_T_3, shadowParam_11, _GEN_50) @[src/main/scala/npu/core/QuantActUnit.scala 264:12 282:38]
    node _GEN_88 = mux(_T_3, shadowParam_12, _GEN_51) @[src/main/scala/npu/core/QuantActUnit.scala 264:12 282:38]
    node _GEN_89 = mux(_T_3, shadowParam_13, _GEN_52) @[src/main/scala/npu/core/QuantActUnit.scala 264:12 282:38]
    node _GEN_90 = mux(_T_3, shadowParam_14, _GEN_53) @[src/main/scala/npu/core/QuantActUnit.scala 264:12 282:38]
    node _GEN_91 = mux(_T_3, shadowParam_15, _GEN_54) @[src/main/scala/npu/core/QuantActUnit.scala 264:12 282:38]
    node _effectiveParam_0_T = mux(tileStart, shadowParam_0, activeParam_0) @[src/main/scala/npu/core/QuantActUnit.scala 315:12]
    node _effectiveParam_0_T_1 = mux(perChannel, _effectiveParam_0_T, io_matrix_param) @[src/main/scala/npu/core/QuantActUnit.scala 313:10]
    node _effectiveParam_1_T = mux(tileStart, shadowParam_1, activeParam_1) @[src/main/scala/npu/core/QuantActUnit.scala 315:12]
    node _effectiveParam_1_T_1 = mux(perChannel, _effectiveParam_1_T, io_matrix_param) @[src/main/scala/npu/core/QuantActUnit.scala 313:10]
    node _effectiveParam_2_T = mux(tileStart, shadowParam_2, activeParam_2) @[src/main/scala/npu/core/QuantActUnit.scala 315:12]
    node _effectiveParam_2_T_1 = mux(perChannel, _effectiveParam_2_T, io_matrix_param) @[src/main/scala/npu/core/QuantActUnit.scala 313:10]
    node _effectiveParam_3_T = mux(tileStart, shadowParam_3, activeParam_3) @[src/main/scala/npu/core/QuantActUnit.scala 315:12]
    node _effectiveParam_3_T_1 = mux(perChannel, _effectiveParam_3_T, io_matrix_param) @[src/main/scala/npu/core/QuantActUnit.scala 313:10]
    node _effectiveParam_4_T = mux(tileStart, shadowParam_4, activeParam_4) @[src/main/scala/npu/core/QuantActUnit.scala 315:12]
    node _effectiveParam_4_T_1 = mux(perChannel, _effectiveParam_4_T, io_matrix_param) @[src/main/scala/npu/core/QuantActUnit.scala 313:10]
    node _effectiveParam_5_T = mux(tileStart, shadowParam_5, activeParam_5) @[src/main/scala/npu/core/QuantActUnit.scala 315:12]
    node _effectiveParam_5_T_1 = mux(perChannel, _effectiveParam_5_T, io_matrix_param) @[src/main/scala/npu/core/QuantActUnit.scala 313:10]
    node _effectiveParam_6_T = mux(tileStart, shadowParam_6, activeParam_6) @[src/main/scala/npu/core/QuantActUnit.scala 315:12]
    node _effectiveParam_6_T_1 = mux(perChannel, _effectiveParam_6_T, io_matrix_param) @[src/main/scala/npu/core/QuantActUnit.scala 313:10]
    node _effectiveParam_7_T = mux(tileStart, shadowParam_7, activeParam_7) @[src/main/scala/npu/core/QuantActUnit.scala 315:12]
    node _effectiveParam_7_T_1 = mux(perChannel, _effectiveParam_7_T, io_matrix_param) @[src/main/scala/npu/core/QuantActUnit.scala 313:10]
    node _effectiveParam_8_T = mux(tileStart, shadowParam_8, activeParam_8) @[src/main/scala/npu/core/QuantActUnit.scala 315:12]
    node _effectiveParam_8_T_1 = mux(perChannel, _effectiveParam_8_T, io_matrix_param) @[src/main/scala/npu/core/QuantActUnit.scala 313:10]
    node _effectiveParam_9_T = mux(tileStart, shadowParam_9, activeParam_9) @[src/main/scala/npu/core/QuantActUnit.scala 315:12]
    node _effectiveParam_9_T_1 = mux(perChannel, _effectiveParam_9_T, io_matrix_param) @[src/main/scala/npu/core/QuantActUnit.scala 313:10]
    node _effectiveParam_10_T = mux(tileStart, shadowParam_10, activeParam_10) @[src/main/scala/npu/core/QuantActUnit.scala 315:12]
    node _effectiveParam_10_T_1 = mux(perChannel, _effectiveParam_10_T, io_matrix_param) @[src/main/scala/npu/core/QuantActUnit.scala 313:10]
    node _effectiveParam_11_T = mux(tileStart, shadowParam_11, activeParam_11) @[src/main/scala/npu/core/QuantActUnit.scala 315:12]
    node _effectiveParam_11_T_1 = mux(perChannel, _effectiveParam_11_T, io_matrix_param) @[src/main/scala/npu/core/QuantActUnit.scala 313:10]
    node _effectiveParam_12_T = mux(tileStart, shadowParam_12, activeParam_12) @[src/main/scala/npu/core/QuantActUnit.scala 315:12]
    node _effectiveParam_12_T_1 = mux(perChannel, _effectiveParam_12_T, io_matrix_param) @[src/main/scala/npu/core/QuantActUnit.scala 313:10]
    node _effectiveParam_13_T = mux(tileStart, shadowParam_13, activeParam_13) @[src/main/scala/npu/core/QuantActUnit.scala 315:12]
    node _effectiveParam_13_T_1 = mux(perChannel, _effectiveParam_13_T, io_matrix_param) @[src/main/scala/npu/core/QuantActUnit.scala 313:10]
    node _effectiveParam_14_T = mux(tileStart, shadowParam_14, activeParam_14) @[src/main/scala/npu/core/QuantActUnit.scala 315:12]
    node _effectiveParam_14_T_1 = mux(perChannel, _effectiveParam_14_T, io_matrix_param) @[src/main/scala/npu/core/QuantActUnit.scala 313:10]
    node _effectiveParam_15_T = mux(tileStart, shadowParam_15, activeParam_15) @[src/main/scala/npu/core/QuantActUnit.scala 315:12]
    node _effectiveParam_15_T_1 = mux(perChannel, _effectiveParam_15_T, io_matrix_param) @[src/main/scala/npu/core/QuantActUnit.scala 313:10]
    reg primed : UInt<1>, clock with :
      reset => (UInt<1>("h0"), primed) @[src/main/scala/npu/core/QuantActUnit.scala 320:23]
    node _T_5 = eq(perChannel, UInt<1>("h0")) @[src/main/scala/npu/core/QuantActUnit.scala 321:25]
    node _T_6 = or(io_soft_reset, _T_5) @[src/main/scala/npu/core/QuantActUnit.scala 321:22]
    node _GEN_92 = mux(shadowValid, UInt<1>("h1"), primed) @[src/main/scala/npu/core/QuantActUnit.scala 323:27 324:12 320:23]
    node _GEN_93 = mux(_T_6, UInt<1>("h0"), _GEN_92) @[src/main/scala/npu/core/QuantActUnit.scala 321:38 322:12]
    node _io_busy_WIRE_1 = cores_1.io_busy @[src/main/scala/npu/core/QuantActUnit.scala 356:{21,21}]
    node _io_busy_WIRE_0 = cores_0.io_busy @[src/main/scala/npu/core/QuantActUnit.scala 356:{21,21}]
    node io_busy_lo_lo_lo = cat(_io_busy_WIRE_1, _io_busy_WIRE_0) @[src/main/scala/npu/core/QuantActUnit.scala 356:44]
    node _io_busy_WIRE_3 = cores_3.io_busy @[src/main/scala/npu/core/QuantActUnit.scala 356:{21,21}]
    node _io_busy_WIRE_2 = cores_2.io_busy @[src/main/scala/npu/core/QuantActUnit.scala 356:{21,21}]
    node io_busy_lo_lo_hi = cat(_io_busy_WIRE_3, _io_busy_WIRE_2) @[src/main/scala/npu/core/QuantActUnit.scala 356:44]
    node io_busy_lo_lo = cat(io_busy_lo_lo_hi, io_busy_lo_lo_lo) @[src/main/scala/npu/core/QuantActUnit.scala 356:44]
    node _io_busy_WIRE_5 = cores_5.io_busy @[src/main/scala/npu/core/QuantActUnit.scala 356:{21,21}]
    node _io_busy_WIRE_4 = cores_4.io_busy @[src/main/scala/npu/core/QuantActUnit.scala 356:{21,21}]
    node io_busy_lo_hi_lo = cat(_io_busy_WIRE_5, _io_busy_WIRE_4) @[src/main/scala/npu/core/QuantActUnit.scala 356:44]
    node _io_busy_WIRE_7 = cores_7.io_busy @[src/main/scala/npu/core/QuantActUnit.scala 356:{21,21}]
    node _io_busy_WIRE_6 = cores_6.io_busy @[src/main/scala/npu/core/QuantActUnit.scala 356:{21,21}]
    node io_busy_lo_hi_hi = cat(_io_busy_WIRE_7, _io_busy_WIRE_6) @[src/main/scala/npu/core/QuantActUnit.scala 356:44]
    node io_busy_lo_hi = cat(io_busy_lo_hi_hi, io_busy_lo_hi_lo) @[src/main/scala/npu/core/QuantActUnit.scala 356:44]
    node io_busy_lo = cat(io_busy_lo_hi, io_busy_lo_lo) @[src/main/scala/npu/core/QuantActUnit.scala 356:44]
    node _io_busy_WIRE_9 = cores_9.io_busy @[src/main/scala/npu/core/QuantActUnit.scala 356:{21,21}]
    node _io_busy_WIRE_8 = cores_8.io_busy @[src/main/scala/npu/core/QuantActUnit.scala 356:{21,21}]
    node io_busy_hi_lo_lo = cat(_io_busy_WIRE_9, _io_busy_WIRE_8) @[src/main/scala/npu/core/QuantActUnit.scala 356:44]
    node _io_busy_WIRE_11 = cores_11.io_busy @[src/main/scala/npu/core/QuantActUnit.scala 356:{21,21}]
    node _io_busy_WIRE_10 = cores_10.io_busy @[src/main/scala/npu/core/QuantActUnit.scala 356:{21,21}]
    node io_busy_hi_lo_hi = cat(_io_busy_WIRE_11, _io_busy_WIRE_10) @[src/main/scala/npu/core/QuantActUnit.scala 356:44]
    node io_busy_hi_lo = cat(io_busy_hi_lo_hi, io_busy_hi_lo_lo) @[src/main/scala/npu/core/QuantActUnit.scala 356:44]
    node _io_busy_WIRE_13 = cores_13.io_busy @[src/main/scala/npu/core/QuantActUnit.scala 356:{21,21}]
    node _io_busy_WIRE_12 = cores_12.io_busy @[src/main/scala/npu/core/QuantActUnit.scala 356:{21,21}]
    node io_busy_hi_hi_lo = cat(_io_busy_WIRE_13, _io_busy_WIRE_12) @[src/main/scala/npu/core/QuantActUnit.scala 356:44]
    node _io_busy_WIRE_15 = cores_15.io_busy @[src/main/scala/npu/core/QuantActUnit.scala 356:{21,21}]
    node _io_busy_WIRE_14 = cores_14.io_busy @[src/main/scala/npu/core/QuantActUnit.scala 356:{21,21}]
    node io_busy_hi_hi_hi = cat(_io_busy_WIRE_15, _io_busy_WIRE_14) @[src/main/scala/npu/core/QuantActUnit.scala 356:44]
    node io_busy_hi_hi = cat(io_busy_hi_hi_hi, io_busy_hi_hi_lo) @[src/main/scala/npu/core/QuantActUnit.scala 356:44]
    node io_busy_hi = cat(io_busy_hi_hi, io_busy_hi_lo) @[src/main/scala/npu/core/QuantActUnit.scala 356:44]
    node _io_busy_T = cat(io_busy_hi, io_busy_lo) @[src/main/scala/npu/core/QuantActUnit.scala 356:44]
    node _io_busy_T_1 = orr(_io_busy_T) @[src/main/scala/npu/core/QuantActUnit.scala 356:51]
    node _io_lut_ready_WIRE_1 = cores_1.io_lut_ready @[src/main/scala/npu/core/QuantActUnit.scala 359:{12,12}]
    node _io_lut_ready_WIRE_0 = cores_0.io_lut_ready @[src/main/scala/npu/core/QuantActUnit.scala 359:{12,12}]
    node io_lut_ready_lo_lo_lo = cat(_io_lut_ready_WIRE_1, _io_lut_ready_WIRE_0) @[src/main/scala/npu/core/QuantActUnit.scala 359:40]
    node _io_lut_ready_WIRE_3 = cores_3.io_lut_ready @[src/main/scala/npu/core/QuantActUnit.scala 359:{12,12}]
    node _io_lut_ready_WIRE_2 = cores_2.io_lut_ready @[src/main/scala/npu/core/QuantActUnit.scala 359:{12,12}]
    node io_lut_ready_lo_lo_hi = cat(_io_lut_ready_WIRE_3, _io_lut_ready_WIRE_2) @[src/main/scala/npu/core/QuantActUnit.scala 359:40]
    node io_lut_ready_lo_lo = cat(io_lut_ready_lo_lo_hi, io_lut_ready_lo_lo_lo) @[src/main/scala/npu/core/QuantActUnit.scala 359:40]
    node _io_lut_ready_WIRE_5 = cores_5.io_lut_ready @[src/main/scala/npu/core/QuantActUnit.scala 359:{12,12}]
    node _io_lut_ready_WIRE_4 = cores_4.io_lut_ready @[src/main/scala/npu/core/QuantActUnit.scala 359:{12,12}]
    node io_lut_ready_lo_hi_lo = cat(_io_lut_ready_WIRE_5, _io_lut_ready_WIRE_4) @[src/main/scala/npu/core/QuantActUnit.scala 359:40]
    node _io_lut_ready_WIRE_7 = cores_7.io_lut_ready @[src/main/scala/npu/core/QuantActUnit.scala 359:{12,12}]
    node _io_lut_ready_WIRE_6 = cores_6.io_lut_ready @[src/main/scala/npu/core/QuantActUnit.scala 359:{12,12}]
    node io_lut_ready_lo_hi_hi = cat(_io_lut_ready_WIRE_7, _io_lut_ready_WIRE_6) @[src/main/scala/npu/core/QuantActUnit.scala 359:40]
    node io_lut_ready_lo_hi = cat(io_lut_ready_lo_hi_hi, io_lut_ready_lo_hi_lo) @[src/main/scala/npu/core/QuantActUnit.scala 359:40]
    node io_lut_ready_lo = cat(io_lut_ready_lo_hi, io_lut_ready_lo_lo) @[src/main/scala/npu/core/QuantActUnit.scala 359:40]
    node _io_lut_ready_WIRE_9 = cores_9.io_lut_ready @[src/main/scala/npu/core/QuantActUnit.scala 359:{12,12}]
    node _io_lut_ready_WIRE_8 = cores_8.io_lut_ready @[src/main/scala/npu/core/QuantActUnit.scala 359:{12,12}]
    node io_lut_ready_hi_lo_lo = cat(_io_lut_ready_WIRE_9, _io_lut_ready_WIRE_8) @[src/main/scala/npu/core/QuantActUnit.scala 359:40]
    node _io_lut_ready_WIRE_11 = cores_11.io_lut_ready @[src/main/scala/npu/core/QuantActUnit.scala 359:{12,12}]
    node _io_lut_ready_WIRE_10 = cores_10.io_lut_ready @[src/main/scala/npu/core/QuantActUnit.scala 359:{12,12}]
    node io_lut_ready_hi_lo_hi = cat(_io_lut_ready_WIRE_11, _io_lut_ready_WIRE_10) @[src/main/scala/npu/core/QuantActUnit.scala 359:40]
    node io_lut_ready_hi_lo = cat(io_lut_ready_hi_lo_hi, io_lut_ready_hi_lo_lo) @[src/main/scala/npu/core/QuantActUnit.scala 359:40]
    node _io_lut_ready_WIRE_13 = cores_13.io_lut_ready @[src/main/scala/npu/core/QuantActUnit.scala 359:{12,12}]
    node _io_lut_ready_WIRE_12 = cores_12.io_lut_ready @[src/main/scala/npu/core/QuantActUnit.scala 359:{12,12}]
    node io_lut_ready_hi_hi_lo = cat(_io_lut_ready_WIRE_13, _io_lut_ready_WIRE_12) @[src/main/scala/npu/core/QuantActUnit.scala 359:40]
    node _io_lut_ready_WIRE_15 = cores_15.io_lut_ready @[src/main/scala/npu/core/QuantActUnit.scala 359:{12,12}]
    node _io_lut_ready_WIRE_14 = cores_14.io_lut_ready @[src/main/scala/npu/core/QuantActUnit.scala 359:{12,12}]
    node io_lut_ready_hi_hi_hi = cat(_io_lut_ready_WIRE_15, _io_lut_ready_WIRE_14) @[src/main/scala/npu/core/QuantActUnit.scala 359:40]
    node io_lut_ready_hi_hi = cat(io_lut_ready_hi_hi_hi, io_lut_ready_hi_hi_lo) @[src/main/scala/npu/core/QuantActUnit.scala 359:40]
    node io_lut_ready_hi = cat(io_lut_ready_hi_hi, io_lut_ready_hi_lo) @[src/main/scala/npu/core/QuantActUnit.scala 359:40]
    node _io_lut_ready_T = cat(io_lut_ready_hi, io_lut_ready_lo) @[src/main/scala/npu/core/QuantActUnit.scala 359:40]
    node _io_lut_ready_T_1 = andr(_io_lut_ready_T) @[src/main/scala/npu/core/QuantActUnit.scala 359:47]
    node _io_prefetch_ready_T = eq(perChannel, UInt<1>("h0")) @[src/main/scala/npu/core/QuantActUnit.scala 362:5]
    node _io_prefetch_ready_T_1 = and(primed, io_lut_ready) @[src/main/scala/npu/core/QuantActUnit.scala 362:28]
    node _io_prefetch_ready_T_2 = or(_io_prefetch_ready_T, _io_prefetch_ready_T_1) @[src/main/scala/npu/core/QuantActUnit.scala 362:17]
    node _coreAlert_WIRE_1 = cores_1.io_sync_alert @[src/main/scala/npu/core/QuantActUnit.scala 365:{12,12}]
    node _coreAlert_WIRE_0 = cores_0.io_sync_alert @[src/main/scala/npu/core/QuantActUnit.scala 365:{12,12}]
    node coreAlert_lo_lo_lo = cat(_coreAlert_WIRE_1, _coreAlert_WIRE_0) @[src/main/scala/npu/core/QuantActUnit.scala 365:41]
    node _coreAlert_WIRE_3 = cores_3.io_sync_alert @[src/main/scala/npu/core/QuantActUnit.scala 365:{12,12}]
    node _coreAlert_WIRE_2 = cores_2.io_sync_alert @[src/main/scala/npu/core/QuantActUnit.scala 365:{12,12}]
    node coreAlert_lo_lo_hi = cat(_coreAlert_WIRE_3, _coreAlert_WIRE_2) @[src/main/scala/npu/core/QuantActUnit.scala 365:41]
    node coreAlert_lo_lo = cat(coreAlert_lo_lo_hi, coreAlert_lo_lo_lo) @[src/main/scala/npu/core/QuantActUnit.scala 365:41]
    node _coreAlert_WIRE_5 = cores_5.io_sync_alert @[src/main/scala/npu/core/QuantActUnit.scala 365:{12,12}]
    node _coreAlert_WIRE_4 = cores_4.io_sync_alert @[src/main/scala/npu/core/QuantActUnit.scala 365:{12,12}]
    node coreAlert_lo_hi_lo = cat(_coreAlert_WIRE_5, _coreAlert_WIRE_4) @[src/main/scala/npu/core/QuantActUnit.scala 365:41]
    node _coreAlert_WIRE_7 = cores_7.io_sync_alert @[src/main/scala/npu/core/QuantActUnit.scala 365:{12,12}]
    node _coreAlert_WIRE_6 = cores_6.io_sync_alert @[src/main/scala/npu/core/QuantActUnit.scala 365:{12,12}]
    node coreAlert_lo_hi_hi = cat(_coreAlert_WIRE_7, _coreAlert_WIRE_6) @[src/main/scala/npu/core/QuantActUnit.scala 365:41]
    node coreAlert_lo_hi = cat(coreAlert_lo_hi_hi, coreAlert_lo_hi_lo) @[src/main/scala/npu/core/QuantActUnit.scala 365:41]
    node coreAlert_lo = cat(coreAlert_lo_hi, coreAlert_lo_lo) @[src/main/scala/npu/core/QuantActUnit.scala 365:41]
    node _coreAlert_WIRE_9 = cores_9.io_sync_alert @[src/main/scala/npu/core/QuantActUnit.scala 365:{12,12}]
    node _coreAlert_WIRE_8 = cores_8.io_sync_alert @[src/main/scala/npu/core/QuantActUnit.scala 365:{12,12}]
    node coreAlert_hi_lo_lo = cat(_coreAlert_WIRE_9, _coreAlert_WIRE_8) @[src/main/scala/npu/core/QuantActUnit.scala 365:41]
    node _coreAlert_WIRE_11 = cores_11.io_sync_alert @[src/main/scala/npu/core/QuantActUnit.scala 365:{12,12}]
    node _coreAlert_WIRE_10 = cores_10.io_sync_alert @[src/main/scala/npu/core/QuantActUnit.scala 365:{12,12}]
    node coreAlert_hi_lo_hi = cat(_coreAlert_WIRE_11, _coreAlert_WIRE_10) @[src/main/scala/npu/core/QuantActUnit.scala 365:41]
    node coreAlert_hi_lo = cat(coreAlert_hi_lo_hi, coreAlert_hi_lo_lo) @[src/main/scala/npu/core/QuantActUnit.scala 365:41]
    node _coreAlert_WIRE_13 = cores_13.io_sync_alert @[src/main/scala/npu/core/QuantActUnit.scala 365:{12,12}]
    node _coreAlert_WIRE_12 = cores_12.io_sync_alert @[src/main/scala/npu/core/QuantActUnit.scala 365:{12,12}]
    node coreAlert_hi_hi_lo = cat(_coreAlert_WIRE_13, _coreAlert_WIRE_12) @[src/main/scala/npu/core/QuantActUnit.scala 365:41]
    node _coreAlert_WIRE_15 = cores_15.io_sync_alert @[src/main/scala/npu/core/QuantActUnit.scala 365:{12,12}]
    node _coreAlert_WIRE_14 = cores_14.io_sync_alert @[src/main/scala/npu/core/QuantActUnit.scala 365:{12,12}]
    node coreAlert_hi_hi_hi = cat(_coreAlert_WIRE_15, _coreAlert_WIRE_14) @[src/main/scala/npu/core/QuantActUnit.scala 365:41]
    node coreAlert_hi_hi = cat(coreAlert_hi_hi_hi, coreAlert_hi_hi_lo) @[src/main/scala/npu/core/QuantActUnit.scala 365:41]
    node coreAlert_hi = cat(coreAlert_hi_hi, coreAlert_hi_lo) @[src/main/scala/npu/core/QuantActUnit.scala 365:41]
    node _coreAlert_T = cat(coreAlert_hi, coreAlert_lo) @[src/main/scala/npu/core/QuantActUnit.scala 365:41]
    node coreAlert = orr(_coreAlert_T) @[src/main/scala/npu/core/QuantActUnit.scala 365:48]
    node _laneMismatch_T = eq(allValid, UInt<1>("h0")) @[src/main/scala/npu/core/QuantActUnit.scala 367:34]
    node laneMismatch = and(anyValid, _laneMismatch_T) @[src/main/scala/npu/core/QuantActUnit.scala 367:31]
    node _firstTileWithoutShadow_T = eq(shadowValid, UInt<1>("h0")) @[src/main/scala/npu/core/QuantActUnit.scala 368:49]
    node firstTileWithoutShadow = and(consumeShadow, _firstTileWithoutShadow_T) @[src/main/scala/npu/core/QuantActUnit.scala 368:46]
    node _laterTileWithoutActive_T = and(perChannel, inputFire) @[src/main/scala/npu/core/QuantActUnit.scala 370:16]
    node _laterTileWithoutActive_T_1 = eq(tileStart, UInt<1>("h0")) @[src/main/scala/npu/core/QuantActUnit.scala 370:32]
    node _laterTileWithoutActive_T_2 = and(_laterTileWithoutActive_T, _laterTileWithoutActive_T_1) @[src/main/scala/npu/core/QuantActUnit.scala 370:29]
    node _laterTileWithoutActive_T_3 = eq(activeValid, UInt<1>("h0")) @[src/main/scala/npu/core/QuantActUnit.scala 370:46]
    node laterTileWithoutActive = and(_laterTileWithoutActive_T_2, _laterTileWithoutActive_T_3) @[src/main/scala/npu/core/QuantActUnit.scala 370:43]
    node _unexpectedResponse_T = and(perChannel, io_qparam_line_valid) @[src/main/scala/npu/core/QuantActUnit.scala 373:16]
    node _unexpectedResponse_T_1 = and(_unexpectedResponse_T, shadowValid) @[src/main/scala/npu/core/QuantActUnit.scala 373:40]
    node _unexpectedResponse_T_2 = eq(consumeShadow, UInt<1>("h0")) @[src/main/scala/npu/core/QuantActUnit.scala 375:5]
    node unexpectedResponse = and(_unexpectedResponse_T_1, _unexpectedResponse_T_2) @[src/main/scala/npu/core/QuantActUnit.scala 374:17]
    node _io_sync_alert_T = or(coreAlert, laneMismatch) @[src/main/scala/npu/core/QuantActUnit.scala 378:15]
    node _io_sync_alert_T_1 = or(_io_sync_alert_T, firstTileWithoutShadow) @[src/main/scala/npu/core/QuantActUnit.scala 379:18]
    node _io_sync_alert_T_2 = or(_io_sync_alert_T_1, laterTileWithoutActive) @[src/main/scala/npu/core/QuantActUnit.scala 380:28]
    node _io_sync_alert_T_3 = or(_io_sync_alert_T_2, unexpectedResponse) @[src/main/scala/npu/core/QuantActUnit.scala 381:28]
    node _activeParam_WIRE_0 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 261:{20,20}]
    node _activeParam_WIRE_1 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 261:{20,20}]
    node _activeParam_WIRE_2 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 261:{20,20}]
    node _activeParam_WIRE_3 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 261:{20,20}]
    node _activeParam_WIRE_4 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 261:{20,20}]
    node _activeParam_WIRE_5 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 261:{20,20}]
    node _activeParam_WIRE_6 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 261:{20,20}]
    node _activeParam_WIRE_7 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 261:{20,20}]
    node _activeParam_WIRE_8 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 261:{20,20}]
    node _activeParam_WIRE_9 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 261:{20,20}]
    node _activeParam_WIRE_10 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 261:{20,20}]
    node _activeParam_WIRE_11 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 261:{20,20}]
    node _activeParam_WIRE_12 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 261:{20,20}]
    node _activeParam_WIRE_13 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 261:{20,20}]
    node _activeParam_WIRE_14 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 261:{20,20}]
    node _activeParam_WIRE_15 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 261:{20,20}]
    node _shadowParam_WIRE_0 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 264:{20,20}]
    node _shadowParam_WIRE_1 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 264:{20,20}]
    node _shadowParam_WIRE_2 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 264:{20,20}]
    node _shadowParam_WIRE_3 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 264:{20,20}]
    node _shadowParam_WIRE_4 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 264:{20,20}]
    node _shadowParam_WIRE_5 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 264:{20,20}]
    node _shadowParam_WIRE_6 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 264:{20,20}]
    node _shadowParam_WIRE_7 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 264:{20,20}]
    node _shadowParam_WIRE_8 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 264:{20,20}]
    node _shadowParam_WIRE_9 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 264:{20,20}]
    node _shadowParam_WIRE_10 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 264:{20,20}]
    node _shadowParam_WIRE_11 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 264:{20,20}]
    node _shadowParam_WIRE_12 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 264:{20,20}]
    node _shadowParam_WIRE_13 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 264:{20,20}]
    node _shadowParam_WIRE_14 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 264:{20,20}]
    node _shadowParam_WIRE_15 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 264:{20,20}]
    node effectiveParam_0 = _effectiveParam_0_T_1 @[src/main/scala/npu/core/QuantActUnit.scala 309:9 312:23]
    node effectiveParam_1 = _effectiveParam_1_T_1 @[src/main/scala/npu/core/QuantActUnit.scala 309:9 312:23]
    node effectiveParam_2 = _effectiveParam_2_T_1 @[src/main/scala/npu/core/QuantActUnit.scala 309:9 312:23]
    node effectiveParam_3 = _effectiveParam_3_T_1 @[src/main/scala/npu/core/QuantActUnit.scala 309:9 312:23]
    node effectiveParam_4 = _effectiveParam_4_T_1 @[src/main/scala/npu/core/QuantActUnit.scala 309:9 312:23]
    node effectiveParam_5 = _effectiveParam_5_T_1 @[src/main/scala/npu/core/QuantActUnit.scala 309:9 312:23]
    node effectiveParam_6 = _effectiveParam_6_T_1 @[src/main/scala/npu/core/QuantActUnit.scala 309:9 312:23]
    node effectiveParam_7 = _effectiveParam_7_T_1 @[src/main/scala/npu/core/QuantActUnit.scala 309:9 312:23]
    node effectiveParam_8 = _effectiveParam_8_T_1 @[src/main/scala/npu/core/QuantActUnit.scala 309:9 312:23]
    node effectiveParam_9 = _effectiveParam_9_T_1 @[src/main/scala/npu/core/QuantActUnit.scala 309:9 312:23]
    node effectiveParam_10 = _effectiveParam_10_T_1 @[src/main/scala/npu/core/QuantActUnit.scala 309:9 312:23]
    node effectiveParam_11 = _effectiveParam_11_T_1 @[src/main/scala/npu/core/QuantActUnit.scala 309:9 312:23]
    node effectiveParam_12 = _effectiveParam_12_T_1 @[src/main/scala/npu/core/QuantActUnit.scala 309:9 312:23]
    node effectiveParam_13 = _effectiveParam_13_T_1 @[src/main/scala/npu/core/QuantActUnit.scala 309:9 312:23]
    node effectiveParam_14 = _effectiveParam_14_T_1 @[src/main/scala/npu/core/QuantActUnit.scala 309:9 312:23]
    node effectiveParam_15 = _effectiveParam_15_T_1 @[src/main/scala/npu/core/QuantActUnit.scala 309:9 312:23]
    io_qparam_req_line <= _io_qparam_req_line_T_6 @[src/main/scala/npu/core/QuantActUnit.scala 275:22]
    io_out_vec_0 <= cores_0.io_out_qact @[src/main/scala/npu/core/QuantActUnit.scala 351:19]
    io_out_vec_1 <= cores_1.io_out_qact @[src/main/scala/npu/core/QuantActUnit.scala 351:19]
    io_out_vec_2 <= cores_2.io_out_qact @[src/main/scala/npu/core/QuantActUnit.scala 351:19]
    io_out_vec_3 <= cores_3.io_out_qact @[src/main/scala/npu/core/QuantActUnit.scala 351:19]
    io_out_vec_4 <= cores_4.io_out_qact @[src/main/scala/npu/core/QuantActUnit.scala 351:19]
    io_out_vec_5 <= cores_5.io_out_qact @[src/main/scala/npu/core/QuantActUnit.scala 351:19]
    io_out_vec_6 <= cores_6.io_out_qact @[src/main/scala/npu/core/QuantActUnit.scala 351:19]
    io_out_vec_7 <= cores_7.io_out_qact @[src/main/scala/npu/core/QuantActUnit.scala 351:19]
    io_out_vec_8 <= cores_8.io_out_qact @[src/main/scala/npu/core/QuantActUnit.scala 351:19]
    io_out_vec_9 <= cores_9.io_out_qact @[src/main/scala/npu/core/QuantActUnit.scala 351:19]
    io_out_vec_10 <= cores_10.io_out_qact @[src/main/scala/npu/core/QuantActUnit.scala 351:19]
    io_out_vec_11 <= cores_11.io_out_qact @[src/main/scala/npu/core/QuantActUnit.scala 351:19]
    io_out_vec_12 <= cores_12.io_out_qact @[src/main/scala/npu/core/QuantActUnit.scala 351:19]
    io_out_vec_13 <= cores_13.io_out_qact @[src/main/scala/npu/core/QuantActUnit.scala 351:19]
    io_out_vec_14 <= cores_14.io_out_qact @[src/main/scala/npu/core/QuantActUnit.scala 351:19]
    io_out_vec_15 <= cores_15.io_out_qact @[src/main/scala/npu/core/QuantActUnit.scala 351:19]
    io_out_valid_0 <= cores_0.io_out_valid @[src/main/scala/npu/core/QuantActUnit.scala 352:21]
    io_out_valid_1 <= cores_1.io_out_valid @[src/main/scala/npu/core/QuantActUnit.scala 352:21]
    io_out_valid_2 <= cores_2.io_out_valid @[src/main/scala/npu/core/QuantActUnit.scala 352:21]
    io_out_valid_3 <= cores_3.io_out_valid @[src/main/scala/npu/core/QuantActUnit.scala 352:21]
    io_out_valid_4 <= cores_4.io_out_valid @[src/main/scala/npu/core/QuantActUnit.scala 352:21]
    io_out_valid_5 <= cores_5.io_out_valid @[src/main/scala/npu/core/QuantActUnit.scala 352:21]
    io_out_valid_6 <= cores_6.io_out_valid @[src/main/scala/npu/core/QuantActUnit.scala 352:21]
    io_out_valid_7 <= cores_7.io_out_valid @[src/main/scala/npu/core/QuantActUnit.scala 352:21]
    io_out_valid_8 <= cores_8.io_out_valid @[src/main/scala/npu/core/QuantActUnit.scala 352:21]
    io_out_valid_9 <= cores_9.io_out_valid @[src/main/scala/npu/core/QuantActUnit.scala 352:21]
    io_out_valid_10 <= cores_10.io_out_valid @[src/main/scala/npu/core/QuantActUnit.scala 352:21]
    io_out_valid_11 <= cores_11.io_out_valid @[src/main/scala/npu/core/QuantActUnit.scala 352:21]
    io_out_valid_12 <= cores_12.io_out_valid @[src/main/scala/npu/core/QuantActUnit.scala 352:21]
    io_out_valid_13 <= cores_13.io_out_valid @[src/main/scala/npu/core/QuantActUnit.scala 352:21]
    io_out_valid_14 <= cores_14.io_out_valid @[src/main/scala/npu/core/QuantActUnit.scala 352:21]
    io_out_valid_15 <= cores_15.io_out_valid @[src/main/scala/npu/core/QuantActUnit.scala 352:21]
    io_out_lookahead_0 <= cores_0.io_out_lookahead @[src/main/scala/npu/core/QuantActUnit.scala 353:25]
    io_out_lookahead_1 <= cores_1.io_out_lookahead @[src/main/scala/npu/core/QuantActUnit.scala 353:25]
    io_out_lookahead_2 <= cores_2.io_out_lookahead @[src/main/scala/npu/core/QuantActUnit.scala 353:25]
    io_out_lookahead_3 <= cores_3.io_out_lookahead @[src/main/scala/npu/core/QuantActUnit.scala 353:25]
    io_out_lookahead_4 <= cores_4.io_out_lookahead @[src/main/scala/npu/core/QuantActUnit.scala 353:25]
    io_out_lookahead_5 <= cores_5.io_out_lookahead @[src/main/scala/npu/core/QuantActUnit.scala 353:25]
    io_out_lookahead_6 <= cores_6.io_out_lookahead @[src/main/scala/npu/core/QuantActUnit.scala 353:25]
    io_out_lookahead_7 <= cores_7.io_out_lookahead @[src/main/scala/npu/core/QuantActUnit.scala 353:25]
    io_out_lookahead_8 <= cores_8.io_out_lookahead @[src/main/scala/npu/core/QuantActUnit.scala 353:25]
    io_out_lookahead_9 <= cores_9.io_out_lookahead @[src/main/scala/npu/core/QuantActUnit.scala 353:25]
    io_out_lookahead_10 <= cores_10.io_out_lookahead @[src/main/scala/npu/core/QuantActUnit.scala 353:25]
    io_out_lookahead_11 <= cores_11.io_out_lookahead @[src/main/scala/npu/core/QuantActUnit.scala 353:25]
    io_out_lookahead_12 <= cores_12.io_out_lookahead @[src/main/scala/npu/core/QuantActUnit.scala 353:25]
    io_out_lookahead_13 <= cores_13.io_out_lookahead @[src/main/scala/npu/core/QuantActUnit.scala 353:25]
    io_out_lookahead_14 <= cores_14.io_out_lookahead @[src/main/scala/npu/core/QuantActUnit.scala 353:25]
    io_out_lookahead_15 <= cores_15.io_out_lookahead @[src/main/scala/npu/core/QuantActUnit.scala 353:25]
    io_busy <= _io_busy_T_1 @[src/main/scala/npu/core/QuantActUnit.scala 356:11]
    io_prefetch_ready <= _io_prefetch_ready_T_2 @[src/main/scala/npu/core/QuantActUnit.scala 361:21]
    io_lut_ready <= _io_lut_ready_T_1 @[src/main/scala/npu/core/QuantActUnit.scala 358:16]
    io_sync_alert <= _io_sync_alert_T_3 @[src/main/scala/npu/core/QuantActUnit.scala 377:17]
    rowCounter <= mux(reset, UInt<4>("h0"), _GEN_2) @[src/main/scala/npu/core/QuantActUnit.scala 246:{27,27}]
    activeParam_0 <= mux(reset, _activeParam_WIRE_0, _GEN_60) @[src/main/scala/npu/core/QuantActUnit.scala 261:{12,12}]
    activeParam_1 <= mux(reset, _activeParam_WIRE_1, _GEN_61) @[src/main/scala/npu/core/QuantActUnit.scala 261:{12,12}]
    activeParam_2 <= mux(reset, _activeParam_WIRE_2, _GEN_62) @[src/main/scala/npu/core/QuantActUnit.scala 261:{12,12}]
    activeParam_3 <= mux(reset, _activeParam_WIRE_3, _GEN_63) @[src/main/scala/npu/core/QuantActUnit.scala 261:{12,12}]
    activeParam_4 <= mux(reset, _activeParam_WIRE_4, _GEN_64) @[src/main/scala/npu/core/QuantActUnit.scala 261:{12,12}]
    activeParam_5 <= mux(reset, _activeParam_WIRE_5, _GEN_65) @[src/main/scala/npu/core/QuantActUnit.scala 261:{12,12}]
    activeParam_6 <= mux(reset, _activeParam_WIRE_6, _GEN_66) @[src/main/scala/npu/core/QuantActUnit.scala 261:{12,12}]
    activeParam_7 <= mux(reset, _activeParam_WIRE_7, _GEN_67) @[src/main/scala/npu/core/QuantActUnit.scala 261:{12,12}]
    activeParam_8 <= mux(reset, _activeParam_WIRE_8, _GEN_68) @[src/main/scala/npu/core/QuantActUnit.scala 261:{12,12}]
    activeParam_9 <= mux(reset, _activeParam_WIRE_9, _GEN_69) @[src/main/scala/npu/core/QuantActUnit.scala 261:{12,12}]
    activeParam_10 <= mux(reset, _activeParam_WIRE_10, _GEN_70) @[src/main/scala/npu/core/QuantActUnit.scala 261:{12,12}]
    activeParam_11 <= mux(reset, _activeParam_WIRE_11, _GEN_71) @[src/main/scala/npu/core/QuantActUnit.scala 261:{12,12}]
    activeParam_12 <= mux(reset, _activeParam_WIRE_12, _GEN_72) @[src/main/scala/npu/core/QuantActUnit.scala 261:{12,12}]
    activeParam_13 <= mux(reset, _activeParam_WIRE_13, _GEN_73) @[src/main/scala/npu/core/QuantActUnit.scala 261:{12,12}]
    activeParam_14 <= mux(reset, _activeParam_WIRE_14, _GEN_74) @[src/main/scala/npu/core/QuantActUnit.scala 261:{12,12}]
    activeParam_15 <= mux(reset, _activeParam_WIRE_15, _GEN_75) @[src/main/scala/npu/core/QuantActUnit.scala 261:{12,12}]
    shadowParam_0 <= mux(reset, _shadowParam_WIRE_0, _GEN_76) @[src/main/scala/npu/core/QuantActUnit.scala 264:{12,12}]
    shadowParam_1 <= mux(reset, _shadowParam_WIRE_1, _GEN_77) @[src/main/scala/npu/core/QuantActUnit.scala 264:{12,12}]
    shadowParam_2 <= mux(reset, _shadowParam_WIRE_2, _GEN_78) @[src/main/scala/npu/core/QuantActUnit.scala 264:{12,12}]
    shadowParam_3 <= mux(reset, _shadowParam_WIRE_3, _GEN_79) @[src/main/scala/npu/core/QuantActUnit.scala 264:{12,12}]
    shadowParam_4 <= mux(reset, _shadowParam_WIRE_4, _GEN_80) @[src/main/scala/npu/core/QuantActUnit.scala 264:{12,12}]
    shadowParam_5 <= mux(reset, _shadowParam_WIRE_5, _GEN_81) @[src/main/scala/npu/core/QuantActUnit.scala 264:{12,12}]
    shadowParam_6 <= mux(reset, _shadowParam_WIRE_6, _GEN_82) @[src/main/scala/npu/core/QuantActUnit.scala 264:{12,12}]
    shadowParam_7 <= mux(reset, _shadowParam_WIRE_7, _GEN_83) @[src/main/scala/npu/core/QuantActUnit.scala 264:{12,12}]
    shadowParam_8 <= mux(reset, _shadowParam_WIRE_8, _GEN_84) @[src/main/scala/npu/core/QuantActUnit.scala 264:{12,12}]
    shadowParam_9 <= mux(reset, _shadowParam_WIRE_9, _GEN_85) @[src/main/scala/npu/core/QuantActUnit.scala 264:{12,12}]
    shadowParam_10 <= mux(reset, _shadowParam_WIRE_10, _GEN_86) @[src/main/scala/npu/core/QuantActUnit.scala 264:{12,12}]
    shadowParam_11 <= mux(reset, _shadowParam_WIRE_11, _GEN_87) @[src/main/scala/npu/core/QuantActUnit.scala 264:{12,12}]
    shadowParam_12 <= mux(reset, _shadowParam_WIRE_12, _GEN_88) @[src/main/scala/npu/core/QuantActUnit.scala 264:{12,12}]
    shadowParam_13 <= mux(reset, _shadowParam_WIRE_13, _GEN_89) @[src/main/scala/npu/core/QuantActUnit.scala 264:{12,12}]
    shadowParam_14 <= mux(reset, _shadowParam_WIRE_14, _GEN_90) @[src/main/scala/npu/core/QuantActUnit.scala 264:{12,12}]
    shadowParam_15 <= mux(reset, _shadowParam_WIRE_15, _GEN_91) @[src/main/scala/npu/core/QuantActUnit.scala 264:{12,12}]
    activeValid <= mux(reset, UInt<1>("h0"), _GEN_57) @[src/main/scala/npu/core/QuantActUnit.scala 266:{28,28}]
    shadowValid <= mux(reset, UInt<1>("h0"), _GEN_58) @[src/main/scala/npu/core/QuantActUnit.scala 267:{28,28}]
    reqOutstanding <= mux(reset, UInt<1>("h0"), _GEN_59) @[src/main/scala/npu/core/QuantActUnit.scala 268:{31,31}]
    primed <= mux(reset, UInt<1>("h0"), _GEN_93) @[src/main/scala/npu/core/QuantActUnit.scala 320:{23,23}]
    cores_0.clock <= clock
    cores_0.reset <= reset
    cores_0.io_in_tpu <= io_in_tpu_0 @[src/main/scala/npu/core/QuantActUnit.scala 338:24]
    cores_0.io_in_direct <= io_in_direct_0 @[src/main/scala/npu/core/QuantActUnit.scala 339:27]
    cores_0.io_input_mode <= io_input_mode @[src/main/scala/npu/core/QuantActUnit.scala 340:28]
    cores_0.io_in_valid <= io_in_valid_0 @[src/main/scala/npu/core/QuantActUnit.scala 341:26]
    cores_0.io_param <= effectiveParam_0 @[src/main/scala/npu/core/QuantActUnit.scala 342:23]
    cores_0.io_act_mask <= io_act_mask @[src/main/scala/npu/core/QuantActUnit.scala 343:26]
    cores_0.io_fusion_second <= io_fusion_second @[src/main/scala/npu/core/QuantActUnit.scala 344:31]
    cores_0.io_stall <= io_stall @[src/main/scala/npu/core/QuantActUnit.scala 345:23]
    cores_0.io_lut_wr_en <= io_lut_wr_en @[src/main/scala/npu/core/QuantActUnit.scala 347:27]
    cores_0.io_lut_wr_addr <= io_lut_wr_addr @[src/main/scala/npu/core/QuantActUnit.scala 348:29]
    cores_0.io_lut_wr_data_0 <= io_lut_wr_data_0 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_0.io_lut_wr_data_1 <= io_lut_wr_data_1 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_0.io_lut_wr_data_2 <= io_lut_wr_data_2 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_0.io_lut_wr_data_3 <= io_lut_wr_data_3 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_0.io_lut_wr_data_4 <= io_lut_wr_data_4 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_0.io_lut_wr_data_5 <= io_lut_wr_data_5 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_0.io_lut_wr_data_6 <= io_lut_wr_data_6 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_0.io_lut_wr_data_7 <= io_lut_wr_data_7 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_0.io_lut_wr_data_8 <= io_lut_wr_data_8 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_0.io_lut_wr_data_9 <= io_lut_wr_data_9 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_0.io_lut_wr_data_10 <= io_lut_wr_data_10 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_0.io_lut_wr_data_11 <= io_lut_wr_data_11 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_0.io_lut_wr_data_12 <= io_lut_wr_data_12 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_0.io_lut_wr_data_13 <= io_lut_wr_data_13 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_0.io_lut_wr_data_14 <= io_lut_wr_data_14 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_0.io_lut_wr_data_15 <= io_lut_wr_data_15 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_0.io_lut_wr_data_16 <= io_lut_wr_data_16 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_0.io_lut_wr_data_17 <= io_lut_wr_data_17 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_0.io_lut_wr_data_18 <= io_lut_wr_data_18 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_0.io_lut_wr_data_19 <= io_lut_wr_data_19 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_0.io_lut_wr_data_20 <= io_lut_wr_data_20 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_0.io_lut_wr_data_21 <= io_lut_wr_data_21 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_0.io_lut_wr_data_22 <= io_lut_wr_data_22 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_0.io_lut_wr_data_23 <= io_lut_wr_data_23 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_0.io_lut_wr_data_24 <= io_lut_wr_data_24 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_0.io_lut_wr_data_25 <= io_lut_wr_data_25 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_0.io_lut_wr_data_26 <= io_lut_wr_data_26 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_0.io_lut_wr_data_27 <= io_lut_wr_data_27 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_0.io_lut_wr_data_28 <= io_lut_wr_data_28 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_0.io_lut_wr_data_29 <= io_lut_wr_data_29 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_0.io_lut_wr_data_30 <= io_lut_wr_data_30 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_0.io_lut_wr_data_31 <= io_lut_wr_data_31 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_1.clock <= clock
    cores_1.reset <= reset
    cores_1.io_in_tpu <= io_in_tpu_1 @[src/main/scala/npu/core/QuantActUnit.scala 338:24]
    cores_1.io_in_direct <= io_in_direct_1 @[src/main/scala/npu/core/QuantActUnit.scala 339:27]
    cores_1.io_input_mode <= io_input_mode @[src/main/scala/npu/core/QuantActUnit.scala 340:28]
    cores_1.io_in_valid <= io_in_valid_1 @[src/main/scala/npu/core/QuantActUnit.scala 341:26]
    cores_1.io_param <= effectiveParam_1 @[src/main/scala/npu/core/QuantActUnit.scala 342:23]
    cores_1.io_act_mask <= io_act_mask @[src/main/scala/npu/core/QuantActUnit.scala 343:26]
    cores_1.io_fusion_second <= io_fusion_second @[src/main/scala/npu/core/QuantActUnit.scala 344:31]
    cores_1.io_stall <= io_stall @[src/main/scala/npu/core/QuantActUnit.scala 345:23]
    cores_1.io_lut_wr_en <= io_lut_wr_en @[src/main/scala/npu/core/QuantActUnit.scala 347:27]
    cores_1.io_lut_wr_addr <= io_lut_wr_addr @[src/main/scala/npu/core/QuantActUnit.scala 348:29]
    cores_1.io_lut_wr_data_0 <= io_lut_wr_data_0 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_1.io_lut_wr_data_1 <= io_lut_wr_data_1 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_1.io_lut_wr_data_2 <= io_lut_wr_data_2 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_1.io_lut_wr_data_3 <= io_lut_wr_data_3 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_1.io_lut_wr_data_4 <= io_lut_wr_data_4 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_1.io_lut_wr_data_5 <= io_lut_wr_data_5 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_1.io_lut_wr_data_6 <= io_lut_wr_data_6 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_1.io_lut_wr_data_7 <= io_lut_wr_data_7 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_1.io_lut_wr_data_8 <= io_lut_wr_data_8 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_1.io_lut_wr_data_9 <= io_lut_wr_data_9 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_1.io_lut_wr_data_10 <= io_lut_wr_data_10 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_1.io_lut_wr_data_11 <= io_lut_wr_data_11 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_1.io_lut_wr_data_12 <= io_lut_wr_data_12 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_1.io_lut_wr_data_13 <= io_lut_wr_data_13 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_1.io_lut_wr_data_14 <= io_lut_wr_data_14 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_1.io_lut_wr_data_15 <= io_lut_wr_data_15 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_1.io_lut_wr_data_16 <= io_lut_wr_data_16 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_1.io_lut_wr_data_17 <= io_lut_wr_data_17 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_1.io_lut_wr_data_18 <= io_lut_wr_data_18 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_1.io_lut_wr_data_19 <= io_lut_wr_data_19 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_1.io_lut_wr_data_20 <= io_lut_wr_data_20 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_1.io_lut_wr_data_21 <= io_lut_wr_data_21 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_1.io_lut_wr_data_22 <= io_lut_wr_data_22 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_1.io_lut_wr_data_23 <= io_lut_wr_data_23 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_1.io_lut_wr_data_24 <= io_lut_wr_data_24 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_1.io_lut_wr_data_25 <= io_lut_wr_data_25 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_1.io_lut_wr_data_26 <= io_lut_wr_data_26 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_1.io_lut_wr_data_27 <= io_lut_wr_data_27 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_1.io_lut_wr_data_28 <= io_lut_wr_data_28 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_1.io_lut_wr_data_29 <= io_lut_wr_data_29 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_1.io_lut_wr_data_30 <= io_lut_wr_data_30 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_1.io_lut_wr_data_31 <= io_lut_wr_data_31 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_2.clock <= clock
    cores_2.reset <= reset
    cores_2.io_in_tpu <= io_in_tpu_2 @[src/main/scala/npu/core/QuantActUnit.scala 338:24]
    cores_2.io_in_direct <= io_in_direct_2 @[src/main/scala/npu/core/QuantActUnit.scala 339:27]
    cores_2.io_input_mode <= io_input_mode @[src/main/scala/npu/core/QuantActUnit.scala 340:28]
    cores_2.io_in_valid <= io_in_valid_2 @[src/main/scala/npu/core/QuantActUnit.scala 341:26]
    cores_2.io_param <= effectiveParam_2 @[src/main/scala/npu/core/QuantActUnit.scala 342:23]
    cores_2.io_act_mask <= io_act_mask @[src/main/scala/npu/core/QuantActUnit.scala 343:26]
    cores_2.io_fusion_second <= io_fusion_second @[src/main/scala/npu/core/QuantActUnit.scala 344:31]
    cores_2.io_stall <= io_stall @[src/main/scala/npu/core/QuantActUnit.scala 345:23]
    cores_2.io_lut_wr_en <= io_lut_wr_en @[src/main/scala/npu/core/QuantActUnit.scala 347:27]
    cores_2.io_lut_wr_addr <= io_lut_wr_addr @[src/main/scala/npu/core/QuantActUnit.scala 348:29]
    cores_2.io_lut_wr_data_0 <= io_lut_wr_data_0 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_2.io_lut_wr_data_1 <= io_lut_wr_data_1 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_2.io_lut_wr_data_2 <= io_lut_wr_data_2 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_2.io_lut_wr_data_3 <= io_lut_wr_data_3 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_2.io_lut_wr_data_4 <= io_lut_wr_data_4 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_2.io_lut_wr_data_5 <= io_lut_wr_data_5 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_2.io_lut_wr_data_6 <= io_lut_wr_data_6 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_2.io_lut_wr_data_7 <= io_lut_wr_data_7 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_2.io_lut_wr_data_8 <= io_lut_wr_data_8 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_2.io_lut_wr_data_9 <= io_lut_wr_data_9 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_2.io_lut_wr_data_10 <= io_lut_wr_data_10 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_2.io_lut_wr_data_11 <= io_lut_wr_data_11 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_2.io_lut_wr_data_12 <= io_lut_wr_data_12 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_2.io_lut_wr_data_13 <= io_lut_wr_data_13 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_2.io_lut_wr_data_14 <= io_lut_wr_data_14 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_2.io_lut_wr_data_15 <= io_lut_wr_data_15 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_2.io_lut_wr_data_16 <= io_lut_wr_data_16 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_2.io_lut_wr_data_17 <= io_lut_wr_data_17 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_2.io_lut_wr_data_18 <= io_lut_wr_data_18 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_2.io_lut_wr_data_19 <= io_lut_wr_data_19 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_2.io_lut_wr_data_20 <= io_lut_wr_data_20 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_2.io_lut_wr_data_21 <= io_lut_wr_data_21 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_2.io_lut_wr_data_22 <= io_lut_wr_data_22 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_2.io_lut_wr_data_23 <= io_lut_wr_data_23 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_2.io_lut_wr_data_24 <= io_lut_wr_data_24 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_2.io_lut_wr_data_25 <= io_lut_wr_data_25 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_2.io_lut_wr_data_26 <= io_lut_wr_data_26 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_2.io_lut_wr_data_27 <= io_lut_wr_data_27 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_2.io_lut_wr_data_28 <= io_lut_wr_data_28 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_2.io_lut_wr_data_29 <= io_lut_wr_data_29 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_2.io_lut_wr_data_30 <= io_lut_wr_data_30 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_2.io_lut_wr_data_31 <= io_lut_wr_data_31 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_3.clock <= clock
    cores_3.reset <= reset
    cores_3.io_in_tpu <= io_in_tpu_3 @[src/main/scala/npu/core/QuantActUnit.scala 338:24]
    cores_3.io_in_direct <= io_in_direct_3 @[src/main/scala/npu/core/QuantActUnit.scala 339:27]
    cores_3.io_input_mode <= io_input_mode @[src/main/scala/npu/core/QuantActUnit.scala 340:28]
    cores_3.io_in_valid <= io_in_valid_3 @[src/main/scala/npu/core/QuantActUnit.scala 341:26]
    cores_3.io_param <= effectiveParam_3 @[src/main/scala/npu/core/QuantActUnit.scala 342:23]
    cores_3.io_act_mask <= io_act_mask @[src/main/scala/npu/core/QuantActUnit.scala 343:26]
    cores_3.io_fusion_second <= io_fusion_second @[src/main/scala/npu/core/QuantActUnit.scala 344:31]
    cores_3.io_stall <= io_stall @[src/main/scala/npu/core/QuantActUnit.scala 345:23]
    cores_3.io_lut_wr_en <= io_lut_wr_en @[src/main/scala/npu/core/QuantActUnit.scala 347:27]
    cores_3.io_lut_wr_addr <= io_lut_wr_addr @[src/main/scala/npu/core/QuantActUnit.scala 348:29]
    cores_3.io_lut_wr_data_0 <= io_lut_wr_data_0 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_3.io_lut_wr_data_1 <= io_lut_wr_data_1 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_3.io_lut_wr_data_2 <= io_lut_wr_data_2 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_3.io_lut_wr_data_3 <= io_lut_wr_data_3 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_3.io_lut_wr_data_4 <= io_lut_wr_data_4 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_3.io_lut_wr_data_5 <= io_lut_wr_data_5 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_3.io_lut_wr_data_6 <= io_lut_wr_data_6 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_3.io_lut_wr_data_7 <= io_lut_wr_data_7 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_3.io_lut_wr_data_8 <= io_lut_wr_data_8 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_3.io_lut_wr_data_9 <= io_lut_wr_data_9 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_3.io_lut_wr_data_10 <= io_lut_wr_data_10 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_3.io_lut_wr_data_11 <= io_lut_wr_data_11 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_3.io_lut_wr_data_12 <= io_lut_wr_data_12 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_3.io_lut_wr_data_13 <= io_lut_wr_data_13 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_3.io_lut_wr_data_14 <= io_lut_wr_data_14 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_3.io_lut_wr_data_15 <= io_lut_wr_data_15 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_3.io_lut_wr_data_16 <= io_lut_wr_data_16 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_3.io_lut_wr_data_17 <= io_lut_wr_data_17 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_3.io_lut_wr_data_18 <= io_lut_wr_data_18 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_3.io_lut_wr_data_19 <= io_lut_wr_data_19 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_3.io_lut_wr_data_20 <= io_lut_wr_data_20 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_3.io_lut_wr_data_21 <= io_lut_wr_data_21 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_3.io_lut_wr_data_22 <= io_lut_wr_data_22 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_3.io_lut_wr_data_23 <= io_lut_wr_data_23 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_3.io_lut_wr_data_24 <= io_lut_wr_data_24 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_3.io_lut_wr_data_25 <= io_lut_wr_data_25 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_3.io_lut_wr_data_26 <= io_lut_wr_data_26 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_3.io_lut_wr_data_27 <= io_lut_wr_data_27 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_3.io_lut_wr_data_28 <= io_lut_wr_data_28 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_3.io_lut_wr_data_29 <= io_lut_wr_data_29 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_3.io_lut_wr_data_30 <= io_lut_wr_data_30 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_3.io_lut_wr_data_31 <= io_lut_wr_data_31 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_4.clock <= clock
    cores_4.reset <= reset
    cores_4.io_in_tpu <= io_in_tpu_4 @[src/main/scala/npu/core/QuantActUnit.scala 338:24]
    cores_4.io_in_direct <= io_in_direct_4 @[src/main/scala/npu/core/QuantActUnit.scala 339:27]
    cores_4.io_input_mode <= io_input_mode @[src/main/scala/npu/core/QuantActUnit.scala 340:28]
    cores_4.io_in_valid <= io_in_valid_4 @[src/main/scala/npu/core/QuantActUnit.scala 341:26]
    cores_4.io_param <= effectiveParam_4 @[src/main/scala/npu/core/QuantActUnit.scala 342:23]
    cores_4.io_act_mask <= io_act_mask @[src/main/scala/npu/core/QuantActUnit.scala 343:26]
    cores_4.io_fusion_second <= io_fusion_second @[src/main/scala/npu/core/QuantActUnit.scala 344:31]
    cores_4.io_stall <= io_stall @[src/main/scala/npu/core/QuantActUnit.scala 345:23]
    cores_4.io_lut_wr_en <= io_lut_wr_en @[src/main/scala/npu/core/QuantActUnit.scala 347:27]
    cores_4.io_lut_wr_addr <= io_lut_wr_addr @[src/main/scala/npu/core/QuantActUnit.scala 348:29]
    cores_4.io_lut_wr_data_0 <= io_lut_wr_data_0 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_4.io_lut_wr_data_1 <= io_lut_wr_data_1 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_4.io_lut_wr_data_2 <= io_lut_wr_data_2 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_4.io_lut_wr_data_3 <= io_lut_wr_data_3 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_4.io_lut_wr_data_4 <= io_lut_wr_data_4 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_4.io_lut_wr_data_5 <= io_lut_wr_data_5 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_4.io_lut_wr_data_6 <= io_lut_wr_data_6 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_4.io_lut_wr_data_7 <= io_lut_wr_data_7 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_4.io_lut_wr_data_8 <= io_lut_wr_data_8 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_4.io_lut_wr_data_9 <= io_lut_wr_data_9 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_4.io_lut_wr_data_10 <= io_lut_wr_data_10 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_4.io_lut_wr_data_11 <= io_lut_wr_data_11 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_4.io_lut_wr_data_12 <= io_lut_wr_data_12 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_4.io_lut_wr_data_13 <= io_lut_wr_data_13 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_4.io_lut_wr_data_14 <= io_lut_wr_data_14 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_4.io_lut_wr_data_15 <= io_lut_wr_data_15 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_4.io_lut_wr_data_16 <= io_lut_wr_data_16 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_4.io_lut_wr_data_17 <= io_lut_wr_data_17 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_4.io_lut_wr_data_18 <= io_lut_wr_data_18 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_4.io_lut_wr_data_19 <= io_lut_wr_data_19 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_4.io_lut_wr_data_20 <= io_lut_wr_data_20 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_4.io_lut_wr_data_21 <= io_lut_wr_data_21 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_4.io_lut_wr_data_22 <= io_lut_wr_data_22 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_4.io_lut_wr_data_23 <= io_lut_wr_data_23 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_4.io_lut_wr_data_24 <= io_lut_wr_data_24 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_4.io_lut_wr_data_25 <= io_lut_wr_data_25 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_4.io_lut_wr_data_26 <= io_lut_wr_data_26 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_4.io_lut_wr_data_27 <= io_lut_wr_data_27 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_4.io_lut_wr_data_28 <= io_lut_wr_data_28 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_4.io_lut_wr_data_29 <= io_lut_wr_data_29 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_4.io_lut_wr_data_30 <= io_lut_wr_data_30 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_4.io_lut_wr_data_31 <= io_lut_wr_data_31 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_5.clock <= clock
    cores_5.reset <= reset
    cores_5.io_in_tpu <= io_in_tpu_5 @[src/main/scala/npu/core/QuantActUnit.scala 338:24]
    cores_5.io_in_direct <= io_in_direct_5 @[src/main/scala/npu/core/QuantActUnit.scala 339:27]
    cores_5.io_input_mode <= io_input_mode @[src/main/scala/npu/core/QuantActUnit.scala 340:28]
    cores_5.io_in_valid <= io_in_valid_5 @[src/main/scala/npu/core/QuantActUnit.scala 341:26]
    cores_5.io_param <= effectiveParam_5 @[src/main/scala/npu/core/QuantActUnit.scala 342:23]
    cores_5.io_act_mask <= io_act_mask @[src/main/scala/npu/core/QuantActUnit.scala 343:26]
    cores_5.io_fusion_second <= io_fusion_second @[src/main/scala/npu/core/QuantActUnit.scala 344:31]
    cores_5.io_stall <= io_stall @[src/main/scala/npu/core/QuantActUnit.scala 345:23]
    cores_5.io_lut_wr_en <= io_lut_wr_en @[src/main/scala/npu/core/QuantActUnit.scala 347:27]
    cores_5.io_lut_wr_addr <= io_lut_wr_addr @[src/main/scala/npu/core/QuantActUnit.scala 348:29]
    cores_5.io_lut_wr_data_0 <= io_lut_wr_data_0 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_5.io_lut_wr_data_1 <= io_lut_wr_data_1 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_5.io_lut_wr_data_2 <= io_lut_wr_data_2 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_5.io_lut_wr_data_3 <= io_lut_wr_data_3 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_5.io_lut_wr_data_4 <= io_lut_wr_data_4 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_5.io_lut_wr_data_5 <= io_lut_wr_data_5 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_5.io_lut_wr_data_6 <= io_lut_wr_data_6 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_5.io_lut_wr_data_7 <= io_lut_wr_data_7 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_5.io_lut_wr_data_8 <= io_lut_wr_data_8 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_5.io_lut_wr_data_9 <= io_lut_wr_data_9 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_5.io_lut_wr_data_10 <= io_lut_wr_data_10 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_5.io_lut_wr_data_11 <= io_lut_wr_data_11 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_5.io_lut_wr_data_12 <= io_lut_wr_data_12 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_5.io_lut_wr_data_13 <= io_lut_wr_data_13 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_5.io_lut_wr_data_14 <= io_lut_wr_data_14 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_5.io_lut_wr_data_15 <= io_lut_wr_data_15 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_5.io_lut_wr_data_16 <= io_lut_wr_data_16 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_5.io_lut_wr_data_17 <= io_lut_wr_data_17 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_5.io_lut_wr_data_18 <= io_lut_wr_data_18 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_5.io_lut_wr_data_19 <= io_lut_wr_data_19 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_5.io_lut_wr_data_20 <= io_lut_wr_data_20 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_5.io_lut_wr_data_21 <= io_lut_wr_data_21 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_5.io_lut_wr_data_22 <= io_lut_wr_data_22 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_5.io_lut_wr_data_23 <= io_lut_wr_data_23 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_5.io_lut_wr_data_24 <= io_lut_wr_data_24 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_5.io_lut_wr_data_25 <= io_lut_wr_data_25 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_5.io_lut_wr_data_26 <= io_lut_wr_data_26 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_5.io_lut_wr_data_27 <= io_lut_wr_data_27 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_5.io_lut_wr_data_28 <= io_lut_wr_data_28 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_5.io_lut_wr_data_29 <= io_lut_wr_data_29 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_5.io_lut_wr_data_30 <= io_lut_wr_data_30 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_5.io_lut_wr_data_31 <= io_lut_wr_data_31 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_6.clock <= clock
    cores_6.reset <= reset
    cores_6.io_in_tpu <= io_in_tpu_6 @[src/main/scala/npu/core/QuantActUnit.scala 338:24]
    cores_6.io_in_direct <= io_in_direct_6 @[src/main/scala/npu/core/QuantActUnit.scala 339:27]
    cores_6.io_input_mode <= io_input_mode @[src/main/scala/npu/core/QuantActUnit.scala 340:28]
    cores_6.io_in_valid <= io_in_valid_6 @[src/main/scala/npu/core/QuantActUnit.scala 341:26]
    cores_6.io_param <= effectiveParam_6 @[src/main/scala/npu/core/QuantActUnit.scala 342:23]
    cores_6.io_act_mask <= io_act_mask @[src/main/scala/npu/core/QuantActUnit.scala 343:26]
    cores_6.io_fusion_second <= io_fusion_second @[src/main/scala/npu/core/QuantActUnit.scala 344:31]
    cores_6.io_stall <= io_stall @[src/main/scala/npu/core/QuantActUnit.scala 345:23]
    cores_6.io_lut_wr_en <= io_lut_wr_en @[src/main/scala/npu/core/QuantActUnit.scala 347:27]
    cores_6.io_lut_wr_addr <= io_lut_wr_addr @[src/main/scala/npu/core/QuantActUnit.scala 348:29]
    cores_6.io_lut_wr_data_0 <= io_lut_wr_data_0 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_6.io_lut_wr_data_1 <= io_lut_wr_data_1 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_6.io_lut_wr_data_2 <= io_lut_wr_data_2 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_6.io_lut_wr_data_3 <= io_lut_wr_data_3 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_6.io_lut_wr_data_4 <= io_lut_wr_data_4 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_6.io_lut_wr_data_5 <= io_lut_wr_data_5 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_6.io_lut_wr_data_6 <= io_lut_wr_data_6 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_6.io_lut_wr_data_7 <= io_lut_wr_data_7 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_6.io_lut_wr_data_8 <= io_lut_wr_data_8 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_6.io_lut_wr_data_9 <= io_lut_wr_data_9 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_6.io_lut_wr_data_10 <= io_lut_wr_data_10 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_6.io_lut_wr_data_11 <= io_lut_wr_data_11 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_6.io_lut_wr_data_12 <= io_lut_wr_data_12 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_6.io_lut_wr_data_13 <= io_lut_wr_data_13 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_6.io_lut_wr_data_14 <= io_lut_wr_data_14 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_6.io_lut_wr_data_15 <= io_lut_wr_data_15 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_6.io_lut_wr_data_16 <= io_lut_wr_data_16 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_6.io_lut_wr_data_17 <= io_lut_wr_data_17 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_6.io_lut_wr_data_18 <= io_lut_wr_data_18 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_6.io_lut_wr_data_19 <= io_lut_wr_data_19 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_6.io_lut_wr_data_20 <= io_lut_wr_data_20 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_6.io_lut_wr_data_21 <= io_lut_wr_data_21 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_6.io_lut_wr_data_22 <= io_lut_wr_data_22 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_6.io_lut_wr_data_23 <= io_lut_wr_data_23 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_6.io_lut_wr_data_24 <= io_lut_wr_data_24 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_6.io_lut_wr_data_25 <= io_lut_wr_data_25 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_6.io_lut_wr_data_26 <= io_lut_wr_data_26 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_6.io_lut_wr_data_27 <= io_lut_wr_data_27 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_6.io_lut_wr_data_28 <= io_lut_wr_data_28 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_6.io_lut_wr_data_29 <= io_lut_wr_data_29 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_6.io_lut_wr_data_30 <= io_lut_wr_data_30 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_6.io_lut_wr_data_31 <= io_lut_wr_data_31 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_7.clock <= clock
    cores_7.reset <= reset
    cores_7.io_in_tpu <= io_in_tpu_7 @[src/main/scala/npu/core/QuantActUnit.scala 338:24]
    cores_7.io_in_direct <= io_in_direct_7 @[src/main/scala/npu/core/QuantActUnit.scala 339:27]
    cores_7.io_input_mode <= io_input_mode @[src/main/scala/npu/core/QuantActUnit.scala 340:28]
    cores_7.io_in_valid <= io_in_valid_7 @[src/main/scala/npu/core/QuantActUnit.scala 341:26]
    cores_7.io_param <= effectiveParam_7 @[src/main/scala/npu/core/QuantActUnit.scala 342:23]
    cores_7.io_act_mask <= io_act_mask @[src/main/scala/npu/core/QuantActUnit.scala 343:26]
    cores_7.io_fusion_second <= io_fusion_second @[src/main/scala/npu/core/QuantActUnit.scala 344:31]
    cores_7.io_stall <= io_stall @[src/main/scala/npu/core/QuantActUnit.scala 345:23]
    cores_7.io_lut_wr_en <= io_lut_wr_en @[src/main/scala/npu/core/QuantActUnit.scala 347:27]
    cores_7.io_lut_wr_addr <= io_lut_wr_addr @[src/main/scala/npu/core/QuantActUnit.scala 348:29]
    cores_7.io_lut_wr_data_0 <= io_lut_wr_data_0 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_7.io_lut_wr_data_1 <= io_lut_wr_data_1 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_7.io_lut_wr_data_2 <= io_lut_wr_data_2 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_7.io_lut_wr_data_3 <= io_lut_wr_data_3 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_7.io_lut_wr_data_4 <= io_lut_wr_data_4 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_7.io_lut_wr_data_5 <= io_lut_wr_data_5 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_7.io_lut_wr_data_6 <= io_lut_wr_data_6 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_7.io_lut_wr_data_7 <= io_lut_wr_data_7 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_7.io_lut_wr_data_8 <= io_lut_wr_data_8 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_7.io_lut_wr_data_9 <= io_lut_wr_data_9 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_7.io_lut_wr_data_10 <= io_lut_wr_data_10 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_7.io_lut_wr_data_11 <= io_lut_wr_data_11 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_7.io_lut_wr_data_12 <= io_lut_wr_data_12 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_7.io_lut_wr_data_13 <= io_lut_wr_data_13 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_7.io_lut_wr_data_14 <= io_lut_wr_data_14 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_7.io_lut_wr_data_15 <= io_lut_wr_data_15 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_7.io_lut_wr_data_16 <= io_lut_wr_data_16 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_7.io_lut_wr_data_17 <= io_lut_wr_data_17 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_7.io_lut_wr_data_18 <= io_lut_wr_data_18 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_7.io_lut_wr_data_19 <= io_lut_wr_data_19 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_7.io_lut_wr_data_20 <= io_lut_wr_data_20 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_7.io_lut_wr_data_21 <= io_lut_wr_data_21 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_7.io_lut_wr_data_22 <= io_lut_wr_data_22 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_7.io_lut_wr_data_23 <= io_lut_wr_data_23 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_7.io_lut_wr_data_24 <= io_lut_wr_data_24 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_7.io_lut_wr_data_25 <= io_lut_wr_data_25 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_7.io_lut_wr_data_26 <= io_lut_wr_data_26 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_7.io_lut_wr_data_27 <= io_lut_wr_data_27 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_7.io_lut_wr_data_28 <= io_lut_wr_data_28 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_7.io_lut_wr_data_29 <= io_lut_wr_data_29 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_7.io_lut_wr_data_30 <= io_lut_wr_data_30 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_7.io_lut_wr_data_31 <= io_lut_wr_data_31 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_8.clock <= clock
    cores_8.reset <= reset
    cores_8.io_in_tpu <= io_in_tpu_8 @[src/main/scala/npu/core/QuantActUnit.scala 338:24]
    cores_8.io_in_direct <= io_in_direct_8 @[src/main/scala/npu/core/QuantActUnit.scala 339:27]
    cores_8.io_input_mode <= io_input_mode @[src/main/scala/npu/core/QuantActUnit.scala 340:28]
    cores_8.io_in_valid <= io_in_valid_8 @[src/main/scala/npu/core/QuantActUnit.scala 341:26]
    cores_8.io_param <= effectiveParam_8 @[src/main/scala/npu/core/QuantActUnit.scala 342:23]
    cores_8.io_act_mask <= io_act_mask @[src/main/scala/npu/core/QuantActUnit.scala 343:26]
    cores_8.io_fusion_second <= io_fusion_second @[src/main/scala/npu/core/QuantActUnit.scala 344:31]
    cores_8.io_stall <= io_stall @[src/main/scala/npu/core/QuantActUnit.scala 345:23]
    cores_8.io_lut_wr_en <= io_lut_wr_en @[src/main/scala/npu/core/QuantActUnit.scala 347:27]
    cores_8.io_lut_wr_addr <= io_lut_wr_addr @[src/main/scala/npu/core/QuantActUnit.scala 348:29]
    cores_8.io_lut_wr_data_0 <= io_lut_wr_data_0 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_8.io_lut_wr_data_1 <= io_lut_wr_data_1 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_8.io_lut_wr_data_2 <= io_lut_wr_data_2 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_8.io_lut_wr_data_3 <= io_lut_wr_data_3 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_8.io_lut_wr_data_4 <= io_lut_wr_data_4 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_8.io_lut_wr_data_5 <= io_lut_wr_data_5 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_8.io_lut_wr_data_6 <= io_lut_wr_data_6 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_8.io_lut_wr_data_7 <= io_lut_wr_data_7 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_8.io_lut_wr_data_8 <= io_lut_wr_data_8 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_8.io_lut_wr_data_9 <= io_lut_wr_data_9 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_8.io_lut_wr_data_10 <= io_lut_wr_data_10 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_8.io_lut_wr_data_11 <= io_lut_wr_data_11 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_8.io_lut_wr_data_12 <= io_lut_wr_data_12 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_8.io_lut_wr_data_13 <= io_lut_wr_data_13 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_8.io_lut_wr_data_14 <= io_lut_wr_data_14 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_8.io_lut_wr_data_15 <= io_lut_wr_data_15 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_8.io_lut_wr_data_16 <= io_lut_wr_data_16 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_8.io_lut_wr_data_17 <= io_lut_wr_data_17 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_8.io_lut_wr_data_18 <= io_lut_wr_data_18 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_8.io_lut_wr_data_19 <= io_lut_wr_data_19 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_8.io_lut_wr_data_20 <= io_lut_wr_data_20 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_8.io_lut_wr_data_21 <= io_lut_wr_data_21 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_8.io_lut_wr_data_22 <= io_lut_wr_data_22 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_8.io_lut_wr_data_23 <= io_lut_wr_data_23 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_8.io_lut_wr_data_24 <= io_lut_wr_data_24 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_8.io_lut_wr_data_25 <= io_lut_wr_data_25 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_8.io_lut_wr_data_26 <= io_lut_wr_data_26 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_8.io_lut_wr_data_27 <= io_lut_wr_data_27 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_8.io_lut_wr_data_28 <= io_lut_wr_data_28 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_8.io_lut_wr_data_29 <= io_lut_wr_data_29 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_8.io_lut_wr_data_30 <= io_lut_wr_data_30 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_8.io_lut_wr_data_31 <= io_lut_wr_data_31 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_9.clock <= clock
    cores_9.reset <= reset
    cores_9.io_in_tpu <= io_in_tpu_9 @[src/main/scala/npu/core/QuantActUnit.scala 338:24]
    cores_9.io_in_direct <= io_in_direct_9 @[src/main/scala/npu/core/QuantActUnit.scala 339:27]
    cores_9.io_input_mode <= io_input_mode @[src/main/scala/npu/core/QuantActUnit.scala 340:28]
    cores_9.io_in_valid <= io_in_valid_9 @[src/main/scala/npu/core/QuantActUnit.scala 341:26]
    cores_9.io_param <= effectiveParam_9 @[src/main/scala/npu/core/QuantActUnit.scala 342:23]
    cores_9.io_act_mask <= io_act_mask @[src/main/scala/npu/core/QuantActUnit.scala 343:26]
    cores_9.io_fusion_second <= io_fusion_second @[src/main/scala/npu/core/QuantActUnit.scala 344:31]
    cores_9.io_stall <= io_stall @[src/main/scala/npu/core/QuantActUnit.scala 345:23]
    cores_9.io_lut_wr_en <= io_lut_wr_en @[src/main/scala/npu/core/QuantActUnit.scala 347:27]
    cores_9.io_lut_wr_addr <= io_lut_wr_addr @[src/main/scala/npu/core/QuantActUnit.scala 348:29]
    cores_9.io_lut_wr_data_0 <= io_lut_wr_data_0 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_9.io_lut_wr_data_1 <= io_lut_wr_data_1 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_9.io_lut_wr_data_2 <= io_lut_wr_data_2 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_9.io_lut_wr_data_3 <= io_lut_wr_data_3 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_9.io_lut_wr_data_4 <= io_lut_wr_data_4 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_9.io_lut_wr_data_5 <= io_lut_wr_data_5 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_9.io_lut_wr_data_6 <= io_lut_wr_data_6 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_9.io_lut_wr_data_7 <= io_lut_wr_data_7 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_9.io_lut_wr_data_8 <= io_lut_wr_data_8 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_9.io_lut_wr_data_9 <= io_lut_wr_data_9 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_9.io_lut_wr_data_10 <= io_lut_wr_data_10 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_9.io_lut_wr_data_11 <= io_lut_wr_data_11 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_9.io_lut_wr_data_12 <= io_lut_wr_data_12 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_9.io_lut_wr_data_13 <= io_lut_wr_data_13 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_9.io_lut_wr_data_14 <= io_lut_wr_data_14 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_9.io_lut_wr_data_15 <= io_lut_wr_data_15 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_9.io_lut_wr_data_16 <= io_lut_wr_data_16 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_9.io_lut_wr_data_17 <= io_lut_wr_data_17 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_9.io_lut_wr_data_18 <= io_lut_wr_data_18 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_9.io_lut_wr_data_19 <= io_lut_wr_data_19 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_9.io_lut_wr_data_20 <= io_lut_wr_data_20 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_9.io_lut_wr_data_21 <= io_lut_wr_data_21 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_9.io_lut_wr_data_22 <= io_lut_wr_data_22 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_9.io_lut_wr_data_23 <= io_lut_wr_data_23 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_9.io_lut_wr_data_24 <= io_lut_wr_data_24 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_9.io_lut_wr_data_25 <= io_lut_wr_data_25 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_9.io_lut_wr_data_26 <= io_lut_wr_data_26 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_9.io_lut_wr_data_27 <= io_lut_wr_data_27 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_9.io_lut_wr_data_28 <= io_lut_wr_data_28 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_9.io_lut_wr_data_29 <= io_lut_wr_data_29 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_9.io_lut_wr_data_30 <= io_lut_wr_data_30 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_9.io_lut_wr_data_31 <= io_lut_wr_data_31 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_10.clock <= clock
    cores_10.reset <= reset
    cores_10.io_in_tpu <= io_in_tpu_10 @[src/main/scala/npu/core/QuantActUnit.scala 338:24]
    cores_10.io_in_direct <= io_in_direct_10 @[src/main/scala/npu/core/QuantActUnit.scala 339:27]
    cores_10.io_input_mode <= io_input_mode @[src/main/scala/npu/core/QuantActUnit.scala 340:28]
    cores_10.io_in_valid <= io_in_valid_10 @[src/main/scala/npu/core/QuantActUnit.scala 341:26]
    cores_10.io_param <= effectiveParam_10 @[src/main/scala/npu/core/QuantActUnit.scala 342:23]
    cores_10.io_act_mask <= io_act_mask @[src/main/scala/npu/core/QuantActUnit.scala 343:26]
    cores_10.io_fusion_second <= io_fusion_second @[src/main/scala/npu/core/QuantActUnit.scala 344:31]
    cores_10.io_stall <= io_stall @[src/main/scala/npu/core/QuantActUnit.scala 345:23]
    cores_10.io_lut_wr_en <= io_lut_wr_en @[src/main/scala/npu/core/QuantActUnit.scala 347:27]
    cores_10.io_lut_wr_addr <= io_lut_wr_addr @[src/main/scala/npu/core/QuantActUnit.scala 348:29]
    cores_10.io_lut_wr_data_0 <= io_lut_wr_data_0 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_10.io_lut_wr_data_1 <= io_lut_wr_data_1 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_10.io_lut_wr_data_2 <= io_lut_wr_data_2 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_10.io_lut_wr_data_3 <= io_lut_wr_data_3 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_10.io_lut_wr_data_4 <= io_lut_wr_data_4 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_10.io_lut_wr_data_5 <= io_lut_wr_data_5 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_10.io_lut_wr_data_6 <= io_lut_wr_data_6 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_10.io_lut_wr_data_7 <= io_lut_wr_data_7 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_10.io_lut_wr_data_8 <= io_lut_wr_data_8 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_10.io_lut_wr_data_9 <= io_lut_wr_data_9 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_10.io_lut_wr_data_10 <= io_lut_wr_data_10 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_10.io_lut_wr_data_11 <= io_lut_wr_data_11 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_10.io_lut_wr_data_12 <= io_lut_wr_data_12 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_10.io_lut_wr_data_13 <= io_lut_wr_data_13 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_10.io_lut_wr_data_14 <= io_lut_wr_data_14 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_10.io_lut_wr_data_15 <= io_lut_wr_data_15 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_10.io_lut_wr_data_16 <= io_lut_wr_data_16 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_10.io_lut_wr_data_17 <= io_lut_wr_data_17 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_10.io_lut_wr_data_18 <= io_lut_wr_data_18 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_10.io_lut_wr_data_19 <= io_lut_wr_data_19 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_10.io_lut_wr_data_20 <= io_lut_wr_data_20 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_10.io_lut_wr_data_21 <= io_lut_wr_data_21 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_10.io_lut_wr_data_22 <= io_lut_wr_data_22 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_10.io_lut_wr_data_23 <= io_lut_wr_data_23 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_10.io_lut_wr_data_24 <= io_lut_wr_data_24 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_10.io_lut_wr_data_25 <= io_lut_wr_data_25 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_10.io_lut_wr_data_26 <= io_lut_wr_data_26 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_10.io_lut_wr_data_27 <= io_lut_wr_data_27 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_10.io_lut_wr_data_28 <= io_lut_wr_data_28 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_10.io_lut_wr_data_29 <= io_lut_wr_data_29 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_10.io_lut_wr_data_30 <= io_lut_wr_data_30 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_10.io_lut_wr_data_31 <= io_lut_wr_data_31 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_11.clock <= clock
    cores_11.reset <= reset
    cores_11.io_in_tpu <= io_in_tpu_11 @[src/main/scala/npu/core/QuantActUnit.scala 338:24]
    cores_11.io_in_direct <= io_in_direct_11 @[src/main/scala/npu/core/QuantActUnit.scala 339:27]
    cores_11.io_input_mode <= io_input_mode @[src/main/scala/npu/core/QuantActUnit.scala 340:28]
    cores_11.io_in_valid <= io_in_valid_11 @[src/main/scala/npu/core/QuantActUnit.scala 341:26]
    cores_11.io_param <= effectiveParam_11 @[src/main/scala/npu/core/QuantActUnit.scala 342:23]
    cores_11.io_act_mask <= io_act_mask @[src/main/scala/npu/core/QuantActUnit.scala 343:26]
    cores_11.io_fusion_second <= io_fusion_second @[src/main/scala/npu/core/QuantActUnit.scala 344:31]
    cores_11.io_stall <= io_stall @[src/main/scala/npu/core/QuantActUnit.scala 345:23]
    cores_11.io_lut_wr_en <= io_lut_wr_en @[src/main/scala/npu/core/QuantActUnit.scala 347:27]
    cores_11.io_lut_wr_addr <= io_lut_wr_addr @[src/main/scala/npu/core/QuantActUnit.scala 348:29]
    cores_11.io_lut_wr_data_0 <= io_lut_wr_data_0 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_11.io_lut_wr_data_1 <= io_lut_wr_data_1 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_11.io_lut_wr_data_2 <= io_lut_wr_data_2 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_11.io_lut_wr_data_3 <= io_lut_wr_data_3 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_11.io_lut_wr_data_4 <= io_lut_wr_data_4 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_11.io_lut_wr_data_5 <= io_lut_wr_data_5 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_11.io_lut_wr_data_6 <= io_lut_wr_data_6 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_11.io_lut_wr_data_7 <= io_lut_wr_data_7 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_11.io_lut_wr_data_8 <= io_lut_wr_data_8 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_11.io_lut_wr_data_9 <= io_lut_wr_data_9 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_11.io_lut_wr_data_10 <= io_lut_wr_data_10 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_11.io_lut_wr_data_11 <= io_lut_wr_data_11 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_11.io_lut_wr_data_12 <= io_lut_wr_data_12 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_11.io_lut_wr_data_13 <= io_lut_wr_data_13 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_11.io_lut_wr_data_14 <= io_lut_wr_data_14 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_11.io_lut_wr_data_15 <= io_lut_wr_data_15 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_11.io_lut_wr_data_16 <= io_lut_wr_data_16 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_11.io_lut_wr_data_17 <= io_lut_wr_data_17 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_11.io_lut_wr_data_18 <= io_lut_wr_data_18 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_11.io_lut_wr_data_19 <= io_lut_wr_data_19 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_11.io_lut_wr_data_20 <= io_lut_wr_data_20 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_11.io_lut_wr_data_21 <= io_lut_wr_data_21 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_11.io_lut_wr_data_22 <= io_lut_wr_data_22 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_11.io_lut_wr_data_23 <= io_lut_wr_data_23 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_11.io_lut_wr_data_24 <= io_lut_wr_data_24 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_11.io_lut_wr_data_25 <= io_lut_wr_data_25 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_11.io_lut_wr_data_26 <= io_lut_wr_data_26 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_11.io_lut_wr_data_27 <= io_lut_wr_data_27 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_11.io_lut_wr_data_28 <= io_lut_wr_data_28 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_11.io_lut_wr_data_29 <= io_lut_wr_data_29 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_11.io_lut_wr_data_30 <= io_lut_wr_data_30 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_11.io_lut_wr_data_31 <= io_lut_wr_data_31 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_12.clock <= clock
    cores_12.reset <= reset
    cores_12.io_in_tpu <= io_in_tpu_12 @[src/main/scala/npu/core/QuantActUnit.scala 338:24]
    cores_12.io_in_direct <= io_in_direct_12 @[src/main/scala/npu/core/QuantActUnit.scala 339:27]
    cores_12.io_input_mode <= io_input_mode @[src/main/scala/npu/core/QuantActUnit.scala 340:28]
    cores_12.io_in_valid <= io_in_valid_12 @[src/main/scala/npu/core/QuantActUnit.scala 341:26]
    cores_12.io_param <= effectiveParam_12 @[src/main/scala/npu/core/QuantActUnit.scala 342:23]
    cores_12.io_act_mask <= io_act_mask @[src/main/scala/npu/core/QuantActUnit.scala 343:26]
    cores_12.io_fusion_second <= io_fusion_second @[src/main/scala/npu/core/QuantActUnit.scala 344:31]
    cores_12.io_stall <= io_stall @[src/main/scala/npu/core/QuantActUnit.scala 345:23]
    cores_12.io_lut_wr_en <= io_lut_wr_en @[src/main/scala/npu/core/QuantActUnit.scala 347:27]
    cores_12.io_lut_wr_addr <= io_lut_wr_addr @[src/main/scala/npu/core/QuantActUnit.scala 348:29]
    cores_12.io_lut_wr_data_0 <= io_lut_wr_data_0 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_12.io_lut_wr_data_1 <= io_lut_wr_data_1 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_12.io_lut_wr_data_2 <= io_lut_wr_data_2 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_12.io_lut_wr_data_3 <= io_lut_wr_data_3 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_12.io_lut_wr_data_4 <= io_lut_wr_data_4 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_12.io_lut_wr_data_5 <= io_lut_wr_data_5 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_12.io_lut_wr_data_6 <= io_lut_wr_data_6 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_12.io_lut_wr_data_7 <= io_lut_wr_data_7 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_12.io_lut_wr_data_8 <= io_lut_wr_data_8 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_12.io_lut_wr_data_9 <= io_lut_wr_data_9 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_12.io_lut_wr_data_10 <= io_lut_wr_data_10 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_12.io_lut_wr_data_11 <= io_lut_wr_data_11 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_12.io_lut_wr_data_12 <= io_lut_wr_data_12 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_12.io_lut_wr_data_13 <= io_lut_wr_data_13 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_12.io_lut_wr_data_14 <= io_lut_wr_data_14 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_12.io_lut_wr_data_15 <= io_lut_wr_data_15 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_12.io_lut_wr_data_16 <= io_lut_wr_data_16 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_12.io_lut_wr_data_17 <= io_lut_wr_data_17 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_12.io_lut_wr_data_18 <= io_lut_wr_data_18 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_12.io_lut_wr_data_19 <= io_lut_wr_data_19 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_12.io_lut_wr_data_20 <= io_lut_wr_data_20 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_12.io_lut_wr_data_21 <= io_lut_wr_data_21 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_12.io_lut_wr_data_22 <= io_lut_wr_data_22 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_12.io_lut_wr_data_23 <= io_lut_wr_data_23 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_12.io_lut_wr_data_24 <= io_lut_wr_data_24 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_12.io_lut_wr_data_25 <= io_lut_wr_data_25 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_12.io_lut_wr_data_26 <= io_lut_wr_data_26 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_12.io_lut_wr_data_27 <= io_lut_wr_data_27 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_12.io_lut_wr_data_28 <= io_lut_wr_data_28 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_12.io_lut_wr_data_29 <= io_lut_wr_data_29 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_12.io_lut_wr_data_30 <= io_lut_wr_data_30 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_12.io_lut_wr_data_31 <= io_lut_wr_data_31 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_13.clock <= clock
    cores_13.reset <= reset
    cores_13.io_in_tpu <= io_in_tpu_13 @[src/main/scala/npu/core/QuantActUnit.scala 338:24]
    cores_13.io_in_direct <= io_in_direct_13 @[src/main/scala/npu/core/QuantActUnit.scala 339:27]
    cores_13.io_input_mode <= io_input_mode @[src/main/scala/npu/core/QuantActUnit.scala 340:28]
    cores_13.io_in_valid <= io_in_valid_13 @[src/main/scala/npu/core/QuantActUnit.scala 341:26]
    cores_13.io_param <= effectiveParam_13 @[src/main/scala/npu/core/QuantActUnit.scala 342:23]
    cores_13.io_act_mask <= io_act_mask @[src/main/scala/npu/core/QuantActUnit.scala 343:26]
    cores_13.io_fusion_second <= io_fusion_second @[src/main/scala/npu/core/QuantActUnit.scala 344:31]
    cores_13.io_stall <= io_stall @[src/main/scala/npu/core/QuantActUnit.scala 345:23]
    cores_13.io_lut_wr_en <= io_lut_wr_en @[src/main/scala/npu/core/QuantActUnit.scala 347:27]
    cores_13.io_lut_wr_addr <= io_lut_wr_addr @[src/main/scala/npu/core/QuantActUnit.scala 348:29]
    cores_13.io_lut_wr_data_0 <= io_lut_wr_data_0 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_13.io_lut_wr_data_1 <= io_lut_wr_data_1 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_13.io_lut_wr_data_2 <= io_lut_wr_data_2 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_13.io_lut_wr_data_3 <= io_lut_wr_data_3 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_13.io_lut_wr_data_4 <= io_lut_wr_data_4 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_13.io_lut_wr_data_5 <= io_lut_wr_data_5 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_13.io_lut_wr_data_6 <= io_lut_wr_data_6 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_13.io_lut_wr_data_7 <= io_lut_wr_data_7 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_13.io_lut_wr_data_8 <= io_lut_wr_data_8 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_13.io_lut_wr_data_9 <= io_lut_wr_data_9 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_13.io_lut_wr_data_10 <= io_lut_wr_data_10 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_13.io_lut_wr_data_11 <= io_lut_wr_data_11 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_13.io_lut_wr_data_12 <= io_lut_wr_data_12 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_13.io_lut_wr_data_13 <= io_lut_wr_data_13 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_13.io_lut_wr_data_14 <= io_lut_wr_data_14 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_13.io_lut_wr_data_15 <= io_lut_wr_data_15 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_13.io_lut_wr_data_16 <= io_lut_wr_data_16 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_13.io_lut_wr_data_17 <= io_lut_wr_data_17 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_13.io_lut_wr_data_18 <= io_lut_wr_data_18 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_13.io_lut_wr_data_19 <= io_lut_wr_data_19 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_13.io_lut_wr_data_20 <= io_lut_wr_data_20 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_13.io_lut_wr_data_21 <= io_lut_wr_data_21 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_13.io_lut_wr_data_22 <= io_lut_wr_data_22 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_13.io_lut_wr_data_23 <= io_lut_wr_data_23 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_13.io_lut_wr_data_24 <= io_lut_wr_data_24 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_13.io_lut_wr_data_25 <= io_lut_wr_data_25 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_13.io_lut_wr_data_26 <= io_lut_wr_data_26 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_13.io_lut_wr_data_27 <= io_lut_wr_data_27 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_13.io_lut_wr_data_28 <= io_lut_wr_data_28 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_13.io_lut_wr_data_29 <= io_lut_wr_data_29 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_13.io_lut_wr_data_30 <= io_lut_wr_data_30 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_13.io_lut_wr_data_31 <= io_lut_wr_data_31 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_14.clock <= clock
    cores_14.reset <= reset
    cores_14.io_in_tpu <= io_in_tpu_14 @[src/main/scala/npu/core/QuantActUnit.scala 338:24]
    cores_14.io_in_direct <= io_in_direct_14 @[src/main/scala/npu/core/QuantActUnit.scala 339:27]
    cores_14.io_input_mode <= io_input_mode @[src/main/scala/npu/core/QuantActUnit.scala 340:28]
    cores_14.io_in_valid <= io_in_valid_14 @[src/main/scala/npu/core/QuantActUnit.scala 341:26]
    cores_14.io_param <= effectiveParam_14 @[src/main/scala/npu/core/QuantActUnit.scala 342:23]
    cores_14.io_act_mask <= io_act_mask @[src/main/scala/npu/core/QuantActUnit.scala 343:26]
    cores_14.io_fusion_second <= io_fusion_second @[src/main/scala/npu/core/QuantActUnit.scala 344:31]
    cores_14.io_stall <= io_stall @[src/main/scala/npu/core/QuantActUnit.scala 345:23]
    cores_14.io_lut_wr_en <= io_lut_wr_en @[src/main/scala/npu/core/QuantActUnit.scala 347:27]
    cores_14.io_lut_wr_addr <= io_lut_wr_addr @[src/main/scala/npu/core/QuantActUnit.scala 348:29]
    cores_14.io_lut_wr_data_0 <= io_lut_wr_data_0 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_14.io_lut_wr_data_1 <= io_lut_wr_data_1 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_14.io_lut_wr_data_2 <= io_lut_wr_data_2 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_14.io_lut_wr_data_3 <= io_lut_wr_data_3 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_14.io_lut_wr_data_4 <= io_lut_wr_data_4 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_14.io_lut_wr_data_5 <= io_lut_wr_data_5 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_14.io_lut_wr_data_6 <= io_lut_wr_data_6 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_14.io_lut_wr_data_7 <= io_lut_wr_data_7 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_14.io_lut_wr_data_8 <= io_lut_wr_data_8 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_14.io_lut_wr_data_9 <= io_lut_wr_data_9 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_14.io_lut_wr_data_10 <= io_lut_wr_data_10 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_14.io_lut_wr_data_11 <= io_lut_wr_data_11 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_14.io_lut_wr_data_12 <= io_lut_wr_data_12 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_14.io_lut_wr_data_13 <= io_lut_wr_data_13 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_14.io_lut_wr_data_14 <= io_lut_wr_data_14 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_14.io_lut_wr_data_15 <= io_lut_wr_data_15 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_14.io_lut_wr_data_16 <= io_lut_wr_data_16 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_14.io_lut_wr_data_17 <= io_lut_wr_data_17 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_14.io_lut_wr_data_18 <= io_lut_wr_data_18 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_14.io_lut_wr_data_19 <= io_lut_wr_data_19 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_14.io_lut_wr_data_20 <= io_lut_wr_data_20 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_14.io_lut_wr_data_21 <= io_lut_wr_data_21 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_14.io_lut_wr_data_22 <= io_lut_wr_data_22 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_14.io_lut_wr_data_23 <= io_lut_wr_data_23 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_14.io_lut_wr_data_24 <= io_lut_wr_data_24 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_14.io_lut_wr_data_25 <= io_lut_wr_data_25 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_14.io_lut_wr_data_26 <= io_lut_wr_data_26 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_14.io_lut_wr_data_27 <= io_lut_wr_data_27 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_14.io_lut_wr_data_28 <= io_lut_wr_data_28 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_14.io_lut_wr_data_29 <= io_lut_wr_data_29 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_14.io_lut_wr_data_30 <= io_lut_wr_data_30 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_14.io_lut_wr_data_31 <= io_lut_wr_data_31 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_15.clock <= clock
    cores_15.reset <= reset
    cores_15.io_in_tpu <= io_in_tpu_15 @[src/main/scala/npu/core/QuantActUnit.scala 338:24]
    cores_15.io_in_direct <= io_in_direct_15 @[src/main/scala/npu/core/QuantActUnit.scala 339:27]
    cores_15.io_input_mode <= io_input_mode @[src/main/scala/npu/core/QuantActUnit.scala 340:28]
    cores_15.io_in_valid <= io_in_valid_15 @[src/main/scala/npu/core/QuantActUnit.scala 341:26]
    cores_15.io_param <= effectiveParam_15 @[src/main/scala/npu/core/QuantActUnit.scala 342:23]
    cores_15.io_act_mask <= io_act_mask @[src/main/scala/npu/core/QuantActUnit.scala 343:26]
    cores_15.io_fusion_second <= io_fusion_second @[src/main/scala/npu/core/QuantActUnit.scala 344:31]
    cores_15.io_stall <= io_stall @[src/main/scala/npu/core/QuantActUnit.scala 345:23]
    cores_15.io_lut_wr_en <= io_lut_wr_en @[src/main/scala/npu/core/QuantActUnit.scala 347:27]
    cores_15.io_lut_wr_addr <= io_lut_wr_addr @[src/main/scala/npu/core/QuantActUnit.scala 348:29]
    cores_15.io_lut_wr_data_0 <= io_lut_wr_data_0 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_15.io_lut_wr_data_1 <= io_lut_wr_data_1 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_15.io_lut_wr_data_2 <= io_lut_wr_data_2 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_15.io_lut_wr_data_3 <= io_lut_wr_data_3 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_15.io_lut_wr_data_4 <= io_lut_wr_data_4 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_15.io_lut_wr_data_5 <= io_lut_wr_data_5 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_15.io_lut_wr_data_6 <= io_lut_wr_data_6 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_15.io_lut_wr_data_7 <= io_lut_wr_data_7 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_15.io_lut_wr_data_8 <= io_lut_wr_data_8 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_15.io_lut_wr_data_9 <= io_lut_wr_data_9 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_15.io_lut_wr_data_10 <= io_lut_wr_data_10 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_15.io_lut_wr_data_11 <= io_lut_wr_data_11 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_15.io_lut_wr_data_12 <= io_lut_wr_data_12 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_15.io_lut_wr_data_13 <= io_lut_wr_data_13 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_15.io_lut_wr_data_14 <= io_lut_wr_data_14 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_15.io_lut_wr_data_15 <= io_lut_wr_data_15 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_15.io_lut_wr_data_16 <= io_lut_wr_data_16 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_15.io_lut_wr_data_17 <= io_lut_wr_data_17 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_15.io_lut_wr_data_18 <= io_lut_wr_data_18 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_15.io_lut_wr_data_19 <= io_lut_wr_data_19 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_15.io_lut_wr_data_20 <= io_lut_wr_data_20 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_15.io_lut_wr_data_21 <= io_lut_wr_data_21 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_15.io_lut_wr_data_22 <= io_lut_wr_data_22 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_15.io_lut_wr_data_23 <= io_lut_wr_data_23 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_15.io_lut_wr_data_24 <= io_lut_wr_data_24 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_15.io_lut_wr_data_25 <= io_lut_wr_data_25 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_15.io_lut_wr_data_26 <= io_lut_wr_data_26 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_15.io_lut_wr_data_27 <= io_lut_wr_data_27 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_15.io_lut_wr_data_28 <= io_lut_wr_data_28 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_15.io_lut_wr_data_29 <= io_lut_wr_data_29 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_15.io_lut_wr_data_30 <= io_lut_wr_data_30 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]
    cores_15.io_lut_wr_data_31 <= io_lut_wr_data_31 @[src/main/scala/npu/core/QuantActUnit.scala 349:29]

  module GPALUCore : @[src/main/scala/npu/core/GPALU.scala 15:7]
    input clock : Clock @[src/main/scala/npu/core/GPALU.scala 15:7]
    input reset : UInt<1> @[src/main/scala/npu/core/GPALU.scala 15:7]
    input io_in_a : SInt<8> @[src/main/scala/npu/core/GPALU.scala 18:14]
    input io_in_b : SInt<8> @[src/main/scala/npu/core/GPALU.scala 18:14]
    input io_in_valid : UInt<1> @[src/main/scala/npu/core/GPALU.scala 18:14]
    input io_input_mode : UInt<1> @[src/main/scala/npu/core/GPALU.scala 18:14]
    input io_alu_mode : UInt<2> @[src/main/scala/npu/core/GPALU.scala 18:14]
    input io_out_shift : UInt<5> @[src/main/scala/npu/core/GPALU.scala 18:14]
    input io_stall : UInt<1> @[src/main/scala/npu/core/GPALU.scala 18:14]
    output io_out_tpu : SInt<8> @[src/main/scala/npu/core/GPALU.scala 18:14]
    output io_out_direct : SInt<10> @[src/main/scala/npu/core/GPALU.scala 18:14]
    output io_out_tpu_valid : UInt<1> @[src/main/scala/npu/core/GPALU.scala 18:14]
    output io_out_direct_valid : UInt<1> @[src/main/scala/npu/core/GPALU.scala 18:14]
    output io_overflow : UInt<1> @[src/main/scala/npu/core/GPALU.scala 18:14]
    output io_busy : UInt<1> @[src/main/scala/npu/core/GPALU.scala 18:14]

    node run = eq(io_stall, UInt<1>("h0")) @[src/main/scala/npu/core/GPALU.scala 36:13]
    node direct = eq(io_input_mode, UInt<1>("h1")) @[src/main/scala/npu/core/GPALU.scala 37:30]
    reg s1A : SInt<8>, clock with :
      reset => (UInt<1>("h0"), s1A) @[src/main/scala/npu/core/GPALU.scala 38:22]
    node _GEN_0 = mux(run, io_in_a, s1A) @[src/main/scala/npu/core/GPALU.scala 38:{22,22,22}]
    reg s1B : SInt<8>, clock with :
      reset => (UInt<1>("h0"), s1B) @[src/main/scala/npu/core/GPALU.scala 39:22]
    node _GEN_1 = mux(run, io_in_b, s1B) @[src/main/scala/npu/core/GPALU.scala 39:{22,22,22}]
    node _s1Mode_T = mux(direct, UInt<2>("h1"), io_alu_mode) @[src/main/scala/npu/core/GPALU.scala 40:29]
    reg s1Mode : UInt<2>, clock with :
      reset => (UInt<1>("h0"), s1Mode) @[src/main/scala/npu/core/GPALU.scala 40:25]
    node _GEN_2 = mux(run, _s1Mode_T, s1Mode) @[src/main/scala/npu/core/GPALU.scala 40:{25,25,25}]
    node _s1Shift_T = mux(direct, UInt<1>("h0"), io_out_shift) @[src/main/scala/npu/core/GPALU.scala 41:30]
    reg s1Shift : UInt<5>, clock with :
      reset => (UInt<1>("h0"), s1Shift) @[src/main/scala/npu/core/GPALU.scala 41:26]
    node _GEN_3 = mux(run, _s1Shift_T, s1Shift) @[src/main/scala/npu/core/GPALU.scala 41:{26,26,26}]
    reg s1Direct : UInt<1>, clock with :
      reset => (UInt<1>("h0"), s1Direct) @[src/main/scala/npu/core/GPALU.scala 42:27]
    node _GEN_4 = mux(run, direct, s1Direct) @[src/main/scala/npu/core/GPALU.scala 42:{27,27,27}]
    reg s1Valid : UInt<1>, clock with :
      reset => (UInt<1>("h0"), s1Valid) @[src/main/scala/npu/core/GPALU.scala 43:26]
    node _GEN_5 = mux(run, io_in_valid, s1Valid) @[src/main/scala/npu/core/GPALU.scala 43:{26,26,26}]
    node _result_T = pad(s1A, 16) @[src/main/scala/npu/core/GPALU.scala 45:41]
    node _result_T_1 = add(s1A, s1B) @[src/main/scala/npu/core/GPALU.scala 46:27]
    node _result_T_2 = pad(_result_T_1, 16) @[src/main/scala/npu/core/GPALU.scala 46:38]
    node _result_T_3 = mul(s1A, s1B) @[src/main/scala/npu/core/GPALU.scala 47:27]
    node _result_T_4 = eq(UInt<2>("h1"), s1Mode) @[src/main/scala/npu/core/GPALU.scala 45:46]
    node _result_T_5 = mux(_result_T_4, _result_T_2, _result_T) @[src/main/scala/npu/core/GPALU.scala 45:46]
    node _result_T_6 = eq(UInt<2>("h2"), s1Mode) @[src/main/scala/npu/core/GPALU.scala 45:46]
    node result = mux(_result_T_6, _result_T_3, _result_T_5) @[src/main/scala/npu/core/GPALU.scala 45:46]
    reg s2Result : SInt<16>, clock with :
      reset => (UInt<1>("h0"), s2Result) @[src/main/scala/npu/core/GPALU.scala 49:27]
    node _GEN_6 = mux(run, result, s2Result) @[src/main/scala/npu/core/GPALU.scala 49:{27,27,27}]
    reg s2Shift : UInt<5>, clock with :
      reset => (UInt<1>("h0"), s2Shift) @[src/main/scala/npu/core/GPALU.scala 50:26]
    node _GEN_7 = mux(run, s1Shift, s2Shift) @[src/main/scala/npu/core/GPALU.scala 50:{26,26,26}]
    reg s2Direct : UInt<1>, clock with :
      reset => (UInt<1>("h0"), s2Direct) @[src/main/scala/npu/core/GPALU.scala 51:27]
    node _GEN_8 = mux(run, s1Direct, s2Direct) @[src/main/scala/npu/core/GPALU.scala 51:{27,27,27}]
    reg s2Valid : UInt<1>, clock with :
      reset => (UInt<1>("h0"), s2Valid) @[src/main/scala/npu/core/GPALU.scala 52:26]
    node _GEN_9 = mux(run, s1Valid, s2Valid) @[src/main/scala/npu/core/GPALU.scala 52:{26,26,26}]
    node shifted = dshr(s2Result, s2Shift) @[src/main/scala/npu/core/GPALU.scala 54:26]
    node _tpuClip_T = lt(shifted, asSInt(UInt<8>("h80"))) @[src/main/scala/npu/core/GPALU.scala 55:25]
    node _tpuClip_T_1 = gt(shifted, asSInt(UInt<8>("h7f"))) @[src/main/scala/npu/core/GPALU.scala 55:47]
    node tpuClip = or(_tpuClip_T, _tpuClip_T_1) @[src/main/scala/npu/core/GPALU.scala 55:36]
    node _directClip_T = lt(s2Result, asSInt(UInt<10>("h200"))) @[src/main/scala/npu/core/GPALU.scala 56:29]
    node _directClip_T_1 = gt(s2Result, asSInt(UInt<10>("h1ff"))) @[src/main/scala/npu/core/GPALU.scala 56:52]
    node directClip = or(_directClip_T, _directClip_T_1) @[src/main/scala/npu/core/GPALU.scala 56:40]
    node _tpuResult_T = lt(shifted, asSInt(UInt<8>("h80"))) @[src/main/scala/npu/core/GPALU.scala 57:31]
    node _tpuResult_T_1 = gt(shifted, asSInt(UInt<8>("h7f"))) @[src/main/scala/npu/core/GPALU.scala 58:17]
    node _tpuResult_T_2 = mux(_tpuResult_T_1, asSInt(UInt<8>("h7f")), shifted) @[src/main/scala/npu/core/GPALU.scala 58:8]
    node tpuResult = mux(_tpuResult_T, asSInt(UInt<8>("h80")), _tpuResult_T_2) @[src/main/scala/npu/core/GPALU.scala 57:22]
    node _directResult_T = lt(s2Result, asSInt(UInt<10>("h200"))) @[src/main/scala/npu/core/GPALU.scala 59:35]
    node _directResult_T_1 = gt(s2Result, asSInt(UInt<10>("h1ff"))) @[src/main/scala/npu/core/GPALU.scala 60:18]
    node _directResult_T_2 = mux(_directResult_T_1, asSInt(UInt<10>("h1ff")), s2Result) @[src/main/scala/npu/core/GPALU.scala 60:8]
    node directResult = mux(_directResult_T, asSInt(UInt<10>("h200")), _directResult_T_2) @[src/main/scala/npu/core/GPALU.scala 59:25]
    reg s3Valid : UInt<1>, clock with :
      reset => (UInt<1>("h0"), s3Valid) @[src/main/scala/npu/core/GPALU.scala 62:26]
    node _GEN_10 = mux(run, s2Valid, s3Valid) @[src/main/scala/npu/core/GPALU.scala 62:{26,26,26}]
    reg s3Direct : UInt<1>, clock with :
      reset => (UInt<1>("h0"), s3Direct) @[src/main/scala/npu/core/GPALU.scala 63:27]
    node _GEN_11 = mux(run, s2Direct, s3Direct) @[src/main/scala/npu/core/GPALU.scala 63:{27,27,27}]
    node _s3Clip_T = mux(s2Direct, directClip, tpuClip) @[src/main/scala/npu/core/GPALU.scala 64:29]
    reg s3Clip : UInt<1>, clock with :
      reset => (UInt<1>("h0"), s3Clip) @[src/main/scala/npu/core/GPALU.scala 64:25]
    node _GEN_12 = mux(run, _s3Clip_T, s3Clip) @[src/main/scala/npu/core/GPALU.scala 64:{25,25,25}]
    reg io_out_tpu_r : SInt<16>, clock with :
      reset => (UInt<1>("h0"), io_out_tpu_r) @[src/main/scala/npu/core/GPALU.scala 65:26]
    node _GEN_13 = mux(run, tpuResult, io_out_tpu_r) @[src/main/scala/npu/core/GPALU.scala 65:{26,26,26}]
    reg io_out_direct_r : SInt<16>, clock with :
      reset => (UInt<1>("h0"), io_out_direct_r) @[src/main/scala/npu/core/GPALU.scala 66:29]
    node _GEN_14 = mux(run, directResult, io_out_direct_r) @[src/main/scala/npu/core/GPALU.scala 66:{29,29,29}]
    node _io_out_tpu_valid_T = and(run, s3Valid) @[src/main/scala/npu/core/GPALU.scala 67:27]
    node _io_out_tpu_valid_T_1 = eq(s3Direct, UInt<1>("h0")) @[src/main/scala/npu/core/GPALU.scala 67:41]
    node _io_out_tpu_valid_T_2 = and(_io_out_tpu_valid_T, _io_out_tpu_valid_T_1) @[src/main/scala/npu/core/GPALU.scala 67:38]
    node _io_out_direct_valid_T = and(run, s3Valid) @[src/main/scala/npu/core/GPALU.scala 68:30]
    node _io_out_direct_valid_T_1 = and(_io_out_direct_valid_T, s3Direct) @[src/main/scala/npu/core/GPALU.scala 68:41]
    node _io_overflow_T = and(run, s3Valid) @[src/main/scala/npu/core/GPALU.scala 69:22]
    node _io_overflow_T_1 = and(_io_overflow_T, s3Clip) @[src/main/scala/npu/core/GPALU.scala 69:33]
    node _io_busy_T = or(s1Valid, s2Valid) @[src/main/scala/npu/core/GPALU.scala 70:22]
    node _io_busy_T_1 = or(_io_busy_T, s3Valid) @[src/main/scala/npu/core/GPALU.scala 70:33]
    io_out_tpu <= asSInt(bits(io_out_tpu_r, 7, 0)) @[src/main/scala/npu/core/GPALU.scala 65:14]
    io_out_direct <= asSInt(bits(io_out_direct_r, 9, 0)) @[src/main/scala/npu/core/GPALU.scala 66:17]
    io_out_tpu_valid <= _io_out_tpu_valid_T_2 @[src/main/scala/npu/core/GPALU.scala 67:20]
    io_out_direct_valid <= _io_out_direct_valid_T_1 @[src/main/scala/npu/core/GPALU.scala 68:23]
    io_overflow <= _io_overflow_T_1 @[src/main/scala/npu/core/GPALU.scala 69:15]
    io_busy <= _io_busy_T_1 @[src/main/scala/npu/core/GPALU.scala 70:11]
    s1A <= _GEN_0
    s1B <= _GEN_1
    s1Mode <= _GEN_2
    s1Shift <= _GEN_3
    s1Direct <= _GEN_4
    s1Valid <= mux(reset, UInt<1>("h0"), _GEN_5) @[src/main/scala/npu/core/GPALU.scala 43:{26,26}]
    s2Result <= _GEN_6
    s2Shift <= _GEN_7
    s2Direct <= _GEN_8
    s2Valid <= mux(reset, UInt<1>("h0"), _GEN_9) @[src/main/scala/npu/core/GPALU.scala 52:{26,26}]
    s3Valid <= mux(reset, UInt<1>("h0"), _GEN_10) @[src/main/scala/npu/core/GPALU.scala 62:{26,26}]
    s3Direct <= _GEN_11
    s3Clip <= _GEN_12
    io_out_tpu_r <= _GEN_13
    io_out_direct_r <= _GEN_14

  module GPALUUnit : @[src/main/scala/npu/core/GPALU.scala 73:7]
    input clock : Clock @[src/main/scala/npu/core/GPALU.scala 73:7]
    input reset : UInt<1> @[src/main/scala/npu/core/GPALU.scala 73:7]
    input io_in_vec_a_0 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_vec_a_1 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_vec_a_2 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_vec_a_3 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_vec_a_4 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_vec_a_5 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_vec_a_6 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_vec_a_7 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_vec_a_8 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_vec_a_9 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_vec_a_10 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_vec_a_11 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_vec_a_12 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_vec_a_13 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_vec_a_14 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_vec_a_15 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_vec_b_0 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_vec_b_1 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_vec_b_2 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_vec_b_3 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_vec_b_4 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_vec_b_5 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_vec_b_6 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_vec_b_7 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_vec_b_8 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_vec_b_9 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_vec_b_10 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_vec_b_11 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_vec_b_12 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_vec_b_13 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_vec_b_14 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_vec_b_15 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_valid_0 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_valid_1 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_valid_2 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_valid_3 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_valid_4 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_valid_5 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_valid_6 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_valid_7 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_valid_8 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_valid_9 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_valid_10 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_valid_11 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_valid_12 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_valid_13 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_valid_14 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_in_valid_15 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_input_mode : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_alu_mode : UInt<2> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_out_shift : UInt<5> @[src/main/scala/npu/core/GPALU.scala 81:14]
    input io_stall : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_tpu_0 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_tpu_1 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_tpu_2 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_tpu_3 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_tpu_4 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_tpu_5 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_tpu_6 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_tpu_7 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_tpu_8 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_tpu_9 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_tpu_10 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_tpu_11 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_tpu_12 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_tpu_13 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_tpu_14 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_tpu_15 : SInt<8> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_direct_0 : SInt<10> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_direct_1 : SInt<10> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_direct_2 : SInt<10> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_direct_3 : SInt<10> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_direct_4 : SInt<10> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_direct_5 : SInt<10> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_direct_6 : SInt<10> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_direct_7 : SInt<10> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_direct_8 : SInt<10> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_direct_9 : SInt<10> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_direct_10 : SInt<10> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_direct_11 : SInt<10> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_direct_12 : SInt<10> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_direct_13 : SInt<10> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_direct_14 : SInt<10> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_direct_15 : SInt<10> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_tpu_valid_0 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_tpu_valid_1 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_tpu_valid_2 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_tpu_valid_3 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_tpu_valid_4 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_tpu_valid_5 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_tpu_valid_6 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_tpu_valid_7 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_tpu_valid_8 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_tpu_valid_9 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_tpu_valid_10 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_tpu_valid_11 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_tpu_valid_12 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_tpu_valid_13 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_tpu_valid_14 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_tpu_valid_15 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_direct_valid_0 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_direct_valid_1 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_direct_valid_2 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_direct_valid_3 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_direct_valid_4 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_direct_valid_5 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_direct_valid_6 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_direct_valid_7 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_direct_valid_8 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_direct_valid_9 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_direct_valid_10 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_direct_valid_11 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_direct_valid_12 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_direct_valid_13 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_direct_valid_14 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_out_direct_valid_15 : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_alu_alert : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]
    output io_busy : UInt<1> @[src/main/scala/npu/core/GPALU.scala 81:14]

    inst cores_0 of GPALUCore @[src/main/scala/npu/core/GPALU.scala 98:40]
    inst cores_1 of GPALUCore @[src/main/scala/npu/core/GPALU.scala 98:40]
    inst cores_2 of GPALUCore @[src/main/scala/npu/core/GPALU.scala 98:40]
    inst cores_3 of GPALUCore @[src/main/scala/npu/core/GPALU.scala 98:40]
    inst cores_4 of GPALUCore @[src/main/scala/npu/core/GPALU.scala 98:40]
    inst cores_5 of GPALUCore @[src/main/scala/npu/core/GPALU.scala 98:40]
    inst cores_6 of GPALUCore @[src/main/scala/npu/core/GPALU.scala 98:40]
    inst cores_7 of GPALUCore @[src/main/scala/npu/core/GPALU.scala 98:40]
    inst cores_8 of GPALUCore @[src/main/scala/npu/core/GPALU.scala 98:40]
    inst cores_9 of GPALUCore @[src/main/scala/npu/core/GPALU.scala 98:40]
    inst cores_10 of GPALUCore @[src/main/scala/npu/core/GPALU.scala 98:40]
    inst cores_11 of GPALUCore @[src/main/scala/npu/core/GPALU.scala 98:40]
    inst cores_12 of GPALUCore @[src/main/scala/npu/core/GPALU.scala 98:40]
    inst cores_13 of GPALUCore @[src/main/scala/npu/core/GPALU.scala 98:40]
    inst cores_14 of GPALUCore @[src/main/scala/npu/core/GPALU.scala 98:40]
    inst cores_15 of GPALUCore @[src/main/scala/npu/core/GPALU.scala 98:40]
    node _io_alu_alert_WIRE_1 = cores_1.io_overflow @[src/main/scala/npu/core/GPALU.scala 112:{26,26}]
    node _io_alu_alert_WIRE_0 = cores_0.io_overflow @[src/main/scala/npu/core/GPALU.scala 112:{26,26}]
    node io_alu_alert_lo_lo_lo = cat(_io_alu_alert_WIRE_1, _io_alu_alert_WIRE_0) @[src/main/scala/npu/core/GPALU.scala 112:53]
    node _io_alu_alert_WIRE_3 = cores_3.io_overflow @[src/main/scala/npu/core/GPALU.scala 112:{26,26}]
    node _io_alu_alert_WIRE_2 = cores_2.io_overflow @[src/main/scala/npu/core/GPALU.scala 112:{26,26}]
    node io_alu_alert_lo_lo_hi = cat(_io_alu_alert_WIRE_3, _io_alu_alert_WIRE_2) @[src/main/scala/npu/core/GPALU.scala 112:53]
    node io_alu_alert_lo_lo = cat(io_alu_alert_lo_lo_hi, io_alu_alert_lo_lo_lo) @[src/main/scala/npu/core/GPALU.scala 112:53]
    node _io_alu_alert_WIRE_5 = cores_5.io_overflow @[src/main/scala/npu/core/GPALU.scala 112:{26,26}]
    node _io_alu_alert_WIRE_4 = cores_4.io_overflow @[src/main/scala/npu/core/GPALU.scala 112:{26,26}]
    node io_alu_alert_lo_hi_lo = cat(_io_alu_alert_WIRE_5, _io_alu_alert_WIRE_4) @[src/main/scala/npu/core/GPALU.scala 112:53]
    node _io_alu_alert_WIRE_7 = cores_7.io_overflow @[src/main/scala/npu/core/GPALU.scala 112:{26,26}]
    node _io_alu_alert_WIRE_6 = cores_6.io_overflow @[src/main/scala/npu/core/GPALU.scala 112:{26,26}]
    node io_alu_alert_lo_hi_hi = cat(_io_alu_alert_WIRE_7, _io_alu_alert_WIRE_6) @[src/main/scala/npu/core/GPALU.scala 112:53]
    node io_alu_alert_lo_hi = cat(io_alu_alert_lo_hi_hi, io_alu_alert_lo_hi_lo) @[src/main/scala/npu/core/GPALU.scala 112:53]
    node io_alu_alert_lo = cat(io_alu_alert_lo_hi, io_alu_alert_lo_lo) @[src/main/scala/npu/core/GPALU.scala 112:53]
    node _io_alu_alert_WIRE_9 = cores_9.io_overflow @[src/main/scala/npu/core/GPALU.scala 112:{26,26}]
    node _io_alu_alert_WIRE_8 = cores_8.io_overflow @[src/main/scala/npu/core/GPALU.scala 112:{26,26}]
    node io_alu_alert_hi_lo_lo = cat(_io_alu_alert_WIRE_9, _io_alu_alert_WIRE_8) @[src/main/scala/npu/core/GPALU.scala 112:53]
    node _io_alu_alert_WIRE_11 = cores_11.io_overflow @[src/main/scala/npu/core/GPALU.scala 112:{26,26}]
    node _io_alu_alert_WIRE_10 = cores_10.io_overflow @[src/main/scala/npu/core/GPALU.scala 112:{26,26}]
    node io_alu_alert_hi_lo_hi = cat(_io_alu_alert_WIRE_11, _io_alu_alert_WIRE_10) @[src/main/scala/npu/core/GPALU.scala 112:53]
    node io_alu_alert_hi_lo = cat(io_alu_alert_hi_lo_hi, io_alu_alert_hi_lo_lo) @[src/main/scala/npu/core/GPALU.scala 112:53]
    node _io_alu_alert_WIRE_13 = cores_13.io_overflow @[src/main/scala/npu/core/GPALU.scala 112:{26,26}]
    node _io_alu_alert_WIRE_12 = cores_12.io_overflow @[src/main/scala/npu/core/GPALU.scala 112:{26,26}]
    node io_alu_alert_hi_hi_lo = cat(_io_alu_alert_WIRE_13, _io_alu_alert_WIRE_12) @[src/main/scala/npu/core/GPALU.scala 112:53]
    node _io_alu_alert_WIRE_15 = cores_15.io_overflow @[src/main/scala/npu/core/GPALU.scala 112:{26,26}]
    node _io_alu_alert_WIRE_14 = cores_14.io_overflow @[src/main/scala/npu/core/GPALU.scala 112:{26,26}]
    node io_alu_alert_hi_hi_hi = cat(_io_alu_alert_WIRE_15, _io_alu_alert_WIRE_14) @[src/main/scala/npu/core/GPALU.scala 112:53]
    node io_alu_alert_hi_hi = cat(io_alu_alert_hi_hi_hi, io_alu_alert_hi_hi_lo) @[src/main/scala/npu/core/GPALU.scala 112:53]
    node io_alu_alert_hi = cat(io_alu_alert_hi_hi, io_alu_alert_hi_lo) @[src/main/scala/npu/core/GPALU.scala 112:53]
    node _io_alu_alert_T = cat(io_alu_alert_hi, io_alu_alert_lo) @[src/main/scala/npu/core/GPALU.scala 112:53]
    node _io_alu_alert_T_1 = orr(_io_alu_alert_T) @[src/main/scala/npu/core/GPALU.scala 112:60]
    node _io_busy_WIRE_1 = cores_1.io_busy @[src/main/scala/npu/core/GPALU.scala 113:{21,21}]
    node _io_busy_WIRE_0 = cores_0.io_busy @[src/main/scala/npu/core/GPALU.scala 113:{21,21}]
    node io_busy_lo_lo_lo = cat(_io_busy_WIRE_1, _io_busy_WIRE_0) @[src/main/scala/npu/core/GPALU.scala 113:44]
    node _io_busy_WIRE_3 = cores_3.io_busy @[src/main/scala/npu/core/GPALU.scala 113:{21,21}]
    node _io_busy_WIRE_2 = cores_2.io_busy @[src/main/scala/npu/core/GPALU.scala 113:{21,21}]
    node io_busy_lo_lo_hi = cat(_io_busy_WIRE_3, _io_busy_WIRE_2) @[src/main/scala/npu/core/GPALU.scala 113:44]
    node io_busy_lo_lo = cat(io_busy_lo_lo_hi, io_busy_lo_lo_lo) @[src/main/scala/npu/core/GPALU.scala 113:44]
    node _io_busy_WIRE_5 = cores_5.io_busy @[src/main/scala/npu/core/GPALU.scala 113:{21,21}]
    node _io_busy_WIRE_4 = cores_4.io_busy @[src/main/scala/npu/core/GPALU.scala 113:{21,21}]
    node io_busy_lo_hi_lo = cat(_io_busy_WIRE_5, _io_busy_WIRE_4) @[src/main/scala/npu/core/GPALU.scala 113:44]
    node _io_busy_WIRE_7 = cores_7.io_busy @[src/main/scala/npu/core/GPALU.scala 113:{21,21}]
    node _io_busy_WIRE_6 = cores_6.io_busy @[src/main/scala/npu/core/GPALU.scala 113:{21,21}]
    node io_busy_lo_hi_hi = cat(_io_busy_WIRE_7, _io_busy_WIRE_6) @[src/main/scala/npu/core/GPALU.scala 113:44]
    node io_busy_lo_hi = cat(io_busy_lo_hi_hi, io_busy_lo_hi_lo) @[src/main/scala/npu/core/GPALU.scala 113:44]
    node io_busy_lo = cat(io_busy_lo_hi, io_busy_lo_lo) @[src/main/scala/npu/core/GPALU.scala 113:44]
    node _io_busy_WIRE_9 = cores_9.io_busy @[src/main/scala/npu/core/GPALU.scala 113:{21,21}]
    node _io_busy_WIRE_8 = cores_8.io_busy @[src/main/scala/npu/core/GPALU.scala 113:{21,21}]
    node io_busy_hi_lo_lo = cat(_io_busy_WIRE_9, _io_busy_WIRE_8) @[src/main/scala/npu/core/GPALU.scala 113:44]
    node _io_busy_WIRE_11 = cores_11.io_busy @[src/main/scala/npu/core/GPALU.scala 113:{21,21}]
    node _io_busy_WIRE_10 = cores_10.io_busy @[src/main/scala/npu/core/GPALU.scala 113:{21,21}]
    node io_busy_hi_lo_hi = cat(_io_busy_WIRE_11, _io_busy_WIRE_10) @[src/main/scala/npu/core/GPALU.scala 113:44]
    node io_busy_hi_lo = cat(io_busy_hi_lo_hi, io_busy_hi_lo_lo) @[src/main/scala/npu/core/GPALU.scala 113:44]
    node _io_busy_WIRE_13 = cores_13.io_busy @[src/main/scala/npu/core/GPALU.scala 113:{21,21}]
    node _io_busy_WIRE_12 = cores_12.io_busy @[src/main/scala/npu/core/GPALU.scala 113:{21,21}]
    node io_busy_hi_hi_lo = cat(_io_busy_WIRE_13, _io_busy_WIRE_12) @[src/main/scala/npu/core/GPALU.scala 113:44]
    node _io_busy_WIRE_15 = cores_15.io_busy @[src/main/scala/npu/core/GPALU.scala 113:{21,21}]
    node _io_busy_WIRE_14 = cores_14.io_busy @[src/main/scala/npu/core/GPALU.scala 113:{21,21}]
    node io_busy_hi_hi_hi = cat(_io_busy_WIRE_15, _io_busy_WIRE_14) @[src/main/scala/npu/core/GPALU.scala 113:44]
    node io_busy_hi_hi = cat(io_busy_hi_hi_hi, io_busy_hi_hi_lo) @[src/main/scala/npu/core/GPALU.scala 113:44]
    node io_busy_hi = cat(io_busy_hi_hi, io_busy_hi_lo) @[src/main/scala/npu/core/GPALU.scala 113:44]
    node _io_busy_T = cat(io_busy_hi, io_busy_lo) @[src/main/scala/npu/core/GPALU.scala 113:44]
    node _io_busy_T_1 = orr(_io_busy_T) @[src/main/scala/npu/core/GPALU.scala 113:51]
    io_out_tpu_0 <= cores_0.io_out_tpu @[src/main/scala/npu/core/GPALU.scala 107:19]
    io_out_tpu_1 <= cores_1.io_out_tpu @[src/main/scala/npu/core/GPALU.scala 107:19]
    io_out_tpu_2 <= cores_2.io_out_tpu @[src/main/scala/npu/core/GPALU.scala 107:19]
    io_out_tpu_3 <= cores_3.io_out_tpu @[src/main/scala/npu/core/GPALU.scala 107:19]
    io_out_tpu_4 <= cores_4.io_out_tpu @[src/main/scala/npu/core/GPALU.scala 107:19]
    io_out_tpu_5 <= cores_5.io_out_tpu @[src/main/scala/npu/core/GPALU.scala 107:19]
    io_out_tpu_6 <= cores_6.io_out_tpu @[src/main/scala/npu/core/GPALU.scala 107:19]
    io_out_tpu_7 <= cores_7.io_out_tpu @[src/main/scala/npu/core/GPALU.scala 107:19]
    io_out_tpu_8 <= cores_8.io_out_tpu @[src/main/scala/npu/core/GPALU.scala 107:19]
    io_out_tpu_9 <= cores_9.io_out_tpu @[src/main/scala/npu/core/GPALU.scala 107:19]
    io_out_tpu_10 <= cores_10.io_out_tpu @[src/main/scala/npu/core/GPALU.scala 107:19]
    io_out_tpu_11 <= cores_11.io_out_tpu @[src/main/scala/npu/core/GPALU.scala 107:19]
    io_out_tpu_12 <= cores_12.io_out_tpu @[src/main/scala/npu/core/GPALU.scala 107:19]
    io_out_tpu_13 <= cores_13.io_out_tpu @[src/main/scala/npu/core/GPALU.scala 107:19]
    io_out_tpu_14 <= cores_14.io_out_tpu @[src/main/scala/npu/core/GPALU.scala 107:19]
    io_out_tpu_15 <= cores_15.io_out_tpu @[src/main/scala/npu/core/GPALU.scala 107:19]
    io_out_direct_0 <= cores_0.io_out_direct @[src/main/scala/npu/core/GPALU.scala 108:22]
    io_out_direct_1 <= cores_1.io_out_direct @[src/main/scala/npu/core/GPALU.scala 108:22]
    io_out_direct_2 <= cores_2.io_out_direct @[src/main/scala/npu/core/GPALU.scala 108:22]
    io_out_direct_3 <= cores_3.io_out_direct @[src/main/scala/npu/core/GPALU.scala 108:22]
    io_out_direct_4 <= cores_4.io_out_direct @[src/main/scala/npu/core/GPALU.scala 108:22]
    io_out_direct_5 <= cores_5.io_out_direct @[src/main/scala/npu/core/GPALU.scala 108:22]
    io_out_direct_6 <= cores_6.io_out_direct @[src/main/scala/npu/core/GPALU.scala 108:22]
    io_out_direct_7 <= cores_7.io_out_direct @[src/main/scala/npu/core/GPALU.scala 108:22]
    io_out_direct_8 <= cores_8.io_out_direct @[src/main/scala/npu/core/GPALU.scala 108:22]
    io_out_direct_9 <= cores_9.io_out_direct @[src/main/scala/npu/core/GPALU.scala 108:22]
    io_out_direct_10 <= cores_10.io_out_direct @[src/main/scala/npu/core/GPALU.scala 108:22]
    io_out_direct_11 <= cores_11.io_out_direct @[src/main/scala/npu/core/GPALU.scala 108:22]
    io_out_direct_12 <= cores_12.io_out_direct @[src/main/scala/npu/core/GPALU.scala 108:22]
    io_out_direct_13 <= cores_13.io_out_direct @[src/main/scala/npu/core/GPALU.scala 108:22]
    io_out_direct_14 <= cores_14.io_out_direct @[src/main/scala/npu/core/GPALU.scala 108:22]
    io_out_direct_15 <= cores_15.io_out_direct @[src/main/scala/npu/core/GPALU.scala 108:22]
    io_out_tpu_valid_0 <= cores_0.io_out_tpu_valid @[src/main/scala/npu/core/GPALU.scala 109:25]
    io_out_tpu_valid_1 <= cores_1.io_out_tpu_valid @[src/main/scala/npu/core/GPALU.scala 109:25]
    io_out_tpu_valid_2 <= cores_2.io_out_tpu_valid @[src/main/scala/npu/core/GPALU.scala 109:25]
    io_out_tpu_valid_3 <= cores_3.io_out_tpu_valid @[src/main/scala/npu/core/GPALU.scala 109:25]
    io_out_tpu_valid_4 <= cores_4.io_out_tpu_valid @[src/main/scala/npu/core/GPALU.scala 109:25]
    io_out_tpu_valid_5 <= cores_5.io_out_tpu_valid @[src/main/scala/npu/core/GPALU.scala 109:25]
    io_out_tpu_valid_6 <= cores_6.io_out_tpu_valid @[src/main/scala/npu/core/GPALU.scala 109:25]
    io_out_tpu_valid_7 <= cores_7.io_out_tpu_valid @[src/main/scala/npu/core/GPALU.scala 109:25]
    io_out_tpu_valid_8 <= cores_8.io_out_tpu_valid @[src/main/scala/npu/core/GPALU.scala 109:25]
    io_out_tpu_valid_9 <= cores_9.io_out_tpu_valid @[src/main/scala/npu/core/GPALU.scala 109:25]
    io_out_tpu_valid_10 <= cores_10.io_out_tpu_valid @[src/main/scala/npu/core/GPALU.scala 109:25]
    io_out_tpu_valid_11 <= cores_11.io_out_tpu_valid @[src/main/scala/npu/core/GPALU.scala 109:25]
    io_out_tpu_valid_12 <= cores_12.io_out_tpu_valid @[src/main/scala/npu/core/GPALU.scala 109:25]
    io_out_tpu_valid_13 <= cores_13.io_out_tpu_valid @[src/main/scala/npu/core/GPALU.scala 109:25]
    io_out_tpu_valid_14 <= cores_14.io_out_tpu_valid @[src/main/scala/npu/core/GPALU.scala 109:25]
    io_out_tpu_valid_15 <= cores_15.io_out_tpu_valid @[src/main/scala/npu/core/GPALU.scala 109:25]
    io_out_direct_valid_0 <= cores_0.io_out_direct_valid @[src/main/scala/npu/core/GPALU.scala 110:28]
    io_out_direct_valid_1 <= cores_1.io_out_direct_valid @[src/main/scala/npu/core/GPALU.scala 110:28]
    io_out_direct_valid_2 <= cores_2.io_out_direct_valid @[src/main/scala/npu/core/GPALU.scala 110:28]
    io_out_direct_valid_3 <= cores_3.io_out_direct_valid @[src/main/scala/npu/core/GPALU.scala 110:28]
    io_out_direct_valid_4 <= cores_4.io_out_direct_valid @[src/main/scala/npu/core/GPALU.scala 110:28]
    io_out_direct_valid_5 <= cores_5.io_out_direct_valid @[src/main/scala/npu/core/GPALU.scala 110:28]
    io_out_direct_valid_6 <= cores_6.io_out_direct_valid @[src/main/scala/npu/core/GPALU.scala 110:28]
    io_out_direct_valid_7 <= cores_7.io_out_direct_valid @[src/main/scala/npu/core/GPALU.scala 110:28]
    io_out_direct_valid_8 <= cores_8.io_out_direct_valid @[src/main/scala/npu/core/GPALU.scala 110:28]
    io_out_direct_valid_9 <= cores_9.io_out_direct_valid @[src/main/scala/npu/core/GPALU.scala 110:28]
    io_out_direct_valid_10 <= cores_10.io_out_direct_valid @[src/main/scala/npu/core/GPALU.scala 110:28]
    io_out_direct_valid_11 <= cores_11.io_out_direct_valid @[src/main/scala/npu/core/GPALU.scala 110:28]
    io_out_direct_valid_12 <= cores_12.io_out_direct_valid @[src/main/scala/npu/core/GPALU.scala 110:28]
    io_out_direct_valid_13 <= cores_13.io_out_direct_valid @[src/main/scala/npu/core/GPALU.scala 110:28]
    io_out_direct_valid_14 <= cores_14.io_out_direct_valid @[src/main/scala/npu/core/GPALU.scala 110:28]
    io_out_direct_valid_15 <= cores_15.io_out_direct_valid @[src/main/scala/npu/core/GPALU.scala 110:28]
    io_alu_alert <= _io_alu_alert_T_1 @[src/main/scala/npu/core/GPALU.scala 112:16]
    io_busy <= _io_busy_T_1 @[src/main/scala/npu/core/GPALU.scala 113:11]
    cores_0.clock <= clock
    cores_0.reset <= reset
    cores_0.io_in_a <= io_in_vec_a_0 @[src/main/scala/npu/core/GPALU.scala 100:22]
    cores_0.io_in_b <= io_in_vec_b_0 @[src/main/scala/npu/core/GPALU.scala 101:22]
    cores_0.io_in_valid <= io_in_valid_0 @[src/main/scala/npu/core/GPALU.scala 102:26]
    cores_0.io_input_mode <= io_input_mode @[src/main/scala/npu/core/GPALU.scala 103:28]
    cores_0.io_alu_mode <= io_alu_mode @[src/main/scala/npu/core/GPALU.scala 104:26]
    cores_0.io_out_shift <= io_out_shift @[src/main/scala/npu/core/GPALU.scala 105:27]
    cores_0.io_stall <= io_stall @[src/main/scala/npu/core/GPALU.scala 106:23]
    cores_1.clock <= clock
    cores_1.reset <= reset
    cores_1.io_in_a <= io_in_vec_a_1 @[src/main/scala/npu/core/GPALU.scala 100:22]
    cores_1.io_in_b <= io_in_vec_b_1 @[src/main/scala/npu/core/GPALU.scala 101:22]
    cores_1.io_in_valid <= io_in_valid_1 @[src/main/scala/npu/core/GPALU.scala 102:26]
    cores_1.io_input_mode <= io_input_mode @[src/main/scala/npu/core/GPALU.scala 103:28]
    cores_1.io_alu_mode <= io_alu_mode @[src/main/scala/npu/core/GPALU.scala 104:26]
    cores_1.io_out_shift <= io_out_shift @[src/main/scala/npu/core/GPALU.scala 105:27]
    cores_1.io_stall <= io_stall @[src/main/scala/npu/core/GPALU.scala 106:23]
    cores_2.clock <= clock
    cores_2.reset <= reset
    cores_2.io_in_a <= io_in_vec_a_2 @[src/main/scala/npu/core/GPALU.scala 100:22]
    cores_2.io_in_b <= io_in_vec_b_2 @[src/main/scala/npu/core/GPALU.scala 101:22]
    cores_2.io_in_valid <= io_in_valid_2 @[src/main/scala/npu/core/GPALU.scala 102:26]
    cores_2.io_input_mode <= io_input_mode @[src/main/scala/npu/core/GPALU.scala 103:28]
    cores_2.io_alu_mode <= io_alu_mode @[src/main/scala/npu/core/GPALU.scala 104:26]
    cores_2.io_out_shift <= io_out_shift @[src/main/scala/npu/core/GPALU.scala 105:27]
    cores_2.io_stall <= io_stall @[src/main/scala/npu/core/GPALU.scala 106:23]
    cores_3.clock <= clock
    cores_3.reset <= reset
    cores_3.io_in_a <= io_in_vec_a_3 @[src/main/scala/npu/core/GPALU.scala 100:22]
    cores_3.io_in_b <= io_in_vec_b_3 @[src/main/scala/npu/core/GPALU.scala 101:22]
    cores_3.io_in_valid <= io_in_valid_3 @[src/main/scala/npu/core/GPALU.scala 102:26]
    cores_3.io_input_mode <= io_input_mode @[src/main/scala/npu/core/GPALU.scala 103:28]
    cores_3.io_alu_mode <= io_alu_mode @[src/main/scala/npu/core/GPALU.scala 104:26]
    cores_3.io_out_shift <= io_out_shift @[src/main/scala/npu/core/GPALU.scala 105:27]
    cores_3.io_stall <= io_stall @[src/main/scala/npu/core/GPALU.scala 106:23]
    cores_4.clock <= clock
    cores_4.reset <= reset
    cores_4.io_in_a <= io_in_vec_a_4 @[src/main/scala/npu/core/GPALU.scala 100:22]
    cores_4.io_in_b <= io_in_vec_b_4 @[src/main/scala/npu/core/GPALU.scala 101:22]
    cores_4.io_in_valid <= io_in_valid_4 @[src/main/scala/npu/core/GPALU.scala 102:26]
    cores_4.io_input_mode <= io_input_mode @[src/main/scala/npu/core/GPALU.scala 103:28]
    cores_4.io_alu_mode <= io_alu_mode @[src/main/scala/npu/core/GPALU.scala 104:26]
    cores_4.io_out_shift <= io_out_shift @[src/main/scala/npu/core/GPALU.scala 105:27]
    cores_4.io_stall <= io_stall @[src/main/scala/npu/core/GPALU.scala 106:23]
    cores_5.clock <= clock
    cores_5.reset <= reset
    cores_5.io_in_a <= io_in_vec_a_5 @[src/main/scala/npu/core/GPALU.scala 100:22]
    cores_5.io_in_b <= io_in_vec_b_5 @[src/main/scala/npu/core/GPALU.scala 101:22]
    cores_5.io_in_valid <= io_in_valid_5 @[src/main/scala/npu/core/GPALU.scala 102:26]
    cores_5.io_input_mode <= io_input_mode @[src/main/scala/npu/core/GPALU.scala 103:28]
    cores_5.io_alu_mode <= io_alu_mode @[src/main/scala/npu/core/GPALU.scala 104:26]
    cores_5.io_out_shift <= io_out_shift @[src/main/scala/npu/core/GPALU.scala 105:27]
    cores_5.io_stall <= io_stall @[src/main/scala/npu/core/GPALU.scala 106:23]
    cores_6.clock <= clock
    cores_6.reset <= reset
    cores_6.io_in_a <= io_in_vec_a_6 @[src/main/scala/npu/core/GPALU.scala 100:22]
    cores_6.io_in_b <= io_in_vec_b_6 @[src/main/scala/npu/core/GPALU.scala 101:22]
    cores_6.io_in_valid <= io_in_valid_6 @[src/main/scala/npu/core/GPALU.scala 102:26]
    cores_6.io_input_mode <= io_input_mode @[src/main/scala/npu/core/GPALU.scala 103:28]
    cores_6.io_alu_mode <= io_alu_mode @[src/main/scala/npu/core/GPALU.scala 104:26]
    cores_6.io_out_shift <= io_out_shift @[src/main/scala/npu/core/GPALU.scala 105:27]
    cores_6.io_stall <= io_stall @[src/main/scala/npu/core/GPALU.scala 106:23]
    cores_7.clock <= clock
    cores_7.reset <= reset
    cores_7.io_in_a <= io_in_vec_a_7 @[src/main/scala/npu/core/GPALU.scala 100:22]
    cores_7.io_in_b <= io_in_vec_b_7 @[src/main/scala/npu/core/GPALU.scala 101:22]
    cores_7.io_in_valid <= io_in_valid_7 @[src/main/scala/npu/core/GPALU.scala 102:26]
    cores_7.io_input_mode <= io_input_mode @[src/main/scala/npu/core/GPALU.scala 103:28]
    cores_7.io_alu_mode <= io_alu_mode @[src/main/scala/npu/core/GPALU.scala 104:26]
    cores_7.io_out_shift <= io_out_shift @[src/main/scala/npu/core/GPALU.scala 105:27]
    cores_7.io_stall <= io_stall @[src/main/scala/npu/core/GPALU.scala 106:23]
    cores_8.clock <= clock
    cores_8.reset <= reset
    cores_8.io_in_a <= io_in_vec_a_8 @[src/main/scala/npu/core/GPALU.scala 100:22]
    cores_8.io_in_b <= io_in_vec_b_8 @[src/main/scala/npu/core/GPALU.scala 101:22]
    cores_8.io_in_valid <= io_in_valid_8 @[src/main/scala/npu/core/GPALU.scala 102:26]
    cores_8.io_input_mode <= io_input_mode @[src/main/scala/npu/core/GPALU.scala 103:28]
    cores_8.io_alu_mode <= io_alu_mode @[src/main/scala/npu/core/GPALU.scala 104:26]
    cores_8.io_out_shift <= io_out_shift @[src/main/scala/npu/core/GPALU.scala 105:27]
    cores_8.io_stall <= io_stall @[src/main/scala/npu/core/GPALU.scala 106:23]
    cores_9.clock <= clock
    cores_9.reset <= reset
    cores_9.io_in_a <= io_in_vec_a_9 @[src/main/scala/npu/core/GPALU.scala 100:22]
    cores_9.io_in_b <= io_in_vec_b_9 @[src/main/scala/npu/core/GPALU.scala 101:22]
    cores_9.io_in_valid <= io_in_valid_9 @[src/main/scala/npu/core/GPALU.scala 102:26]
    cores_9.io_input_mode <= io_input_mode @[src/main/scala/npu/core/GPALU.scala 103:28]
    cores_9.io_alu_mode <= io_alu_mode @[src/main/scala/npu/core/GPALU.scala 104:26]
    cores_9.io_out_shift <= io_out_shift @[src/main/scala/npu/core/GPALU.scala 105:27]
    cores_9.io_stall <= io_stall @[src/main/scala/npu/core/GPALU.scala 106:23]
    cores_10.clock <= clock
    cores_10.reset <= reset
    cores_10.io_in_a <= io_in_vec_a_10 @[src/main/scala/npu/core/GPALU.scala 100:22]
    cores_10.io_in_b <= io_in_vec_b_10 @[src/main/scala/npu/core/GPALU.scala 101:22]
    cores_10.io_in_valid <= io_in_valid_10 @[src/main/scala/npu/core/GPALU.scala 102:26]
    cores_10.io_input_mode <= io_input_mode @[src/main/scala/npu/core/GPALU.scala 103:28]
    cores_10.io_alu_mode <= io_alu_mode @[src/main/scala/npu/core/GPALU.scala 104:26]
    cores_10.io_out_shift <= io_out_shift @[src/main/scala/npu/core/GPALU.scala 105:27]
    cores_10.io_stall <= io_stall @[src/main/scala/npu/core/GPALU.scala 106:23]
    cores_11.clock <= clock
    cores_11.reset <= reset
    cores_11.io_in_a <= io_in_vec_a_11 @[src/main/scala/npu/core/GPALU.scala 100:22]
    cores_11.io_in_b <= io_in_vec_b_11 @[src/main/scala/npu/core/GPALU.scala 101:22]
    cores_11.io_in_valid <= io_in_valid_11 @[src/main/scala/npu/core/GPALU.scala 102:26]
    cores_11.io_input_mode <= io_input_mode @[src/main/scala/npu/core/GPALU.scala 103:28]
    cores_11.io_alu_mode <= io_alu_mode @[src/main/scala/npu/core/GPALU.scala 104:26]
    cores_11.io_out_shift <= io_out_shift @[src/main/scala/npu/core/GPALU.scala 105:27]
    cores_11.io_stall <= io_stall @[src/main/scala/npu/core/GPALU.scala 106:23]
    cores_12.clock <= clock
    cores_12.reset <= reset
    cores_12.io_in_a <= io_in_vec_a_12 @[src/main/scala/npu/core/GPALU.scala 100:22]
    cores_12.io_in_b <= io_in_vec_b_12 @[src/main/scala/npu/core/GPALU.scala 101:22]
    cores_12.io_in_valid <= io_in_valid_12 @[src/main/scala/npu/core/GPALU.scala 102:26]
    cores_12.io_input_mode <= io_input_mode @[src/main/scala/npu/core/GPALU.scala 103:28]
    cores_12.io_alu_mode <= io_alu_mode @[src/main/scala/npu/core/GPALU.scala 104:26]
    cores_12.io_out_shift <= io_out_shift @[src/main/scala/npu/core/GPALU.scala 105:27]
    cores_12.io_stall <= io_stall @[src/main/scala/npu/core/GPALU.scala 106:23]
    cores_13.clock <= clock
    cores_13.reset <= reset
    cores_13.io_in_a <= io_in_vec_a_13 @[src/main/scala/npu/core/GPALU.scala 100:22]
    cores_13.io_in_b <= io_in_vec_b_13 @[src/main/scala/npu/core/GPALU.scala 101:22]
    cores_13.io_in_valid <= io_in_valid_13 @[src/main/scala/npu/core/GPALU.scala 102:26]
    cores_13.io_input_mode <= io_input_mode @[src/main/scala/npu/core/GPALU.scala 103:28]
    cores_13.io_alu_mode <= io_alu_mode @[src/main/scala/npu/core/GPALU.scala 104:26]
    cores_13.io_out_shift <= io_out_shift @[src/main/scala/npu/core/GPALU.scala 105:27]
    cores_13.io_stall <= io_stall @[src/main/scala/npu/core/GPALU.scala 106:23]
    cores_14.clock <= clock
    cores_14.reset <= reset
    cores_14.io_in_a <= io_in_vec_a_14 @[src/main/scala/npu/core/GPALU.scala 100:22]
    cores_14.io_in_b <= io_in_vec_b_14 @[src/main/scala/npu/core/GPALU.scala 101:22]
    cores_14.io_in_valid <= io_in_valid_14 @[src/main/scala/npu/core/GPALU.scala 102:26]
    cores_14.io_input_mode <= io_input_mode @[src/main/scala/npu/core/GPALU.scala 103:28]
    cores_14.io_alu_mode <= io_alu_mode @[src/main/scala/npu/core/GPALU.scala 104:26]
    cores_14.io_out_shift <= io_out_shift @[src/main/scala/npu/core/GPALU.scala 105:27]
    cores_14.io_stall <= io_stall @[src/main/scala/npu/core/GPALU.scala 106:23]
    cores_15.clock <= clock
    cores_15.reset <= reset
    cores_15.io_in_a <= io_in_vec_a_15 @[src/main/scala/npu/core/GPALU.scala 100:22]
    cores_15.io_in_b <= io_in_vec_b_15 @[src/main/scala/npu/core/GPALU.scala 101:22]
    cores_15.io_in_valid <= io_in_valid_15 @[src/main/scala/npu/core/GPALU.scala 102:26]
    cores_15.io_input_mode <= io_input_mode @[src/main/scala/npu/core/GPALU.scala 103:28]
    cores_15.io_alu_mode <= io_alu_mode @[src/main/scala/npu/core/GPALU.scala 104:26]
    cores_15.io_out_shift <= io_out_shift @[src/main/scala/npu/core/GPALU.scala 105:27]
    cores_15.io_stall <= io_stall @[src/main/scala/npu/core/GPALU.scala 106:23]

  module VPU1RouteHarness : @[src/test/scala/VPU1Route_Test.scala 11:7]
    input clock : Clock @[src/test/scala/VPU1Route_Test.scala 11:7]
    input reset : UInt<1> @[src/test/scala/VPU1Route_Test.scala 11:7]
    input io_tpu_0 : SInt<32> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_tpu_1 : SInt<32> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_tpu_2 : SInt<32> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_tpu_3 : SInt<32> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_tpu_4 : SInt<32> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_tpu_5 : SInt<32> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_tpu_6 : SInt<32> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_tpu_7 : SInt<32> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_tpu_8 : SInt<32> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_tpu_9 : SInt<32> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_tpu_10 : SInt<32> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_tpu_11 : SInt<32> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_tpu_12 : SInt<32> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_tpu_13 : SInt<32> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_tpu_14 : SInt<32> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_tpu_15 : SInt<32> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_tpu_valid : UInt<1> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_ub_0 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_ub_1 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_ub_2 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_ub_3 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_ub_4 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_ub_5 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_ub_6 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_ub_7 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_ub_8 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_ub_9 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_ub_10 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_ub_11 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_ub_12 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_ub_13 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_ub_14 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_ub_15 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_wb_0 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_wb_1 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_wb_2 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_wb_3 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_wb_4 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_wb_5 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_wb_6 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_wb_7 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_wb_8 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_wb_9 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_wb_10 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_wb_11 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_wb_12 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_wb_13 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_wb_14 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_wb_15 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_ub_valid : UInt<1> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_wb_valid : UInt<1> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_vb_read_data_0 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_vb_read_data_1 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_vb_read_data_2 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_vb_read_data_3 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_vb_read_data_4 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_vb_read_data_5 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_vb_read_data_6 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_vb_read_data_7 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_vb_read_data_8 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_vb_read_data_9 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_vb_read_data_10 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_vb_read_data_11 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_vb_read_data_12 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_vb_read_data_13 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_vb_read_data_14 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_vb_read_data_15 : SInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    output io_vb_read_req : UInt<1> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_input_mode : UInt<1> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_output_route : UInt<2> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_alu_mode : UInt<2> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_out_shift : UInt<5> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_act_mask : UInt<2> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_fusion_second : UInt<1> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_matrix_param : UInt<32> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_stall : UInt<1> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_lut_wr_en : UInt<1> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_lut_wr_addr : UInt<5> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_lut_wr_data_0 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_lut_wr_data_1 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_lut_wr_data_2 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_lut_wr_data_3 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_lut_wr_data_4 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_lut_wr_data_5 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_lut_wr_data_6 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_lut_wr_data_7 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_lut_wr_data_8 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_lut_wr_data_9 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_lut_wr_data_10 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_lut_wr_data_11 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_lut_wr_data_12 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_lut_wr_data_13 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_lut_wr_data_14 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_lut_wr_data_15 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_lut_wr_data_16 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_lut_wr_data_17 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_lut_wr_data_18 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_lut_wr_data_19 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_lut_wr_data_20 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_lut_wr_data_21 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_lut_wr_data_22 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_lut_wr_data_23 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_lut_wr_data_24 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_lut_wr_data_25 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_lut_wr_data_26 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_lut_wr_data_27 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_lut_wr_data_28 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_lut_wr_data_29 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_lut_wr_data_30 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    input io_lut_wr_data_31 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    output io_result_0 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    output io_result_1 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    output io_result_2 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    output io_result_3 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    output io_result_4 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    output io_result_5 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    output io_result_6 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    output io_result_7 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    output io_result_8 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    output io_result_9 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    output io_result_10 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    output io_result_11 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    output io_result_12 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    output io_result_13 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    output io_result_14 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    output io_result_15 : UInt<8> @[src/test/scala/VPU1Route_Test.scala 12:14]
    output io_vb_valid : UInt<1> @[src/test/scala/VPU1Route_Test.scala 12:14]
    output io_vpu2_valid : UInt<1> @[src/test/scala/VPU1Route_Test.scala 12:14]
    output io_compute_valid : UInt<1> @[src/test/scala/VPU1Route_Test.scala 12:14]
    output io_result_valid : UInt<1> @[src/test/scala/VPU1Route_Test.scala 12:14]
    output io_drained : UInt<1> @[src/test/scala/VPU1Route_Test.scala 12:14]
    output io_control_alert : UInt<1> @[src/test/scala/VPU1Route_Test.scala 12:14]
    output io_sync_alert : UInt<1> @[src/test/scala/VPU1Route_Test.scala 12:14]
    output io_qparam_req : UInt<1> @[src/test/scala/VPU1Route_Test.scala 12:14]

    inst qa of QuantActUnit @[src/test/scala/VPU1Route_Test.scala 45:18]
    inst alu of GPALUUnit @[src/test/scala/VPU1Route_Test.scala 46:19]
    node busy = or(qa.io_busy, alu.io_busy) @[src/test/scala/VPU1Route_Test.scala 47:25]
    node _io_drained_T = eq(busy, UInt<1>("h0")) @[src/test/scala/VPU1Route_Test.scala 48:17]
    reg savedMode : UInt<1>, clock with :
      reset => (UInt<1>("h0"), savedMode) @[src/test/scala/VPU1Route_Test.scala 49:26]
    reg savedRoute : UInt<2>, clock with :
      reset => (UInt<1>("h0"), savedRoute) @[src/test/scala/VPU1Route_Test.scala 50:27]
    node _T = eq(busy, UInt<1>("h0")) @[src/test/scala/VPU1Route_Test.scala 51:8]
    node _GEN_0 = mux(_T, io_input_mode, savedMode) @[src/test/scala/VPU1Route_Test.scala 51:15 52:15 49:26]
    node _GEN_1 = mux(_T, io_output_route, savedRoute) @[src/test/scala/VPU1Route_Test.scala 51:15 53:16 50:27]
    node _io_control_alert_T = neq(io_input_mode, savedMode) @[src/test/scala/VPU1Route_Test.scala 58:21]
    node _io_control_alert_T_1 = neq(io_output_route, savedRoute) @[src/test/scala/VPU1Route_Test.scala 58:56]
    node _io_control_alert_T_2 = or(_io_control_alert_T, _io_control_alert_T_1) @[src/test/scala/VPU1Route_Test.scala 58:36]
    node _io_control_alert_T_3 = and(busy, _io_control_alert_T_2) @[src/test/scala/VPU1Route_Test.scala 57:28]
    node mode = mux(busy, savedMode, io_input_mode) @[src/test/scala/VPU1Route_Test.scala 59:17]
    node route = mux(busy, savedRoute, io_output_route) @[src/test/scala/VPU1Route_Test.scala 60:18]
    node direct = eq(mode, UInt<1>("h1")) @[src/test/scala/VPU1Route_Test.scala 61:21]
    node _io_vb_read_req_T = eq(direct, UInt<1>("h0")) @[src/test/scala/VPU1Route_Test.scala 78:21]
    node _io_vb_read_req_T_1 = neq(io_alu_mode, UInt<2>("h0")) @[src/test/scala/VPU1Route_Test.scala 78:44]
    node _io_vb_read_req_T_2 = and(_io_vb_read_req_T, _io_vb_read_req_T_1) @[src/test/scala/VPU1Route_Test.scala 78:29]
    node _io_vb_read_req_T_3 = and(_io_vb_read_req_T_2, qa.io_out_lookahead_0) @[src/test/scala/VPU1Route_Test.scala 78:65]
    reg vbResponse_0 : SInt<8>, clock with :
      reset => (UInt<1>("h0"), vbResponse_0) @[src/test/scala/VPU1Route_Test.scala 79:29]
    reg vbResponse_1 : SInt<8>, clock with :
      reset => (UInt<1>("h0"), vbResponse_1) @[src/test/scala/VPU1Route_Test.scala 79:29]
    reg vbResponse_2 : SInt<8>, clock with :
      reset => (UInt<1>("h0"), vbResponse_2) @[src/test/scala/VPU1Route_Test.scala 79:29]
    reg vbResponse_3 : SInt<8>, clock with :
      reset => (UInt<1>("h0"), vbResponse_3) @[src/test/scala/VPU1Route_Test.scala 79:29]
    reg vbResponse_4 : SInt<8>, clock with :
      reset => (UInt<1>("h0"), vbResponse_4) @[src/test/scala/VPU1Route_Test.scala 79:29]
    reg vbResponse_5 : SInt<8>, clock with :
      reset => (UInt<1>("h0"), vbResponse_5) @[src/test/scala/VPU1Route_Test.scala 79:29]
    reg vbResponse_6 : SInt<8>, clock with :
      reset => (UInt<1>("h0"), vbResponse_6) @[src/test/scala/VPU1Route_Test.scala 79:29]
    reg vbResponse_7 : SInt<8>, clock with :
      reset => (UInt<1>("h0"), vbResponse_7) @[src/test/scala/VPU1Route_Test.scala 79:29]
    reg vbResponse_8 : SInt<8>, clock with :
      reset => (UInt<1>("h0"), vbResponse_8) @[src/test/scala/VPU1Route_Test.scala 79:29]
    reg vbResponse_9 : SInt<8>, clock with :
      reset => (UInt<1>("h0"), vbResponse_9) @[src/test/scala/VPU1Route_Test.scala 79:29]
    reg vbResponse_10 : SInt<8>, clock with :
      reset => (UInt<1>("h0"), vbResponse_10) @[src/test/scala/VPU1Route_Test.scala 79:29]
    reg vbResponse_11 : SInt<8>, clock with :
      reset => (UInt<1>("h0"), vbResponse_11) @[src/test/scala/VPU1Route_Test.scala 79:29]
    reg vbResponse_12 : SInt<8>, clock with :
      reset => (UInt<1>("h0"), vbResponse_12) @[src/test/scala/VPU1Route_Test.scala 79:29]
    reg vbResponse_13 : SInt<8>, clock with :
      reset => (UInt<1>("h0"), vbResponse_13) @[src/test/scala/VPU1Route_Test.scala 79:29]
    reg vbResponse_14 : SInt<8>, clock with :
      reset => (UInt<1>("h0"), vbResponse_14) @[src/test/scala/VPU1Route_Test.scala 79:29]
    reg vbResponse_15 : SInt<8>, clock with :
      reset => (UInt<1>("h0"), vbResponse_15) @[src/test/scala/VPU1Route_Test.scala 79:29]
    node _GEN_2 = mux(io_vb_read_req, io_vb_read_data_0, vbResponse_0) @[src/test/scala/VPU1Route_Test.scala 79:{29,29,29}]
    node _GEN_3 = mux(io_vb_read_req, io_vb_read_data_1, vbResponse_1) @[src/test/scala/VPU1Route_Test.scala 79:{29,29,29}]
    node _GEN_4 = mux(io_vb_read_req, io_vb_read_data_2, vbResponse_2) @[src/test/scala/VPU1Route_Test.scala 79:{29,29,29}]
    node _GEN_5 = mux(io_vb_read_req, io_vb_read_data_3, vbResponse_3) @[src/test/scala/VPU1Route_Test.scala 79:{29,29,29}]
    node _GEN_6 = mux(io_vb_read_req, io_vb_read_data_4, vbResponse_4) @[src/test/scala/VPU1Route_Test.scala 79:{29,29,29}]
    node _GEN_7 = mux(io_vb_read_req, io_vb_read_data_5, vbResponse_5) @[src/test/scala/VPU1Route_Test.scala 79:{29,29,29}]
    node _GEN_8 = mux(io_vb_read_req, io_vb_read_data_6, vbResponse_6) @[src/test/scala/VPU1Route_Test.scala 79:{29,29,29}]
    node _GEN_9 = mux(io_vb_read_req, io_vb_read_data_7, vbResponse_7) @[src/test/scala/VPU1Route_Test.scala 79:{29,29,29}]
    node _GEN_10 = mux(io_vb_read_req, io_vb_read_data_8, vbResponse_8) @[src/test/scala/VPU1Route_Test.scala 79:{29,29,29}]
    node _GEN_11 = mux(io_vb_read_req, io_vb_read_data_9, vbResponse_9) @[src/test/scala/VPU1Route_Test.scala 79:{29,29,29}]
    node _GEN_12 = mux(io_vb_read_req, io_vb_read_data_10, vbResponse_10) @[src/test/scala/VPU1Route_Test.scala 79:{29,29,29}]
    node _GEN_13 = mux(io_vb_read_req, io_vb_read_data_11, vbResponse_11) @[src/test/scala/VPU1Route_Test.scala 79:{29,29,29}]
    node _GEN_14 = mux(io_vb_read_req, io_vb_read_data_12, vbResponse_12) @[src/test/scala/VPU1Route_Test.scala 79:{29,29,29}]
    node _GEN_15 = mux(io_vb_read_req, io_vb_read_data_13, vbResponse_13) @[src/test/scala/VPU1Route_Test.scala 79:{29,29,29}]
    node _GEN_16 = mux(io_vb_read_req, io_vb_read_data_14, vbResponse_14) @[src/test/scala/VPU1Route_Test.scala 79:{29,29,29}]
    node _GEN_17 = mux(io_vb_read_req, io_vb_read_data_15, vbResponse_15) @[src/test/scala/VPU1Route_Test.scala 79:{29,29,29}]
    node _qa_io_in_valid_0_T = mux(direct, alu.io_out_direct_valid_0, io_tpu_valid) @[src/test/scala/VPU1Route_Test.scala 85:29]
    node _alu_io_in_vec_a_0_T = asSInt(qa.io_out_vec_0) @[src/test/scala/VPU1Route_Test.scala 86:66]
    node _alu_io_in_vec_a_0_T_1 = mux(direct, io_ub_0, _alu_io_in_vec_a_0_T) @[src/test/scala/VPU1Route_Test.scala 86:30]
    node _alu_io_in_vec_b_0_T = mux(direct, io_wb_0, vbResponse_0) @[src/test/scala/VPU1Route_Test.scala 87:30]
    node _alu_io_in_valid_0_T = and(io_ub_valid, io_wb_valid) @[src/test/scala/VPU1Route_Test.scala 88:51]
    node _alu_io_in_valid_0_T_1 = mux(direct, _alu_io_in_valid_0_T, qa.io_out_valid_0) @[src/test/scala/VPU1Route_Test.scala 88:30]
    node _io_result_0_T = asUInt(alu.io_out_tpu_0) @[src/test/scala/VPU1Route_Test.scala 89:69]
    node _io_result_0_T_1 = mux(direct, qa.io_out_vec_0, _io_result_0_T) @[src/test/scala/VPU1Route_Test.scala 89:24]
    node _qa_io_in_valid_1_T = mux(direct, alu.io_out_direct_valid_1, io_tpu_valid) @[src/test/scala/VPU1Route_Test.scala 85:29]
    node _alu_io_in_vec_a_1_T = asSInt(qa.io_out_vec_1) @[src/test/scala/VPU1Route_Test.scala 86:66]
    node _alu_io_in_vec_a_1_T_1 = mux(direct, io_ub_1, _alu_io_in_vec_a_1_T) @[src/test/scala/VPU1Route_Test.scala 86:30]
    node _alu_io_in_vec_b_1_T = mux(direct, io_wb_1, vbResponse_1) @[src/test/scala/VPU1Route_Test.scala 87:30]
    node _alu_io_in_valid_1_T = and(io_ub_valid, io_wb_valid) @[src/test/scala/VPU1Route_Test.scala 88:51]
    node _alu_io_in_valid_1_T_1 = mux(direct, _alu_io_in_valid_1_T, qa.io_out_valid_1) @[src/test/scala/VPU1Route_Test.scala 88:30]
    node _io_result_1_T = asUInt(alu.io_out_tpu_1) @[src/test/scala/VPU1Route_Test.scala 89:69]
    node _io_result_1_T_1 = mux(direct, qa.io_out_vec_1, _io_result_1_T) @[src/test/scala/VPU1Route_Test.scala 89:24]
    node _qa_io_in_valid_2_T = mux(direct, alu.io_out_direct_valid_2, io_tpu_valid) @[src/test/scala/VPU1Route_Test.scala 85:29]
    node _alu_io_in_vec_a_2_T = asSInt(qa.io_out_vec_2) @[src/test/scala/VPU1Route_Test.scala 86:66]
    node _alu_io_in_vec_a_2_T_1 = mux(direct, io_ub_2, _alu_io_in_vec_a_2_T) @[src/test/scala/VPU1Route_Test.scala 86:30]
    node _alu_io_in_vec_b_2_T = mux(direct, io_wb_2, vbResponse_2) @[src/test/scala/VPU1Route_Test.scala 87:30]
    node _alu_io_in_valid_2_T = and(io_ub_valid, io_wb_valid) @[src/test/scala/VPU1Route_Test.scala 88:51]
    node _alu_io_in_valid_2_T_1 = mux(direct, _alu_io_in_valid_2_T, qa.io_out_valid_2) @[src/test/scala/VPU1Route_Test.scala 88:30]
    node _io_result_2_T = asUInt(alu.io_out_tpu_2) @[src/test/scala/VPU1Route_Test.scala 89:69]
    node _io_result_2_T_1 = mux(direct, qa.io_out_vec_2, _io_result_2_T) @[src/test/scala/VPU1Route_Test.scala 89:24]
    node _qa_io_in_valid_3_T = mux(direct, alu.io_out_direct_valid_3, io_tpu_valid) @[src/test/scala/VPU1Route_Test.scala 85:29]
    node _alu_io_in_vec_a_3_T = asSInt(qa.io_out_vec_3) @[src/test/scala/VPU1Route_Test.scala 86:66]
    node _alu_io_in_vec_a_3_T_1 = mux(direct, io_ub_3, _alu_io_in_vec_a_3_T) @[src/test/scala/VPU1Route_Test.scala 86:30]
    node _alu_io_in_vec_b_3_T = mux(direct, io_wb_3, vbResponse_3) @[src/test/scala/VPU1Route_Test.scala 87:30]
    node _alu_io_in_valid_3_T = and(io_ub_valid, io_wb_valid) @[src/test/scala/VPU1Route_Test.scala 88:51]
    node _alu_io_in_valid_3_T_1 = mux(direct, _alu_io_in_valid_3_T, qa.io_out_valid_3) @[src/test/scala/VPU1Route_Test.scala 88:30]
    node _io_result_3_T = asUInt(alu.io_out_tpu_3) @[src/test/scala/VPU1Route_Test.scala 89:69]
    node _io_result_3_T_1 = mux(direct, qa.io_out_vec_3, _io_result_3_T) @[src/test/scala/VPU1Route_Test.scala 89:24]
    node _qa_io_in_valid_4_T = mux(direct, alu.io_out_direct_valid_4, io_tpu_valid) @[src/test/scala/VPU1Route_Test.scala 85:29]
    node _alu_io_in_vec_a_4_T = asSInt(qa.io_out_vec_4) @[src/test/scala/VPU1Route_Test.scala 86:66]
    node _alu_io_in_vec_a_4_T_1 = mux(direct, io_ub_4, _alu_io_in_vec_a_4_T) @[src/test/scala/VPU1Route_Test.scala 86:30]
    node _alu_io_in_vec_b_4_T = mux(direct, io_wb_4, vbResponse_4) @[src/test/scala/VPU1Route_Test.scala 87:30]
    node _alu_io_in_valid_4_T = and(io_ub_valid, io_wb_valid) @[src/test/scala/VPU1Route_Test.scala 88:51]
    node _alu_io_in_valid_4_T_1 = mux(direct, _alu_io_in_valid_4_T, qa.io_out_valid_4) @[src/test/scala/VPU1Route_Test.scala 88:30]
    node _io_result_4_T = asUInt(alu.io_out_tpu_4) @[src/test/scala/VPU1Route_Test.scala 89:69]
    node _io_result_4_T_1 = mux(direct, qa.io_out_vec_4, _io_result_4_T) @[src/test/scala/VPU1Route_Test.scala 89:24]
    node _qa_io_in_valid_5_T = mux(direct, alu.io_out_direct_valid_5, io_tpu_valid) @[src/test/scala/VPU1Route_Test.scala 85:29]
    node _alu_io_in_vec_a_5_T = asSInt(qa.io_out_vec_5) @[src/test/scala/VPU1Route_Test.scala 86:66]
    node _alu_io_in_vec_a_5_T_1 = mux(direct, io_ub_5, _alu_io_in_vec_a_5_T) @[src/test/scala/VPU1Route_Test.scala 86:30]
    node _alu_io_in_vec_b_5_T = mux(direct, io_wb_5, vbResponse_5) @[src/test/scala/VPU1Route_Test.scala 87:30]
    node _alu_io_in_valid_5_T = and(io_ub_valid, io_wb_valid) @[src/test/scala/VPU1Route_Test.scala 88:51]
    node _alu_io_in_valid_5_T_1 = mux(direct, _alu_io_in_valid_5_T, qa.io_out_valid_5) @[src/test/scala/VPU1Route_Test.scala 88:30]
    node _io_result_5_T = asUInt(alu.io_out_tpu_5) @[src/test/scala/VPU1Route_Test.scala 89:69]
    node _io_result_5_T_1 = mux(direct, qa.io_out_vec_5, _io_result_5_T) @[src/test/scala/VPU1Route_Test.scala 89:24]
    node _qa_io_in_valid_6_T = mux(direct, alu.io_out_direct_valid_6, io_tpu_valid) @[src/test/scala/VPU1Route_Test.scala 85:29]
    node _alu_io_in_vec_a_6_T = asSInt(qa.io_out_vec_6) @[src/test/scala/VPU1Route_Test.scala 86:66]
    node _alu_io_in_vec_a_6_T_1 = mux(direct, io_ub_6, _alu_io_in_vec_a_6_T) @[src/test/scala/VPU1Route_Test.scala 86:30]
    node _alu_io_in_vec_b_6_T = mux(direct, io_wb_6, vbResponse_6) @[src/test/scala/VPU1Route_Test.scala 87:30]
    node _alu_io_in_valid_6_T = and(io_ub_valid, io_wb_valid) @[src/test/scala/VPU1Route_Test.scala 88:51]
    node _alu_io_in_valid_6_T_1 = mux(direct, _alu_io_in_valid_6_T, qa.io_out_valid_6) @[src/test/scala/VPU1Route_Test.scala 88:30]
    node _io_result_6_T = asUInt(alu.io_out_tpu_6) @[src/test/scala/VPU1Route_Test.scala 89:69]
    node _io_result_6_T_1 = mux(direct, qa.io_out_vec_6, _io_result_6_T) @[src/test/scala/VPU1Route_Test.scala 89:24]
    node _qa_io_in_valid_7_T = mux(direct, alu.io_out_direct_valid_7, io_tpu_valid) @[src/test/scala/VPU1Route_Test.scala 85:29]
    node _alu_io_in_vec_a_7_T = asSInt(qa.io_out_vec_7) @[src/test/scala/VPU1Route_Test.scala 86:66]
    node _alu_io_in_vec_a_7_T_1 = mux(direct, io_ub_7, _alu_io_in_vec_a_7_T) @[src/test/scala/VPU1Route_Test.scala 86:30]
    node _alu_io_in_vec_b_7_T = mux(direct, io_wb_7, vbResponse_7) @[src/test/scala/VPU1Route_Test.scala 87:30]
    node _alu_io_in_valid_7_T = and(io_ub_valid, io_wb_valid) @[src/test/scala/VPU1Route_Test.scala 88:51]
    node _alu_io_in_valid_7_T_1 = mux(direct, _alu_io_in_valid_7_T, qa.io_out_valid_7) @[src/test/scala/VPU1Route_Test.scala 88:30]
    node _io_result_7_T = asUInt(alu.io_out_tpu_7) @[src/test/scala/VPU1Route_Test.scala 89:69]
    node _io_result_7_T_1 = mux(direct, qa.io_out_vec_7, _io_result_7_T) @[src/test/scala/VPU1Route_Test.scala 89:24]
    node _qa_io_in_valid_8_T = mux(direct, alu.io_out_direct_valid_8, io_tpu_valid) @[src/test/scala/VPU1Route_Test.scala 85:29]
    node _alu_io_in_vec_a_8_T = asSInt(qa.io_out_vec_8) @[src/test/scala/VPU1Route_Test.scala 86:66]
    node _alu_io_in_vec_a_8_T_1 = mux(direct, io_ub_8, _alu_io_in_vec_a_8_T) @[src/test/scala/VPU1Route_Test.scala 86:30]
    node _alu_io_in_vec_b_8_T = mux(direct, io_wb_8, vbResponse_8) @[src/test/scala/VPU1Route_Test.scala 87:30]
    node _alu_io_in_valid_8_T = and(io_ub_valid, io_wb_valid) @[src/test/scala/VPU1Route_Test.scala 88:51]
    node _alu_io_in_valid_8_T_1 = mux(direct, _alu_io_in_valid_8_T, qa.io_out_valid_8) @[src/test/scala/VPU1Route_Test.scala 88:30]
    node _io_result_8_T = asUInt(alu.io_out_tpu_8) @[src/test/scala/VPU1Route_Test.scala 89:69]
    node _io_result_8_T_1 = mux(direct, qa.io_out_vec_8, _io_result_8_T) @[src/test/scala/VPU1Route_Test.scala 89:24]
    node _qa_io_in_valid_9_T = mux(direct, alu.io_out_direct_valid_9, io_tpu_valid) @[src/test/scala/VPU1Route_Test.scala 85:29]
    node _alu_io_in_vec_a_9_T = asSInt(qa.io_out_vec_9) @[src/test/scala/VPU1Route_Test.scala 86:66]
    node _alu_io_in_vec_a_9_T_1 = mux(direct, io_ub_9, _alu_io_in_vec_a_9_T) @[src/test/scala/VPU1Route_Test.scala 86:30]
    node _alu_io_in_vec_b_9_T = mux(direct, io_wb_9, vbResponse_9) @[src/test/scala/VPU1Route_Test.scala 87:30]
    node _alu_io_in_valid_9_T = and(io_ub_valid, io_wb_valid) @[src/test/scala/VPU1Route_Test.scala 88:51]
    node _alu_io_in_valid_9_T_1 = mux(direct, _alu_io_in_valid_9_T, qa.io_out_valid_9) @[src/test/scala/VPU1Route_Test.scala 88:30]
    node _io_result_9_T = asUInt(alu.io_out_tpu_9) @[src/test/scala/VPU1Route_Test.scala 89:69]
    node _io_result_9_T_1 = mux(direct, qa.io_out_vec_9, _io_result_9_T) @[src/test/scala/VPU1Route_Test.scala 89:24]
    node _qa_io_in_valid_10_T = mux(direct, alu.io_out_direct_valid_10, io_tpu_valid) @[src/test/scala/VPU1Route_Test.scala 85:29]
    node _alu_io_in_vec_a_10_T = asSInt(qa.io_out_vec_10) @[src/test/scala/VPU1Route_Test.scala 86:66]
    node _alu_io_in_vec_a_10_T_1 = mux(direct, io_ub_10, _alu_io_in_vec_a_10_T) @[src/test/scala/VPU1Route_Test.scala 86:30]
    node _alu_io_in_vec_b_10_T = mux(direct, io_wb_10, vbResponse_10) @[src/test/scala/VPU1Route_Test.scala 87:30]
    node _alu_io_in_valid_10_T = and(io_ub_valid, io_wb_valid) @[src/test/scala/VPU1Route_Test.scala 88:51]
    node _alu_io_in_valid_10_T_1 = mux(direct, _alu_io_in_valid_10_T, qa.io_out_valid_10) @[src/test/scala/VPU1Route_Test.scala 88:30]
    node _io_result_10_T = asUInt(alu.io_out_tpu_10) @[src/test/scala/VPU1Route_Test.scala 89:69]
    node _io_result_10_T_1 = mux(direct, qa.io_out_vec_10, _io_result_10_T) @[src/test/scala/VPU1Route_Test.scala 89:24]
    node _qa_io_in_valid_11_T = mux(direct, alu.io_out_direct_valid_11, io_tpu_valid) @[src/test/scala/VPU1Route_Test.scala 85:29]
    node _alu_io_in_vec_a_11_T = asSInt(qa.io_out_vec_11) @[src/test/scala/VPU1Route_Test.scala 86:66]
    node _alu_io_in_vec_a_11_T_1 = mux(direct, io_ub_11, _alu_io_in_vec_a_11_T) @[src/test/scala/VPU1Route_Test.scala 86:30]
    node _alu_io_in_vec_b_11_T = mux(direct, io_wb_11, vbResponse_11) @[src/test/scala/VPU1Route_Test.scala 87:30]
    node _alu_io_in_valid_11_T = and(io_ub_valid, io_wb_valid) @[src/test/scala/VPU1Route_Test.scala 88:51]
    node _alu_io_in_valid_11_T_1 = mux(direct, _alu_io_in_valid_11_T, qa.io_out_valid_11) @[src/test/scala/VPU1Route_Test.scala 88:30]
    node _io_result_11_T = asUInt(alu.io_out_tpu_11) @[src/test/scala/VPU1Route_Test.scala 89:69]
    node _io_result_11_T_1 = mux(direct, qa.io_out_vec_11, _io_result_11_T) @[src/test/scala/VPU1Route_Test.scala 89:24]
    node _qa_io_in_valid_12_T = mux(direct, alu.io_out_direct_valid_12, io_tpu_valid) @[src/test/scala/VPU1Route_Test.scala 85:29]
    node _alu_io_in_vec_a_12_T = asSInt(qa.io_out_vec_12) @[src/test/scala/VPU1Route_Test.scala 86:66]
    node _alu_io_in_vec_a_12_T_1 = mux(direct, io_ub_12, _alu_io_in_vec_a_12_T) @[src/test/scala/VPU1Route_Test.scala 86:30]
    node _alu_io_in_vec_b_12_T = mux(direct, io_wb_12, vbResponse_12) @[src/test/scala/VPU1Route_Test.scala 87:30]
    node _alu_io_in_valid_12_T = and(io_ub_valid, io_wb_valid) @[src/test/scala/VPU1Route_Test.scala 88:51]
    node _alu_io_in_valid_12_T_1 = mux(direct, _alu_io_in_valid_12_T, qa.io_out_valid_12) @[src/test/scala/VPU1Route_Test.scala 88:30]
    node _io_result_12_T = asUInt(alu.io_out_tpu_12) @[src/test/scala/VPU1Route_Test.scala 89:69]
    node _io_result_12_T_1 = mux(direct, qa.io_out_vec_12, _io_result_12_T) @[src/test/scala/VPU1Route_Test.scala 89:24]
    node _qa_io_in_valid_13_T = mux(direct, alu.io_out_direct_valid_13, io_tpu_valid) @[src/test/scala/VPU1Route_Test.scala 85:29]
    node _alu_io_in_vec_a_13_T = asSInt(qa.io_out_vec_13) @[src/test/scala/VPU1Route_Test.scala 86:66]
    node _alu_io_in_vec_a_13_T_1 = mux(direct, io_ub_13, _alu_io_in_vec_a_13_T) @[src/test/scala/VPU1Route_Test.scala 86:30]
    node _alu_io_in_vec_b_13_T = mux(direct, io_wb_13, vbResponse_13) @[src/test/scala/VPU1Route_Test.scala 87:30]
    node _alu_io_in_valid_13_T = and(io_ub_valid, io_wb_valid) @[src/test/scala/VPU1Route_Test.scala 88:51]
    node _alu_io_in_valid_13_T_1 = mux(direct, _alu_io_in_valid_13_T, qa.io_out_valid_13) @[src/test/scala/VPU1Route_Test.scala 88:30]
    node _io_result_13_T = asUInt(alu.io_out_tpu_13) @[src/test/scala/VPU1Route_Test.scala 89:69]
    node _io_result_13_T_1 = mux(direct, qa.io_out_vec_13, _io_result_13_T) @[src/test/scala/VPU1Route_Test.scala 89:24]
    node _qa_io_in_valid_14_T = mux(direct, alu.io_out_direct_valid_14, io_tpu_valid) @[src/test/scala/VPU1Route_Test.scala 85:29]
    node _alu_io_in_vec_a_14_T = asSInt(qa.io_out_vec_14) @[src/test/scala/VPU1Route_Test.scala 86:66]
    node _alu_io_in_vec_a_14_T_1 = mux(direct, io_ub_14, _alu_io_in_vec_a_14_T) @[src/test/scala/VPU1Route_Test.scala 86:30]
    node _alu_io_in_vec_b_14_T = mux(direct, io_wb_14, vbResponse_14) @[src/test/scala/VPU1Route_Test.scala 87:30]
    node _alu_io_in_valid_14_T = and(io_ub_valid, io_wb_valid) @[src/test/scala/VPU1Route_Test.scala 88:51]
    node _alu_io_in_valid_14_T_1 = mux(direct, _alu_io_in_valid_14_T, qa.io_out_valid_14) @[src/test/scala/VPU1Route_Test.scala 88:30]
    node _io_result_14_T = asUInt(alu.io_out_tpu_14) @[src/test/scala/VPU1Route_Test.scala 89:69]
    node _io_result_14_T_1 = mux(direct, qa.io_out_vec_14, _io_result_14_T) @[src/test/scala/VPU1Route_Test.scala 89:24]
    node _qa_io_in_valid_15_T = mux(direct, alu.io_out_direct_valid_15, io_tpu_valid) @[src/test/scala/VPU1Route_Test.scala 85:29]
    node _alu_io_in_vec_a_15_T = asSInt(qa.io_out_vec_15) @[src/test/scala/VPU1Route_Test.scala 86:66]
    node _alu_io_in_vec_a_15_T_1 = mux(direct, io_ub_15, _alu_io_in_vec_a_15_T) @[src/test/scala/VPU1Route_Test.scala 86:30]
    node _alu_io_in_vec_b_15_T = mux(direct, io_wb_15, vbResponse_15) @[src/test/scala/VPU1Route_Test.scala 87:30]
    node _alu_io_in_valid_15_T = and(io_ub_valid, io_wb_valid) @[src/test/scala/VPU1Route_Test.scala 88:51]
    node _alu_io_in_valid_15_T_1 = mux(direct, _alu_io_in_valid_15_T, qa.io_out_valid_15) @[src/test/scala/VPU1Route_Test.scala 88:30]
    node _io_result_15_T = asUInt(alu.io_out_tpu_15) @[src/test/scala/VPU1Route_Test.scala 89:69]
    node _io_result_15_T_1 = mux(direct, qa.io_out_vec_15, _io_result_15_T) @[src/test/scala/VPU1Route_Test.scala 89:24]
    node valid = mux(direct, qa.io_out_valid_0, alu.io_out_tpu_valid_0) @[src/test/scala/VPU1Route_Test.scala 91:18]
    node _io_vb_valid_T = eq(route, UInt<2>("h1")) @[src/test/scala/VPU1Route_Test.scala 93:33]
    node _io_vb_valid_T_1 = and(valid, _io_vb_valid_T) @[src/test/scala/VPU1Route_Test.scala 93:24]
    node _io_vpu2_valid_T = eq(route, UInt<2>("h2")) @[src/test/scala/VPU1Route_Test.scala 94:35]
    node _io_vpu2_valid_T_1 = and(valid, _io_vpu2_valid_T) @[src/test/scala/VPU1Route_Test.scala 94:26]
    node _io_compute_valid_T = eq(route, UInt<2>("h3")) @[src/test/scala/VPU1Route_Test.scala 95:38]
    node _io_compute_valid_T_1 = and(valid, _io_compute_valid_T) @[src/test/scala/VPU1Route_Test.scala 95:29]
    node _WIRE_0 = UInt<32>("h0") @[src/test/scala/VPU1Route_Test.scala 72:{34,34}]
    node _WIRE_1 = UInt<32>("h0") @[src/test/scala/VPU1Route_Test.scala 72:{34,34}]
    node _WIRE_2 = UInt<32>("h0") @[src/test/scala/VPU1Route_Test.scala 72:{34,34}]
    node _WIRE_3 = UInt<32>("h0") @[src/test/scala/VPU1Route_Test.scala 72:{34,34}]
    node _WIRE_4 = UInt<32>("h0") @[src/test/scala/VPU1Route_Test.scala 72:{34,34}]
    node _WIRE_5 = UInt<32>("h0") @[src/test/scala/VPU1Route_Test.scala 72:{34,34}]
    node _WIRE_6 = UInt<32>("h0") @[src/test/scala/VPU1Route_Test.scala 72:{34,34}]
    node _WIRE_7 = UInt<32>("h0") @[src/test/scala/VPU1Route_Test.scala 72:{34,34}]
    node _WIRE_8 = UInt<32>("h0") @[src/test/scala/VPU1Route_Test.scala 72:{34,34}]
    node _WIRE_9 = UInt<32>("h0") @[src/test/scala/VPU1Route_Test.scala 72:{34,34}]
    node _WIRE_10 = UInt<32>("h0") @[src/test/scala/VPU1Route_Test.scala 72:{34,34}]
    node _WIRE_11 = UInt<32>("h0") @[src/test/scala/VPU1Route_Test.scala 72:{34,34}]
    node _WIRE_12 = UInt<32>("h0") @[src/test/scala/VPU1Route_Test.scala 72:{34,34}]
    node _WIRE_13 = UInt<32>("h0") @[src/test/scala/VPU1Route_Test.scala 72:{34,34}]
    node _WIRE_14 = UInt<32>("h0") @[src/test/scala/VPU1Route_Test.scala 72:{34,34}]
    node _WIRE_15 = UInt<32>("h0") @[src/test/scala/VPU1Route_Test.scala 72:{34,34}]
    io_vb_read_req <= _io_vb_read_req_T_3 @[src/test/scala/VPU1Route_Test.scala 78:18]
    io_result_0 <= _io_result_0_T_1 @[src/test/scala/VPU1Route_Test.scala 89:18]
    io_result_1 <= _io_result_1_T_1 @[src/test/scala/VPU1Route_Test.scala 89:18]
    io_result_2 <= _io_result_2_T_1 @[src/test/scala/VPU1Route_Test.scala 89:18]
    io_result_3 <= _io_result_3_T_1 @[src/test/scala/VPU1Route_Test.scala 89:18]
    io_result_4 <= _io_result_4_T_1 @[src/test/scala/VPU1Route_Test.scala 89:18]
    io_result_5 <= _io_result_5_T_1 @[src/test/scala/VPU1Route_Test.scala 89:18]
    io_result_6 <= _io_result_6_T_1 @[src/test/scala/VPU1Route_Test.scala 89:18]
    io_result_7 <= _io_result_7_T_1 @[src/test/scala/VPU1Route_Test.scala 89:18]
    io_result_8 <= _io_result_8_T_1 @[src/test/scala/VPU1Route_Test.scala 89:18]
    io_result_9 <= _io_result_9_T_1 @[src/test/scala/VPU1Route_Test.scala 89:18]
    io_result_10 <= _io_result_10_T_1 @[src/test/scala/VPU1Route_Test.scala 89:18]
    io_result_11 <= _io_result_11_T_1 @[src/test/scala/VPU1Route_Test.scala 89:18]
    io_result_12 <= _io_result_12_T_1 @[src/test/scala/VPU1Route_Test.scala 89:18]
    io_result_13 <= _io_result_13_T_1 @[src/test/scala/VPU1Route_Test.scala 89:18]
    io_result_14 <= _io_result_14_T_1 @[src/test/scala/VPU1Route_Test.scala 89:18]
    io_result_15 <= _io_result_15_T_1 @[src/test/scala/VPU1Route_Test.scala 89:18]
    io_vb_valid <= _io_vb_valid_T_1 @[src/test/scala/VPU1Route_Test.scala 93:15]
    io_vpu2_valid <= _io_vpu2_valid_T_1 @[src/test/scala/VPU1Route_Test.scala 94:17]
    io_compute_valid <= _io_compute_valid_T_1 @[src/test/scala/VPU1Route_Test.scala 95:20]
    io_result_valid <= valid @[src/test/scala/VPU1Route_Test.scala 92:19]
    io_drained <= _io_drained_T @[src/test/scala/VPU1Route_Test.scala 48:14]
    io_control_alert <= _io_control_alert_T_3 @[src/test/scala/VPU1Route_Test.scala 57:20]
    io_sync_alert <= qa.io_sync_alert @[src/test/scala/VPU1Route_Test.scala 96:17]
    io_qparam_req <= qa.io_qparam_req_line @[src/test/scala/VPU1Route_Test.scala 97:17]
    qa.clock <= clock
    qa.reset <= reset
    qa.io_in_tpu_0 <= io_tpu_0 @[src/test/scala/VPU1Route_Test.scala 64:16]
    qa.io_in_tpu_1 <= io_tpu_1 @[src/test/scala/VPU1Route_Test.scala 64:16]
    qa.io_in_tpu_2 <= io_tpu_2 @[src/test/scala/VPU1Route_Test.scala 64:16]
    qa.io_in_tpu_3 <= io_tpu_3 @[src/test/scala/VPU1Route_Test.scala 64:16]
    qa.io_in_tpu_4 <= io_tpu_4 @[src/test/scala/VPU1Route_Test.scala 64:16]
    qa.io_in_tpu_5 <= io_tpu_5 @[src/test/scala/VPU1Route_Test.scala 64:16]
    qa.io_in_tpu_6 <= io_tpu_6 @[src/test/scala/VPU1Route_Test.scala 64:16]
    qa.io_in_tpu_7 <= io_tpu_7 @[src/test/scala/VPU1Route_Test.scala 64:16]
    qa.io_in_tpu_8 <= io_tpu_8 @[src/test/scala/VPU1Route_Test.scala 64:16]
    qa.io_in_tpu_9 <= io_tpu_9 @[src/test/scala/VPU1Route_Test.scala 64:16]
    qa.io_in_tpu_10 <= io_tpu_10 @[src/test/scala/VPU1Route_Test.scala 64:16]
    qa.io_in_tpu_11 <= io_tpu_11 @[src/test/scala/VPU1Route_Test.scala 64:16]
    qa.io_in_tpu_12 <= io_tpu_12 @[src/test/scala/VPU1Route_Test.scala 64:16]
    qa.io_in_tpu_13 <= io_tpu_13 @[src/test/scala/VPU1Route_Test.scala 64:16]
    qa.io_in_tpu_14 <= io_tpu_14 @[src/test/scala/VPU1Route_Test.scala 64:16]
    qa.io_in_tpu_15 <= io_tpu_15 @[src/test/scala/VPU1Route_Test.scala 64:16]
    qa.io_in_direct_0 <= alu.io_out_direct_0 @[src/test/scala/VPU1Route_Test.scala 65:19]
    qa.io_in_direct_1 <= alu.io_out_direct_1 @[src/test/scala/VPU1Route_Test.scala 65:19]
    qa.io_in_direct_2 <= alu.io_out_direct_2 @[src/test/scala/VPU1Route_Test.scala 65:19]
    qa.io_in_direct_3 <= alu.io_out_direct_3 @[src/test/scala/VPU1Route_Test.scala 65:19]
    qa.io_in_direct_4 <= alu.io_out_direct_4 @[src/test/scala/VPU1Route_Test.scala 65:19]
    qa.io_in_direct_5 <= alu.io_out_direct_5 @[src/test/scala/VPU1Route_Test.scala 65:19]
    qa.io_in_direct_6 <= alu.io_out_direct_6 @[src/test/scala/VPU1Route_Test.scala 65:19]
    qa.io_in_direct_7 <= alu.io_out_direct_7 @[src/test/scala/VPU1Route_Test.scala 65:19]
    qa.io_in_direct_8 <= alu.io_out_direct_8 @[src/test/scala/VPU1Route_Test.scala 65:19]
    qa.io_in_direct_9 <= alu.io_out_direct_9 @[src/test/scala/VPU1Route_Test.scala 65:19]
    qa.io_in_direct_10 <= alu.io_out_direct_10 @[src/test/scala/VPU1Route_Test.scala 65:19]
    qa.io_in_direct_11 <= alu.io_out_direct_11 @[src/test/scala/VPU1Route_Test.scala 65:19]
    qa.io_in_direct_12 <= alu.io_out_direct_12 @[src/test/scala/VPU1Route_Test.scala 65:19]
    qa.io_in_direct_13 <= alu.io_out_direct_13 @[src/test/scala/VPU1Route_Test.scala 65:19]
    qa.io_in_direct_14 <= alu.io_out_direct_14 @[src/test/scala/VPU1Route_Test.scala 65:19]
    qa.io_in_direct_15 <= alu.io_out_direct_15 @[src/test/scala/VPU1Route_Test.scala 65:19]
    qa.io_input_mode <= mode @[src/test/scala/VPU1Route_Test.scala 63:20]
    qa.io_in_valid_0 <= _qa_io_in_valid_0_T @[src/test/scala/VPU1Route_Test.scala 85:23]
    qa.io_in_valid_1 <= _qa_io_in_valid_1_T @[src/test/scala/VPU1Route_Test.scala 85:23]
    qa.io_in_valid_2 <= _qa_io_in_valid_2_T @[src/test/scala/VPU1Route_Test.scala 85:23]
    qa.io_in_valid_3 <= _qa_io_in_valid_3_T @[src/test/scala/VPU1Route_Test.scala 85:23]
    qa.io_in_valid_4 <= _qa_io_in_valid_4_T @[src/test/scala/VPU1Route_Test.scala 85:23]
    qa.io_in_valid_5 <= _qa_io_in_valid_5_T @[src/test/scala/VPU1Route_Test.scala 85:23]
    qa.io_in_valid_6 <= _qa_io_in_valid_6_T @[src/test/scala/VPU1Route_Test.scala 85:23]
    qa.io_in_valid_7 <= _qa_io_in_valid_7_T @[src/test/scala/VPU1Route_Test.scala 85:23]
    qa.io_in_valid_8 <= _qa_io_in_valid_8_T @[src/test/scala/VPU1Route_Test.scala 85:23]
    qa.io_in_valid_9 <= _qa_io_in_valid_9_T @[src/test/scala/VPU1Route_Test.scala 85:23]
    qa.io_in_valid_10 <= _qa_io_in_valid_10_T @[src/test/scala/VPU1Route_Test.scala 85:23]
    qa.io_in_valid_11 <= _qa_io_in_valid_11_T @[src/test/scala/VPU1Route_Test.scala 85:23]
    qa.io_in_valid_12 <= _qa_io_in_valid_12_T @[src/test/scala/VPU1Route_Test.scala 85:23]
    qa.io_in_valid_13 <= _qa_io_in_valid_13_T @[src/test/scala/VPU1Route_Test.scala 85:23]
    qa.io_in_valid_14 <= _qa_io_in_valid_14_T @[src/test/scala/VPU1Route_Test.scala 85:23]
    qa.io_in_valid_15 <= _qa_io_in_valid_15_T @[src/test/scala/VPU1Route_Test.scala 85:23]
    qa.io_param_mode <= UInt<1>("h0") @[src/test/scala/VPU1Route_Test.scala 66:20]
    qa.io_matrix_param <= io_matrix_param @[src/test/scala/VPU1Route_Test.scala 67:22]
    qa.io_act_mask <= io_act_mask @[src/test/scala/VPU1Route_Test.scala 68:18]
    qa.io_fusion_second <= io_fusion_second @[src/test/scala/VPU1Route_Test.scala 69:23]
    qa.io_stall <= io_stall @[src/test/scala/VPU1Route_Test.scala 70:15]
    qa.io_soft_reset <= UInt<1>("h0") @[src/test/scala/VPU1Route_Test.scala 71:20]
    qa.io_qparam_line_in_0 <= _WIRE_0 @[src/test/scala/VPU1Route_Test.scala 72:24]
    qa.io_qparam_line_in_1 <= _WIRE_1 @[src/test/scala/VPU1Route_Test.scala 72:24]
    qa.io_qparam_line_in_2 <= _WIRE_2 @[src/test/scala/VPU1Route_Test.scala 72:24]
    qa.io_qparam_line_in_3 <= _WIRE_3 @[src/test/scala/VPU1Route_Test.scala 72:24]
    qa.io_qparam_line_in_4 <= _WIRE_4 @[src/test/scala/VPU1Route_Test.scala 72:24]
    qa.io_qparam_line_in_5 <= _WIRE_5 @[src/test/scala/VPU1Route_Test.scala 72:24]
    qa.io_qparam_line_in_6 <= _WIRE_6 @[src/test/scala/VPU1Route_Test.scala 72:24]
    qa.io_qparam_line_in_7 <= _WIRE_7 @[src/test/scala/VPU1Route_Test.scala 72:24]
    qa.io_qparam_line_in_8 <= _WIRE_8 @[src/test/scala/VPU1Route_Test.scala 72:24]
    qa.io_qparam_line_in_9 <= _WIRE_9 @[src/test/scala/VPU1Route_Test.scala 72:24]
    qa.io_qparam_line_in_10 <= _WIRE_10 @[src/test/scala/VPU1Route_Test.scala 72:24]
    qa.io_qparam_line_in_11 <= _WIRE_11 @[src/test/scala/VPU1Route_Test.scala 72:24]
    qa.io_qparam_line_in_12 <= _WIRE_12 @[src/test/scala/VPU1Route_Test.scala 72:24]
    qa.io_qparam_line_in_13 <= _WIRE_13 @[src/test/scala/VPU1Route_Test.scala 72:24]
    qa.io_qparam_line_in_14 <= _WIRE_14 @[src/test/scala/VPU1Route_Test.scala 72:24]
    qa.io_qparam_line_in_15 <= _WIRE_15 @[src/test/scala/VPU1Route_Test.scala 72:24]
    qa.io_qparam_line_valid <= UInt<1>("h0") @[src/test/scala/VPU1Route_Test.scala 73:27]
    qa.io_lut_wr_en <= io_lut_wr_en @[src/test/scala/VPU1Route_Test.scala 74:19]
    qa.io_lut_wr_addr <= io_lut_wr_addr @[src/test/scala/VPU1Route_Test.scala 75:21]
    qa.io_lut_wr_data_0 <= io_lut_wr_data_0 @[src/test/scala/VPU1Route_Test.scala 76:21]
    qa.io_lut_wr_data_1 <= io_lut_wr_data_1 @[src/test/scala/VPU1Route_Test.scala 76:21]
    qa.io_lut_wr_data_2 <= io_lut_wr_data_2 @[src/test/scala/VPU1Route_Test.scala 76:21]
    qa.io_lut_wr_data_3 <= io_lut_wr_data_3 @[src/test/scala/VPU1Route_Test.scala 76:21]
    qa.io_lut_wr_data_4 <= io_lut_wr_data_4 @[src/test/scala/VPU1Route_Test.scala 76:21]
    qa.io_lut_wr_data_5 <= io_lut_wr_data_5 @[src/test/scala/VPU1Route_Test.scala 76:21]
    qa.io_lut_wr_data_6 <= io_lut_wr_data_6 @[src/test/scala/VPU1Route_Test.scala 76:21]
    qa.io_lut_wr_data_7 <= io_lut_wr_data_7 @[src/test/scala/VPU1Route_Test.scala 76:21]
    qa.io_lut_wr_data_8 <= io_lut_wr_data_8 @[src/test/scala/VPU1Route_Test.scala 76:21]
    qa.io_lut_wr_data_9 <= io_lut_wr_data_9 @[src/test/scala/VPU1Route_Test.scala 76:21]
    qa.io_lut_wr_data_10 <= io_lut_wr_data_10 @[src/test/scala/VPU1Route_Test.scala 76:21]
    qa.io_lut_wr_data_11 <= io_lut_wr_data_11 @[src/test/scala/VPU1Route_Test.scala 76:21]
    qa.io_lut_wr_data_12 <= io_lut_wr_data_12 @[src/test/scala/VPU1Route_Test.scala 76:21]
    qa.io_lut_wr_data_13 <= io_lut_wr_data_13 @[src/test/scala/VPU1Route_Test.scala 76:21]
    qa.io_lut_wr_data_14 <= io_lut_wr_data_14 @[src/test/scala/VPU1Route_Test.scala 76:21]
    qa.io_lut_wr_data_15 <= io_lut_wr_data_15 @[src/test/scala/VPU1Route_Test.scala 76:21]
    qa.io_lut_wr_data_16 <= io_lut_wr_data_16 @[src/test/scala/VPU1Route_Test.scala 76:21]
    qa.io_lut_wr_data_17 <= io_lut_wr_data_17 @[src/test/scala/VPU1Route_Test.scala 76:21]
    qa.io_lut_wr_data_18 <= io_lut_wr_data_18 @[src/test/scala/VPU1Route_Test.scala 76:21]
    qa.io_lut_wr_data_19 <= io_lut_wr_data_19 @[src/test/scala/VPU1Route_Test.scala 76:21]
    qa.io_lut_wr_data_20 <= io_lut_wr_data_20 @[src/test/scala/VPU1Route_Test.scala 76:21]
    qa.io_lut_wr_data_21 <= io_lut_wr_data_21 @[src/test/scala/VPU1Route_Test.scala 76:21]
    qa.io_lut_wr_data_22 <= io_lut_wr_data_22 @[src/test/scala/VPU1Route_Test.scala 76:21]
    qa.io_lut_wr_data_23 <= io_lut_wr_data_23 @[src/test/scala/VPU1Route_Test.scala 76:21]
    qa.io_lut_wr_data_24 <= io_lut_wr_data_24 @[src/test/scala/VPU1Route_Test.scala 76:21]
    qa.io_lut_wr_data_25 <= io_lut_wr_data_25 @[src/test/scala/VPU1Route_Test.scala 76:21]
    qa.io_lut_wr_data_26 <= io_lut_wr_data_26 @[src/test/scala/VPU1Route_Test.scala 76:21]
    qa.io_lut_wr_data_27 <= io_lut_wr_data_27 @[src/test/scala/VPU1Route_Test.scala 76:21]
    qa.io_lut_wr_data_28 <= io_lut_wr_data_28 @[src/test/scala/VPU1Route_Test.scala 76:21]
    qa.io_lut_wr_data_29 <= io_lut_wr_data_29 @[src/test/scala/VPU1Route_Test.scala 76:21]
    qa.io_lut_wr_data_30 <= io_lut_wr_data_30 @[src/test/scala/VPU1Route_Test.scala 76:21]
    qa.io_lut_wr_data_31 <= io_lut_wr_data_31 @[src/test/scala/VPU1Route_Test.scala 76:21]
    alu.clock <= clock
    alu.reset <= reset
    alu.io_in_vec_a_0 <= _alu_io_in_vec_a_0_T_1 @[src/test/scala/VPU1Route_Test.scala 86:24]
    alu.io_in_vec_a_1 <= _alu_io_in_vec_a_1_T_1 @[src/test/scala/VPU1Route_Test.scala 86:24]
    alu.io_in_vec_a_2 <= _alu_io_in_vec_a_2_T_1 @[src/test/scala/VPU1Route_Test.scala 86:24]
    alu.io_in_vec_a_3 <= _alu_io_in_vec_a_3_T_1 @[src/test/scala/VPU1Route_Test.scala 86:24]
    alu.io_in_vec_a_4 <= _alu_io_in_vec_a_4_T_1 @[src/test/scala/VPU1Route_Test.scala 86:24]
    alu.io_in_vec_a_5 <= _alu_io_in_vec_a_5_T_1 @[src/test/scala/VPU1Route_Test.scala 86:24]
    alu.io_in_vec_a_6 <= _alu_io_in_vec_a_6_T_1 @[src/test/scala/VPU1Route_Test.scala 86:24]
    alu.io_in_vec_a_7 <= _alu_io_in_vec_a_7_T_1 @[src/test/scala/VPU1Route_Test.scala 86:24]
    alu.io_in_vec_a_8 <= _alu_io_in_vec_a_8_T_1 @[src/test/scala/VPU1Route_Test.scala 86:24]
    alu.io_in_vec_a_9 <= _alu_io_in_vec_a_9_T_1 @[src/test/scala/VPU1Route_Test.scala 86:24]
    alu.io_in_vec_a_10 <= _alu_io_in_vec_a_10_T_1 @[src/test/scala/VPU1Route_Test.scala 86:24]
    alu.io_in_vec_a_11 <= _alu_io_in_vec_a_11_T_1 @[src/test/scala/VPU1Route_Test.scala 86:24]
    alu.io_in_vec_a_12 <= _alu_io_in_vec_a_12_T_1 @[src/test/scala/VPU1Route_Test.scala 86:24]
    alu.io_in_vec_a_13 <= _alu_io_in_vec_a_13_T_1 @[src/test/scala/VPU1Route_Test.scala 86:24]
    alu.io_in_vec_a_14 <= _alu_io_in_vec_a_14_T_1 @[src/test/scala/VPU1Route_Test.scala 86:24]
    alu.io_in_vec_a_15 <= _alu_io_in_vec_a_15_T_1 @[src/test/scala/VPU1Route_Test.scala 86:24]
    alu.io_in_vec_b_0 <= _alu_io_in_vec_b_0_T @[src/test/scala/VPU1Route_Test.scala 87:24]
    alu.io_in_vec_b_1 <= _alu_io_in_vec_b_1_T @[src/test/scala/VPU1Route_Test.scala 87:24]
    alu.io_in_vec_b_2 <= _alu_io_in_vec_b_2_T @[src/test/scala/VPU1Route_Test.scala 87:24]
    alu.io_in_vec_b_3 <= _alu_io_in_vec_b_3_T @[src/test/scala/VPU1Route_Test.scala 87:24]
    alu.io_in_vec_b_4 <= _alu_io_in_vec_b_4_T @[src/test/scala/VPU1Route_Test.scala 87:24]
    alu.io_in_vec_b_5 <= _alu_io_in_vec_b_5_T @[src/test/scala/VPU1Route_Test.scala 87:24]
    alu.io_in_vec_b_6 <= _alu_io_in_vec_b_6_T @[src/test/scala/VPU1Route_Test.scala 87:24]
    alu.io_in_vec_b_7 <= _alu_io_in_vec_b_7_T @[src/test/scala/VPU1Route_Test.scala 87:24]
    alu.io_in_vec_b_8 <= _alu_io_in_vec_b_8_T @[src/test/scala/VPU1Route_Test.scala 87:24]
    alu.io_in_vec_b_9 <= _alu_io_in_vec_b_9_T @[src/test/scala/VPU1Route_Test.scala 87:24]
    alu.io_in_vec_b_10 <= _alu_io_in_vec_b_10_T @[src/test/scala/VPU1Route_Test.scala 87:24]
    alu.io_in_vec_b_11 <= _alu_io_in_vec_b_11_T @[src/test/scala/VPU1Route_Test.scala 87:24]
    alu.io_in_vec_b_12 <= _alu_io_in_vec_b_12_T @[src/test/scala/VPU1Route_Test.scala 87:24]
    alu.io_in_vec_b_13 <= _alu_io_in_vec_b_13_T @[src/test/scala/VPU1Route_Test.scala 87:24]
    alu.io_in_vec_b_14 <= _alu_io_in_vec_b_14_T @[src/test/scala/VPU1Route_Test.scala 87:24]
    alu.io_in_vec_b_15 <= _alu_io_in_vec_b_15_T @[src/test/scala/VPU1Route_Test.scala 87:24]
    alu.io_in_valid_0 <= _alu_io_in_valid_0_T_1 @[src/test/scala/VPU1Route_Test.scala 88:24]
    alu.io_in_valid_1 <= _alu_io_in_valid_1_T_1 @[src/test/scala/VPU1Route_Test.scala 88:24]
    alu.io_in_valid_2 <= _alu_io_in_valid_2_T_1 @[src/test/scala/VPU1Route_Test.scala 88:24]
    alu.io_in_valid_3 <= _alu_io_in_valid_3_T_1 @[src/test/scala/VPU1Route_Test.scala 88:24]
    alu.io_in_valid_4 <= _alu_io_in_valid_4_T_1 @[src/test/scala/VPU1Route_Test.scala 88:24]
    alu.io_in_valid_5 <= _alu_io_in_valid_5_T_1 @[src/test/scala/VPU1Route_Test.scala 88:24]
    alu.io_in_valid_6 <= _alu_io_in_valid_6_T_1 @[src/test/scala/VPU1Route_Test.scala 88:24]
    alu.io_in_valid_7 <= _alu_io_in_valid_7_T_1 @[src/test/scala/VPU1Route_Test.scala 88:24]
    alu.io_in_valid_8 <= _alu_io_in_valid_8_T_1 @[src/test/scala/VPU1Route_Test.scala 88:24]
    alu.io_in_valid_9 <= _alu_io_in_valid_9_T_1 @[src/test/scala/VPU1Route_Test.scala 88:24]
    alu.io_in_valid_10 <= _alu_io_in_valid_10_T_1 @[src/test/scala/VPU1Route_Test.scala 88:24]
    alu.io_in_valid_11 <= _alu_io_in_valid_11_T_1 @[src/test/scala/VPU1Route_Test.scala 88:24]
    alu.io_in_valid_12 <= _alu_io_in_valid_12_T_1 @[src/test/scala/VPU1Route_Test.scala 88:24]
    alu.io_in_valid_13 <= _alu_io_in_valid_13_T_1 @[src/test/scala/VPU1Route_Test.scala 88:24]
    alu.io_in_valid_14 <= _alu_io_in_valid_14_T_1 @[src/test/scala/VPU1Route_Test.scala 88:24]
    alu.io_in_valid_15 <= _alu_io_in_valid_15_T_1 @[src/test/scala/VPU1Route_Test.scala 88:24]
    alu.io_input_mode <= mode @[src/test/scala/VPU1Route_Test.scala 80:21]
    alu.io_alu_mode <= io_alu_mode @[src/test/scala/VPU1Route_Test.scala 81:19]
    alu.io_out_shift <= io_out_shift @[src/test/scala/VPU1Route_Test.scala 82:20]
    alu.io_stall <= io_stall @[src/test/scala/VPU1Route_Test.scala 83:16]
    savedMode <= mux(reset, UInt<1>("h0"), _GEN_0) @[src/test/scala/VPU1Route_Test.scala 49:{26,26}]
    savedRoute <= mux(reset, UInt<2>("h0"), _GEN_1) @[src/test/scala/VPU1Route_Test.scala 50:{27,27}]
    vbResponse_0 <= _GEN_2
    vbResponse_1 <= _GEN_3
    vbResponse_2 <= _GEN_4
    vbResponse_3 <= _GEN_5
    vbResponse_4 <= _GEN_6
    vbResponse_5 <= _GEN_7
    vbResponse_6 <= _GEN_8
    vbResponse_7 <= _GEN_9
    vbResponse_8 <= _GEN_10
    vbResponse_9 <= _GEN_11
    vbResponse_10 <= _GEN_12
    vbResponse_11 <= _GEN_13
    vbResponse_12 <= _GEN_14
    vbResponse_13 <= _GEN_15
    vbResponse_14 <= _GEN_16
    vbResponse_15 <= _GEN_17
