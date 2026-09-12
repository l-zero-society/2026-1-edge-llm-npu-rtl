FIRRTL version 1.2.0
circuit LutProgrammingHarness :
  module LutProgrammingController : @[src/main/scala/npu/core/LutProgrammingController.scala 18:7]
    input clock : Clock @[src/main/scala/npu/core/LutProgrammingController.scala 18:7]
    input reset : UInt<1> @[src/main/scala/npu/core/LutProgrammingController.scala 18:7]
    input io_start : UInt<1> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    input io_lut_write : UInt<5> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    input io_in_data : UInt<128> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    input io_in_valid : UInt<1> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    output io_in_ready : UInt<1> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    input io_stall : UInt<1> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    input io_soft_reset : UInt<1> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    output io_busy : UInt<1> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    output io_done : UInt<1> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    output io_alert : UInt<1> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    output io_target : UInt<3> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    output io_target_addr : UInt<7> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    output io_act_wr_en : UInt<1> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    output io_exp_wr_en : UInt<1> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    output io_scale_wr_en : UInt<1> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    output io_sin_wr_en : UInt<1> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    output io_cos_wr_en : UInt<1> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    output io_act_wr_addr : UInt<6> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    output io_norm_wr_addr : UInt<5> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    output io_rope_wr_addr : UInt<7> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    output io_act_wr_data_0 : UInt<8> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    output io_act_wr_data_1 : UInt<8> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    output io_act_wr_data_2 : UInt<8> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    output io_act_wr_data_3 : UInt<8> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    output io_act_wr_data_4 : UInt<8> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    output io_act_wr_data_5 : UInt<8> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    output io_act_wr_data_6 : UInt<8> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    output io_act_wr_data_7 : UInt<8> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    output io_act_wr_data_8 : UInt<8> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    output io_act_wr_data_9 : UInt<8> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    output io_act_wr_data_10 : UInt<8> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    output io_act_wr_data_11 : UInt<8> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    output io_act_wr_data_12 : UInt<8> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    output io_act_wr_data_13 : UInt<8> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    output io_act_wr_data_14 : UInt<8> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    output io_act_wr_data_15 : UInt<8> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    output io_wide_wr_data_0 : UInt<16> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    output io_wide_wr_data_1 : UInt<16> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    output io_wide_wr_data_2 : UInt<16> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    output io_wide_wr_data_3 : UInt<16> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    output io_wide_wr_data_4 : UInt<16> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    output io_wide_wr_data_5 : UInt<16> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    output io_wide_wr_data_6 : UInt<16> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]
    output io_wide_wr_data_7 : UInt<16> @[src/main/scala/npu/core/LutProgrammingController.scala 33:14]

    reg state : UInt<2>, clock with :
      reset => (UInt<1>("h0"), state) @[src/main/scala/npu/core/LutProgrammingController.scala 59:22]
    reg selection : UInt<5>, clock with :
      reset => (UInt<1>("h0"), selection) @[src/main/scala/npu/core/LutProgrammingController.scala 60:26]
    reg target : UInt<3>, clock with :
      reset => (UInt<1>("h0"), target) @[src/main/scala/npu/core/LutProgrammingController.scala 61:23]
    reg address : UInt<7>, clock with :
      reset => (UInt<1>("h0"), address) @[src/main/scala/npu/core/LutProgrammingController.scala 62:24]
    reg done : UInt<1>, clock with :
      reset => (UInt<1>("h0"), done) @[src/main/scala/npu/core/LutProgrammingController.scala 63:21]
    node _remaining_T = eq(UInt<3>("h0"), target) @[src/main/scala/npu/core/LutProgrammingController.scala 67:58]
    node _remaining_T_1 = mux(_remaining_T, UInt<4>("hf"), UInt<5>("h0")) @[src/main/scala/npu/core/LutProgrammingController.scala 67:58]
    node _remaining_T_2 = eq(UInt<3>("h1"), target) @[src/main/scala/npu/core/LutProgrammingController.scala 67:58]
    node _remaining_T_3 = mux(_remaining_T_2, UInt<3>("h7"), _remaining_T_1) @[src/main/scala/npu/core/LutProgrammingController.scala 67:58]
    node _remaining_T_4 = eq(UInt<3>("h2"), target) @[src/main/scala/npu/core/LutProgrammingController.scala 67:58]
    node _remaining_T_5 = mux(_remaining_T_4, UInt<2>("h3"), _remaining_T_3) @[src/main/scala/npu/core/LutProgrammingController.scala 67:58]
    node _remaining_T_6 = eq(UInt<3>("h3"), target) @[src/main/scala/npu/core/LutProgrammingController.scala 67:58]
    node _remaining_T_7 = mux(_remaining_T_6, UInt<1>("h1"), _remaining_T_5) @[src/main/scala/npu/core/LutProgrammingController.scala 67:58]
    node remaining = and(selection, _remaining_T_7) @[src/main/scala/npu/core/LutProgrammingController.scala 67:29]
    node _lastAddr_T = eq(UInt<3>("h0"), target) @[src/main/scala/npu/core/LutProgrammingController.scala 73:66]
    node _lastAddr_T_1 = mux(_lastAddr_T, UInt<7>("h3f"), UInt<7>("h7f")) @[src/main/scala/npu/core/LutProgrammingController.scala 73:66]
    node _lastAddr_T_2 = eq(UInt<3>("h1"), target) @[src/main/scala/npu/core/LutProgrammingController.scala 73:66]
    node _lastAddr_T_3 = mux(_lastAddr_T_2, UInt<7>("h1f"), _lastAddr_T_1) @[src/main/scala/npu/core/LutProgrammingController.scala 73:66]
    node _lastAddr_T_4 = eq(UInt<3>("h2"), target) @[src/main/scala/npu/core/LutProgrammingController.scala 73:66]
    node lastAddr = mux(_lastAddr_T_4, UInt<7>("h1f"), _lastAddr_T_3) @[src/main/scala/npu/core/LutProgrammingController.scala 73:66]
    node _io_busy_T = neq(state, UInt<2>("h0")) @[src/main/scala/npu/core/LutProgrammingController.scala 78:20]
    node _io_in_ready_T = eq(state, UInt<2>("h1")) @[src/main/scala/npu/core/LutProgrammingController.scala 80:24]
    node _io_in_ready_T_1 = eq(io_stall, UInt<1>("h0")) @[src/main/scala/npu/core/LutProgrammingController.scala 80:38]
    node _io_in_ready_T_2 = and(_io_in_ready_T, _io_in_ready_T_1) @[src/main/scala/npu/core/LutProgrammingController.scala 80:35]
    node _io_in_ready_T_3 = eq(io_soft_reset, UInt<1>("h0")) @[src/main/scala/npu/core/LutProgrammingController.scala 80:51]
    node _io_in_ready_T_4 = and(_io_in_ready_T_2, _io_in_ready_T_3) @[src/main/scala/npu/core/LutProgrammingController.scala 80:48]
    node fire = and(io_in_valid, io_in_ready) @[src/main/scala/npu/core/LutProgrammingController.scala 81:26]
    node _io_alert_T = and(io_start, io_busy) @[src/main/scala/npu/core/LutProgrammingController.scala 82:24]
    node _io_alert_T_1 = eq(io_stall, UInt<1>("h0")) @[src/main/scala/npu/core/LutProgrammingController.scala 82:38]
    node _io_alert_T_2 = and(_io_alert_T, _io_alert_T_1) @[src/main/scala/npu/core/LutProgrammingController.scala 82:35]
    node _io_alert_T_3 = eq(io_soft_reset, UInt<1>("h0")) @[src/main/scala/npu/core/LutProgrammingController.scala 82:51]
    node _io_alert_T_4 = and(_io_alert_T_2, _io_alert_T_3) @[src/main/scala/npu/core/LutProgrammingController.scala 82:48]
    node _io_act_wr_en_T = eq(target, UInt<3>("h0")) @[src/main/scala/npu/core/LutProgrammingController.scala 85:34]
    node _io_act_wr_en_T_1 = and(fire, _io_act_wr_en_T) @[src/main/scala/npu/core/LutProgrammingController.scala 85:24]
    node _io_exp_wr_en_T = eq(target, UInt<3>("h1")) @[src/main/scala/npu/core/LutProgrammingController.scala 86:34]
    node _io_exp_wr_en_T_1 = and(fire, _io_exp_wr_en_T) @[src/main/scala/npu/core/LutProgrammingController.scala 86:24]
    node _io_scale_wr_en_T = eq(target, UInt<3>("h2")) @[src/main/scala/npu/core/LutProgrammingController.scala 87:36]
    node _io_scale_wr_en_T_1 = and(fire, _io_scale_wr_en_T) @[src/main/scala/npu/core/LutProgrammingController.scala 87:26]
    node _io_sin_wr_en_T = eq(target, UInt<3>("h3")) @[src/main/scala/npu/core/LutProgrammingController.scala 88:34]
    node _io_sin_wr_en_T_1 = and(fire, _io_sin_wr_en_T) @[src/main/scala/npu/core/LutProgrammingController.scala 88:24]
    node _io_cos_wr_en_T = eq(target, UInt<3>("h4")) @[src/main/scala/npu/core/LutProgrammingController.scala 89:34]
    node _io_cos_wr_en_T_1 = and(fire, _io_cos_wr_en_T) @[src/main/scala/npu/core/LutProgrammingController.scala 89:24]
    node _io_act_wr_data_0_T = bits(io_in_data, 7, 0) @[src/main/scala/npu/core/LutProgrammingController.scala 94:56]
    node _io_act_wr_data_1_T = bits(io_in_data, 15, 8) @[src/main/scala/npu/core/LutProgrammingController.scala 94:56]
    node _io_act_wr_data_2_T = bits(io_in_data, 23, 16) @[src/main/scala/npu/core/LutProgrammingController.scala 94:56]
    node _io_act_wr_data_3_T = bits(io_in_data, 31, 24) @[src/main/scala/npu/core/LutProgrammingController.scala 94:56]
    node _io_act_wr_data_4_T = bits(io_in_data, 39, 32) @[src/main/scala/npu/core/LutProgrammingController.scala 94:56]
    node _io_act_wr_data_5_T = bits(io_in_data, 47, 40) @[src/main/scala/npu/core/LutProgrammingController.scala 94:56]
    node _io_act_wr_data_6_T = bits(io_in_data, 55, 48) @[src/main/scala/npu/core/LutProgrammingController.scala 94:56]
    node _io_act_wr_data_7_T = bits(io_in_data, 63, 56) @[src/main/scala/npu/core/LutProgrammingController.scala 94:56]
    node _io_act_wr_data_8_T = bits(io_in_data, 71, 64) @[src/main/scala/npu/core/LutProgrammingController.scala 94:56]
    node _io_act_wr_data_9_T = bits(io_in_data, 79, 72) @[src/main/scala/npu/core/LutProgrammingController.scala 94:56]
    node _io_act_wr_data_10_T = bits(io_in_data, 87, 80) @[src/main/scala/npu/core/LutProgrammingController.scala 94:56]
    node _io_act_wr_data_11_T = bits(io_in_data, 95, 88) @[src/main/scala/npu/core/LutProgrammingController.scala 94:56]
    node _io_act_wr_data_12_T = bits(io_in_data, 103, 96) @[src/main/scala/npu/core/LutProgrammingController.scala 94:56]
    node _io_act_wr_data_13_T = bits(io_in_data, 111, 104) @[src/main/scala/npu/core/LutProgrammingController.scala 94:56]
    node _io_act_wr_data_14_T = bits(io_in_data, 119, 112) @[src/main/scala/npu/core/LutProgrammingController.scala 94:56]
    node _io_act_wr_data_15_T = bits(io_in_data, 127, 120) @[src/main/scala/npu/core/LutProgrammingController.scala 94:56]
    node _io_wide_wr_data_0_T = bits(io_in_data, 15, 0) @[src/main/scala/npu/core/LutProgrammingController.scala 95:56]
    node _io_wide_wr_data_1_T = bits(io_in_data, 31, 16) @[src/main/scala/npu/core/LutProgrammingController.scala 95:56]
    node _io_wide_wr_data_2_T = bits(io_in_data, 47, 32) @[src/main/scala/npu/core/LutProgrammingController.scala 95:56]
    node _io_wide_wr_data_3_T = bits(io_in_data, 63, 48) @[src/main/scala/npu/core/LutProgrammingController.scala 95:56]
    node _io_wide_wr_data_4_T = bits(io_in_data, 79, 64) @[src/main/scala/npu/core/LutProgrammingController.scala 95:56]
    node _io_wide_wr_data_5_T = bits(io_in_data, 95, 80) @[src/main/scala/npu/core/LutProgrammingController.scala 95:56]
    node _io_wide_wr_data_6_T = bits(io_in_data, 111, 96) @[src/main/scala/npu/core/LutProgrammingController.scala 95:56]
    node _io_wide_wr_data_7_T = bits(io_in_data, 127, 112) @[src/main/scala/npu/core/LutProgrammingController.scala 95:56]
    node _T = eq(io_stall, UInt<1>("h0")) @[src/main/scala/npu/core/LutProgrammingController.scala 103:14]
    node _T_1 = eq(state, UInt<2>("h0")) @[src/main/scala/npu/core/LutProgrammingController.scala 104:16]
    node _T_2 = and(_T_1, io_start) @[src/main/scala/npu/core/LutProgrammingController.scala 104:25]
    node _target_T = bits(io_lut_write, 4, 4) @[src/main/scala/npu/core/LutProgrammingController.scala 65:54]
    node _target_T_1 = bits(io_lut_write, 3, 3) @[src/main/scala/npu/core/LutProgrammingController.scala 65:54]
    node _target_T_2 = bits(io_lut_write, 2, 2) @[src/main/scala/npu/core/LutProgrammingController.scala 65:54]
    node _target_T_3 = bits(io_lut_write, 1, 1) @[src/main/scala/npu/core/LutProgrammingController.scala 65:54]
    node _target_T_4 = bits(io_lut_write, 0, 0) @[src/main/scala/npu/core/LutProgrammingController.scala 65:54]
    node _target_T_5 = mux(_target_T_4, UInt<3>("h4"), UInt<3>("h5")) @[src/main/scala/chisel3/util/Mux.scala 126:16]
    node _target_T_6 = mux(_target_T_3, UInt<3>("h3"), _target_T_5) @[src/main/scala/chisel3/util/Mux.scala 126:16]
    node _target_T_7 = mux(_target_T_2, UInt<3>("h2"), _target_T_6) @[src/main/scala/chisel3/util/Mux.scala 126:16]
    node _target_T_8 = mux(_target_T_1, UInt<3>("h1"), _target_T_7) @[src/main/scala/chisel3/util/Mux.scala 126:16]
    node _target_T_9 = mux(_target_T, UInt<3>("h0"), _target_T_8) @[src/main/scala/chisel3/util/Mux.scala 126:16]
    node _T_3 = orr(io_lut_write) @[src/main/scala/npu/core/LutProgrammingController.scala 108:25]
    node _GEN_0 = mux(_T_3, UInt<2>("h1"), state) @[src/main/scala/npu/core/LutProgrammingController.scala 108:{30,38} 59:22]
    node _GEN_1 = mux(_T_3, UInt<1>("h0"), UInt<1>("h1")) @[src/main/scala/npu/core/LutProgrammingController.scala 108:30 109:27 97:8]
    node _T_4 = eq(address, lastAddr) @[src/main/scala/npu/core/LutProgrammingController.scala 111:20]
    node _T_5 = orr(remaining) @[src/main/scala/npu/core/LutProgrammingController.scala 112:24]
    node _target_T_10 = bits(remaining, 4, 4) @[src/main/scala/npu/core/LutProgrammingController.scala 65:54]
    node _target_T_11 = bits(remaining, 3, 3) @[src/main/scala/npu/core/LutProgrammingController.scala 65:54]
    node _target_T_12 = bits(remaining, 2, 2) @[src/main/scala/npu/core/LutProgrammingController.scala 65:54]
    node _target_T_13 = bits(remaining, 1, 1) @[src/main/scala/npu/core/LutProgrammingController.scala 65:54]
    node _target_T_14 = bits(remaining, 0, 0) @[src/main/scala/npu/core/LutProgrammingController.scala 65:54]
    node _target_T_15 = mux(_target_T_14, UInt<3>("h4"), UInt<3>("h5")) @[src/main/scala/chisel3/util/Mux.scala 126:16]
    node _target_T_16 = mux(_target_T_13, UInt<3>("h3"), _target_T_15) @[src/main/scala/chisel3/util/Mux.scala 126:16]
    node _target_T_17 = mux(_target_T_12, UInt<3>("h2"), _target_T_16) @[src/main/scala/chisel3/util/Mux.scala 126:16]
    node _target_T_18 = mux(_target_T_11, UInt<3>("h1"), _target_T_17) @[src/main/scala/chisel3/util/Mux.scala 126:16]
    node _target_T_19 = mux(_target_T_10, UInt<3>("h0"), _target_T_18) @[src/main/scala/chisel3/util/Mux.scala 126:16]
    node _GEN_2 = mux(_T_5, _target_T_19, target) @[src/main/scala/npu/core/LutProgrammingController.scala 112:29 113:18 61:23]
    node _GEN_3 = mux(_T_5, UInt<1>("h0"), address) @[src/main/scala/npu/core/LutProgrammingController.scala 112:29 114:19 62:24]
    node _GEN_4 = mux(_T_5, state, UInt<2>("h2")) @[src/main/scala/npu/core/LutProgrammingController.scala 112:29 59:22 115:29]
    node _address_T = add(address, UInt<1>("h1")) @[src/main/scala/npu/core/LutProgrammingController.scala 116:40]
    node _address_T_1 = tail(_address_T, 1) @[src/main/scala/npu/core/LutProgrammingController.scala 116:40]
    node _GEN_5 = mux(_T_4, _GEN_2, target) @[src/main/scala/npu/core/LutProgrammingController.scala 111:34 61:23]
    node _GEN_6 = mux(_T_4, _GEN_3, _address_T_1) @[src/main/scala/npu/core/LutProgrammingController.scala 111:34 116:29]
    node _GEN_7 = mux(_T_4, _GEN_4, state) @[src/main/scala/npu/core/LutProgrammingController.scala 111:34 59:22]
    node _T_6 = eq(state, UInt<2>("h2")) @[src/main/scala/npu/core/LutProgrammingController.scala 117:22]
    node _GEN_8 = mux(_T_6, UInt<2>("h0"), state) @[src/main/scala/npu/core/LutProgrammingController.scala 117:35 120:13 59:22]
    node _GEN_9 = mux(_T_6, UInt<3>("h5"), target) @[src/main/scala/npu/core/LutProgrammingController.scala 117:35 121:14 61:23]
    node _GEN_10 = mux(_T_6, UInt<1>("h1"), UInt<1>("h0")) @[src/main/scala/npu/core/LutProgrammingController.scala 117:35 122:12 97:8]
    node _GEN_11 = mux(fire, _GEN_5, _GEN_9) @[src/main/scala/npu/core/LutProgrammingController.scala 110:22]
    node _GEN_12 = mux(fire, _GEN_6, address) @[src/main/scala/npu/core/LutProgrammingController.scala 110:22 62:24]
    node _GEN_13 = mux(fire, _GEN_7, _GEN_8) @[src/main/scala/npu/core/LutProgrammingController.scala 110:22]
    node _GEN_14 = mux(fire, UInt<1>("h0"), _GEN_10) @[src/main/scala/npu/core/LutProgrammingController.scala 110:22 97:8]
    node _GEN_15 = mux(_T_2, io_lut_write, selection) @[src/main/scala/npu/core/LutProgrammingController.scala 104:38 105:17 60:26]
    node _GEN_16 = mux(_T_2, _target_T_9, _GEN_11) @[src/main/scala/npu/core/LutProgrammingController.scala 104:38 106:14]
    node _GEN_17 = mux(_T_2, UInt<1>("h0"), _GEN_12) @[src/main/scala/npu/core/LutProgrammingController.scala 104:38 107:15]
    node _GEN_18 = mux(_T_2, _GEN_0, _GEN_13) @[src/main/scala/npu/core/LutProgrammingController.scala 104:38]
    node _GEN_19 = mux(_T_2, _GEN_1, _GEN_14) @[src/main/scala/npu/core/LutProgrammingController.scala 104:38]
    node _GEN_20 = mux(_T, _GEN_15, selection) @[src/main/scala/npu/core/LutProgrammingController.scala 103:25 60:26]
    node _GEN_21 = mux(_T, _GEN_16, target) @[src/main/scala/npu/core/LutProgrammingController.scala 103:25 61:23]
    node _GEN_22 = mux(_T, _GEN_17, address) @[src/main/scala/npu/core/LutProgrammingController.scala 103:25 62:24]
    node _GEN_23 = mux(_T, _GEN_18, state) @[src/main/scala/npu/core/LutProgrammingController.scala 103:25 59:22]
    node _GEN_24 = mux(_T, _GEN_19, UInt<1>("h0")) @[src/main/scala/npu/core/LutProgrammingController.scala 103:25 97:8]
    node _GEN_25 = mux(io_soft_reset, UInt<2>("h0"), _GEN_23) @[src/main/scala/npu/core/LutProgrammingController.scala 98:23 99:11]
    node _GEN_26 = mux(io_soft_reset, UInt<1>("h0"), _GEN_20) @[src/main/scala/npu/core/LutProgrammingController.scala 100:15 98:23]
    node _GEN_27 = mux(io_soft_reset, UInt<3>("h5"), _GEN_21) @[src/main/scala/npu/core/LutProgrammingController.scala 101:12 98:23]
    node _GEN_28 = mux(io_soft_reset, UInt<1>("h0"), _GEN_22) @[src/main/scala/npu/core/LutProgrammingController.scala 102:13 98:23]
    node _GEN_29 = mux(io_soft_reset, UInt<1>("h0"), _GEN_24) @[src/main/scala/npu/core/LutProgrammingController.scala 98:23 97:8]
    io_in_ready <= _io_in_ready_T_4 @[src/main/scala/npu/core/LutProgrammingController.scala 80:15]
    io_busy <= _io_busy_T @[src/main/scala/npu/core/LutProgrammingController.scala 78:11]
    io_done <= done @[src/main/scala/npu/core/LutProgrammingController.scala 79:11]
    io_alert <= _io_alert_T_4 @[src/main/scala/npu/core/LutProgrammingController.scala 82:12]
    io_target <= target @[src/main/scala/npu/core/LutProgrammingController.scala 83:13]
    io_target_addr <= address @[src/main/scala/npu/core/LutProgrammingController.scala 84:18]
    io_act_wr_en <= _io_act_wr_en_T_1 @[src/main/scala/npu/core/LutProgrammingController.scala 85:16]
    io_exp_wr_en <= _io_exp_wr_en_T_1 @[src/main/scala/npu/core/LutProgrammingController.scala 86:16]
    io_scale_wr_en <= _io_scale_wr_en_T_1 @[src/main/scala/npu/core/LutProgrammingController.scala 87:18]
    io_sin_wr_en <= _io_sin_wr_en_T_1 @[src/main/scala/npu/core/LutProgrammingController.scala 88:16]
    io_cos_wr_en <= _io_cos_wr_en_T_1 @[src/main/scala/npu/core/LutProgrammingController.scala 89:16]
    io_act_wr_addr <= bits(address, 5, 0) @[src/main/scala/npu/core/LutProgrammingController.scala 90:18]
    io_norm_wr_addr <= bits(address, 4, 0) @[src/main/scala/npu/core/LutProgrammingController.scala 91:19]
    io_rope_wr_addr <= address @[src/main/scala/npu/core/LutProgrammingController.scala 92:19]
    io_act_wr_data_0 <= _io_act_wr_data_0_T @[src/main/scala/npu/core/LutProgrammingController.scala 94:43]
    io_act_wr_data_1 <= _io_act_wr_data_1_T @[src/main/scala/npu/core/LutProgrammingController.scala 94:43]
    io_act_wr_data_2 <= _io_act_wr_data_2_T @[src/main/scala/npu/core/LutProgrammingController.scala 94:43]
    io_act_wr_data_3 <= _io_act_wr_data_3_T @[src/main/scala/npu/core/LutProgrammingController.scala 94:43]
    io_act_wr_data_4 <= _io_act_wr_data_4_T @[src/main/scala/npu/core/LutProgrammingController.scala 94:43]
    io_act_wr_data_5 <= _io_act_wr_data_5_T @[src/main/scala/npu/core/LutProgrammingController.scala 94:43]
    io_act_wr_data_6 <= _io_act_wr_data_6_T @[src/main/scala/npu/core/LutProgrammingController.scala 94:43]
    io_act_wr_data_7 <= _io_act_wr_data_7_T @[src/main/scala/npu/core/LutProgrammingController.scala 94:43]
    io_act_wr_data_8 <= _io_act_wr_data_8_T @[src/main/scala/npu/core/LutProgrammingController.scala 94:43]
    io_act_wr_data_9 <= _io_act_wr_data_9_T @[src/main/scala/npu/core/LutProgrammingController.scala 94:43]
    io_act_wr_data_10 <= _io_act_wr_data_10_T @[src/main/scala/npu/core/LutProgrammingController.scala 94:43]
    io_act_wr_data_11 <= _io_act_wr_data_11_T @[src/main/scala/npu/core/LutProgrammingController.scala 94:43]
    io_act_wr_data_12 <= _io_act_wr_data_12_T @[src/main/scala/npu/core/LutProgrammingController.scala 94:43]
    io_act_wr_data_13 <= _io_act_wr_data_13_T @[src/main/scala/npu/core/LutProgrammingController.scala 94:43]
    io_act_wr_data_14 <= _io_act_wr_data_14_T @[src/main/scala/npu/core/LutProgrammingController.scala 94:43]
    io_act_wr_data_15 <= _io_act_wr_data_15_T @[src/main/scala/npu/core/LutProgrammingController.scala 94:43]
    io_wide_wr_data_0 <= _io_wide_wr_data_0_T @[src/main/scala/npu/core/LutProgrammingController.scala 95:43]
    io_wide_wr_data_1 <= _io_wide_wr_data_1_T @[src/main/scala/npu/core/LutProgrammingController.scala 95:43]
    io_wide_wr_data_2 <= _io_wide_wr_data_2_T @[src/main/scala/npu/core/LutProgrammingController.scala 95:43]
    io_wide_wr_data_3 <= _io_wide_wr_data_3_T @[src/main/scala/npu/core/LutProgrammingController.scala 95:43]
    io_wide_wr_data_4 <= _io_wide_wr_data_4_T @[src/main/scala/npu/core/LutProgrammingController.scala 95:43]
    io_wide_wr_data_5 <= _io_wide_wr_data_5_T @[src/main/scala/npu/core/LutProgrammingController.scala 95:43]
    io_wide_wr_data_6 <= _io_wide_wr_data_6_T @[src/main/scala/npu/core/LutProgrammingController.scala 95:43]
    io_wide_wr_data_7 <= _io_wide_wr_data_7_T @[src/main/scala/npu/core/LutProgrammingController.scala 95:43]
    state <= mux(reset, UInt<2>("h0"), _GEN_25) @[src/main/scala/npu/core/LutProgrammingController.scala 59:{22,22}]
    selection <= mux(reset, UInt<5>("h0"), _GEN_26) @[src/main/scala/npu/core/LutProgrammingController.scala 60:{26,26}]
    target <= mux(reset, UInt<3>("h5"), _GEN_27) @[src/main/scala/npu/core/LutProgrammingController.scala 61:{23,23}]
    address <= mux(reset, UInt<7>("h0"), _GEN_28) @[src/main/scala/npu/core/LutProgrammingController.scala 62:{24,24}]
    done <= mux(reset, UInt<1>("h0"), _GEN_29) @[src/main/scala/npu/core/LutProgrammingController.scala 63:{21,21}]

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

  module Universal_Wide_LUT_1 : @[src/main/scala/npu/utils/UniversalLUT.scala 6:7]
    input clock : Clock @[src/main/scala/npu/utils/UniversalLUT.scala 6:7]
    input reset : UInt<1> @[src/main/scala/npu/utils/UniversalLUT.scala 6:7]
    input io_wr_en : UInt<1> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_addr : UInt<5> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_0 : UInt<16> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_1 : UInt<16> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_2 : UInt<16> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_3 : UInt<16> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_4 : UInt<16> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_5 : UInt<16> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_6 : UInt<16> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_7 : UInt<16> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    output io_wr_valid : UInt<1> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_rd_en : UInt<1> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_rd_addr : UInt<8> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    output io_rd_data : UInt<16> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    output io_rd_valid : UInt<1> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    output io_lut_ready : UInt<1> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]

    mem lut_mem_0 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<16>
      depth => 32
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_1 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<16>
      depth => 32
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_2 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<16>
      depth => 32
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_3 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<16>
      depth => 32
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_4 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<16>
      depth => 32
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_5 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<16>
      depth => 32
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_6 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<16>
      depth => 32
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_7 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<16>
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
    reg io_wr_valid_REG : UInt<1>, clock with :
      reset => (UInt<1>("h0"), io_wr_valid_REG) @[src/main/scala/npu/utils/UniversalLUT.scala 51:25]
    reg is_programmed : UInt<1>, clock with :
      reset => (UInt<1>("h0"), is_programmed) @[src/main/scala/npu/utils/UniversalLUT.scala 57:31]
    node _last_write_ack_T = eq(io_wr_addr, UInt<5>("h1f")) @[src/main/scala/npu/utils/UniversalLUT.scala 58:56]
    node _last_write_ack_T_1 = and(io_wr_en, _last_write_ack_T) @[src/main/scala/npu/utils/UniversalLUT.scala 58:41]
    reg last_write_ack : UInt<1>, clock with :
      reset => (UInt<1>("h0"), last_write_ack) @[src/main/scala/npu/utils/UniversalLUT.scala 58:31]
    node _GEN_12 = mux(last_write_ack, UInt<1>("h1"), is_programmed) @[src/main/scala/npu/utils/UniversalLUT.scala 60:25 61:19 57:31]
    node rd_row = bits(io_rd_addr, 7, 3) @[src/main/scala/npu/utils/UniversalLUT.scala 71:26]
    node rd_col = bits(io_rd_addr, 2, 0) @[src/main/scala/npu/utils/UniversalLUT.scala 72:26]
    node _GEN_13 = validif(io_rd_en, rd_row) @[src/main/scala/npu/utils/UniversalLUT.scala 75:{28,28}]
    node _GEN_14 = mux(io_rd_en, UInt<1>("h1"), UInt<1>("h0")) @[src/main/scala/npu/utils/UniversalLUT.scala 41:28 75:{28,28}]
    node _rd_vec_WIRE = _GEN_13 @[src/main/scala/npu/utils/UniversalLUT.scala 75:28]
    node _GEN_15 = validif(io_rd_en, _rd_vec_WIRE) @[src/main/scala/npu/utils/UniversalLUT.scala 75:{28,28}]
    node _GEN_16 = validif(io_rd_en, clock) @[src/main/scala/npu/utils/UniversalLUT.scala 75:{28,28}]
    reg rd_col_delayed : UInt<3>, clock with :
      reset => (UInt<1>("h0"), rd_col_delayed) @[src/main/scala/npu/utils/UniversalLUT.scala 78:33]
    node _GEN_17 = mux(io_rd_en, rd_col, rd_col_delayed) @[src/main/scala/npu/utils/UniversalLUT.scala 78:{33,33,33}]
    node _GEN_18 = validif(eq(UInt<1>("h0"), rd_col_delayed), lut_mem_0.rd_vec.data) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_19 = mux(eq(UInt<1>("h1"), rd_col_delayed), lut_mem_1.rd_vec.data, _GEN_18) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_20 = mux(eq(UInt<2>("h2"), rd_col_delayed), lut_mem_2.rd_vec.data, _GEN_19) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_21 = mux(eq(UInt<2>("h3"), rd_col_delayed), lut_mem_3.rd_vec.data, _GEN_20) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_22 = mux(eq(UInt<3>("h4"), rd_col_delayed), lut_mem_4.rd_vec.data, _GEN_21) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_23 = mux(eq(UInt<3>("h5"), rd_col_delayed), lut_mem_5.rd_vec.data, _GEN_22) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_24 = mux(eq(UInt<3>("h6"), rd_col_delayed), lut_mem_6.rd_vec.data, _GEN_23) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_25 = mux(eq(UInt<3>("h7"), rd_col_delayed), lut_mem_7.rd_vec.data, _GEN_24) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    reg io_rd_valid_REG : UInt<1>, clock with :
      reset => (UInt<1>("h0"), io_rd_valid_REG) @[src/main/scala/npu/utils/UniversalLUT.scala 84:25]
    node _lut_mem_rd_vec_data_rd_col_delayed = _GEN_25 @[src/main/scala/npu/utils/UniversalLUT.scala 81:15]
    io_wr_valid <= io_wr_valid_REG @[src/main/scala/npu/utils/UniversalLUT.scala 51:15]
    io_rd_data <= _lut_mem_rd_vec_data_rd_col_delayed @[src/main/scala/npu/utils/UniversalLUT.scala 81:15]
    io_rd_valid <= io_rd_valid_REG @[src/main/scala/npu/utils/UniversalLUT.scala 84:15]
    io_lut_ready <= is_programmed @[src/main/scala/npu/utils/UniversalLUT.scala 65:16]
    lut_mem_0.rd_vec.addr <= _GEN_15
    lut_mem_1.rd_vec.addr <= _GEN_15
    lut_mem_2.rd_vec.addr <= _GEN_15
    lut_mem_3.rd_vec.addr <= _GEN_15
    lut_mem_4.rd_vec.addr <= _GEN_15
    lut_mem_5.rd_vec.addr <= _GEN_15
    lut_mem_6.rd_vec.addr <= _GEN_15
    lut_mem_7.rd_vec.addr <= _GEN_15
    lut_mem_0.rd_vec.en <= _GEN_14
    lut_mem_1.rd_vec.en <= _GEN_14
    lut_mem_2.rd_vec.en <= _GEN_14
    lut_mem_3.rd_vec.en <= _GEN_14
    lut_mem_4.rd_vec.en <= _GEN_14
    lut_mem_5.rd_vec.en <= _GEN_14
    lut_mem_6.rd_vec.en <= _GEN_14
    lut_mem_7.rd_vec.en <= _GEN_14
    lut_mem_0.rd_vec.clk <= _GEN_16
    lut_mem_1.rd_vec.clk <= _GEN_16
    lut_mem_2.rd_vec.clk <= _GEN_16
    lut_mem_3.rd_vec.clk <= _GEN_16
    lut_mem_4.rd_vec.clk <= _GEN_16
    lut_mem_5.rd_vec.clk <= _GEN_16
    lut_mem_6.rd_vec.clk <= _GEN_16
    lut_mem_7.rd_vec.clk <= _GEN_16
    lut_mem_0.MPORT.addr <= _GEN_0
    lut_mem_1.MPORT.addr <= _GEN_0
    lut_mem_2.MPORT.addr <= _GEN_0
    lut_mem_3.MPORT.addr <= _GEN_0
    lut_mem_4.MPORT.addr <= _GEN_0
    lut_mem_5.MPORT.addr <= _GEN_0
    lut_mem_6.MPORT.addr <= _GEN_0
    lut_mem_7.MPORT.addr <= _GEN_0
    lut_mem_0.MPORT.en <= _GEN_2
    lut_mem_1.MPORT.en <= _GEN_2
    lut_mem_2.MPORT.en <= _GEN_2
    lut_mem_3.MPORT.en <= _GEN_2
    lut_mem_4.MPORT.en <= _GEN_2
    lut_mem_5.MPORT.en <= _GEN_2
    lut_mem_6.MPORT.en <= _GEN_2
    lut_mem_7.MPORT.en <= _GEN_2
    lut_mem_0.MPORT.clk <= _GEN_1
    lut_mem_1.MPORT.clk <= _GEN_1
    lut_mem_2.MPORT.clk <= _GEN_1
    lut_mem_3.MPORT.clk <= _GEN_1
    lut_mem_4.MPORT.clk <= _GEN_1
    lut_mem_5.MPORT.clk <= _GEN_1
    lut_mem_6.MPORT.clk <= _GEN_1
    lut_mem_7.MPORT.clk <= _GEN_1
    lut_mem_0.MPORT.data <= _GEN_4
    lut_mem_1.MPORT.data <= _GEN_5
    lut_mem_2.MPORT.data <= _GEN_6
    lut_mem_3.MPORT.data <= _GEN_7
    lut_mem_4.MPORT.data <= _GEN_8
    lut_mem_5.MPORT.data <= _GEN_9
    lut_mem_6.MPORT.data <= _GEN_10
    lut_mem_7.MPORT.data <= _GEN_11
    lut_mem_0.MPORT.mask <= _GEN_3
    lut_mem_1.MPORT.mask <= _GEN_3
    lut_mem_2.MPORT.mask <= _GEN_3
    lut_mem_3.MPORT.mask <= _GEN_3
    lut_mem_4.MPORT.mask <= _GEN_3
    lut_mem_5.MPORT.mask <= _GEN_3
    lut_mem_6.MPORT.mask <= _GEN_3
    lut_mem_7.MPORT.mask <= _GEN_3
    io_wr_valid_REG <= mux(reset, UInt<1>("h0"), io_wr_en) @[src/main/scala/npu/utils/UniversalLUT.scala 51:{25,25,25}]
    is_programmed <= mux(reset, UInt<1>("h0"), _GEN_12) @[src/main/scala/npu/utils/UniversalLUT.scala 57:{31,31}]
    last_write_ack <= mux(reset, UInt<1>("h0"), _last_write_ack_T_1) @[src/main/scala/npu/utils/UniversalLUT.scala 58:{31,31,31}]
    rd_col_delayed <= _GEN_17
    io_rd_valid_REG <= mux(reset, UInt<1>("h0"), io_rd_en) @[src/main/scala/npu/utils/UniversalLUT.scala 84:{25,25,25}]

  module Universal_Wide_LUT_3 : @[src/main/scala/npu/utils/UniversalLUT.scala 6:7]
    input clock : Clock @[src/main/scala/npu/utils/UniversalLUT.scala 6:7]
    input reset : UInt<1> @[src/main/scala/npu/utils/UniversalLUT.scala 6:7]
    input io_wr_en : UInt<1> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_addr : UInt<7> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_0 : UInt<16> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_1 : UInt<16> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_2 : UInt<16> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_3 : UInt<16> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_4 : UInt<16> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_5 : UInt<16> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_6 : UInt<16> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_wr_data_7 : UInt<16> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    output io_wr_valid : UInt<1> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_rd_en : UInt<1> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    input io_rd_addr : UInt<10> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    output io_rd_data : UInt<16> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    output io_rd_valid : UInt<1> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
    output io_lut_ready : UInt<1> @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]

    mem lut_mem_0 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<16>
      depth => 128
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_1 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<16>
      depth => 128
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_2 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<16>
      depth => 128
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_3 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<16>
      depth => 128
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_4 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<16>
      depth => 128
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_5 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<16>
      depth => 128
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_6 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<16>
      depth => 128
      read-latency => 1
      write-latency => 1
      reader => rd_vec
      writer => MPORT
      read-under-write => undefined
    mem lut_mem_7 : @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
      data-type => UInt<16>
      depth => 128
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
    reg io_wr_valid_REG : UInt<1>, clock with :
      reset => (UInt<1>("h0"), io_wr_valid_REG) @[src/main/scala/npu/utils/UniversalLUT.scala 51:25]
    reg is_programmed : UInt<1>, clock with :
      reset => (UInt<1>("h0"), is_programmed) @[src/main/scala/npu/utils/UniversalLUT.scala 57:31]
    node _last_write_ack_T = eq(io_wr_addr, UInt<7>("h7f")) @[src/main/scala/npu/utils/UniversalLUT.scala 58:56]
    node _last_write_ack_T_1 = and(io_wr_en, _last_write_ack_T) @[src/main/scala/npu/utils/UniversalLUT.scala 58:41]
    reg last_write_ack : UInt<1>, clock with :
      reset => (UInt<1>("h0"), last_write_ack) @[src/main/scala/npu/utils/UniversalLUT.scala 58:31]
    node _GEN_12 = mux(last_write_ack, UInt<1>("h1"), is_programmed) @[src/main/scala/npu/utils/UniversalLUT.scala 60:25 61:19 57:31]
    node rd_row = bits(io_rd_addr, 9, 3) @[src/main/scala/npu/utils/UniversalLUT.scala 71:26]
    node rd_col = bits(io_rd_addr, 2, 0) @[src/main/scala/npu/utils/UniversalLUT.scala 72:26]
    node _GEN_13 = validif(io_rd_en, rd_row) @[src/main/scala/npu/utils/UniversalLUT.scala 75:{28,28}]
    node _GEN_14 = mux(io_rd_en, UInt<1>("h1"), UInt<1>("h0")) @[src/main/scala/npu/utils/UniversalLUT.scala 41:28 75:{28,28}]
    node _rd_vec_WIRE = _GEN_13 @[src/main/scala/npu/utils/UniversalLUT.scala 75:28]
    node _GEN_15 = validif(io_rd_en, _rd_vec_WIRE) @[src/main/scala/npu/utils/UniversalLUT.scala 75:{28,28}]
    node _GEN_16 = validif(io_rd_en, clock) @[src/main/scala/npu/utils/UniversalLUT.scala 75:{28,28}]
    reg rd_col_delayed : UInt<3>, clock with :
      reset => (UInt<1>("h0"), rd_col_delayed) @[src/main/scala/npu/utils/UniversalLUT.scala 78:33]
    node _GEN_17 = mux(io_rd_en, rd_col, rd_col_delayed) @[src/main/scala/npu/utils/UniversalLUT.scala 78:{33,33,33}]
    node _GEN_18 = validif(eq(UInt<1>("h0"), rd_col_delayed), lut_mem_0.rd_vec.data) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_19 = mux(eq(UInt<1>("h1"), rd_col_delayed), lut_mem_1.rd_vec.data, _GEN_18) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_20 = mux(eq(UInt<2>("h2"), rd_col_delayed), lut_mem_2.rd_vec.data, _GEN_19) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_21 = mux(eq(UInt<2>("h3"), rd_col_delayed), lut_mem_3.rd_vec.data, _GEN_20) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_22 = mux(eq(UInt<3>("h4"), rd_col_delayed), lut_mem_4.rd_vec.data, _GEN_21) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_23 = mux(eq(UInt<3>("h5"), rd_col_delayed), lut_mem_5.rd_vec.data, _GEN_22) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_24 = mux(eq(UInt<3>("h6"), rd_col_delayed), lut_mem_6.rd_vec.data, _GEN_23) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    node _GEN_25 = mux(eq(UInt<3>("h7"), rd_col_delayed), lut_mem_7.rd_vec.data, _GEN_24) @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
    reg io_rd_valid_REG : UInt<1>, clock with :
      reset => (UInt<1>("h0"), io_rd_valid_REG) @[src/main/scala/npu/utils/UniversalLUT.scala 84:25]
    node _lut_mem_rd_vec_data_rd_col_delayed = _GEN_25 @[src/main/scala/npu/utils/UniversalLUT.scala 81:15]
    io_wr_valid <= io_wr_valid_REG @[src/main/scala/npu/utils/UniversalLUT.scala 51:15]
    io_rd_data <= _lut_mem_rd_vec_data_rd_col_delayed @[src/main/scala/npu/utils/UniversalLUT.scala 81:15]
    io_rd_valid <= io_rd_valid_REG @[src/main/scala/npu/utils/UniversalLUT.scala 84:15]
    io_lut_ready <= is_programmed @[src/main/scala/npu/utils/UniversalLUT.scala 65:16]
    lut_mem_0.rd_vec.addr <= _GEN_15
    lut_mem_1.rd_vec.addr <= _GEN_15
    lut_mem_2.rd_vec.addr <= _GEN_15
    lut_mem_3.rd_vec.addr <= _GEN_15
    lut_mem_4.rd_vec.addr <= _GEN_15
    lut_mem_5.rd_vec.addr <= _GEN_15
    lut_mem_6.rd_vec.addr <= _GEN_15
    lut_mem_7.rd_vec.addr <= _GEN_15
    lut_mem_0.rd_vec.en <= _GEN_14
    lut_mem_1.rd_vec.en <= _GEN_14
    lut_mem_2.rd_vec.en <= _GEN_14
    lut_mem_3.rd_vec.en <= _GEN_14
    lut_mem_4.rd_vec.en <= _GEN_14
    lut_mem_5.rd_vec.en <= _GEN_14
    lut_mem_6.rd_vec.en <= _GEN_14
    lut_mem_7.rd_vec.en <= _GEN_14
    lut_mem_0.rd_vec.clk <= _GEN_16
    lut_mem_1.rd_vec.clk <= _GEN_16
    lut_mem_2.rd_vec.clk <= _GEN_16
    lut_mem_3.rd_vec.clk <= _GEN_16
    lut_mem_4.rd_vec.clk <= _GEN_16
    lut_mem_5.rd_vec.clk <= _GEN_16
    lut_mem_6.rd_vec.clk <= _GEN_16
    lut_mem_7.rd_vec.clk <= _GEN_16
    lut_mem_0.MPORT.addr <= _GEN_0
    lut_mem_1.MPORT.addr <= _GEN_0
    lut_mem_2.MPORT.addr <= _GEN_0
    lut_mem_3.MPORT.addr <= _GEN_0
    lut_mem_4.MPORT.addr <= _GEN_0
    lut_mem_5.MPORT.addr <= _GEN_0
    lut_mem_6.MPORT.addr <= _GEN_0
    lut_mem_7.MPORT.addr <= _GEN_0
    lut_mem_0.MPORT.en <= _GEN_2
    lut_mem_1.MPORT.en <= _GEN_2
    lut_mem_2.MPORT.en <= _GEN_2
    lut_mem_3.MPORT.en <= _GEN_2
    lut_mem_4.MPORT.en <= _GEN_2
    lut_mem_5.MPORT.en <= _GEN_2
    lut_mem_6.MPORT.en <= _GEN_2
    lut_mem_7.MPORT.en <= _GEN_2
    lut_mem_0.MPORT.clk <= _GEN_1
    lut_mem_1.MPORT.clk <= _GEN_1
    lut_mem_2.MPORT.clk <= _GEN_1
    lut_mem_3.MPORT.clk <= _GEN_1
    lut_mem_4.MPORT.clk <= _GEN_1
    lut_mem_5.MPORT.clk <= _GEN_1
    lut_mem_6.MPORT.clk <= _GEN_1
    lut_mem_7.MPORT.clk <= _GEN_1
    lut_mem_0.MPORT.data <= _GEN_4
    lut_mem_1.MPORT.data <= _GEN_5
    lut_mem_2.MPORT.data <= _GEN_6
    lut_mem_3.MPORT.data <= _GEN_7
    lut_mem_4.MPORT.data <= _GEN_8
    lut_mem_5.MPORT.data <= _GEN_9
    lut_mem_6.MPORT.data <= _GEN_10
    lut_mem_7.MPORT.data <= _GEN_11
    lut_mem_0.MPORT.mask <= _GEN_3
    lut_mem_1.MPORT.mask <= _GEN_3
    lut_mem_2.MPORT.mask <= _GEN_3
    lut_mem_3.MPORT.mask <= _GEN_3
    lut_mem_4.MPORT.mask <= _GEN_3
    lut_mem_5.MPORT.mask <= _GEN_3
    lut_mem_6.MPORT.mask <= _GEN_3
    lut_mem_7.MPORT.mask <= _GEN_3
    io_wr_valid_REG <= mux(reset, UInt<1>("h0"), io_wr_en) @[src/main/scala/npu/utils/UniversalLUT.scala 51:{25,25,25}]
    is_programmed <= mux(reset, UInt<1>("h0"), _GEN_12) @[src/main/scala/npu/utils/UniversalLUT.scala 57:{31,31}]
    last_write_ack <= mux(reset, UInt<1>("h0"), _last_write_ack_T_1) @[src/main/scala/npu/utils/UniversalLUT.scala 58:{31,31,31}]
    rd_col_delayed <= _GEN_17
    io_rd_valid_REG <= mux(reset, UInt<1>("h0"), io_rd_en) @[src/main/scala/npu/utils/UniversalLUT.scala 84:{25,25,25}]

  module LutProgrammingHarness : @[src/test/scala/LutProgrammingController_Test.scala 11:7]
    input clock : Clock @[src/test/scala/LutProgrammingController_Test.scala 11:7]
    input reset : UInt<1> @[src/test/scala/LutProgrammingController_Test.scala 11:7]
    input io_prog_start : UInt<1> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    input io_prog_lut_write : UInt<5> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    input io_prog_in_data : UInt<128> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    input io_prog_in_valid : UInt<1> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    output io_prog_in_ready : UInt<1> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    input io_prog_stall : UInt<1> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    input io_prog_soft_reset : UInt<1> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    output io_prog_busy : UInt<1> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    output io_prog_done : UInt<1> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    output io_prog_alert : UInt<1> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    output io_prog_target : UInt<3> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    output io_prog_target_addr : UInt<7> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    output io_prog_act_wr_en : UInt<1> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    output io_prog_exp_wr_en : UInt<1> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    output io_prog_scale_wr_en : UInt<1> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    output io_prog_sin_wr_en : UInt<1> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    output io_prog_cos_wr_en : UInt<1> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    output io_prog_act_wr_addr : UInt<6> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    output io_prog_norm_wr_addr : UInt<5> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    output io_prog_rope_wr_addr : UInt<7> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    output io_prog_act_wr_data_0 : UInt<8> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    output io_prog_act_wr_data_1 : UInt<8> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    output io_prog_act_wr_data_2 : UInt<8> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    output io_prog_act_wr_data_3 : UInt<8> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    output io_prog_act_wr_data_4 : UInt<8> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    output io_prog_act_wr_data_5 : UInt<8> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    output io_prog_act_wr_data_6 : UInt<8> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    output io_prog_act_wr_data_7 : UInt<8> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    output io_prog_act_wr_data_8 : UInt<8> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    output io_prog_act_wr_data_9 : UInt<8> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    output io_prog_act_wr_data_10 : UInt<8> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    output io_prog_act_wr_data_11 : UInt<8> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    output io_prog_act_wr_data_12 : UInt<8> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    output io_prog_act_wr_data_13 : UInt<8> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    output io_prog_act_wr_data_14 : UInt<8> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    output io_prog_act_wr_data_15 : UInt<8> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    output io_prog_wide_wr_data_0 : UInt<16> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    output io_prog_wide_wr_data_1 : UInt<16> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    output io_prog_wide_wr_data_2 : UInt<16> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    output io_prog_wide_wr_data_3 : UInt<16> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    output io_prog_wide_wr_data_4 : UInt<16> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    output io_prog_wide_wr_data_5 : UInt<16> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    output io_prog_wide_wr_data_6 : UInt<16> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    output io_prog_wide_wr_data_7 : UInt<16> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    input io_rd_en : UInt<1> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    input io_rd_target : UInt<3> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    input io_rd_addr : UInt<10> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    output io_rd_data : UInt<16> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    output io_rd_valid : UInt<1> @[src/test/scala/LutProgrammingController_Test.scala 13:14]
    output io_write_ack : UInt<1> @[src/test/scala/LutProgrammingController_Test.scala 13:14]

    inst programmer of LutProgrammingController @[src/test/scala/LutProgrammingController_Test.scala 12:26]
    inst tables_0 of Universal_Wide_LUT @[src/test/scala/LutProgrammingController_Test.scala 24:38]
    inst tables_1 of Universal_Wide_LUT_1 @[src/test/scala/LutProgrammingController_Test.scala 24:38]
    inst tables_2 of Universal_Wide_LUT_1 @[src/test/scala/LutProgrammingController_Test.scala 24:38]
    inst tables_3 of Universal_Wide_LUT_3 @[src/test/scala/LutProgrammingController_Test.scala 24:38]
    inst tables_4 of Universal_Wide_LUT_3 @[src/test/scala/LutProgrammingController_Test.scala 24:38]
    node _tables_0_io_rd_en_T = eq(io_rd_target, UInt<1>("h0")) @[src/test/scala/LutProgrammingController_Test.scala 32:48]
    node _tables_0_io_rd_en_T_1 = and(io_rd_en, _tables_0_io_rd_en_T) @[src/test/scala/LutProgrammingController_Test.scala 32:32]
    node _tables_1_io_rd_en_T = eq(io_rd_target, UInt<1>("h1")) @[src/test/scala/LutProgrammingController_Test.scala 32:48]
    node _tables_1_io_rd_en_T_1 = and(io_rd_en, _tables_1_io_rd_en_T) @[src/test/scala/LutProgrammingController_Test.scala 32:32]
    node _tables_2_io_rd_en_T = eq(io_rd_target, UInt<2>("h2")) @[src/test/scala/LutProgrammingController_Test.scala 32:48]
    node _tables_2_io_rd_en_T_1 = and(io_rd_en, _tables_2_io_rd_en_T) @[src/test/scala/LutProgrammingController_Test.scala 32:32]
    node _tables_3_io_rd_en_T = eq(io_rd_target, UInt<2>("h3")) @[src/test/scala/LutProgrammingController_Test.scala 32:48]
    node _tables_3_io_rd_en_T_1 = and(io_rd_en, _tables_3_io_rd_en_T) @[src/test/scala/LutProgrammingController_Test.scala 32:32]
    node _tables_4_io_rd_en_T = eq(io_rd_target, UInt<3>("h4")) @[src/test/scala/LutProgrammingController_Test.scala 32:48]
    node _tables_4_io_rd_en_T_1 = and(io_rd_en, _tables_4_io_rd_en_T) @[src/test/scala/LutProgrammingController_Test.scala 32:32]
    node _io_write_ack_WIRE_1 = tables_1.io_wr_valid @[src/test/scala/LutProgrammingController_Test.scala 35:{26,26}]
    node _io_write_ack_WIRE_0 = tables_0.io_wr_valid @[src/test/scala/LutProgrammingController_Test.scala 35:{26,26}]
    node io_write_ack_lo = cat(_io_write_ack_WIRE_1, _io_write_ack_WIRE_0) @[src/test/scala/LutProgrammingController_Test.scala 35:54]
    node _io_write_ack_WIRE_4 = tables_4.io_wr_valid @[src/test/scala/LutProgrammingController_Test.scala 35:{26,26}]
    node _io_write_ack_WIRE_3 = tables_3.io_wr_valid @[src/test/scala/LutProgrammingController_Test.scala 35:{26,26}]
    node io_write_ack_hi_hi = cat(_io_write_ack_WIRE_4, _io_write_ack_WIRE_3) @[src/test/scala/LutProgrammingController_Test.scala 35:54]
    node _io_write_ack_WIRE_2 = tables_2.io_wr_valid @[src/test/scala/LutProgrammingController_Test.scala 35:{26,26}]
    node io_write_ack_hi = cat(io_write_ack_hi_hi, _io_write_ack_WIRE_2) @[src/test/scala/LutProgrammingController_Test.scala 35:54]
    node _io_write_ack_T = cat(io_write_ack_hi, io_write_ack_lo) @[src/test/scala/LutProgrammingController_Test.scala 35:54]
    node _io_write_ack_T_1 = orr(_io_write_ack_T) @[src/test/scala/LutProgrammingController_Test.scala 35:61]
    node _io_rd_valid_WIRE_1 = tables_1.io_rd_valid @[src/test/scala/LutProgrammingController_Test.scala 36:{25,25}]
    node _io_rd_valid_WIRE_0 = tables_0.io_rd_valid @[src/test/scala/LutProgrammingController_Test.scala 36:{25,25}]
    node io_rd_valid_lo = cat(_io_rd_valid_WIRE_1, _io_rd_valid_WIRE_0) @[src/test/scala/LutProgrammingController_Test.scala 36:53]
    node _io_rd_valid_WIRE_4 = tables_4.io_rd_valid @[src/test/scala/LutProgrammingController_Test.scala 36:{25,25}]
    node _io_rd_valid_WIRE_3 = tables_3.io_rd_valid @[src/test/scala/LutProgrammingController_Test.scala 36:{25,25}]
    node io_rd_valid_hi_hi = cat(_io_rd_valid_WIRE_4, _io_rd_valid_WIRE_3) @[src/test/scala/LutProgrammingController_Test.scala 36:53]
    node _io_rd_valid_WIRE_2 = tables_2.io_rd_valid @[src/test/scala/LutProgrammingController_Test.scala 36:{25,25}]
    node io_rd_valid_hi = cat(io_rd_valid_hi_hi, _io_rd_valid_WIRE_2) @[src/test/scala/LutProgrammingController_Test.scala 36:53]
    node _io_rd_valid_T = cat(io_rd_valid_hi, io_rd_valid_lo) @[src/test/scala/LutProgrammingController_Test.scala 36:53]
    node _io_rd_valid_T_1 = orr(_io_rd_valid_T) @[src/test/scala/LutProgrammingController_Test.scala 36:60]
    node _io_rd_data_T = pad(tables_0.io_rd_data, 16) @[src/test/scala/LutProgrammingController_Test.scala 37:72]
    node _io_rd_data_T_1 = mux(tables_0.io_rd_valid, _io_rd_data_T, UInt<1>("h0")) @[src/main/scala/chisel3/util/Mux.scala 30:73]
    node _io_rd_data_T_2 = mux(tables_1.io_rd_valid, tables_1.io_rd_data, UInt<1>("h0")) @[src/main/scala/chisel3/util/Mux.scala 30:73]
    node _io_rd_data_T_3 = mux(tables_2.io_rd_valid, tables_2.io_rd_data, UInt<1>("h0")) @[src/main/scala/chisel3/util/Mux.scala 30:73]
    node _io_rd_data_T_4 = mux(tables_3.io_rd_valid, tables_3.io_rd_data, UInt<1>("h0")) @[src/main/scala/chisel3/util/Mux.scala 30:73]
    node _io_rd_data_T_5 = mux(tables_4.io_rd_valid, tables_4.io_rd_data, UInt<1>("h0")) @[src/main/scala/chisel3/util/Mux.scala 30:73]
    node _io_rd_data_T_6 = or(_io_rd_data_T_1, _io_rd_data_T_2) @[src/main/scala/chisel3/util/Mux.scala 30:73]
    node _io_rd_data_T_7 = or(_io_rd_data_T_6, _io_rd_data_T_3) @[src/main/scala/chisel3/util/Mux.scala 30:73]
    node _io_rd_data_T_8 = or(_io_rd_data_T_7, _io_rd_data_T_4) @[src/main/scala/chisel3/util/Mux.scala 30:73]
    node _io_rd_data_T_9 = or(_io_rd_data_T_8, _io_rd_data_T_5) @[src/main/scala/chisel3/util/Mux.scala 30:73]
    node _io_rd_data_WIRE = _io_rd_data_T_9 @[src/main/scala/chisel3/util/Mux.scala 30:{73,73}]
    io_prog_in_ready <= programmer.io_in_ready @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    io_prog_busy <= programmer.io_busy @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    io_prog_done <= programmer.io_done @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    io_prog_alert <= programmer.io_alert @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    io_prog_target <= programmer.io_target @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    io_prog_target_addr <= programmer.io_target_addr @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    io_prog_act_wr_en <= programmer.io_act_wr_en @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    io_prog_exp_wr_en <= programmer.io_exp_wr_en @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    io_prog_scale_wr_en <= programmer.io_scale_wr_en @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    io_prog_sin_wr_en <= programmer.io_sin_wr_en @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    io_prog_cos_wr_en <= programmer.io_cos_wr_en @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    io_prog_act_wr_addr <= programmer.io_act_wr_addr @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    io_prog_norm_wr_addr <= programmer.io_norm_wr_addr @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    io_prog_rope_wr_addr <= programmer.io_rope_wr_addr @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    io_prog_act_wr_data_0 <= programmer.io_act_wr_data_0 @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    io_prog_act_wr_data_1 <= programmer.io_act_wr_data_1 @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    io_prog_act_wr_data_2 <= programmer.io_act_wr_data_2 @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    io_prog_act_wr_data_3 <= programmer.io_act_wr_data_3 @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    io_prog_act_wr_data_4 <= programmer.io_act_wr_data_4 @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    io_prog_act_wr_data_5 <= programmer.io_act_wr_data_5 @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    io_prog_act_wr_data_6 <= programmer.io_act_wr_data_6 @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    io_prog_act_wr_data_7 <= programmer.io_act_wr_data_7 @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    io_prog_act_wr_data_8 <= programmer.io_act_wr_data_8 @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    io_prog_act_wr_data_9 <= programmer.io_act_wr_data_9 @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    io_prog_act_wr_data_10 <= programmer.io_act_wr_data_10 @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    io_prog_act_wr_data_11 <= programmer.io_act_wr_data_11 @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    io_prog_act_wr_data_12 <= programmer.io_act_wr_data_12 @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    io_prog_act_wr_data_13 <= programmer.io_act_wr_data_13 @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    io_prog_act_wr_data_14 <= programmer.io_act_wr_data_14 @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    io_prog_act_wr_data_15 <= programmer.io_act_wr_data_15 @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    io_prog_wide_wr_data_0 <= programmer.io_wide_wr_data_0 @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    io_prog_wide_wr_data_1 <= programmer.io_wide_wr_data_1 @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    io_prog_wide_wr_data_2 <= programmer.io_wide_wr_data_2 @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    io_prog_wide_wr_data_3 <= programmer.io_wide_wr_data_3 @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    io_prog_wide_wr_data_4 <= programmer.io_wide_wr_data_4 @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    io_prog_wide_wr_data_5 <= programmer.io_wide_wr_data_5 @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    io_prog_wide_wr_data_6 <= programmer.io_wide_wr_data_6 @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    io_prog_wide_wr_data_7 <= programmer.io_wide_wr_data_7 @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    io_rd_data <= _io_rd_data_WIRE @[src/test/scala/LutProgrammingController_Test.scala 37:14]
    io_rd_valid <= _io_rd_valid_T_1 @[src/test/scala/LutProgrammingController_Test.scala 36:15]
    io_write_ack <= _io_write_ack_T_1 @[src/test/scala/LutProgrammingController_Test.scala 35:16]
    programmer.clock <= clock
    programmer.reset <= reset
    programmer.io_start <= io_prog_start @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    programmer.io_lut_write <= io_prog_lut_write @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    programmer.io_in_data <= io_prog_in_data @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    programmer.io_in_valid <= io_prog_in_valid @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    programmer.io_stall <= io_prog_stall @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    programmer.io_soft_reset <= io_prog_soft_reset @[src/test/scala/LutProgrammingController_Test.scala 22:17]
    tables_0.clock <= clock
    tables_0.reset <= reset
    tables_0.io_wr_en <= programmer.io_act_wr_en @[src/test/scala/LutProgrammingController_Test.scala 28:20]
    tables_0.io_wr_addr <= bits(programmer.io_target_addr, 5, 0) @[src/test/scala/LutProgrammingController_Test.scala 29:22]
    tables_0.io_wr_data_0 <= programmer.io_act_wr_data_0 @[src/test/scala/LutProgrammingController_Test.scala 30:38]
    tables_0.io_wr_data_1 <= programmer.io_act_wr_data_1 @[src/test/scala/LutProgrammingController_Test.scala 30:38]
    tables_0.io_wr_data_2 <= programmer.io_act_wr_data_2 @[src/test/scala/LutProgrammingController_Test.scala 30:38]
    tables_0.io_wr_data_3 <= programmer.io_act_wr_data_3 @[src/test/scala/LutProgrammingController_Test.scala 30:38]
    tables_0.io_wr_data_4 <= programmer.io_act_wr_data_4 @[src/test/scala/LutProgrammingController_Test.scala 30:38]
    tables_0.io_wr_data_5 <= programmer.io_act_wr_data_5 @[src/test/scala/LutProgrammingController_Test.scala 30:38]
    tables_0.io_wr_data_6 <= programmer.io_act_wr_data_6 @[src/test/scala/LutProgrammingController_Test.scala 30:38]
    tables_0.io_wr_data_7 <= programmer.io_act_wr_data_7 @[src/test/scala/LutProgrammingController_Test.scala 30:38]
    tables_0.io_wr_data_8 <= programmer.io_act_wr_data_8 @[src/test/scala/LutProgrammingController_Test.scala 30:38]
    tables_0.io_wr_data_9 <= programmer.io_act_wr_data_9 @[src/test/scala/LutProgrammingController_Test.scala 30:38]
    tables_0.io_wr_data_10 <= programmer.io_act_wr_data_10 @[src/test/scala/LutProgrammingController_Test.scala 30:38]
    tables_0.io_wr_data_11 <= programmer.io_act_wr_data_11 @[src/test/scala/LutProgrammingController_Test.scala 30:38]
    tables_0.io_wr_data_12 <= programmer.io_act_wr_data_12 @[src/test/scala/LutProgrammingController_Test.scala 30:38]
    tables_0.io_wr_data_13 <= programmer.io_act_wr_data_13 @[src/test/scala/LutProgrammingController_Test.scala 30:38]
    tables_0.io_wr_data_14 <= programmer.io_act_wr_data_14 @[src/test/scala/LutProgrammingController_Test.scala 30:38]
    tables_0.io_wr_data_15 <= programmer.io_act_wr_data_15 @[src/test/scala/LutProgrammingController_Test.scala 30:38]
    tables_0.io_rd_en <= _tables_0_io_rd_en_T_1 @[src/test/scala/LutProgrammingController_Test.scala 32:20]
    tables_0.io_rd_addr <= io_rd_addr @[src/test/scala/LutProgrammingController_Test.scala 33:22]
    tables_1.clock <= clock
    tables_1.reset <= reset
    tables_1.io_wr_en <= programmer.io_exp_wr_en @[src/test/scala/LutProgrammingController_Test.scala 28:20]
    tables_1.io_wr_addr <= bits(programmer.io_target_addr, 4, 0) @[src/test/scala/LutProgrammingController_Test.scala 29:22]
    tables_1.io_wr_data_0 <= programmer.io_wide_wr_data_0 @[src/test/scala/LutProgrammingController_Test.scala 31:27]
    tables_1.io_wr_data_1 <= programmer.io_wide_wr_data_1 @[src/test/scala/LutProgrammingController_Test.scala 31:27]
    tables_1.io_wr_data_2 <= programmer.io_wide_wr_data_2 @[src/test/scala/LutProgrammingController_Test.scala 31:27]
    tables_1.io_wr_data_3 <= programmer.io_wide_wr_data_3 @[src/test/scala/LutProgrammingController_Test.scala 31:27]
    tables_1.io_wr_data_4 <= programmer.io_wide_wr_data_4 @[src/test/scala/LutProgrammingController_Test.scala 31:27]
    tables_1.io_wr_data_5 <= programmer.io_wide_wr_data_5 @[src/test/scala/LutProgrammingController_Test.scala 31:27]
    tables_1.io_wr_data_6 <= programmer.io_wide_wr_data_6 @[src/test/scala/LutProgrammingController_Test.scala 31:27]
    tables_1.io_wr_data_7 <= programmer.io_wide_wr_data_7 @[src/test/scala/LutProgrammingController_Test.scala 31:27]
    tables_1.io_rd_en <= _tables_1_io_rd_en_T_1 @[src/test/scala/LutProgrammingController_Test.scala 32:20]
    tables_1.io_rd_addr <= bits(io_rd_addr, 7, 0) @[src/test/scala/LutProgrammingController_Test.scala 33:22]
    tables_2.clock <= clock
    tables_2.reset <= reset
    tables_2.io_wr_en <= programmer.io_scale_wr_en @[src/test/scala/LutProgrammingController_Test.scala 28:20]
    tables_2.io_wr_addr <= bits(programmer.io_target_addr, 4, 0) @[src/test/scala/LutProgrammingController_Test.scala 29:22]
    tables_2.io_wr_data_0 <= programmer.io_wide_wr_data_0 @[src/test/scala/LutProgrammingController_Test.scala 31:27]
    tables_2.io_wr_data_1 <= programmer.io_wide_wr_data_1 @[src/test/scala/LutProgrammingController_Test.scala 31:27]
    tables_2.io_wr_data_2 <= programmer.io_wide_wr_data_2 @[src/test/scala/LutProgrammingController_Test.scala 31:27]
    tables_2.io_wr_data_3 <= programmer.io_wide_wr_data_3 @[src/test/scala/LutProgrammingController_Test.scala 31:27]
    tables_2.io_wr_data_4 <= programmer.io_wide_wr_data_4 @[src/test/scala/LutProgrammingController_Test.scala 31:27]
    tables_2.io_wr_data_5 <= programmer.io_wide_wr_data_5 @[src/test/scala/LutProgrammingController_Test.scala 31:27]
    tables_2.io_wr_data_6 <= programmer.io_wide_wr_data_6 @[src/test/scala/LutProgrammingController_Test.scala 31:27]
    tables_2.io_wr_data_7 <= programmer.io_wide_wr_data_7 @[src/test/scala/LutProgrammingController_Test.scala 31:27]
    tables_2.io_rd_en <= _tables_2_io_rd_en_T_1 @[src/test/scala/LutProgrammingController_Test.scala 32:20]
    tables_2.io_rd_addr <= bits(io_rd_addr, 7, 0) @[src/test/scala/LutProgrammingController_Test.scala 33:22]
    tables_3.clock <= clock
    tables_3.reset <= reset
    tables_3.io_wr_en <= programmer.io_sin_wr_en @[src/test/scala/LutProgrammingController_Test.scala 28:20]
    tables_3.io_wr_addr <= programmer.io_target_addr @[src/test/scala/LutProgrammingController_Test.scala 29:22]
    tables_3.io_wr_data_0 <= programmer.io_wide_wr_data_0 @[src/test/scala/LutProgrammingController_Test.scala 31:27]
    tables_3.io_wr_data_1 <= programmer.io_wide_wr_data_1 @[src/test/scala/LutProgrammingController_Test.scala 31:27]
    tables_3.io_wr_data_2 <= programmer.io_wide_wr_data_2 @[src/test/scala/LutProgrammingController_Test.scala 31:27]
    tables_3.io_wr_data_3 <= programmer.io_wide_wr_data_3 @[src/test/scala/LutProgrammingController_Test.scala 31:27]
    tables_3.io_wr_data_4 <= programmer.io_wide_wr_data_4 @[src/test/scala/LutProgrammingController_Test.scala 31:27]
    tables_3.io_wr_data_5 <= programmer.io_wide_wr_data_5 @[src/test/scala/LutProgrammingController_Test.scala 31:27]
    tables_3.io_wr_data_6 <= programmer.io_wide_wr_data_6 @[src/test/scala/LutProgrammingController_Test.scala 31:27]
    tables_3.io_wr_data_7 <= programmer.io_wide_wr_data_7 @[src/test/scala/LutProgrammingController_Test.scala 31:27]
    tables_3.io_rd_en <= _tables_3_io_rd_en_T_1 @[src/test/scala/LutProgrammingController_Test.scala 32:20]
    tables_3.io_rd_addr <= io_rd_addr @[src/test/scala/LutProgrammingController_Test.scala 33:22]
    tables_4.clock <= clock
    tables_4.reset <= reset
    tables_4.io_wr_en <= programmer.io_cos_wr_en @[src/test/scala/LutProgrammingController_Test.scala 28:20]
    tables_4.io_wr_addr <= programmer.io_target_addr @[src/test/scala/LutProgrammingController_Test.scala 29:22]
    tables_4.io_wr_data_0 <= programmer.io_wide_wr_data_0 @[src/test/scala/LutProgrammingController_Test.scala 31:27]
    tables_4.io_wr_data_1 <= programmer.io_wide_wr_data_1 @[src/test/scala/LutProgrammingController_Test.scala 31:27]
    tables_4.io_wr_data_2 <= programmer.io_wide_wr_data_2 @[src/test/scala/LutProgrammingController_Test.scala 31:27]
    tables_4.io_wr_data_3 <= programmer.io_wide_wr_data_3 @[src/test/scala/LutProgrammingController_Test.scala 31:27]
    tables_4.io_wr_data_4 <= programmer.io_wide_wr_data_4 @[src/test/scala/LutProgrammingController_Test.scala 31:27]
    tables_4.io_wr_data_5 <= programmer.io_wide_wr_data_5 @[src/test/scala/LutProgrammingController_Test.scala 31:27]
    tables_4.io_wr_data_6 <= programmer.io_wide_wr_data_6 @[src/test/scala/LutProgrammingController_Test.scala 31:27]
    tables_4.io_wr_data_7 <= programmer.io_wide_wr_data_7 @[src/test/scala/LutProgrammingController_Test.scala 31:27]
    tables_4.io_rd_en <= _tables_4_io_rd_en_T_1 @[src/test/scala/LutProgrammingController_Test.scala 32:20]
    tables_4.io_rd_addr <= io_rd_addr @[src/test/scala/LutProgrammingController_Test.scala 33:22]
