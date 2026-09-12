FIRRTL version 1.2.0
circuit QuantActUnit :
  module Universal_Wide_LUT : @[src/main/scala/npu/utils/UniversalLUT.scala 6:7]
    input clock : Clock @[src/main/scala/npu/utils/UniversalLUT.scala 6:7]
    input reset : UInt<1> @[src/main/scala/npu/utils/UniversalLUT.scala 6:7]
    input io_wr_en : UInt<1> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_addr : UInt<6> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
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
    output io_wr_valid : UInt<1> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_rd_en : UInt<1> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_rd_addr : UInt<10> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    output io_rd_data : UInt<8> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    output io_rd_valid : UInt<1> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    output io_lut_ready : UInt<1> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]

    mem lut_mem_0 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 64
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_1 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 64
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_2 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 64
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_3 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 64
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_4 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 64
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_5 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 64
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_6 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 64
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_7 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 64
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_8 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 64
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_9 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 64
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_10 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 64
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_11 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 64
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_12 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 64
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_13 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 64
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_14 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 64
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_15 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<8>
      depth => 64
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
    reg io_wr_valid_REG : UInt<1>, clock with :
      reset => (UInt<1>("h0"), io_wr_valid_REG) @[src/main/scala/npu/utils/UniversalLUT.scala 51:25]
    reg is_programmed : UInt<1>, clock with :
      reset => (UInt<1>("h0"), is_programmed) @[src/main/scala/npu/utils/UniversalLUT.scala 57:31]
    node _last_write_ack_T = eq(io_wr_addr, UInt<6>("h3f")) @[src/main/scala/npu/utils/UniversalLUT.scala 58:56]
    node _last_write_ack_T_1 = and(io_wr_en, _last_write_ack_T) @[src/main/scala/npu/utils/UniversalLUT.scala 58:41]
    reg last_write_ack : UInt<1>, clock with :
      reset => (UInt<1>("h0"), last_write_ack) @[src/main/scala/npu/utils/UniversalLUT.scala 58:31]
    node _GEN_20 = mux(last_write_ack, UInt<1>("h1"), is_programmed) @[src/main/scala/npu/utils/UniversalLUT.scala 60:25 61:19 57:31]
    node rd_row = bits(io_rd_addr, 9, 4) @[src/main/scala/npu/utils/UniversalLUT.scala 71:26]
    node rd_col = bits(io_rd_addr, 3, 0) @[src/main/scala/npu/utils/UniversalLUT.scala 72:26]
    node _GEN_21 = validif(io_rd_en, rd_row) @[src/main/scala/npu/utils/UniversalLUT.scala 75:{28,28}]
    node _GEN_22 = mux(io_rd_en, UInt<1>("h1"), UInt<1>("h0")) @[src/main/scala/npu/utils/UniversalLUT.scala 41:28 75:{28,28}]
    node _rd_vec_WIRE = _GEN_21 @[src/main/scala/npu/utils/UniversalLUT.scala 75:28]
    node _GEN_23 = validif(io_rd_en, _rd_vec_WIRE) @[src/main/scala/npu/utils/UniversalLUT.scala 75:{28,28}]
    node _GEN_24 = validif(io_rd_en, clock) @[src/main/scala/npu/utils/UniversalLUT.scala 75:{28,28}]
    reg rd_col_delayed : UInt<4>, clock with :
      reset => (UInt<1>("h0"), rd_col_delayed) @[src/main/scala/npu/utils/UniversalLUT.scala 78:33]
    node _GEN_25 = mux(io_rd_en, rd_col, rd_col_delayed) @[src/main/scala/npu/utils/UniversalLUT.scala 78:{33,33,33}]
    node _GEN_26 = validif(eq(UInt<1>("h0"), rd_col_delayed), lut_mem_0.rd_vec.data) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_27 = mux(eq(UInt<1>("h1"), rd_col_delayed), lut_mem_1.rd_vec.data, _GEN_26) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_28 = mux(eq(UInt<2>("h2"), rd_col_delayed), lut_mem_2.rd_vec.data, _GEN_27) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_29 = mux(eq(UInt<2>("h3"), rd_col_delayed), lut_mem_3.rd_vec.data, _GEN_28) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_30 = mux(eq(UInt<3>("h4"), rd_col_delayed), lut_mem_4.rd_vec.data, _GEN_29) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_31 = mux(eq(UInt<3>("h5"), rd_col_delayed), lut_mem_5.rd_vec.data, _GEN_30) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_32 = mux(eq(UInt<3>("h6"), rd_col_delayed), lut_mem_6.rd_vec.data, _GEN_31) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_33 = mux(eq(UInt<3>("h7"), rd_col_delayed), lut_mem_7.rd_vec.data, _GEN_32) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_34 = mux(eq(UInt<4>("h8"), rd_col_delayed), lut_mem_8.rd_vec.data, _GEN_33) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_35 = mux(eq(UInt<4>("h9"), rd_col_delayed), lut_mem_9.rd_vec.data, _GEN_34) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_36 = mux(eq(UInt<4>("ha"), rd_col_delayed), lut_mem_10.rd_vec.data, _GEN_35) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_37 = mux(eq(UInt<4>("hb"), rd_col_delayed), lut_mem_11.rd_vec.data, _GEN_36) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_38 = mux(eq(UInt<4>("hc"), rd_col_delayed), lut_mem_12.rd_vec.data, _GEN_37) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_39 = mux(eq(UInt<4>("hd"), rd_col_delayed), lut_mem_13.rd_vec.data, _GEN_38) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_40 = mux(eq(UInt<4>("he"), rd_col_delayed), lut_mem_14.rd_vec.data, _GEN_39) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_41 = mux(eq(UInt<4>("hf"), rd_col_delayed), lut_mem_15.rd_vec.data, _GEN_40) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    reg io_rd_valid_REG : UInt<1>, clock with :
      reset => (UInt<1>("h0"), io_rd_valid_REG) @[src/main/scala/npu/utils/UniversalLUT.scala 84:25]
    node _lut_mem_rd_vec_data_rd_col_delayed = _GEN_41 @[src/main/scala/npu/utils/UniversalLUT.scala 81:15]
    io_wr_valid <= io_wr_valid_REG @[src/main/scala/npu/utils/UniversalLUT.scala 51:15]
    io_rd_data <= _lut_mem_rd_vec_data_rd_col_delayed @[src/main/scala/npu/utils/UniversalLUT.scala 81:15]
    io_rd_valid <= io_rd_valid_REG @[src/main/scala/npu/utils/UniversalLUT.scala 84:15]
    io_lut_ready <= is_programmed @[src/main/scala/npu/utils/UniversalLUT.scala 65:16]
    lut_mem_0.rd_vec.addr <= _GEN_23
    lut_mem_1.rd_vec.addr <= _GEN_23
    lut_mem_2.rd_vec.addr <= _GEN_23
    lut_mem_3.rd_vec.addr <= _GEN_23
    lut_mem_4.rd_vec.addr <= _GEN_23
    lut_mem_5.rd_vec.addr <= _GEN_23
    lut_mem_6.rd_vec.addr <= _GEN_23
    lut_mem_7.rd_vec.addr <= _GEN_23
    lut_mem_8.rd_vec.addr <= _GEN_23
    lut_mem_9.rd_vec.addr <= _GEN_23
    lut_mem_10.rd_vec.addr <= _GEN_23
    lut_mem_11.rd_vec.addr <= _GEN_23
    lut_mem_12.rd_vec.addr <= _GEN_23
    lut_mem_13.rd_vec.addr <= _GEN_23
    lut_mem_14.rd_vec.addr <= _GEN_23
    lut_mem_15.rd_vec.addr <= _GEN_23
    lut_mem_0.rd_vec.en <= _GEN_22
    lut_mem_1.rd_vec.en <= _GEN_22
    lut_mem_2.rd_vec.en <= _GEN_22
    lut_mem_3.rd_vec.en <= _GEN_22
    lut_mem_4.rd_vec.en <= _GEN_22
    lut_mem_5.rd_vec.en <= _GEN_22
    lut_mem_6.rd_vec.en <= _GEN_22
    lut_mem_7.rd_vec.en <= _GEN_22
    lut_mem_8.rd_vec.en <= _GEN_22
    lut_mem_9.rd_vec.en <= _GEN_22
    lut_mem_10.rd_vec.en <= _GEN_22
    lut_mem_11.rd_vec.en <= _GEN_22
    lut_mem_12.rd_vec.en <= _GEN_22
    lut_mem_13.rd_vec.en <= _GEN_22
    lut_mem_14.rd_vec.en <= _GEN_22
    lut_mem_15.rd_vec.en <= _GEN_22
    lut_mem_0.rd_vec.clk <= _GEN_24
    lut_mem_1.rd_vec.clk <= _GEN_24
    lut_mem_2.rd_vec.clk <= _GEN_24
    lut_mem_3.rd_vec.clk <= _GEN_24
    lut_mem_4.rd_vec.clk <= _GEN_24
    lut_mem_5.rd_vec.clk <= _GEN_24
    lut_mem_6.rd_vec.clk <= _GEN_24
    lut_mem_7.rd_vec.clk <= _GEN_24
    lut_mem_8.rd_vec.clk <= _GEN_24
    lut_mem_9.rd_vec.clk <= _GEN_24
    lut_mem_10.rd_vec.clk <= _GEN_24
    lut_mem_11.rd_vec.clk <= _GEN_24
    lut_mem_12.rd_vec.clk <= _GEN_24
    lut_mem_13.rd_vec.clk <= _GEN_24
    lut_mem_14.rd_vec.clk <= _GEN_24
    lut_mem_15.rd_vec.clk <= _GEN_24
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
    io_wr_valid_REG <= mux(reset, UInt<1>("h0"), io_wr_en) @[src/main/scala/npu/utils/UniversalLUT.scala 51:{25,25,25}]
    is_programmed <= mux(reset, UInt<1>("h0"), _GEN_20) @[src/main/scala/npu/utils/UniversalLUT.scala 57:{31,31}]
    last_write_ack <= mux(reset, UInt<1>("h0"), _last_write_ack_T_1) @[src/main/scala/npu/utils/UniversalLUT.scala 58:{31,31,31}]
    rd_col_delayed <= _GEN_25
    io_rd_valid_REG <= mux(reset, UInt<1>("h0"), io_rd_en) @[src/main/scala/npu/utils/UniversalLUT.scala 84:{25,25,25}]

  module QuantActCore : @[src/main/scala/npu/core/QuantActUnit.scala 27:7]
    input clock : Clock @[src/main/scala/npu/core/QuantActUnit.scala 27:7]
    input reset : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 27:7]
    input io_in_tpu : SInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
    input io_in_direct : SInt<10> @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
    input io_input_mode : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
    input io_in_valid : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
    input io_param : UInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
    input io_act_mask : UInt<2> @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
    input io_fusion_second : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
    input io_stall : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
    input io_lut_wr_en : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
    input io_lut_wr_addr : UInt<6> @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
    input io_lut_wr_data_0 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
    input io_lut_wr_data_1 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
    input io_lut_wr_data_2 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
    input io_lut_wr_data_3 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
    input io_lut_wr_data_4 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
    input io_lut_wr_data_5 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
    input io_lut_wr_data_6 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
    input io_lut_wr_data_7 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
    input io_lut_wr_data_8 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
    input io_lut_wr_data_9 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
    input io_lut_wr_data_10 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
    input io_lut_wr_data_11 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
    input io_lut_wr_data_12 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
    input io_lut_wr_data_13 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
    input io_lut_wr_data_14 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
    input io_lut_wr_data_15 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
    output io_out_qact : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
    output io_out_valid : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
    output io_out_lookahead : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
    output io_busy : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
    output io_lut_ready : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
    output io_sync_alert : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 42:14]

    inst actLut of Universal_Wide_LUT @[src/main/scala/npu/core/QuantActUnit.scala 134:11]
    node run = eq(io_stall, UInt<1>("h0")) @[src/main/scala/npu/core/QuantActUnit.scala 68:13]
    node direct = eq(io_input_mode, UInt<1>("h1")) @[src/main/scala/npu/core/QuantActUnit.scala 69:30]
    node _selectedActEn_T = bits(io_act_mask, 1, 1) @[src/main/scala/npu/core/QuantActUnit.scala 70:56]
    node _selectedActEn_T_1 = bits(io_act_mask, 0, 0) @[src/main/scala/npu/core/QuantActUnit.scala 70:72]
    node selectedActEn = mux(io_fusion_second, _selectedActEn_T, _selectedActEn_T_1) @[src/main/scala/npu/core/QuantActUnit.scala 70:26]
    node _zp_T = bits(io_param, 7, 0) @[src/main/scala/npu/core/QuantActUnit.scala 72:23]
    node zp = asSInt(_zp_T) @[src/main/scala/npu/core/QuantActUnit.scala 72:30]
    node shift = bits(io_param, 12, 8) @[src/main/scala/npu/core/QuantActUnit.scala 73:23]
    node mult = bits(io_param, 31, 16) @[src/main/scala/npu/core/QuantActUnit.scala 74:23]
    reg s1Sub : SInt<33>, clock with :
      reset => (UInt<1>("h0"), s1Sub) @[src/main/scala/npu/core/QuantActUnit.scala 76:21]
    reg s1Mult : UInt<16>, clock with :
      reset => (UInt<1>("h0"), s1Mult) @[src/main/scala/npu/core/QuantActUnit.scala 77:21]
    reg s1Shift : UInt<5>, clock with :
      reset => (UInt<1>("h0"), s1Shift) @[src/main/scala/npu/core/QuantActUnit.scala 78:21]
    reg s1ActEn : UInt<1>, clock with :
      reset => (UInt<1>("h0"), s1ActEn) @[src/main/scala/npu/core/QuantActUnit.scala 79:21]
    reg s1Direct : UInt<1>, clock with :
      reset => (UInt<1>("h0"), s1Direct) @[src/main/scala/npu/core/QuantActUnit.scala 80:21]
    reg s1Valid : UInt<1>, clock with :
      reset => (UInt<1>("h0"), s1Valid) @[src/main/scala/npu/core/QuantActUnit.scala 81:25]
    node _s1Sub_T = pad(io_in_direct, 33) @[src/main/scala/npu/core/QuantActUnit.scala 86:46]
    node _s1Sub_T_1 = pad(io_in_tpu, 33) @[src/main/scala/npu/core/QuantActUnit.scala 87:22]
    node _s1Sub_T_2 = pad(zp, 33) @[src/main/scala/npu/core/QuantActUnit.scala 87:43]
    node _s1Sub_T_3 = sub(_s1Sub_T_1, _s1Sub_T_2) @[src/main/scala/npu/core/QuantActUnit.scala 87:35]
    node _s1Sub_T_4 = tail(_s1Sub_T_3, 1) @[src/main/scala/npu/core/QuantActUnit.scala 87:35]
    node _s1Sub_T_5 = asSInt(_s1Sub_T_4) @[src/main/scala/npu/core/QuantActUnit.scala 87:35]
    node _s1Sub_T_6 = mux(direct, _s1Sub_T, _s1Sub_T_5) @[src/main/scala/npu/core/QuantActUnit.scala 86:21]
    node _s1Mult_T = mux(direct, UInt<1>("h1"), mult) @[src/main/scala/npu/core/QuantActUnit.scala 88:21]
    node _s1Shift_T = mux(direct, UInt<1>("h0"), shift) @[src/main/scala/npu/core/QuantActUnit.scala 89:21]
    node _s1ActEn_T = or(direct, selectedActEn) @[src/main/scala/npu/core/QuantActUnit.scala 90:25]
    node _GEN_0 = mux(io_in_valid, _s1Sub_T_6, s1Sub) @[src/main/scala/npu/core/QuantActUnit.scala 85:23 86:15 76:21]
    node _GEN_1 = mux(io_in_valid, _s1Mult_T, s1Mult) @[src/main/scala/npu/core/QuantActUnit.scala 85:23 88:15 77:21]
    node _GEN_2 = mux(io_in_valid, _s1Shift_T, s1Shift) @[src/main/scala/npu/core/QuantActUnit.scala 85:23 89:15 78:21]
    node _GEN_3 = mux(io_in_valid, _s1ActEn_T, s1ActEn) @[src/main/scala/npu/core/QuantActUnit.scala 85:23 90:15 79:21]
    node _GEN_4 = mux(io_in_valid, direct, s1Direct) @[src/main/scala/npu/core/QuantActUnit.scala 85:23 91:16 80:21]
    node _GEN_5 = mux(run, io_in_valid, s1Valid) @[src/main/scala/npu/core/QuantActUnit.scala 83:13 84:13 81:25]
    node _GEN_6 = mux(run, _GEN_0, s1Sub) @[src/main/scala/npu/core/QuantActUnit.scala 83:13 76:21]
    node _GEN_7 = mux(run, _GEN_1, s1Mult) @[src/main/scala/npu/core/QuantActUnit.scala 83:13 77:21]
    node _GEN_8 = mux(run, _GEN_2, s1Shift) @[src/main/scala/npu/core/QuantActUnit.scala 83:13 78:21]
    node _GEN_9 = mux(run, _GEN_3, s1ActEn) @[src/main/scala/npu/core/QuantActUnit.scala 83:13 79:21]
    node _GEN_10 = mux(run, _GEN_4, s1Direct) @[src/main/scala/npu/core/QuantActUnit.scala 83:13 80:21]
    reg s2MultRes : SInt<49>, clock with :
      reset => (UInt<1>("h0"), s2MultRes) @[src/main/scala/npu/core/QuantActUnit.scala 95:22]
    reg s2Shift : UInt<5>, clock with :
      reset => (UInt<1>("h0"), s2Shift) @[src/main/scala/npu/core/QuantActUnit.scala 96:22]
    reg s2ActEn : UInt<1>, clock with :
      reset => (UInt<1>("h0"), s2ActEn) @[src/main/scala/npu/core/QuantActUnit.scala 97:22]
    reg s2Valid : UInt<1>, clock with :
      reset => (UInt<1>("h0"), s2Valid) @[src/main/scala/npu/core/QuantActUnit.scala 98:26]
    node _s2MultRes_T = cvt(s1Mult) @[src/main/scala/npu/core/QuantActUnit.scala 103:56]
    node _s2MultRes_T_1 = mul(s1Sub, _s2MultRes_T) @[src/main/scala/npu/core/QuantActUnit.scala 103:47]
    node _s2MultRes_T_2 = mux(s1Direct, s1Sub, _s2MultRes_T_1) @[src/main/scala/npu/core/QuantActUnit.scala 103:23]
    node _GEN_11 = mux(s1Valid, _s2MultRes_T_2, s2MultRes) @[src/main/scala/npu/core/QuantActUnit.scala 102:19 103:17 95:22]
    node _GEN_12 = mux(s1Valid, s1Shift, s2Shift) @[src/main/scala/npu/core/QuantActUnit.scala 102:19 104:17 96:22]
    node _GEN_13 = mux(s1Valid, s1ActEn, s2ActEn) @[src/main/scala/npu/core/QuantActUnit.scala 102:19 105:17 97:22]
    node _GEN_14 = mux(run, s1Valid, s2Valid) @[src/main/scala/npu/core/QuantActUnit.scala 100:13 101:13 98:26]
    node _GEN_15 = mux(run, _GEN_11, s2MultRes) @[src/main/scala/npu/core/QuantActUnit.scala 100:13 95:22]
    node _GEN_16 = mux(run, _GEN_12, s2Shift) @[src/main/scala/npu/core/QuantActUnit.scala 100:13 96:22]
    node _GEN_17 = mux(run, _GEN_13, s2ActEn) @[src/main/scala/npu/core/QuantActUnit.scala 100:13 97:22]
    node shifted = dshr(s2MultRes, s2Shift) @[src/main/scala/npu/core/QuantActUnit.scala 109:27]
    node _clampedSigned10_T = lt(shifted, asSInt(UInt<10>("h200"))) @[src/main/scala/npu/core/QuantActUnit.scala 111:34]
    node _clampedSigned10_T_1 = gt(shifted, asSInt(UInt<10>("h1ff"))) @[src/main/scala/npu/core/QuantActUnit.scala 112:17]
    node _clampedSigned10_T_2 = mux(_clampedSigned10_T_1, asSInt(UInt<10>("h1ff")), shifted) @[src/main/scala/npu/core/QuantActUnit.scala 112:8]
    node _clampedSigned10_T_3 = mux(_clampedSigned10_T, asSInt(UInt<10>("h200")), _clampedSigned10_T_2) @[src/main/scala/npu/core/QuantActUnit.scala 111:25]
    node clampedSigned10 = asSInt(bits(_clampedSigned10_T_3, 9, 0)) @[src/main/scala/npu/core/QuantActUnit.scala 110:29 111:19]
    node _lutAddress_T = pad(clampedSigned10, 11) @[src/main/scala/npu/core/QuantActUnit.scala 114:40]
    node _lutAddress_T_1 = add(_lutAddress_T, asSInt(UInt<11>("h200"))) @[src/main/scala/npu/core/QuantActUnit.scala 114:45]
    node _lutAddress_T_2 = tail(_lutAddress_T_1, 1) @[src/main/scala/npu/core/QuantActUnit.scala 114:45]
    node _lutAddress_T_3 = asSInt(_lutAddress_T_2) @[src/main/scala/npu/core/QuantActUnit.scala 114:45]
    node lutAddress = asUInt(_lutAddress_T_3) @[src/main/scala/npu/core/QuantActUnit.scala 114:60]
    node _clampedSigned8_T = lt(shifted, asSInt(UInt<8>("h80"))) @[src/main/scala/npu/core/QuantActUnit.scala 116:33]
    node _clampedSigned8_T_1 = gt(shifted, asSInt(UInt<8>("h7f"))) @[src/main/scala/npu/core/QuantActUnit.scala 117:17]
    node _clampedSigned8_T_2 = mux(_clampedSigned8_T_1, asSInt(UInt<8>("h7f")), shifted) @[src/main/scala/npu/core/QuantActUnit.scala 117:8]
    node _clampedSigned8_T_3 = mux(_clampedSigned8_T, asSInt(UInt<8>("h80")), _clampedSigned8_T_2) @[src/main/scala/npu/core/QuantActUnit.scala 116:24]
    reg s3Idx : UInt<10>, clock with :
      reset => (UInt<1>("h0"), s3Idx) @[src/main/scala/npu/core/QuantActUnit.scala 119:18]
    reg s3Linear : UInt<8>, clock with :
      reset => (UInt<1>("h0"), s3Linear) @[src/main/scala/npu/core/QuantActUnit.scala 120:21]
    reg s3ActEn : UInt<1>, clock with :
      reset => (UInt<1>("h0"), s3ActEn) @[src/main/scala/npu/core/QuantActUnit.scala 121:20]
    reg s3Valid : UInt<1>, clock with :
      reset => (UInt<1>("h0"), s3Valid) @[src/main/scala/npu/core/QuantActUnit.scala 122:24]
    node clampedSigned8 = asSInt(bits(_clampedSigned8_T_3, 7, 0)) @[src/main/scala/npu/core/QuantActUnit.scala 115:28 116:18]
    node _s3Linear_T = asUInt(clampedSigned8) @[src/main/scala/npu/core/QuantActUnit.scala 128:34]
    node _GEN_18 = mux(s2Valid, lutAddress, s3Idx) @[src/main/scala/npu/core/QuantActUnit.scala 126:19 127:13 119:18]
    node _GEN_19 = mux(s2Valid, _s3Linear_T, s3Linear) @[src/main/scala/npu/core/QuantActUnit.scala 126:19 128:16 120:21]
    node _GEN_20 = mux(s2Valid, s2ActEn, s3ActEn) @[src/main/scala/npu/core/QuantActUnit.scala 126:19 129:15 121:20]
    node _GEN_21 = mux(run, s2Valid, s3Valid) @[src/main/scala/npu/core/QuantActUnit.scala 124:13 125:13 122:24]
    node _GEN_22 = mux(run, _GEN_18, s3Idx) @[src/main/scala/npu/core/QuantActUnit.scala 124:13 119:18]
    node _GEN_23 = mux(run, _GEN_19, s3Linear) @[src/main/scala/npu/core/QuantActUnit.scala 124:13 120:21]
    node _GEN_24 = mux(run, _GEN_20, s3ActEn) @[src/main/scala/npu/core/QuantActUnit.scala 124:13 121:20]
    node _actReq_T = and(s3Valid, s3ActEn) @[src/main/scala/npu/core/QuantActUnit.scala 144:24]
    node actReq = and(_actReq_T, run) @[src/main/scala/npu/core/QuantActUnit.scala 144:35]
    node _linearReq_T = eq(s3ActEn, UInt<1>("h0")) @[src/main/scala/npu/core/QuantActUnit.scala 145:30]
    node _linearReq_T_1 = and(s3Valid, _linearReq_T) @[src/main/scala/npu/core/QuantActUnit.scala 145:27]
    node linearReq = and(_linearReq_T_1, run) @[src/main/scala/npu/core/QuantActUnit.scala 145:39]
    reg linearDataD1 : UInt<8>, clock with :
      reset => (UInt<1>("h0"), linearDataD1) @[src/main/scala/npu/core/QuantActUnit.scala 150:31]
    node _GEN_25 = mux(linearReq, s3Linear, linearDataD1) @[src/main/scala/npu/core/QuantActUnit.scala 150:{31,31,31}]
    reg linearValidD1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), linearValidD1) @[src/main/scala/npu/core/QuantActUnit.scala 151:30]
    node rawValid = or(actLut.io_rd_valid, linearValidD1) @[src/main/scala/npu/core/QuantActUnit.scala 153:37]
    node rawData = mux(actLut.io_rd_valid, actLut.io_rd_data, linearDataD1) @[src/main/scala/npu/core/QuantActUnit.scala 154:20]
    reg holdValid : UInt<1>, clock with :
      reset => (UInt<1>("h0"), holdValid) @[src/main/scala/npu/core/QuantActUnit.scala 158:26]
    reg holdData : UInt<8>, clock with :
      reset => (UInt<1>("h0"), holdData) @[src/main/scala/npu/core/QuantActUnit.scala 159:22]
    node _T = and(io_stall, rawValid) @[src/main/scala/npu/core/QuantActUnit.scala 161:17]
    node _T_1 = eq(holdValid, UInt<1>("h0")) @[src/main/scala/npu/core/QuantActUnit.scala 161:32]
    node _T_2 = and(_T, _T_1) @[src/main/scala/npu/core/QuantActUnit.scala 161:29]
    node _T_3 = and(run, holdValid) @[src/main/scala/npu/core/QuantActUnit.scala 164:18]
    node _GEN_26 = mux(_T_3, UInt<1>("h0"), holdValid) @[src/main/scala/npu/core/QuantActUnit.scala 164:32 165:15 158:26]
    node _GEN_27 = mux(_T_2, UInt<1>("h1"), _GEN_26) @[src/main/scala/npu/core/QuantActUnit.scala 161:44 162:15]
    node _GEN_28 = mux(_T_2, rawData, holdData) @[src/main/scala/npu/core/QuantActUnit.scala 161:44 163:14 159:22]
    node _io_out_qact_T = mux(holdValid, holdData, rawData) @[src/main/scala/npu/core/QuantActUnit.scala 168:21]
    node _io_out_valid_T = or(holdValid, rawValid) @[src/main/scala/npu/core/QuantActUnit.scala 169:37]
    node _io_out_valid_T_1 = and(run, _io_out_valid_T) @[src/main/scala/npu/core/QuantActUnit.scala 169:23]
    reg expectedRdValid : UInt<1>, clock with :
      reset => (UInt<1>("h0"), expectedRdValid) @[src/main/scala/npu/core/QuantActUnit.scala 171:32]
    reg expectedWrValid : UInt<1>, clock with :
      reset => (UInt<1>("h0"), expectedWrValid) @[src/main/scala/npu/core/QuantActUnit.scala 172:32]
    node _io_sync_alert_T = neq(expectedRdValid, actLut.io_rd_valid) @[src/main/scala/npu/core/QuantActUnit.scala 175:22]
    node _io_sync_alert_T_1 = neq(expectedWrValid, actLut.io_wr_valid) @[src/main/scala/npu/core/QuantActUnit.scala 176:22]
    node _io_sync_alert_T_2 = or(_io_sync_alert_T, _io_sync_alert_T_1) @[src/main/scala/npu/core/QuantActUnit.scala 175:46]
    node _io_sync_alert_T_3 = and(holdValid, rawValid) @[src/main/scala/npu/core/QuantActUnit.scala 177:16]
    node _io_sync_alert_T_4 = and(_io_sync_alert_T_3, run) @[src/main/scala/npu/core/QuantActUnit.scala 177:28]
    node _io_sync_alert_T_5 = or(_io_sync_alert_T_2, _io_sync_alert_T_4) @[src/main/scala/npu/core/QuantActUnit.scala 176:46]
    node _io_out_lookahead_T = and(s3Valid, run) @[src/main/scala/npu/core/QuantActUnit.scala 179:31]
    node _io_busy_T = or(s1Valid, s2Valid) @[src/main/scala/npu/core/QuantActUnit.scala 180:22]
    node _io_busy_T_1 = or(_io_busy_T, s3Valid) @[src/main/scala/npu/core/QuantActUnit.scala 180:33]
    node _io_busy_T_2 = or(_io_busy_T_1, rawValid) @[src/main/scala/npu/core/QuantActUnit.scala 180:44]
    node _io_busy_T_3 = or(_io_busy_T_2, holdValid) @[src/main/scala/npu/core/QuantActUnit.scala 180:56]
    io_out_qact <= _io_out_qact_T @[src/main/scala/npu/core/QuantActUnit.scala 168:15]
    io_out_valid <= _io_out_valid_T_1 @[src/main/scala/npu/core/QuantActUnit.scala 169:16]
    io_out_lookahead <= _io_out_lookahead_T @[src/main/scala/npu/core/QuantActUnit.scala 179:20]
    io_busy <= _io_busy_T_3 @[src/main/scala/npu/core/QuantActUnit.scala 180:11]
    io_lut_ready <= actLut.io_lut_ready @[src/main/scala/npu/core/QuantActUnit.scala 181:16]
    io_sync_alert <= _io_sync_alert_T_5 @[src/main/scala/npu/core/QuantActUnit.scala 174:17]
    s1Sub <= _GEN_6
    s1Mult <= _GEN_7
    s1Shift <= _GEN_8
    s1ActEn <= _GEN_9
    s1Direct <= _GEN_10
    s1Valid <= mux(reset, UInt<1>("h0"), _GEN_5) @[src/main/scala/npu/core/QuantActUnit.scala 81:{25,25}]
    s2MultRes <= asSInt(bits(_GEN_15, 48, 0))
    s2Shift <= _GEN_16
    s2ActEn <= _GEN_17
    s2Valid <= mux(reset, UInt<1>("h0"), _GEN_14) @[src/main/scala/npu/core/QuantActUnit.scala 98:{26,26}]
    s3Idx <= bits(_GEN_22, 9, 0)
    s3Linear <= _GEN_23
    s3ActEn <= _GEN_24
    s3Valid <= mux(reset, UInt<1>("h0"), _GEN_21) @[src/main/scala/npu/core/QuantActUnit.scala 122:{24,24}]
    actLut.clock <= clock
    actLut.reset <= reset
    actLut.io_wr_en <= io_lut_wr_en @[src/main/scala/npu/core/QuantActUnit.scala 140:21]
    actLut.io_wr_addr <= io_lut_wr_addr @[src/main/scala/npu/core/QuantActUnit.scala 141:21]
    actLut.io_wr_data_0 <= io_lut_wr_data_0 @[src/main/scala/npu/core/QuantActUnit.scala 142:21]
    actLut.io_wr_data_1 <= io_lut_wr_data_1 @[src/main/scala/npu/core/QuantActUnit.scala 142:21]
    actLut.io_wr_data_2 <= io_lut_wr_data_2 @[src/main/scala/npu/core/QuantActUnit.scala 142:21]
    actLut.io_wr_data_3 <= io_lut_wr_data_3 @[src/main/scala/npu/core/QuantActUnit.scala 142:21]
    actLut.io_wr_data_4 <= io_lut_wr_data_4 @[src/main/scala/npu/core/QuantActUnit.scala 142:21]
    actLut.io_wr_data_5 <= io_lut_wr_data_5 @[src/main/scala/npu/core/QuantActUnit.scala 142:21]
    actLut.io_wr_data_6 <= io_lut_wr_data_6 @[src/main/scala/npu/core/QuantActUnit.scala 142:21]
    actLut.io_wr_data_7 <= io_lut_wr_data_7 @[src/main/scala/npu/core/QuantActUnit.scala 142:21]
    actLut.io_wr_data_8 <= io_lut_wr_data_8 @[src/main/scala/npu/core/QuantActUnit.scala 142:21]
    actLut.io_wr_data_9 <= io_lut_wr_data_9 @[src/main/scala/npu/core/QuantActUnit.scala 142:21]
    actLut.io_wr_data_10 <= io_lut_wr_data_10 @[src/main/scala/npu/core/QuantActUnit.scala 142:21]
    actLut.io_wr_data_11 <= io_lut_wr_data_11 @[src/main/scala/npu/core/QuantActUnit.scala 142:21]
    actLut.io_wr_data_12 <= io_lut_wr_data_12 @[src/main/scala/npu/core/QuantActUnit.scala 142:21]
    actLut.io_wr_data_13 <= io_lut_wr_data_13 @[src/main/scala/npu/core/QuantActUnit.scala 142:21]
    actLut.io_wr_data_14 <= io_lut_wr_data_14 @[src/main/scala/npu/core/QuantActUnit.scala 142:21]
    actLut.io_wr_data_15 <= io_lut_wr_data_15 @[src/main/scala/npu/core/QuantActUnit.scala 142:21]
    actLut.io_rd_en <= actReq @[src/main/scala/npu/core/QuantActUnit.scala 147:21]
    actLut.io_rd_addr <= s3Idx @[src/main/scala/npu/core/QuantActUnit.scala 148:21]
    linearDataD1 <= mux(reset, UInt<1>("h0"), _GEN_25) @[src/main/scala/npu/core/QuantActUnit.scala 150:{31,31}]
    linearValidD1 <= mux(reset, UInt<1>("h0"), linearReq) @[src/main/scala/npu/core/QuantActUnit.scala 151:{30,30,30}]
    holdValid <= mux(reset, UInt<1>("h0"), _GEN_27) @[src/main/scala/npu/core/QuantActUnit.scala 158:{26,26}]
    holdData <= _GEN_28
    expectedRdValid <= mux(reset, UInt<1>("h0"), actReq) @[src/main/scala/npu/core/QuantActUnit.scala 171:{32,32,32}]
    expectedWrValid <= mux(reset, UInt<1>("h0"), io_lut_wr_en) @[src/main/scala/npu/core/QuantActUnit.scala 172:{32,32,32}]

  module QuantActUnit : @[src/main/scala/npu/core/QuantActUnit.scala 198:7]
    input clock : Clock @[src/main/scala/npu/core/QuantActUnit.scala 198:7]
    input reset : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 198:7]
    input io_in_tpu_0 : SInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_tpu_1 : SInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_tpu_2 : SInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_tpu_3 : SInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_tpu_4 : SInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_tpu_5 : SInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_tpu_6 : SInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_tpu_7 : SInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_tpu_8 : SInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_tpu_9 : SInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_tpu_10 : SInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_tpu_11 : SInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_tpu_12 : SInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_tpu_13 : SInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_tpu_14 : SInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_tpu_15 : SInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_direct_0 : SInt<10> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_direct_1 : SInt<10> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_direct_2 : SInt<10> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_direct_3 : SInt<10> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_direct_4 : SInt<10> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_direct_5 : SInt<10> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_direct_6 : SInt<10> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_direct_7 : SInt<10> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_direct_8 : SInt<10> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_direct_9 : SInt<10> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_direct_10 : SInt<10> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_direct_11 : SInt<10> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_direct_12 : SInt<10> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_direct_13 : SInt<10> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_direct_14 : SInt<10> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_direct_15 : SInt<10> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_input_mode : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_valid_0 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_valid_1 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_valid_2 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_valid_3 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_valid_4 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_valid_5 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_valid_6 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_valid_7 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_valid_8 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_valid_9 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_valid_10 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_valid_11 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_valid_12 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_valid_13 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_valid_14 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_in_valid_15 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_param_mode : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_matrix_param : UInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_act_mask : UInt<2> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_fusion_second : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_stall : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_soft_reset : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_qparam_req_line : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_qparam_line_in_0 : UInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_qparam_line_in_1 : UInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_qparam_line_in_2 : UInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_qparam_line_in_3 : UInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_qparam_line_in_4 : UInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_qparam_line_in_5 : UInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_qparam_line_in_6 : UInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_qparam_line_in_7 : UInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_qparam_line_in_8 : UInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_qparam_line_in_9 : UInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_qparam_line_in_10 : UInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_qparam_line_in_11 : UInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_qparam_line_in_12 : UInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_qparam_line_in_13 : UInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_qparam_line_in_14 : UInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_qparam_line_in_15 : UInt<32> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_qparam_line_valid : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_lut_wr_en : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_lut_wr_addr : UInt<6> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_lut_wr_data_0 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_lut_wr_data_1 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_lut_wr_data_2 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_lut_wr_data_3 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_lut_wr_data_4 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_lut_wr_data_5 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_lut_wr_data_6 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_lut_wr_data_7 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_lut_wr_data_8 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_lut_wr_data_9 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_lut_wr_data_10 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_lut_wr_data_11 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_lut_wr_data_12 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_lut_wr_data_13 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_lut_wr_data_14 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    input io_lut_wr_data_15 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_vec_0 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_vec_1 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_vec_2 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_vec_3 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_vec_4 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_vec_5 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_vec_6 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_vec_7 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_vec_8 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_vec_9 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_vec_10 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_vec_11 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_vec_12 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_vec_13 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_vec_14 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_vec_15 : UInt<8> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_valid_0 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_valid_1 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_valid_2 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_valid_3 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_valid_4 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_valid_5 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_valid_6 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_valid_7 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_valid_8 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_valid_9 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_valid_10 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_valid_11 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_valid_12 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_valid_13 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_valid_14 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_valid_15 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_lookahead_0 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_lookahead_1 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_lookahead_2 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_lookahead_3 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_lookahead_4 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_lookahead_5 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_lookahead_6 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_lookahead_7 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_lookahead_8 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_lookahead_9 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_lookahead_10 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_lookahead_11 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_lookahead_12 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_lookahead_13 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_lookahead_14 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_out_lookahead_15 : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_busy : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_prefetch_ready : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_lut_ready : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
    output io_sync_alert : UInt<1> @[src/main/scala/npu/core/QuantActUnit.scala 214:14]

    inst cores_0 of QuantActCore @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
    inst cores_1 of QuantActCore @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
    inst cores_2 of QuantActCore @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
    inst cores_3 of QuantActCore @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
    inst cores_4 of QuantActCore @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
    inst cores_5 of QuantActCore @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
    inst cores_6 of QuantActCore @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
    inst cores_7 of QuantActCore @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
    inst cores_8 of QuantActCore @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
    inst cores_9 of QuantActCore @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
    inst cores_10 of QuantActCore @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
    inst cores_11 of QuantActCore @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
    inst cores_12 of QuantActCore @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
    inst cores_13 of QuantActCore @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
    inst cores_14 of QuantActCore @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
    inst cores_15 of QuantActCore @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
    node run = eq(io_stall, UInt<1>("h0")) @[src/main/scala/npu/core/QuantActUnit.scala 251:13]
    node _perChannel_T = eq(io_input_mode, UInt<1>("h0")) @[src/main/scala/npu/core/QuantActUnit.scala 252:34]
    node _perChannel_T_1 = eq(io_param_mode, UInt<1>("h1")) @[src/main/scala/npu/core/QuantActUnit.scala 253:19]
    node perChannel = and(_perChannel_T, _perChannel_T_1) @[src/main/scala/npu/core/QuantActUnit.scala 252:56]
    node anyValid_lo_lo_lo = cat(io_in_valid_1, io_in_valid_0) @[src/main/scala/npu/core/QuantActUnit.scala 255:30]
    node anyValid_lo_lo_hi = cat(io_in_valid_3, io_in_valid_2) @[src/main/scala/npu/core/QuantActUnit.scala 255:30]
    node anyValid_lo_lo = cat(anyValid_lo_lo_hi, anyValid_lo_lo_lo) @[src/main/scala/npu/core/QuantActUnit.scala 255:30]
    node anyValid_lo_hi_lo = cat(io_in_valid_5, io_in_valid_4) @[src/main/scala/npu/core/QuantActUnit.scala 255:30]
    node anyValid_lo_hi_hi = cat(io_in_valid_7, io_in_valid_6) @[src/main/scala/npu/core/QuantActUnit.scala 255:30]
    node anyValid_lo_hi = cat(anyValid_lo_hi_hi, anyValid_lo_hi_lo) @[src/main/scala/npu/core/QuantActUnit.scala 255:30]
    node anyValid_lo = cat(anyValid_lo_hi, anyValid_lo_lo) @[src/main/scala/npu/core/QuantActUnit.scala 255:30]
    node anyValid_hi_lo_lo = cat(io_in_valid_9, io_in_valid_8) @[src/main/scala/npu/core/QuantActUnit.scala 255:30]
    node anyValid_hi_lo_hi = cat(io_in_valid_11, io_in_valid_10) @[src/main/scala/npu/core/QuantActUnit.scala 255:30]
    node anyValid_hi_lo = cat(anyValid_hi_lo_hi, anyValid_hi_lo_lo) @[src/main/scala/npu/core/QuantActUnit.scala 255:30]
    node anyValid_hi_hi_lo = cat(io_in_valid_13, io_in_valid_12) @[src/main/scala/npu/core/QuantActUnit.scala 255:30]
    node anyValid_hi_hi_hi = cat(io_in_valid_15, io_in_valid_14) @[src/main/scala/npu/core/QuantActUnit.scala 255:30]
    node anyValid_hi_hi = cat(anyValid_hi_hi_hi, anyValid_hi_hi_lo) @[src/main/scala/npu/core/QuantActUnit.scala 255:30]
    node anyValid_hi = cat(anyValid_hi_hi, anyValid_hi_lo) @[src/main/scala/npu/core/QuantActUnit.scala 255:30]
    node _anyValid_T = cat(anyValid_hi, anyValid_lo) @[src/main/scala/npu/core/QuantActUnit.scala 255:30]
    node anyValid = orr(_anyValid_T) @[src/main/scala/npu/core/QuantActUnit.scala 255:37]
    node allValid_lo_lo_lo = cat(io_in_valid_1, io_in_valid_0) @[src/main/scala/npu/core/QuantActUnit.scala 256:30]
    node allValid_lo_lo_hi = cat(io_in_valid_3, io_in_valid_2) @[src/main/scala/npu/core/QuantActUnit.scala 256:30]
    node allValid_lo_lo = cat(allValid_lo_lo_hi, allValid_lo_lo_lo) @[src/main/scala/npu/core/QuantActUnit.scala 256:30]
    node allValid_lo_hi_lo = cat(io_in_valid_5, io_in_valid_4) @[src/main/scala/npu/core/QuantActUnit.scala 256:30]
    node allValid_lo_hi_hi = cat(io_in_valid_7, io_in_valid_6) @[src/main/scala/npu/core/QuantActUnit.scala 256:30]
    node allValid_lo_hi = cat(allValid_lo_hi_hi, allValid_lo_hi_lo) @[src/main/scala/npu/core/QuantActUnit.scala 256:30]
    node allValid_lo = cat(allValid_lo_hi, allValid_lo_lo) @[src/main/scala/npu/core/QuantActUnit.scala 256:30]
    node allValid_hi_lo_lo = cat(io_in_valid_9, io_in_valid_8) @[src/main/scala/npu/core/QuantActUnit.scala 256:30]
    node allValid_hi_lo_hi = cat(io_in_valid_11, io_in_valid_10) @[src/main/scala/npu/core/QuantActUnit.scala 256:30]
    node allValid_hi_lo = cat(allValid_hi_lo_hi, allValid_hi_lo_lo) @[src/main/scala/npu/core/QuantActUnit.scala 256:30]
    node allValid_hi_hi_lo = cat(io_in_valid_13, io_in_valid_12) @[src/main/scala/npu/core/QuantActUnit.scala 256:30]
    node allValid_hi_hi_hi = cat(io_in_valid_15, io_in_valid_14) @[src/main/scala/npu/core/QuantActUnit.scala 256:30]
    node allValid_hi_hi = cat(allValid_hi_hi_hi, allValid_hi_hi_lo) @[src/main/scala/npu/core/QuantActUnit.scala 256:30]
    node allValid_hi = cat(allValid_hi_hi, allValid_hi_lo) @[src/main/scala/npu/core/QuantActUnit.scala 256:30]
    node _allValid_T = cat(allValid_hi, allValid_lo) @[src/main/scala/npu/core/QuantActUnit.scala 256:30]
    node allValid = andr(_allValid_T) @[src/main/scala/npu/core/QuantActUnit.scala 256:37]
    node inputFire = and(allValid, run) @[src/main/scala/npu/core/QuantActUnit.scala 257:28]
    reg rowCounter : UInt<4>, clock with :
      reset => (UInt<1>("h0"), rowCounter) @[src/main/scala/npu/core/QuantActUnit.scala 259:27]
    node _tileStart_T = eq(rowCounter, UInt<1>("h0")) @[src/main/scala/npu/core/QuantActUnit.scala 260:44]
    node tileStart = and(inputFire, _tileStart_T) @[src/main/scala/npu/core/QuantActUnit.scala 260:29]
    node _tileEnd_T = eq(rowCounter, UInt<4>("hf")) @[src/main/scala/npu/core/QuantActUnit.scala 261:44]
    node tileEnd = and(inputFire, _tileEnd_T) @[src/main/scala/npu/core/QuantActUnit.scala 261:29]
    node _T = eq(perChannel, UInt<1>("h0")) @[src/main/scala/npu/core/QuantActUnit.scala 263:25]
    node _T_1 = or(io_soft_reset, _T) @[src/main/scala/npu/core/QuantActUnit.scala 263:22]
    node _rowCounter_T = add(rowCounter, UInt<1>("h1")) @[src/main/scala/npu/core/QuantActUnit.scala 269:32]
    node _rowCounter_T_1 = tail(_rowCounter_T, 1) @[src/main/scala/npu/core/QuantActUnit.scala 269:32]
    node _GEN_0 = mux(tileEnd, UInt<1>("h0"), _rowCounter_T_1) @[src/main/scala/npu/core/QuantActUnit.scala 266:19 267:18 269:18]
    node _GEN_1 = mux(inputFire, _GEN_0, rowCounter) @[src/main/scala/npu/core/QuantActUnit.scala 265:25 259:27]
    node _GEN_2 = mux(_T_1, UInt<1>("h0"), _GEN_1) @[src/main/scala/npu/core/QuantActUnit.scala 263:38 264:16]
    reg activeParam_0 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), activeParam_0) @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
    reg activeParam_1 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), activeParam_1) @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
    reg activeParam_2 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), activeParam_2) @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
    reg activeParam_3 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), activeParam_3) @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
    reg activeParam_4 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), activeParam_4) @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
    reg activeParam_5 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), activeParam_5) @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
    reg activeParam_6 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), activeParam_6) @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
    reg activeParam_7 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), activeParam_7) @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
    reg activeParam_8 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), activeParam_8) @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
    reg activeParam_9 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), activeParam_9) @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
    reg activeParam_10 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), activeParam_10) @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
    reg activeParam_11 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), activeParam_11) @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
    reg activeParam_12 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), activeParam_12) @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
    reg activeParam_13 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), activeParam_13) @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
    reg activeParam_14 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), activeParam_14) @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
    reg activeParam_15 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), activeParam_15) @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
    reg shadowParam_0 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), shadowParam_0) @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
    reg shadowParam_1 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), shadowParam_1) @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
    reg shadowParam_2 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), shadowParam_2) @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
    reg shadowParam_3 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), shadowParam_3) @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
    reg shadowParam_4 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), shadowParam_4) @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
    reg shadowParam_5 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), shadowParam_5) @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
    reg shadowParam_6 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), shadowParam_6) @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
    reg shadowParam_7 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), shadowParam_7) @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
    reg shadowParam_8 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), shadowParam_8) @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
    reg shadowParam_9 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), shadowParam_9) @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
    reg shadowParam_10 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), shadowParam_10) @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
    reg shadowParam_11 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), shadowParam_11) @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
    reg shadowParam_12 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), shadowParam_12) @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
    reg shadowParam_13 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), shadowParam_13) @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
    reg shadowParam_14 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), shadowParam_14) @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
    reg shadowParam_15 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), shadowParam_15) @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
    reg activeValid : UInt<1>, clock with :
      reset => (UInt<1>("h0"), activeValid) @[src/main/scala/npu/core/QuantActUnit.scala 279:28]
    reg shadowValid : UInt<1>, clock with :
      reset => (UInt<1>("h0"), shadowValid) @[src/main/scala/npu/core/QuantActUnit.scala 280:28]
    reg reqOutstanding : UInt<1>, clock with :
      reset => (UInt<1>("h0"), reqOutstanding) @[src/main/scala/npu/core/QuantActUnit.scala 281:31]
    node consumeShadow = and(perChannel, tileStart) @[src/main/scala/npu/core/QuantActUnit.scala 286:16]
    node _io_qparam_req_line_T = eq(io_soft_reset, UInt<1>("h0")) @[src/main/scala/npu/core/QuantActUnit.scala 289:19]
    node _io_qparam_req_line_T_1 = and(perChannel, _io_qparam_req_line_T) @[src/main/scala/npu/core/QuantActUnit.scala 289:16]
    node _io_qparam_req_line_T_2 = eq(reqOutstanding, UInt<1>("h0")) @[src/main/scala/npu/core/QuantActUnit.scala 290:5]
    node _io_qparam_req_line_T_3 = and(_io_qparam_req_line_T_1, _io_qparam_req_line_T_2) @[src/main/scala/npu/core/QuantActUnit.scala 289:34]
    node _io_qparam_req_line_T_4 = eq(shadowValid, UInt<1>("h0")) @[src/main/scala/npu/core/QuantActUnit.scala 291:6]
    node _io_qparam_req_line_T_5 = or(_io_qparam_req_line_T_4, consumeShadow) @[src/main/scala/npu/core/QuantActUnit.scala 291:19]
    node _io_qparam_req_line_T_6 = and(_io_qparam_req_line_T_3, _io_qparam_req_line_T_5) @[src/main/scala/npu/core/QuantActUnit.scala 290:21]
    node _T_2 = eq(perChannel, UInt<1>("h0")) @[src/main/scala/npu/core/QuantActUnit.scala 295:25]
    node _T_3 = or(io_soft_reset, _T_2) @[src/main/scala/npu/core/QuantActUnit.scala 295:22]
    node _GEN_3 = mux(io_qparam_req_line, UInt<1>("h1"), reqOutstanding) @[src/main/scala/npu/core/QuantActUnit.scala 300:30 301:22 281:31]
    node _GEN_4 = mux(shadowValid, shadowParam_0, activeParam_0) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 305:25 306:21]
    node _GEN_5 = mux(shadowValid, shadowParam_1, activeParam_1) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 305:25 306:21]
    node _GEN_6 = mux(shadowValid, shadowParam_2, activeParam_2) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 305:25 306:21]
    node _GEN_7 = mux(shadowValid, shadowParam_3, activeParam_3) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 305:25 306:21]
    node _GEN_8 = mux(shadowValid, shadowParam_4, activeParam_4) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 305:25 306:21]
    node _GEN_9 = mux(shadowValid, shadowParam_5, activeParam_5) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 305:25 306:21]
    node _GEN_10 = mux(shadowValid, shadowParam_6, activeParam_6) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 305:25 306:21]
    node _GEN_11 = mux(shadowValid, shadowParam_7, activeParam_7) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 305:25 306:21]
    node _GEN_12 = mux(shadowValid, shadowParam_8, activeParam_8) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 305:25 306:21]
    node _GEN_13 = mux(shadowValid, shadowParam_9, activeParam_9) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 305:25 306:21]
    node _GEN_14 = mux(shadowValid, shadowParam_10, activeParam_10) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 305:25 306:21]
    node _GEN_15 = mux(shadowValid, shadowParam_11, activeParam_11) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 305:25 306:21]
    node _GEN_16 = mux(shadowValid, shadowParam_12, activeParam_12) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 305:25 306:21]
    node _GEN_17 = mux(shadowValid, shadowParam_13, activeParam_13) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 305:25 306:21]
    node _GEN_18 = mux(shadowValid, shadowParam_14, activeParam_14) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 305:25 306:21]
    node _GEN_19 = mux(shadowValid, shadowParam_15, activeParam_15) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 305:25 306:21]
    node _GEN_20 = mux(shadowValid, UInt<1>("h1"), activeValid) @[src/main/scala/npu/core/QuantActUnit.scala 305:25 307:21 279:28]
    node _GEN_21 = mux(consumeShadow, _GEN_4, activeParam_0) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 304:25]
    node _GEN_22 = mux(consumeShadow, _GEN_5, activeParam_1) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 304:25]
    node _GEN_23 = mux(consumeShadow, _GEN_6, activeParam_2) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 304:25]
    node _GEN_24 = mux(consumeShadow, _GEN_7, activeParam_3) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 304:25]
    node _GEN_25 = mux(consumeShadow, _GEN_8, activeParam_4) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 304:25]
    node _GEN_26 = mux(consumeShadow, _GEN_9, activeParam_5) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 304:25]
    node _GEN_27 = mux(consumeShadow, _GEN_10, activeParam_6) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 304:25]
    node _GEN_28 = mux(consumeShadow, _GEN_11, activeParam_7) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 304:25]
    node _GEN_29 = mux(consumeShadow, _GEN_12, activeParam_8) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 304:25]
    node _GEN_30 = mux(consumeShadow, _GEN_13, activeParam_9) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 304:25]
    node _GEN_31 = mux(consumeShadow, _GEN_14, activeParam_10) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 304:25]
    node _GEN_32 = mux(consumeShadow, _GEN_15, activeParam_11) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 304:25]
    node _GEN_33 = mux(consumeShadow, _GEN_16, activeParam_12) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 304:25]
    node _GEN_34 = mux(consumeShadow, _GEN_17, activeParam_13) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 304:25]
    node _GEN_35 = mux(consumeShadow, _GEN_18, activeParam_14) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 304:25]
    node _GEN_36 = mux(consumeShadow, _GEN_19, activeParam_15) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 304:25]
    node _GEN_37 = mux(consumeShadow, _GEN_20, activeValid) @[src/main/scala/npu/core/QuantActUnit.scala 304:25 279:28]
    node _GEN_38 = mux(consumeShadow, UInt<1>("h0"), shadowValid) @[src/main/scala/npu/core/QuantActUnit.scala 304:25 309:19 280:28]
    node _T_4 = and(io_qparam_line_valid, perChannel) @[src/main/scala/npu/core/QuantActUnit.scala 313:31]
    node _GEN_39 = mux(_T_4, io_qparam_line_in_0, shadowParam_0) @[src/main/scala/npu/core/QuantActUnit.scala 277:12 313:46 314:19]
    node _GEN_40 = mux(_T_4, io_qparam_line_in_1, shadowParam_1) @[src/main/scala/npu/core/QuantActUnit.scala 277:12 313:46 314:19]
    node _GEN_41 = mux(_T_4, io_qparam_line_in_2, shadowParam_2) @[src/main/scala/npu/core/QuantActUnit.scala 277:12 313:46 314:19]
    node _GEN_42 = mux(_T_4, io_qparam_line_in_3, shadowParam_3) @[src/main/scala/npu/core/QuantActUnit.scala 277:12 313:46 314:19]
    node _GEN_43 = mux(_T_4, io_qparam_line_in_4, shadowParam_4) @[src/main/scala/npu/core/QuantActUnit.scala 277:12 313:46 314:19]
    node _GEN_44 = mux(_T_4, io_qparam_line_in_5, shadowParam_5) @[src/main/scala/npu/core/QuantActUnit.scala 277:12 313:46 314:19]
    node _GEN_45 = mux(_T_4, io_qparam_line_in_6, shadowParam_6) @[src/main/scala/npu/core/QuantActUnit.scala 277:12 313:46 314:19]
    node _GEN_46 = mux(_T_4, io_qparam_line_in_7, shadowParam_7) @[src/main/scala/npu/core/QuantActUnit.scala 277:12 313:46 314:19]
    node _GEN_47 = mux(_T_4, io_qparam_line_in_8, shadowParam_8) @[src/main/scala/npu/core/QuantActUnit.scala 277:12 313:46 314:19]
    node _GEN_48 = mux(_T_4, io_qparam_line_in_9, shadowParam_9) @[src/main/scala/npu/core/QuantActUnit.scala 277:12 313:46 314:19]
    node _GEN_49 = mux(_T_4, io_qparam_line_in_10, shadowParam_10) @[src/main/scala/npu/core/QuantActUnit.scala 277:12 313:46 314:19]
    node _GEN_50 = mux(_T_4, io_qparam_line_in_11, shadowParam_11) @[src/main/scala/npu/core/QuantActUnit.scala 277:12 313:46 314:19]
    node _GEN_51 = mux(_T_4, io_qparam_line_in_12, shadowParam_12) @[src/main/scala/npu/core/QuantActUnit.scala 277:12 313:46 314:19]
    node _GEN_52 = mux(_T_4, io_qparam_line_in_13, shadowParam_13) @[src/main/scala/npu/core/QuantActUnit.scala 277:12 313:46 314:19]
    node _GEN_53 = mux(_T_4, io_qparam_line_in_14, shadowParam_14) @[src/main/scala/npu/core/QuantActUnit.scala 277:12 313:46 314:19]
    node _GEN_54 = mux(_T_4, io_qparam_line_in_15, shadowParam_15) @[src/main/scala/npu/core/QuantActUnit.scala 277:12 313:46 314:19]
    node _GEN_55 = mux(_T_4, UInt<1>("h1"), _GEN_38) @[src/main/scala/npu/core/QuantActUnit.scala 313:46 315:19]
    node _GEN_56 = mux(_T_4, UInt<1>("h0"), _GEN_3) @[src/main/scala/npu/core/QuantActUnit.scala 313:46 316:22]
    node _GEN_57 = mux(_T_3, UInt<1>("h0"), _GEN_37) @[src/main/scala/npu/core/QuantActUnit.scala 295:38 296:17]
    node _GEN_58 = mux(_T_3, UInt<1>("h0"), _GEN_55) @[src/main/scala/npu/core/QuantActUnit.scala 295:38 297:17]
    node _GEN_59 = mux(_T_3, UInt<1>("h0"), _GEN_56) @[src/main/scala/npu/core/QuantActUnit.scala 295:38 298:20]
    node _GEN_60 = mux(_T_3, activeParam_0, _GEN_21) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 295:38]
    node _GEN_61 = mux(_T_3, activeParam_1, _GEN_22) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 295:38]
    node _GEN_62 = mux(_T_3, activeParam_2, _GEN_23) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 295:38]
    node _GEN_63 = mux(_T_3, activeParam_3, _GEN_24) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 295:38]
    node _GEN_64 = mux(_T_3, activeParam_4, _GEN_25) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 295:38]
    node _GEN_65 = mux(_T_3, activeParam_5, _GEN_26) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 295:38]
    node _GEN_66 = mux(_T_3, activeParam_6, _GEN_27) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 295:38]
    node _GEN_67 = mux(_T_3, activeParam_7, _GEN_28) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 295:38]
    node _GEN_68 = mux(_T_3, activeParam_8, _GEN_29) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 295:38]
    node _GEN_69 = mux(_T_3, activeParam_9, _GEN_30) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 295:38]
    node _GEN_70 = mux(_T_3, activeParam_10, _GEN_31) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 295:38]
    node _GEN_71 = mux(_T_3, activeParam_11, _GEN_32) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 295:38]
    node _GEN_72 = mux(_T_3, activeParam_12, _GEN_33) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 295:38]
    node _GEN_73 = mux(_T_3, activeParam_13, _GEN_34) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 295:38]
    node _GEN_74 = mux(_T_3, activeParam_14, _GEN_35) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 295:38]
    node _GEN_75 = mux(_T_3, activeParam_15, _GEN_36) @[src/main/scala/npu/core/QuantActUnit.scala 274:12 295:38]
    node _GEN_76 = mux(_T_3, shadowParam_0, _GEN_39) @[src/main/scala/npu/core/QuantActUnit.scala 277:12 295:38]
    node _GEN_77 = mux(_T_3, shadowParam_1, _GEN_40) @[src/main/scala/npu/core/QuantActUnit.scala 277:12 295:38]
    node _GEN_78 = mux(_T_3, shadowParam_2, _GEN_41) @[src/main/scala/npu/core/QuantActUnit.scala 277:12 295:38]
    node _GEN_79 = mux(_T_3, shadowParam_3, _GEN_42) @[src/main/scala/npu/core/QuantActUnit.scala 277:12 295:38]
    node _GEN_80 = mux(_T_3, shadowParam_4, _GEN_43) @[src/main/scala/npu/core/QuantActUnit.scala 277:12 295:38]
    node _GEN_81 = mux(_T_3, shadowParam_5, _GEN_44) @[src/main/scala/npu/core/QuantActUnit.scala 277:12 295:38]
    node _GEN_82 = mux(_T_3, shadowParam_6, _GEN_45) @[src/main/scala/npu/core/QuantActUnit.scala 277:12 295:38]
    node _GEN_83 = mux(_T_3, shadowParam_7, _GEN_46) @[src/main/scala/npu/core/QuantActUnit.scala 277:12 295:38]
    node _GEN_84 = mux(_T_3, shadowParam_8, _GEN_47) @[src/main/scala/npu/core/QuantActUnit.scala 277:12 295:38]
    node _GEN_85 = mux(_T_3, shadowParam_9, _GEN_48) @[src/main/scala/npu/core/QuantActUnit.scala 277:12 295:38]
    node _GEN_86 = mux(_T_3, shadowParam_10, _GEN_49) @[src/main/scala/npu/core/QuantActUnit.scala 277:12 295:38]
    node _GEN_87 = mux(_T_3, shadowParam_11, _GEN_50) @[src/main/scala/npu/core/QuantActUnit.scala 277:12 295:38]
    node _GEN_88 = mux(_T_3, shadowParam_12, _GEN_51) @[src/main/scala/npu/core/QuantActUnit.scala 277:12 295:38]
    node _GEN_89 = mux(_T_3, shadowParam_13, _GEN_52) @[src/main/scala/npu/core/QuantActUnit.scala 277:12 295:38]
    node _GEN_90 = mux(_T_3, shadowParam_14, _GEN_53) @[src/main/scala/npu/core/QuantActUnit.scala 277:12 295:38]
    node _GEN_91 = mux(_T_3, shadowParam_15, _GEN_54) @[src/main/scala/npu/core/QuantActUnit.scala 277:12 295:38]
    node _effectiveParam_0_T = mux(tileStart, shadowParam_0, activeParam_0) @[src/main/scala/npu/core/QuantActUnit.scala 328:12]
    node _effectiveParam_0_T_1 = mux(perChannel, _effectiveParam_0_T, io_matrix_param) @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
    node _effectiveParam_1_T = mux(tileStart, shadowParam_1, activeParam_1) @[src/main/scala/npu/core/QuantActUnit.scala 328:12]
    node _effectiveParam_1_T_1 = mux(perChannel, _effectiveParam_1_T, io_matrix_param) @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
    node _effectiveParam_2_T = mux(tileStart, shadowParam_2, activeParam_2) @[src/main/scala/npu/core/QuantActUnit.scala 328:12]
    node _effectiveParam_2_T_1 = mux(perChannel, _effectiveParam_2_T, io_matrix_param) @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
    node _effectiveParam_3_T = mux(tileStart, shadowParam_3, activeParam_3) @[src/main/scala/npu/core/QuantActUnit.scala 328:12]
    node _effectiveParam_3_T_1 = mux(perChannel, _effectiveParam_3_T, io_matrix_param) @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
    node _effectiveParam_4_T = mux(tileStart, shadowParam_4, activeParam_4) @[src/main/scala/npu/core/QuantActUnit.scala 328:12]
    node _effectiveParam_4_T_1 = mux(perChannel, _effectiveParam_4_T, io_matrix_param) @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
    node _effectiveParam_5_T = mux(tileStart, shadowParam_5, activeParam_5) @[src/main/scala/npu/core/QuantActUnit.scala 328:12]
    node _effectiveParam_5_T_1 = mux(perChannel, _effectiveParam_5_T, io_matrix_param) @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
    node _effectiveParam_6_T = mux(tileStart, shadowParam_6, activeParam_6) @[src/main/scala/npu/core/QuantActUnit.scala 328:12]
    node _effectiveParam_6_T_1 = mux(perChannel, _effectiveParam_6_T, io_matrix_param) @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
    node _effectiveParam_7_T = mux(tileStart, shadowParam_7, activeParam_7) @[src/main/scala/npu/core/QuantActUnit.scala 328:12]
    node _effectiveParam_7_T_1 = mux(perChannel, _effectiveParam_7_T, io_matrix_param) @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
    node _effectiveParam_8_T = mux(tileStart, shadowParam_8, activeParam_8) @[src/main/scala/npu/core/QuantActUnit.scala 328:12]
    node _effectiveParam_8_T_1 = mux(perChannel, _effectiveParam_8_T, io_matrix_param) @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
    node _effectiveParam_9_T = mux(tileStart, shadowParam_9, activeParam_9) @[src/main/scala/npu/core/QuantActUnit.scala 328:12]
    node _effectiveParam_9_T_1 = mux(perChannel, _effectiveParam_9_T, io_matrix_param) @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
    node _effectiveParam_10_T = mux(tileStart, shadowParam_10, activeParam_10) @[src/main/scala/npu/core/QuantActUnit.scala 328:12]
    node _effectiveParam_10_T_1 = mux(perChannel, _effectiveParam_10_T, io_matrix_param) @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
    node _effectiveParam_11_T = mux(tileStart, shadowParam_11, activeParam_11) @[src/main/scala/npu/core/QuantActUnit.scala 328:12]
    node _effectiveParam_11_T_1 = mux(perChannel, _effectiveParam_11_T, io_matrix_param) @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
    node _effectiveParam_12_T = mux(tileStart, shadowParam_12, activeParam_12) @[src/main/scala/npu/core/QuantActUnit.scala 328:12]
    node _effectiveParam_12_T_1 = mux(perChannel, _effectiveParam_12_T, io_matrix_param) @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
    node _effectiveParam_13_T = mux(tileStart, shadowParam_13, activeParam_13) @[src/main/scala/npu/core/QuantActUnit.scala 328:12]
    node _effectiveParam_13_T_1 = mux(perChannel, _effectiveParam_13_T, io_matrix_param) @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
    node _effectiveParam_14_T = mux(tileStart, shadowParam_14, activeParam_14) @[src/main/scala/npu/core/QuantActUnit.scala 328:12]
    node _effectiveParam_14_T_1 = mux(perChannel, _effectiveParam_14_T, io_matrix_param) @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
    node _effectiveParam_15_T = mux(tileStart, shadowParam_15, activeParam_15) @[src/main/scala/npu/core/QuantActUnit.scala 328:12]
    node _effectiveParam_15_T_1 = mux(perChannel, _effectiveParam_15_T, io_matrix_param) @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
    reg primed : UInt<1>, clock with :
      reset => (UInt<1>("h0"), primed) @[src/main/scala/npu/core/QuantActUnit.scala 333:23]
    node _T_5 = eq(perChannel, UInt<1>("h0")) @[src/main/scala/npu/core/QuantActUnit.scala 334:25]
    node _T_6 = or(io_soft_reset, _T_5) @[src/main/scala/npu/core/QuantActUnit.scala 334:22]
    node _GEN_92 = mux(shadowValid, UInt<1>("h1"), primed) @[src/main/scala/npu/core/QuantActUnit.scala 336:27 337:12 333:23]
    node _GEN_93 = mux(_T_6, UInt<1>("h0"), _GEN_92) @[src/main/scala/npu/core/QuantActUnit.scala 334:38 335:12]
    node _io_busy_WIRE_1 = cores_1.io_busy @[src/main/scala/npu/core/QuantActUnit.scala 369:{21,21}]
    node _io_busy_WIRE_0 = cores_0.io_busy @[src/main/scala/npu/core/QuantActUnit.scala 369:{21,21}]
    node io_busy_lo_lo_lo = cat(_io_busy_WIRE_1, _io_busy_WIRE_0) @[src/main/scala/npu/core/QuantActUnit.scala 369:44]
    node _io_busy_WIRE_3 = cores_3.io_busy @[src/main/scala/npu/core/QuantActUnit.scala 369:{21,21}]
    node _io_busy_WIRE_2 = cores_2.io_busy @[src/main/scala/npu/core/QuantActUnit.scala 369:{21,21}]
    node io_busy_lo_lo_hi = cat(_io_busy_WIRE_3, _io_busy_WIRE_2) @[src/main/scala/npu/core/QuantActUnit.scala 369:44]
    node io_busy_lo_lo = cat(io_busy_lo_lo_hi, io_busy_lo_lo_lo) @[src/main/scala/npu/core/QuantActUnit.scala 369:44]
    node _io_busy_WIRE_5 = cores_5.io_busy @[src/main/scala/npu/core/QuantActUnit.scala 369:{21,21}]
    node _io_busy_WIRE_4 = cores_4.io_busy @[src/main/scala/npu/core/QuantActUnit.scala 369:{21,21}]
    node io_busy_lo_hi_lo = cat(_io_busy_WIRE_5, _io_busy_WIRE_4) @[src/main/scala/npu/core/QuantActUnit.scala 369:44]
    node _io_busy_WIRE_7 = cores_7.io_busy @[src/main/scala/npu/core/QuantActUnit.scala 369:{21,21}]
    node _io_busy_WIRE_6 = cores_6.io_busy @[src/main/scala/npu/core/QuantActUnit.scala 369:{21,21}]
    node io_busy_lo_hi_hi = cat(_io_busy_WIRE_7, _io_busy_WIRE_6) @[src/main/scala/npu/core/QuantActUnit.scala 369:44]
    node io_busy_lo_hi = cat(io_busy_lo_hi_hi, io_busy_lo_hi_lo) @[src/main/scala/npu/core/QuantActUnit.scala 369:44]
    node io_busy_lo = cat(io_busy_lo_hi, io_busy_lo_lo) @[src/main/scala/npu/core/QuantActUnit.scala 369:44]
    node _io_busy_WIRE_9 = cores_9.io_busy @[src/main/scala/npu/core/QuantActUnit.scala 369:{21,21}]
    node _io_busy_WIRE_8 = cores_8.io_busy @[src/main/scala/npu/core/QuantActUnit.scala 369:{21,21}]
    node io_busy_hi_lo_lo = cat(_io_busy_WIRE_9, _io_busy_WIRE_8) @[src/main/scala/npu/core/QuantActUnit.scala 369:44]
    node _io_busy_WIRE_11 = cores_11.io_busy @[src/main/scala/npu/core/QuantActUnit.scala 369:{21,21}]
    node _io_busy_WIRE_10 = cores_10.io_busy @[src/main/scala/npu/core/QuantActUnit.scala 369:{21,21}]
    node io_busy_hi_lo_hi = cat(_io_busy_WIRE_11, _io_busy_WIRE_10) @[src/main/scala/npu/core/QuantActUnit.scala 369:44]
    node io_busy_hi_lo = cat(io_busy_hi_lo_hi, io_busy_hi_lo_lo) @[src/main/scala/npu/core/QuantActUnit.scala 369:44]
    node _io_busy_WIRE_13 = cores_13.io_busy @[src/main/scala/npu/core/QuantActUnit.scala 369:{21,21}]
    node _io_busy_WIRE_12 = cores_12.io_busy @[src/main/scala/npu/core/QuantActUnit.scala 369:{21,21}]
    node io_busy_hi_hi_lo = cat(_io_busy_WIRE_13, _io_busy_WIRE_12) @[src/main/scala/npu/core/QuantActUnit.scala 369:44]
    node _io_busy_WIRE_15 = cores_15.io_busy @[src/main/scala/npu/core/QuantActUnit.scala 369:{21,21}]
    node _io_busy_WIRE_14 = cores_14.io_busy @[src/main/scala/npu/core/QuantActUnit.scala 369:{21,21}]
    node io_busy_hi_hi_hi = cat(_io_busy_WIRE_15, _io_busy_WIRE_14) @[src/main/scala/npu/core/QuantActUnit.scala 369:44]
    node io_busy_hi_hi = cat(io_busy_hi_hi_hi, io_busy_hi_hi_lo) @[src/main/scala/npu/core/QuantActUnit.scala 369:44]
    node io_busy_hi = cat(io_busy_hi_hi, io_busy_hi_lo) @[src/main/scala/npu/core/QuantActUnit.scala 369:44]
    node _io_busy_T = cat(io_busy_hi, io_busy_lo) @[src/main/scala/npu/core/QuantActUnit.scala 369:44]
    node _io_busy_T_1 = orr(_io_busy_T) @[src/main/scala/npu/core/QuantActUnit.scala 369:51]
    node _io_lut_ready_WIRE_1 = cores_1.io_lut_ready @[src/main/scala/npu/core/QuantActUnit.scala 372:{12,12}]
    node _io_lut_ready_WIRE_0 = cores_0.io_lut_ready @[src/main/scala/npu/core/QuantActUnit.scala 372:{12,12}]
    node io_lut_ready_lo_lo_lo = cat(_io_lut_ready_WIRE_1, _io_lut_ready_WIRE_0) @[src/main/scala/npu/core/QuantActUnit.scala 372:40]
    node _io_lut_ready_WIRE_3 = cores_3.io_lut_ready @[src/main/scala/npu/core/QuantActUnit.scala 372:{12,12}]
    node _io_lut_ready_WIRE_2 = cores_2.io_lut_ready @[src/main/scala/npu/core/QuantActUnit.scala 372:{12,12}]
    node io_lut_ready_lo_lo_hi = cat(_io_lut_ready_WIRE_3, _io_lut_ready_WIRE_2) @[src/main/scala/npu/core/QuantActUnit.scala 372:40]
    node io_lut_ready_lo_lo = cat(io_lut_ready_lo_lo_hi, io_lut_ready_lo_lo_lo) @[src/main/scala/npu/core/QuantActUnit.scala 372:40]
    node _io_lut_ready_WIRE_5 = cores_5.io_lut_ready @[src/main/scala/npu/core/QuantActUnit.scala 372:{12,12}]
    node _io_lut_ready_WIRE_4 = cores_4.io_lut_ready @[src/main/scala/npu/core/QuantActUnit.scala 372:{12,12}]
    node io_lut_ready_lo_hi_lo = cat(_io_lut_ready_WIRE_5, _io_lut_ready_WIRE_4) @[src/main/scala/npu/core/QuantActUnit.scala 372:40]
    node _io_lut_ready_WIRE_7 = cores_7.io_lut_ready @[src/main/scala/npu/core/QuantActUnit.scala 372:{12,12}]
    node _io_lut_ready_WIRE_6 = cores_6.io_lut_ready @[src/main/scala/npu/core/QuantActUnit.scala 372:{12,12}]
    node io_lut_ready_lo_hi_hi = cat(_io_lut_ready_WIRE_7, _io_lut_ready_WIRE_6) @[src/main/scala/npu/core/QuantActUnit.scala 372:40]
    node io_lut_ready_lo_hi = cat(io_lut_ready_lo_hi_hi, io_lut_ready_lo_hi_lo) @[src/main/scala/npu/core/QuantActUnit.scala 372:40]
    node io_lut_ready_lo = cat(io_lut_ready_lo_hi, io_lut_ready_lo_lo) @[src/main/scala/npu/core/QuantActUnit.scala 372:40]
    node _io_lut_ready_WIRE_9 = cores_9.io_lut_ready @[src/main/scala/npu/core/QuantActUnit.scala 372:{12,12}]
    node _io_lut_ready_WIRE_8 = cores_8.io_lut_ready @[src/main/scala/npu/core/QuantActUnit.scala 372:{12,12}]
    node io_lut_ready_hi_lo_lo = cat(_io_lut_ready_WIRE_9, _io_lut_ready_WIRE_8) @[src/main/scala/npu/core/QuantActUnit.scala 372:40]
    node _io_lut_ready_WIRE_11 = cores_11.io_lut_ready @[src/main/scala/npu/core/QuantActUnit.scala 372:{12,12}]
    node _io_lut_ready_WIRE_10 = cores_10.io_lut_ready @[src/main/scala/npu/core/QuantActUnit.scala 372:{12,12}]
    node io_lut_ready_hi_lo_hi = cat(_io_lut_ready_WIRE_11, _io_lut_ready_WIRE_10) @[src/main/scala/npu/core/QuantActUnit.scala 372:40]
    node io_lut_ready_hi_lo = cat(io_lut_ready_hi_lo_hi, io_lut_ready_hi_lo_lo) @[src/main/scala/npu/core/QuantActUnit.scala 372:40]
    node _io_lut_ready_WIRE_13 = cores_13.io_lut_ready @[src/main/scala/npu/core/QuantActUnit.scala 372:{12,12}]
    node _io_lut_ready_WIRE_12 = cores_12.io_lut_ready @[src/main/scala/npu/core/QuantActUnit.scala 372:{12,12}]
    node io_lut_ready_hi_hi_lo = cat(_io_lut_ready_WIRE_13, _io_lut_ready_WIRE_12) @[src/main/scala/npu/core/QuantActUnit.scala 372:40]
    node _io_lut_ready_WIRE_15 = cores_15.io_lut_ready @[src/main/scala/npu/core/QuantActUnit.scala 372:{12,12}]
    node _io_lut_ready_WIRE_14 = cores_14.io_lut_ready @[src/main/scala/npu/core/QuantActUnit.scala 372:{12,12}]
    node io_lut_ready_hi_hi_hi = cat(_io_lut_ready_WIRE_15, _io_lut_ready_WIRE_14) @[src/main/scala/npu/core/QuantActUnit.scala 372:40]
    node io_lut_ready_hi_hi = cat(io_lut_ready_hi_hi_hi, io_lut_ready_hi_hi_lo) @[src/main/scala/npu/core/QuantActUnit.scala 372:40]
    node io_lut_ready_hi = cat(io_lut_ready_hi_hi, io_lut_ready_hi_lo) @[src/main/scala/npu/core/QuantActUnit.scala 372:40]
    node _io_lut_ready_T = cat(io_lut_ready_hi, io_lut_ready_lo) @[src/main/scala/npu/core/QuantActUnit.scala 372:40]
    node _io_lut_ready_T_1 = andr(_io_lut_ready_T) @[src/main/scala/npu/core/QuantActUnit.scala 372:47]
    node _io_prefetch_ready_T = eq(perChannel, UInt<1>("h0")) @[src/main/scala/npu/core/QuantActUnit.scala 375:5]
    node _io_prefetch_ready_T_1 = and(primed, io_lut_ready) @[src/main/scala/npu/core/QuantActUnit.scala 375:28]
    node _io_prefetch_ready_T_2 = or(_io_prefetch_ready_T, _io_prefetch_ready_T_1) @[src/main/scala/npu/core/QuantActUnit.scala 375:17]
    node _coreAlert_WIRE_1 = cores_1.io_sync_alert @[src/main/scala/npu/core/QuantActUnit.scala 378:{12,12}]
    node _coreAlert_WIRE_0 = cores_0.io_sync_alert @[src/main/scala/npu/core/QuantActUnit.scala 378:{12,12}]
    node coreAlert_lo_lo_lo = cat(_coreAlert_WIRE_1, _coreAlert_WIRE_0) @[src/main/scala/npu/core/QuantActUnit.scala 378:41]
    node _coreAlert_WIRE_3 = cores_3.io_sync_alert @[src/main/scala/npu/core/QuantActUnit.scala 378:{12,12}]
    node _coreAlert_WIRE_2 = cores_2.io_sync_alert @[src/main/scala/npu/core/QuantActUnit.scala 378:{12,12}]
    node coreAlert_lo_lo_hi = cat(_coreAlert_WIRE_3, _coreAlert_WIRE_2) @[src/main/scala/npu/core/QuantActUnit.scala 378:41]
    node coreAlert_lo_lo = cat(coreAlert_lo_lo_hi, coreAlert_lo_lo_lo) @[src/main/scala/npu/core/QuantActUnit.scala 378:41]
    node _coreAlert_WIRE_5 = cores_5.io_sync_alert @[src/main/scala/npu/core/QuantActUnit.scala 378:{12,12}]
    node _coreAlert_WIRE_4 = cores_4.io_sync_alert @[src/main/scala/npu/core/QuantActUnit.scala 378:{12,12}]
    node coreAlert_lo_hi_lo = cat(_coreAlert_WIRE_5, _coreAlert_WIRE_4) @[src/main/scala/npu/core/QuantActUnit.scala 378:41]
    node _coreAlert_WIRE_7 = cores_7.io_sync_alert @[src/main/scala/npu/core/QuantActUnit.scala 378:{12,12}]
    node _coreAlert_WIRE_6 = cores_6.io_sync_alert @[src/main/scala/npu/core/QuantActUnit.scala 378:{12,12}]
    node coreAlert_lo_hi_hi = cat(_coreAlert_WIRE_7, _coreAlert_WIRE_6) @[src/main/scala/npu/core/QuantActUnit.scala 378:41]
    node coreAlert_lo_hi = cat(coreAlert_lo_hi_hi, coreAlert_lo_hi_lo) @[src/main/scala/npu/core/QuantActUnit.scala 378:41]
    node coreAlert_lo = cat(coreAlert_lo_hi, coreAlert_lo_lo) @[src/main/scala/npu/core/QuantActUnit.scala 378:41]
    node _coreAlert_WIRE_9 = cores_9.io_sync_alert @[src/main/scala/npu/core/QuantActUnit.scala 378:{12,12}]
    node _coreAlert_WIRE_8 = cores_8.io_sync_alert @[src/main/scala/npu/core/QuantActUnit.scala 378:{12,12}]
    node coreAlert_hi_lo_lo = cat(_coreAlert_WIRE_9, _coreAlert_WIRE_8) @[src/main/scala/npu/core/QuantActUnit.scala 378:41]
    node _coreAlert_WIRE_11 = cores_11.io_sync_alert @[src/main/scala/npu/core/QuantActUnit.scala 378:{12,12}]
    node _coreAlert_WIRE_10 = cores_10.io_sync_alert @[src/main/scala/npu/core/QuantActUnit.scala 378:{12,12}]
    node coreAlert_hi_lo_hi = cat(_coreAlert_WIRE_11, _coreAlert_WIRE_10) @[src/main/scala/npu/core/QuantActUnit.scala 378:41]
    node coreAlert_hi_lo = cat(coreAlert_hi_lo_hi, coreAlert_hi_lo_lo) @[src/main/scala/npu/core/QuantActUnit.scala 378:41]
    node _coreAlert_WIRE_13 = cores_13.io_sync_alert @[src/main/scala/npu/core/QuantActUnit.scala 378:{12,12}]
    node _coreAlert_WIRE_12 = cores_12.io_sync_alert @[src/main/scala/npu/core/QuantActUnit.scala 378:{12,12}]
    node coreAlert_hi_hi_lo = cat(_coreAlert_WIRE_13, _coreAlert_WIRE_12) @[src/main/scala/npu/core/QuantActUnit.scala 378:41]
    node _coreAlert_WIRE_15 = cores_15.io_sync_alert @[src/main/scala/npu/core/QuantActUnit.scala 378:{12,12}]
    node _coreAlert_WIRE_14 = cores_14.io_sync_alert @[src/main/scala/npu/core/QuantActUnit.scala 378:{12,12}]
    node coreAlert_hi_hi_hi = cat(_coreAlert_WIRE_15, _coreAlert_WIRE_14) @[src/main/scala/npu/core/QuantActUnit.scala 378:41]
    node coreAlert_hi_hi = cat(coreAlert_hi_hi_hi, coreAlert_hi_hi_lo) @[src/main/scala/npu/core/QuantActUnit.scala 378:41]
    node coreAlert_hi = cat(coreAlert_hi_hi, coreAlert_hi_lo) @[src/main/scala/npu/core/QuantActUnit.scala 378:41]
    node _coreAlert_T = cat(coreAlert_hi, coreAlert_lo) @[src/main/scala/npu/core/QuantActUnit.scala 378:41]
    node coreAlert = orr(_coreAlert_T) @[src/main/scala/npu/core/QuantActUnit.scala 378:48]
    node _laneMismatch_T = eq(allValid, UInt<1>("h0")) @[src/main/scala/npu/core/QuantActUnit.scala 380:34]
    node laneMismatch = and(anyValid, _laneMismatch_T) @[src/main/scala/npu/core/QuantActUnit.scala 380:31]
    node _firstTileWithoutShadow_T = eq(shadowValid, UInt<1>("h0")) @[src/main/scala/npu/core/QuantActUnit.scala 381:49]
    node firstTileWithoutShadow = and(consumeShadow, _firstTileWithoutShadow_T) @[src/main/scala/npu/core/QuantActUnit.scala 381:46]
    node _laterTileWithoutActive_T = and(perChannel, inputFire) @[src/main/scala/npu/core/QuantActUnit.scala 383:16]
    node _laterTileWithoutActive_T_1 = eq(tileStart, UInt<1>("h0")) @[src/main/scala/npu/core/QuantActUnit.scala 383:32]
    node _laterTileWithoutActive_T_2 = and(_laterTileWithoutActive_T, _laterTileWithoutActive_T_1) @[src/main/scala/npu/core/QuantActUnit.scala 383:29]
    node _laterTileWithoutActive_T_3 = eq(activeValid, UInt<1>("h0")) @[src/main/scala/npu/core/QuantActUnit.scala 383:46]
    node laterTileWithoutActive = and(_laterTileWithoutActive_T_2, _laterTileWithoutActive_T_3) @[src/main/scala/npu/core/QuantActUnit.scala 383:43]
    node _unexpectedResponse_T = and(perChannel, io_qparam_line_valid) @[src/main/scala/npu/core/QuantActUnit.scala 386:16]
    node _unexpectedResponse_T_1 = and(_unexpectedResponse_T, shadowValid) @[src/main/scala/npu/core/QuantActUnit.scala 386:40]
    node _unexpectedResponse_T_2 = eq(consumeShadow, UInt<1>("h0")) @[src/main/scala/npu/core/QuantActUnit.scala 388:5]
    node unexpectedResponse = and(_unexpectedResponse_T_1, _unexpectedResponse_T_2) @[src/main/scala/npu/core/QuantActUnit.scala 387:17]
    node _io_sync_alert_T = or(coreAlert, laneMismatch) @[src/main/scala/npu/core/QuantActUnit.scala 391:15]
    node _io_sync_alert_T_1 = or(_io_sync_alert_T, firstTileWithoutShadow) @[src/main/scala/npu/core/QuantActUnit.scala 392:18]
    node _io_sync_alert_T_2 = or(_io_sync_alert_T_1, laterTileWithoutActive) @[src/main/scala/npu/core/QuantActUnit.scala 393:28]
    node _io_sync_alert_T_3 = or(_io_sync_alert_T_2, unexpectedResponse) @[src/main/scala/npu/core/QuantActUnit.scala 394:28]
    node _activeParam_WIRE_0 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 274:{20,20}]
    node _activeParam_WIRE_1 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 274:{20,20}]
    node _activeParam_WIRE_2 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 274:{20,20}]
    node _activeParam_WIRE_3 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 274:{20,20}]
    node _activeParam_WIRE_4 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 274:{20,20}]
    node _activeParam_WIRE_5 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 274:{20,20}]
    node _activeParam_WIRE_6 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 274:{20,20}]
    node _activeParam_WIRE_7 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 274:{20,20}]
    node _activeParam_WIRE_8 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 274:{20,20}]
    node _activeParam_WIRE_9 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 274:{20,20}]
    node _activeParam_WIRE_10 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 274:{20,20}]
    node _activeParam_WIRE_11 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 274:{20,20}]
    node _activeParam_WIRE_12 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 274:{20,20}]
    node _activeParam_WIRE_13 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 274:{20,20}]
    node _activeParam_WIRE_14 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 274:{20,20}]
    node _activeParam_WIRE_15 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 274:{20,20}]
    node _shadowParam_WIRE_0 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 277:{20,20}]
    node _shadowParam_WIRE_1 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 277:{20,20}]
    node _shadowParam_WIRE_2 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 277:{20,20}]
    node _shadowParam_WIRE_3 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 277:{20,20}]
    node _shadowParam_WIRE_4 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 277:{20,20}]
    node _shadowParam_WIRE_5 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 277:{20,20}]
    node _shadowParam_WIRE_6 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 277:{20,20}]
    node _shadowParam_WIRE_7 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 277:{20,20}]
    node _shadowParam_WIRE_8 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 277:{20,20}]
    node _shadowParam_WIRE_9 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 277:{20,20}]
    node _shadowParam_WIRE_10 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 277:{20,20}]
    node _shadowParam_WIRE_11 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 277:{20,20}]
    node _shadowParam_WIRE_12 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 277:{20,20}]
    node _shadowParam_WIRE_13 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 277:{20,20}]
    node _shadowParam_WIRE_14 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 277:{20,20}]
    node _shadowParam_WIRE_15 = UInt<32>("h0") @[src/main/scala/npu/core/QuantActUnit.scala 277:{20,20}]
    node effectiveParam_0 = _effectiveParam_0_T_1 @[src/main/scala/npu/core/QuantActUnit.scala 322:9 325:23]
    node effectiveParam_1 = _effectiveParam_1_T_1 @[src/main/scala/npu/core/QuantActUnit.scala 322:9 325:23]
    node effectiveParam_2 = _effectiveParam_2_T_1 @[src/main/scala/npu/core/QuantActUnit.scala 322:9 325:23]
    node effectiveParam_3 = _effectiveParam_3_T_1 @[src/main/scala/npu/core/QuantActUnit.scala 322:9 325:23]
    node effectiveParam_4 = _effectiveParam_4_T_1 @[src/main/scala/npu/core/QuantActUnit.scala 322:9 325:23]
    node effectiveParam_5 = _effectiveParam_5_T_1 @[src/main/scala/npu/core/QuantActUnit.scala 322:9 325:23]
    node effectiveParam_6 = _effectiveParam_6_T_1 @[src/main/scala/npu/core/QuantActUnit.scala 322:9 325:23]
    node effectiveParam_7 = _effectiveParam_7_T_1 @[src/main/scala/npu/core/QuantActUnit.scala 322:9 325:23]
    node effectiveParam_8 = _effectiveParam_8_T_1 @[src/main/scala/npu/core/QuantActUnit.scala 322:9 325:23]
    node effectiveParam_9 = _effectiveParam_9_T_1 @[src/main/scala/npu/core/QuantActUnit.scala 322:9 325:23]
    node effectiveParam_10 = _effectiveParam_10_T_1 @[src/main/scala/npu/core/QuantActUnit.scala 322:9 325:23]
    node effectiveParam_11 = _effectiveParam_11_T_1 @[src/main/scala/npu/core/QuantActUnit.scala 322:9 325:23]
    node effectiveParam_12 = _effectiveParam_12_T_1 @[src/main/scala/npu/core/QuantActUnit.scala 322:9 325:23]
    node effectiveParam_13 = _effectiveParam_13_T_1 @[src/main/scala/npu/core/QuantActUnit.scala 322:9 325:23]
    node effectiveParam_14 = _effectiveParam_14_T_1 @[src/main/scala/npu/core/QuantActUnit.scala 322:9 325:23]
    node effectiveParam_15 = _effectiveParam_15_T_1 @[src/main/scala/npu/core/QuantActUnit.scala 322:9 325:23]
    io_qparam_req_line <= _io_qparam_req_line_T_6 @[src/main/scala/npu/core/QuantActUnit.scala 288:22]
    io_out_vec_0 <= cores_0.io_out_qact @[src/main/scala/npu/core/QuantActUnit.scala 364:19]
    io_out_vec_1 <= cores_1.io_out_qact @[src/main/scala/npu/core/QuantActUnit.scala 364:19]
    io_out_vec_2 <= cores_2.io_out_qact @[src/main/scala/npu/core/QuantActUnit.scala 364:19]
    io_out_vec_3 <= cores_3.io_out_qact @[src/main/scala/npu/core/QuantActUnit.scala 364:19]
    io_out_vec_4 <= cores_4.io_out_qact @[src/main/scala/npu/core/QuantActUnit.scala 364:19]
    io_out_vec_5 <= cores_5.io_out_qact @[src/main/scala/npu/core/QuantActUnit.scala 364:19]
    io_out_vec_6 <= cores_6.io_out_qact @[src/main/scala/npu/core/QuantActUnit.scala 364:19]
    io_out_vec_7 <= cores_7.io_out_qact @[src/main/scala/npu/core/QuantActUnit.scala 364:19]
    io_out_vec_8 <= cores_8.io_out_qact @[src/main/scala/npu/core/QuantActUnit.scala 364:19]
    io_out_vec_9 <= cores_9.io_out_qact @[src/main/scala/npu/core/QuantActUnit.scala 364:19]
    io_out_vec_10 <= cores_10.io_out_qact @[src/main/scala/npu/core/QuantActUnit.scala 364:19]
    io_out_vec_11 <= cores_11.io_out_qact @[src/main/scala/npu/core/QuantActUnit.scala 364:19]
    io_out_vec_12 <= cores_12.io_out_qact @[src/main/scala/npu/core/QuantActUnit.scala 364:19]
    io_out_vec_13 <= cores_13.io_out_qact @[src/main/scala/npu/core/QuantActUnit.scala 364:19]
    io_out_vec_14 <= cores_14.io_out_qact @[src/main/scala/npu/core/QuantActUnit.scala 364:19]
    io_out_vec_15 <= cores_15.io_out_qact @[src/main/scala/npu/core/QuantActUnit.scala 364:19]
    io_out_valid_0 <= cores_0.io_out_valid @[src/main/scala/npu/core/QuantActUnit.scala 365:21]
    io_out_valid_1 <= cores_1.io_out_valid @[src/main/scala/npu/core/QuantActUnit.scala 365:21]
    io_out_valid_2 <= cores_2.io_out_valid @[src/main/scala/npu/core/QuantActUnit.scala 365:21]
    io_out_valid_3 <= cores_3.io_out_valid @[src/main/scala/npu/core/QuantActUnit.scala 365:21]
    io_out_valid_4 <= cores_4.io_out_valid @[src/main/scala/npu/core/QuantActUnit.scala 365:21]
    io_out_valid_5 <= cores_5.io_out_valid @[src/main/scala/npu/core/QuantActUnit.scala 365:21]
    io_out_valid_6 <= cores_6.io_out_valid @[src/main/scala/npu/core/QuantActUnit.scala 365:21]
    io_out_valid_7 <= cores_7.io_out_valid @[src/main/scala/npu/core/QuantActUnit.scala 365:21]
    io_out_valid_8 <= cores_8.io_out_valid @[src/main/scala/npu/core/QuantActUnit.scala 365:21]
    io_out_valid_9 <= cores_9.io_out_valid @[src/main/scala/npu/core/QuantActUnit.scala 365:21]
    io_out_valid_10 <= cores_10.io_out_valid @[src/main/scala/npu/core/QuantActUnit.scala 365:21]
    io_out_valid_11 <= cores_11.io_out_valid @[src/main/scala/npu/core/QuantActUnit.scala 365:21]
    io_out_valid_12 <= cores_12.io_out_valid @[src/main/scala/npu/core/QuantActUnit.scala 365:21]
    io_out_valid_13 <= cores_13.io_out_valid @[src/main/scala/npu/core/QuantActUnit.scala 365:21]
    io_out_valid_14 <= cores_14.io_out_valid @[src/main/scala/npu/core/QuantActUnit.scala 365:21]
    io_out_valid_15 <= cores_15.io_out_valid @[src/main/scala/npu/core/QuantActUnit.scala 365:21]
    io_out_lookahead_0 <= cores_0.io_out_lookahead @[src/main/scala/npu/core/QuantActUnit.scala 366:25]
    io_out_lookahead_1 <= cores_1.io_out_lookahead @[src/main/scala/npu/core/QuantActUnit.scala 366:25]
    io_out_lookahead_2 <= cores_2.io_out_lookahead @[src/main/scala/npu/core/QuantActUnit.scala 366:25]
    io_out_lookahead_3 <= cores_3.io_out_lookahead @[src/main/scala/npu/core/QuantActUnit.scala 366:25]
    io_out_lookahead_4 <= cores_4.io_out_lookahead @[src/main/scala/npu/core/QuantActUnit.scala 366:25]
    io_out_lookahead_5 <= cores_5.io_out_lookahead @[src/main/scala/npu/core/QuantActUnit.scala 366:25]
    io_out_lookahead_6 <= cores_6.io_out_lookahead @[src/main/scala/npu/core/QuantActUnit.scala 366:25]
    io_out_lookahead_7 <= cores_7.io_out_lookahead @[src/main/scala/npu/core/QuantActUnit.scala 366:25]
    io_out_lookahead_8 <= cores_8.io_out_lookahead @[src/main/scala/npu/core/QuantActUnit.scala 366:25]
    io_out_lookahead_9 <= cores_9.io_out_lookahead @[src/main/scala/npu/core/QuantActUnit.scala 366:25]
    io_out_lookahead_10 <= cores_10.io_out_lookahead @[src/main/scala/npu/core/QuantActUnit.scala 366:25]
    io_out_lookahead_11 <= cores_11.io_out_lookahead @[src/main/scala/npu/core/QuantActUnit.scala 366:25]
    io_out_lookahead_12 <= cores_12.io_out_lookahead @[src/main/scala/npu/core/QuantActUnit.scala 366:25]
    io_out_lookahead_13 <= cores_13.io_out_lookahead @[src/main/scala/npu/core/QuantActUnit.scala 366:25]
    io_out_lookahead_14 <= cores_14.io_out_lookahead @[src/main/scala/npu/core/QuantActUnit.scala 366:25]
    io_out_lookahead_15 <= cores_15.io_out_lookahead @[src/main/scala/npu/core/QuantActUnit.scala 366:25]
    io_busy <= _io_busy_T_1 @[src/main/scala/npu/core/QuantActUnit.scala 369:11]
    io_prefetch_ready <= _io_prefetch_ready_T_2 @[src/main/scala/npu/core/QuantActUnit.scala 374:21]
    io_lut_ready <= _io_lut_ready_T_1 @[src/main/scala/npu/core/QuantActUnit.scala 371:16]
    io_sync_alert <= _io_sync_alert_T_3 @[src/main/scala/npu/core/QuantActUnit.scala 390:17]
    rowCounter <= mux(reset, UInt<4>("h0"), _GEN_2) @[src/main/scala/npu/core/QuantActUnit.scala 259:{27,27}]
    activeParam_0 <= mux(reset, _activeParam_WIRE_0, _GEN_60) @[src/main/scala/npu/core/QuantActUnit.scala 274:{12,12}]
    activeParam_1 <= mux(reset, _activeParam_WIRE_1, _GEN_61) @[src/main/scala/npu/core/QuantActUnit.scala 274:{12,12}]
    activeParam_2 <= mux(reset, _activeParam_WIRE_2, _GEN_62) @[src/main/scala/npu/core/QuantActUnit.scala 274:{12,12}]
    activeParam_3 <= mux(reset, _activeParam_WIRE_3, _GEN_63) @[src/main/scala/npu/core/QuantActUnit.scala 274:{12,12}]
    activeParam_4 <= mux(reset, _activeParam_WIRE_4, _GEN_64) @[src/main/scala/npu/core/QuantActUnit.scala 274:{12,12}]
    activeParam_5 <= mux(reset, _activeParam_WIRE_5, _GEN_65) @[src/main/scala/npu/core/QuantActUnit.scala 274:{12,12}]
    activeParam_6 <= mux(reset, _activeParam_WIRE_6, _GEN_66) @[src/main/scala/npu/core/QuantActUnit.scala 274:{12,12}]
    activeParam_7 <= mux(reset, _activeParam_WIRE_7, _GEN_67) @[src/main/scala/npu/core/QuantActUnit.scala 274:{12,12}]
    activeParam_8 <= mux(reset, _activeParam_WIRE_8, _GEN_68) @[src/main/scala/npu/core/QuantActUnit.scala 274:{12,12}]
    activeParam_9 <= mux(reset, _activeParam_WIRE_9, _GEN_69) @[src/main/scala/npu/core/QuantActUnit.scala 274:{12,12}]
    activeParam_10 <= mux(reset, _activeParam_WIRE_10, _GEN_70) @[src/main/scala/npu/core/QuantActUnit.scala 274:{12,12}]
    activeParam_11 <= mux(reset, _activeParam_WIRE_11, _GEN_71) @[src/main/scala/npu/core/QuantActUnit.scala 274:{12,12}]
    activeParam_12 <= mux(reset, _activeParam_WIRE_12, _GEN_72) @[src/main/scala/npu/core/QuantActUnit.scala 274:{12,12}]
    activeParam_13 <= mux(reset, _activeParam_WIRE_13, _GEN_73) @[src/main/scala/npu/core/QuantActUnit.scala 274:{12,12}]
    activeParam_14 <= mux(reset, _activeParam_WIRE_14, _GEN_74) @[src/main/scala/npu/core/QuantActUnit.scala 274:{12,12}]
    activeParam_15 <= mux(reset, _activeParam_WIRE_15, _GEN_75) @[src/main/scala/npu/core/QuantActUnit.scala 274:{12,12}]
    shadowParam_0 <= mux(reset, _shadowParam_WIRE_0, _GEN_76) @[src/main/scala/npu/core/QuantActUnit.scala 277:{12,12}]
    shadowParam_1 <= mux(reset, _shadowParam_WIRE_1, _GEN_77) @[src/main/scala/npu/core/QuantActUnit.scala 277:{12,12}]
    shadowParam_2 <= mux(reset, _shadowParam_WIRE_2, _GEN_78) @[src/main/scala/npu/core/QuantActUnit.scala 277:{12,12}]
    shadowParam_3 <= mux(reset, _shadowParam_WIRE_3, _GEN_79) @[src/main/scala/npu/core/QuantActUnit.scala 277:{12,12}]
    shadowParam_4 <= mux(reset, _shadowParam_WIRE_4, _GEN_80) @[src/main/scala/npu/core/QuantActUnit.scala 277:{12,12}]
    shadowParam_5 <= mux(reset, _shadowParam_WIRE_5, _GEN_81) @[src/main/scala/npu/core/QuantActUnit.scala 277:{12,12}]
    shadowParam_6 <= mux(reset, _shadowParam_WIRE_6, _GEN_82) @[src/main/scala/npu/core/QuantActUnit.scala 277:{12,12}]
    shadowParam_7 <= mux(reset, _shadowParam_WIRE_7, _GEN_83) @[src/main/scala/npu/core/QuantActUnit.scala 277:{12,12}]
    shadowParam_8 <= mux(reset, _shadowParam_WIRE_8, _GEN_84) @[src/main/scala/npu/core/QuantActUnit.scala 277:{12,12}]
    shadowParam_9 <= mux(reset, _shadowParam_WIRE_9, _GEN_85) @[src/main/scala/npu/core/QuantActUnit.scala 277:{12,12}]
    shadowParam_10 <= mux(reset, _shadowParam_WIRE_10, _GEN_86) @[src/main/scala/npu/core/QuantActUnit.scala 277:{12,12}]
    shadowParam_11 <= mux(reset, _shadowParam_WIRE_11, _GEN_87) @[src/main/scala/npu/core/QuantActUnit.scala 277:{12,12}]
    shadowParam_12 <= mux(reset, _shadowParam_WIRE_12, _GEN_88) @[src/main/scala/npu/core/QuantActUnit.scala 277:{12,12}]
    shadowParam_13 <= mux(reset, _shadowParam_WIRE_13, _GEN_89) @[src/main/scala/npu/core/QuantActUnit.scala 277:{12,12}]
    shadowParam_14 <= mux(reset, _shadowParam_WIRE_14, _GEN_90) @[src/main/scala/npu/core/QuantActUnit.scala 277:{12,12}]
    shadowParam_15 <= mux(reset, _shadowParam_WIRE_15, _GEN_91) @[src/main/scala/npu/core/QuantActUnit.scala 277:{12,12}]
    activeValid <= mux(reset, UInt<1>("h0"), _GEN_57) @[src/main/scala/npu/core/QuantActUnit.scala 279:{28,28}]
    shadowValid <= mux(reset, UInt<1>("h0"), _GEN_58) @[src/main/scala/npu/core/QuantActUnit.scala 280:{28,28}]
    reqOutstanding <= mux(reset, UInt<1>("h0"), _GEN_59) @[src/main/scala/npu/core/QuantActUnit.scala 281:{31,31}]
    primed <= mux(reset, UInt<1>("h0"), _GEN_93) @[src/main/scala/npu/core/QuantActUnit.scala 333:{23,23}]
    cores_0.clock <= clock
    cores_0.reset <= reset
    cores_0.io_in_tpu <= io_in_tpu_0 @[src/main/scala/npu/core/QuantActUnit.scala 351:24]
    cores_0.io_in_direct <= io_in_direct_0 @[src/main/scala/npu/core/QuantActUnit.scala 352:27]
    cores_0.io_input_mode <= io_input_mode @[src/main/scala/npu/core/QuantActUnit.scala 353:28]
    cores_0.io_in_valid <= io_in_valid_0 @[src/main/scala/npu/core/QuantActUnit.scala 354:26]
    cores_0.io_param <= effectiveParam_0 @[src/main/scala/npu/core/QuantActUnit.scala 355:23]
    cores_0.io_act_mask <= io_act_mask @[src/main/scala/npu/core/QuantActUnit.scala 356:26]
    cores_0.io_fusion_second <= io_fusion_second @[src/main/scala/npu/core/QuantActUnit.scala 357:31]
    cores_0.io_stall <= io_stall @[src/main/scala/npu/core/QuantActUnit.scala 358:23]
    cores_0.io_lut_wr_en <= io_lut_wr_en @[src/main/scala/npu/core/QuantActUnit.scala 360:27]
    cores_0.io_lut_wr_addr <= io_lut_wr_addr @[src/main/scala/npu/core/QuantActUnit.scala 361:29]
    cores_0.io_lut_wr_data_0 <= io_lut_wr_data_0 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_0.io_lut_wr_data_1 <= io_lut_wr_data_1 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_0.io_lut_wr_data_2 <= io_lut_wr_data_2 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_0.io_lut_wr_data_3 <= io_lut_wr_data_3 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_0.io_lut_wr_data_4 <= io_lut_wr_data_4 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_0.io_lut_wr_data_5 <= io_lut_wr_data_5 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_0.io_lut_wr_data_6 <= io_lut_wr_data_6 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_0.io_lut_wr_data_7 <= io_lut_wr_data_7 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_0.io_lut_wr_data_8 <= io_lut_wr_data_8 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_0.io_lut_wr_data_9 <= io_lut_wr_data_9 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_0.io_lut_wr_data_10 <= io_lut_wr_data_10 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_0.io_lut_wr_data_11 <= io_lut_wr_data_11 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_0.io_lut_wr_data_12 <= io_lut_wr_data_12 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_0.io_lut_wr_data_13 <= io_lut_wr_data_13 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_0.io_lut_wr_data_14 <= io_lut_wr_data_14 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_0.io_lut_wr_data_15 <= io_lut_wr_data_15 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_1.clock <= clock
    cores_1.reset <= reset
    cores_1.io_in_tpu <= io_in_tpu_1 @[src/main/scala/npu/core/QuantActUnit.scala 351:24]
    cores_1.io_in_direct <= io_in_direct_1 @[src/main/scala/npu/core/QuantActUnit.scala 352:27]
    cores_1.io_input_mode <= io_input_mode @[src/main/scala/npu/core/QuantActUnit.scala 353:28]
    cores_1.io_in_valid <= io_in_valid_1 @[src/main/scala/npu/core/QuantActUnit.scala 354:26]
    cores_1.io_param <= effectiveParam_1 @[src/main/scala/npu/core/QuantActUnit.scala 355:23]
    cores_1.io_act_mask <= io_act_mask @[src/main/scala/npu/core/QuantActUnit.scala 356:26]
    cores_1.io_fusion_second <= io_fusion_second @[src/main/scala/npu/core/QuantActUnit.scala 357:31]
    cores_1.io_stall <= io_stall @[src/main/scala/npu/core/QuantActUnit.scala 358:23]
    cores_1.io_lut_wr_en <= io_lut_wr_en @[src/main/scala/npu/core/QuantActUnit.scala 360:27]
    cores_1.io_lut_wr_addr <= io_lut_wr_addr @[src/main/scala/npu/core/QuantActUnit.scala 361:29]
    cores_1.io_lut_wr_data_0 <= io_lut_wr_data_0 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_1.io_lut_wr_data_1 <= io_lut_wr_data_1 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_1.io_lut_wr_data_2 <= io_lut_wr_data_2 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_1.io_lut_wr_data_3 <= io_lut_wr_data_3 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_1.io_lut_wr_data_4 <= io_lut_wr_data_4 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_1.io_lut_wr_data_5 <= io_lut_wr_data_5 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_1.io_lut_wr_data_6 <= io_lut_wr_data_6 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_1.io_lut_wr_data_7 <= io_lut_wr_data_7 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_1.io_lut_wr_data_8 <= io_lut_wr_data_8 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_1.io_lut_wr_data_9 <= io_lut_wr_data_9 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_1.io_lut_wr_data_10 <= io_lut_wr_data_10 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_1.io_lut_wr_data_11 <= io_lut_wr_data_11 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_1.io_lut_wr_data_12 <= io_lut_wr_data_12 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_1.io_lut_wr_data_13 <= io_lut_wr_data_13 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_1.io_lut_wr_data_14 <= io_lut_wr_data_14 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_1.io_lut_wr_data_15 <= io_lut_wr_data_15 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_2.clock <= clock
    cores_2.reset <= reset
    cores_2.io_in_tpu <= io_in_tpu_2 @[src/main/scala/npu/core/QuantActUnit.scala 351:24]
    cores_2.io_in_direct <= io_in_direct_2 @[src/main/scala/npu/core/QuantActUnit.scala 352:27]
    cores_2.io_input_mode <= io_input_mode @[src/main/scala/npu/core/QuantActUnit.scala 353:28]
    cores_2.io_in_valid <= io_in_valid_2 @[src/main/scala/npu/core/QuantActUnit.scala 354:26]
    cores_2.io_param <= effectiveParam_2 @[src/main/scala/npu/core/QuantActUnit.scala 355:23]
    cores_2.io_act_mask <= io_act_mask @[src/main/scala/npu/core/QuantActUnit.scala 356:26]
    cores_2.io_fusion_second <= io_fusion_second @[src/main/scala/npu/core/QuantActUnit.scala 357:31]
    cores_2.io_stall <= io_stall @[src/main/scala/npu/core/QuantActUnit.scala 358:23]
    cores_2.io_lut_wr_en <= io_lut_wr_en @[src/main/scala/npu/core/QuantActUnit.scala 360:27]
    cores_2.io_lut_wr_addr <= io_lut_wr_addr @[src/main/scala/npu/core/QuantActUnit.scala 361:29]
    cores_2.io_lut_wr_data_0 <= io_lut_wr_data_0 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_2.io_lut_wr_data_1 <= io_lut_wr_data_1 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_2.io_lut_wr_data_2 <= io_lut_wr_data_2 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_2.io_lut_wr_data_3 <= io_lut_wr_data_3 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_2.io_lut_wr_data_4 <= io_lut_wr_data_4 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_2.io_lut_wr_data_5 <= io_lut_wr_data_5 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_2.io_lut_wr_data_6 <= io_lut_wr_data_6 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_2.io_lut_wr_data_7 <= io_lut_wr_data_7 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_2.io_lut_wr_data_8 <= io_lut_wr_data_8 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_2.io_lut_wr_data_9 <= io_lut_wr_data_9 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_2.io_lut_wr_data_10 <= io_lut_wr_data_10 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_2.io_lut_wr_data_11 <= io_lut_wr_data_11 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_2.io_lut_wr_data_12 <= io_lut_wr_data_12 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_2.io_lut_wr_data_13 <= io_lut_wr_data_13 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_2.io_lut_wr_data_14 <= io_lut_wr_data_14 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_2.io_lut_wr_data_15 <= io_lut_wr_data_15 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_3.clock <= clock
    cores_3.reset <= reset
    cores_3.io_in_tpu <= io_in_tpu_3 @[src/main/scala/npu/core/QuantActUnit.scala 351:24]
    cores_3.io_in_direct <= io_in_direct_3 @[src/main/scala/npu/core/QuantActUnit.scala 352:27]
    cores_3.io_input_mode <= io_input_mode @[src/main/scala/npu/core/QuantActUnit.scala 353:28]
    cores_3.io_in_valid <= io_in_valid_3 @[src/main/scala/npu/core/QuantActUnit.scala 354:26]
    cores_3.io_param <= effectiveParam_3 @[src/main/scala/npu/core/QuantActUnit.scala 355:23]
    cores_3.io_act_mask <= io_act_mask @[src/main/scala/npu/core/QuantActUnit.scala 356:26]
    cores_3.io_fusion_second <= io_fusion_second @[src/main/scala/npu/core/QuantActUnit.scala 357:31]
    cores_3.io_stall <= io_stall @[src/main/scala/npu/core/QuantActUnit.scala 358:23]
    cores_3.io_lut_wr_en <= io_lut_wr_en @[src/main/scala/npu/core/QuantActUnit.scala 360:27]
    cores_3.io_lut_wr_addr <= io_lut_wr_addr @[src/main/scala/npu/core/QuantActUnit.scala 361:29]
    cores_3.io_lut_wr_data_0 <= io_lut_wr_data_0 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_3.io_lut_wr_data_1 <= io_lut_wr_data_1 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_3.io_lut_wr_data_2 <= io_lut_wr_data_2 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_3.io_lut_wr_data_3 <= io_lut_wr_data_3 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_3.io_lut_wr_data_4 <= io_lut_wr_data_4 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_3.io_lut_wr_data_5 <= io_lut_wr_data_5 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_3.io_lut_wr_data_6 <= io_lut_wr_data_6 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_3.io_lut_wr_data_7 <= io_lut_wr_data_7 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_3.io_lut_wr_data_8 <= io_lut_wr_data_8 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_3.io_lut_wr_data_9 <= io_lut_wr_data_9 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_3.io_lut_wr_data_10 <= io_lut_wr_data_10 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_3.io_lut_wr_data_11 <= io_lut_wr_data_11 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_3.io_lut_wr_data_12 <= io_lut_wr_data_12 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_3.io_lut_wr_data_13 <= io_lut_wr_data_13 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_3.io_lut_wr_data_14 <= io_lut_wr_data_14 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_3.io_lut_wr_data_15 <= io_lut_wr_data_15 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_4.clock <= clock
    cores_4.reset <= reset
    cores_4.io_in_tpu <= io_in_tpu_4 @[src/main/scala/npu/core/QuantActUnit.scala 351:24]
    cores_4.io_in_direct <= io_in_direct_4 @[src/main/scala/npu/core/QuantActUnit.scala 352:27]
    cores_4.io_input_mode <= io_input_mode @[src/main/scala/npu/core/QuantActUnit.scala 353:28]
    cores_4.io_in_valid <= io_in_valid_4 @[src/main/scala/npu/core/QuantActUnit.scala 354:26]
    cores_4.io_param <= effectiveParam_4 @[src/main/scala/npu/core/QuantActUnit.scala 355:23]
    cores_4.io_act_mask <= io_act_mask @[src/main/scala/npu/core/QuantActUnit.scala 356:26]
    cores_4.io_fusion_second <= io_fusion_second @[src/main/scala/npu/core/QuantActUnit.scala 357:31]
    cores_4.io_stall <= io_stall @[src/main/scala/npu/core/QuantActUnit.scala 358:23]
    cores_4.io_lut_wr_en <= io_lut_wr_en @[src/main/scala/npu/core/QuantActUnit.scala 360:27]
    cores_4.io_lut_wr_addr <= io_lut_wr_addr @[src/main/scala/npu/core/QuantActUnit.scala 361:29]
    cores_4.io_lut_wr_data_0 <= io_lut_wr_data_0 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_4.io_lut_wr_data_1 <= io_lut_wr_data_1 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_4.io_lut_wr_data_2 <= io_lut_wr_data_2 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_4.io_lut_wr_data_3 <= io_lut_wr_data_3 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_4.io_lut_wr_data_4 <= io_lut_wr_data_4 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_4.io_lut_wr_data_5 <= io_lut_wr_data_5 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_4.io_lut_wr_data_6 <= io_lut_wr_data_6 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_4.io_lut_wr_data_7 <= io_lut_wr_data_7 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_4.io_lut_wr_data_8 <= io_lut_wr_data_8 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_4.io_lut_wr_data_9 <= io_lut_wr_data_9 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_4.io_lut_wr_data_10 <= io_lut_wr_data_10 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_4.io_lut_wr_data_11 <= io_lut_wr_data_11 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_4.io_lut_wr_data_12 <= io_lut_wr_data_12 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_4.io_lut_wr_data_13 <= io_lut_wr_data_13 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_4.io_lut_wr_data_14 <= io_lut_wr_data_14 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_4.io_lut_wr_data_15 <= io_lut_wr_data_15 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_5.clock <= clock
    cores_5.reset <= reset
    cores_5.io_in_tpu <= io_in_tpu_5 @[src/main/scala/npu/core/QuantActUnit.scala 351:24]
    cores_5.io_in_direct <= io_in_direct_5 @[src/main/scala/npu/core/QuantActUnit.scala 352:27]
    cores_5.io_input_mode <= io_input_mode @[src/main/scala/npu/core/QuantActUnit.scala 353:28]
    cores_5.io_in_valid <= io_in_valid_5 @[src/main/scala/npu/core/QuantActUnit.scala 354:26]
    cores_5.io_param <= effectiveParam_5 @[src/main/scala/npu/core/QuantActUnit.scala 355:23]
    cores_5.io_act_mask <= io_act_mask @[src/main/scala/npu/core/QuantActUnit.scala 356:26]
    cores_5.io_fusion_second <= io_fusion_second @[src/main/scala/npu/core/QuantActUnit.scala 357:31]
    cores_5.io_stall <= io_stall @[src/main/scala/npu/core/QuantActUnit.scala 358:23]
    cores_5.io_lut_wr_en <= io_lut_wr_en @[src/main/scala/npu/core/QuantActUnit.scala 360:27]
    cores_5.io_lut_wr_addr <= io_lut_wr_addr @[src/main/scala/npu/core/QuantActUnit.scala 361:29]
    cores_5.io_lut_wr_data_0 <= io_lut_wr_data_0 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_5.io_lut_wr_data_1 <= io_lut_wr_data_1 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_5.io_lut_wr_data_2 <= io_lut_wr_data_2 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_5.io_lut_wr_data_3 <= io_lut_wr_data_3 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_5.io_lut_wr_data_4 <= io_lut_wr_data_4 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_5.io_lut_wr_data_5 <= io_lut_wr_data_5 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_5.io_lut_wr_data_6 <= io_lut_wr_data_6 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_5.io_lut_wr_data_7 <= io_lut_wr_data_7 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_5.io_lut_wr_data_8 <= io_lut_wr_data_8 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_5.io_lut_wr_data_9 <= io_lut_wr_data_9 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_5.io_lut_wr_data_10 <= io_lut_wr_data_10 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_5.io_lut_wr_data_11 <= io_lut_wr_data_11 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_5.io_lut_wr_data_12 <= io_lut_wr_data_12 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_5.io_lut_wr_data_13 <= io_lut_wr_data_13 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_5.io_lut_wr_data_14 <= io_lut_wr_data_14 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_5.io_lut_wr_data_15 <= io_lut_wr_data_15 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_6.clock <= clock
    cores_6.reset <= reset
    cores_6.io_in_tpu <= io_in_tpu_6 @[src/main/scala/npu/core/QuantActUnit.scala 351:24]
    cores_6.io_in_direct <= io_in_direct_6 @[src/main/scala/npu/core/QuantActUnit.scala 352:27]
    cores_6.io_input_mode <= io_input_mode @[src/main/scala/npu/core/QuantActUnit.scala 353:28]
    cores_6.io_in_valid <= io_in_valid_6 @[src/main/scala/npu/core/QuantActUnit.scala 354:26]
    cores_6.io_param <= effectiveParam_6 @[src/main/scala/npu/core/QuantActUnit.scala 355:23]
    cores_6.io_act_mask <= io_act_mask @[src/main/scala/npu/core/QuantActUnit.scala 356:26]
    cores_6.io_fusion_second <= io_fusion_second @[src/main/scala/npu/core/QuantActUnit.scala 357:31]
    cores_6.io_stall <= io_stall @[src/main/scala/npu/core/QuantActUnit.scala 358:23]
    cores_6.io_lut_wr_en <= io_lut_wr_en @[src/main/scala/npu/core/QuantActUnit.scala 360:27]
    cores_6.io_lut_wr_addr <= io_lut_wr_addr @[src/main/scala/npu/core/QuantActUnit.scala 361:29]
    cores_6.io_lut_wr_data_0 <= io_lut_wr_data_0 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_6.io_lut_wr_data_1 <= io_lut_wr_data_1 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_6.io_lut_wr_data_2 <= io_lut_wr_data_2 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_6.io_lut_wr_data_3 <= io_lut_wr_data_3 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_6.io_lut_wr_data_4 <= io_lut_wr_data_4 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_6.io_lut_wr_data_5 <= io_lut_wr_data_5 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_6.io_lut_wr_data_6 <= io_lut_wr_data_6 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_6.io_lut_wr_data_7 <= io_lut_wr_data_7 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_6.io_lut_wr_data_8 <= io_lut_wr_data_8 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_6.io_lut_wr_data_9 <= io_lut_wr_data_9 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_6.io_lut_wr_data_10 <= io_lut_wr_data_10 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_6.io_lut_wr_data_11 <= io_lut_wr_data_11 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_6.io_lut_wr_data_12 <= io_lut_wr_data_12 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_6.io_lut_wr_data_13 <= io_lut_wr_data_13 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_6.io_lut_wr_data_14 <= io_lut_wr_data_14 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_6.io_lut_wr_data_15 <= io_lut_wr_data_15 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_7.clock <= clock
    cores_7.reset <= reset
    cores_7.io_in_tpu <= io_in_tpu_7 @[src/main/scala/npu/core/QuantActUnit.scala 351:24]
    cores_7.io_in_direct <= io_in_direct_7 @[src/main/scala/npu/core/QuantActUnit.scala 352:27]
    cores_7.io_input_mode <= io_input_mode @[src/main/scala/npu/core/QuantActUnit.scala 353:28]
    cores_7.io_in_valid <= io_in_valid_7 @[src/main/scala/npu/core/QuantActUnit.scala 354:26]
    cores_7.io_param <= effectiveParam_7 @[src/main/scala/npu/core/QuantActUnit.scala 355:23]
    cores_7.io_act_mask <= io_act_mask @[src/main/scala/npu/core/QuantActUnit.scala 356:26]
    cores_7.io_fusion_second <= io_fusion_second @[src/main/scala/npu/core/QuantActUnit.scala 357:31]
    cores_7.io_stall <= io_stall @[src/main/scala/npu/core/QuantActUnit.scala 358:23]
    cores_7.io_lut_wr_en <= io_lut_wr_en @[src/main/scala/npu/core/QuantActUnit.scala 360:27]
    cores_7.io_lut_wr_addr <= io_lut_wr_addr @[src/main/scala/npu/core/QuantActUnit.scala 361:29]
    cores_7.io_lut_wr_data_0 <= io_lut_wr_data_0 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_7.io_lut_wr_data_1 <= io_lut_wr_data_1 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_7.io_lut_wr_data_2 <= io_lut_wr_data_2 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_7.io_lut_wr_data_3 <= io_lut_wr_data_3 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_7.io_lut_wr_data_4 <= io_lut_wr_data_4 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_7.io_lut_wr_data_5 <= io_lut_wr_data_5 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_7.io_lut_wr_data_6 <= io_lut_wr_data_6 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_7.io_lut_wr_data_7 <= io_lut_wr_data_7 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_7.io_lut_wr_data_8 <= io_lut_wr_data_8 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_7.io_lut_wr_data_9 <= io_lut_wr_data_9 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_7.io_lut_wr_data_10 <= io_lut_wr_data_10 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_7.io_lut_wr_data_11 <= io_lut_wr_data_11 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_7.io_lut_wr_data_12 <= io_lut_wr_data_12 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_7.io_lut_wr_data_13 <= io_lut_wr_data_13 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_7.io_lut_wr_data_14 <= io_lut_wr_data_14 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_7.io_lut_wr_data_15 <= io_lut_wr_data_15 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_8.clock <= clock
    cores_8.reset <= reset
    cores_8.io_in_tpu <= io_in_tpu_8 @[src/main/scala/npu/core/QuantActUnit.scala 351:24]
    cores_8.io_in_direct <= io_in_direct_8 @[src/main/scala/npu/core/QuantActUnit.scala 352:27]
    cores_8.io_input_mode <= io_input_mode @[src/main/scala/npu/core/QuantActUnit.scala 353:28]
    cores_8.io_in_valid <= io_in_valid_8 @[src/main/scala/npu/core/QuantActUnit.scala 354:26]
    cores_8.io_param <= effectiveParam_8 @[src/main/scala/npu/core/QuantActUnit.scala 355:23]
    cores_8.io_act_mask <= io_act_mask @[src/main/scala/npu/core/QuantActUnit.scala 356:26]
    cores_8.io_fusion_second <= io_fusion_second @[src/main/scala/npu/core/QuantActUnit.scala 357:31]
    cores_8.io_stall <= io_stall @[src/main/scala/npu/core/QuantActUnit.scala 358:23]
    cores_8.io_lut_wr_en <= io_lut_wr_en @[src/main/scala/npu/core/QuantActUnit.scala 360:27]
    cores_8.io_lut_wr_addr <= io_lut_wr_addr @[src/main/scala/npu/core/QuantActUnit.scala 361:29]
    cores_8.io_lut_wr_data_0 <= io_lut_wr_data_0 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_8.io_lut_wr_data_1 <= io_lut_wr_data_1 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_8.io_lut_wr_data_2 <= io_lut_wr_data_2 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_8.io_lut_wr_data_3 <= io_lut_wr_data_3 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_8.io_lut_wr_data_4 <= io_lut_wr_data_4 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_8.io_lut_wr_data_5 <= io_lut_wr_data_5 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_8.io_lut_wr_data_6 <= io_lut_wr_data_6 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_8.io_lut_wr_data_7 <= io_lut_wr_data_7 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_8.io_lut_wr_data_8 <= io_lut_wr_data_8 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_8.io_lut_wr_data_9 <= io_lut_wr_data_9 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_8.io_lut_wr_data_10 <= io_lut_wr_data_10 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_8.io_lut_wr_data_11 <= io_lut_wr_data_11 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_8.io_lut_wr_data_12 <= io_lut_wr_data_12 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_8.io_lut_wr_data_13 <= io_lut_wr_data_13 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_8.io_lut_wr_data_14 <= io_lut_wr_data_14 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_8.io_lut_wr_data_15 <= io_lut_wr_data_15 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_9.clock <= clock
    cores_9.reset <= reset
    cores_9.io_in_tpu <= io_in_tpu_9 @[src/main/scala/npu/core/QuantActUnit.scala 351:24]
    cores_9.io_in_direct <= io_in_direct_9 @[src/main/scala/npu/core/QuantActUnit.scala 352:27]
    cores_9.io_input_mode <= io_input_mode @[src/main/scala/npu/core/QuantActUnit.scala 353:28]
    cores_9.io_in_valid <= io_in_valid_9 @[src/main/scala/npu/core/QuantActUnit.scala 354:26]
    cores_9.io_param <= effectiveParam_9 @[src/main/scala/npu/core/QuantActUnit.scala 355:23]
    cores_9.io_act_mask <= io_act_mask @[src/main/scala/npu/core/QuantActUnit.scala 356:26]
    cores_9.io_fusion_second <= io_fusion_second @[src/main/scala/npu/core/QuantActUnit.scala 357:31]
    cores_9.io_stall <= io_stall @[src/main/scala/npu/core/QuantActUnit.scala 358:23]
    cores_9.io_lut_wr_en <= io_lut_wr_en @[src/main/scala/npu/core/QuantActUnit.scala 360:27]
    cores_9.io_lut_wr_addr <= io_lut_wr_addr @[src/main/scala/npu/core/QuantActUnit.scala 361:29]
    cores_9.io_lut_wr_data_0 <= io_lut_wr_data_0 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_9.io_lut_wr_data_1 <= io_lut_wr_data_1 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_9.io_lut_wr_data_2 <= io_lut_wr_data_2 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_9.io_lut_wr_data_3 <= io_lut_wr_data_3 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_9.io_lut_wr_data_4 <= io_lut_wr_data_4 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_9.io_lut_wr_data_5 <= io_lut_wr_data_5 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_9.io_lut_wr_data_6 <= io_lut_wr_data_6 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_9.io_lut_wr_data_7 <= io_lut_wr_data_7 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_9.io_lut_wr_data_8 <= io_lut_wr_data_8 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_9.io_lut_wr_data_9 <= io_lut_wr_data_9 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_9.io_lut_wr_data_10 <= io_lut_wr_data_10 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_9.io_lut_wr_data_11 <= io_lut_wr_data_11 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_9.io_lut_wr_data_12 <= io_lut_wr_data_12 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_9.io_lut_wr_data_13 <= io_lut_wr_data_13 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_9.io_lut_wr_data_14 <= io_lut_wr_data_14 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_9.io_lut_wr_data_15 <= io_lut_wr_data_15 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_10.clock <= clock
    cores_10.reset <= reset
    cores_10.io_in_tpu <= io_in_tpu_10 @[src/main/scala/npu/core/QuantActUnit.scala 351:24]
    cores_10.io_in_direct <= io_in_direct_10 @[src/main/scala/npu/core/QuantActUnit.scala 352:27]
    cores_10.io_input_mode <= io_input_mode @[src/main/scala/npu/core/QuantActUnit.scala 353:28]
    cores_10.io_in_valid <= io_in_valid_10 @[src/main/scala/npu/core/QuantActUnit.scala 354:26]
    cores_10.io_param <= effectiveParam_10 @[src/main/scala/npu/core/QuantActUnit.scala 355:23]
    cores_10.io_act_mask <= io_act_mask @[src/main/scala/npu/core/QuantActUnit.scala 356:26]
    cores_10.io_fusion_second <= io_fusion_second @[src/main/scala/npu/core/QuantActUnit.scala 357:31]
    cores_10.io_stall <= io_stall @[src/main/scala/npu/core/QuantActUnit.scala 358:23]
    cores_10.io_lut_wr_en <= io_lut_wr_en @[src/main/scala/npu/core/QuantActUnit.scala 360:27]
    cores_10.io_lut_wr_addr <= io_lut_wr_addr @[src/main/scala/npu/core/QuantActUnit.scala 361:29]
    cores_10.io_lut_wr_data_0 <= io_lut_wr_data_0 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_10.io_lut_wr_data_1 <= io_lut_wr_data_1 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_10.io_lut_wr_data_2 <= io_lut_wr_data_2 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_10.io_lut_wr_data_3 <= io_lut_wr_data_3 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_10.io_lut_wr_data_4 <= io_lut_wr_data_4 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_10.io_lut_wr_data_5 <= io_lut_wr_data_5 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_10.io_lut_wr_data_6 <= io_lut_wr_data_6 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_10.io_lut_wr_data_7 <= io_lut_wr_data_7 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_10.io_lut_wr_data_8 <= io_lut_wr_data_8 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_10.io_lut_wr_data_9 <= io_lut_wr_data_9 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_10.io_lut_wr_data_10 <= io_lut_wr_data_10 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_10.io_lut_wr_data_11 <= io_lut_wr_data_11 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_10.io_lut_wr_data_12 <= io_lut_wr_data_12 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_10.io_lut_wr_data_13 <= io_lut_wr_data_13 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_10.io_lut_wr_data_14 <= io_lut_wr_data_14 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_10.io_lut_wr_data_15 <= io_lut_wr_data_15 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_11.clock <= clock
    cores_11.reset <= reset
    cores_11.io_in_tpu <= io_in_tpu_11 @[src/main/scala/npu/core/QuantActUnit.scala 351:24]
    cores_11.io_in_direct <= io_in_direct_11 @[src/main/scala/npu/core/QuantActUnit.scala 352:27]
    cores_11.io_input_mode <= io_input_mode @[src/main/scala/npu/core/QuantActUnit.scala 353:28]
    cores_11.io_in_valid <= io_in_valid_11 @[src/main/scala/npu/core/QuantActUnit.scala 354:26]
    cores_11.io_param <= effectiveParam_11 @[src/main/scala/npu/core/QuantActUnit.scala 355:23]
    cores_11.io_act_mask <= io_act_mask @[src/main/scala/npu/core/QuantActUnit.scala 356:26]
    cores_11.io_fusion_second <= io_fusion_second @[src/main/scala/npu/core/QuantActUnit.scala 357:31]
    cores_11.io_stall <= io_stall @[src/main/scala/npu/core/QuantActUnit.scala 358:23]
    cores_11.io_lut_wr_en <= io_lut_wr_en @[src/main/scala/npu/core/QuantActUnit.scala 360:27]
    cores_11.io_lut_wr_addr <= io_lut_wr_addr @[src/main/scala/npu/core/QuantActUnit.scala 361:29]
    cores_11.io_lut_wr_data_0 <= io_lut_wr_data_0 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_11.io_lut_wr_data_1 <= io_lut_wr_data_1 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_11.io_lut_wr_data_2 <= io_lut_wr_data_2 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_11.io_lut_wr_data_3 <= io_lut_wr_data_3 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_11.io_lut_wr_data_4 <= io_lut_wr_data_4 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_11.io_lut_wr_data_5 <= io_lut_wr_data_5 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_11.io_lut_wr_data_6 <= io_lut_wr_data_6 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_11.io_lut_wr_data_7 <= io_lut_wr_data_7 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_11.io_lut_wr_data_8 <= io_lut_wr_data_8 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_11.io_lut_wr_data_9 <= io_lut_wr_data_9 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_11.io_lut_wr_data_10 <= io_lut_wr_data_10 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_11.io_lut_wr_data_11 <= io_lut_wr_data_11 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_11.io_lut_wr_data_12 <= io_lut_wr_data_12 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_11.io_lut_wr_data_13 <= io_lut_wr_data_13 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_11.io_lut_wr_data_14 <= io_lut_wr_data_14 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_11.io_lut_wr_data_15 <= io_lut_wr_data_15 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_12.clock <= clock
    cores_12.reset <= reset
    cores_12.io_in_tpu <= io_in_tpu_12 @[src/main/scala/npu/core/QuantActUnit.scala 351:24]
    cores_12.io_in_direct <= io_in_direct_12 @[src/main/scala/npu/core/QuantActUnit.scala 352:27]
    cores_12.io_input_mode <= io_input_mode @[src/main/scala/npu/core/QuantActUnit.scala 353:28]
    cores_12.io_in_valid <= io_in_valid_12 @[src/main/scala/npu/core/QuantActUnit.scala 354:26]
    cores_12.io_param <= effectiveParam_12 @[src/main/scala/npu/core/QuantActUnit.scala 355:23]
    cores_12.io_act_mask <= io_act_mask @[src/main/scala/npu/core/QuantActUnit.scala 356:26]
    cores_12.io_fusion_second <= io_fusion_second @[src/main/scala/npu/core/QuantActUnit.scala 357:31]
    cores_12.io_stall <= io_stall @[src/main/scala/npu/core/QuantActUnit.scala 358:23]
    cores_12.io_lut_wr_en <= io_lut_wr_en @[src/main/scala/npu/core/QuantActUnit.scala 360:27]
    cores_12.io_lut_wr_addr <= io_lut_wr_addr @[src/main/scala/npu/core/QuantActUnit.scala 361:29]
    cores_12.io_lut_wr_data_0 <= io_lut_wr_data_0 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_12.io_lut_wr_data_1 <= io_lut_wr_data_1 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_12.io_lut_wr_data_2 <= io_lut_wr_data_2 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_12.io_lut_wr_data_3 <= io_lut_wr_data_3 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_12.io_lut_wr_data_4 <= io_lut_wr_data_4 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_12.io_lut_wr_data_5 <= io_lut_wr_data_5 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_12.io_lut_wr_data_6 <= io_lut_wr_data_6 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_12.io_lut_wr_data_7 <= io_lut_wr_data_7 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_12.io_lut_wr_data_8 <= io_lut_wr_data_8 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_12.io_lut_wr_data_9 <= io_lut_wr_data_9 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_12.io_lut_wr_data_10 <= io_lut_wr_data_10 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_12.io_lut_wr_data_11 <= io_lut_wr_data_11 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_12.io_lut_wr_data_12 <= io_lut_wr_data_12 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_12.io_lut_wr_data_13 <= io_lut_wr_data_13 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_12.io_lut_wr_data_14 <= io_lut_wr_data_14 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_12.io_lut_wr_data_15 <= io_lut_wr_data_15 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_13.clock <= clock
    cores_13.reset <= reset
    cores_13.io_in_tpu <= io_in_tpu_13 @[src/main/scala/npu/core/QuantActUnit.scala 351:24]
    cores_13.io_in_direct <= io_in_direct_13 @[src/main/scala/npu/core/QuantActUnit.scala 352:27]
    cores_13.io_input_mode <= io_input_mode @[src/main/scala/npu/core/QuantActUnit.scala 353:28]
    cores_13.io_in_valid <= io_in_valid_13 @[src/main/scala/npu/core/QuantActUnit.scala 354:26]
    cores_13.io_param <= effectiveParam_13 @[src/main/scala/npu/core/QuantActUnit.scala 355:23]
    cores_13.io_act_mask <= io_act_mask @[src/main/scala/npu/core/QuantActUnit.scala 356:26]
    cores_13.io_fusion_second <= io_fusion_second @[src/main/scala/npu/core/QuantActUnit.scala 357:31]
    cores_13.io_stall <= io_stall @[src/main/scala/npu/core/QuantActUnit.scala 358:23]
    cores_13.io_lut_wr_en <= io_lut_wr_en @[src/main/scala/npu/core/QuantActUnit.scala 360:27]
    cores_13.io_lut_wr_addr <= io_lut_wr_addr @[src/main/scala/npu/core/QuantActUnit.scala 361:29]
    cores_13.io_lut_wr_data_0 <= io_lut_wr_data_0 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_13.io_lut_wr_data_1 <= io_lut_wr_data_1 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_13.io_lut_wr_data_2 <= io_lut_wr_data_2 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_13.io_lut_wr_data_3 <= io_lut_wr_data_3 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_13.io_lut_wr_data_4 <= io_lut_wr_data_4 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_13.io_lut_wr_data_5 <= io_lut_wr_data_5 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_13.io_lut_wr_data_6 <= io_lut_wr_data_6 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_13.io_lut_wr_data_7 <= io_lut_wr_data_7 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_13.io_lut_wr_data_8 <= io_lut_wr_data_8 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_13.io_lut_wr_data_9 <= io_lut_wr_data_9 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_13.io_lut_wr_data_10 <= io_lut_wr_data_10 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_13.io_lut_wr_data_11 <= io_lut_wr_data_11 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_13.io_lut_wr_data_12 <= io_lut_wr_data_12 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_13.io_lut_wr_data_13 <= io_lut_wr_data_13 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_13.io_lut_wr_data_14 <= io_lut_wr_data_14 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_13.io_lut_wr_data_15 <= io_lut_wr_data_15 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_14.clock <= clock
    cores_14.reset <= reset
    cores_14.io_in_tpu <= io_in_tpu_14 @[src/main/scala/npu/core/QuantActUnit.scala 351:24]
    cores_14.io_in_direct <= io_in_direct_14 @[src/main/scala/npu/core/QuantActUnit.scala 352:27]
    cores_14.io_input_mode <= io_input_mode @[src/main/scala/npu/core/QuantActUnit.scala 353:28]
    cores_14.io_in_valid <= io_in_valid_14 @[src/main/scala/npu/core/QuantActUnit.scala 354:26]
    cores_14.io_param <= effectiveParam_14 @[src/main/scala/npu/core/QuantActUnit.scala 355:23]
    cores_14.io_act_mask <= io_act_mask @[src/main/scala/npu/core/QuantActUnit.scala 356:26]
    cores_14.io_fusion_second <= io_fusion_second @[src/main/scala/npu/core/QuantActUnit.scala 357:31]
    cores_14.io_stall <= io_stall @[src/main/scala/npu/core/QuantActUnit.scala 358:23]
    cores_14.io_lut_wr_en <= io_lut_wr_en @[src/main/scala/npu/core/QuantActUnit.scala 360:27]
    cores_14.io_lut_wr_addr <= io_lut_wr_addr @[src/main/scala/npu/core/QuantActUnit.scala 361:29]
    cores_14.io_lut_wr_data_0 <= io_lut_wr_data_0 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_14.io_lut_wr_data_1 <= io_lut_wr_data_1 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_14.io_lut_wr_data_2 <= io_lut_wr_data_2 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_14.io_lut_wr_data_3 <= io_lut_wr_data_3 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_14.io_lut_wr_data_4 <= io_lut_wr_data_4 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_14.io_lut_wr_data_5 <= io_lut_wr_data_5 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_14.io_lut_wr_data_6 <= io_lut_wr_data_6 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_14.io_lut_wr_data_7 <= io_lut_wr_data_7 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_14.io_lut_wr_data_8 <= io_lut_wr_data_8 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_14.io_lut_wr_data_9 <= io_lut_wr_data_9 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_14.io_lut_wr_data_10 <= io_lut_wr_data_10 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_14.io_lut_wr_data_11 <= io_lut_wr_data_11 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_14.io_lut_wr_data_12 <= io_lut_wr_data_12 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_14.io_lut_wr_data_13 <= io_lut_wr_data_13 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_14.io_lut_wr_data_14 <= io_lut_wr_data_14 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_14.io_lut_wr_data_15 <= io_lut_wr_data_15 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_15.clock <= clock
    cores_15.reset <= reset
    cores_15.io_in_tpu <= io_in_tpu_15 @[src/main/scala/npu/core/QuantActUnit.scala 351:24]
    cores_15.io_in_direct <= io_in_direct_15 @[src/main/scala/npu/core/QuantActUnit.scala 352:27]
    cores_15.io_input_mode <= io_input_mode @[src/main/scala/npu/core/QuantActUnit.scala 353:28]
    cores_15.io_in_valid <= io_in_valid_15 @[src/main/scala/npu/core/QuantActUnit.scala 354:26]
    cores_15.io_param <= effectiveParam_15 @[src/main/scala/npu/core/QuantActUnit.scala 355:23]
    cores_15.io_act_mask <= io_act_mask @[src/main/scala/npu/core/QuantActUnit.scala 356:26]
    cores_15.io_fusion_second <= io_fusion_second @[src/main/scala/npu/core/QuantActUnit.scala 357:31]
    cores_15.io_stall <= io_stall @[src/main/scala/npu/core/QuantActUnit.scala 358:23]
    cores_15.io_lut_wr_en <= io_lut_wr_en @[src/main/scala/npu/core/QuantActUnit.scala 360:27]
    cores_15.io_lut_wr_addr <= io_lut_wr_addr @[src/main/scala/npu/core/QuantActUnit.scala 361:29]
    cores_15.io_lut_wr_data_0 <= io_lut_wr_data_0 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_15.io_lut_wr_data_1 <= io_lut_wr_data_1 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_15.io_lut_wr_data_2 <= io_lut_wr_data_2 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_15.io_lut_wr_data_3 <= io_lut_wr_data_3 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_15.io_lut_wr_data_4 <= io_lut_wr_data_4 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_15.io_lut_wr_data_5 <= io_lut_wr_data_5 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_15.io_lut_wr_data_6 <= io_lut_wr_data_6 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_15.io_lut_wr_data_7 <= io_lut_wr_data_7 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_15.io_lut_wr_data_8 <= io_lut_wr_data_8 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_15.io_lut_wr_data_9 <= io_lut_wr_data_9 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_15.io_lut_wr_data_10 <= io_lut_wr_data_10 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_15.io_lut_wr_data_11 <= io_lut_wr_data_11 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_15.io_lut_wr_data_12 <= io_lut_wr_data_12 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_15.io_lut_wr_data_13 <= io_lut_wr_data_13 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_15.io_lut_wr_data_14 <= io_lut_wr_data_14 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
    cores_15.io_lut_wr_data_15 <= io_lut_wr_data_15 @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
