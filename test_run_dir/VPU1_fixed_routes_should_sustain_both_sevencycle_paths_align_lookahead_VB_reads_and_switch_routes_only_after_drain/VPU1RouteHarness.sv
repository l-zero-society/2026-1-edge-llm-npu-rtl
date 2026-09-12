module Universal_Wide_LUT( // @[src/main/scala/npu/utils/UniversalLUT.scala 6:7]
  input        clock, // @[src/main/scala/npu/utils/UniversalLUT.scala 6:7]
  input        reset, // @[src/main/scala/npu/utils/UniversalLUT.scala 6:7]
  input        io_wr_en, // @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
  input  [5:0] io_wr_addr, // @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
  input  [7:0] io_wr_data_0, // @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
  input  [7:0] io_wr_data_1, // @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
  input  [7:0] io_wr_data_2, // @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
  input  [7:0] io_wr_data_3, // @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
  input  [7:0] io_wr_data_4, // @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
  input  [7:0] io_wr_data_5, // @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
  input  [7:0] io_wr_data_6, // @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
  input  [7:0] io_wr_data_7, // @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
  input  [7:0] io_wr_data_8, // @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
  input  [7:0] io_wr_data_9, // @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
  input  [7:0] io_wr_data_10, // @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
  input  [7:0] io_wr_data_11, // @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
  input  [7:0] io_wr_data_12, // @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
  input  [7:0] io_wr_data_13, // @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
  input  [7:0] io_wr_data_14, // @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
  input  [7:0] io_wr_data_15, // @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
  output       io_wr_valid, // @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
  input        io_rd_en, // @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
  input  [9:0] io_rd_addr, // @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
  output [7:0] io_rd_data, // @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
  output       io_rd_valid // @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_21;
  reg [31:0] _RAND_24;
  reg [31:0] _RAND_27;
  reg [31:0] _RAND_30;
  reg [31:0] _RAND_33;
  reg [31:0] _RAND_36;
  reg [31:0] _RAND_39;
  reg [31:0] _RAND_42;
  reg [31:0] _RAND_45;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [31:0] _RAND_22;
  reg [31:0] _RAND_23;
  reg [31:0] _RAND_25;
  reg [31:0] _RAND_26;
  reg [31:0] _RAND_28;
  reg [31:0] _RAND_29;
  reg [31:0] _RAND_31;
  reg [31:0] _RAND_32;
  reg [31:0] _RAND_34;
  reg [31:0] _RAND_35;
  reg [31:0] _RAND_37;
  reg [31:0] _RAND_38;
  reg [31:0] _RAND_40;
  reg [31:0] _RAND_41;
  reg [31:0] _RAND_43;
  reg [31:0] _RAND_44;
  reg [31:0] _RAND_46;
  reg [31:0] _RAND_47;
  reg [31:0] _RAND_48;
  reg [31:0] _RAND_49;
  reg [31:0] _RAND_50;
`endif // RANDOMIZE_REG_INIT
  reg [7:0] lut_mem_0 [0:63]; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_0_rd_vec_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [5:0] lut_mem_0_rd_vec_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [7:0] lut_mem_0_rd_vec_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [7:0] lut_mem_0_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [5:0] lut_mem_0_MPORT_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_0_MPORT_mask; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_0_MPORT_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  reg  lut_mem_0_rd_vec_en_pipe_0;
  reg [5:0] lut_mem_0_rd_vec_addr_pipe_0;
  reg [7:0] lut_mem_1 [0:63]; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_1_rd_vec_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [5:0] lut_mem_1_rd_vec_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [7:0] lut_mem_1_rd_vec_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [7:0] lut_mem_1_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [5:0] lut_mem_1_MPORT_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_1_MPORT_mask; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_1_MPORT_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  reg  lut_mem_1_rd_vec_en_pipe_0;
  reg [5:0] lut_mem_1_rd_vec_addr_pipe_0;
  reg [7:0] lut_mem_2 [0:63]; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_2_rd_vec_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [5:0] lut_mem_2_rd_vec_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [7:0] lut_mem_2_rd_vec_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [7:0] lut_mem_2_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [5:0] lut_mem_2_MPORT_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_2_MPORT_mask; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_2_MPORT_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  reg  lut_mem_2_rd_vec_en_pipe_0;
  reg [5:0] lut_mem_2_rd_vec_addr_pipe_0;
  reg [7:0] lut_mem_3 [0:63]; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_3_rd_vec_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [5:0] lut_mem_3_rd_vec_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [7:0] lut_mem_3_rd_vec_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [7:0] lut_mem_3_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [5:0] lut_mem_3_MPORT_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_3_MPORT_mask; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_3_MPORT_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  reg  lut_mem_3_rd_vec_en_pipe_0;
  reg [5:0] lut_mem_3_rd_vec_addr_pipe_0;
  reg [7:0] lut_mem_4 [0:63]; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_4_rd_vec_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [5:0] lut_mem_4_rd_vec_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [7:0] lut_mem_4_rd_vec_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [7:0] lut_mem_4_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [5:0] lut_mem_4_MPORT_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_4_MPORT_mask; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_4_MPORT_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  reg  lut_mem_4_rd_vec_en_pipe_0;
  reg [5:0] lut_mem_4_rd_vec_addr_pipe_0;
  reg [7:0] lut_mem_5 [0:63]; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_5_rd_vec_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [5:0] lut_mem_5_rd_vec_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [7:0] lut_mem_5_rd_vec_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [7:0] lut_mem_5_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [5:0] lut_mem_5_MPORT_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_5_MPORT_mask; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_5_MPORT_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  reg  lut_mem_5_rd_vec_en_pipe_0;
  reg [5:0] lut_mem_5_rd_vec_addr_pipe_0;
  reg [7:0] lut_mem_6 [0:63]; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_6_rd_vec_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [5:0] lut_mem_6_rd_vec_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [7:0] lut_mem_6_rd_vec_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [7:0] lut_mem_6_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [5:0] lut_mem_6_MPORT_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_6_MPORT_mask; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_6_MPORT_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  reg  lut_mem_6_rd_vec_en_pipe_0;
  reg [5:0] lut_mem_6_rd_vec_addr_pipe_0;
  reg [7:0] lut_mem_7 [0:63]; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_7_rd_vec_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [5:0] lut_mem_7_rd_vec_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [7:0] lut_mem_7_rd_vec_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [7:0] lut_mem_7_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [5:0] lut_mem_7_MPORT_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_7_MPORT_mask; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_7_MPORT_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  reg  lut_mem_7_rd_vec_en_pipe_0;
  reg [5:0] lut_mem_7_rd_vec_addr_pipe_0;
  reg [7:0] lut_mem_8 [0:63]; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_8_rd_vec_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [5:0] lut_mem_8_rd_vec_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [7:0] lut_mem_8_rd_vec_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [7:0] lut_mem_8_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [5:0] lut_mem_8_MPORT_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_8_MPORT_mask; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_8_MPORT_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  reg  lut_mem_8_rd_vec_en_pipe_0;
  reg [5:0] lut_mem_8_rd_vec_addr_pipe_0;
  reg [7:0] lut_mem_9 [0:63]; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_9_rd_vec_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [5:0] lut_mem_9_rd_vec_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [7:0] lut_mem_9_rd_vec_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [7:0] lut_mem_9_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [5:0] lut_mem_9_MPORT_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_9_MPORT_mask; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_9_MPORT_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  reg  lut_mem_9_rd_vec_en_pipe_0;
  reg [5:0] lut_mem_9_rd_vec_addr_pipe_0;
  reg [7:0] lut_mem_10 [0:63]; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_10_rd_vec_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [5:0] lut_mem_10_rd_vec_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [7:0] lut_mem_10_rd_vec_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [7:0] lut_mem_10_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [5:0] lut_mem_10_MPORT_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_10_MPORT_mask; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_10_MPORT_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  reg  lut_mem_10_rd_vec_en_pipe_0;
  reg [5:0] lut_mem_10_rd_vec_addr_pipe_0;
  reg [7:0] lut_mem_11 [0:63]; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_11_rd_vec_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [5:0] lut_mem_11_rd_vec_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [7:0] lut_mem_11_rd_vec_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [7:0] lut_mem_11_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [5:0] lut_mem_11_MPORT_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_11_MPORT_mask; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_11_MPORT_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  reg  lut_mem_11_rd_vec_en_pipe_0;
  reg [5:0] lut_mem_11_rd_vec_addr_pipe_0;
  reg [7:0] lut_mem_12 [0:63]; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_12_rd_vec_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [5:0] lut_mem_12_rd_vec_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [7:0] lut_mem_12_rd_vec_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [7:0] lut_mem_12_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [5:0] lut_mem_12_MPORT_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_12_MPORT_mask; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_12_MPORT_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  reg  lut_mem_12_rd_vec_en_pipe_0;
  reg [5:0] lut_mem_12_rd_vec_addr_pipe_0;
  reg [7:0] lut_mem_13 [0:63]; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_13_rd_vec_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [5:0] lut_mem_13_rd_vec_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [7:0] lut_mem_13_rd_vec_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [7:0] lut_mem_13_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [5:0] lut_mem_13_MPORT_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_13_MPORT_mask; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_13_MPORT_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  reg  lut_mem_13_rd_vec_en_pipe_0;
  reg [5:0] lut_mem_13_rd_vec_addr_pipe_0;
  reg [7:0] lut_mem_14 [0:63]; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_14_rd_vec_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [5:0] lut_mem_14_rd_vec_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [7:0] lut_mem_14_rd_vec_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [7:0] lut_mem_14_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [5:0] lut_mem_14_MPORT_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_14_MPORT_mask; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_14_MPORT_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  reg  lut_mem_14_rd_vec_en_pipe_0;
  reg [5:0] lut_mem_14_rd_vec_addr_pipe_0;
  reg [7:0] lut_mem_15 [0:63]; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_15_rd_vec_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [5:0] lut_mem_15_rd_vec_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [7:0] lut_mem_15_rd_vec_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [7:0] lut_mem_15_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [5:0] lut_mem_15_MPORT_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_15_MPORT_mask; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_15_MPORT_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  reg  lut_mem_15_rd_vec_en_pipe_0;
  reg [5:0] lut_mem_15_rd_vec_addr_pipe_0;
  reg  io_wr_valid_REG; // @[src/main/scala/npu/utils/UniversalLUT.scala 51:25]
  wire [3:0] rd_col = io_rd_addr[3:0]; // @[src/main/scala/npu/utils/UniversalLUT.scala 72:26]
  reg [3:0] rd_col_delayed; // @[src/main/scala/npu/utils/UniversalLUT.scala 78:33]
  wire [7:0] _GEN_26 = lut_mem_0_rd_vec_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
  wire [7:0] _GEN_27 = 4'h1 == rd_col_delayed ? lut_mem_1_rd_vec_data : _GEN_26; // @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
  wire [7:0] _GEN_28 = 4'h2 == rd_col_delayed ? lut_mem_2_rd_vec_data : _GEN_27; // @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
  wire [7:0] _GEN_29 = 4'h3 == rd_col_delayed ? lut_mem_3_rd_vec_data : _GEN_28; // @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
  wire [7:0] _GEN_30 = 4'h4 == rd_col_delayed ? lut_mem_4_rd_vec_data : _GEN_29; // @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
  wire [7:0] _GEN_31 = 4'h5 == rd_col_delayed ? lut_mem_5_rd_vec_data : _GEN_30; // @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
  wire [7:0] _GEN_32 = 4'h6 == rd_col_delayed ? lut_mem_6_rd_vec_data : _GEN_31; // @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
  wire [7:0] _GEN_33 = 4'h7 == rd_col_delayed ? lut_mem_7_rd_vec_data : _GEN_32; // @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
  wire [7:0] _GEN_34 = 4'h8 == rd_col_delayed ? lut_mem_8_rd_vec_data : _GEN_33; // @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
  wire [7:0] _GEN_35 = 4'h9 == rd_col_delayed ? lut_mem_9_rd_vec_data : _GEN_34; // @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
  wire [7:0] _GEN_36 = 4'ha == rd_col_delayed ? lut_mem_10_rd_vec_data : _GEN_35; // @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
  wire [7:0] _GEN_37 = 4'hb == rd_col_delayed ? lut_mem_11_rd_vec_data : _GEN_36; // @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
  wire [7:0] _GEN_38 = 4'hc == rd_col_delayed ? lut_mem_12_rd_vec_data : _GEN_37; // @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
  wire [7:0] _GEN_39 = 4'hd == rd_col_delayed ? lut_mem_13_rd_vec_data : _GEN_38; // @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
  wire [7:0] _GEN_40 = 4'he == rd_col_delayed ? lut_mem_14_rd_vec_data : _GEN_39; // @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
  reg  io_rd_valid_REG; // @[src/main/scala/npu/utils/UniversalLUT.scala 84:25]
  assign lut_mem_0_rd_vec_en = lut_mem_0_rd_vec_en_pipe_0;
  assign lut_mem_0_rd_vec_addr = lut_mem_0_rd_vec_addr_pipe_0;
  assign lut_mem_0_rd_vec_data = lut_mem_0[lut_mem_0_rd_vec_addr]; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  assign lut_mem_0_MPORT_data = io_wr_data_0;
  assign lut_mem_0_MPORT_addr = io_wr_addr;
  assign lut_mem_0_MPORT_mask = 1'h1;
  assign lut_mem_0_MPORT_en = io_wr_en;
  assign lut_mem_1_rd_vec_en = lut_mem_1_rd_vec_en_pipe_0;
  assign lut_mem_1_rd_vec_addr = lut_mem_1_rd_vec_addr_pipe_0;
  assign lut_mem_1_rd_vec_data = lut_mem_1[lut_mem_1_rd_vec_addr]; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  assign lut_mem_1_MPORT_data = io_wr_data_1;
  assign lut_mem_1_MPORT_addr = io_wr_addr;
  assign lut_mem_1_MPORT_mask = 1'h1;
  assign lut_mem_1_MPORT_en = io_wr_en;
  assign lut_mem_2_rd_vec_en = lut_mem_2_rd_vec_en_pipe_0;
  assign lut_mem_2_rd_vec_addr = lut_mem_2_rd_vec_addr_pipe_0;
  assign lut_mem_2_rd_vec_data = lut_mem_2[lut_mem_2_rd_vec_addr]; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  assign lut_mem_2_MPORT_data = io_wr_data_2;
  assign lut_mem_2_MPORT_addr = io_wr_addr;
  assign lut_mem_2_MPORT_mask = 1'h1;
  assign lut_mem_2_MPORT_en = io_wr_en;
  assign lut_mem_3_rd_vec_en = lut_mem_3_rd_vec_en_pipe_0;
  assign lut_mem_3_rd_vec_addr = lut_mem_3_rd_vec_addr_pipe_0;
  assign lut_mem_3_rd_vec_data = lut_mem_3[lut_mem_3_rd_vec_addr]; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  assign lut_mem_3_MPORT_data = io_wr_data_3;
  assign lut_mem_3_MPORT_addr = io_wr_addr;
  assign lut_mem_3_MPORT_mask = 1'h1;
  assign lut_mem_3_MPORT_en = io_wr_en;
  assign lut_mem_4_rd_vec_en = lut_mem_4_rd_vec_en_pipe_0;
  assign lut_mem_4_rd_vec_addr = lut_mem_4_rd_vec_addr_pipe_0;
  assign lut_mem_4_rd_vec_data = lut_mem_4[lut_mem_4_rd_vec_addr]; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  assign lut_mem_4_MPORT_data = io_wr_data_4;
  assign lut_mem_4_MPORT_addr = io_wr_addr;
  assign lut_mem_4_MPORT_mask = 1'h1;
  assign lut_mem_4_MPORT_en = io_wr_en;
  assign lut_mem_5_rd_vec_en = lut_mem_5_rd_vec_en_pipe_0;
  assign lut_mem_5_rd_vec_addr = lut_mem_5_rd_vec_addr_pipe_0;
  assign lut_mem_5_rd_vec_data = lut_mem_5[lut_mem_5_rd_vec_addr]; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  assign lut_mem_5_MPORT_data = io_wr_data_5;
  assign lut_mem_5_MPORT_addr = io_wr_addr;
  assign lut_mem_5_MPORT_mask = 1'h1;
  assign lut_mem_5_MPORT_en = io_wr_en;
  assign lut_mem_6_rd_vec_en = lut_mem_6_rd_vec_en_pipe_0;
  assign lut_mem_6_rd_vec_addr = lut_mem_6_rd_vec_addr_pipe_0;
  assign lut_mem_6_rd_vec_data = lut_mem_6[lut_mem_6_rd_vec_addr]; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  assign lut_mem_6_MPORT_data = io_wr_data_6;
  assign lut_mem_6_MPORT_addr = io_wr_addr;
  assign lut_mem_6_MPORT_mask = 1'h1;
  assign lut_mem_6_MPORT_en = io_wr_en;
  assign lut_mem_7_rd_vec_en = lut_mem_7_rd_vec_en_pipe_0;
  assign lut_mem_7_rd_vec_addr = lut_mem_7_rd_vec_addr_pipe_0;
  assign lut_mem_7_rd_vec_data = lut_mem_7[lut_mem_7_rd_vec_addr]; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  assign lut_mem_7_MPORT_data = io_wr_data_7;
  assign lut_mem_7_MPORT_addr = io_wr_addr;
  assign lut_mem_7_MPORT_mask = 1'h1;
  assign lut_mem_7_MPORT_en = io_wr_en;
  assign lut_mem_8_rd_vec_en = lut_mem_8_rd_vec_en_pipe_0;
  assign lut_mem_8_rd_vec_addr = lut_mem_8_rd_vec_addr_pipe_0;
  assign lut_mem_8_rd_vec_data = lut_mem_8[lut_mem_8_rd_vec_addr]; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  assign lut_mem_8_MPORT_data = io_wr_data_8;
  assign lut_mem_8_MPORT_addr = io_wr_addr;
  assign lut_mem_8_MPORT_mask = 1'h1;
  assign lut_mem_8_MPORT_en = io_wr_en;
  assign lut_mem_9_rd_vec_en = lut_mem_9_rd_vec_en_pipe_0;
  assign lut_mem_9_rd_vec_addr = lut_mem_9_rd_vec_addr_pipe_0;
  assign lut_mem_9_rd_vec_data = lut_mem_9[lut_mem_9_rd_vec_addr]; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  assign lut_mem_9_MPORT_data = io_wr_data_9;
  assign lut_mem_9_MPORT_addr = io_wr_addr;
  assign lut_mem_9_MPORT_mask = 1'h1;
  assign lut_mem_9_MPORT_en = io_wr_en;
  assign lut_mem_10_rd_vec_en = lut_mem_10_rd_vec_en_pipe_0;
  assign lut_mem_10_rd_vec_addr = lut_mem_10_rd_vec_addr_pipe_0;
  assign lut_mem_10_rd_vec_data = lut_mem_10[lut_mem_10_rd_vec_addr]; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  assign lut_mem_10_MPORT_data = io_wr_data_10;
  assign lut_mem_10_MPORT_addr = io_wr_addr;
  assign lut_mem_10_MPORT_mask = 1'h1;
  assign lut_mem_10_MPORT_en = io_wr_en;
  assign lut_mem_11_rd_vec_en = lut_mem_11_rd_vec_en_pipe_0;
  assign lut_mem_11_rd_vec_addr = lut_mem_11_rd_vec_addr_pipe_0;
  assign lut_mem_11_rd_vec_data = lut_mem_11[lut_mem_11_rd_vec_addr]; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  assign lut_mem_11_MPORT_data = io_wr_data_11;
  assign lut_mem_11_MPORT_addr = io_wr_addr;
  assign lut_mem_11_MPORT_mask = 1'h1;
  assign lut_mem_11_MPORT_en = io_wr_en;
  assign lut_mem_12_rd_vec_en = lut_mem_12_rd_vec_en_pipe_0;
  assign lut_mem_12_rd_vec_addr = lut_mem_12_rd_vec_addr_pipe_0;
  assign lut_mem_12_rd_vec_data = lut_mem_12[lut_mem_12_rd_vec_addr]; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  assign lut_mem_12_MPORT_data = io_wr_data_12;
  assign lut_mem_12_MPORT_addr = io_wr_addr;
  assign lut_mem_12_MPORT_mask = 1'h1;
  assign lut_mem_12_MPORT_en = io_wr_en;
  assign lut_mem_13_rd_vec_en = lut_mem_13_rd_vec_en_pipe_0;
  assign lut_mem_13_rd_vec_addr = lut_mem_13_rd_vec_addr_pipe_0;
  assign lut_mem_13_rd_vec_data = lut_mem_13[lut_mem_13_rd_vec_addr]; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  assign lut_mem_13_MPORT_data = io_wr_data_13;
  assign lut_mem_13_MPORT_addr = io_wr_addr;
  assign lut_mem_13_MPORT_mask = 1'h1;
  assign lut_mem_13_MPORT_en = io_wr_en;
  assign lut_mem_14_rd_vec_en = lut_mem_14_rd_vec_en_pipe_0;
  assign lut_mem_14_rd_vec_addr = lut_mem_14_rd_vec_addr_pipe_0;
  assign lut_mem_14_rd_vec_data = lut_mem_14[lut_mem_14_rd_vec_addr]; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  assign lut_mem_14_MPORT_data = io_wr_data_14;
  assign lut_mem_14_MPORT_addr = io_wr_addr;
  assign lut_mem_14_MPORT_mask = 1'h1;
  assign lut_mem_14_MPORT_en = io_wr_en;
  assign lut_mem_15_rd_vec_en = lut_mem_15_rd_vec_en_pipe_0;
  assign lut_mem_15_rd_vec_addr = lut_mem_15_rd_vec_addr_pipe_0;
  assign lut_mem_15_rd_vec_data = lut_mem_15[lut_mem_15_rd_vec_addr]; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  assign lut_mem_15_MPORT_data = io_wr_data_15;
  assign lut_mem_15_MPORT_addr = io_wr_addr;
  assign lut_mem_15_MPORT_mask = 1'h1;
  assign lut_mem_15_MPORT_en = io_wr_en;
  assign io_wr_valid = io_wr_valid_REG; // @[src/main/scala/npu/utils/UniversalLUT.scala 51:15]
  assign io_rd_data = 4'hf == rd_col_delayed ? lut_mem_15_rd_vec_data : _GEN_40; // @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
  assign io_rd_valid = io_rd_valid_REG; // @[src/main/scala/npu/utils/UniversalLUT.scala 84:15]
  always @(posedge clock) begin
    if (lut_mem_0_MPORT_en & lut_mem_0_MPORT_mask) begin
      lut_mem_0[lut_mem_0_MPORT_addr] <= lut_mem_0_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
    end
    lut_mem_0_rd_vec_en_pipe_0 <= io_rd_en;
    if (io_rd_en) begin
      lut_mem_0_rd_vec_addr_pipe_0 <= io_rd_addr[9:4];
    end
    if (lut_mem_1_MPORT_en & lut_mem_1_MPORT_mask) begin
      lut_mem_1[lut_mem_1_MPORT_addr] <= lut_mem_1_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
    end
    lut_mem_1_rd_vec_en_pipe_0 <= io_rd_en;
    if (io_rd_en) begin
      lut_mem_1_rd_vec_addr_pipe_0 <= io_rd_addr[9:4];
    end
    if (lut_mem_2_MPORT_en & lut_mem_2_MPORT_mask) begin
      lut_mem_2[lut_mem_2_MPORT_addr] <= lut_mem_2_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
    end
    lut_mem_2_rd_vec_en_pipe_0 <= io_rd_en;
    if (io_rd_en) begin
      lut_mem_2_rd_vec_addr_pipe_0 <= io_rd_addr[9:4];
    end
    if (lut_mem_3_MPORT_en & lut_mem_3_MPORT_mask) begin
      lut_mem_3[lut_mem_3_MPORT_addr] <= lut_mem_3_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
    end
    lut_mem_3_rd_vec_en_pipe_0 <= io_rd_en;
    if (io_rd_en) begin
      lut_mem_3_rd_vec_addr_pipe_0 <= io_rd_addr[9:4];
    end
    if (lut_mem_4_MPORT_en & lut_mem_4_MPORT_mask) begin
      lut_mem_4[lut_mem_4_MPORT_addr] <= lut_mem_4_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
    end
    lut_mem_4_rd_vec_en_pipe_0 <= io_rd_en;
    if (io_rd_en) begin
      lut_mem_4_rd_vec_addr_pipe_0 <= io_rd_addr[9:4];
    end
    if (lut_mem_5_MPORT_en & lut_mem_5_MPORT_mask) begin
      lut_mem_5[lut_mem_5_MPORT_addr] <= lut_mem_5_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
    end
    lut_mem_5_rd_vec_en_pipe_0 <= io_rd_en;
    if (io_rd_en) begin
      lut_mem_5_rd_vec_addr_pipe_0 <= io_rd_addr[9:4];
    end
    if (lut_mem_6_MPORT_en & lut_mem_6_MPORT_mask) begin
      lut_mem_6[lut_mem_6_MPORT_addr] <= lut_mem_6_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
    end
    lut_mem_6_rd_vec_en_pipe_0 <= io_rd_en;
    if (io_rd_en) begin
      lut_mem_6_rd_vec_addr_pipe_0 <= io_rd_addr[9:4];
    end
    if (lut_mem_7_MPORT_en & lut_mem_7_MPORT_mask) begin
      lut_mem_7[lut_mem_7_MPORT_addr] <= lut_mem_7_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
    end
    lut_mem_7_rd_vec_en_pipe_0 <= io_rd_en;
    if (io_rd_en) begin
      lut_mem_7_rd_vec_addr_pipe_0 <= io_rd_addr[9:4];
    end
    if (lut_mem_8_MPORT_en & lut_mem_8_MPORT_mask) begin
      lut_mem_8[lut_mem_8_MPORT_addr] <= lut_mem_8_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
    end
    lut_mem_8_rd_vec_en_pipe_0 <= io_rd_en;
    if (io_rd_en) begin
      lut_mem_8_rd_vec_addr_pipe_0 <= io_rd_addr[9:4];
    end
    if (lut_mem_9_MPORT_en & lut_mem_9_MPORT_mask) begin
      lut_mem_9[lut_mem_9_MPORT_addr] <= lut_mem_9_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
    end
    lut_mem_9_rd_vec_en_pipe_0 <= io_rd_en;
    if (io_rd_en) begin
      lut_mem_9_rd_vec_addr_pipe_0 <= io_rd_addr[9:4];
    end
    if (lut_mem_10_MPORT_en & lut_mem_10_MPORT_mask) begin
      lut_mem_10[lut_mem_10_MPORT_addr] <= lut_mem_10_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
    end
    lut_mem_10_rd_vec_en_pipe_0 <= io_rd_en;
    if (io_rd_en) begin
      lut_mem_10_rd_vec_addr_pipe_0 <= io_rd_addr[9:4];
    end
    if (lut_mem_11_MPORT_en & lut_mem_11_MPORT_mask) begin
      lut_mem_11[lut_mem_11_MPORT_addr] <= lut_mem_11_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
    end
    lut_mem_11_rd_vec_en_pipe_0 <= io_rd_en;
    if (io_rd_en) begin
      lut_mem_11_rd_vec_addr_pipe_0 <= io_rd_addr[9:4];
    end
    if (lut_mem_12_MPORT_en & lut_mem_12_MPORT_mask) begin
      lut_mem_12[lut_mem_12_MPORT_addr] <= lut_mem_12_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
    end
    lut_mem_12_rd_vec_en_pipe_0 <= io_rd_en;
    if (io_rd_en) begin
      lut_mem_12_rd_vec_addr_pipe_0 <= io_rd_addr[9:4];
    end
    if (lut_mem_13_MPORT_en & lut_mem_13_MPORT_mask) begin
      lut_mem_13[lut_mem_13_MPORT_addr] <= lut_mem_13_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
    end
    lut_mem_13_rd_vec_en_pipe_0 <= io_rd_en;
    if (io_rd_en) begin
      lut_mem_13_rd_vec_addr_pipe_0 <= io_rd_addr[9:4];
    end
    if (lut_mem_14_MPORT_en & lut_mem_14_MPORT_mask) begin
      lut_mem_14[lut_mem_14_MPORT_addr] <= lut_mem_14_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
    end
    lut_mem_14_rd_vec_en_pipe_0 <= io_rd_en;
    if (io_rd_en) begin
      lut_mem_14_rd_vec_addr_pipe_0 <= io_rd_addr[9:4];
    end
    if (lut_mem_15_MPORT_en & lut_mem_15_MPORT_mask) begin
      lut_mem_15[lut_mem_15_MPORT_addr] <= lut_mem_15_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
    end
    lut_mem_15_rd_vec_en_pipe_0 <= io_rd_en;
    if (io_rd_en) begin
      lut_mem_15_rd_vec_addr_pipe_0 <= io_rd_addr[9:4];
    end
    if (reset) begin // @[src/main/scala/npu/utils/UniversalLUT.scala 51:25]
      io_wr_valid_REG <= 1'h0; // @[src/main/scala/npu/utils/UniversalLUT.scala 51:25]
    end else begin
      io_wr_valid_REG <= io_wr_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 51:25]
    end
    if (io_rd_en) begin // @[src/main/scala/npu/utils/UniversalLUT.scala 78:33]
      rd_col_delayed <= rd_col; // @[src/main/scala/npu/utils/UniversalLUT.scala 78:33]
    end
    if (reset) begin // @[src/main/scala/npu/utils/UniversalLUT.scala 84:25]
      io_rd_valid_REG <= 1'h0; // @[src/main/scala/npu/utils/UniversalLUT.scala 84:25]
    end else begin
      io_rd_valid_REG <= io_rd_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 84:25]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {1{`RANDOM}};
  for (initvar = 0; initvar < 64; initvar = initvar+1)
    lut_mem_0[initvar] = _RAND_0[7:0];
  _RAND_3 = {1{`RANDOM}};
  for (initvar = 0; initvar < 64; initvar = initvar+1)
    lut_mem_1[initvar] = _RAND_3[7:0];
  _RAND_6 = {1{`RANDOM}};
  for (initvar = 0; initvar < 64; initvar = initvar+1)
    lut_mem_2[initvar] = _RAND_6[7:0];
  _RAND_9 = {1{`RANDOM}};
  for (initvar = 0; initvar < 64; initvar = initvar+1)
    lut_mem_3[initvar] = _RAND_9[7:0];
  _RAND_12 = {1{`RANDOM}};
  for (initvar = 0; initvar < 64; initvar = initvar+1)
    lut_mem_4[initvar] = _RAND_12[7:0];
  _RAND_15 = {1{`RANDOM}};
  for (initvar = 0; initvar < 64; initvar = initvar+1)
    lut_mem_5[initvar] = _RAND_15[7:0];
  _RAND_18 = {1{`RANDOM}};
  for (initvar = 0; initvar < 64; initvar = initvar+1)
    lut_mem_6[initvar] = _RAND_18[7:0];
  _RAND_21 = {1{`RANDOM}};
  for (initvar = 0; initvar < 64; initvar = initvar+1)
    lut_mem_7[initvar] = _RAND_21[7:0];
  _RAND_24 = {1{`RANDOM}};
  for (initvar = 0; initvar < 64; initvar = initvar+1)
    lut_mem_8[initvar] = _RAND_24[7:0];
  _RAND_27 = {1{`RANDOM}};
  for (initvar = 0; initvar < 64; initvar = initvar+1)
    lut_mem_9[initvar] = _RAND_27[7:0];
  _RAND_30 = {1{`RANDOM}};
  for (initvar = 0; initvar < 64; initvar = initvar+1)
    lut_mem_10[initvar] = _RAND_30[7:0];
  _RAND_33 = {1{`RANDOM}};
  for (initvar = 0; initvar < 64; initvar = initvar+1)
    lut_mem_11[initvar] = _RAND_33[7:0];
  _RAND_36 = {1{`RANDOM}};
  for (initvar = 0; initvar < 64; initvar = initvar+1)
    lut_mem_12[initvar] = _RAND_36[7:0];
  _RAND_39 = {1{`RANDOM}};
  for (initvar = 0; initvar < 64; initvar = initvar+1)
    lut_mem_13[initvar] = _RAND_39[7:0];
  _RAND_42 = {1{`RANDOM}};
  for (initvar = 0; initvar < 64; initvar = initvar+1)
    lut_mem_14[initvar] = _RAND_42[7:0];
  _RAND_45 = {1{`RANDOM}};
  for (initvar = 0; initvar < 64; initvar = initvar+1)
    lut_mem_15[initvar] = _RAND_45[7:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  lut_mem_0_rd_vec_en_pipe_0 = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  lut_mem_0_rd_vec_addr_pipe_0 = _RAND_2[5:0];
  _RAND_4 = {1{`RANDOM}};
  lut_mem_1_rd_vec_en_pipe_0 = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  lut_mem_1_rd_vec_addr_pipe_0 = _RAND_5[5:0];
  _RAND_7 = {1{`RANDOM}};
  lut_mem_2_rd_vec_en_pipe_0 = _RAND_7[0:0];
  _RAND_8 = {1{`RANDOM}};
  lut_mem_2_rd_vec_addr_pipe_0 = _RAND_8[5:0];
  _RAND_10 = {1{`RANDOM}};
  lut_mem_3_rd_vec_en_pipe_0 = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  lut_mem_3_rd_vec_addr_pipe_0 = _RAND_11[5:0];
  _RAND_13 = {1{`RANDOM}};
  lut_mem_4_rd_vec_en_pipe_0 = _RAND_13[0:0];
  _RAND_14 = {1{`RANDOM}};
  lut_mem_4_rd_vec_addr_pipe_0 = _RAND_14[5:0];
  _RAND_16 = {1{`RANDOM}};
  lut_mem_5_rd_vec_en_pipe_0 = _RAND_16[0:0];
  _RAND_17 = {1{`RANDOM}};
  lut_mem_5_rd_vec_addr_pipe_0 = _RAND_17[5:0];
  _RAND_19 = {1{`RANDOM}};
  lut_mem_6_rd_vec_en_pipe_0 = _RAND_19[0:0];
  _RAND_20 = {1{`RANDOM}};
  lut_mem_6_rd_vec_addr_pipe_0 = _RAND_20[5:0];
  _RAND_22 = {1{`RANDOM}};
  lut_mem_7_rd_vec_en_pipe_0 = _RAND_22[0:0];
  _RAND_23 = {1{`RANDOM}};
  lut_mem_7_rd_vec_addr_pipe_0 = _RAND_23[5:0];
  _RAND_25 = {1{`RANDOM}};
  lut_mem_8_rd_vec_en_pipe_0 = _RAND_25[0:0];
  _RAND_26 = {1{`RANDOM}};
  lut_mem_8_rd_vec_addr_pipe_0 = _RAND_26[5:0];
  _RAND_28 = {1{`RANDOM}};
  lut_mem_9_rd_vec_en_pipe_0 = _RAND_28[0:0];
  _RAND_29 = {1{`RANDOM}};
  lut_mem_9_rd_vec_addr_pipe_0 = _RAND_29[5:0];
  _RAND_31 = {1{`RANDOM}};
  lut_mem_10_rd_vec_en_pipe_0 = _RAND_31[0:0];
  _RAND_32 = {1{`RANDOM}};
  lut_mem_10_rd_vec_addr_pipe_0 = _RAND_32[5:0];
  _RAND_34 = {1{`RANDOM}};
  lut_mem_11_rd_vec_en_pipe_0 = _RAND_34[0:0];
  _RAND_35 = {1{`RANDOM}};
  lut_mem_11_rd_vec_addr_pipe_0 = _RAND_35[5:0];
  _RAND_37 = {1{`RANDOM}};
  lut_mem_12_rd_vec_en_pipe_0 = _RAND_37[0:0];
  _RAND_38 = {1{`RANDOM}};
  lut_mem_12_rd_vec_addr_pipe_0 = _RAND_38[5:0];
  _RAND_40 = {1{`RANDOM}};
  lut_mem_13_rd_vec_en_pipe_0 = _RAND_40[0:0];
  _RAND_41 = {1{`RANDOM}};
  lut_mem_13_rd_vec_addr_pipe_0 = _RAND_41[5:0];
  _RAND_43 = {1{`RANDOM}};
  lut_mem_14_rd_vec_en_pipe_0 = _RAND_43[0:0];
  _RAND_44 = {1{`RANDOM}};
  lut_mem_14_rd_vec_addr_pipe_0 = _RAND_44[5:0];
  _RAND_46 = {1{`RANDOM}};
  lut_mem_15_rd_vec_en_pipe_0 = _RAND_46[0:0];
  _RAND_47 = {1{`RANDOM}};
  lut_mem_15_rd_vec_addr_pipe_0 = _RAND_47[5:0];
  _RAND_48 = {1{`RANDOM}};
  io_wr_valid_REG = _RAND_48[0:0];
  _RAND_49 = {1{`RANDOM}};
  rd_col_delayed = _RAND_49[3:0];
  _RAND_50 = {1{`RANDOM}};
  io_rd_valid_REG = _RAND_50[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module QuantActCore( // @[src/main/scala/npu/core/QuantActUnit.scala 27:7]
  input         clock, // @[src/main/scala/npu/core/QuantActUnit.scala 27:7]
  input         reset, // @[src/main/scala/npu/core/QuantActUnit.scala 27:7]
  input  [31:0] io_in_tpu, // @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
  input  [9:0]  io_in_direct, // @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
  input         io_input_mode, // @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
  input         io_in_valid, // @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
  input  [31:0] io_param, // @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
  input  [1:0]  io_act_mask, // @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
  input         io_fusion_second, // @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
  input         io_stall, // @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
  input         io_lut_wr_en, // @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
  input  [5:0]  io_lut_wr_addr, // @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
  input  [7:0]  io_lut_wr_data_0, // @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
  input  [7:0]  io_lut_wr_data_1, // @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
  input  [7:0]  io_lut_wr_data_2, // @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
  input  [7:0]  io_lut_wr_data_3, // @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
  input  [7:0]  io_lut_wr_data_4, // @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
  input  [7:0]  io_lut_wr_data_5, // @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
  input  [7:0]  io_lut_wr_data_6, // @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
  input  [7:0]  io_lut_wr_data_7, // @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
  input  [7:0]  io_lut_wr_data_8, // @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
  input  [7:0]  io_lut_wr_data_9, // @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
  input  [7:0]  io_lut_wr_data_10, // @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
  input  [7:0]  io_lut_wr_data_11, // @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
  input  [7:0]  io_lut_wr_data_12, // @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
  input  [7:0]  io_lut_wr_data_13, // @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
  input  [7:0]  io_lut_wr_data_14, // @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
  input  [7:0]  io_lut_wr_data_15, // @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
  output [7:0]  io_out_qact, // @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
  output        io_out_valid, // @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
  output        io_out_lookahead, // @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
  output        io_busy, // @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
  output        io_sync_alert // @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [63:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
`endif // RANDOMIZE_REG_INIT
  wire  actLut_clock; // @[src/main/scala/npu/core/QuantActUnit.scala 134:11]
  wire  actLut_reset; // @[src/main/scala/npu/core/QuantActUnit.scala 134:11]
  wire  actLut_io_wr_en; // @[src/main/scala/npu/core/QuantActUnit.scala 134:11]
  wire [5:0] actLut_io_wr_addr; // @[src/main/scala/npu/core/QuantActUnit.scala 134:11]
  wire [7:0] actLut_io_wr_data_0; // @[src/main/scala/npu/core/QuantActUnit.scala 134:11]
  wire [7:0] actLut_io_wr_data_1; // @[src/main/scala/npu/core/QuantActUnit.scala 134:11]
  wire [7:0] actLut_io_wr_data_2; // @[src/main/scala/npu/core/QuantActUnit.scala 134:11]
  wire [7:0] actLut_io_wr_data_3; // @[src/main/scala/npu/core/QuantActUnit.scala 134:11]
  wire [7:0] actLut_io_wr_data_4; // @[src/main/scala/npu/core/QuantActUnit.scala 134:11]
  wire [7:0] actLut_io_wr_data_5; // @[src/main/scala/npu/core/QuantActUnit.scala 134:11]
  wire [7:0] actLut_io_wr_data_6; // @[src/main/scala/npu/core/QuantActUnit.scala 134:11]
  wire [7:0] actLut_io_wr_data_7; // @[src/main/scala/npu/core/QuantActUnit.scala 134:11]
  wire [7:0] actLut_io_wr_data_8; // @[src/main/scala/npu/core/QuantActUnit.scala 134:11]
  wire [7:0] actLut_io_wr_data_9; // @[src/main/scala/npu/core/QuantActUnit.scala 134:11]
  wire [7:0] actLut_io_wr_data_10; // @[src/main/scala/npu/core/QuantActUnit.scala 134:11]
  wire [7:0] actLut_io_wr_data_11; // @[src/main/scala/npu/core/QuantActUnit.scala 134:11]
  wire [7:0] actLut_io_wr_data_12; // @[src/main/scala/npu/core/QuantActUnit.scala 134:11]
  wire [7:0] actLut_io_wr_data_13; // @[src/main/scala/npu/core/QuantActUnit.scala 134:11]
  wire [7:0] actLut_io_wr_data_14; // @[src/main/scala/npu/core/QuantActUnit.scala 134:11]
  wire [7:0] actLut_io_wr_data_15; // @[src/main/scala/npu/core/QuantActUnit.scala 134:11]
  wire  actLut_io_wr_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 134:11]
  wire  actLut_io_rd_en; // @[src/main/scala/npu/core/QuantActUnit.scala 134:11]
  wire [9:0] actLut_io_rd_addr; // @[src/main/scala/npu/core/QuantActUnit.scala 134:11]
  wire [7:0] actLut_io_rd_data; // @[src/main/scala/npu/core/QuantActUnit.scala 134:11]
  wire  actLut_io_rd_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 134:11]
  wire  run = ~io_stall; // @[src/main/scala/npu/core/QuantActUnit.scala 68:13]
  wire  selectedActEn = io_fusion_second ? io_act_mask[1] : io_act_mask[0]; // @[src/main/scala/npu/core/QuantActUnit.scala 70:26]
  wire [7:0] zp = io_param[7:0]; // @[src/main/scala/npu/core/QuantActUnit.scala 72:30]
  wire [4:0] shift = io_param[12:8]; // @[src/main/scala/npu/core/QuantActUnit.scala 73:23]
  wire [15:0] mult = io_param[31:16]; // @[src/main/scala/npu/core/QuantActUnit.scala 74:23]
  reg [32:0] s1Sub; // @[src/main/scala/npu/core/QuantActUnit.scala 76:21]
  reg [15:0] s1Mult; // @[src/main/scala/npu/core/QuantActUnit.scala 77:21]
  reg [4:0] s1Shift; // @[src/main/scala/npu/core/QuantActUnit.scala 78:21]
  reg  s1ActEn; // @[src/main/scala/npu/core/QuantActUnit.scala 79:21]
  reg  s1Direct; // @[src/main/scala/npu/core/QuantActUnit.scala 80:21]
  reg  s1Valid; // @[src/main/scala/npu/core/QuantActUnit.scala 81:25]
  wire [32:0] _s1Sub_T = {{23{io_in_direct[9]}},io_in_direct}; // @[src/main/scala/npu/core/QuantActUnit.scala 86:46]
  wire [32:0] _s1Sub_T_1 = {{1{io_in_tpu[31]}},io_in_tpu}; // @[src/main/scala/npu/core/QuantActUnit.scala 87:22]
  wire [32:0] _s1Sub_T_2 = {{25{zp[7]}},zp}; // @[src/main/scala/npu/core/QuantActUnit.scala 87:43]
  wire [32:0] _s1Sub_T_5 = $signed(_s1Sub_T_1) - $signed(_s1Sub_T_2); // @[src/main/scala/npu/core/QuantActUnit.scala 87:35]
  reg [48:0] s2MultRes; // @[src/main/scala/npu/core/QuantActUnit.scala 95:22]
  reg [4:0] s2Shift; // @[src/main/scala/npu/core/QuantActUnit.scala 96:22]
  reg  s2ActEn; // @[src/main/scala/npu/core/QuantActUnit.scala 97:22]
  reg  s2Valid; // @[src/main/scala/npu/core/QuantActUnit.scala 98:26]
  wire [16:0] _s2MultRes_T = {1'b0,$signed(s1Mult)}; // @[src/main/scala/npu/core/QuantActUnit.scala 103:56]
  wire [49:0] _s2MultRes_T_1 = $signed(s1Sub) * $signed(_s2MultRes_T); // @[src/main/scala/npu/core/QuantActUnit.scala 103:47]
  wire [49:0] _s2MultRes_T_2 = s1Direct ? $signed({{17{s1Sub[32]}},s1Sub}) : $signed(_s2MultRes_T_1); // @[src/main/scala/npu/core/QuantActUnit.scala 103:23]
  wire [49:0] _GEN_11 = s1Valid ? $signed(_s2MultRes_T_2) : $signed({{1{s2MultRes[48]}},s2MultRes}); // @[src/main/scala/npu/core/QuantActUnit.scala 102:19 103:17 95:22]
  wire [49:0] _GEN_15 = run ? $signed(_GEN_11) : $signed({{1{s2MultRes[48]}},s2MultRes}); // @[src/main/scala/npu/core/QuantActUnit.scala 100:13 95:22]
  wire [48:0] shifted = $signed(s2MultRes) >>> s2Shift; // @[src/main/scala/npu/core/QuantActUnit.scala 109:27]
  wire [48:0] _clampedSigned10_T_2 = $signed(shifted) > 49'sh1ff ? $signed(49'sh1ff) : $signed(shifted); // @[src/main/scala/npu/core/QuantActUnit.scala 112:8]
  wire [48:0] _clampedSigned10_T_3 = $signed(shifted) < -49'sh200 ? $signed(-49'sh200) : $signed(_clampedSigned10_T_2); // @[src/main/scala/npu/core/QuantActUnit.scala 111:25]
  wire [9:0] clampedSigned10 = _clampedSigned10_T_3[9:0]; // @[src/main/scala/npu/core/QuantActUnit.scala 110:29 111:19]
  wire [10:0] _lutAddress_T = {{1{clampedSigned10[9]}},clampedSigned10}; // @[src/main/scala/npu/core/QuantActUnit.scala 114:40]
  wire [10:0] lutAddress = $signed(_lutAddress_T) + 11'sh200; // @[src/main/scala/npu/core/QuantActUnit.scala 114:60]
  wire [48:0] _clampedSigned8_T_2 = $signed(shifted) > 49'sh7f ? $signed(49'sh7f) : $signed(shifted); // @[src/main/scala/npu/core/QuantActUnit.scala 117:8]
  wire [48:0] _clampedSigned8_T_3 = $signed(shifted) < -49'sh80 ? $signed(-49'sh80) : $signed(_clampedSigned8_T_2); // @[src/main/scala/npu/core/QuantActUnit.scala 116:24]
  reg [9:0] s3Idx; // @[src/main/scala/npu/core/QuantActUnit.scala 119:18]
  reg [7:0] s3Linear; // @[src/main/scala/npu/core/QuantActUnit.scala 120:21]
  reg  s3ActEn; // @[src/main/scala/npu/core/QuantActUnit.scala 121:20]
  reg  s3Valid; // @[src/main/scala/npu/core/QuantActUnit.scala 122:24]
  wire [7:0] _s3Linear_T = _clampedSigned8_T_3[7:0]; // @[src/main/scala/npu/core/QuantActUnit.scala 128:34]
  wire [10:0] _GEN_18 = s2Valid ? lutAddress : {{1'd0}, s3Idx}; // @[src/main/scala/npu/core/QuantActUnit.scala 126:19 127:13 119:18]
  wire [10:0] _GEN_22 = run ? _GEN_18 : {{1'd0}, s3Idx}; // @[src/main/scala/npu/core/QuantActUnit.scala 124:13 119:18]
  wire  actReq = s3Valid & s3ActEn & run; // @[src/main/scala/npu/core/QuantActUnit.scala 144:35]
  wire  linearReq = s3Valid & ~s3ActEn & run; // @[src/main/scala/npu/core/QuantActUnit.scala 145:39]
  reg [7:0] linearDataD1; // @[src/main/scala/npu/core/QuantActUnit.scala 150:31]
  reg  linearValidD1; // @[src/main/scala/npu/core/QuantActUnit.scala 151:30]
  wire  rawValid = actLut_io_rd_valid | linearValidD1; // @[src/main/scala/npu/core/QuantActUnit.scala 153:37]
  wire [7:0] rawData = actLut_io_rd_valid ? actLut_io_rd_data : linearDataD1; // @[src/main/scala/npu/core/QuantActUnit.scala 154:20]
  reg  holdValid; // @[src/main/scala/npu/core/QuantActUnit.scala 158:26]
  reg [7:0] holdData; // @[src/main/scala/npu/core/QuantActUnit.scala 159:22]
  wire  _GEN_26 = run & holdValid ? 1'h0 : holdValid; // @[src/main/scala/npu/core/QuantActUnit.scala 164:32 165:15 158:26]
  wire  _GEN_27 = io_stall & rawValid & ~holdValid | _GEN_26; // @[src/main/scala/npu/core/QuantActUnit.scala 161:44 162:15]
  reg  expectedRdValid; // @[src/main/scala/npu/core/QuantActUnit.scala 171:32]
  reg  expectedWrValid; // @[src/main/scala/npu/core/QuantActUnit.scala 172:32]
  wire  _io_sync_alert_T_1 = expectedWrValid != actLut_io_wr_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 176:22]
  wire  _io_sync_alert_T_2 = expectedRdValid != actLut_io_rd_valid | _io_sync_alert_T_1; // @[src/main/scala/npu/core/QuantActUnit.scala 175:46]
  wire  _io_sync_alert_T_4 = holdValid & rawValid & run; // @[src/main/scala/npu/core/QuantActUnit.scala 177:28]
  Universal_Wide_LUT actLut ( // @[src/main/scala/npu/core/QuantActUnit.scala 134:11]
    .clock(actLut_clock),
    .reset(actLut_reset),
    .io_wr_en(actLut_io_wr_en),
    .io_wr_addr(actLut_io_wr_addr),
    .io_wr_data_0(actLut_io_wr_data_0),
    .io_wr_data_1(actLut_io_wr_data_1),
    .io_wr_data_2(actLut_io_wr_data_2),
    .io_wr_data_3(actLut_io_wr_data_3),
    .io_wr_data_4(actLut_io_wr_data_4),
    .io_wr_data_5(actLut_io_wr_data_5),
    .io_wr_data_6(actLut_io_wr_data_6),
    .io_wr_data_7(actLut_io_wr_data_7),
    .io_wr_data_8(actLut_io_wr_data_8),
    .io_wr_data_9(actLut_io_wr_data_9),
    .io_wr_data_10(actLut_io_wr_data_10),
    .io_wr_data_11(actLut_io_wr_data_11),
    .io_wr_data_12(actLut_io_wr_data_12),
    .io_wr_data_13(actLut_io_wr_data_13),
    .io_wr_data_14(actLut_io_wr_data_14),
    .io_wr_data_15(actLut_io_wr_data_15),
    .io_wr_valid(actLut_io_wr_valid),
    .io_rd_en(actLut_io_rd_en),
    .io_rd_addr(actLut_io_rd_addr),
    .io_rd_data(actLut_io_rd_data),
    .io_rd_valid(actLut_io_rd_valid)
  );
  assign io_out_qact = holdValid ? holdData : rawData; // @[src/main/scala/npu/core/QuantActUnit.scala 168:21]
  assign io_out_valid = run & (holdValid | rawValid); // @[src/main/scala/npu/core/QuantActUnit.scala 169:23]
  assign io_out_lookahead = s3Valid & run; // @[src/main/scala/npu/core/QuantActUnit.scala 179:31]
  assign io_busy = s1Valid | s2Valid | s3Valid | rawValid | holdValid; // @[src/main/scala/npu/core/QuantActUnit.scala 180:56]
  assign io_sync_alert = _io_sync_alert_T_2 | _io_sync_alert_T_4; // @[src/main/scala/npu/core/QuantActUnit.scala 176:46]
  assign actLut_clock = clock;
  assign actLut_reset = reset;
  assign actLut_io_wr_en = io_lut_wr_en; // @[src/main/scala/npu/core/QuantActUnit.scala 140:21]
  assign actLut_io_wr_addr = io_lut_wr_addr; // @[src/main/scala/npu/core/QuantActUnit.scala 141:21]
  assign actLut_io_wr_data_0 = io_lut_wr_data_0; // @[src/main/scala/npu/core/QuantActUnit.scala 142:21]
  assign actLut_io_wr_data_1 = io_lut_wr_data_1; // @[src/main/scala/npu/core/QuantActUnit.scala 142:21]
  assign actLut_io_wr_data_2 = io_lut_wr_data_2; // @[src/main/scala/npu/core/QuantActUnit.scala 142:21]
  assign actLut_io_wr_data_3 = io_lut_wr_data_3; // @[src/main/scala/npu/core/QuantActUnit.scala 142:21]
  assign actLut_io_wr_data_4 = io_lut_wr_data_4; // @[src/main/scala/npu/core/QuantActUnit.scala 142:21]
  assign actLut_io_wr_data_5 = io_lut_wr_data_5; // @[src/main/scala/npu/core/QuantActUnit.scala 142:21]
  assign actLut_io_wr_data_6 = io_lut_wr_data_6; // @[src/main/scala/npu/core/QuantActUnit.scala 142:21]
  assign actLut_io_wr_data_7 = io_lut_wr_data_7; // @[src/main/scala/npu/core/QuantActUnit.scala 142:21]
  assign actLut_io_wr_data_8 = io_lut_wr_data_8; // @[src/main/scala/npu/core/QuantActUnit.scala 142:21]
  assign actLut_io_wr_data_9 = io_lut_wr_data_9; // @[src/main/scala/npu/core/QuantActUnit.scala 142:21]
  assign actLut_io_wr_data_10 = io_lut_wr_data_10; // @[src/main/scala/npu/core/QuantActUnit.scala 142:21]
  assign actLut_io_wr_data_11 = io_lut_wr_data_11; // @[src/main/scala/npu/core/QuantActUnit.scala 142:21]
  assign actLut_io_wr_data_12 = io_lut_wr_data_12; // @[src/main/scala/npu/core/QuantActUnit.scala 142:21]
  assign actLut_io_wr_data_13 = io_lut_wr_data_13; // @[src/main/scala/npu/core/QuantActUnit.scala 142:21]
  assign actLut_io_wr_data_14 = io_lut_wr_data_14; // @[src/main/scala/npu/core/QuantActUnit.scala 142:21]
  assign actLut_io_wr_data_15 = io_lut_wr_data_15; // @[src/main/scala/npu/core/QuantActUnit.scala 142:21]
  assign actLut_io_rd_en = s3Valid & s3ActEn & run; // @[src/main/scala/npu/core/QuantActUnit.scala 144:35]
  assign actLut_io_rd_addr = s3Idx; // @[src/main/scala/npu/core/QuantActUnit.scala 148:21]
  always @(posedge clock) begin
    if (run) begin // @[src/main/scala/npu/core/QuantActUnit.scala 83:13]
      if (io_in_valid) begin // @[src/main/scala/npu/core/QuantActUnit.scala 85:23]
        if (io_input_mode) begin // @[src/main/scala/npu/core/QuantActUnit.scala 86:21]
          s1Sub <= _s1Sub_T;
        end else begin
          s1Sub <= _s1Sub_T_5;
        end
      end
    end
    if (run) begin // @[src/main/scala/npu/core/QuantActUnit.scala 83:13]
      if (io_in_valid) begin // @[src/main/scala/npu/core/QuantActUnit.scala 85:23]
        if (io_input_mode) begin // @[src/main/scala/npu/core/QuantActUnit.scala 88:21]
          s1Mult <= 16'h1;
        end else begin
          s1Mult <= mult;
        end
      end
    end
    if (run) begin // @[src/main/scala/npu/core/QuantActUnit.scala 83:13]
      if (io_in_valid) begin // @[src/main/scala/npu/core/QuantActUnit.scala 85:23]
        if (io_input_mode) begin // @[src/main/scala/npu/core/QuantActUnit.scala 89:21]
          s1Shift <= 5'h0;
        end else begin
          s1Shift <= shift;
        end
      end
    end
    if (run) begin // @[src/main/scala/npu/core/QuantActUnit.scala 83:13]
      if (io_in_valid) begin // @[src/main/scala/npu/core/QuantActUnit.scala 85:23]
        s1ActEn <= io_input_mode | selectedActEn; // @[src/main/scala/npu/core/QuantActUnit.scala 90:15]
      end
    end
    if (run) begin // @[src/main/scala/npu/core/QuantActUnit.scala 83:13]
      if (io_in_valid) begin // @[src/main/scala/npu/core/QuantActUnit.scala 85:23]
        s1Direct <= io_input_mode; // @[src/main/scala/npu/core/QuantActUnit.scala 91:16]
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 81:25]
      s1Valid <= 1'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 81:25]
    end else if (run) begin // @[src/main/scala/npu/core/QuantActUnit.scala 83:13]
      s1Valid <= io_in_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 84:13]
    end
    s2MultRes <= _GEN_15[48:0];
    if (run) begin // @[src/main/scala/npu/core/QuantActUnit.scala 100:13]
      if (s1Valid) begin // @[src/main/scala/npu/core/QuantActUnit.scala 102:19]
        s2Shift <= s1Shift; // @[src/main/scala/npu/core/QuantActUnit.scala 104:17]
      end
    end
    if (run) begin // @[src/main/scala/npu/core/QuantActUnit.scala 100:13]
      if (s1Valid) begin // @[src/main/scala/npu/core/QuantActUnit.scala 102:19]
        s2ActEn <= s1ActEn; // @[src/main/scala/npu/core/QuantActUnit.scala 105:17]
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 98:26]
      s2Valid <= 1'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 98:26]
    end else if (run) begin // @[src/main/scala/npu/core/QuantActUnit.scala 100:13]
      s2Valid <= s1Valid; // @[src/main/scala/npu/core/QuantActUnit.scala 101:13]
    end
    s3Idx <= _GEN_22[9:0];
    if (run) begin // @[src/main/scala/npu/core/QuantActUnit.scala 124:13]
      if (s2Valid) begin // @[src/main/scala/npu/core/QuantActUnit.scala 126:19]
        s3Linear <= _s3Linear_T; // @[src/main/scala/npu/core/QuantActUnit.scala 128:16]
      end
    end
    if (run) begin // @[src/main/scala/npu/core/QuantActUnit.scala 124:13]
      if (s2Valid) begin // @[src/main/scala/npu/core/QuantActUnit.scala 126:19]
        s3ActEn <= s2ActEn; // @[src/main/scala/npu/core/QuantActUnit.scala 129:15]
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 122:24]
      s3Valid <= 1'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 122:24]
    end else if (run) begin // @[src/main/scala/npu/core/QuantActUnit.scala 124:13]
      s3Valid <= s2Valid; // @[src/main/scala/npu/core/QuantActUnit.scala 125:13]
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 150:31]
      linearDataD1 <= 8'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 150:31]
    end else if (linearReq) begin // @[src/main/scala/npu/core/QuantActUnit.scala 150:31]
      linearDataD1 <= s3Linear; // @[src/main/scala/npu/core/QuantActUnit.scala 150:31]
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 151:30]
      linearValidD1 <= 1'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 151:30]
    end else begin
      linearValidD1 <= linearReq; // @[src/main/scala/npu/core/QuantActUnit.scala 151:30]
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 158:26]
      holdValid <= 1'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 158:26]
    end else begin
      holdValid <= _GEN_27;
    end
    if (io_stall & rawValid & ~holdValid) begin // @[src/main/scala/npu/core/QuantActUnit.scala 161:44]
      if (actLut_io_rd_valid) begin // @[src/main/scala/npu/core/QuantActUnit.scala 154:20]
        holdData <= actLut_io_rd_data;
      end else begin
        holdData <= linearDataD1;
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 171:32]
      expectedRdValid <= 1'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 171:32]
    end else begin
      expectedRdValid <= actReq; // @[src/main/scala/npu/core/QuantActUnit.scala 171:32]
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 172:32]
      expectedWrValid <= 1'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 172:32]
    end else begin
      expectedWrValid <= io_lut_wr_en; // @[src/main/scala/npu/core/QuantActUnit.scala 172:32]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {2{`RANDOM}};
  s1Sub = _RAND_0[32:0];
  _RAND_1 = {1{`RANDOM}};
  s1Mult = _RAND_1[15:0];
  _RAND_2 = {1{`RANDOM}};
  s1Shift = _RAND_2[4:0];
  _RAND_3 = {1{`RANDOM}};
  s1ActEn = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  s1Direct = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  s1Valid = _RAND_5[0:0];
  _RAND_6 = {2{`RANDOM}};
  s2MultRes = _RAND_6[48:0];
  _RAND_7 = {1{`RANDOM}};
  s2Shift = _RAND_7[4:0];
  _RAND_8 = {1{`RANDOM}};
  s2ActEn = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  s2Valid = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  s3Idx = _RAND_10[9:0];
  _RAND_11 = {1{`RANDOM}};
  s3Linear = _RAND_11[7:0];
  _RAND_12 = {1{`RANDOM}};
  s3ActEn = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  s3Valid = _RAND_13[0:0];
  _RAND_14 = {1{`RANDOM}};
  linearDataD1 = _RAND_14[7:0];
  _RAND_15 = {1{`RANDOM}};
  linearValidD1 = _RAND_15[0:0];
  _RAND_16 = {1{`RANDOM}};
  holdValid = _RAND_16[0:0];
  _RAND_17 = {1{`RANDOM}};
  holdData = _RAND_17[7:0];
  _RAND_18 = {1{`RANDOM}};
  expectedRdValid = _RAND_18[0:0];
  _RAND_19 = {1{`RANDOM}};
  expectedWrValid = _RAND_19[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module QuantActUnit( // @[src/main/scala/npu/core/QuantActUnit.scala 198:7]
  input         clock, // @[src/main/scala/npu/core/QuantActUnit.scala 198:7]
  input         reset, // @[src/main/scala/npu/core/QuantActUnit.scala 198:7]
  input  [31:0] io_in_tpu_0, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [31:0] io_in_tpu_1, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [31:0] io_in_tpu_2, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [31:0] io_in_tpu_3, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [31:0] io_in_tpu_4, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [31:0] io_in_tpu_5, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [31:0] io_in_tpu_6, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [31:0] io_in_tpu_7, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [31:0] io_in_tpu_8, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [31:0] io_in_tpu_9, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [31:0] io_in_tpu_10, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [31:0] io_in_tpu_11, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [31:0] io_in_tpu_12, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [31:0] io_in_tpu_13, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [31:0] io_in_tpu_14, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [31:0] io_in_tpu_15, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [9:0]  io_in_direct_0, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [9:0]  io_in_direct_1, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [9:0]  io_in_direct_2, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [9:0]  io_in_direct_3, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [9:0]  io_in_direct_4, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [9:0]  io_in_direct_5, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [9:0]  io_in_direct_6, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [9:0]  io_in_direct_7, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [9:0]  io_in_direct_8, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [9:0]  io_in_direct_9, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [9:0]  io_in_direct_10, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [9:0]  io_in_direct_11, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [9:0]  io_in_direct_12, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [9:0]  io_in_direct_13, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [9:0]  io_in_direct_14, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [9:0]  io_in_direct_15, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input         io_input_mode, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input         io_in_valid_0, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input         io_in_valid_1, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input         io_in_valid_2, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input         io_in_valid_3, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input         io_in_valid_4, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input         io_in_valid_5, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input         io_in_valid_6, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input         io_in_valid_7, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input         io_in_valid_8, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input         io_in_valid_9, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input         io_in_valid_10, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input         io_in_valid_11, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input         io_in_valid_12, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input         io_in_valid_13, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input         io_in_valid_14, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input         io_in_valid_15, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [31:0] io_matrix_param, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [1:0]  io_act_mask, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input         io_fusion_second, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input         io_stall, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input         io_lut_wr_en, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [5:0]  io_lut_wr_addr, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [7:0]  io_lut_wr_data_0, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [7:0]  io_lut_wr_data_1, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [7:0]  io_lut_wr_data_2, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [7:0]  io_lut_wr_data_3, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [7:0]  io_lut_wr_data_4, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [7:0]  io_lut_wr_data_5, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [7:0]  io_lut_wr_data_6, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [7:0]  io_lut_wr_data_7, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [7:0]  io_lut_wr_data_8, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [7:0]  io_lut_wr_data_9, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [7:0]  io_lut_wr_data_10, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [7:0]  io_lut_wr_data_11, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [7:0]  io_lut_wr_data_12, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [7:0]  io_lut_wr_data_13, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [7:0]  io_lut_wr_data_14, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [7:0]  io_lut_wr_data_15, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output [7:0]  io_out_vec_0, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output [7:0]  io_out_vec_1, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output [7:0]  io_out_vec_2, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output [7:0]  io_out_vec_3, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output [7:0]  io_out_vec_4, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output [7:0]  io_out_vec_5, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output [7:0]  io_out_vec_6, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output [7:0]  io_out_vec_7, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output [7:0]  io_out_vec_8, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output [7:0]  io_out_vec_9, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output [7:0]  io_out_vec_10, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output [7:0]  io_out_vec_11, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output [7:0]  io_out_vec_12, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output [7:0]  io_out_vec_13, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output [7:0]  io_out_vec_14, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output [7:0]  io_out_vec_15, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output        io_out_valid_0, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output        io_out_valid_1, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output        io_out_valid_2, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output        io_out_valid_3, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output        io_out_valid_4, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output        io_out_valid_5, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output        io_out_valid_6, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output        io_out_valid_7, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output        io_out_valid_8, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output        io_out_valid_9, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output        io_out_valid_10, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output        io_out_valid_11, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output        io_out_valid_12, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output        io_out_valid_13, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output        io_out_valid_14, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output        io_out_valid_15, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output        io_out_lookahead_0, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output        io_busy, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output        io_sync_alert // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
);
  wire  cores_0_clock; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_0_reset; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [31:0] cores_0_io_in_tpu; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [9:0] cores_0_io_in_direct; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_0_io_input_mode; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_0_io_in_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [31:0] cores_0_io_param; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [1:0] cores_0_io_act_mask; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_0_io_fusion_second; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_0_io_stall; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_0_io_lut_wr_en; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [5:0] cores_0_io_lut_wr_addr; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_0_io_lut_wr_data_0; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_0_io_lut_wr_data_1; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_0_io_lut_wr_data_2; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_0_io_lut_wr_data_3; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_0_io_lut_wr_data_4; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_0_io_lut_wr_data_5; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_0_io_lut_wr_data_6; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_0_io_lut_wr_data_7; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_0_io_lut_wr_data_8; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_0_io_lut_wr_data_9; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_0_io_lut_wr_data_10; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_0_io_lut_wr_data_11; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_0_io_lut_wr_data_12; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_0_io_lut_wr_data_13; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_0_io_lut_wr_data_14; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_0_io_lut_wr_data_15; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_0_io_out_qact; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_0_io_out_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_0_io_out_lookahead; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_0_io_busy; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_0_io_sync_alert; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_1_clock; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_1_reset; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [31:0] cores_1_io_in_tpu; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [9:0] cores_1_io_in_direct; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_1_io_input_mode; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_1_io_in_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [31:0] cores_1_io_param; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [1:0] cores_1_io_act_mask; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_1_io_fusion_second; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_1_io_stall; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_1_io_lut_wr_en; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [5:0] cores_1_io_lut_wr_addr; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_1_io_lut_wr_data_0; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_1_io_lut_wr_data_1; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_1_io_lut_wr_data_2; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_1_io_lut_wr_data_3; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_1_io_lut_wr_data_4; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_1_io_lut_wr_data_5; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_1_io_lut_wr_data_6; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_1_io_lut_wr_data_7; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_1_io_lut_wr_data_8; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_1_io_lut_wr_data_9; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_1_io_lut_wr_data_10; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_1_io_lut_wr_data_11; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_1_io_lut_wr_data_12; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_1_io_lut_wr_data_13; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_1_io_lut_wr_data_14; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_1_io_lut_wr_data_15; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_1_io_out_qact; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_1_io_out_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_1_io_out_lookahead; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_1_io_busy; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_1_io_sync_alert; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_2_clock; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_2_reset; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [31:0] cores_2_io_in_tpu; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [9:0] cores_2_io_in_direct; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_2_io_input_mode; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_2_io_in_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [31:0] cores_2_io_param; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [1:0] cores_2_io_act_mask; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_2_io_fusion_second; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_2_io_stall; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_2_io_lut_wr_en; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [5:0] cores_2_io_lut_wr_addr; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_2_io_lut_wr_data_0; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_2_io_lut_wr_data_1; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_2_io_lut_wr_data_2; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_2_io_lut_wr_data_3; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_2_io_lut_wr_data_4; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_2_io_lut_wr_data_5; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_2_io_lut_wr_data_6; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_2_io_lut_wr_data_7; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_2_io_lut_wr_data_8; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_2_io_lut_wr_data_9; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_2_io_lut_wr_data_10; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_2_io_lut_wr_data_11; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_2_io_lut_wr_data_12; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_2_io_lut_wr_data_13; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_2_io_lut_wr_data_14; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_2_io_lut_wr_data_15; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_2_io_out_qact; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_2_io_out_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_2_io_out_lookahead; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_2_io_busy; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_2_io_sync_alert; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_3_clock; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_3_reset; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [31:0] cores_3_io_in_tpu; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [9:0] cores_3_io_in_direct; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_3_io_input_mode; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_3_io_in_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [31:0] cores_3_io_param; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [1:0] cores_3_io_act_mask; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_3_io_fusion_second; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_3_io_stall; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_3_io_lut_wr_en; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [5:0] cores_3_io_lut_wr_addr; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_3_io_lut_wr_data_0; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_3_io_lut_wr_data_1; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_3_io_lut_wr_data_2; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_3_io_lut_wr_data_3; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_3_io_lut_wr_data_4; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_3_io_lut_wr_data_5; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_3_io_lut_wr_data_6; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_3_io_lut_wr_data_7; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_3_io_lut_wr_data_8; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_3_io_lut_wr_data_9; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_3_io_lut_wr_data_10; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_3_io_lut_wr_data_11; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_3_io_lut_wr_data_12; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_3_io_lut_wr_data_13; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_3_io_lut_wr_data_14; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_3_io_lut_wr_data_15; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_3_io_out_qact; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_3_io_out_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_3_io_out_lookahead; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_3_io_busy; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_3_io_sync_alert; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_4_clock; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_4_reset; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [31:0] cores_4_io_in_tpu; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [9:0] cores_4_io_in_direct; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_4_io_input_mode; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_4_io_in_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [31:0] cores_4_io_param; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [1:0] cores_4_io_act_mask; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_4_io_fusion_second; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_4_io_stall; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_4_io_lut_wr_en; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [5:0] cores_4_io_lut_wr_addr; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_4_io_lut_wr_data_0; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_4_io_lut_wr_data_1; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_4_io_lut_wr_data_2; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_4_io_lut_wr_data_3; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_4_io_lut_wr_data_4; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_4_io_lut_wr_data_5; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_4_io_lut_wr_data_6; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_4_io_lut_wr_data_7; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_4_io_lut_wr_data_8; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_4_io_lut_wr_data_9; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_4_io_lut_wr_data_10; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_4_io_lut_wr_data_11; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_4_io_lut_wr_data_12; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_4_io_lut_wr_data_13; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_4_io_lut_wr_data_14; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_4_io_lut_wr_data_15; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_4_io_out_qact; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_4_io_out_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_4_io_out_lookahead; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_4_io_busy; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_4_io_sync_alert; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_5_clock; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_5_reset; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [31:0] cores_5_io_in_tpu; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [9:0] cores_5_io_in_direct; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_5_io_input_mode; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_5_io_in_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [31:0] cores_5_io_param; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [1:0] cores_5_io_act_mask; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_5_io_fusion_second; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_5_io_stall; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_5_io_lut_wr_en; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [5:0] cores_5_io_lut_wr_addr; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_5_io_lut_wr_data_0; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_5_io_lut_wr_data_1; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_5_io_lut_wr_data_2; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_5_io_lut_wr_data_3; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_5_io_lut_wr_data_4; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_5_io_lut_wr_data_5; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_5_io_lut_wr_data_6; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_5_io_lut_wr_data_7; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_5_io_lut_wr_data_8; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_5_io_lut_wr_data_9; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_5_io_lut_wr_data_10; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_5_io_lut_wr_data_11; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_5_io_lut_wr_data_12; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_5_io_lut_wr_data_13; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_5_io_lut_wr_data_14; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_5_io_lut_wr_data_15; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_5_io_out_qact; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_5_io_out_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_5_io_out_lookahead; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_5_io_busy; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_5_io_sync_alert; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_6_clock; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_6_reset; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [31:0] cores_6_io_in_tpu; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [9:0] cores_6_io_in_direct; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_6_io_input_mode; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_6_io_in_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [31:0] cores_6_io_param; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [1:0] cores_6_io_act_mask; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_6_io_fusion_second; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_6_io_stall; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_6_io_lut_wr_en; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [5:0] cores_6_io_lut_wr_addr; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_6_io_lut_wr_data_0; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_6_io_lut_wr_data_1; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_6_io_lut_wr_data_2; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_6_io_lut_wr_data_3; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_6_io_lut_wr_data_4; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_6_io_lut_wr_data_5; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_6_io_lut_wr_data_6; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_6_io_lut_wr_data_7; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_6_io_lut_wr_data_8; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_6_io_lut_wr_data_9; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_6_io_lut_wr_data_10; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_6_io_lut_wr_data_11; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_6_io_lut_wr_data_12; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_6_io_lut_wr_data_13; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_6_io_lut_wr_data_14; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_6_io_lut_wr_data_15; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_6_io_out_qact; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_6_io_out_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_6_io_out_lookahead; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_6_io_busy; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_6_io_sync_alert; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_7_clock; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_7_reset; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [31:0] cores_7_io_in_tpu; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [9:0] cores_7_io_in_direct; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_7_io_input_mode; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_7_io_in_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [31:0] cores_7_io_param; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [1:0] cores_7_io_act_mask; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_7_io_fusion_second; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_7_io_stall; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_7_io_lut_wr_en; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [5:0] cores_7_io_lut_wr_addr; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_7_io_lut_wr_data_0; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_7_io_lut_wr_data_1; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_7_io_lut_wr_data_2; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_7_io_lut_wr_data_3; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_7_io_lut_wr_data_4; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_7_io_lut_wr_data_5; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_7_io_lut_wr_data_6; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_7_io_lut_wr_data_7; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_7_io_lut_wr_data_8; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_7_io_lut_wr_data_9; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_7_io_lut_wr_data_10; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_7_io_lut_wr_data_11; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_7_io_lut_wr_data_12; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_7_io_lut_wr_data_13; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_7_io_lut_wr_data_14; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_7_io_lut_wr_data_15; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_7_io_out_qact; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_7_io_out_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_7_io_out_lookahead; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_7_io_busy; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_7_io_sync_alert; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_8_clock; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_8_reset; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [31:0] cores_8_io_in_tpu; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [9:0] cores_8_io_in_direct; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_8_io_input_mode; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_8_io_in_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [31:0] cores_8_io_param; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [1:0] cores_8_io_act_mask; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_8_io_fusion_second; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_8_io_stall; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_8_io_lut_wr_en; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [5:0] cores_8_io_lut_wr_addr; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_8_io_lut_wr_data_0; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_8_io_lut_wr_data_1; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_8_io_lut_wr_data_2; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_8_io_lut_wr_data_3; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_8_io_lut_wr_data_4; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_8_io_lut_wr_data_5; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_8_io_lut_wr_data_6; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_8_io_lut_wr_data_7; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_8_io_lut_wr_data_8; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_8_io_lut_wr_data_9; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_8_io_lut_wr_data_10; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_8_io_lut_wr_data_11; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_8_io_lut_wr_data_12; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_8_io_lut_wr_data_13; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_8_io_lut_wr_data_14; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_8_io_lut_wr_data_15; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_8_io_out_qact; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_8_io_out_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_8_io_out_lookahead; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_8_io_busy; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_8_io_sync_alert; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_9_clock; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_9_reset; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [31:0] cores_9_io_in_tpu; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [9:0] cores_9_io_in_direct; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_9_io_input_mode; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_9_io_in_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [31:0] cores_9_io_param; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [1:0] cores_9_io_act_mask; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_9_io_fusion_second; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_9_io_stall; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_9_io_lut_wr_en; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [5:0] cores_9_io_lut_wr_addr; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_9_io_lut_wr_data_0; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_9_io_lut_wr_data_1; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_9_io_lut_wr_data_2; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_9_io_lut_wr_data_3; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_9_io_lut_wr_data_4; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_9_io_lut_wr_data_5; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_9_io_lut_wr_data_6; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_9_io_lut_wr_data_7; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_9_io_lut_wr_data_8; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_9_io_lut_wr_data_9; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_9_io_lut_wr_data_10; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_9_io_lut_wr_data_11; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_9_io_lut_wr_data_12; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_9_io_lut_wr_data_13; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_9_io_lut_wr_data_14; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_9_io_lut_wr_data_15; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_9_io_out_qact; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_9_io_out_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_9_io_out_lookahead; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_9_io_busy; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_9_io_sync_alert; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_10_clock; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_10_reset; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [31:0] cores_10_io_in_tpu; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [9:0] cores_10_io_in_direct; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_10_io_input_mode; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_10_io_in_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [31:0] cores_10_io_param; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [1:0] cores_10_io_act_mask; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_10_io_fusion_second; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_10_io_stall; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_10_io_lut_wr_en; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [5:0] cores_10_io_lut_wr_addr; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_10_io_lut_wr_data_0; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_10_io_lut_wr_data_1; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_10_io_lut_wr_data_2; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_10_io_lut_wr_data_3; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_10_io_lut_wr_data_4; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_10_io_lut_wr_data_5; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_10_io_lut_wr_data_6; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_10_io_lut_wr_data_7; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_10_io_lut_wr_data_8; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_10_io_lut_wr_data_9; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_10_io_lut_wr_data_10; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_10_io_lut_wr_data_11; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_10_io_lut_wr_data_12; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_10_io_lut_wr_data_13; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_10_io_lut_wr_data_14; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_10_io_lut_wr_data_15; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_10_io_out_qact; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_10_io_out_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_10_io_out_lookahead; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_10_io_busy; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_10_io_sync_alert; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_11_clock; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_11_reset; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [31:0] cores_11_io_in_tpu; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [9:0] cores_11_io_in_direct; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_11_io_input_mode; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_11_io_in_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [31:0] cores_11_io_param; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [1:0] cores_11_io_act_mask; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_11_io_fusion_second; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_11_io_stall; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_11_io_lut_wr_en; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [5:0] cores_11_io_lut_wr_addr; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_11_io_lut_wr_data_0; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_11_io_lut_wr_data_1; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_11_io_lut_wr_data_2; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_11_io_lut_wr_data_3; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_11_io_lut_wr_data_4; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_11_io_lut_wr_data_5; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_11_io_lut_wr_data_6; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_11_io_lut_wr_data_7; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_11_io_lut_wr_data_8; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_11_io_lut_wr_data_9; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_11_io_lut_wr_data_10; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_11_io_lut_wr_data_11; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_11_io_lut_wr_data_12; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_11_io_lut_wr_data_13; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_11_io_lut_wr_data_14; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_11_io_lut_wr_data_15; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_11_io_out_qact; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_11_io_out_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_11_io_out_lookahead; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_11_io_busy; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_11_io_sync_alert; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_12_clock; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_12_reset; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [31:0] cores_12_io_in_tpu; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [9:0] cores_12_io_in_direct; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_12_io_input_mode; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_12_io_in_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [31:0] cores_12_io_param; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [1:0] cores_12_io_act_mask; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_12_io_fusion_second; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_12_io_stall; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_12_io_lut_wr_en; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [5:0] cores_12_io_lut_wr_addr; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_12_io_lut_wr_data_0; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_12_io_lut_wr_data_1; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_12_io_lut_wr_data_2; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_12_io_lut_wr_data_3; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_12_io_lut_wr_data_4; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_12_io_lut_wr_data_5; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_12_io_lut_wr_data_6; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_12_io_lut_wr_data_7; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_12_io_lut_wr_data_8; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_12_io_lut_wr_data_9; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_12_io_lut_wr_data_10; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_12_io_lut_wr_data_11; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_12_io_lut_wr_data_12; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_12_io_lut_wr_data_13; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_12_io_lut_wr_data_14; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_12_io_lut_wr_data_15; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_12_io_out_qact; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_12_io_out_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_12_io_out_lookahead; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_12_io_busy; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_12_io_sync_alert; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_13_clock; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_13_reset; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [31:0] cores_13_io_in_tpu; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [9:0] cores_13_io_in_direct; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_13_io_input_mode; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_13_io_in_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [31:0] cores_13_io_param; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [1:0] cores_13_io_act_mask; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_13_io_fusion_second; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_13_io_stall; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_13_io_lut_wr_en; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [5:0] cores_13_io_lut_wr_addr; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_13_io_lut_wr_data_0; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_13_io_lut_wr_data_1; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_13_io_lut_wr_data_2; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_13_io_lut_wr_data_3; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_13_io_lut_wr_data_4; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_13_io_lut_wr_data_5; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_13_io_lut_wr_data_6; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_13_io_lut_wr_data_7; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_13_io_lut_wr_data_8; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_13_io_lut_wr_data_9; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_13_io_lut_wr_data_10; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_13_io_lut_wr_data_11; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_13_io_lut_wr_data_12; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_13_io_lut_wr_data_13; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_13_io_lut_wr_data_14; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_13_io_lut_wr_data_15; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_13_io_out_qact; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_13_io_out_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_13_io_out_lookahead; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_13_io_busy; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_13_io_sync_alert; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_14_clock; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_14_reset; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [31:0] cores_14_io_in_tpu; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [9:0] cores_14_io_in_direct; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_14_io_input_mode; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_14_io_in_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [31:0] cores_14_io_param; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [1:0] cores_14_io_act_mask; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_14_io_fusion_second; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_14_io_stall; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_14_io_lut_wr_en; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [5:0] cores_14_io_lut_wr_addr; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_14_io_lut_wr_data_0; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_14_io_lut_wr_data_1; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_14_io_lut_wr_data_2; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_14_io_lut_wr_data_3; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_14_io_lut_wr_data_4; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_14_io_lut_wr_data_5; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_14_io_lut_wr_data_6; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_14_io_lut_wr_data_7; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_14_io_lut_wr_data_8; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_14_io_lut_wr_data_9; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_14_io_lut_wr_data_10; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_14_io_lut_wr_data_11; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_14_io_lut_wr_data_12; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_14_io_lut_wr_data_13; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_14_io_lut_wr_data_14; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_14_io_lut_wr_data_15; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_14_io_out_qact; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_14_io_out_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_14_io_out_lookahead; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_14_io_busy; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_14_io_sync_alert; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_15_clock; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_15_reset; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [31:0] cores_15_io_in_tpu; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [9:0] cores_15_io_in_direct; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_15_io_input_mode; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_15_io_in_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [31:0] cores_15_io_param; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [1:0] cores_15_io_act_mask; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_15_io_fusion_second; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_15_io_stall; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_15_io_lut_wr_en; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [5:0] cores_15_io_lut_wr_addr; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_15_io_lut_wr_data_0; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_15_io_lut_wr_data_1; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_15_io_lut_wr_data_2; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_15_io_lut_wr_data_3; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_15_io_lut_wr_data_4; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_15_io_lut_wr_data_5; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_15_io_lut_wr_data_6; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_15_io_lut_wr_data_7; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_15_io_lut_wr_data_8; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_15_io_lut_wr_data_9; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_15_io_lut_wr_data_10; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_15_io_lut_wr_data_11; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_15_io_lut_wr_data_12; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_15_io_lut_wr_data_13; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_15_io_lut_wr_data_14; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_15_io_lut_wr_data_15; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] cores_15_io_out_qact; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_15_io_out_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_15_io_out_lookahead; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_15_io_busy; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_15_io_sync_alert; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire [7:0] anyValid_lo = {io_in_valid_7,io_in_valid_6,io_in_valid_5,io_in_valid_4,io_in_valid_3,io_in_valid_2,
    io_in_valid_1,io_in_valid_0}; // @[src/main/scala/npu/core/QuantActUnit.scala 255:30]
  wire [15:0] _anyValid_T = {io_in_valid_15,io_in_valid_14,io_in_valid_13,io_in_valid_12,io_in_valid_11,io_in_valid_10,
    io_in_valid_9,io_in_valid_8,anyValid_lo}; // @[src/main/scala/npu/core/QuantActUnit.scala 255:30]
  wire  anyValid = |_anyValid_T; // @[src/main/scala/npu/core/QuantActUnit.scala 255:37]
  wire  allValid = &_anyValid_T; // @[src/main/scala/npu/core/QuantActUnit.scala 256:37]
  wire  _io_busy_WIRE_1 = cores_1_io_busy; // @[src/main/scala/npu/core/QuantActUnit.scala 369:{21,21}]
  wire  _io_busy_WIRE_0 = cores_0_io_busy; // @[src/main/scala/npu/core/QuantActUnit.scala 369:{21,21}]
  wire  _io_busy_WIRE_3 = cores_3_io_busy; // @[src/main/scala/npu/core/QuantActUnit.scala 369:{21,21}]
  wire  _io_busy_WIRE_2 = cores_2_io_busy; // @[src/main/scala/npu/core/QuantActUnit.scala 369:{21,21}]
  wire  _io_busy_WIRE_5 = cores_5_io_busy; // @[src/main/scala/npu/core/QuantActUnit.scala 369:{21,21}]
  wire  _io_busy_WIRE_4 = cores_4_io_busy; // @[src/main/scala/npu/core/QuantActUnit.scala 369:{21,21}]
  wire  _io_busy_WIRE_7 = cores_7_io_busy; // @[src/main/scala/npu/core/QuantActUnit.scala 369:{21,21}]
  wire  _io_busy_WIRE_6 = cores_6_io_busy; // @[src/main/scala/npu/core/QuantActUnit.scala 369:{21,21}]
  wire [7:0] io_busy_lo = {_io_busy_WIRE_7,_io_busy_WIRE_6,_io_busy_WIRE_5,_io_busy_WIRE_4,_io_busy_WIRE_3,
    _io_busy_WIRE_2,_io_busy_WIRE_1,_io_busy_WIRE_0}; // @[src/main/scala/npu/core/QuantActUnit.scala 369:44]
  wire  _io_busy_WIRE_9 = cores_9_io_busy; // @[src/main/scala/npu/core/QuantActUnit.scala 369:{21,21}]
  wire  _io_busy_WIRE_8 = cores_8_io_busy; // @[src/main/scala/npu/core/QuantActUnit.scala 369:{21,21}]
  wire  _io_busy_WIRE_11 = cores_11_io_busy; // @[src/main/scala/npu/core/QuantActUnit.scala 369:{21,21}]
  wire  _io_busy_WIRE_10 = cores_10_io_busy; // @[src/main/scala/npu/core/QuantActUnit.scala 369:{21,21}]
  wire  _io_busy_WIRE_13 = cores_13_io_busy; // @[src/main/scala/npu/core/QuantActUnit.scala 369:{21,21}]
  wire  _io_busy_WIRE_12 = cores_12_io_busy; // @[src/main/scala/npu/core/QuantActUnit.scala 369:{21,21}]
  wire  _io_busy_WIRE_15 = cores_15_io_busy; // @[src/main/scala/npu/core/QuantActUnit.scala 369:{21,21}]
  wire  _io_busy_WIRE_14 = cores_14_io_busy; // @[src/main/scala/npu/core/QuantActUnit.scala 369:{21,21}]
  wire [15:0] _io_busy_T = {_io_busy_WIRE_15,_io_busy_WIRE_14,_io_busy_WIRE_13,_io_busy_WIRE_12,_io_busy_WIRE_11,
    _io_busy_WIRE_10,_io_busy_WIRE_9,_io_busy_WIRE_8,io_busy_lo}; // @[src/main/scala/npu/core/QuantActUnit.scala 369:44]
  wire  _coreAlert_WIRE_1 = cores_1_io_sync_alert; // @[src/main/scala/npu/core/QuantActUnit.scala 378:{12,12}]
  wire  _coreAlert_WIRE_0 = cores_0_io_sync_alert; // @[src/main/scala/npu/core/QuantActUnit.scala 378:{12,12}]
  wire  _coreAlert_WIRE_3 = cores_3_io_sync_alert; // @[src/main/scala/npu/core/QuantActUnit.scala 378:{12,12}]
  wire  _coreAlert_WIRE_2 = cores_2_io_sync_alert; // @[src/main/scala/npu/core/QuantActUnit.scala 378:{12,12}]
  wire  _coreAlert_WIRE_5 = cores_5_io_sync_alert; // @[src/main/scala/npu/core/QuantActUnit.scala 378:{12,12}]
  wire  _coreAlert_WIRE_4 = cores_4_io_sync_alert; // @[src/main/scala/npu/core/QuantActUnit.scala 378:{12,12}]
  wire  _coreAlert_WIRE_7 = cores_7_io_sync_alert; // @[src/main/scala/npu/core/QuantActUnit.scala 378:{12,12}]
  wire  _coreAlert_WIRE_6 = cores_6_io_sync_alert; // @[src/main/scala/npu/core/QuantActUnit.scala 378:{12,12}]
  wire [7:0] coreAlert_lo = {_coreAlert_WIRE_7,_coreAlert_WIRE_6,_coreAlert_WIRE_5,_coreAlert_WIRE_4,_coreAlert_WIRE_3,
    _coreAlert_WIRE_2,_coreAlert_WIRE_1,_coreAlert_WIRE_0}; // @[src/main/scala/npu/core/QuantActUnit.scala 378:41]
  wire  _coreAlert_WIRE_9 = cores_9_io_sync_alert; // @[src/main/scala/npu/core/QuantActUnit.scala 378:{12,12}]
  wire  _coreAlert_WIRE_8 = cores_8_io_sync_alert; // @[src/main/scala/npu/core/QuantActUnit.scala 378:{12,12}]
  wire  _coreAlert_WIRE_11 = cores_11_io_sync_alert; // @[src/main/scala/npu/core/QuantActUnit.scala 378:{12,12}]
  wire  _coreAlert_WIRE_10 = cores_10_io_sync_alert; // @[src/main/scala/npu/core/QuantActUnit.scala 378:{12,12}]
  wire  _coreAlert_WIRE_13 = cores_13_io_sync_alert; // @[src/main/scala/npu/core/QuantActUnit.scala 378:{12,12}]
  wire  _coreAlert_WIRE_12 = cores_12_io_sync_alert; // @[src/main/scala/npu/core/QuantActUnit.scala 378:{12,12}]
  wire  _coreAlert_WIRE_15 = cores_15_io_sync_alert; // @[src/main/scala/npu/core/QuantActUnit.scala 378:{12,12}]
  wire  _coreAlert_WIRE_14 = cores_14_io_sync_alert; // @[src/main/scala/npu/core/QuantActUnit.scala 378:{12,12}]
  wire [15:0] _coreAlert_T = {_coreAlert_WIRE_15,_coreAlert_WIRE_14,_coreAlert_WIRE_13,_coreAlert_WIRE_12,
    _coreAlert_WIRE_11,_coreAlert_WIRE_10,_coreAlert_WIRE_9,_coreAlert_WIRE_8,coreAlert_lo}; // @[src/main/scala/npu/core/QuantActUnit.scala 378:41]
  wire  coreAlert = |_coreAlert_T; // @[src/main/scala/npu/core/QuantActUnit.scala 378:48]
  wire  laneMismatch = anyValid & ~allValid; // @[src/main/scala/npu/core/QuantActUnit.scala 380:31]
  QuantActCore cores_0 ( // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
    .clock(cores_0_clock),
    .reset(cores_0_reset),
    .io_in_tpu(cores_0_io_in_tpu),
    .io_in_direct(cores_0_io_in_direct),
    .io_input_mode(cores_0_io_input_mode),
    .io_in_valid(cores_0_io_in_valid),
    .io_param(cores_0_io_param),
    .io_act_mask(cores_0_io_act_mask),
    .io_fusion_second(cores_0_io_fusion_second),
    .io_stall(cores_0_io_stall),
    .io_lut_wr_en(cores_0_io_lut_wr_en),
    .io_lut_wr_addr(cores_0_io_lut_wr_addr),
    .io_lut_wr_data_0(cores_0_io_lut_wr_data_0),
    .io_lut_wr_data_1(cores_0_io_lut_wr_data_1),
    .io_lut_wr_data_2(cores_0_io_lut_wr_data_2),
    .io_lut_wr_data_3(cores_0_io_lut_wr_data_3),
    .io_lut_wr_data_4(cores_0_io_lut_wr_data_4),
    .io_lut_wr_data_5(cores_0_io_lut_wr_data_5),
    .io_lut_wr_data_6(cores_0_io_lut_wr_data_6),
    .io_lut_wr_data_7(cores_0_io_lut_wr_data_7),
    .io_lut_wr_data_8(cores_0_io_lut_wr_data_8),
    .io_lut_wr_data_9(cores_0_io_lut_wr_data_9),
    .io_lut_wr_data_10(cores_0_io_lut_wr_data_10),
    .io_lut_wr_data_11(cores_0_io_lut_wr_data_11),
    .io_lut_wr_data_12(cores_0_io_lut_wr_data_12),
    .io_lut_wr_data_13(cores_0_io_lut_wr_data_13),
    .io_lut_wr_data_14(cores_0_io_lut_wr_data_14),
    .io_lut_wr_data_15(cores_0_io_lut_wr_data_15),
    .io_out_qact(cores_0_io_out_qact),
    .io_out_valid(cores_0_io_out_valid),
    .io_out_lookahead(cores_0_io_out_lookahead),
    .io_busy(cores_0_io_busy),
    .io_sync_alert(cores_0_io_sync_alert)
  );
  QuantActCore cores_1 ( // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
    .clock(cores_1_clock),
    .reset(cores_1_reset),
    .io_in_tpu(cores_1_io_in_tpu),
    .io_in_direct(cores_1_io_in_direct),
    .io_input_mode(cores_1_io_input_mode),
    .io_in_valid(cores_1_io_in_valid),
    .io_param(cores_1_io_param),
    .io_act_mask(cores_1_io_act_mask),
    .io_fusion_second(cores_1_io_fusion_second),
    .io_stall(cores_1_io_stall),
    .io_lut_wr_en(cores_1_io_lut_wr_en),
    .io_lut_wr_addr(cores_1_io_lut_wr_addr),
    .io_lut_wr_data_0(cores_1_io_lut_wr_data_0),
    .io_lut_wr_data_1(cores_1_io_lut_wr_data_1),
    .io_lut_wr_data_2(cores_1_io_lut_wr_data_2),
    .io_lut_wr_data_3(cores_1_io_lut_wr_data_3),
    .io_lut_wr_data_4(cores_1_io_lut_wr_data_4),
    .io_lut_wr_data_5(cores_1_io_lut_wr_data_5),
    .io_lut_wr_data_6(cores_1_io_lut_wr_data_6),
    .io_lut_wr_data_7(cores_1_io_lut_wr_data_7),
    .io_lut_wr_data_8(cores_1_io_lut_wr_data_8),
    .io_lut_wr_data_9(cores_1_io_lut_wr_data_9),
    .io_lut_wr_data_10(cores_1_io_lut_wr_data_10),
    .io_lut_wr_data_11(cores_1_io_lut_wr_data_11),
    .io_lut_wr_data_12(cores_1_io_lut_wr_data_12),
    .io_lut_wr_data_13(cores_1_io_lut_wr_data_13),
    .io_lut_wr_data_14(cores_1_io_lut_wr_data_14),
    .io_lut_wr_data_15(cores_1_io_lut_wr_data_15),
    .io_out_qact(cores_1_io_out_qact),
    .io_out_valid(cores_1_io_out_valid),
    .io_out_lookahead(cores_1_io_out_lookahead),
    .io_busy(cores_1_io_busy),
    .io_sync_alert(cores_1_io_sync_alert)
  );
  QuantActCore cores_2 ( // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
    .clock(cores_2_clock),
    .reset(cores_2_reset),
    .io_in_tpu(cores_2_io_in_tpu),
    .io_in_direct(cores_2_io_in_direct),
    .io_input_mode(cores_2_io_input_mode),
    .io_in_valid(cores_2_io_in_valid),
    .io_param(cores_2_io_param),
    .io_act_mask(cores_2_io_act_mask),
    .io_fusion_second(cores_2_io_fusion_second),
    .io_stall(cores_2_io_stall),
    .io_lut_wr_en(cores_2_io_lut_wr_en),
    .io_lut_wr_addr(cores_2_io_lut_wr_addr),
    .io_lut_wr_data_0(cores_2_io_lut_wr_data_0),
    .io_lut_wr_data_1(cores_2_io_lut_wr_data_1),
    .io_lut_wr_data_2(cores_2_io_lut_wr_data_2),
    .io_lut_wr_data_3(cores_2_io_lut_wr_data_3),
    .io_lut_wr_data_4(cores_2_io_lut_wr_data_4),
    .io_lut_wr_data_5(cores_2_io_lut_wr_data_5),
    .io_lut_wr_data_6(cores_2_io_lut_wr_data_6),
    .io_lut_wr_data_7(cores_2_io_lut_wr_data_7),
    .io_lut_wr_data_8(cores_2_io_lut_wr_data_8),
    .io_lut_wr_data_9(cores_2_io_lut_wr_data_9),
    .io_lut_wr_data_10(cores_2_io_lut_wr_data_10),
    .io_lut_wr_data_11(cores_2_io_lut_wr_data_11),
    .io_lut_wr_data_12(cores_2_io_lut_wr_data_12),
    .io_lut_wr_data_13(cores_2_io_lut_wr_data_13),
    .io_lut_wr_data_14(cores_2_io_lut_wr_data_14),
    .io_lut_wr_data_15(cores_2_io_lut_wr_data_15),
    .io_out_qact(cores_2_io_out_qact),
    .io_out_valid(cores_2_io_out_valid),
    .io_out_lookahead(cores_2_io_out_lookahead),
    .io_busy(cores_2_io_busy),
    .io_sync_alert(cores_2_io_sync_alert)
  );
  QuantActCore cores_3 ( // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
    .clock(cores_3_clock),
    .reset(cores_3_reset),
    .io_in_tpu(cores_3_io_in_tpu),
    .io_in_direct(cores_3_io_in_direct),
    .io_input_mode(cores_3_io_input_mode),
    .io_in_valid(cores_3_io_in_valid),
    .io_param(cores_3_io_param),
    .io_act_mask(cores_3_io_act_mask),
    .io_fusion_second(cores_3_io_fusion_second),
    .io_stall(cores_3_io_stall),
    .io_lut_wr_en(cores_3_io_lut_wr_en),
    .io_lut_wr_addr(cores_3_io_lut_wr_addr),
    .io_lut_wr_data_0(cores_3_io_lut_wr_data_0),
    .io_lut_wr_data_1(cores_3_io_lut_wr_data_1),
    .io_lut_wr_data_2(cores_3_io_lut_wr_data_2),
    .io_lut_wr_data_3(cores_3_io_lut_wr_data_3),
    .io_lut_wr_data_4(cores_3_io_lut_wr_data_4),
    .io_lut_wr_data_5(cores_3_io_lut_wr_data_5),
    .io_lut_wr_data_6(cores_3_io_lut_wr_data_6),
    .io_lut_wr_data_7(cores_3_io_lut_wr_data_7),
    .io_lut_wr_data_8(cores_3_io_lut_wr_data_8),
    .io_lut_wr_data_9(cores_3_io_lut_wr_data_9),
    .io_lut_wr_data_10(cores_3_io_lut_wr_data_10),
    .io_lut_wr_data_11(cores_3_io_lut_wr_data_11),
    .io_lut_wr_data_12(cores_3_io_lut_wr_data_12),
    .io_lut_wr_data_13(cores_3_io_lut_wr_data_13),
    .io_lut_wr_data_14(cores_3_io_lut_wr_data_14),
    .io_lut_wr_data_15(cores_3_io_lut_wr_data_15),
    .io_out_qact(cores_3_io_out_qact),
    .io_out_valid(cores_3_io_out_valid),
    .io_out_lookahead(cores_3_io_out_lookahead),
    .io_busy(cores_3_io_busy),
    .io_sync_alert(cores_3_io_sync_alert)
  );
  QuantActCore cores_4 ( // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
    .clock(cores_4_clock),
    .reset(cores_4_reset),
    .io_in_tpu(cores_4_io_in_tpu),
    .io_in_direct(cores_4_io_in_direct),
    .io_input_mode(cores_4_io_input_mode),
    .io_in_valid(cores_4_io_in_valid),
    .io_param(cores_4_io_param),
    .io_act_mask(cores_4_io_act_mask),
    .io_fusion_second(cores_4_io_fusion_second),
    .io_stall(cores_4_io_stall),
    .io_lut_wr_en(cores_4_io_lut_wr_en),
    .io_lut_wr_addr(cores_4_io_lut_wr_addr),
    .io_lut_wr_data_0(cores_4_io_lut_wr_data_0),
    .io_lut_wr_data_1(cores_4_io_lut_wr_data_1),
    .io_lut_wr_data_2(cores_4_io_lut_wr_data_2),
    .io_lut_wr_data_3(cores_4_io_lut_wr_data_3),
    .io_lut_wr_data_4(cores_4_io_lut_wr_data_4),
    .io_lut_wr_data_5(cores_4_io_lut_wr_data_5),
    .io_lut_wr_data_6(cores_4_io_lut_wr_data_6),
    .io_lut_wr_data_7(cores_4_io_lut_wr_data_7),
    .io_lut_wr_data_8(cores_4_io_lut_wr_data_8),
    .io_lut_wr_data_9(cores_4_io_lut_wr_data_9),
    .io_lut_wr_data_10(cores_4_io_lut_wr_data_10),
    .io_lut_wr_data_11(cores_4_io_lut_wr_data_11),
    .io_lut_wr_data_12(cores_4_io_lut_wr_data_12),
    .io_lut_wr_data_13(cores_4_io_lut_wr_data_13),
    .io_lut_wr_data_14(cores_4_io_lut_wr_data_14),
    .io_lut_wr_data_15(cores_4_io_lut_wr_data_15),
    .io_out_qact(cores_4_io_out_qact),
    .io_out_valid(cores_4_io_out_valid),
    .io_out_lookahead(cores_4_io_out_lookahead),
    .io_busy(cores_4_io_busy),
    .io_sync_alert(cores_4_io_sync_alert)
  );
  QuantActCore cores_5 ( // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
    .clock(cores_5_clock),
    .reset(cores_5_reset),
    .io_in_tpu(cores_5_io_in_tpu),
    .io_in_direct(cores_5_io_in_direct),
    .io_input_mode(cores_5_io_input_mode),
    .io_in_valid(cores_5_io_in_valid),
    .io_param(cores_5_io_param),
    .io_act_mask(cores_5_io_act_mask),
    .io_fusion_second(cores_5_io_fusion_second),
    .io_stall(cores_5_io_stall),
    .io_lut_wr_en(cores_5_io_lut_wr_en),
    .io_lut_wr_addr(cores_5_io_lut_wr_addr),
    .io_lut_wr_data_0(cores_5_io_lut_wr_data_0),
    .io_lut_wr_data_1(cores_5_io_lut_wr_data_1),
    .io_lut_wr_data_2(cores_5_io_lut_wr_data_2),
    .io_lut_wr_data_3(cores_5_io_lut_wr_data_3),
    .io_lut_wr_data_4(cores_5_io_lut_wr_data_4),
    .io_lut_wr_data_5(cores_5_io_lut_wr_data_5),
    .io_lut_wr_data_6(cores_5_io_lut_wr_data_6),
    .io_lut_wr_data_7(cores_5_io_lut_wr_data_7),
    .io_lut_wr_data_8(cores_5_io_lut_wr_data_8),
    .io_lut_wr_data_9(cores_5_io_lut_wr_data_9),
    .io_lut_wr_data_10(cores_5_io_lut_wr_data_10),
    .io_lut_wr_data_11(cores_5_io_lut_wr_data_11),
    .io_lut_wr_data_12(cores_5_io_lut_wr_data_12),
    .io_lut_wr_data_13(cores_5_io_lut_wr_data_13),
    .io_lut_wr_data_14(cores_5_io_lut_wr_data_14),
    .io_lut_wr_data_15(cores_5_io_lut_wr_data_15),
    .io_out_qact(cores_5_io_out_qact),
    .io_out_valid(cores_5_io_out_valid),
    .io_out_lookahead(cores_5_io_out_lookahead),
    .io_busy(cores_5_io_busy),
    .io_sync_alert(cores_5_io_sync_alert)
  );
  QuantActCore cores_6 ( // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
    .clock(cores_6_clock),
    .reset(cores_6_reset),
    .io_in_tpu(cores_6_io_in_tpu),
    .io_in_direct(cores_6_io_in_direct),
    .io_input_mode(cores_6_io_input_mode),
    .io_in_valid(cores_6_io_in_valid),
    .io_param(cores_6_io_param),
    .io_act_mask(cores_6_io_act_mask),
    .io_fusion_second(cores_6_io_fusion_second),
    .io_stall(cores_6_io_stall),
    .io_lut_wr_en(cores_6_io_lut_wr_en),
    .io_lut_wr_addr(cores_6_io_lut_wr_addr),
    .io_lut_wr_data_0(cores_6_io_lut_wr_data_0),
    .io_lut_wr_data_1(cores_6_io_lut_wr_data_1),
    .io_lut_wr_data_2(cores_6_io_lut_wr_data_2),
    .io_lut_wr_data_3(cores_6_io_lut_wr_data_3),
    .io_lut_wr_data_4(cores_6_io_lut_wr_data_4),
    .io_lut_wr_data_5(cores_6_io_lut_wr_data_5),
    .io_lut_wr_data_6(cores_6_io_lut_wr_data_6),
    .io_lut_wr_data_7(cores_6_io_lut_wr_data_7),
    .io_lut_wr_data_8(cores_6_io_lut_wr_data_8),
    .io_lut_wr_data_9(cores_6_io_lut_wr_data_9),
    .io_lut_wr_data_10(cores_6_io_lut_wr_data_10),
    .io_lut_wr_data_11(cores_6_io_lut_wr_data_11),
    .io_lut_wr_data_12(cores_6_io_lut_wr_data_12),
    .io_lut_wr_data_13(cores_6_io_lut_wr_data_13),
    .io_lut_wr_data_14(cores_6_io_lut_wr_data_14),
    .io_lut_wr_data_15(cores_6_io_lut_wr_data_15),
    .io_out_qact(cores_6_io_out_qact),
    .io_out_valid(cores_6_io_out_valid),
    .io_out_lookahead(cores_6_io_out_lookahead),
    .io_busy(cores_6_io_busy),
    .io_sync_alert(cores_6_io_sync_alert)
  );
  QuantActCore cores_7 ( // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
    .clock(cores_7_clock),
    .reset(cores_7_reset),
    .io_in_tpu(cores_7_io_in_tpu),
    .io_in_direct(cores_7_io_in_direct),
    .io_input_mode(cores_7_io_input_mode),
    .io_in_valid(cores_7_io_in_valid),
    .io_param(cores_7_io_param),
    .io_act_mask(cores_7_io_act_mask),
    .io_fusion_second(cores_7_io_fusion_second),
    .io_stall(cores_7_io_stall),
    .io_lut_wr_en(cores_7_io_lut_wr_en),
    .io_lut_wr_addr(cores_7_io_lut_wr_addr),
    .io_lut_wr_data_0(cores_7_io_lut_wr_data_0),
    .io_lut_wr_data_1(cores_7_io_lut_wr_data_1),
    .io_lut_wr_data_2(cores_7_io_lut_wr_data_2),
    .io_lut_wr_data_3(cores_7_io_lut_wr_data_3),
    .io_lut_wr_data_4(cores_7_io_lut_wr_data_4),
    .io_lut_wr_data_5(cores_7_io_lut_wr_data_5),
    .io_lut_wr_data_6(cores_7_io_lut_wr_data_6),
    .io_lut_wr_data_7(cores_7_io_lut_wr_data_7),
    .io_lut_wr_data_8(cores_7_io_lut_wr_data_8),
    .io_lut_wr_data_9(cores_7_io_lut_wr_data_9),
    .io_lut_wr_data_10(cores_7_io_lut_wr_data_10),
    .io_lut_wr_data_11(cores_7_io_lut_wr_data_11),
    .io_lut_wr_data_12(cores_7_io_lut_wr_data_12),
    .io_lut_wr_data_13(cores_7_io_lut_wr_data_13),
    .io_lut_wr_data_14(cores_7_io_lut_wr_data_14),
    .io_lut_wr_data_15(cores_7_io_lut_wr_data_15),
    .io_out_qact(cores_7_io_out_qact),
    .io_out_valid(cores_7_io_out_valid),
    .io_out_lookahead(cores_7_io_out_lookahead),
    .io_busy(cores_7_io_busy),
    .io_sync_alert(cores_7_io_sync_alert)
  );
  QuantActCore cores_8 ( // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
    .clock(cores_8_clock),
    .reset(cores_8_reset),
    .io_in_tpu(cores_8_io_in_tpu),
    .io_in_direct(cores_8_io_in_direct),
    .io_input_mode(cores_8_io_input_mode),
    .io_in_valid(cores_8_io_in_valid),
    .io_param(cores_8_io_param),
    .io_act_mask(cores_8_io_act_mask),
    .io_fusion_second(cores_8_io_fusion_second),
    .io_stall(cores_8_io_stall),
    .io_lut_wr_en(cores_8_io_lut_wr_en),
    .io_lut_wr_addr(cores_8_io_lut_wr_addr),
    .io_lut_wr_data_0(cores_8_io_lut_wr_data_0),
    .io_lut_wr_data_1(cores_8_io_lut_wr_data_1),
    .io_lut_wr_data_2(cores_8_io_lut_wr_data_2),
    .io_lut_wr_data_3(cores_8_io_lut_wr_data_3),
    .io_lut_wr_data_4(cores_8_io_lut_wr_data_4),
    .io_lut_wr_data_5(cores_8_io_lut_wr_data_5),
    .io_lut_wr_data_6(cores_8_io_lut_wr_data_6),
    .io_lut_wr_data_7(cores_8_io_lut_wr_data_7),
    .io_lut_wr_data_8(cores_8_io_lut_wr_data_8),
    .io_lut_wr_data_9(cores_8_io_lut_wr_data_9),
    .io_lut_wr_data_10(cores_8_io_lut_wr_data_10),
    .io_lut_wr_data_11(cores_8_io_lut_wr_data_11),
    .io_lut_wr_data_12(cores_8_io_lut_wr_data_12),
    .io_lut_wr_data_13(cores_8_io_lut_wr_data_13),
    .io_lut_wr_data_14(cores_8_io_lut_wr_data_14),
    .io_lut_wr_data_15(cores_8_io_lut_wr_data_15),
    .io_out_qact(cores_8_io_out_qact),
    .io_out_valid(cores_8_io_out_valid),
    .io_out_lookahead(cores_8_io_out_lookahead),
    .io_busy(cores_8_io_busy),
    .io_sync_alert(cores_8_io_sync_alert)
  );
  QuantActCore cores_9 ( // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
    .clock(cores_9_clock),
    .reset(cores_9_reset),
    .io_in_tpu(cores_9_io_in_tpu),
    .io_in_direct(cores_9_io_in_direct),
    .io_input_mode(cores_9_io_input_mode),
    .io_in_valid(cores_9_io_in_valid),
    .io_param(cores_9_io_param),
    .io_act_mask(cores_9_io_act_mask),
    .io_fusion_second(cores_9_io_fusion_second),
    .io_stall(cores_9_io_stall),
    .io_lut_wr_en(cores_9_io_lut_wr_en),
    .io_lut_wr_addr(cores_9_io_lut_wr_addr),
    .io_lut_wr_data_0(cores_9_io_lut_wr_data_0),
    .io_lut_wr_data_1(cores_9_io_lut_wr_data_1),
    .io_lut_wr_data_2(cores_9_io_lut_wr_data_2),
    .io_lut_wr_data_3(cores_9_io_lut_wr_data_3),
    .io_lut_wr_data_4(cores_9_io_lut_wr_data_4),
    .io_lut_wr_data_5(cores_9_io_lut_wr_data_5),
    .io_lut_wr_data_6(cores_9_io_lut_wr_data_6),
    .io_lut_wr_data_7(cores_9_io_lut_wr_data_7),
    .io_lut_wr_data_8(cores_9_io_lut_wr_data_8),
    .io_lut_wr_data_9(cores_9_io_lut_wr_data_9),
    .io_lut_wr_data_10(cores_9_io_lut_wr_data_10),
    .io_lut_wr_data_11(cores_9_io_lut_wr_data_11),
    .io_lut_wr_data_12(cores_9_io_lut_wr_data_12),
    .io_lut_wr_data_13(cores_9_io_lut_wr_data_13),
    .io_lut_wr_data_14(cores_9_io_lut_wr_data_14),
    .io_lut_wr_data_15(cores_9_io_lut_wr_data_15),
    .io_out_qact(cores_9_io_out_qact),
    .io_out_valid(cores_9_io_out_valid),
    .io_out_lookahead(cores_9_io_out_lookahead),
    .io_busy(cores_9_io_busy),
    .io_sync_alert(cores_9_io_sync_alert)
  );
  QuantActCore cores_10 ( // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
    .clock(cores_10_clock),
    .reset(cores_10_reset),
    .io_in_tpu(cores_10_io_in_tpu),
    .io_in_direct(cores_10_io_in_direct),
    .io_input_mode(cores_10_io_input_mode),
    .io_in_valid(cores_10_io_in_valid),
    .io_param(cores_10_io_param),
    .io_act_mask(cores_10_io_act_mask),
    .io_fusion_second(cores_10_io_fusion_second),
    .io_stall(cores_10_io_stall),
    .io_lut_wr_en(cores_10_io_lut_wr_en),
    .io_lut_wr_addr(cores_10_io_lut_wr_addr),
    .io_lut_wr_data_0(cores_10_io_lut_wr_data_0),
    .io_lut_wr_data_1(cores_10_io_lut_wr_data_1),
    .io_lut_wr_data_2(cores_10_io_lut_wr_data_2),
    .io_lut_wr_data_3(cores_10_io_lut_wr_data_3),
    .io_lut_wr_data_4(cores_10_io_lut_wr_data_4),
    .io_lut_wr_data_5(cores_10_io_lut_wr_data_5),
    .io_lut_wr_data_6(cores_10_io_lut_wr_data_6),
    .io_lut_wr_data_7(cores_10_io_lut_wr_data_7),
    .io_lut_wr_data_8(cores_10_io_lut_wr_data_8),
    .io_lut_wr_data_9(cores_10_io_lut_wr_data_9),
    .io_lut_wr_data_10(cores_10_io_lut_wr_data_10),
    .io_lut_wr_data_11(cores_10_io_lut_wr_data_11),
    .io_lut_wr_data_12(cores_10_io_lut_wr_data_12),
    .io_lut_wr_data_13(cores_10_io_lut_wr_data_13),
    .io_lut_wr_data_14(cores_10_io_lut_wr_data_14),
    .io_lut_wr_data_15(cores_10_io_lut_wr_data_15),
    .io_out_qact(cores_10_io_out_qact),
    .io_out_valid(cores_10_io_out_valid),
    .io_out_lookahead(cores_10_io_out_lookahead),
    .io_busy(cores_10_io_busy),
    .io_sync_alert(cores_10_io_sync_alert)
  );
  QuantActCore cores_11 ( // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
    .clock(cores_11_clock),
    .reset(cores_11_reset),
    .io_in_tpu(cores_11_io_in_tpu),
    .io_in_direct(cores_11_io_in_direct),
    .io_input_mode(cores_11_io_input_mode),
    .io_in_valid(cores_11_io_in_valid),
    .io_param(cores_11_io_param),
    .io_act_mask(cores_11_io_act_mask),
    .io_fusion_second(cores_11_io_fusion_second),
    .io_stall(cores_11_io_stall),
    .io_lut_wr_en(cores_11_io_lut_wr_en),
    .io_lut_wr_addr(cores_11_io_lut_wr_addr),
    .io_lut_wr_data_0(cores_11_io_lut_wr_data_0),
    .io_lut_wr_data_1(cores_11_io_lut_wr_data_1),
    .io_lut_wr_data_2(cores_11_io_lut_wr_data_2),
    .io_lut_wr_data_3(cores_11_io_lut_wr_data_3),
    .io_lut_wr_data_4(cores_11_io_lut_wr_data_4),
    .io_lut_wr_data_5(cores_11_io_lut_wr_data_5),
    .io_lut_wr_data_6(cores_11_io_lut_wr_data_6),
    .io_lut_wr_data_7(cores_11_io_lut_wr_data_7),
    .io_lut_wr_data_8(cores_11_io_lut_wr_data_8),
    .io_lut_wr_data_9(cores_11_io_lut_wr_data_9),
    .io_lut_wr_data_10(cores_11_io_lut_wr_data_10),
    .io_lut_wr_data_11(cores_11_io_lut_wr_data_11),
    .io_lut_wr_data_12(cores_11_io_lut_wr_data_12),
    .io_lut_wr_data_13(cores_11_io_lut_wr_data_13),
    .io_lut_wr_data_14(cores_11_io_lut_wr_data_14),
    .io_lut_wr_data_15(cores_11_io_lut_wr_data_15),
    .io_out_qact(cores_11_io_out_qact),
    .io_out_valid(cores_11_io_out_valid),
    .io_out_lookahead(cores_11_io_out_lookahead),
    .io_busy(cores_11_io_busy),
    .io_sync_alert(cores_11_io_sync_alert)
  );
  QuantActCore cores_12 ( // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
    .clock(cores_12_clock),
    .reset(cores_12_reset),
    .io_in_tpu(cores_12_io_in_tpu),
    .io_in_direct(cores_12_io_in_direct),
    .io_input_mode(cores_12_io_input_mode),
    .io_in_valid(cores_12_io_in_valid),
    .io_param(cores_12_io_param),
    .io_act_mask(cores_12_io_act_mask),
    .io_fusion_second(cores_12_io_fusion_second),
    .io_stall(cores_12_io_stall),
    .io_lut_wr_en(cores_12_io_lut_wr_en),
    .io_lut_wr_addr(cores_12_io_lut_wr_addr),
    .io_lut_wr_data_0(cores_12_io_lut_wr_data_0),
    .io_lut_wr_data_1(cores_12_io_lut_wr_data_1),
    .io_lut_wr_data_2(cores_12_io_lut_wr_data_2),
    .io_lut_wr_data_3(cores_12_io_lut_wr_data_3),
    .io_lut_wr_data_4(cores_12_io_lut_wr_data_4),
    .io_lut_wr_data_5(cores_12_io_lut_wr_data_5),
    .io_lut_wr_data_6(cores_12_io_lut_wr_data_6),
    .io_lut_wr_data_7(cores_12_io_lut_wr_data_7),
    .io_lut_wr_data_8(cores_12_io_lut_wr_data_8),
    .io_lut_wr_data_9(cores_12_io_lut_wr_data_9),
    .io_lut_wr_data_10(cores_12_io_lut_wr_data_10),
    .io_lut_wr_data_11(cores_12_io_lut_wr_data_11),
    .io_lut_wr_data_12(cores_12_io_lut_wr_data_12),
    .io_lut_wr_data_13(cores_12_io_lut_wr_data_13),
    .io_lut_wr_data_14(cores_12_io_lut_wr_data_14),
    .io_lut_wr_data_15(cores_12_io_lut_wr_data_15),
    .io_out_qact(cores_12_io_out_qact),
    .io_out_valid(cores_12_io_out_valid),
    .io_out_lookahead(cores_12_io_out_lookahead),
    .io_busy(cores_12_io_busy),
    .io_sync_alert(cores_12_io_sync_alert)
  );
  QuantActCore cores_13 ( // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
    .clock(cores_13_clock),
    .reset(cores_13_reset),
    .io_in_tpu(cores_13_io_in_tpu),
    .io_in_direct(cores_13_io_in_direct),
    .io_input_mode(cores_13_io_input_mode),
    .io_in_valid(cores_13_io_in_valid),
    .io_param(cores_13_io_param),
    .io_act_mask(cores_13_io_act_mask),
    .io_fusion_second(cores_13_io_fusion_second),
    .io_stall(cores_13_io_stall),
    .io_lut_wr_en(cores_13_io_lut_wr_en),
    .io_lut_wr_addr(cores_13_io_lut_wr_addr),
    .io_lut_wr_data_0(cores_13_io_lut_wr_data_0),
    .io_lut_wr_data_1(cores_13_io_lut_wr_data_1),
    .io_lut_wr_data_2(cores_13_io_lut_wr_data_2),
    .io_lut_wr_data_3(cores_13_io_lut_wr_data_3),
    .io_lut_wr_data_4(cores_13_io_lut_wr_data_4),
    .io_lut_wr_data_5(cores_13_io_lut_wr_data_5),
    .io_lut_wr_data_6(cores_13_io_lut_wr_data_6),
    .io_lut_wr_data_7(cores_13_io_lut_wr_data_7),
    .io_lut_wr_data_8(cores_13_io_lut_wr_data_8),
    .io_lut_wr_data_9(cores_13_io_lut_wr_data_9),
    .io_lut_wr_data_10(cores_13_io_lut_wr_data_10),
    .io_lut_wr_data_11(cores_13_io_lut_wr_data_11),
    .io_lut_wr_data_12(cores_13_io_lut_wr_data_12),
    .io_lut_wr_data_13(cores_13_io_lut_wr_data_13),
    .io_lut_wr_data_14(cores_13_io_lut_wr_data_14),
    .io_lut_wr_data_15(cores_13_io_lut_wr_data_15),
    .io_out_qact(cores_13_io_out_qact),
    .io_out_valid(cores_13_io_out_valid),
    .io_out_lookahead(cores_13_io_out_lookahead),
    .io_busy(cores_13_io_busy),
    .io_sync_alert(cores_13_io_sync_alert)
  );
  QuantActCore cores_14 ( // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
    .clock(cores_14_clock),
    .reset(cores_14_reset),
    .io_in_tpu(cores_14_io_in_tpu),
    .io_in_direct(cores_14_io_in_direct),
    .io_input_mode(cores_14_io_input_mode),
    .io_in_valid(cores_14_io_in_valid),
    .io_param(cores_14_io_param),
    .io_act_mask(cores_14_io_act_mask),
    .io_fusion_second(cores_14_io_fusion_second),
    .io_stall(cores_14_io_stall),
    .io_lut_wr_en(cores_14_io_lut_wr_en),
    .io_lut_wr_addr(cores_14_io_lut_wr_addr),
    .io_lut_wr_data_0(cores_14_io_lut_wr_data_0),
    .io_lut_wr_data_1(cores_14_io_lut_wr_data_1),
    .io_lut_wr_data_2(cores_14_io_lut_wr_data_2),
    .io_lut_wr_data_3(cores_14_io_lut_wr_data_3),
    .io_lut_wr_data_4(cores_14_io_lut_wr_data_4),
    .io_lut_wr_data_5(cores_14_io_lut_wr_data_5),
    .io_lut_wr_data_6(cores_14_io_lut_wr_data_6),
    .io_lut_wr_data_7(cores_14_io_lut_wr_data_7),
    .io_lut_wr_data_8(cores_14_io_lut_wr_data_8),
    .io_lut_wr_data_9(cores_14_io_lut_wr_data_9),
    .io_lut_wr_data_10(cores_14_io_lut_wr_data_10),
    .io_lut_wr_data_11(cores_14_io_lut_wr_data_11),
    .io_lut_wr_data_12(cores_14_io_lut_wr_data_12),
    .io_lut_wr_data_13(cores_14_io_lut_wr_data_13),
    .io_lut_wr_data_14(cores_14_io_lut_wr_data_14),
    .io_lut_wr_data_15(cores_14_io_lut_wr_data_15),
    .io_out_qact(cores_14_io_out_qact),
    .io_out_valid(cores_14_io_out_valid),
    .io_out_lookahead(cores_14_io_out_lookahead),
    .io_busy(cores_14_io_busy),
    .io_sync_alert(cores_14_io_sync_alert)
  );
  QuantActCore cores_15 ( // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
    .clock(cores_15_clock),
    .reset(cores_15_reset),
    .io_in_tpu(cores_15_io_in_tpu),
    .io_in_direct(cores_15_io_in_direct),
    .io_input_mode(cores_15_io_input_mode),
    .io_in_valid(cores_15_io_in_valid),
    .io_param(cores_15_io_param),
    .io_act_mask(cores_15_io_act_mask),
    .io_fusion_second(cores_15_io_fusion_second),
    .io_stall(cores_15_io_stall),
    .io_lut_wr_en(cores_15_io_lut_wr_en),
    .io_lut_wr_addr(cores_15_io_lut_wr_addr),
    .io_lut_wr_data_0(cores_15_io_lut_wr_data_0),
    .io_lut_wr_data_1(cores_15_io_lut_wr_data_1),
    .io_lut_wr_data_2(cores_15_io_lut_wr_data_2),
    .io_lut_wr_data_3(cores_15_io_lut_wr_data_3),
    .io_lut_wr_data_4(cores_15_io_lut_wr_data_4),
    .io_lut_wr_data_5(cores_15_io_lut_wr_data_5),
    .io_lut_wr_data_6(cores_15_io_lut_wr_data_6),
    .io_lut_wr_data_7(cores_15_io_lut_wr_data_7),
    .io_lut_wr_data_8(cores_15_io_lut_wr_data_8),
    .io_lut_wr_data_9(cores_15_io_lut_wr_data_9),
    .io_lut_wr_data_10(cores_15_io_lut_wr_data_10),
    .io_lut_wr_data_11(cores_15_io_lut_wr_data_11),
    .io_lut_wr_data_12(cores_15_io_lut_wr_data_12),
    .io_lut_wr_data_13(cores_15_io_lut_wr_data_13),
    .io_lut_wr_data_14(cores_15_io_lut_wr_data_14),
    .io_lut_wr_data_15(cores_15_io_lut_wr_data_15),
    .io_out_qact(cores_15_io_out_qact),
    .io_out_valid(cores_15_io_out_valid),
    .io_out_lookahead(cores_15_io_out_lookahead),
    .io_busy(cores_15_io_busy),
    .io_sync_alert(cores_15_io_sync_alert)
  );
  assign io_out_vec_0 = cores_0_io_out_qact; // @[src/main/scala/npu/core/QuantActUnit.scala 364:19]
  assign io_out_vec_1 = cores_1_io_out_qact; // @[src/main/scala/npu/core/QuantActUnit.scala 364:19]
  assign io_out_vec_2 = cores_2_io_out_qact; // @[src/main/scala/npu/core/QuantActUnit.scala 364:19]
  assign io_out_vec_3 = cores_3_io_out_qact; // @[src/main/scala/npu/core/QuantActUnit.scala 364:19]
  assign io_out_vec_4 = cores_4_io_out_qact; // @[src/main/scala/npu/core/QuantActUnit.scala 364:19]
  assign io_out_vec_5 = cores_5_io_out_qact; // @[src/main/scala/npu/core/QuantActUnit.scala 364:19]
  assign io_out_vec_6 = cores_6_io_out_qact; // @[src/main/scala/npu/core/QuantActUnit.scala 364:19]
  assign io_out_vec_7 = cores_7_io_out_qact; // @[src/main/scala/npu/core/QuantActUnit.scala 364:19]
  assign io_out_vec_8 = cores_8_io_out_qact; // @[src/main/scala/npu/core/QuantActUnit.scala 364:19]
  assign io_out_vec_9 = cores_9_io_out_qact; // @[src/main/scala/npu/core/QuantActUnit.scala 364:19]
  assign io_out_vec_10 = cores_10_io_out_qact; // @[src/main/scala/npu/core/QuantActUnit.scala 364:19]
  assign io_out_vec_11 = cores_11_io_out_qact; // @[src/main/scala/npu/core/QuantActUnit.scala 364:19]
  assign io_out_vec_12 = cores_12_io_out_qact; // @[src/main/scala/npu/core/QuantActUnit.scala 364:19]
  assign io_out_vec_13 = cores_13_io_out_qact; // @[src/main/scala/npu/core/QuantActUnit.scala 364:19]
  assign io_out_vec_14 = cores_14_io_out_qact; // @[src/main/scala/npu/core/QuantActUnit.scala 364:19]
  assign io_out_vec_15 = cores_15_io_out_qact; // @[src/main/scala/npu/core/QuantActUnit.scala 364:19]
  assign io_out_valid_0 = cores_0_io_out_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 365:21]
  assign io_out_valid_1 = cores_1_io_out_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 365:21]
  assign io_out_valid_2 = cores_2_io_out_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 365:21]
  assign io_out_valid_3 = cores_3_io_out_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 365:21]
  assign io_out_valid_4 = cores_4_io_out_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 365:21]
  assign io_out_valid_5 = cores_5_io_out_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 365:21]
  assign io_out_valid_6 = cores_6_io_out_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 365:21]
  assign io_out_valid_7 = cores_7_io_out_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 365:21]
  assign io_out_valid_8 = cores_8_io_out_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 365:21]
  assign io_out_valid_9 = cores_9_io_out_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 365:21]
  assign io_out_valid_10 = cores_10_io_out_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 365:21]
  assign io_out_valid_11 = cores_11_io_out_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 365:21]
  assign io_out_valid_12 = cores_12_io_out_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 365:21]
  assign io_out_valid_13 = cores_13_io_out_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 365:21]
  assign io_out_valid_14 = cores_14_io_out_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 365:21]
  assign io_out_valid_15 = cores_15_io_out_valid; // @[src/main/scala/npu/core/QuantActUnit.scala 365:21]
  assign io_out_lookahead_0 = cores_0_io_out_lookahead; // @[src/main/scala/npu/core/QuantActUnit.scala 366:25]
  assign io_busy = |_io_busy_T; // @[src/main/scala/npu/core/QuantActUnit.scala 369:51]
  assign io_sync_alert = coreAlert | laneMismatch; // @[src/main/scala/npu/core/QuantActUnit.scala 391:15]
  assign cores_0_clock = clock;
  assign cores_0_reset = reset;
  assign cores_0_io_in_tpu = io_in_tpu_0; // @[src/main/scala/npu/core/QuantActUnit.scala 351:24]
  assign cores_0_io_in_direct = io_in_direct_0; // @[src/main/scala/npu/core/QuantActUnit.scala 352:27]
  assign cores_0_io_input_mode = io_input_mode; // @[src/main/scala/npu/core/QuantActUnit.scala 353:28]
  assign cores_0_io_in_valid = io_in_valid_0; // @[src/main/scala/npu/core/QuantActUnit.scala 354:26]
  assign cores_0_io_param = io_matrix_param; // @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
  assign cores_0_io_act_mask = io_act_mask; // @[src/main/scala/npu/core/QuantActUnit.scala 356:26]
  assign cores_0_io_fusion_second = io_fusion_second; // @[src/main/scala/npu/core/QuantActUnit.scala 357:31]
  assign cores_0_io_stall = io_stall; // @[src/main/scala/npu/core/QuantActUnit.scala 358:23]
  assign cores_0_io_lut_wr_en = io_lut_wr_en; // @[src/main/scala/npu/core/QuantActUnit.scala 360:27]
  assign cores_0_io_lut_wr_addr = io_lut_wr_addr; // @[src/main/scala/npu/core/QuantActUnit.scala 361:29]
  assign cores_0_io_lut_wr_data_0 = io_lut_wr_data_0; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_0_io_lut_wr_data_1 = io_lut_wr_data_1; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_0_io_lut_wr_data_2 = io_lut_wr_data_2; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_0_io_lut_wr_data_3 = io_lut_wr_data_3; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_0_io_lut_wr_data_4 = io_lut_wr_data_4; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_0_io_lut_wr_data_5 = io_lut_wr_data_5; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_0_io_lut_wr_data_6 = io_lut_wr_data_6; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_0_io_lut_wr_data_7 = io_lut_wr_data_7; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_0_io_lut_wr_data_8 = io_lut_wr_data_8; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_0_io_lut_wr_data_9 = io_lut_wr_data_9; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_0_io_lut_wr_data_10 = io_lut_wr_data_10; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_0_io_lut_wr_data_11 = io_lut_wr_data_11; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_0_io_lut_wr_data_12 = io_lut_wr_data_12; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_0_io_lut_wr_data_13 = io_lut_wr_data_13; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_0_io_lut_wr_data_14 = io_lut_wr_data_14; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_0_io_lut_wr_data_15 = io_lut_wr_data_15; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_1_clock = clock;
  assign cores_1_reset = reset;
  assign cores_1_io_in_tpu = io_in_tpu_1; // @[src/main/scala/npu/core/QuantActUnit.scala 351:24]
  assign cores_1_io_in_direct = io_in_direct_1; // @[src/main/scala/npu/core/QuantActUnit.scala 352:27]
  assign cores_1_io_input_mode = io_input_mode; // @[src/main/scala/npu/core/QuantActUnit.scala 353:28]
  assign cores_1_io_in_valid = io_in_valid_1; // @[src/main/scala/npu/core/QuantActUnit.scala 354:26]
  assign cores_1_io_param = io_matrix_param; // @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
  assign cores_1_io_act_mask = io_act_mask; // @[src/main/scala/npu/core/QuantActUnit.scala 356:26]
  assign cores_1_io_fusion_second = io_fusion_second; // @[src/main/scala/npu/core/QuantActUnit.scala 357:31]
  assign cores_1_io_stall = io_stall; // @[src/main/scala/npu/core/QuantActUnit.scala 358:23]
  assign cores_1_io_lut_wr_en = io_lut_wr_en; // @[src/main/scala/npu/core/QuantActUnit.scala 360:27]
  assign cores_1_io_lut_wr_addr = io_lut_wr_addr; // @[src/main/scala/npu/core/QuantActUnit.scala 361:29]
  assign cores_1_io_lut_wr_data_0 = io_lut_wr_data_0; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_1_io_lut_wr_data_1 = io_lut_wr_data_1; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_1_io_lut_wr_data_2 = io_lut_wr_data_2; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_1_io_lut_wr_data_3 = io_lut_wr_data_3; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_1_io_lut_wr_data_4 = io_lut_wr_data_4; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_1_io_lut_wr_data_5 = io_lut_wr_data_5; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_1_io_lut_wr_data_6 = io_lut_wr_data_6; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_1_io_lut_wr_data_7 = io_lut_wr_data_7; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_1_io_lut_wr_data_8 = io_lut_wr_data_8; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_1_io_lut_wr_data_9 = io_lut_wr_data_9; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_1_io_lut_wr_data_10 = io_lut_wr_data_10; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_1_io_lut_wr_data_11 = io_lut_wr_data_11; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_1_io_lut_wr_data_12 = io_lut_wr_data_12; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_1_io_lut_wr_data_13 = io_lut_wr_data_13; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_1_io_lut_wr_data_14 = io_lut_wr_data_14; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_1_io_lut_wr_data_15 = io_lut_wr_data_15; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_2_clock = clock;
  assign cores_2_reset = reset;
  assign cores_2_io_in_tpu = io_in_tpu_2; // @[src/main/scala/npu/core/QuantActUnit.scala 351:24]
  assign cores_2_io_in_direct = io_in_direct_2; // @[src/main/scala/npu/core/QuantActUnit.scala 352:27]
  assign cores_2_io_input_mode = io_input_mode; // @[src/main/scala/npu/core/QuantActUnit.scala 353:28]
  assign cores_2_io_in_valid = io_in_valid_2; // @[src/main/scala/npu/core/QuantActUnit.scala 354:26]
  assign cores_2_io_param = io_matrix_param; // @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
  assign cores_2_io_act_mask = io_act_mask; // @[src/main/scala/npu/core/QuantActUnit.scala 356:26]
  assign cores_2_io_fusion_second = io_fusion_second; // @[src/main/scala/npu/core/QuantActUnit.scala 357:31]
  assign cores_2_io_stall = io_stall; // @[src/main/scala/npu/core/QuantActUnit.scala 358:23]
  assign cores_2_io_lut_wr_en = io_lut_wr_en; // @[src/main/scala/npu/core/QuantActUnit.scala 360:27]
  assign cores_2_io_lut_wr_addr = io_lut_wr_addr; // @[src/main/scala/npu/core/QuantActUnit.scala 361:29]
  assign cores_2_io_lut_wr_data_0 = io_lut_wr_data_0; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_2_io_lut_wr_data_1 = io_lut_wr_data_1; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_2_io_lut_wr_data_2 = io_lut_wr_data_2; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_2_io_lut_wr_data_3 = io_lut_wr_data_3; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_2_io_lut_wr_data_4 = io_lut_wr_data_4; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_2_io_lut_wr_data_5 = io_lut_wr_data_5; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_2_io_lut_wr_data_6 = io_lut_wr_data_6; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_2_io_lut_wr_data_7 = io_lut_wr_data_7; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_2_io_lut_wr_data_8 = io_lut_wr_data_8; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_2_io_lut_wr_data_9 = io_lut_wr_data_9; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_2_io_lut_wr_data_10 = io_lut_wr_data_10; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_2_io_lut_wr_data_11 = io_lut_wr_data_11; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_2_io_lut_wr_data_12 = io_lut_wr_data_12; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_2_io_lut_wr_data_13 = io_lut_wr_data_13; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_2_io_lut_wr_data_14 = io_lut_wr_data_14; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_2_io_lut_wr_data_15 = io_lut_wr_data_15; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_3_clock = clock;
  assign cores_3_reset = reset;
  assign cores_3_io_in_tpu = io_in_tpu_3; // @[src/main/scala/npu/core/QuantActUnit.scala 351:24]
  assign cores_3_io_in_direct = io_in_direct_3; // @[src/main/scala/npu/core/QuantActUnit.scala 352:27]
  assign cores_3_io_input_mode = io_input_mode; // @[src/main/scala/npu/core/QuantActUnit.scala 353:28]
  assign cores_3_io_in_valid = io_in_valid_3; // @[src/main/scala/npu/core/QuantActUnit.scala 354:26]
  assign cores_3_io_param = io_matrix_param; // @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
  assign cores_3_io_act_mask = io_act_mask; // @[src/main/scala/npu/core/QuantActUnit.scala 356:26]
  assign cores_3_io_fusion_second = io_fusion_second; // @[src/main/scala/npu/core/QuantActUnit.scala 357:31]
  assign cores_3_io_stall = io_stall; // @[src/main/scala/npu/core/QuantActUnit.scala 358:23]
  assign cores_3_io_lut_wr_en = io_lut_wr_en; // @[src/main/scala/npu/core/QuantActUnit.scala 360:27]
  assign cores_3_io_lut_wr_addr = io_lut_wr_addr; // @[src/main/scala/npu/core/QuantActUnit.scala 361:29]
  assign cores_3_io_lut_wr_data_0 = io_lut_wr_data_0; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_3_io_lut_wr_data_1 = io_lut_wr_data_1; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_3_io_lut_wr_data_2 = io_lut_wr_data_2; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_3_io_lut_wr_data_3 = io_lut_wr_data_3; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_3_io_lut_wr_data_4 = io_lut_wr_data_4; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_3_io_lut_wr_data_5 = io_lut_wr_data_5; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_3_io_lut_wr_data_6 = io_lut_wr_data_6; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_3_io_lut_wr_data_7 = io_lut_wr_data_7; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_3_io_lut_wr_data_8 = io_lut_wr_data_8; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_3_io_lut_wr_data_9 = io_lut_wr_data_9; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_3_io_lut_wr_data_10 = io_lut_wr_data_10; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_3_io_lut_wr_data_11 = io_lut_wr_data_11; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_3_io_lut_wr_data_12 = io_lut_wr_data_12; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_3_io_lut_wr_data_13 = io_lut_wr_data_13; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_3_io_lut_wr_data_14 = io_lut_wr_data_14; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_3_io_lut_wr_data_15 = io_lut_wr_data_15; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_4_clock = clock;
  assign cores_4_reset = reset;
  assign cores_4_io_in_tpu = io_in_tpu_4; // @[src/main/scala/npu/core/QuantActUnit.scala 351:24]
  assign cores_4_io_in_direct = io_in_direct_4; // @[src/main/scala/npu/core/QuantActUnit.scala 352:27]
  assign cores_4_io_input_mode = io_input_mode; // @[src/main/scala/npu/core/QuantActUnit.scala 353:28]
  assign cores_4_io_in_valid = io_in_valid_4; // @[src/main/scala/npu/core/QuantActUnit.scala 354:26]
  assign cores_4_io_param = io_matrix_param; // @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
  assign cores_4_io_act_mask = io_act_mask; // @[src/main/scala/npu/core/QuantActUnit.scala 356:26]
  assign cores_4_io_fusion_second = io_fusion_second; // @[src/main/scala/npu/core/QuantActUnit.scala 357:31]
  assign cores_4_io_stall = io_stall; // @[src/main/scala/npu/core/QuantActUnit.scala 358:23]
  assign cores_4_io_lut_wr_en = io_lut_wr_en; // @[src/main/scala/npu/core/QuantActUnit.scala 360:27]
  assign cores_4_io_lut_wr_addr = io_lut_wr_addr; // @[src/main/scala/npu/core/QuantActUnit.scala 361:29]
  assign cores_4_io_lut_wr_data_0 = io_lut_wr_data_0; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_4_io_lut_wr_data_1 = io_lut_wr_data_1; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_4_io_lut_wr_data_2 = io_lut_wr_data_2; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_4_io_lut_wr_data_3 = io_lut_wr_data_3; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_4_io_lut_wr_data_4 = io_lut_wr_data_4; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_4_io_lut_wr_data_5 = io_lut_wr_data_5; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_4_io_lut_wr_data_6 = io_lut_wr_data_6; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_4_io_lut_wr_data_7 = io_lut_wr_data_7; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_4_io_lut_wr_data_8 = io_lut_wr_data_8; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_4_io_lut_wr_data_9 = io_lut_wr_data_9; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_4_io_lut_wr_data_10 = io_lut_wr_data_10; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_4_io_lut_wr_data_11 = io_lut_wr_data_11; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_4_io_lut_wr_data_12 = io_lut_wr_data_12; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_4_io_lut_wr_data_13 = io_lut_wr_data_13; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_4_io_lut_wr_data_14 = io_lut_wr_data_14; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_4_io_lut_wr_data_15 = io_lut_wr_data_15; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_5_clock = clock;
  assign cores_5_reset = reset;
  assign cores_5_io_in_tpu = io_in_tpu_5; // @[src/main/scala/npu/core/QuantActUnit.scala 351:24]
  assign cores_5_io_in_direct = io_in_direct_5; // @[src/main/scala/npu/core/QuantActUnit.scala 352:27]
  assign cores_5_io_input_mode = io_input_mode; // @[src/main/scala/npu/core/QuantActUnit.scala 353:28]
  assign cores_5_io_in_valid = io_in_valid_5; // @[src/main/scala/npu/core/QuantActUnit.scala 354:26]
  assign cores_5_io_param = io_matrix_param; // @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
  assign cores_5_io_act_mask = io_act_mask; // @[src/main/scala/npu/core/QuantActUnit.scala 356:26]
  assign cores_5_io_fusion_second = io_fusion_second; // @[src/main/scala/npu/core/QuantActUnit.scala 357:31]
  assign cores_5_io_stall = io_stall; // @[src/main/scala/npu/core/QuantActUnit.scala 358:23]
  assign cores_5_io_lut_wr_en = io_lut_wr_en; // @[src/main/scala/npu/core/QuantActUnit.scala 360:27]
  assign cores_5_io_lut_wr_addr = io_lut_wr_addr; // @[src/main/scala/npu/core/QuantActUnit.scala 361:29]
  assign cores_5_io_lut_wr_data_0 = io_lut_wr_data_0; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_5_io_lut_wr_data_1 = io_lut_wr_data_1; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_5_io_lut_wr_data_2 = io_lut_wr_data_2; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_5_io_lut_wr_data_3 = io_lut_wr_data_3; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_5_io_lut_wr_data_4 = io_lut_wr_data_4; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_5_io_lut_wr_data_5 = io_lut_wr_data_5; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_5_io_lut_wr_data_6 = io_lut_wr_data_6; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_5_io_lut_wr_data_7 = io_lut_wr_data_7; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_5_io_lut_wr_data_8 = io_lut_wr_data_8; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_5_io_lut_wr_data_9 = io_lut_wr_data_9; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_5_io_lut_wr_data_10 = io_lut_wr_data_10; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_5_io_lut_wr_data_11 = io_lut_wr_data_11; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_5_io_lut_wr_data_12 = io_lut_wr_data_12; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_5_io_lut_wr_data_13 = io_lut_wr_data_13; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_5_io_lut_wr_data_14 = io_lut_wr_data_14; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_5_io_lut_wr_data_15 = io_lut_wr_data_15; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_6_clock = clock;
  assign cores_6_reset = reset;
  assign cores_6_io_in_tpu = io_in_tpu_6; // @[src/main/scala/npu/core/QuantActUnit.scala 351:24]
  assign cores_6_io_in_direct = io_in_direct_6; // @[src/main/scala/npu/core/QuantActUnit.scala 352:27]
  assign cores_6_io_input_mode = io_input_mode; // @[src/main/scala/npu/core/QuantActUnit.scala 353:28]
  assign cores_6_io_in_valid = io_in_valid_6; // @[src/main/scala/npu/core/QuantActUnit.scala 354:26]
  assign cores_6_io_param = io_matrix_param; // @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
  assign cores_6_io_act_mask = io_act_mask; // @[src/main/scala/npu/core/QuantActUnit.scala 356:26]
  assign cores_6_io_fusion_second = io_fusion_second; // @[src/main/scala/npu/core/QuantActUnit.scala 357:31]
  assign cores_6_io_stall = io_stall; // @[src/main/scala/npu/core/QuantActUnit.scala 358:23]
  assign cores_6_io_lut_wr_en = io_lut_wr_en; // @[src/main/scala/npu/core/QuantActUnit.scala 360:27]
  assign cores_6_io_lut_wr_addr = io_lut_wr_addr; // @[src/main/scala/npu/core/QuantActUnit.scala 361:29]
  assign cores_6_io_lut_wr_data_0 = io_lut_wr_data_0; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_6_io_lut_wr_data_1 = io_lut_wr_data_1; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_6_io_lut_wr_data_2 = io_lut_wr_data_2; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_6_io_lut_wr_data_3 = io_lut_wr_data_3; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_6_io_lut_wr_data_4 = io_lut_wr_data_4; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_6_io_lut_wr_data_5 = io_lut_wr_data_5; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_6_io_lut_wr_data_6 = io_lut_wr_data_6; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_6_io_lut_wr_data_7 = io_lut_wr_data_7; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_6_io_lut_wr_data_8 = io_lut_wr_data_8; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_6_io_lut_wr_data_9 = io_lut_wr_data_9; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_6_io_lut_wr_data_10 = io_lut_wr_data_10; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_6_io_lut_wr_data_11 = io_lut_wr_data_11; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_6_io_lut_wr_data_12 = io_lut_wr_data_12; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_6_io_lut_wr_data_13 = io_lut_wr_data_13; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_6_io_lut_wr_data_14 = io_lut_wr_data_14; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_6_io_lut_wr_data_15 = io_lut_wr_data_15; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_7_clock = clock;
  assign cores_7_reset = reset;
  assign cores_7_io_in_tpu = io_in_tpu_7; // @[src/main/scala/npu/core/QuantActUnit.scala 351:24]
  assign cores_7_io_in_direct = io_in_direct_7; // @[src/main/scala/npu/core/QuantActUnit.scala 352:27]
  assign cores_7_io_input_mode = io_input_mode; // @[src/main/scala/npu/core/QuantActUnit.scala 353:28]
  assign cores_7_io_in_valid = io_in_valid_7; // @[src/main/scala/npu/core/QuantActUnit.scala 354:26]
  assign cores_7_io_param = io_matrix_param; // @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
  assign cores_7_io_act_mask = io_act_mask; // @[src/main/scala/npu/core/QuantActUnit.scala 356:26]
  assign cores_7_io_fusion_second = io_fusion_second; // @[src/main/scala/npu/core/QuantActUnit.scala 357:31]
  assign cores_7_io_stall = io_stall; // @[src/main/scala/npu/core/QuantActUnit.scala 358:23]
  assign cores_7_io_lut_wr_en = io_lut_wr_en; // @[src/main/scala/npu/core/QuantActUnit.scala 360:27]
  assign cores_7_io_lut_wr_addr = io_lut_wr_addr; // @[src/main/scala/npu/core/QuantActUnit.scala 361:29]
  assign cores_7_io_lut_wr_data_0 = io_lut_wr_data_0; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_7_io_lut_wr_data_1 = io_lut_wr_data_1; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_7_io_lut_wr_data_2 = io_lut_wr_data_2; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_7_io_lut_wr_data_3 = io_lut_wr_data_3; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_7_io_lut_wr_data_4 = io_lut_wr_data_4; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_7_io_lut_wr_data_5 = io_lut_wr_data_5; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_7_io_lut_wr_data_6 = io_lut_wr_data_6; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_7_io_lut_wr_data_7 = io_lut_wr_data_7; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_7_io_lut_wr_data_8 = io_lut_wr_data_8; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_7_io_lut_wr_data_9 = io_lut_wr_data_9; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_7_io_lut_wr_data_10 = io_lut_wr_data_10; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_7_io_lut_wr_data_11 = io_lut_wr_data_11; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_7_io_lut_wr_data_12 = io_lut_wr_data_12; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_7_io_lut_wr_data_13 = io_lut_wr_data_13; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_7_io_lut_wr_data_14 = io_lut_wr_data_14; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_7_io_lut_wr_data_15 = io_lut_wr_data_15; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_8_clock = clock;
  assign cores_8_reset = reset;
  assign cores_8_io_in_tpu = io_in_tpu_8; // @[src/main/scala/npu/core/QuantActUnit.scala 351:24]
  assign cores_8_io_in_direct = io_in_direct_8; // @[src/main/scala/npu/core/QuantActUnit.scala 352:27]
  assign cores_8_io_input_mode = io_input_mode; // @[src/main/scala/npu/core/QuantActUnit.scala 353:28]
  assign cores_8_io_in_valid = io_in_valid_8; // @[src/main/scala/npu/core/QuantActUnit.scala 354:26]
  assign cores_8_io_param = io_matrix_param; // @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
  assign cores_8_io_act_mask = io_act_mask; // @[src/main/scala/npu/core/QuantActUnit.scala 356:26]
  assign cores_8_io_fusion_second = io_fusion_second; // @[src/main/scala/npu/core/QuantActUnit.scala 357:31]
  assign cores_8_io_stall = io_stall; // @[src/main/scala/npu/core/QuantActUnit.scala 358:23]
  assign cores_8_io_lut_wr_en = io_lut_wr_en; // @[src/main/scala/npu/core/QuantActUnit.scala 360:27]
  assign cores_8_io_lut_wr_addr = io_lut_wr_addr; // @[src/main/scala/npu/core/QuantActUnit.scala 361:29]
  assign cores_8_io_lut_wr_data_0 = io_lut_wr_data_0; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_8_io_lut_wr_data_1 = io_lut_wr_data_1; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_8_io_lut_wr_data_2 = io_lut_wr_data_2; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_8_io_lut_wr_data_3 = io_lut_wr_data_3; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_8_io_lut_wr_data_4 = io_lut_wr_data_4; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_8_io_lut_wr_data_5 = io_lut_wr_data_5; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_8_io_lut_wr_data_6 = io_lut_wr_data_6; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_8_io_lut_wr_data_7 = io_lut_wr_data_7; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_8_io_lut_wr_data_8 = io_lut_wr_data_8; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_8_io_lut_wr_data_9 = io_lut_wr_data_9; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_8_io_lut_wr_data_10 = io_lut_wr_data_10; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_8_io_lut_wr_data_11 = io_lut_wr_data_11; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_8_io_lut_wr_data_12 = io_lut_wr_data_12; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_8_io_lut_wr_data_13 = io_lut_wr_data_13; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_8_io_lut_wr_data_14 = io_lut_wr_data_14; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_8_io_lut_wr_data_15 = io_lut_wr_data_15; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_9_clock = clock;
  assign cores_9_reset = reset;
  assign cores_9_io_in_tpu = io_in_tpu_9; // @[src/main/scala/npu/core/QuantActUnit.scala 351:24]
  assign cores_9_io_in_direct = io_in_direct_9; // @[src/main/scala/npu/core/QuantActUnit.scala 352:27]
  assign cores_9_io_input_mode = io_input_mode; // @[src/main/scala/npu/core/QuantActUnit.scala 353:28]
  assign cores_9_io_in_valid = io_in_valid_9; // @[src/main/scala/npu/core/QuantActUnit.scala 354:26]
  assign cores_9_io_param = io_matrix_param; // @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
  assign cores_9_io_act_mask = io_act_mask; // @[src/main/scala/npu/core/QuantActUnit.scala 356:26]
  assign cores_9_io_fusion_second = io_fusion_second; // @[src/main/scala/npu/core/QuantActUnit.scala 357:31]
  assign cores_9_io_stall = io_stall; // @[src/main/scala/npu/core/QuantActUnit.scala 358:23]
  assign cores_9_io_lut_wr_en = io_lut_wr_en; // @[src/main/scala/npu/core/QuantActUnit.scala 360:27]
  assign cores_9_io_lut_wr_addr = io_lut_wr_addr; // @[src/main/scala/npu/core/QuantActUnit.scala 361:29]
  assign cores_9_io_lut_wr_data_0 = io_lut_wr_data_0; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_9_io_lut_wr_data_1 = io_lut_wr_data_1; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_9_io_lut_wr_data_2 = io_lut_wr_data_2; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_9_io_lut_wr_data_3 = io_lut_wr_data_3; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_9_io_lut_wr_data_4 = io_lut_wr_data_4; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_9_io_lut_wr_data_5 = io_lut_wr_data_5; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_9_io_lut_wr_data_6 = io_lut_wr_data_6; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_9_io_lut_wr_data_7 = io_lut_wr_data_7; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_9_io_lut_wr_data_8 = io_lut_wr_data_8; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_9_io_lut_wr_data_9 = io_lut_wr_data_9; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_9_io_lut_wr_data_10 = io_lut_wr_data_10; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_9_io_lut_wr_data_11 = io_lut_wr_data_11; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_9_io_lut_wr_data_12 = io_lut_wr_data_12; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_9_io_lut_wr_data_13 = io_lut_wr_data_13; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_9_io_lut_wr_data_14 = io_lut_wr_data_14; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_9_io_lut_wr_data_15 = io_lut_wr_data_15; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_10_clock = clock;
  assign cores_10_reset = reset;
  assign cores_10_io_in_tpu = io_in_tpu_10; // @[src/main/scala/npu/core/QuantActUnit.scala 351:24]
  assign cores_10_io_in_direct = io_in_direct_10; // @[src/main/scala/npu/core/QuantActUnit.scala 352:27]
  assign cores_10_io_input_mode = io_input_mode; // @[src/main/scala/npu/core/QuantActUnit.scala 353:28]
  assign cores_10_io_in_valid = io_in_valid_10; // @[src/main/scala/npu/core/QuantActUnit.scala 354:26]
  assign cores_10_io_param = io_matrix_param; // @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
  assign cores_10_io_act_mask = io_act_mask; // @[src/main/scala/npu/core/QuantActUnit.scala 356:26]
  assign cores_10_io_fusion_second = io_fusion_second; // @[src/main/scala/npu/core/QuantActUnit.scala 357:31]
  assign cores_10_io_stall = io_stall; // @[src/main/scala/npu/core/QuantActUnit.scala 358:23]
  assign cores_10_io_lut_wr_en = io_lut_wr_en; // @[src/main/scala/npu/core/QuantActUnit.scala 360:27]
  assign cores_10_io_lut_wr_addr = io_lut_wr_addr; // @[src/main/scala/npu/core/QuantActUnit.scala 361:29]
  assign cores_10_io_lut_wr_data_0 = io_lut_wr_data_0; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_10_io_lut_wr_data_1 = io_lut_wr_data_1; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_10_io_lut_wr_data_2 = io_lut_wr_data_2; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_10_io_lut_wr_data_3 = io_lut_wr_data_3; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_10_io_lut_wr_data_4 = io_lut_wr_data_4; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_10_io_lut_wr_data_5 = io_lut_wr_data_5; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_10_io_lut_wr_data_6 = io_lut_wr_data_6; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_10_io_lut_wr_data_7 = io_lut_wr_data_7; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_10_io_lut_wr_data_8 = io_lut_wr_data_8; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_10_io_lut_wr_data_9 = io_lut_wr_data_9; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_10_io_lut_wr_data_10 = io_lut_wr_data_10; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_10_io_lut_wr_data_11 = io_lut_wr_data_11; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_10_io_lut_wr_data_12 = io_lut_wr_data_12; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_10_io_lut_wr_data_13 = io_lut_wr_data_13; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_10_io_lut_wr_data_14 = io_lut_wr_data_14; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_10_io_lut_wr_data_15 = io_lut_wr_data_15; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_11_clock = clock;
  assign cores_11_reset = reset;
  assign cores_11_io_in_tpu = io_in_tpu_11; // @[src/main/scala/npu/core/QuantActUnit.scala 351:24]
  assign cores_11_io_in_direct = io_in_direct_11; // @[src/main/scala/npu/core/QuantActUnit.scala 352:27]
  assign cores_11_io_input_mode = io_input_mode; // @[src/main/scala/npu/core/QuantActUnit.scala 353:28]
  assign cores_11_io_in_valid = io_in_valid_11; // @[src/main/scala/npu/core/QuantActUnit.scala 354:26]
  assign cores_11_io_param = io_matrix_param; // @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
  assign cores_11_io_act_mask = io_act_mask; // @[src/main/scala/npu/core/QuantActUnit.scala 356:26]
  assign cores_11_io_fusion_second = io_fusion_second; // @[src/main/scala/npu/core/QuantActUnit.scala 357:31]
  assign cores_11_io_stall = io_stall; // @[src/main/scala/npu/core/QuantActUnit.scala 358:23]
  assign cores_11_io_lut_wr_en = io_lut_wr_en; // @[src/main/scala/npu/core/QuantActUnit.scala 360:27]
  assign cores_11_io_lut_wr_addr = io_lut_wr_addr; // @[src/main/scala/npu/core/QuantActUnit.scala 361:29]
  assign cores_11_io_lut_wr_data_0 = io_lut_wr_data_0; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_11_io_lut_wr_data_1 = io_lut_wr_data_1; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_11_io_lut_wr_data_2 = io_lut_wr_data_2; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_11_io_lut_wr_data_3 = io_lut_wr_data_3; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_11_io_lut_wr_data_4 = io_lut_wr_data_4; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_11_io_lut_wr_data_5 = io_lut_wr_data_5; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_11_io_lut_wr_data_6 = io_lut_wr_data_6; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_11_io_lut_wr_data_7 = io_lut_wr_data_7; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_11_io_lut_wr_data_8 = io_lut_wr_data_8; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_11_io_lut_wr_data_9 = io_lut_wr_data_9; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_11_io_lut_wr_data_10 = io_lut_wr_data_10; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_11_io_lut_wr_data_11 = io_lut_wr_data_11; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_11_io_lut_wr_data_12 = io_lut_wr_data_12; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_11_io_lut_wr_data_13 = io_lut_wr_data_13; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_11_io_lut_wr_data_14 = io_lut_wr_data_14; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_11_io_lut_wr_data_15 = io_lut_wr_data_15; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_12_clock = clock;
  assign cores_12_reset = reset;
  assign cores_12_io_in_tpu = io_in_tpu_12; // @[src/main/scala/npu/core/QuantActUnit.scala 351:24]
  assign cores_12_io_in_direct = io_in_direct_12; // @[src/main/scala/npu/core/QuantActUnit.scala 352:27]
  assign cores_12_io_input_mode = io_input_mode; // @[src/main/scala/npu/core/QuantActUnit.scala 353:28]
  assign cores_12_io_in_valid = io_in_valid_12; // @[src/main/scala/npu/core/QuantActUnit.scala 354:26]
  assign cores_12_io_param = io_matrix_param; // @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
  assign cores_12_io_act_mask = io_act_mask; // @[src/main/scala/npu/core/QuantActUnit.scala 356:26]
  assign cores_12_io_fusion_second = io_fusion_second; // @[src/main/scala/npu/core/QuantActUnit.scala 357:31]
  assign cores_12_io_stall = io_stall; // @[src/main/scala/npu/core/QuantActUnit.scala 358:23]
  assign cores_12_io_lut_wr_en = io_lut_wr_en; // @[src/main/scala/npu/core/QuantActUnit.scala 360:27]
  assign cores_12_io_lut_wr_addr = io_lut_wr_addr; // @[src/main/scala/npu/core/QuantActUnit.scala 361:29]
  assign cores_12_io_lut_wr_data_0 = io_lut_wr_data_0; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_12_io_lut_wr_data_1 = io_lut_wr_data_1; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_12_io_lut_wr_data_2 = io_lut_wr_data_2; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_12_io_lut_wr_data_3 = io_lut_wr_data_3; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_12_io_lut_wr_data_4 = io_lut_wr_data_4; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_12_io_lut_wr_data_5 = io_lut_wr_data_5; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_12_io_lut_wr_data_6 = io_lut_wr_data_6; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_12_io_lut_wr_data_7 = io_lut_wr_data_7; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_12_io_lut_wr_data_8 = io_lut_wr_data_8; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_12_io_lut_wr_data_9 = io_lut_wr_data_9; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_12_io_lut_wr_data_10 = io_lut_wr_data_10; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_12_io_lut_wr_data_11 = io_lut_wr_data_11; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_12_io_lut_wr_data_12 = io_lut_wr_data_12; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_12_io_lut_wr_data_13 = io_lut_wr_data_13; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_12_io_lut_wr_data_14 = io_lut_wr_data_14; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_12_io_lut_wr_data_15 = io_lut_wr_data_15; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_13_clock = clock;
  assign cores_13_reset = reset;
  assign cores_13_io_in_tpu = io_in_tpu_13; // @[src/main/scala/npu/core/QuantActUnit.scala 351:24]
  assign cores_13_io_in_direct = io_in_direct_13; // @[src/main/scala/npu/core/QuantActUnit.scala 352:27]
  assign cores_13_io_input_mode = io_input_mode; // @[src/main/scala/npu/core/QuantActUnit.scala 353:28]
  assign cores_13_io_in_valid = io_in_valid_13; // @[src/main/scala/npu/core/QuantActUnit.scala 354:26]
  assign cores_13_io_param = io_matrix_param; // @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
  assign cores_13_io_act_mask = io_act_mask; // @[src/main/scala/npu/core/QuantActUnit.scala 356:26]
  assign cores_13_io_fusion_second = io_fusion_second; // @[src/main/scala/npu/core/QuantActUnit.scala 357:31]
  assign cores_13_io_stall = io_stall; // @[src/main/scala/npu/core/QuantActUnit.scala 358:23]
  assign cores_13_io_lut_wr_en = io_lut_wr_en; // @[src/main/scala/npu/core/QuantActUnit.scala 360:27]
  assign cores_13_io_lut_wr_addr = io_lut_wr_addr; // @[src/main/scala/npu/core/QuantActUnit.scala 361:29]
  assign cores_13_io_lut_wr_data_0 = io_lut_wr_data_0; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_13_io_lut_wr_data_1 = io_lut_wr_data_1; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_13_io_lut_wr_data_2 = io_lut_wr_data_2; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_13_io_lut_wr_data_3 = io_lut_wr_data_3; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_13_io_lut_wr_data_4 = io_lut_wr_data_4; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_13_io_lut_wr_data_5 = io_lut_wr_data_5; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_13_io_lut_wr_data_6 = io_lut_wr_data_6; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_13_io_lut_wr_data_7 = io_lut_wr_data_7; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_13_io_lut_wr_data_8 = io_lut_wr_data_8; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_13_io_lut_wr_data_9 = io_lut_wr_data_9; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_13_io_lut_wr_data_10 = io_lut_wr_data_10; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_13_io_lut_wr_data_11 = io_lut_wr_data_11; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_13_io_lut_wr_data_12 = io_lut_wr_data_12; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_13_io_lut_wr_data_13 = io_lut_wr_data_13; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_13_io_lut_wr_data_14 = io_lut_wr_data_14; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_13_io_lut_wr_data_15 = io_lut_wr_data_15; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_14_clock = clock;
  assign cores_14_reset = reset;
  assign cores_14_io_in_tpu = io_in_tpu_14; // @[src/main/scala/npu/core/QuantActUnit.scala 351:24]
  assign cores_14_io_in_direct = io_in_direct_14; // @[src/main/scala/npu/core/QuantActUnit.scala 352:27]
  assign cores_14_io_input_mode = io_input_mode; // @[src/main/scala/npu/core/QuantActUnit.scala 353:28]
  assign cores_14_io_in_valid = io_in_valid_14; // @[src/main/scala/npu/core/QuantActUnit.scala 354:26]
  assign cores_14_io_param = io_matrix_param; // @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
  assign cores_14_io_act_mask = io_act_mask; // @[src/main/scala/npu/core/QuantActUnit.scala 356:26]
  assign cores_14_io_fusion_second = io_fusion_second; // @[src/main/scala/npu/core/QuantActUnit.scala 357:31]
  assign cores_14_io_stall = io_stall; // @[src/main/scala/npu/core/QuantActUnit.scala 358:23]
  assign cores_14_io_lut_wr_en = io_lut_wr_en; // @[src/main/scala/npu/core/QuantActUnit.scala 360:27]
  assign cores_14_io_lut_wr_addr = io_lut_wr_addr; // @[src/main/scala/npu/core/QuantActUnit.scala 361:29]
  assign cores_14_io_lut_wr_data_0 = io_lut_wr_data_0; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_14_io_lut_wr_data_1 = io_lut_wr_data_1; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_14_io_lut_wr_data_2 = io_lut_wr_data_2; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_14_io_lut_wr_data_3 = io_lut_wr_data_3; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_14_io_lut_wr_data_4 = io_lut_wr_data_4; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_14_io_lut_wr_data_5 = io_lut_wr_data_5; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_14_io_lut_wr_data_6 = io_lut_wr_data_6; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_14_io_lut_wr_data_7 = io_lut_wr_data_7; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_14_io_lut_wr_data_8 = io_lut_wr_data_8; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_14_io_lut_wr_data_9 = io_lut_wr_data_9; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_14_io_lut_wr_data_10 = io_lut_wr_data_10; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_14_io_lut_wr_data_11 = io_lut_wr_data_11; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_14_io_lut_wr_data_12 = io_lut_wr_data_12; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_14_io_lut_wr_data_13 = io_lut_wr_data_13; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_14_io_lut_wr_data_14 = io_lut_wr_data_14; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_14_io_lut_wr_data_15 = io_lut_wr_data_15; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_15_clock = clock;
  assign cores_15_reset = reset;
  assign cores_15_io_in_tpu = io_in_tpu_15; // @[src/main/scala/npu/core/QuantActUnit.scala 351:24]
  assign cores_15_io_in_direct = io_in_direct_15; // @[src/main/scala/npu/core/QuantActUnit.scala 352:27]
  assign cores_15_io_input_mode = io_input_mode; // @[src/main/scala/npu/core/QuantActUnit.scala 353:28]
  assign cores_15_io_in_valid = io_in_valid_15; // @[src/main/scala/npu/core/QuantActUnit.scala 354:26]
  assign cores_15_io_param = io_matrix_param; // @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
  assign cores_15_io_act_mask = io_act_mask; // @[src/main/scala/npu/core/QuantActUnit.scala 356:26]
  assign cores_15_io_fusion_second = io_fusion_second; // @[src/main/scala/npu/core/QuantActUnit.scala 357:31]
  assign cores_15_io_stall = io_stall; // @[src/main/scala/npu/core/QuantActUnit.scala 358:23]
  assign cores_15_io_lut_wr_en = io_lut_wr_en; // @[src/main/scala/npu/core/QuantActUnit.scala 360:27]
  assign cores_15_io_lut_wr_addr = io_lut_wr_addr; // @[src/main/scala/npu/core/QuantActUnit.scala 361:29]
  assign cores_15_io_lut_wr_data_0 = io_lut_wr_data_0; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_15_io_lut_wr_data_1 = io_lut_wr_data_1; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_15_io_lut_wr_data_2 = io_lut_wr_data_2; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_15_io_lut_wr_data_3 = io_lut_wr_data_3; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_15_io_lut_wr_data_4 = io_lut_wr_data_4; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_15_io_lut_wr_data_5 = io_lut_wr_data_5; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_15_io_lut_wr_data_6 = io_lut_wr_data_6; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_15_io_lut_wr_data_7 = io_lut_wr_data_7; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_15_io_lut_wr_data_8 = io_lut_wr_data_8; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_15_io_lut_wr_data_9 = io_lut_wr_data_9; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_15_io_lut_wr_data_10 = io_lut_wr_data_10; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_15_io_lut_wr_data_11 = io_lut_wr_data_11; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_15_io_lut_wr_data_12 = io_lut_wr_data_12; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_15_io_lut_wr_data_13 = io_lut_wr_data_13; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_15_io_lut_wr_data_14 = io_lut_wr_data_14; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
  assign cores_15_io_lut_wr_data_15 = io_lut_wr_data_15; // @[src/main/scala/npu/core/QuantActUnit.scala 362:29]
endmodule
module GPALUCore( // @[src/main/scala/npu/core/GPALU.scala 15:7]
  input        clock, // @[src/main/scala/npu/core/GPALU.scala 15:7]
  input        reset, // @[src/main/scala/npu/core/GPALU.scala 15:7]
  input  [7:0] io_in_a, // @[src/main/scala/npu/core/GPALU.scala 18:14]
  input  [7:0] io_in_b, // @[src/main/scala/npu/core/GPALU.scala 18:14]
  input        io_in_valid, // @[src/main/scala/npu/core/GPALU.scala 18:14]
  input        io_input_mode, // @[src/main/scala/npu/core/GPALU.scala 18:14]
  input  [1:0] io_alu_mode, // @[src/main/scala/npu/core/GPALU.scala 18:14]
  input  [4:0] io_out_shift, // @[src/main/scala/npu/core/GPALU.scala 18:14]
  input        io_stall, // @[src/main/scala/npu/core/GPALU.scala 18:14]
  output [7:0] io_out_tpu, // @[src/main/scala/npu/core/GPALU.scala 18:14]
  output [9:0] io_out_direct, // @[src/main/scala/npu/core/GPALU.scala 18:14]
  output       io_out_tpu_valid, // @[src/main/scala/npu/core/GPALU.scala 18:14]
  output       io_out_direct_valid, // @[src/main/scala/npu/core/GPALU.scala 18:14]
  output       io_busy // @[src/main/scala/npu/core/GPALU.scala 18:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
`endif // RANDOMIZE_REG_INIT
  wire  run = ~io_stall; // @[src/main/scala/npu/core/GPALU.scala 36:13]
  reg [7:0] s1A; // @[src/main/scala/npu/core/GPALU.scala 38:22]
  reg [7:0] s1B; // @[src/main/scala/npu/core/GPALU.scala 39:22]
  reg [1:0] s1Mode; // @[src/main/scala/npu/core/GPALU.scala 40:25]
  reg [4:0] s1Shift; // @[src/main/scala/npu/core/GPALU.scala 41:26]
  reg  s1Direct; // @[src/main/scala/npu/core/GPALU.scala 42:27]
  reg  s1Valid; // @[src/main/scala/npu/core/GPALU.scala 43:26]
  wire [15:0] _result_T = {{8{s1A[7]}},s1A}; // @[src/main/scala/npu/core/GPALU.scala 45:41]
  wire [8:0] _result_T_1 = $signed(s1A) + $signed(s1B); // @[src/main/scala/npu/core/GPALU.scala 46:27]
  wire [15:0] _result_T_2 = {{7{_result_T_1[8]}},_result_T_1}; // @[src/main/scala/npu/core/GPALU.scala 46:38]
  wire [15:0] _result_T_3 = $signed(s1A) * $signed(s1B); // @[src/main/scala/npu/core/GPALU.scala 47:27]
  reg [15:0] s2Result; // @[src/main/scala/npu/core/GPALU.scala 49:27]
  reg [4:0] s2Shift; // @[src/main/scala/npu/core/GPALU.scala 50:26]
  reg  s2Direct; // @[src/main/scala/npu/core/GPALU.scala 51:27]
  reg  s2Valid; // @[src/main/scala/npu/core/GPALU.scala 52:26]
  wire [15:0] shifted = $signed(s2Result) >>> s2Shift; // @[src/main/scala/npu/core/GPALU.scala 54:26]
  wire  _tpuClip_T = $signed(shifted) < -16'sh80; // @[src/main/scala/npu/core/GPALU.scala 55:25]
  wire  _tpuClip_T_1 = $signed(shifted) > 16'sh7f; // @[src/main/scala/npu/core/GPALU.scala 55:47]
  wire  _directClip_T = $signed(s2Result) < -16'sh200; // @[src/main/scala/npu/core/GPALU.scala 56:29]
  wire  _directClip_T_1 = $signed(s2Result) > 16'sh1ff; // @[src/main/scala/npu/core/GPALU.scala 56:52]
  reg  s3Valid; // @[src/main/scala/npu/core/GPALU.scala 62:26]
  reg  s3Direct; // @[src/main/scala/npu/core/GPALU.scala 63:27]
  reg [15:0] io_out_tpu_r; // @[src/main/scala/npu/core/GPALU.scala 65:26]
  reg [15:0] io_out_direct_r; // @[src/main/scala/npu/core/GPALU.scala 66:29]
  wire  _io_out_tpu_valid_T = run & s3Valid; // @[src/main/scala/npu/core/GPALU.scala 67:27]
  assign io_out_tpu = io_out_tpu_r[7:0]; // @[src/main/scala/npu/core/GPALU.scala 65:14]
  assign io_out_direct = io_out_direct_r[9:0]; // @[src/main/scala/npu/core/GPALU.scala 66:17]
  assign io_out_tpu_valid = run & s3Valid & ~s3Direct; // @[src/main/scala/npu/core/GPALU.scala 67:38]
  assign io_out_direct_valid = _io_out_tpu_valid_T & s3Direct; // @[src/main/scala/npu/core/GPALU.scala 68:41]
  assign io_busy = s1Valid | s2Valid | s3Valid; // @[src/main/scala/npu/core/GPALU.scala 70:33]
  always @(posedge clock) begin
    if (run) begin // @[src/main/scala/npu/core/GPALU.scala 38:22]
      s1A <= io_in_a; // @[src/main/scala/npu/core/GPALU.scala 38:22]
    end
    if (run) begin // @[src/main/scala/npu/core/GPALU.scala 39:22]
      s1B <= io_in_b; // @[src/main/scala/npu/core/GPALU.scala 39:22]
    end
    if (run) begin // @[src/main/scala/npu/core/GPALU.scala 40:25]
      if (io_input_mode) begin // @[src/main/scala/npu/core/GPALU.scala 40:29]
        s1Mode <= 2'h1;
      end else begin
        s1Mode <= io_alu_mode;
      end
    end
    if (run) begin // @[src/main/scala/npu/core/GPALU.scala 41:26]
      if (io_input_mode) begin // @[src/main/scala/npu/core/GPALU.scala 41:30]
        s1Shift <= 5'h0;
      end else begin
        s1Shift <= io_out_shift;
      end
    end
    if (run) begin // @[src/main/scala/npu/core/GPALU.scala 42:27]
      s1Direct <= io_input_mode; // @[src/main/scala/npu/core/GPALU.scala 42:27]
    end
    if (reset) begin // @[src/main/scala/npu/core/GPALU.scala 43:26]
      s1Valid <= 1'h0; // @[src/main/scala/npu/core/GPALU.scala 43:26]
    end else if (run) begin // @[src/main/scala/npu/core/GPALU.scala 43:26]
      s1Valid <= io_in_valid; // @[src/main/scala/npu/core/GPALU.scala 43:26]
    end
    if (run) begin // @[src/main/scala/npu/core/GPALU.scala 49:27]
      if (2'h2 == s1Mode) begin // @[src/main/scala/npu/core/GPALU.scala 45:46]
        s2Result <= _result_T_3;
      end else if (2'h1 == s1Mode) begin // @[src/main/scala/npu/core/GPALU.scala 45:46]
        s2Result <= _result_T_2;
      end else begin
        s2Result <= _result_T;
      end
    end
    if (run) begin // @[src/main/scala/npu/core/GPALU.scala 50:26]
      s2Shift <= s1Shift; // @[src/main/scala/npu/core/GPALU.scala 50:26]
    end
    if (run) begin // @[src/main/scala/npu/core/GPALU.scala 51:27]
      s2Direct <= s1Direct; // @[src/main/scala/npu/core/GPALU.scala 51:27]
    end
    if (reset) begin // @[src/main/scala/npu/core/GPALU.scala 52:26]
      s2Valid <= 1'h0; // @[src/main/scala/npu/core/GPALU.scala 52:26]
    end else if (run) begin // @[src/main/scala/npu/core/GPALU.scala 52:26]
      s2Valid <= s1Valid; // @[src/main/scala/npu/core/GPALU.scala 52:26]
    end
    if (reset) begin // @[src/main/scala/npu/core/GPALU.scala 62:26]
      s3Valid <= 1'h0; // @[src/main/scala/npu/core/GPALU.scala 62:26]
    end else if (run) begin // @[src/main/scala/npu/core/GPALU.scala 62:26]
      s3Valid <= s2Valid; // @[src/main/scala/npu/core/GPALU.scala 62:26]
    end
    if (run) begin // @[src/main/scala/npu/core/GPALU.scala 63:27]
      s3Direct <= s2Direct; // @[src/main/scala/npu/core/GPALU.scala 63:27]
    end
    if (run) begin // @[src/main/scala/npu/core/GPALU.scala 65:26]
      if (_tpuClip_T) begin // @[src/main/scala/npu/core/GPALU.scala 57:22]
        io_out_tpu_r <= -16'sh80;
      end else if (_tpuClip_T_1) begin // @[src/main/scala/npu/core/GPALU.scala 58:8]
        io_out_tpu_r <= 16'sh7f;
      end else begin
        io_out_tpu_r <= shifted;
      end
    end
    if (run) begin // @[src/main/scala/npu/core/GPALU.scala 66:29]
      if (_directClip_T) begin // @[src/main/scala/npu/core/GPALU.scala 59:25]
        io_out_direct_r <= -16'sh200;
      end else if (_directClip_T_1) begin // @[src/main/scala/npu/core/GPALU.scala 60:8]
        io_out_direct_r <= 16'sh1ff;
      end else begin
        io_out_direct_r <= s2Result;
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  s1A = _RAND_0[7:0];
  _RAND_1 = {1{`RANDOM}};
  s1B = _RAND_1[7:0];
  _RAND_2 = {1{`RANDOM}};
  s1Mode = _RAND_2[1:0];
  _RAND_3 = {1{`RANDOM}};
  s1Shift = _RAND_3[4:0];
  _RAND_4 = {1{`RANDOM}};
  s1Direct = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  s1Valid = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  s2Result = _RAND_6[15:0];
  _RAND_7 = {1{`RANDOM}};
  s2Shift = _RAND_7[4:0];
  _RAND_8 = {1{`RANDOM}};
  s2Direct = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  s2Valid = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  s3Valid = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  s3Direct = _RAND_11[0:0];
  _RAND_12 = {1{`RANDOM}};
  io_out_tpu_r = _RAND_12[15:0];
  _RAND_13 = {1{`RANDOM}};
  io_out_direct_r = _RAND_13[15:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module GPALUUnit( // @[src/main/scala/npu/core/GPALU.scala 73:7]
  input        clock, // @[src/main/scala/npu/core/GPALU.scala 73:7]
  input        reset, // @[src/main/scala/npu/core/GPALU.scala 73:7]
  input  [7:0] io_in_vec_a_0, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input  [7:0] io_in_vec_a_1, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input  [7:0] io_in_vec_a_2, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input  [7:0] io_in_vec_a_3, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input  [7:0] io_in_vec_a_4, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input  [7:0] io_in_vec_a_5, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input  [7:0] io_in_vec_a_6, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input  [7:0] io_in_vec_a_7, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input  [7:0] io_in_vec_a_8, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input  [7:0] io_in_vec_a_9, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input  [7:0] io_in_vec_a_10, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input  [7:0] io_in_vec_a_11, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input  [7:0] io_in_vec_a_12, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input  [7:0] io_in_vec_a_13, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input  [7:0] io_in_vec_a_14, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input  [7:0] io_in_vec_a_15, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input  [7:0] io_in_vec_b_0, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input  [7:0] io_in_vec_b_1, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input  [7:0] io_in_vec_b_2, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input  [7:0] io_in_vec_b_3, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input  [7:0] io_in_vec_b_4, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input  [7:0] io_in_vec_b_5, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input  [7:0] io_in_vec_b_6, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input  [7:0] io_in_vec_b_7, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input  [7:0] io_in_vec_b_8, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input  [7:0] io_in_vec_b_9, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input  [7:0] io_in_vec_b_10, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input  [7:0] io_in_vec_b_11, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input  [7:0] io_in_vec_b_12, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input  [7:0] io_in_vec_b_13, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input  [7:0] io_in_vec_b_14, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input  [7:0] io_in_vec_b_15, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input        io_in_valid_0, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input        io_in_valid_1, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input        io_in_valid_2, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input        io_in_valid_3, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input        io_in_valid_4, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input        io_in_valid_5, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input        io_in_valid_6, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input        io_in_valid_7, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input        io_in_valid_8, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input        io_in_valid_9, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input        io_in_valid_10, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input        io_in_valid_11, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input        io_in_valid_12, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input        io_in_valid_13, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input        io_in_valid_14, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input        io_in_valid_15, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input        io_input_mode, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input  [1:0] io_alu_mode, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input  [4:0] io_out_shift, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  input        io_stall, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output [7:0] io_out_tpu_0, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output [7:0] io_out_tpu_1, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output [7:0] io_out_tpu_2, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output [7:0] io_out_tpu_3, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output [7:0] io_out_tpu_4, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output [7:0] io_out_tpu_5, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output [7:0] io_out_tpu_6, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output [7:0] io_out_tpu_7, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output [7:0] io_out_tpu_8, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output [7:0] io_out_tpu_9, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output [7:0] io_out_tpu_10, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output [7:0] io_out_tpu_11, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output [7:0] io_out_tpu_12, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output [7:0] io_out_tpu_13, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output [7:0] io_out_tpu_14, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output [7:0] io_out_tpu_15, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output [9:0] io_out_direct_0, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output [9:0] io_out_direct_1, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output [9:0] io_out_direct_2, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output [9:0] io_out_direct_3, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output [9:0] io_out_direct_4, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output [9:0] io_out_direct_5, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output [9:0] io_out_direct_6, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output [9:0] io_out_direct_7, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output [9:0] io_out_direct_8, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output [9:0] io_out_direct_9, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output [9:0] io_out_direct_10, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output [9:0] io_out_direct_11, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output [9:0] io_out_direct_12, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output [9:0] io_out_direct_13, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output [9:0] io_out_direct_14, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output [9:0] io_out_direct_15, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output       io_out_tpu_valid_0, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output       io_out_direct_valid_0, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output       io_out_direct_valid_1, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output       io_out_direct_valid_2, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output       io_out_direct_valid_3, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output       io_out_direct_valid_4, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output       io_out_direct_valid_5, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output       io_out_direct_valid_6, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output       io_out_direct_valid_7, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output       io_out_direct_valid_8, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output       io_out_direct_valid_9, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output       io_out_direct_valid_10, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output       io_out_direct_valid_11, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output       io_out_direct_valid_12, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output       io_out_direct_valid_13, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output       io_out_direct_valid_14, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output       io_out_direct_valid_15, // @[src/main/scala/npu/core/GPALU.scala 81:14]
  output       io_busy // @[src/main/scala/npu/core/GPALU.scala 81:14]
);
  wire  cores_0_clock; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_0_reset; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_0_io_in_a; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_0_io_in_b; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_0_io_in_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_0_io_input_mode; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [1:0] cores_0_io_alu_mode; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [4:0] cores_0_io_out_shift; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_0_io_stall; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_0_io_out_tpu; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [9:0] cores_0_io_out_direct; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_0_io_out_tpu_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_0_io_out_direct_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_0_io_busy; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_1_clock; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_1_reset; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_1_io_in_a; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_1_io_in_b; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_1_io_in_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_1_io_input_mode; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [1:0] cores_1_io_alu_mode; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [4:0] cores_1_io_out_shift; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_1_io_stall; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_1_io_out_tpu; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [9:0] cores_1_io_out_direct; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_1_io_out_tpu_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_1_io_out_direct_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_1_io_busy; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_2_clock; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_2_reset; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_2_io_in_a; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_2_io_in_b; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_2_io_in_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_2_io_input_mode; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [1:0] cores_2_io_alu_mode; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [4:0] cores_2_io_out_shift; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_2_io_stall; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_2_io_out_tpu; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [9:0] cores_2_io_out_direct; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_2_io_out_tpu_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_2_io_out_direct_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_2_io_busy; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_3_clock; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_3_reset; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_3_io_in_a; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_3_io_in_b; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_3_io_in_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_3_io_input_mode; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [1:0] cores_3_io_alu_mode; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [4:0] cores_3_io_out_shift; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_3_io_stall; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_3_io_out_tpu; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [9:0] cores_3_io_out_direct; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_3_io_out_tpu_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_3_io_out_direct_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_3_io_busy; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_4_clock; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_4_reset; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_4_io_in_a; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_4_io_in_b; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_4_io_in_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_4_io_input_mode; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [1:0] cores_4_io_alu_mode; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [4:0] cores_4_io_out_shift; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_4_io_stall; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_4_io_out_tpu; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [9:0] cores_4_io_out_direct; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_4_io_out_tpu_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_4_io_out_direct_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_4_io_busy; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_5_clock; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_5_reset; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_5_io_in_a; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_5_io_in_b; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_5_io_in_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_5_io_input_mode; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [1:0] cores_5_io_alu_mode; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [4:0] cores_5_io_out_shift; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_5_io_stall; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_5_io_out_tpu; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [9:0] cores_5_io_out_direct; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_5_io_out_tpu_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_5_io_out_direct_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_5_io_busy; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_6_clock; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_6_reset; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_6_io_in_a; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_6_io_in_b; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_6_io_in_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_6_io_input_mode; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [1:0] cores_6_io_alu_mode; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [4:0] cores_6_io_out_shift; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_6_io_stall; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_6_io_out_tpu; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [9:0] cores_6_io_out_direct; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_6_io_out_tpu_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_6_io_out_direct_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_6_io_busy; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_7_clock; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_7_reset; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_7_io_in_a; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_7_io_in_b; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_7_io_in_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_7_io_input_mode; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [1:0] cores_7_io_alu_mode; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [4:0] cores_7_io_out_shift; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_7_io_stall; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_7_io_out_tpu; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [9:0] cores_7_io_out_direct; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_7_io_out_tpu_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_7_io_out_direct_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_7_io_busy; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_8_clock; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_8_reset; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_8_io_in_a; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_8_io_in_b; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_8_io_in_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_8_io_input_mode; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [1:0] cores_8_io_alu_mode; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [4:0] cores_8_io_out_shift; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_8_io_stall; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_8_io_out_tpu; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [9:0] cores_8_io_out_direct; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_8_io_out_tpu_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_8_io_out_direct_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_8_io_busy; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_9_clock; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_9_reset; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_9_io_in_a; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_9_io_in_b; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_9_io_in_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_9_io_input_mode; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [1:0] cores_9_io_alu_mode; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [4:0] cores_9_io_out_shift; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_9_io_stall; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_9_io_out_tpu; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [9:0] cores_9_io_out_direct; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_9_io_out_tpu_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_9_io_out_direct_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_9_io_busy; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_10_clock; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_10_reset; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_10_io_in_a; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_10_io_in_b; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_10_io_in_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_10_io_input_mode; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [1:0] cores_10_io_alu_mode; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [4:0] cores_10_io_out_shift; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_10_io_stall; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_10_io_out_tpu; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [9:0] cores_10_io_out_direct; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_10_io_out_tpu_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_10_io_out_direct_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_10_io_busy; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_11_clock; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_11_reset; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_11_io_in_a; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_11_io_in_b; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_11_io_in_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_11_io_input_mode; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [1:0] cores_11_io_alu_mode; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [4:0] cores_11_io_out_shift; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_11_io_stall; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_11_io_out_tpu; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [9:0] cores_11_io_out_direct; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_11_io_out_tpu_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_11_io_out_direct_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_11_io_busy; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_12_clock; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_12_reset; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_12_io_in_a; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_12_io_in_b; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_12_io_in_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_12_io_input_mode; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [1:0] cores_12_io_alu_mode; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [4:0] cores_12_io_out_shift; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_12_io_stall; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_12_io_out_tpu; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [9:0] cores_12_io_out_direct; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_12_io_out_tpu_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_12_io_out_direct_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_12_io_busy; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_13_clock; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_13_reset; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_13_io_in_a; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_13_io_in_b; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_13_io_in_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_13_io_input_mode; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [1:0] cores_13_io_alu_mode; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [4:0] cores_13_io_out_shift; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_13_io_stall; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_13_io_out_tpu; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [9:0] cores_13_io_out_direct; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_13_io_out_tpu_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_13_io_out_direct_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_13_io_busy; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_14_clock; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_14_reset; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_14_io_in_a; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_14_io_in_b; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_14_io_in_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_14_io_input_mode; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [1:0] cores_14_io_alu_mode; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [4:0] cores_14_io_out_shift; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_14_io_stall; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_14_io_out_tpu; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [9:0] cores_14_io_out_direct; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_14_io_out_tpu_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_14_io_out_direct_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_14_io_busy; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_15_clock; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_15_reset; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_15_io_in_a; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_15_io_in_b; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_15_io_in_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_15_io_input_mode; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [1:0] cores_15_io_alu_mode; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [4:0] cores_15_io_out_shift; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_15_io_stall; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [7:0] cores_15_io_out_tpu; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire [9:0] cores_15_io_out_direct; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_15_io_out_tpu_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_15_io_out_direct_valid; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  cores_15_io_busy; // @[src/main/scala/npu/core/GPALU.scala 98:40]
  wire  _io_busy_WIRE_1 = cores_1_io_busy; // @[src/main/scala/npu/core/GPALU.scala 113:{21,21}]
  wire  _io_busy_WIRE_0 = cores_0_io_busy; // @[src/main/scala/npu/core/GPALU.scala 113:{21,21}]
  wire  _io_busy_WIRE_3 = cores_3_io_busy; // @[src/main/scala/npu/core/GPALU.scala 113:{21,21}]
  wire  _io_busy_WIRE_2 = cores_2_io_busy; // @[src/main/scala/npu/core/GPALU.scala 113:{21,21}]
  wire  _io_busy_WIRE_5 = cores_5_io_busy; // @[src/main/scala/npu/core/GPALU.scala 113:{21,21}]
  wire  _io_busy_WIRE_4 = cores_4_io_busy; // @[src/main/scala/npu/core/GPALU.scala 113:{21,21}]
  wire  _io_busy_WIRE_7 = cores_7_io_busy; // @[src/main/scala/npu/core/GPALU.scala 113:{21,21}]
  wire  _io_busy_WIRE_6 = cores_6_io_busy; // @[src/main/scala/npu/core/GPALU.scala 113:{21,21}]
  wire [7:0] io_busy_lo = {_io_busy_WIRE_7,_io_busy_WIRE_6,_io_busy_WIRE_5,_io_busy_WIRE_4,_io_busy_WIRE_3,
    _io_busy_WIRE_2,_io_busy_WIRE_1,_io_busy_WIRE_0}; // @[src/main/scala/npu/core/GPALU.scala 113:44]
  wire  _io_busy_WIRE_9 = cores_9_io_busy; // @[src/main/scala/npu/core/GPALU.scala 113:{21,21}]
  wire  _io_busy_WIRE_8 = cores_8_io_busy; // @[src/main/scala/npu/core/GPALU.scala 113:{21,21}]
  wire  _io_busy_WIRE_11 = cores_11_io_busy; // @[src/main/scala/npu/core/GPALU.scala 113:{21,21}]
  wire  _io_busy_WIRE_10 = cores_10_io_busy; // @[src/main/scala/npu/core/GPALU.scala 113:{21,21}]
  wire  _io_busy_WIRE_13 = cores_13_io_busy; // @[src/main/scala/npu/core/GPALU.scala 113:{21,21}]
  wire  _io_busy_WIRE_12 = cores_12_io_busy; // @[src/main/scala/npu/core/GPALU.scala 113:{21,21}]
  wire  _io_busy_WIRE_15 = cores_15_io_busy; // @[src/main/scala/npu/core/GPALU.scala 113:{21,21}]
  wire  _io_busy_WIRE_14 = cores_14_io_busy; // @[src/main/scala/npu/core/GPALU.scala 113:{21,21}]
  wire [15:0] _io_busy_T = {_io_busy_WIRE_15,_io_busy_WIRE_14,_io_busy_WIRE_13,_io_busy_WIRE_12,_io_busy_WIRE_11,
    _io_busy_WIRE_10,_io_busy_WIRE_9,_io_busy_WIRE_8,io_busy_lo}; // @[src/main/scala/npu/core/GPALU.scala 113:44]
  GPALUCore cores_0 ( // @[src/main/scala/npu/core/GPALU.scala 98:40]
    .clock(cores_0_clock),
    .reset(cores_0_reset),
    .io_in_a(cores_0_io_in_a),
    .io_in_b(cores_0_io_in_b),
    .io_in_valid(cores_0_io_in_valid),
    .io_input_mode(cores_0_io_input_mode),
    .io_alu_mode(cores_0_io_alu_mode),
    .io_out_shift(cores_0_io_out_shift),
    .io_stall(cores_0_io_stall),
    .io_out_tpu(cores_0_io_out_tpu),
    .io_out_direct(cores_0_io_out_direct),
    .io_out_tpu_valid(cores_0_io_out_tpu_valid),
    .io_out_direct_valid(cores_0_io_out_direct_valid),
    .io_busy(cores_0_io_busy)
  );
  GPALUCore cores_1 ( // @[src/main/scala/npu/core/GPALU.scala 98:40]
    .clock(cores_1_clock),
    .reset(cores_1_reset),
    .io_in_a(cores_1_io_in_a),
    .io_in_b(cores_1_io_in_b),
    .io_in_valid(cores_1_io_in_valid),
    .io_input_mode(cores_1_io_input_mode),
    .io_alu_mode(cores_1_io_alu_mode),
    .io_out_shift(cores_1_io_out_shift),
    .io_stall(cores_1_io_stall),
    .io_out_tpu(cores_1_io_out_tpu),
    .io_out_direct(cores_1_io_out_direct),
    .io_out_tpu_valid(cores_1_io_out_tpu_valid),
    .io_out_direct_valid(cores_1_io_out_direct_valid),
    .io_busy(cores_1_io_busy)
  );
  GPALUCore cores_2 ( // @[src/main/scala/npu/core/GPALU.scala 98:40]
    .clock(cores_2_clock),
    .reset(cores_2_reset),
    .io_in_a(cores_2_io_in_a),
    .io_in_b(cores_2_io_in_b),
    .io_in_valid(cores_2_io_in_valid),
    .io_input_mode(cores_2_io_input_mode),
    .io_alu_mode(cores_2_io_alu_mode),
    .io_out_shift(cores_2_io_out_shift),
    .io_stall(cores_2_io_stall),
    .io_out_tpu(cores_2_io_out_tpu),
    .io_out_direct(cores_2_io_out_direct),
    .io_out_tpu_valid(cores_2_io_out_tpu_valid),
    .io_out_direct_valid(cores_2_io_out_direct_valid),
    .io_busy(cores_2_io_busy)
  );
  GPALUCore cores_3 ( // @[src/main/scala/npu/core/GPALU.scala 98:40]
    .clock(cores_3_clock),
    .reset(cores_3_reset),
    .io_in_a(cores_3_io_in_a),
    .io_in_b(cores_3_io_in_b),
    .io_in_valid(cores_3_io_in_valid),
    .io_input_mode(cores_3_io_input_mode),
    .io_alu_mode(cores_3_io_alu_mode),
    .io_out_shift(cores_3_io_out_shift),
    .io_stall(cores_3_io_stall),
    .io_out_tpu(cores_3_io_out_tpu),
    .io_out_direct(cores_3_io_out_direct),
    .io_out_tpu_valid(cores_3_io_out_tpu_valid),
    .io_out_direct_valid(cores_3_io_out_direct_valid),
    .io_busy(cores_3_io_busy)
  );
  GPALUCore cores_4 ( // @[src/main/scala/npu/core/GPALU.scala 98:40]
    .clock(cores_4_clock),
    .reset(cores_4_reset),
    .io_in_a(cores_4_io_in_a),
    .io_in_b(cores_4_io_in_b),
    .io_in_valid(cores_4_io_in_valid),
    .io_input_mode(cores_4_io_input_mode),
    .io_alu_mode(cores_4_io_alu_mode),
    .io_out_shift(cores_4_io_out_shift),
    .io_stall(cores_4_io_stall),
    .io_out_tpu(cores_4_io_out_tpu),
    .io_out_direct(cores_4_io_out_direct),
    .io_out_tpu_valid(cores_4_io_out_tpu_valid),
    .io_out_direct_valid(cores_4_io_out_direct_valid),
    .io_busy(cores_4_io_busy)
  );
  GPALUCore cores_5 ( // @[src/main/scala/npu/core/GPALU.scala 98:40]
    .clock(cores_5_clock),
    .reset(cores_5_reset),
    .io_in_a(cores_5_io_in_a),
    .io_in_b(cores_5_io_in_b),
    .io_in_valid(cores_5_io_in_valid),
    .io_input_mode(cores_5_io_input_mode),
    .io_alu_mode(cores_5_io_alu_mode),
    .io_out_shift(cores_5_io_out_shift),
    .io_stall(cores_5_io_stall),
    .io_out_tpu(cores_5_io_out_tpu),
    .io_out_direct(cores_5_io_out_direct),
    .io_out_tpu_valid(cores_5_io_out_tpu_valid),
    .io_out_direct_valid(cores_5_io_out_direct_valid),
    .io_busy(cores_5_io_busy)
  );
  GPALUCore cores_6 ( // @[src/main/scala/npu/core/GPALU.scala 98:40]
    .clock(cores_6_clock),
    .reset(cores_6_reset),
    .io_in_a(cores_6_io_in_a),
    .io_in_b(cores_6_io_in_b),
    .io_in_valid(cores_6_io_in_valid),
    .io_input_mode(cores_6_io_input_mode),
    .io_alu_mode(cores_6_io_alu_mode),
    .io_out_shift(cores_6_io_out_shift),
    .io_stall(cores_6_io_stall),
    .io_out_tpu(cores_6_io_out_tpu),
    .io_out_direct(cores_6_io_out_direct),
    .io_out_tpu_valid(cores_6_io_out_tpu_valid),
    .io_out_direct_valid(cores_6_io_out_direct_valid),
    .io_busy(cores_6_io_busy)
  );
  GPALUCore cores_7 ( // @[src/main/scala/npu/core/GPALU.scala 98:40]
    .clock(cores_7_clock),
    .reset(cores_7_reset),
    .io_in_a(cores_7_io_in_a),
    .io_in_b(cores_7_io_in_b),
    .io_in_valid(cores_7_io_in_valid),
    .io_input_mode(cores_7_io_input_mode),
    .io_alu_mode(cores_7_io_alu_mode),
    .io_out_shift(cores_7_io_out_shift),
    .io_stall(cores_7_io_stall),
    .io_out_tpu(cores_7_io_out_tpu),
    .io_out_direct(cores_7_io_out_direct),
    .io_out_tpu_valid(cores_7_io_out_tpu_valid),
    .io_out_direct_valid(cores_7_io_out_direct_valid),
    .io_busy(cores_7_io_busy)
  );
  GPALUCore cores_8 ( // @[src/main/scala/npu/core/GPALU.scala 98:40]
    .clock(cores_8_clock),
    .reset(cores_8_reset),
    .io_in_a(cores_8_io_in_a),
    .io_in_b(cores_8_io_in_b),
    .io_in_valid(cores_8_io_in_valid),
    .io_input_mode(cores_8_io_input_mode),
    .io_alu_mode(cores_8_io_alu_mode),
    .io_out_shift(cores_8_io_out_shift),
    .io_stall(cores_8_io_stall),
    .io_out_tpu(cores_8_io_out_tpu),
    .io_out_direct(cores_8_io_out_direct),
    .io_out_tpu_valid(cores_8_io_out_tpu_valid),
    .io_out_direct_valid(cores_8_io_out_direct_valid),
    .io_busy(cores_8_io_busy)
  );
  GPALUCore cores_9 ( // @[src/main/scala/npu/core/GPALU.scala 98:40]
    .clock(cores_9_clock),
    .reset(cores_9_reset),
    .io_in_a(cores_9_io_in_a),
    .io_in_b(cores_9_io_in_b),
    .io_in_valid(cores_9_io_in_valid),
    .io_input_mode(cores_9_io_input_mode),
    .io_alu_mode(cores_9_io_alu_mode),
    .io_out_shift(cores_9_io_out_shift),
    .io_stall(cores_9_io_stall),
    .io_out_tpu(cores_9_io_out_tpu),
    .io_out_direct(cores_9_io_out_direct),
    .io_out_tpu_valid(cores_9_io_out_tpu_valid),
    .io_out_direct_valid(cores_9_io_out_direct_valid),
    .io_busy(cores_9_io_busy)
  );
  GPALUCore cores_10 ( // @[src/main/scala/npu/core/GPALU.scala 98:40]
    .clock(cores_10_clock),
    .reset(cores_10_reset),
    .io_in_a(cores_10_io_in_a),
    .io_in_b(cores_10_io_in_b),
    .io_in_valid(cores_10_io_in_valid),
    .io_input_mode(cores_10_io_input_mode),
    .io_alu_mode(cores_10_io_alu_mode),
    .io_out_shift(cores_10_io_out_shift),
    .io_stall(cores_10_io_stall),
    .io_out_tpu(cores_10_io_out_tpu),
    .io_out_direct(cores_10_io_out_direct),
    .io_out_tpu_valid(cores_10_io_out_tpu_valid),
    .io_out_direct_valid(cores_10_io_out_direct_valid),
    .io_busy(cores_10_io_busy)
  );
  GPALUCore cores_11 ( // @[src/main/scala/npu/core/GPALU.scala 98:40]
    .clock(cores_11_clock),
    .reset(cores_11_reset),
    .io_in_a(cores_11_io_in_a),
    .io_in_b(cores_11_io_in_b),
    .io_in_valid(cores_11_io_in_valid),
    .io_input_mode(cores_11_io_input_mode),
    .io_alu_mode(cores_11_io_alu_mode),
    .io_out_shift(cores_11_io_out_shift),
    .io_stall(cores_11_io_stall),
    .io_out_tpu(cores_11_io_out_tpu),
    .io_out_direct(cores_11_io_out_direct),
    .io_out_tpu_valid(cores_11_io_out_tpu_valid),
    .io_out_direct_valid(cores_11_io_out_direct_valid),
    .io_busy(cores_11_io_busy)
  );
  GPALUCore cores_12 ( // @[src/main/scala/npu/core/GPALU.scala 98:40]
    .clock(cores_12_clock),
    .reset(cores_12_reset),
    .io_in_a(cores_12_io_in_a),
    .io_in_b(cores_12_io_in_b),
    .io_in_valid(cores_12_io_in_valid),
    .io_input_mode(cores_12_io_input_mode),
    .io_alu_mode(cores_12_io_alu_mode),
    .io_out_shift(cores_12_io_out_shift),
    .io_stall(cores_12_io_stall),
    .io_out_tpu(cores_12_io_out_tpu),
    .io_out_direct(cores_12_io_out_direct),
    .io_out_tpu_valid(cores_12_io_out_tpu_valid),
    .io_out_direct_valid(cores_12_io_out_direct_valid),
    .io_busy(cores_12_io_busy)
  );
  GPALUCore cores_13 ( // @[src/main/scala/npu/core/GPALU.scala 98:40]
    .clock(cores_13_clock),
    .reset(cores_13_reset),
    .io_in_a(cores_13_io_in_a),
    .io_in_b(cores_13_io_in_b),
    .io_in_valid(cores_13_io_in_valid),
    .io_input_mode(cores_13_io_input_mode),
    .io_alu_mode(cores_13_io_alu_mode),
    .io_out_shift(cores_13_io_out_shift),
    .io_stall(cores_13_io_stall),
    .io_out_tpu(cores_13_io_out_tpu),
    .io_out_direct(cores_13_io_out_direct),
    .io_out_tpu_valid(cores_13_io_out_tpu_valid),
    .io_out_direct_valid(cores_13_io_out_direct_valid),
    .io_busy(cores_13_io_busy)
  );
  GPALUCore cores_14 ( // @[src/main/scala/npu/core/GPALU.scala 98:40]
    .clock(cores_14_clock),
    .reset(cores_14_reset),
    .io_in_a(cores_14_io_in_a),
    .io_in_b(cores_14_io_in_b),
    .io_in_valid(cores_14_io_in_valid),
    .io_input_mode(cores_14_io_input_mode),
    .io_alu_mode(cores_14_io_alu_mode),
    .io_out_shift(cores_14_io_out_shift),
    .io_stall(cores_14_io_stall),
    .io_out_tpu(cores_14_io_out_tpu),
    .io_out_direct(cores_14_io_out_direct),
    .io_out_tpu_valid(cores_14_io_out_tpu_valid),
    .io_out_direct_valid(cores_14_io_out_direct_valid),
    .io_busy(cores_14_io_busy)
  );
  GPALUCore cores_15 ( // @[src/main/scala/npu/core/GPALU.scala 98:40]
    .clock(cores_15_clock),
    .reset(cores_15_reset),
    .io_in_a(cores_15_io_in_a),
    .io_in_b(cores_15_io_in_b),
    .io_in_valid(cores_15_io_in_valid),
    .io_input_mode(cores_15_io_input_mode),
    .io_alu_mode(cores_15_io_alu_mode),
    .io_out_shift(cores_15_io_out_shift),
    .io_stall(cores_15_io_stall),
    .io_out_tpu(cores_15_io_out_tpu),
    .io_out_direct(cores_15_io_out_direct),
    .io_out_tpu_valid(cores_15_io_out_tpu_valid),
    .io_out_direct_valid(cores_15_io_out_direct_valid),
    .io_busy(cores_15_io_busy)
  );
  assign io_out_tpu_0 = cores_0_io_out_tpu; // @[src/main/scala/npu/core/GPALU.scala 107:19]
  assign io_out_tpu_1 = cores_1_io_out_tpu; // @[src/main/scala/npu/core/GPALU.scala 107:19]
  assign io_out_tpu_2 = cores_2_io_out_tpu; // @[src/main/scala/npu/core/GPALU.scala 107:19]
  assign io_out_tpu_3 = cores_3_io_out_tpu; // @[src/main/scala/npu/core/GPALU.scala 107:19]
  assign io_out_tpu_4 = cores_4_io_out_tpu; // @[src/main/scala/npu/core/GPALU.scala 107:19]
  assign io_out_tpu_5 = cores_5_io_out_tpu; // @[src/main/scala/npu/core/GPALU.scala 107:19]
  assign io_out_tpu_6 = cores_6_io_out_tpu; // @[src/main/scala/npu/core/GPALU.scala 107:19]
  assign io_out_tpu_7 = cores_7_io_out_tpu; // @[src/main/scala/npu/core/GPALU.scala 107:19]
  assign io_out_tpu_8 = cores_8_io_out_tpu; // @[src/main/scala/npu/core/GPALU.scala 107:19]
  assign io_out_tpu_9 = cores_9_io_out_tpu; // @[src/main/scala/npu/core/GPALU.scala 107:19]
  assign io_out_tpu_10 = cores_10_io_out_tpu; // @[src/main/scala/npu/core/GPALU.scala 107:19]
  assign io_out_tpu_11 = cores_11_io_out_tpu; // @[src/main/scala/npu/core/GPALU.scala 107:19]
  assign io_out_tpu_12 = cores_12_io_out_tpu; // @[src/main/scala/npu/core/GPALU.scala 107:19]
  assign io_out_tpu_13 = cores_13_io_out_tpu; // @[src/main/scala/npu/core/GPALU.scala 107:19]
  assign io_out_tpu_14 = cores_14_io_out_tpu; // @[src/main/scala/npu/core/GPALU.scala 107:19]
  assign io_out_tpu_15 = cores_15_io_out_tpu; // @[src/main/scala/npu/core/GPALU.scala 107:19]
  assign io_out_direct_0 = cores_0_io_out_direct; // @[src/main/scala/npu/core/GPALU.scala 108:22]
  assign io_out_direct_1 = cores_1_io_out_direct; // @[src/main/scala/npu/core/GPALU.scala 108:22]
  assign io_out_direct_2 = cores_2_io_out_direct; // @[src/main/scala/npu/core/GPALU.scala 108:22]
  assign io_out_direct_3 = cores_3_io_out_direct; // @[src/main/scala/npu/core/GPALU.scala 108:22]
  assign io_out_direct_4 = cores_4_io_out_direct; // @[src/main/scala/npu/core/GPALU.scala 108:22]
  assign io_out_direct_5 = cores_5_io_out_direct; // @[src/main/scala/npu/core/GPALU.scala 108:22]
  assign io_out_direct_6 = cores_6_io_out_direct; // @[src/main/scala/npu/core/GPALU.scala 108:22]
  assign io_out_direct_7 = cores_7_io_out_direct; // @[src/main/scala/npu/core/GPALU.scala 108:22]
  assign io_out_direct_8 = cores_8_io_out_direct; // @[src/main/scala/npu/core/GPALU.scala 108:22]
  assign io_out_direct_9 = cores_9_io_out_direct; // @[src/main/scala/npu/core/GPALU.scala 108:22]
  assign io_out_direct_10 = cores_10_io_out_direct; // @[src/main/scala/npu/core/GPALU.scala 108:22]
  assign io_out_direct_11 = cores_11_io_out_direct; // @[src/main/scala/npu/core/GPALU.scala 108:22]
  assign io_out_direct_12 = cores_12_io_out_direct; // @[src/main/scala/npu/core/GPALU.scala 108:22]
  assign io_out_direct_13 = cores_13_io_out_direct; // @[src/main/scala/npu/core/GPALU.scala 108:22]
  assign io_out_direct_14 = cores_14_io_out_direct; // @[src/main/scala/npu/core/GPALU.scala 108:22]
  assign io_out_direct_15 = cores_15_io_out_direct; // @[src/main/scala/npu/core/GPALU.scala 108:22]
  assign io_out_tpu_valid_0 = cores_0_io_out_tpu_valid; // @[src/main/scala/npu/core/GPALU.scala 109:25]
  assign io_out_direct_valid_0 = cores_0_io_out_direct_valid; // @[src/main/scala/npu/core/GPALU.scala 110:28]
  assign io_out_direct_valid_1 = cores_1_io_out_direct_valid; // @[src/main/scala/npu/core/GPALU.scala 110:28]
  assign io_out_direct_valid_2 = cores_2_io_out_direct_valid; // @[src/main/scala/npu/core/GPALU.scala 110:28]
  assign io_out_direct_valid_3 = cores_3_io_out_direct_valid; // @[src/main/scala/npu/core/GPALU.scala 110:28]
  assign io_out_direct_valid_4 = cores_4_io_out_direct_valid; // @[src/main/scala/npu/core/GPALU.scala 110:28]
  assign io_out_direct_valid_5 = cores_5_io_out_direct_valid; // @[src/main/scala/npu/core/GPALU.scala 110:28]
  assign io_out_direct_valid_6 = cores_6_io_out_direct_valid; // @[src/main/scala/npu/core/GPALU.scala 110:28]
  assign io_out_direct_valid_7 = cores_7_io_out_direct_valid; // @[src/main/scala/npu/core/GPALU.scala 110:28]
  assign io_out_direct_valid_8 = cores_8_io_out_direct_valid; // @[src/main/scala/npu/core/GPALU.scala 110:28]
  assign io_out_direct_valid_9 = cores_9_io_out_direct_valid; // @[src/main/scala/npu/core/GPALU.scala 110:28]
  assign io_out_direct_valid_10 = cores_10_io_out_direct_valid; // @[src/main/scala/npu/core/GPALU.scala 110:28]
  assign io_out_direct_valid_11 = cores_11_io_out_direct_valid; // @[src/main/scala/npu/core/GPALU.scala 110:28]
  assign io_out_direct_valid_12 = cores_12_io_out_direct_valid; // @[src/main/scala/npu/core/GPALU.scala 110:28]
  assign io_out_direct_valid_13 = cores_13_io_out_direct_valid; // @[src/main/scala/npu/core/GPALU.scala 110:28]
  assign io_out_direct_valid_14 = cores_14_io_out_direct_valid; // @[src/main/scala/npu/core/GPALU.scala 110:28]
  assign io_out_direct_valid_15 = cores_15_io_out_direct_valid; // @[src/main/scala/npu/core/GPALU.scala 110:28]
  assign io_busy = |_io_busy_T; // @[src/main/scala/npu/core/GPALU.scala 113:51]
  assign cores_0_clock = clock;
  assign cores_0_reset = reset;
  assign cores_0_io_in_a = io_in_vec_a_0; // @[src/main/scala/npu/core/GPALU.scala 100:22]
  assign cores_0_io_in_b = io_in_vec_b_0; // @[src/main/scala/npu/core/GPALU.scala 101:22]
  assign cores_0_io_in_valid = io_in_valid_0; // @[src/main/scala/npu/core/GPALU.scala 102:26]
  assign cores_0_io_input_mode = io_input_mode; // @[src/main/scala/npu/core/GPALU.scala 103:28]
  assign cores_0_io_alu_mode = io_alu_mode; // @[src/main/scala/npu/core/GPALU.scala 104:26]
  assign cores_0_io_out_shift = io_out_shift; // @[src/main/scala/npu/core/GPALU.scala 105:27]
  assign cores_0_io_stall = io_stall; // @[src/main/scala/npu/core/GPALU.scala 106:23]
  assign cores_1_clock = clock;
  assign cores_1_reset = reset;
  assign cores_1_io_in_a = io_in_vec_a_1; // @[src/main/scala/npu/core/GPALU.scala 100:22]
  assign cores_1_io_in_b = io_in_vec_b_1; // @[src/main/scala/npu/core/GPALU.scala 101:22]
  assign cores_1_io_in_valid = io_in_valid_1; // @[src/main/scala/npu/core/GPALU.scala 102:26]
  assign cores_1_io_input_mode = io_input_mode; // @[src/main/scala/npu/core/GPALU.scala 103:28]
  assign cores_1_io_alu_mode = io_alu_mode; // @[src/main/scala/npu/core/GPALU.scala 104:26]
  assign cores_1_io_out_shift = io_out_shift; // @[src/main/scala/npu/core/GPALU.scala 105:27]
  assign cores_1_io_stall = io_stall; // @[src/main/scala/npu/core/GPALU.scala 106:23]
  assign cores_2_clock = clock;
  assign cores_2_reset = reset;
  assign cores_2_io_in_a = io_in_vec_a_2; // @[src/main/scala/npu/core/GPALU.scala 100:22]
  assign cores_2_io_in_b = io_in_vec_b_2; // @[src/main/scala/npu/core/GPALU.scala 101:22]
  assign cores_2_io_in_valid = io_in_valid_2; // @[src/main/scala/npu/core/GPALU.scala 102:26]
  assign cores_2_io_input_mode = io_input_mode; // @[src/main/scala/npu/core/GPALU.scala 103:28]
  assign cores_2_io_alu_mode = io_alu_mode; // @[src/main/scala/npu/core/GPALU.scala 104:26]
  assign cores_2_io_out_shift = io_out_shift; // @[src/main/scala/npu/core/GPALU.scala 105:27]
  assign cores_2_io_stall = io_stall; // @[src/main/scala/npu/core/GPALU.scala 106:23]
  assign cores_3_clock = clock;
  assign cores_3_reset = reset;
  assign cores_3_io_in_a = io_in_vec_a_3; // @[src/main/scala/npu/core/GPALU.scala 100:22]
  assign cores_3_io_in_b = io_in_vec_b_3; // @[src/main/scala/npu/core/GPALU.scala 101:22]
  assign cores_3_io_in_valid = io_in_valid_3; // @[src/main/scala/npu/core/GPALU.scala 102:26]
  assign cores_3_io_input_mode = io_input_mode; // @[src/main/scala/npu/core/GPALU.scala 103:28]
  assign cores_3_io_alu_mode = io_alu_mode; // @[src/main/scala/npu/core/GPALU.scala 104:26]
  assign cores_3_io_out_shift = io_out_shift; // @[src/main/scala/npu/core/GPALU.scala 105:27]
  assign cores_3_io_stall = io_stall; // @[src/main/scala/npu/core/GPALU.scala 106:23]
  assign cores_4_clock = clock;
  assign cores_4_reset = reset;
  assign cores_4_io_in_a = io_in_vec_a_4; // @[src/main/scala/npu/core/GPALU.scala 100:22]
  assign cores_4_io_in_b = io_in_vec_b_4; // @[src/main/scala/npu/core/GPALU.scala 101:22]
  assign cores_4_io_in_valid = io_in_valid_4; // @[src/main/scala/npu/core/GPALU.scala 102:26]
  assign cores_4_io_input_mode = io_input_mode; // @[src/main/scala/npu/core/GPALU.scala 103:28]
  assign cores_4_io_alu_mode = io_alu_mode; // @[src/main/scala/npu/core/GPALU.scala 104:26]
  assign cores_4_io_out_shift = io_out_shift; // @[src/main/scala/npu/core/GPALU.scala 105:27]
  assign cores_4_io_stall = io_stall; // @[src/main/scala/npu/core/GPALU.scala 106:23]
  assign cores_5_clock = clock;
  assign cores_5_reset = reset;
  assign cores_5_io_in_a = io_in_vec_a_5; // @[src/main/scala/npu/core/GPALU.scala 100:22]
  assign cores_5_io_in_b = io_in_vec_b_5; // @[src/main/scala/npu/core/GPALU.scala 101:22]
  assign cores_5_io_in_valid = io_in_valid_5; // @[src/main/scala/npu/core/GPALU.scala 102:26]
  assign cores_5_io_input_mode = io_input_mode; // @[src/main/scala/npu/core/GPALU.scala 103:28]
  assign cores_5_io_alu_mode = io_alu_mode; // @[src/main/scala/npu/core/GPALU.scala 104:26]
  assign cores_5_io_out_shift = io_out_shift; // @[src/main/scala/npu/core/GPALU.scala 105:27]
  assign cores_5_io_stall = io_stall; // @[src/main/scala/npu/core/GPALU.scala 106:23]
  assign cores_6_clock = clock;
  assign cores_6_reset = reset;
  assign cores_6_io_in_a = io_in_vec_a_6; // @[src/main/scala/npu/core/GPALU.scala 100:22]
  assign cores_6_io_in_b = io_in_vec_b_6; // @[src/main/scala/npu/core/GPALU.scala 101:22]
  assign cores_6_io_in_valid = io_in_valid_6; // @[src/main/scala/npu/core/GPALU.scala 102:26]
  assign cores_6_io_input_mode = io_input_mode; // @[src/main/scala/npu/core/GPALU.scala 103:28]
  assign cores_6_io_alu_mode = io_alu_mode; // @[src/main/scala/npu/core/GPALU.scala 104:26]
  assign cores_6_io_out_shift = io_out_shift; // @[src/main/scala/npu/core/GPALU.scala 105:27]
  assign cores_6_io_stall = io_stall; // @[src/main/scala/npu/core/GPALU.scala 106:23]
  assign cores_7_clock = clock;
  assign cores_7_reset = reset;
  assign cores_7_io_in_a = io_in_vec_a_7; // @[src/main/scala/npu/core/GPALU.scala 100:22]
  assign cores_7_io_in_b = io_in_vec_b_7; // @[src/main/scala/npu/core/GPALU.scala 101:22]
  assign cores_7_io_in_valid = io_in_valid_7; // @[src/main/scala/npu/core/GPALU.scala 102:26]
  assign cores_7_io_input_mode = io_input_mode; // @[src/main/scala/npu/core/GPALU.scala 103:28]
  assign cores_7_io_alu_mode = io_alu_mode; // @[src/main/scala/npu/core/GPALU.scala 104:26]
  assign cores_7_io_out_shift = io_out_shift; // @[src/main/scala/npu/core/GPALU.scala 105:27]
  assign cores_7_io_stall = io_stall; // @[src/main/scala/npu/core/GPALU.scala 106:23]
  assign cores_8_clock = clock;
  assign cores_8_reset = reset;
  assign cores_8_io_in_a = io_in_vec_a_8; // @[src/main/scala/npu/core/GPALU.scala 100:22]
  assign cores_8_io_in_b = io_in_vec_b_8; // @[src/main/scala/npu/core/GPALU.scala 101:22]
  assign cores_8_io_in_valid = io_in_valid_8; // @[src/main/scala/npu/core/GPALU.scala 102:26]
  assign cores_8_io_input_mode = io_input_mode; // @[src/main/scala/npu/core/GPALU.scala 103:28]
  assign cores_8_io_alu_mode = io_alu_mode; // @[src/main/scala/npu/core/GPALU.scala 104:26]
  assign cores_8_io_out_shift = io_out_shift; // @[src/main/scala/npu/core/GPALU.scala 105:27]
  assign cores_8_io_stall = io_stall; // @[src/main/scala/npu/core/GPALU.scala 106:23]
  assign cores_9_clock = clock;
  assign cores_9_reset = reset;
  assign cores_9_io_in_a = io_in_vec_a_9; // @[src/main/scala/npu/core/GPALU.scala 100:22]
  assign cores_9_io_in_b = io_in_vec_b_9; // @[src/main/scala/npu/core/GPALU.scala 101:22]
  assign cores_9_io_in_valid = io_in_valid_9; // @[src/main/scala/npu/core/GPALU.scala 102:26]
  assign cores_9_io_input_mode = io_input_mode; // @[src/main/scala/npu/core/GPALU.scala 103:28]
  assign cores_9_io_alu_mode = io_alu_mode; // @[src/main/scala/npu/core/GPALU.scala 104:26]
  assign cores_9_io_out_shift = io_out_shift; // @[src/main/scala/npu/core/GPALU.scala 105:27]
  assign cores_9_io_stall = io_stall; // @[src/main/scala/npu/core/GPALU.scala 106:23]
  assign cores_10_clock = clock;
  assign cores_10_reset = reset;
  assign cores_10_io_in_a = io_in_vec_a_10; // @[src/main/scala/npu/core/GPALU.scala 100:22]
  assign cores_10_io_in_b = io_in_vec_b_10; // @[src/main/scala/npu/core/GPALU.scala 101:22]
  assign cores_10_io_in_valid = io_in_valid_10; // @[src/main/scala/npu/core/GPALU.scala 102:26]
  assign cores_10_io_input_mode = io_input_mode; // @[src/main/scala/npu/core/GPALU.scala 103:28]
  assign cores_10_io_alu_mode = io_alu_mode; // @[src/main/scala/npu/core/GPALU.scala 104:26]
  assign cores_10_io_out_shift = io_out_shift; // @[src/main/scala/npu/core/GPALU.scala 105:27]
  assign cores_10_io_stall = io_stall; // @[src/main/scala/npu/core/GPALU.scala 106:23]
  assign cores_11_clock = clock;
  assign cores_11_reset = reset;
  assign cores_11_io_in_a = io_in_vec_a_11; // @[src/main/scala/npu/core/GPALU.scala 100:22]
  assign cores_11_io_in_b = io_in_vec_b_11; // @[src/main/scala/npu/core/GPALU.scala 101:22]
  assign cores_11_io_in_valid = io_in_valid_11; // @[src/main/scala/npu/core/GPALU.scala 102:26]
  assign cores_11_io_input_mode = io_input_mode; // @[src/main/scala/npu/core/GPALU.scala 103:28]
  assign cores_11_io_alu_mode = io_alu_mode; // @[src/main/scala/npu/core/GPALU.scala 104:26]
  assign cores_11_io_out_shift = io_out_shift; // @[src/main/scala/npu/core/GPALU.scala 105:27]
  assign cores_11_io_stall = io_stall; // @[src/main/scala/npu/core/GPALU.scala 106:23]
  assign cores_12_clock = clock;
  assign cores_12_reset = reset;
  assign cores_12_io_in_a = io_in_vec_a_12; // @[src/main/scala/npu/core/GPALU.scala 100:22]
  assign cores_12_io_in_b = io_in_vec_b_12; // @[src/main/scala/npu/core/GPALU.scala 101:22]
  assign cores_12_io_in_valid = io_in_valid_12; // @[src/main/scala/npu/core/GPALU.scala 102:26]
  assign cores_12_io_input_mode = io_input_mode; // @[src/main/scala/npu/core/GPALU.scala 103:28]
  assign cores_12_io_alu_mode = io_alu_mode; // @[src/main/scala/npu/core/GPALU.scala 104:26]
  assign cores_12_io_out_shift = io_out_shift; // @[src/main/scala/npu/core/GPALU.scala 105:27]
  assign cores_12_io_stall = io_stall; // @[src/main/scala/npu/core/GPALU.scala 106:23]
  assign cores_13_clock = clock;
  assign cores_13_reset = reset;
  assign cores_13_io_in_a = io_in_vec_a_13; // @[src/main/scala/npu/core/GPALU.scala 100:22]
  assign cores_13_io_in_b = io_in_vec_b_13; // @[src/main/scala/npu/core/GPALU.scala 101:22]
  assign cores_13_io_in_valid = io_in_valid_13; // @[src/main/scala/npu/core/GPALU.scala 102:26]
  assign cores_13_io_input_mode = io_input_mode; // @[src/main/scala/npu/core/GPALU.scala 103:28]
  assign cores_13_io_alu_mode = io_alu_mode; // @[src/main/scala/npu/core/GPALU.scala 104:26]
  assign cores_13_io_out_shift = io_out_shift; // @[src/main/scala/npu/core/GPALU.scala 105:27]
  assign cores_13_io_stall = io_stall; // @[src/main/scala/npu/core/GPALU.scala 106:23]
  assign cores_14_clock = clock;
  assign cores_14_reset = reset;
  assign cores_14_io_in_a = io_in_vec_a_14; // @[src/main/scala/npu/core/GPALU.scala 100:22]
  assign cores_14_io_in_b = io_in_vec_b_14; // @[src/main/scala/npu/core/GPALU.scala 101:22]
  assign cores_14_io_in_valid = io_in_valid_14; // @[src/main/scala/npu/core/GPALU.scala 102:26]
  assign cores_14_io_input_mode = io_input_mode; // @[src/main/scala/npu/core/GPALU.scala 103:28]
  assign cores_14_io_alu_mode = io_alu_mode; // @[src/main/scala/npu/core/GPALU.scala 104:26]
  assign cores_14_io_out_shift = io_out_shift; // @[src/main/scala/npu/core/GPALU.scala 105:27]
  assign cores_14_io_stall = io_stall; // @[src/main/scala/npu/core/GPALU.scala 106:23]
  assign cores_15_clock = clock;
  assign cores_15_reset = reset;
  assign cores_15_io_in_a = io_in_vec_a_15; // @[src/main/scala/npu/core/GPALU.scala 100:22]
  assign cores_15_io_in_b = io_in_vec_b_15; // @[src/main/scala/npu/core/GPALU.scala 101:22]
  assign cores_15_io_in_valid = io_in_valid_15; // @[src/main/scala/npu/core/GPALU.scala 102:26]
  assign cores_15_io_input_mode = io_input_mode; // @[src/main/scala/npu/core/GPALU.scala 103:28]
  assign cores_15_io_alu_mode = io_alu_mode; // @[src/main/scala/npu/core/GPALU.scala 104:26]
  assign cores_15_io_out_shift = io_out_shift; // @[src/main/scala/npu/core/GPALU.scala 105:27]
  assign cores_15_io_stall = io_stall; // @[src/main/scala/npu/core/GPALU.scala 106:23]
endmodule
module VPU1RouteHarness( // @[src/test/scala/VPU1Route_Test.scala 12:7]
  input         clock, // @[src/test/scala/VPU1Route_Test.scala 12:7]
  input         reset, // @[src/test/scala/VPU1Route_Test.scala 12:7]
  input  [31:0] io_tpu_0, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [31:0] io_tpu_1, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [31:0] io_tpu_2, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [31:0] io_tpu_3, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [31:0] io_tpu_4, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [31:0] io_tpu_5, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [31:0] io_tpu_6, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [31:0] io_tpu_7, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [31:0] io_tpu_8, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [31:0] io_tpu_9, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [31:0] io_tpu_10, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [31:0] io_tpu_11, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [31:0] io_tpu_12, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [31:0] io_tpu_13, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [31:0] io_tpu_14, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [31:0] io_tpu_15, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input         io_tpu_valid, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_ub_0, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_ub_1, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_ub_2, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_ub_3, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_ub_4, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_ub_5, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_ub_6, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_ub_7, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_ub_8, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_ub_9, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_ub_10, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_ub_11, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_ub_12, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_ub_13, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_ub_14, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_ub_15, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_wb_0, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_wb_1, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_wb_2, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_wb_3, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_wb_4, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_wb_5, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_wb_6, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_wb_7, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_wb_8, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_wb_9, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_wb_10, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_wb_11, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_wb_12, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_wb_13, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_wb_14, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_wb_15, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input         io_ub_valid, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input         io_wb_valid, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_vb_read_data_0, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_vb_read_data_1, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_vb_read_data_2, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_vb_read_data_3, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_vb_read_data_4, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_vb_read_data_5, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_vb_read_data_6, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_vb_read_data_7, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_vb_read_data_8, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_vb_read_data_9, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_vb_read_data_10, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_vb_read_data_11, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_vb_read_data_12, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_vb_read_data_13, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_vb_read_data_14, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_vb_read_data_15, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  output        io_vb_read_req, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input         io_input_mode, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [1:0]  io_output_route, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [1:0]  io_alu_mode, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [4:0]  io_out_shift, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [1:0]  io_act_mask, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input         io_fusion_second, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [31:0] io_matrix_param, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input         io_stall, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input         io_lut_wr_en, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [5:0]  io_lut_wr_addr, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_lut_wr_data_0, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_lut_wr_data_1, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_lut_wr_data_2, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_lut_wr_data_3, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_lut_wr_data_4, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_lut_wr_data_5, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_lut_wr_data_6, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_lut_wr_data_7, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_lut_wr_data_8, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_lut_wr_data_9, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_lut_wr_data_10, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_lut_wr_data_11, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_lut_wr_data_12, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_lut_wr_data_13, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_lut_wr_data_14, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  input  [7:0]  io_lut_wr_data_15, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  output [7:0]  io_result_0, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  output [7:0]  io_result_1, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  output [7:0]  io_result_2, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  output [7:0]  io_result_3, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  output [7:0]  io_result_4, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  output [7:0]  io_result_5, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  output [7:0]  io_result_6, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  output [7:0]  io_result_7, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  output [7:0]  io_result_8, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  output [7:0]  io_result_9, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  output [7:0]  io_result_10, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  output [7:0]  io_result_11, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  output [7:0]  io_result_12, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  output [7:0]  io_result_13, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  output [7:0]  io_result_14, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  output [7:0]  io_result_15, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  output        io_vb_valid, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  output        io_vpu2_valid, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  output        io_compute_valid, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  output        io_result_valid, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  output        io_drained, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  output        io_control_alert, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  output        io_sync_alert, // @[src/test/scala/VPU1Route_Test.scala 13:14]
  output        io_qparam_req // @[src/test/scala/VPU1Route_Test.scala 13:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
`endif // RANDOMIZE_REG_INIT
  wire  qa_clock; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire  qa_reset; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [31:0] qa_io_in_tpu_0; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [31:0] qa_io_in_tpu_1; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [31:0] qa_io_in_tpu_2; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [31:0] qa_io_in_tpu_3; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [31:0] qa_io_in_tpu_4; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [31:0] qa_io_in_tpu_5; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [31:0] qa_io_in_tpu_6; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [31:0] qa_io_in_tpu_7; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [31:0] qa_io_in_tpu_8; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [31:0] qa_io_in_tpu_9; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [31:0] qa_io_in_tpu_10; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [31:0] qa_io_in_tpu_11; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [31:0] qa_io_in_tpu_12; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [31:0] qa_io_in_tpu_13; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [31:0] qa_io_in_tpu_14; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [31:0] qa_io_in_tpu_15; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [9:0] qa_io_in_direct_0; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [9:0] qa_io_in_direct_1; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [9:0] qa_io_in_direct_2; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [9:0] qa_io_in_direct_3; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [9:0] qa_io_in_direct_4; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [9:0] qa_io_in_direct_5; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [9:0] qa_io_in_direct_6; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [9:0] qa_io_in_direct_7; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [9:0] qa_io_in_direct_8; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [9:0] qa_io_in_direct_9; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [9:0] qa_io_in_direct_10; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [9:0] qa_io_in_direct_11; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [9:0] qa_io_in_direct_12; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [9:0] qa_io_in_direct_13; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [9:0] qa_io_in_direct_14; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [9:0] qa_io_in_direct_15; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire  qa_io_input_mode; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire  qa_io_in_valid_0; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire  qa_io_in_valid_1; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire  qa_io_in_valid_2; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire  qa_io_in_valid_3; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire  qa_io_in_valid_4; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire  qa_io_in_valid_5; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire  qa_io_in_valid_6; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire  qa_io_in_valid_7; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire  qa_io_in_valid_8; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire  qa_io_in_valid_9; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire  qa_io_in_valid_10; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire  qa_io_in_valid_11; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire  qa_io_in_valid_12; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire  qa_io_in_valid_13; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire  qa_io_in_valid_14; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire  qa_io_in_valid_15; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [31:0] qa_io_matrix_param; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [1:0] qa_io_act_mask; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire  qa_io_fusion_second; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire  qa_io_stall; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire  qa_io_lut_wr_en; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [5:0] qa_io_lut_wr_addr; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [7:0] qa_io_lut_wr_data_0; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [7:0] qa_io_lut_wr_data_1; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [7:0] qa_io_lut_wr_data_2; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [7:0] qa_io_lut_wr_data_3; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [7:0] qa_io_lut_wr_data_4; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [7:0] qa_io_lut_wr_data_5; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [7:0] qa_io_lut_wr_data_6; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [7:0] qa_io_lut_wr_data_7; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [7:0] qa_io_lut_wr_data_8; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [7:0] qa_io_lut_wr_data_9; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [7:0] qa_io_lut_wr_data_10; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [7:0] qa_io_lut_wr_data_11; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [7:0] qa_io_lut_wr_data_12; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [7:0] qa_io_lut_wr_data_13; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [7:0] qa_io_lut_wr_data_14; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [7:0] qa_io_lut_wr_data_15; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [7:0] qa_io_out_vec_0; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [7:0] qa_io_out_vec_1; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [7:0] qa_io_out_vec_2; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [7:0] qa_io_out_vec_3; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [7:0] qa_io_out_vec_4; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [7:0] qa_io_out_vec_5; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [7:0] qa_io_out_vec_6; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [7:0] qa_io_out_vec_7; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [7:0] qa_io_out_vec_8; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [7:0] qa_io_out_vec_9; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [7:0] qa_io_out_vec_10; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [7:0] qa_io_out_vec_11; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [7:0] qa_io_out_vec_12; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [7:0] qa_io_out_vec_13; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [7:0] qa_io_out_vec_14; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire [7:0] qa_io_out_vec_15; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire  qa_io_out_valid_0; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire  qa_io_out_valid_1; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire  qa_io_out_valid_2; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire  qa_io_out_valid_3; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire  qa_io_out_valid_4; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire  qa_io_out_valid_5; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire  qa_io_out_valid_6; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire  qa_io_out_valid_7; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire  qa_io_out_valid_8; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire  qa_io_out_valid_9; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire  qa_io_out_valid_10; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire  qa_io_out_valid_11; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire  qa_io_out_valid_12; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire  qa_io_out_valid_13; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire  qa_io_out_valid_14; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire  qa_io_out_valid_15; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire  qa_io_out_lookahead_0; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire  qa_io_busy; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire  qa_io_sync_alert; // @[src/test/scala/VPU1Route_Test.scala 46:18]
  wire  alu_clock; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire  alu_reset; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_in_vec_a_0; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_in_vec_a_1; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_in_vec_a_2; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_in_vec_a_3; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_in_vec_a_4; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_in_vec_a_5; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_in_vec_a_6; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_in_vec_a_7; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_in_vec_a_8; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_in_vec_a_9; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_in_vec_a_10; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_in_vec_a_11; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_in_vec_a_12; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_in_vec_a_13; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_in_vec_a_14; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_in_vec_a_15; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_in_vec_b_0; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_in_vec_b_1; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_in_vec_b_2; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_in_vec_b_3; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_in_vec_b_4; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_in_vec_b_5; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_in_vec_b_6; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_in_vec_b_7; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_in_vec_b_8; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_in_vec_b_9; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_in_vec_b_10; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_in_vec_b_11; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_in_vec_b_12; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_in_vec_b_13; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_in_vec_b_14; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_in_vec_b_15; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire  alu_io_in_valid_0; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire  alu_io_in_valid_1; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire  alu_io_in_valid_2; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire  alu_io_in_valid_3; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire  alu_io_in_valid_4; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire  alu_io_in_valid_5; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire  alu_io_in_valid_6; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire  alu_io_in_valid_7; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire  alu_io_in_valid_8; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire  alu_io_in_valid_9; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire  alu_io_in_valid_10; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire  alu_io_in_valid_11; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire  alu_io_in_valid_12; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire  alu_io_in_valid_13; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire  alu_io_in_valid_14; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire  alu_io_in_valid_15; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire  alu_io_input_mode; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [1:0] alu_io_alu_mode; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [4:0] alu_io_out_shift; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire  alu_io_stall; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_out_tpu_0; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_out_tpu_1; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_out_tpu_2; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_out_tpu_3; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_out_tpu_4; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_out_tpu_5; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_out_tpu_6; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_out_tpu_7; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_out_tpu_8; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_out_tpu_9; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_out_tpu_10; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_out_tpu_11; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_out_tpu_12; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_out_tpu_13; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_out_tpu_14; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [7:0] alu_io_out_tpu_15; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [9:0] alu_io_out_direct_0; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [9:0] alu_io_out_direct_1; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [9:0] alu_io_out_direct_2; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [9:0] alu_io_out_direct_3; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [9:0] alu_io_out_direct_4; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [9:0] alu_io_out_direct_5; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [9:0] alu_io_out_direct_6; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [9:0] alu_io_out_direct_7; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [9:0] alu_io_out_direct_8; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [9:0] alu_io_out_direct_9; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [9:0] alu_io_out_direct_10; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [9:0] alu_io_out_direct_11; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [9:0] alu_io_out_direct_12; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [9:0] alu_io_out_direct_13; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [9:0] alu_io_out_direct_14; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire [9:0] alu_io_out_direct_15; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire  alu_io_out_tpu_valid_0; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire  alu_io_out_direct_valid_0; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire  alu_io_out_direct_valid_1; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire  alu_io_out_direct_valid_2; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire  alu_io_out_direct_valid_3; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire  alu_io_out_direct_valid_4; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire  alu_io_out_direct_valid_5; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire  alu_io_out_direct_valid_6; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire  alu_io_out_direct_valid_7; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire  alu_io_out_direct_valid_8; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire  alu_io_out_direct_valid_9; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire  alu_io_out_direct_valid_10; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire  alu_io_out_direct_valid_11; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire  alu_io_out_direct_valid_12; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire  alu_io_out_direct_valid_13; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire  alu_io_out_direct_valid_14; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire  alu_io_out_direct_valid_15; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire  alu_io_busy; // @[src/test/scala/VPU1Route_Test.scala 47:19]
  wire  busy = qa_io_busy | alu_io_busy; // @[src/test/scala/VPU1Route_Test.scala 48:25]
  wire  _io_drained_T = ~busy; // @[src/test/scala/VPU1Route_Test.scala 49:17]
  reg  savedMode; // @[src/test/scala/VPU1Route_Test.scala 50:26]
  reg [1:0] savedRoute; // @[src/test/scala/VPU1Route_Test.scala 51:27]
  wire  _io_control_alert_T_2 = io_input_mode != savedMode | io_output_route != savedRoute; // @[src/test/scala/VPU1Route_Test.scala 59:36]
  wire  mode = busy ? savedMode : io_input_mode; // @[src/test/scala/VPU1Route_Test.scala 60:17]
  wire [1:0] route = busy ? savedRoute : io_output_route; // @[src/test/scala/VPU1Route_Test.scala 61:18]
  reg [7:0] vbResponse_0; // @[src/test/scala/VPU1Route_Test.scala 80:29]
  reg [7:0] vbResponse_1; // @[src/test/scala/VPU1Route_Test.scala 80:29]
  reg [7:0] vbResponse_2; // @[src/test/scala/VPU1Route_Test.scala 80:29]
  reg [7:0] vbResponse_3; // @[src/test/scala/VPU1Route_Test.scala 80:29]
  reg [7:0] vbResponse_4; // @[src/test/scala/VPU1Route_Test.scala 80:29]
  reg [7:0] vbResponse_5; // @[src/test/scala/VPU1Route_Test.scala 80:29]
  reg [7:0] vbResponse_6; // @[src/test/scala/VPU1Route_Test.scala 80:29]
  reg [7:0] vbResponse_7; // @[src/test/scala/VPU1Route_Test.scala 80:29]
  reg [7:0] vbResponse_8; // @[src/test/scala/VPU1Route_Test.scala 80:29]
  reg [7:0] vbResponse_9; // @[src/test/scala/VPU1Route_Test.scala 80:29]
  reg [7:0] vbResponse_10; // @[src/test/scala/VPU1Route_Test.scala 80:29]
  reg [7:0] vbResponse_11; // @[src/test/scala/VPU1Route_Test.scala 80:29]
  reg [7:0] vbResponse_12; // @[src/test/scala/VPU1Route_Test.scala 80:29]
  reg [7:0] vbResponse_13; // @[src/test/scala/VPU1Route_Test.scala 80:29]
  reg [7:0] vbResponse_14; // @[src/test/scala/VPU1Route_Test.scala 80:29]
  reg [7:0] vbResponse_15; // @[src/test/scala/VPU1Route_Test.scala 80:29]
  wire  valid = mode ? qa_io_out_valid_0 : alu_io_out_tpu_valid_0; // @[src/test/scala/VPU1Route_Test.scala 92:18]
  QuantActUnit qa ( // @[src/test/scala/VPU1Route_Test.scala 46:18]
    .clock(qa_clock),
    .reset(qa_reset),
    .io_in_tpu_0(qa_io_in_tpu_0),
    .io_in_tpu_1(qa_io_in_tpu_1),
    .io_in_tpu_2(qa_io_in_tpu_2),
    .io_in_tpu_3(qa_io_in_tpu_3),
    .io_in_tpu_4(qa_io_in_tpu_4),
    .io_in_tpu_5(qa_io_in_tpu_5),
    .io_in_tpu_6(qa_io_in_tpu_6),
    .io_in_tpu_7(qa_io_in_tpu_7),
    .io_in_tpu_8(qa_io_in_tpu_8),
    .io_in_tpu_9(qa_io_in_tpu_9),
    .io_in_tpu_10(qa_io_in_tpu_10),
    .io_in_tpu_11(qa_io_in_tpu_11),
    .io_in_tpu_12(qa_io_in_tpu_12),
    .io_in_tpu_13(qa_io_in_tpu_13),
    .io_in_tpu_14(qa_io_in_tpu_14),
    .io_in_tpu_15(qa_io_in_tpu_15),
    .io_in_direct_0(qa_io_in_direct_0),
    .io_in_direct_1(qa_io_in_direct_1),
    .io_in_direct_2(qa_io_in_direct_2),
    .io_in_direct_3(qa_io_in_direct_3),
    .io_in_direct_4(qa_io_in_direct_4),
    .io_in_direct_5(qa_io_in_direct_5),
    .io_in_direct_6(qa_io_in_direct_6),
    .io_in_direct_7(qa_io_in_direct_7),
    .io_in_direct_8(qa_io_in_direct_8),
    .io_in_direct_9(qa_io_in_direct_9),
    .io_in_direct_10(qa_io_in_direct_10),
    .io_in_direct_11(qa_io_in_direct_11),
    .io_in_direct_12(qa_io_in_direct_12),
    .io_in_direct_13(qa_io_in_direct_13),
    .io_in_direct_14(qa_io_in_direct_14),
    .io_in_direct_15(qa_io_in_direct_15),
    .io_input_mode(qa_io_input_mode),
    .io_in_valid_0(qa_io_in_valid_0),
    .io_in_valid_1(qa_io_in_valid_1),
    .io_in_valid_2(qa_io_in_valid_2),
    .io_in_valid_3(qa_io_in_valid_3),
    .io_in_valid_4(qa_io_in_valid_4),
    .io_in_valid_5(qa_io_in_valid_5),
    .io_in_valid_6(qa_io_in_valid_6),
    .io_in_valid_7(qa_io_in_valid_7),
    .io_in_valid_8(qa_io_in_valid_8),
    .io_in_valid_9(qa_io_in_valid_9),
    .io_in_valid_10(qa_io_in_valid_10),
    .io_in_valid_11(qa_io_in_valid_11),
    .io_in_valid_12(qa_io_in_valid_12),
    .io_in_valid_13(qa_io_in_valid_13),
    .io_in_valid_14(qa_io_in_valid_14),
    .io_in_valid_15(qa_io_in_valid_15),
    .io_matrix_param(qa_io_matrix_param),
    .io_act_mask(qa_io_act_mask),
    .io_fusion_second(qa_io_fusion_second),
    .io_stall(qa_io_stall),
    .io_lut_wr_en(qa_io_lut_wr_en),
    .io_lut_wr_addr(qa_io_lut_wr_addr),
    .io_lut_wr_data_0(qa_io_lut_wr_data_0),
    .io_lut_wr_data_1(qa_io_lut_wr_data_1),
    .io_lut_wr_data_2(qa_io_lut_wr_data_2),
    .io_lut_wr_data_3(qa_io_lut_wr_data_3),
    .io_lut_wr_data_4(qa_io_lut_wr_data_4),
    .io_lut_wr_data_5(qa_io_lut_wr_data_5),
    .io_lut_wr_data_6(qa_io_lut_wr_data_6),
    .io_lut_wr_data_7(qa_io_lut_wr_data_7),
    .io_lut_wr_data_8(qa_io_lut_wr_data_8),
    .io_lut_wr_data_9(qa_io_lut_wr_data_9),
    .io_lut_wr_data_10(qa_io_lut_wr_data_10),
    .io_lut_wr_data_11(qa_io_lut_wr_data_11),
    .io_lut_wr_data_12(qa_io_lut_wr_data_12),
    .io_lut_wr_data_13(qa_io_lut_wr_data_13),
    .io_lut_wr_data_14(qa_io_lut_wr_data_14),
    .io_lut_wr_data_15(qa_io_lut_wr_data_15),
    .io_out_vec_0(qa_io_out_vec_0),
    .io_out_vec_1(qa_io_out_vec_1),
    .io_out_vec_2(qa_io_out_vec_2),
    .io_out_vec_3(qa_io_out_vec_3),
    .io_out_vec_4(qa_io_out_vec_4),
    .io_out_vec_5(qa_io_out_vec_5),
    .io_out_vec_6(qa_io_out_vec_6),
    .io_out_vec_7(qa_io_out_vec_7),
    .io_out_vec_8(qa_io_out_vec_8),
    .io_out_vec_9(qa_io_out_vec_9),
    .io_out_vec_10(qa_io_out_vec_10),
    .io_out_vec_11(qa_io_out_vec_11),
    .io_out_vec_12(qa_io_out_vec_12),
    .io_out_vec_13(qa_io_out_vec_13),
    .io_out_vec_14(qa_io_out_vec_14),
    .io_out_vec_15(qa_io_out_vec_15),
    .io_out_valid_0(qa_io_out_valid_0),
    .io_out_valid_1(qa_io_out_valid_1),
    .io_out_valid_2(qa_io_out_valid_2),
    .io_out_valid_3(qa_io_out_valid_3),
    .io_out_valid_4(qa_io_out_valid_4),
    .io_out_valid_5(qa_io_out_valid_5),
    .io_out_valid_6(qa_io_out_valid_6),
    .io_out_valid_7(qa_io_out_valid_7),
    .io_out_valid_8(qa_io_out_valid_8),
    .io_out_valid_9(qa_io_out_valid_9),
    .io_out_valid_10(qa_io_out_valid_10),
    .io_out_valid_11(qa_io_out_valid_11),
    .io_out_valid_12(qa_io_out_valid_12),
    .io_out_valid_13(qa_io_out_valid_13),
    .io_out_valid_14(qa_io_out_valid_14),
    .io_out_valid_15(qa_io_out_valid_15),
    .io_out_lookahead_0(qa_io_out_lookahead_0),
    .io_busy(qa_io_busy),
    .io_sync_alert(qa_io_sync_alert)
  );
  GPALUUnit alu ( // @[src/test/scala/VPU1Route_Test.scala 47:19]
    .clock(alu_clock),
    .reset(alu_reset),
    .io_in_vec_a_0(alu_io_in_vec_a_0),
    .io_in_vec_a_1(alu_io_in_vec_a_1),
    .io_in_vec_a_2(alu_io_in_vec_a_2),
    .io_in_vec_a_3(alu_io_in_vec_a_3),
    .io_in_vec_a_4(alu_io_in_vec_a_4),
    .io_in_vec_a_5(alu_io_in_vec_a_5),
    .io_in_vec_a_6(alu_io_in_vec_a_6),
    .io_in_vec_a_7(alu_io_in_vec_a_7),
    .io_in_vec_a_8(alu_io_in_vec_a_8),
    .io_in_vec_a_9(alu_io_in_vec_a_9),
    .io_in_vec_a_10(alu_io_in_vec_a_10),
    .io_in_vec_a_11(alu_io_in_vec_a_11),
    .io_in_vec_a_12(alu_io_in_vec_a_12),
    .io_in_vec_a_13(alu_io_in_vec_a_13),
    .io_in_vec_a_14(alu_io_in_vec_a_14),
    .io_in_vec_a_15(alu_io_in_vec_a_15),
    .io_in_vec_b_0(alu_io_in_vec_b_0),
    .io_in_vec_b_1(alu_io_in_vec_b_1),
    .io_in_vec_b_2(alu_io_in_vec_b_2),
    .io_in_vec_b_3(alu_io_in_vec_b_3),
    .io_in_vec_b_4(alu_io_in_vec_b_4),
    .io_in_vec_b_5(alu_io_in_vec_b_5),
    .io_in_vec_b_6(alu_io_in_vec_b_6),
    .io_in_vec_b_7(alu_io_in_vec_b_7),
    .io_in_vec_b_8(alu_io_in_vec_b_8),
    .io_in_vec_b_9(alu_io_in_vec_b_9),
    .io_in_vec_b_10(alu_io_in_vec_b_10),
    .io_in_vec_b_11(alu_io_in_vec_b_11),
    .io_in_vec_b_12(alu_io_in_vec_b_12),
    .io_in_vec_b_13(alu_io_in_vec_b_13),
    .io_in_vec_b_14(alu_io_in_vec_b_14),
    .io_in_vec_b_15(alu_io_in_vec_b_15),
    .io_in_valid_0(alu_io_in_valid_0),
    .io_in_valid_1(alu_io_in_valid_1),
    .io_in_valid_2(alu_io_in_valid_2),
    .io_in_valid_3(alu_io_in_valid_3),
    .io_in_valid_4(alu_io_in_valid_4),
    .io_in_valid_5(alu_io_in_valid_5),
    .io_in_valid_6(alu_io_in_valid_6),
    .io_in_valid_7(alu_io_in_valid_7),
    .io_in_valid_8(alu_io_in_valid_8),
    .io_in_valid_9(alu_io_in_valid_9),
    .io_in_valid_10(alu_io_in_valid_10),
    .io_in_valid_11(alu_io_in_valid_11),
    .io_in_valid_12(alu_io_in_valid_12),
    .io_in_valid_13(alu_io_in_valid_13),
    .io_in_valid_14(alu_io_in_valid_14),
    .io_in_valid_15(alu_io_in_valid_15),
    .io_input_mode(alu_io_input_mode),
    .io_alu_mode(alu_io_alu_mode),
    .io_out_shift(alu_io_out_shift),
    .io_stall(alu_io_stall),
    .io_out_tpu_0(alu_io_out_tpu_0),
    .io_out_tpu_1(alu_io_out_tpu_1),
    .io_out_tpu_2(alu_io_out_tpu_2),
    .io_out_tpu_3(alu_io_out_tpu_3),
    .io_out_tpu_4(alu_io_out_tpu_4),
    .io_out_tpu_5(alu_io_out_tpu_5),
    .io_out_tpu_6(alu_io_out_tpu_6),
    .io_out_tpu_7(alu_io_out_tpu_7),
    .io_out_tpu_8(alu_io_out_tpu_8),
    .io_out_tpu_9(alu_io_out_tpu_9),
    .io_out_tpu_10(alu_io_out_tpu_10),
    .io_out_tpu_11(alu_io_out_tpu_11),
    .io_out_tpu_12(alu_io_out_tpu_12),
    .io_out_tpu_13(alu_io_out_tpu_13),
    .io_out_tpu_14(alu_io_out_tpu_14),
    .io_out_tpu_15(alu_io_out_tpu_15),
    .io_out_direct_0(alu_io_out_direct_0),
    .io_out_direct_1(alu_io_out_direct_1),
    .io_out_direct_2(alu_io_out_direct_2),
    .io_out_direct_3(alu_io_out_direct_3),
    .io_out_direct_4(alu_io_out_direct_4),
    .io_out_direct_5(alu_io_out_direct_5),
    .io_out_direct_6(alu_io_out_direct_6),
    .io_out_direct_7(alu_io_out_direct_7),
    .io_out_direct_8(alu_io_out_direct_8),
    .io_out_direct_9(alu_io_out_direct_9),
    .io_out_direct_10(alu_io_out_direct_10),
    .io_out_direct_11(alu_io_out_direct_11),
    .io_out_direct_12(alu_io_out_direct_12),
    .io_out_direct_13(alu_io_out_direct_13),
    .io_out_direct_14(alu_io_out_direct_14),
    .io_out_direct_15(alu_io_out_direct_15),
    .io_out_tpu_valid_0(alu_io_out_tpu_valid_0),
    .io_out_direct_valid_0(alu_io_out_direct_valid_0),
    .io_out_direct_valid_1(alu_io_out_direct_valid_1),
    .io_out_direct_valid_2(alu_io_out_direct_valid_2),
    .io_out_direct_valid_3(alu_io_out_direct_valid_3),
    .io_out_direct_valid_4(alu_io_out_direct_valid_4),
    .io_out_direct_valid_5(alu_io_out_direct_valid_5),
    .io_out_direct_valid_6(alu_io_out_direct_valid_6),
    .io_out_direct_valid_7(alu_io_out_direct_valid_7),
    .io_out_direct_valid_8(alu_io_out_direct_valid_8),
    .io_out_direct_valid_9(alu_io_out_direct_valid_9),
    .io_out_direct_valid_10(alu_io_out_direct_valid_10),
    .io_out_direct_valid_11(alu_io_out_direct_valid_11),
    .io_out_direct_valid_12(alu_io_out_direct_valid_12),
    .io_out_direct_valid_13(alu_io_out_direct_valid_13),
    .io_out_direct_valid_14(alu_io_out_direct_valid_14),
    .io_out_direct_valid_15(alu_io_out_direct_valid_15),
    .io_busy(alu_io_busy)
  );
  assign io_vb_read_req = ~mode & io_alu_mode != 2'h0 & qa_io_out_lookahead_0; // @[src/test/scala/VPU1Route_Test.scala 79:65]
  assign io_result_0 = mode ? qa_io_out_vec_0 : alu_io_out_tpu_0; // @[src/test/scala/VPU1Route_Test.scala 90:24]
  assign io_result_1 = mode ? qa_io_out_vec_1 : alu_io_out_tpu_1; // @[src/test/scala/VPU1Route_Test.scala 90:24]
  assign io_result_2 = mode ? qa_io_out_vec_2 : alu_io_out_tpu_2; // @[src/test/scala/VPU1Route_Test.scala 90:24]
  assign io_result_3 = mode ? qa_io_out_vec_3 : alu_io_out_tpu_3; // @[src/test/scala/VPU1Route_Test.scala 90:24]
  assign io_result_4 = mode ? qa_io_out_vec_4 : alu_io_out_tpu_4; // @[src/test/scala/VPU1Route_Test.scala 90:24]
  assign io_result_5 = mode ? qa_io_out_vec_5 : alu_io_out_tpu_5; // @[src/test/scala/VPU1Route_Test.scala 90:24]
  assign io_result_6 = mode ? qa_io_out_vec_6 : alu_io_out_tpu_6; // @[src/test/scala/VPU1Route_Test.scala 90:24]
  assign io_result_7 = mode ? qa_io_out_vec_7 : alu_io_out_tpu_7; // @[src/test/scala/VPU1Route_Test.scala 90:24]
  assign io_result_8 = mode ? qa_io_out_vec_8 : alu_io_out_tpu_8; // @[src/test/scala/VPU1Route_Test.scala 90:24]
  assign io_result_9 = mode ? qa_io_out_vec_9 : alu_io_out_tpu_9; // @[src/test/scala/VPU1Route_Test.scala 90:24]
  assign io_result_10 = mode ? qa_io_out_vec_10 : alu_io_out_tpu_10; // @[src/test/scala/VPU1Route_Test.scala 90:24]
  assign io_result_11 = mode ? qa_io_out_vec_11 : alu_io_out_tpu_11; // @[src/test/scala/VPU1Route_Test.scala 90:24]
  assign io_result_12 = mode ? qa_io_out_vec_12 : alu_io_out_tpu_12; // @[src/test/scala/VPU1Route_Test.scala 90:24]
  assign io_result_13 = mode ? qa_io_out_vec_13 : alu_io_out_tpu_13; // @[src/test/scala/VPU1Route_Test.scala 90:24]
  assign io_result_14 = mode ? qa_io_out_vec_14 : alu_io_out_tpu_14; // @[src/test/scala/VPU1Route_Test.scala 90:24]
  assign io_result_15 = mode ? qa_io_out_vec_15 : alu_io_out_tpu_15; // @[src/test/scala/VPU1Route_Test.scala 90:24]
  assign io_vb_valid = valid & route == 2'h1; // @[src/test/scala/VPU1Route_Test.scala 94:24]
  assign io_vpu2_valid = valid & route == 2'h2; // @[src/test/scala/VPU1Route_Test.scala 95:26]
  assign io_compute_valid = valid & route == 2'h3; // @[src/test/scala/VPU1Route_Test.scala 96:29]
  assign io_result_valid = mode ? qa_io_out_valid_0 : alu_io_out_tpu_valid_0; // @[src/test/scala/VPU1Route_Test.scala 92:18]
  assign io_drained = ~busy; // @[src/test/scala/VPU1Route_Test.scala 49:17]
  assign io_control_alert = busy & _io_control_alert_T_2; // @[src/test/scala/VPU1Route_Test.scala 58:28]
  assign io_sync_alert = qa_io_sync_alert; // @[src/test/scala/VPU1Route_Test.scala 97:17]
  assign io_qparam_req = 1'h0; // @[src/test/scala/VPU1Route_Test.scala 98:17]
  assign qa_clock = clock;
  assign qa_reset = reset;
  assign qa_io_in_tpu_0 = io_tpu_0; // @[src/test/scala/VPU1Route_Test.scala 65:16]
  assign qa_io_in_tpu_1 = io_tpu_1; // @[src/test/scala/VPU1Route_Test.scala 65:16]
  assign qa_io_in_tpu_2 = io_tpu_2; // @[src/test/scala/VPU1Route_Test.scala 65:16]
  assign qa_io_in_tpu_3 = io_tpu_3; // @[src/test/scala/VPU1Route_Test.scala 65:16]
  assign qa_io_in_tpu_4 = io_tpu_4; // @[src/test/scala/VPU1Route_Test.scala 65:16]
  assign qa_io_in_tpu_5 = io_tpu_5; // @[src/test/scala/VPU1Route_Test.scala 65:16]
  assign qa_io_in_tpu_6 = io_tpu_6; // @[src/test/scala/VPU1Route_Test.scala 65:16]
  assign qa_io_in_tpu_7 = io_tpu_7; // @[src/test/scala/VPU1Route_Test.scala 65:16]
  assign qa_io_in_tpu_8 = io_tpu_8; // @[src/test/scala/VPU1Route_Test.scala 65:16]
  assign qa_io_in_tpu_9 = io_tpu_9; // @[src/test/scala/VPU1Route_Test.scala 65:16]
  assign qa_io_in_tpu_10 = io_tpu_10; // @[src/test/scala/VPU1Route_Test.scala 65:16]
  assign qa_io_in_tpu_11 = io_tpu_11; // @[src/test/scala/VPU1Route_Test.scala 65:16]
  assign qa_io_in_tpu_12 = io_tpu_12; // @[src/test/scala/VPU1Route_Test.scala 65:16]
  assign qa_io_in_tpu_13 = io_tpu_13; // @[src/test/scala/VPU1Route_Test.scala 65:16]
  assign qa_io_in_tpu_14 = io_tpu_14; // @[src/test/scala/VPU1Route_Test.scala 65:16]
  assign qa_io_in_tpu_15 = io_tpu_15; // @[src/test/scala/VPU1Route_Test.scala 65:16]
  assign qa_io_in_direct_0 = alu_io_out_direct_0; // @[src/test/scala/VPU1Route_Test.scala 66:19]
  assign qa_io_in_direct_1 = alu_io_out_direct_1; // @[src/test/scala/VPU1Route_Test.scala 66:19]
  assign qa_io_in_direct_2 = alu_io_out_direct_2; // @[src/test/scala/VPU1Route_Test.scala 66:19]
  assign qa_io_in_direct_3 = alu_io_out_direct_3; // @[src/test/scala/VPU1Route_Test.scala 66:19]
  assign qa_io_in_direct_4 = alu_io_out_direct_4; // @[src/test/scala/VPU1Route_Test.scala 66:19]
  assign qa_io_in_direct_5 = alu_io_out_direct_5; // @[src/test/scala/VPU1Route_Test.scala 66:19]
  assign qa_io_in_direct_6 = alu_io_out_direct_6; // @[src/test/scala/VPU1Route_Test.scala 66:19]
  assign qa_io_in_direct_7 = alu_io_out_direct_7; // @[src/test/scala/VPU1Route_Test.scala 66:19]
  assign qa_io_in_direct_8 = alu_io_out_direct_8; // @[src/test/scala/VPU1Route_Test.scala 66:19]
  assign qa_io_in_direct_9 = alu_io_out_direct_9; // @[src/test/scala/VPU1Route_Test.scala 66:19]
  assign qa_io_in_direct_10 = alu_io_out_direct_10; // @[src/test/scala/VPU1Route_Test.scala 66:19]
  assign qa_io_in_direct_11 = alu_io_out_direct_11; // @[src/test/scala/VPU1Route_Test.scala 66:19]
  assign qa_io_in_direct_12 = alu_io_out_direct_12; // @[src/test/scala/VPU1Route_Test.scala 66:19]
  assign qa_io_in_direct_13 = alu_io_out_direct_13; // @[src/test/scala/VPU1Route_Test.scala 66:19]
  assign qa_io_in_direct_14 = alu_io_out_direct_14; // @[src/test/scala/VPU1Route_Test.scala 66:19]
  assign qa_io_in_direct_15 = alu_io_out_direct_15; // @[src/test/scala/VPU1Route_Test.scala 66:19]
  assign qa_io_input_mode = busy ? savedMode : io_input_mode; // @[src/test/scala/VPU1Route_Test.scala 60:17]
  assign qa_io_in_valid_0 = mode ? alu_io_out_direct_valid_0 : io_tpu_valid; // @[src/test/scala/VPU1Route_Test.scala 86:29]
  assign qa_io_in_valid_1 = mode ? alu_io_out_direct_valid_1 : io_tpu_valid; // @[src/test/scala/VPU1Route_Test.scala 86:29]
  assign qa_io_in_valid_2 = mode ? alu_io_out_direct_valid_2 : io_tpu_valid; // @[src/test/scala/VPU1Route_Test.scala 86:29]
  assign qa_io_in_valid_3 = mode ? alu_io_out_direct_valid_3 : io_tpu_valid; // @[src/test/scala/VPU1Route_Test.scala 86:29]
  assign qa_io_in_valid_4 = mode ? alu_io_out_direct_valid_4 : io_tpu_valid; // @[src/test/scala/VPU1Route_Test.scala 86:29]
  assign qa_io_in_valid_5 = mode ? alu_io_out_direct_valid_5 : io_tpu_valid; // @[src/test/scala/VPU1Route_Test.scala 86:29]
  assign qa_io_in_valid_6 = mode ? alu_io_out_direct_valid_6 : io_tpu_valid; // @[src/test/scala/VPU1Route_Test.scala 86:29]
  assign qa_io_in_valid_7 = mode ? alu_io_out_direct_valid_7 : io_tpu_valid; // @[src/test/scala/VPU1Route_Test.scala 86:29]
  assign qa_io_in_valid_8 = mode ? alu_io_out_direct_valid_8 : io_tpu_valid; // @[src/test/scala/VPU1Route_Test.scala 86:29]
  assign qa_io_in_valid_9 = mode ? alu_io_out_direct_valid_9 : io_tpu_valid; // @[src/test/scala/VPU1Route_Test.scala 86:29]
  assign qa_io_in_valid_10 = mode ? alu_io_out_direct_valid_10 : io_tpu_valid; // @[src/test/scala/VPU1Route_Test.scala 86:29]
  assign qa_io_in_valid_11 = mode ? alu_io_out_direct_valid_11 : io_tpu_valid; // @[src/test/scala/VPU1Route_Test.scala 86:29]
  assign qa_io_in_valid_12 = mode ? alu_io_out_direct_valid_12 : io_tpu_valid; // @[src/test/scala/VPU1Route_Test.scala 86:29]
  assign qa_io_in_valid_13 = mode ? alu_io_out_direct_valid_13 : io_tpu_valid; // @[src/test/scala/VPU1Route_Test.scala 86:29]
  assign qa_io_in_valid_14 = mode ? alu_io_out_direct_valid_14 : io_tpu_valid; // @[src/test/scala/VPU1Route_Test.scala 86:29]
  assign qa_io_in_valid_15 = mode ? alu_io_out_direct_valid_15 : io_tpu_valid; // @[src/test/scala/VPU1Route_Test.scala 86:29]
  assign qa_io_matrix_param = io_matrix_param; // @[src/test/scala/VPU1Route_Test.scala 68:22]
  assign qa_io_act_mask = io_act_mask; // @[src/test/scala/VPU1Route_Test.scala 69:18]
  assign qa_io_fusion_second = io_fusion_second; // @[src/test/scala/VPU1Route_Test.scala 70:23]
  assign qa_io_stall = io_stall; // @[src/test/scala/VPU1Route_Test.scala 71:15]
  assign qa_io_lut_wr_en = io_lut_wr_en; // @[src/test/scala/VPU1Route_Test.scala 75:19]
  assign qa_io_lut_wr_addr = io_lut_wr_addr; // @[src/test/scala/VPU1Route_Test.scala 76:21]
  assign qa_io_lut_wr_data_0 = io_lut_wr_data_0; // @[src/test/scala/VPU1Route_Test.scala 77:21]
  assign qa_io_lut_wr_data_1 = io_lut_wr_data_1; // @[src/test/scala/VPU1Route_Test.scala 77:21]
  assign qa_io_lut_wr_data_2 = io_lut_wr_data_2; // @[src/test/scala/VPU1Route_Test.scala 77:21]
  assign qa_io_lut_wr_data_3 = io_lut_wr_data_3; // @[src/test/scala/VPU1Route_Test.scala 77:21]
  assign qa_io_lut_wr_data_4 = io_lut_wr_data_4; // @[src/test/scala/VPU1Route_Test.scala 77:21]
  assign qa_io_lut_wr_data_5 = io_lut_wr_data_5; // @[src/test/scala/VPU1Route_Test.scala 77:21]
  assign qa_io_lut_wr_data_6 = io_lut_wr_data_6; // @[src/test/scala/VPU1Route_Test.scala 77:21]
  assign qa_io_lut_wr_data_7 = io_lut_wr_data_7; // @[src/test/scala/VPU1Route_Test.scala 77:21]
  assign qa_io_lut_wr_data_8 = io_lut_wr_data_8; // @[src/test/scala/VPU1Route_Test.scala 77:21]
  assign qa_io_lut_wr_data_9 = io_lut_wr_data_9; // @[src/test/scala/VPU1Route_Test.scala 77:21]
  assign qa_io_lut_wr_data_10 = io_lut_wr_data_10; // @[src/test/scala/VPU1Route_Test.scala 77:21]
  assign qa_io_lut_wr_data_11 = io_lut_wr_data_11; // @[src/test/scala/VPU1Route_Test.scala 77:21]
  assign qa_io_lut_wr_data_12 = io_lut_wr_data_12; // @[src/test/scala/VPU1Route_Test.scala 77:21]
  assign qa_io_lut_wr_data_13 = io_lut_wr_data_13; // @[src/test/scala/VPU1Route_Test.scala 77:21]
  assign qa_io_lut_wr_data_14 = io_lut_wr_data_14; // @[src/test/scala/VPU1Route_Test.scala 77:21]
  assign qa_io_lut_wr_data_15 = io_lut_wr_data_15; // @[src/test/scala/VPU1Route_Test.scala 77:21]
  assign alu_clock = clock;
  assign alu_reset = reset;
  assign alu_io_in_vec_a_0 = mode ? $signed(io_ub_0) : $signed(qa_io_out_vec_0); // @[src/test/scala/VPU1Route_Test.scala 87:30]
  assign alu_io_in_vec_a_1 = mode ? $signed(io_ub_1) : $signed(qa_io_out_vec_1); // @[src/test/scala/VPU1Route_Test.scala 87:30]
  assign alu_io_in_vec_a_2 = mode ? $signed(io_ub_2) : $signed(qa_io_out_vec_2); // @[src/test/scala/VPU1Route_Test.scala 87:30]
  assign alu_io_in_vec_a_3 = mode ? $signed(io_ub_3) : $signed(qa_io_out_vec_3); // @[src/test/scala/VPU1Route_Test.scala 87:30]
  assign alu_io_in_vec_a_4 = mode ? $signed(io_ub_4) : $signed(qa_io_out_vec_4); // @[src/test/scala/VPU1Route_Test.scala 87:30]
  assign alu_io_in_vec_a_5 = mode ? $signed(io_ub_5) : $signed(qa_io_out_vec_5); // @[src/test/scala/VPU1Route_Test.scala 87:30]
  assign alu_io_in_vec_a_6 = mode ? $signed(io_ub_6) : $signed(qa_io_out_vec_6); // @[src/test/scala/VPU1Route_Test.scala 87:30]
  assign alu_io_in_vec_a_7 = mode ? $signed(io_ub_7) : $signed(qa_io_out_vec_7); // @[src/test/scala/VPU1Route_Test.scala 87:30]
  assign alu_io_in_vec_a_8 = mode ? $signed(io_ub_8) : $signed(qa_io_out_vec_8); // @[src/test/scala/VPU1Route_Test.scala 87:30]
  assign alu_io_in_vec_a_9 = mode ? $signed(io_ub_9) : $signed(qa_io_out_vec_9); // @[src/test/scala/VPU1Route_Test.scala 87:30]
  assign alu_io_in_vec_a_10 = mode ? $signed(io_ub_10) : $signed(qa_io_out_vec_10); // @[src/test/scala/VPU1Route_Test.scala 87:30]
  assign alu_io_in_vec_a_11 = mode ? $signed(io_ub_11) : $signed(qa_io_out_vec_11); // @[src/test/scala/VPU1Route_Test.scala 87:30]
  assign alu_io_in_vec_a_12 = mode ? $signed(io_ub_12) : $signed(qa_io_out_vec_12); // @[src/test/scala/VPU1Route_Test.scala 87:30]
  assign alu_io_in_vec_a_13 = mode ? $signed(io_ub_13) : $signed(qa_io_out_vec_13); // @[src/test/scala/VPU1Route_Test.scala 87:30]
  assign alu_io_in_vec_a_14 = mode ? $signed(io_ub_14) : $signed(qa_io_out_vec_14); // @[src/test/scala/VPU1Route_Test.scala 87:30]
  assign alu_io_in_vec_a_15 = mode ? $signed(io_ub_15) : $signed(qa_io_out_vec_15); // @[src/test/scala/VPU1Route_Test.scala 87:30]
  assign alu_io_in_vec_b_0 = mode ? $signed(io_wb_0) : $signed(vbResponse_0); // @[src/test/scala/VPU1Route_Test.scala 88:30]
  assign alu_io_in_vec_b_1 = mode ? $signed(io_wb_1) : $signed(vbResponse_1); // @[src/test/scala/VPU1Route_Test.scala 88:30]
  assign alu_io_in_vec_b_2 = mode ? $signed(io_wb_2) : $signed(vbResponse_2); // @[src/test/scala/VPU1Route_Test.scala 88:30]
  assign alu_io_in_vec_b_3 = mode ? $signed(io_wb_3) : $signed(vbResponse_3); // @[src/test/scala/VPU1Route_Test.scala 88:30]
  assign alu_io_in_vec_b_4 = mode ? $signed(io_wb_4) : $signed(vbResponse_4); // @[src/test/scala/VPU1Route_Test.scala 88:30]
  assign alu_io_in_vec_b_5 = mode ? $signed(io_wb_5) : $signed(vbResponse_5); // @[src/test/scala/VPU1Route_Test.scala 88:30]
  assign alu_io_in_vec_b_6 = mode ? $signed(io_wb_6) : $signed(vbResponse_6); // @[src/test/scala/VPU1Route_Test.scala 88:30]
  assign alu_io_in_vec_b_7 = mode ? $signed(io_wb_7) : $signed(vbResponse_7); // @[src/test/scala/VPU1Route_Test.scala 88:30]
  assign alu_io_in_vec_b_8 = mode ? $signed(io_wb_8) : $signed(vbResponse_8); // @[src/test/scala/VPU1Route_Test.scala 88:30]
  assign alu_io_in_vec_b_9 = mode ? $signed(io_wb_9) : $signed(vbResponse_9); // @[src/test/scala/VPU1Route_Test.scala 88:30]
  assign alu_io_in_vec_b_10 = mode ? $signed(io_wb_10) : $signed(vbResponse_10); // @[src/test/scala/VPU1Route_Test.scala 88:30]
  assign alu_io_in_vec_b_11 = mode ? $signed(io_wb_11) : $signed(vbResponse_11); // @[src/test/scala/VPU1Route_Test.scala 88:30]
  assign alu_io_in_vec_b_12 = mode ? $signed(io_wb_12) : $signed(vbResponse_12); // @[src/test/scala/VPU1Route_Test.scala 88:30]
  assign alu_io_in_vec_b_13 = mode ? $signed(io_wb_13) : $signed(vbResponse_13); // @[src/test/scala/VPU1Route_Test.scala 88:30]
  assign alu_io_in_vec_b_14 = mode ? $signed(io_wb_14) : $signed(vbResponse_14); // @[src/test/scala/VPU1Route_Test.scala 88:30]
  assign alu_io_in_vec_b_15 = mode ? $signed(io_wb_15) : $signed(vbResponse_15); // @[src/test/scala/VPU1Route_Test.scala 88:30]
  assign alu_io_in_valid_0 = mode ? io_ub_valid & io_wb_valid : qa_io_out_valid_0; // @[src/test/scala/VPU1Route_Test.scala 89:30]
  assign alu_io_in_valid_1 = mode ? io_ub_valid & io_wb_valid : qa_io_out_valid_1; // @[src/test/scala/VPU1Route_Test.scala 89:30]
  assign alu_io_in_valid_2 = mode ? io_ub_valid & io_wb_valid : qa_io_out_valid_2; // @[src/test/scala/VPU1Route_Test.scala 89:30]
  assign alu_io_in_valid_3 = mode ? io_ub_valid & io_wb_valid : qa_io_out_valid_3; // @[src/test/scala/VPU1Route_Test.scala 89:30]
  assign alu_io_in_valid_4 = mode ? io_ub_valid & io_wb_valid : qa_io_out_valid_4; // @[src/test/scala/VPU1Route_Test.scala 89:30]
  assign alu_io_in_valid_5 = mode ? io_ub_valid & io_wb_valid : qa_io_out_valid_5; // @[src/test/scala/VPU1Route_Test.scala 89:30]
  assign alu_io_in_valid_6 = mode ? io_ub_valid & io_wb_valid : qa_io_out_valid_6; // @[src/test/scala/VPU1Route_Test.scala 89:30]
  assign alu_io_in_valid_7 = mode ? io_ub_valid & io_wb_valid : qa_io_out_valid_7; // @[src/test/scala/VPU1Route_Test.scala 89:30]
  assign alu_io_in_valid_8 = mode ? io_ub_valid & io_wb_valid : qa_io_out_valid_8; // @[src/test/scala/VPU1Route_Test.scala 89:30]
  assign alu_io_in_valid_9 = mode ? io_ub_valid & io_wb_valid : qa_io_out_valid_9; // @[src/test/scala/VPU1Route_Test.scala 89:30]
  assign alu_io_in_valid_10 = mode ? io_ub_valid & io_wb_valid : qa_io_out_valid_10; // @[src/test/scala/VPU1Route_Test.scala 89:30]
  assign alu_io_in_valid_11 = mode ? io_ub_valid & io_wb_valid : qa_io_out_valid_11; // @[src/test/scala/VPU1Route_Test.scala 89:30]
  assign alu_io_in_valid_12 = mode ? io_ub_valid & io_wb_valid : qa_io_out_valid_12; // @[src/test/scala/VPU1Route_Test.scala 89:30]
  assign alu_io_in_valid_13 = mode ? io_ub_valid & io_wb_valid : qa_io_out_valid_13; // @[src/test/scala/VPU1Route_Test.scala 89:30]
  assign alu_io_in_valid_14 = mode ? io_ub_valid & io_wb_valid : qa_io_out_valid_14; // @[src/test/scala/VPU1Route_Test.scala 89:30]
  assign alu_io_in_valid_15 = mode ? io_ub_valid & io_wb_valid : qa_io_out_valid_15; // @[src/test/scala/VPU1Route_Test.scala 89:30]
  assign alu_io_input_mode = busy ? savedMode : io_input_mode; // @[src/test/scala/VPU1Route_Test.scala 60:17]
  assign alu_io_alu_mode = io_alu_mode; // @[src/test/scala/VPU1Route_Test.scala 82:19]
  assign alu_io_out_shift = io_out_shift; // @[src/test/scala/VPU1Route_Test.scala 83:20]
  assign alu_io_stall = io_stall; // @[src/test/scala/VPU1Route_Test.scala 84:16]
  always @(posedge clock) begin
    if (reset) begin // @[src/test/scala/VPU1Route_Test.scala 50:26]
      savedMode <= 1'h0; // @[src/test/scala/VPU1Route_Test.scala 50:26]
    end else if (_io_drained_T) begin // @[src/test/scala/VPU1Route_Test.scala 52:15]
      savedMode <= io_input_mode; // @[src/test/scala/VPU1Route_Test.scala 53:15]
    end
    if (reset) begin // @[src/test/scala/VPU1Route_Test.scala 51:27]
      savedRoute <= 2'h0; // @[src/test/scala/VPU1Route_Test.scala 51:27]
    end else if (_io_drained_T) begin // @[src/test/scala/VPU1Route_Test.scala 52:15]
      savedRoute <= io_output_route; // @[src/test/scala/VPU1Route_Test.scala 54:16]
    end
    if (io_vb_read_req) begin // @[src/test/scala/VPU1Route_Test.scala 80:29]
      vbResponse_0 <= io_vb_read_data_0; // @[src/test/scala/VPU1Route_Test.scala 80:29]
    end
    if (io_vb_read_req) begin // @[src/test/scala/VPU1Route_Test.scala 80:29]
      vbResponse_1 <= io_vb_read_data_1; // @[src/test/scala/VPU1Route_Test.scala 80:29]
    end
    if (io_vb_read_req) begin // @[src/test/scala/VPU1Route_Test.scala 80:29]
      vbResponse_2 <= io_vb_read_data_2; // @[src/test/scala/VPU1Route_Test.scala 80:29]
    end
    if (io_vb_read_req) begin // @[src/test/scala/VPU1Route_Test.scala 80:29]
      vbResponse_3 <= io_vb_read_data_3; // @[src/test/scala/VPU1Route_Test.scala 80:29]
    end
    if (io_vb_read_req) begin // @[src/test/scala/VPU1Route_Test.scala 80:29]
      vbResponse_4 <= io_vb_read_data_4; // @[src/test/scala/VPU1Route_Test.scala 80:29]
    end
    if (io_vb_read_req) begin // @[src/test/scala/VPU1Route_Test.scala 80:29]
      vbResponse_5 <= io_vb_read_data_5; // @[src/test/scala/VPU1Route_Test.scala 80:29]
    end
    if (io_vb_read_req) begin // @[src/test/scala/VPU1Route_Test.scala 80:29]
      vbResponse_6 <= io_vb_read_data_6; // @[src/test/scala/VPU1Route_Test.scala 80:29]
    end
    if (io_vb_read_req) begin // @[src/test/scala/VPU1Route_Test.scala 80:29]
      vbResponse_7 <= io_vb_read_data_7; // @[src/test/scala/VPU1Route_Test.scala 80:29]
    end
    if (io_vb_read_req) begin // @[src/test/scala/VPU1Route_Test.scala 80:29]
      vbResponse_8 <= io_vb_read_data_8; // @[src/test/scala/VPU1Route_Test.scala 80:29]
    end
    if (io_vb_read_req) begin // @[src/test/scala/VPU1Route_Test.scala 80:29]
      vbResponse_9 <= io_vb_read_data_9; // @[src/test/scala/VPU1Route_Test.scala 80:29]
    end
    if (io_vb_read_req) begin // @[src/test/scala/VPU1Route_Test.scala 80:29]
      vbResponse_10 <= io_vb_read_data_10; // @[src/test/scala/VPU1Route_Test.scala 80:29]
    end
    if (io_vb_read_req) begin // @[src/test/scala/VPU1Route_Test.scala 80:29]
      vbResponse_11 <= io_vb_read_data_11; // @[src/test/scala/VPU1Route_Test.scala 80:29]
    end
    if (io_vb_read_req) begin // @[src/test/scala/VPU1Route_Test.scala 80:29]
      vbResponse_12 <= io_vb_read_data_12; // @[src/test/scala/VPU1Route_Test.scala 80:29]
    end
    if (io_vb_read_req) begin // @[src/test/scala/VPU1Route_Test.scala 80:29]
      vbResponse_13 <= io_vb_read_data_13; // @[src/test/scala/VPU1Route_Test.scala 80:29]
    end
    if (io_vb_read_req) begin // @[src/test/scala/VPU1Route_Test.scala 80:29]
      vbResponse_14 <= io_vb_read_data_14; // @[src/test/scala/VPU1Route_Test.scala 80:29]
    end
    if (io_vb_read_req) begin // @[src/test/scala/VPU1Route_Test.scala 80:29]
      vbResponse_15 <= io_vb_read_data_15; // @[src/test/scala/VPU1Route_Test.scala 80:29]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  savedMode = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  savedRoute = _RAND_1[1:0];
  _RAND_2 = {1{`RANDOM}};
  vbResponse_0 = _RAND_2[7:0];
  _RAND_3 = {1{`RANDOM}};
  vbResponse_1 = _RAND_3[7:0];
  _RAND_4 = {1{`RANDOM}};
  vbResponse_2 = _RAND_4[7:0];
  _RAND_5 = {1{`RANDOM}};
  vbResponse_3 = _RAND_5[7:0];
  _RAND_6 = {1{`RANDOM}};
  vbResponse_4 = _RAND_6[7:0];
  _RAND_7 = {1{`RANDOM}};
  vbResponse_5 = _RAND_7[7:0];
  _RAND_8 = {1{`RANDOM}};
  vbResponse_6 = _RAND_8[7:0];
  _RAND_9 = {1{`RANDOM}};
  vbResponse_7 = _RAND_9[7:0];
  _RAND_10 = {1{`RANDOM}};
  vbResponse_8 = _RAND_10[7:0];
  _RAND_11 = {1{`RANDOM}};
  vbResponse_9 = _RAND_11[7:0];
  _RAND_12 = {1{`RANDOM}};
  vbResponse_10 = _RAND_12[7:0];
  _RAND_13 = {1{`RANDOM}};
  vbResponse_11 = _RAND_13[7:0];
  _RAND_14 = {1{`RANDOM}};
  vbResponse_12 = _RAND_14[7:0];
  _RAND_15 = {1{`RANDOM}};
  vbResponse_13 = _RAND_15[7:0];
  _RAND_16 = {1{`RANDOM}};
  vbResponse_14 = _RAND_16[7:0];
  _RAND_17 = {1{`RANDOM}};
  vbResponse_15 = _RAND_17[7:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
