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
  output       io_rd_valid, // @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
  output       io_lut_ready // @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
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
  reg [31:0] _RAND_51;
  reg [31:0] _RAND_52;
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
  reg  is_programmed; // @[src/main/scala/npu/utils/UniversalLUT.scala 57:31]
  reg  last_write_ack; // @[src/main/scala/npu/utils/UniversalLUT.scala 58:31]
  wire  _GEN_20 = last_write_ack | is_programmed; // @[src/main/scala/npu/utils/UniversalLUT.scala 60:25 61:19 57:31]
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
  assign io_lut_ready = is_programmed; // @[src/main/scala/npu/utils/UniversalLUT.scala 65:16]
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
    if (reset) begin // @[src/main/scala/npu/utils/UniversalLUT.scala 57:31]
      is_programmed <= 1'h0; // @[src/main/scala/npu/utils/UniversalLUT.scala 57:31]
    end else begin
      is_programmed <= _GEN_20;
    end
    if (reset) begin // @[src/main/scala/npu/utils/UniversalLUT.scala 58:31]
      last_write_ack <= 1'h0; // @[src/main/scala/npu/utils/UniversalLUT.scala 58:31]
    end else begin
      last_write_ack <= io_wr_en & io_wr_addr == 6'h3f; // @[src/main/scala/npu/utils/UniversalLUT.scala 58:31]
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
  is_programmed = _RAND_49[0:0];
  _RAND_50 = {1{`RANDOM}};
  last_write_ack = _RAND_50[0:0];
  _RAND_51 = {1{`RANDOM}};
  rd_col_delayed = _RAND_51[3:0];
  _RAND_52 = {1{`RANDOM}};
  io_rd_valid_REG = _RAND_52[0:0];
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
  output        io_lut_ready, // @[src/main/scala/npu/core/QuantActUnit.scala 42:14]
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
  wire  actLut_io_lut_ready; // @[src/main/scala/npu/core/QuantActUnit.scala 134:11]
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
    .io_rd_valid(actLut_io_rd_valid),
    .io_lut_ready(actLut_io_lut_ready)
  );
  assign io_out_qact = holdValid ? holdData : rawData; // @[src/main/scala/npu/core/QuantActUnit.scala 168:21]
  assign io_out_valid = run & (holdValid | rawValid); // @[src/main/scala/npu/core/QuantActUnit.scala 169:23]
  assign io_out_lookahead = s3Valid & run; // @[src/main/scala/npu/core/QuantActUnit.scala 179:31]
  assign io_busy = s1Valid | s2Valid | s3Valid | rawValid | holdValid; // @[src/main/scala/npu/core/QuantActUnit.scala 180:56]
  assign io_lut_ready = actLut_io_lut_ready; // @[src/main/scala/npu/core/QuantActUnit.scala 181:16]
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
  input         io_param_mode, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [31:0] io_matrix_param, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [1:0]  io_act_mask, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input         io_fusion_second, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input         io_stall, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input         io_soft_reset, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output        io_qparam_req_line, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [31:0] io_qparam_line_in_0, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [31:0] io_qparam_line_in_1, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [31:0] io_qparam_line_in_2, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [31:0] io_qparam_line_in_3, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [31:0] io_qparam_line_in_4, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [31:0] io_qparam_line_in_5, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [31:0] io_qparam_line_in_6, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [31:0] io_qparam_line_in_7, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [31:0] io_qparam_line_in_8, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [31:0] io_qparam_line_in_9, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [31:0] io_qparam_line_in_10, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [31:0] io_qparam_line_in_11, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [31:0] io_qparam_line_in_12, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [31:0] io_qparam_line_in_13, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [31:0] io_qparam_line_in_14, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input  [31:0] io_qparam_line_in_15, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  input         io_qparam_line_valid, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
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
  output        io_out_lookahead_1, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output        io_out_lookahead_2, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output        io_out_lookahead_3, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output        io_out_lookahead_4, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output        io_out_lookahead_5, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output        io_out_lookahead_6, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output        io_out_lookahead_7, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output        io_out_lookahead_8, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output        io_out_lookahead_9, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output        io_out_lookahead_10, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output        io_out_lookahead_11, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output        io_out_lookahead_12, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output        io_out_lookahead_13, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output        io_out_lookahead_14, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output        io_out_lookahead_15, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output        io_busy, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output        io_prefetch_ready, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output        io_lut_ready, // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
  output        io_sync_alert // @[src/main/scala/npu/core/QuantActUnit.scala 214:14]
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
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [31:0] _RAND_21;
  reg [31:0] _RAND_22;
  reg [31:0] _RAND_23;
  reg [31:0] _RAND_24;
  reg [31:0] _RAND_25;
  reg [31:0] _RAND_26;
  reg [31:0] _RAND_27;
  reg [31:0] _RAND_28;
  reg [31:0] _RAND_29;
  reg [31:0] _RAND_30;
  reg [31:0] _RAND_31;
  reg [31:0] _RAND_32;
  reg [31:0] _RAND_33;
  reg [31:0] _RAND_34;
  reg [31:0] _RAND_35;
  reg [31:0] _RAND_36;
`endif // RANDOMIZE_REG_INIT
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
  wire  cores_0_io_lut_ready; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
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
  wire  cores_1_io_lut_ready; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
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
  wire  cores_2_io_lut_ready; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
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
  wire  cores_3_io_lut_ready; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
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
  wire  cores_4_io_lut_ready; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
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
  wire  cores_5_io_lut_ready; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
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
  wire  cores_6_io_lut_ready; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
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
  wire  cores_7_io_lut_ready; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
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
  wire  cores_8_io_lut_ready; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
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
  wire  cores_9_io_lut_ready; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
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
  wire  cores_10_io_lut_ready; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
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
  wire  cores_11_io_lut_ready; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
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
  wire  cores_12_io_lut_ready; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
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
  wire  cores_13_io_lut_ready; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
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
  wire  cores_14_io_lut_ready; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
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
  wire  cores_15_io_lut_ready; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  cores_15_io_sync_alert; // @[src/main/scala/npu/core/QuantActUnit.scala 342:13]
  wire  run = ~io_stall; // @[src/main/scala/npu/core/QuantActUnit.scala 251:13]
  wire  perChannel = ~io_input_mode & io_param_mode; // @[src/main/scala/npu/core/QuantActUnit.scala 252:56]
  wire [7:0] anyValid_lo = {io_in_valid_7,io_in_valid_6,io_in_valid_5,io_in_valid_4,io_in_valid_3,io_in_valid_2,
    io_in_valid_1,io_in_valid_0}; // @[src/main/scala/npu/core/QuantActUnit.scala 255:30]
  wire [15:0] _anyValid_T = {io_in_valid_15,io_in_valid_14,io_in_valid_13,io_in_valid_12,io_in_valid_11,io_in_valid_10,
    io_in_valid_9,io_in_valid_8,anyValid_lo}; // @[src/main/scala/npu/core/QuantActUnit.scala 255:30]
  wire  anyValid = |_anyValid_T; // @[src/main/scala/npu/core/QuantActUnit.scala 255:37]
  wire  allValid = &_anyValid_T; // @[src/main/scala/npu/core/QuantActUnit.scala 256:37]
  wire  inputFire = allValid & run; // @[src/main/scala/npu/core/QuantActUnit.scala 257:28]
  reg [3:0] rowCounter; // @[src/main/scala/npu/core/QuantActUnit.scala 259:27]
  wire  tileStart = inputFire & rowCounter == 4'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 260:29]
  wire  tileEnd = inputFire & rowCounter == 4'hf; // @[src/main/scala/npu/core/QuantActUnit.scala 261:29]
  wire  _T = ~perChannel; // @[src/main/scala/npu/core/QuantActUnit.scala 263:25]
  wire  _T_1 = io_soft_reset | ~perChannel; // @[src/main/scala/npu/core/QuantActUnit.scala 263:22]
  wire [3:0] _rowCounter_T_1 = rowCounter + 4'h1; // @[src/main/scala/npu/core/QuantActUnit.scala 269:32]
  reg [31:0] activeParam_0; // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
  reg [31:0] activeParam_1; // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
  reg [31:0] activeParam_2; // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
  reg [31:0] activeParam_3; // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
  reg [31:0] activeParam_4; // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
  reg [31:0] activeParam_5; // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
  reg [31:0] activeParam_6; // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
  reg [31:0] activeParam_7; // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
  reg [31:0] activeParam_8; // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
  reg [31:0] activeParam_9; // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
  reg [31:0] activeParam_10; // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
  reg [31:0] activeParam_11; // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
  reg [31:0] activeParam_12; // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
  reg [31:0] activeParam_13; // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
  reg [31:0] activeParam_14; // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
  reg [31:0] activeParam_15; // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
  reg [31:0] shadowParam_0; // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
  reg [31:0] shadowParam_1; // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
  reg [31:0] shadowParam_2; // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
  reg [31:0] shadowParam_3; // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
  reg [31:0] shadowParam_4; // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
  reg [31:0] shadowParam_5; // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
  reg [31:0] shadowParam_6; // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
  reg [31:0] shadowParam_7; // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
  reg [31:0] shadowParam_8; // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
  reg [31:0] shadowParam_9; // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
  reg [31:0] shadowParam_10; // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
  reg [31:0] shadowParam_11; // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
  reg [31:0] shadowParam_12; // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
  reg [31:0] shadowParam_13; // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
  reg [31:0] shadowParam_14; // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
  reg [31:0] shadowParam_15; // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
  reg  activeValid; // @[src/main/scala/npu/core/QuantActUnit.scala 279:28]
  reg  shadowValid; // @[src/main/scala/npu/core/QuantActUnit.scala 280:28]
  reg  reqOutstanding; // @[src/main/scala/npu/core/QuantActUnit.scala 281:31]
  wire  consumeShadow = perChannel & tileStart; // @[src/main/scala/npu/core/QuantActUnit.scala 286:16]
  wire  _io_qparam_req_line_T_2 = ~reqOutstanding; // @[src/main/scala/npu/core/QuantActUnit.scala 290:5]
  wire  _io_qparam_req_line_T_3 = perChannel & ~io_soft_reset & _io_qparam_req_line_T_2; // @[src/main/scala/npu/core/QuantActUnit.scala 289:34]
  wire  _io_qparam_req_line_T_4 = ~shadowValid; // @[src/main/scala/npu/core/QuantActUnit.scala 291:6]
  wire  _io_qparam_req_line_T_5 = ~shadowValid | consumeShadow; // @[src/main/scala/npu/core/QuantActUnit.scala 291:19]
  wire  _GEN_3 = io_qparam_req_line | reqOutstanding; // @[src/main/scala/npu/core/QuantActUnit.scala 300:30 301:22 281:31]
  wire  _GEN_20 = shadowValid | activeValid; // @[src/main/scala/npu/core/QuantActUnit.scala 305:25 307:21 279:28]
  wire  _GEN_38 = consumeShadow ? 1'h0 : shadowValid; // @[src/main/scala/npu/core/QuantActUnit.scala 304:25 309:19 280:28]
  wire  _GEN_55 = io_qparam_line_valid & perChannel | _GEN_38; // @[src/main/scala/npu/core/QuantActUnit.scala 313:46 315:19]
  wire [31:0] _effectiveParam_0_T = tileStart ? shadowParam_0 : activeParam_0; // @[src/main/scala/npu/core/QuantActUnit.scala 328:12]
  wire [31:0] _effectiveParam_1_T = tileStart ? shadowParam_1 : activeParam_1; // @[src/main/scala/npu/core/QuantActUnit.scala 328:12]
  wire [31:0] _effectiveParam_2_T = tileStart ? shadowParam_2 : activeParam_2; // @[src/main/scala/npu/core/QuantActUnit.scala 328:12]
  wire [31:0] _effectiveParam_3_T = tileStart ? shadowParam_3 : activeParam_3; // @[src/main/scala/npu/core/QuantActUnit.scala 328:12]
  wire [31:0] _effectiveParam_4_T = tileStart ? shadowParam_4 : activeParam_4; // @[src/main/scala/npu/core/QuantActUnit.scala 328:12]
  wire [31:0] _effectiveParam_5_T = tileStart ? shadowParam_5 : activeParam_5; // @[src/main/scala/npu/core/QuantActUnit.scala 328:12]
  wire [31:0] _effectiveParam_6_T = tileStart ? shadowParam_6 : activeParam_6; // @[src/main/scala/npu/core/QuantActUnit.scala 328:12]
  wire [31:0] _effectiveParam_7_T = tileStart ? shadowParam_7 : activeParam_7; // @[src/main/scala/npu/core/QuantActUnit.scala 328:12]
  wire [31:0] _effectiveParam_8_T = tileStart ? shadowParam_8 : activeParam_8; // @[src/main/scala/npu/core/QuantActUnit.scala 328:12]
  wire [31:0] _effectiveParam_9_T = tileStart ? shadowParam_9 : activeParam_9; // @[src/main/scala/npu/core/QuantActUnit.scala 328:12]
  wire [31:0] _effectiveParam_10_T = tileStart ? shadowParam_10 : activeParam_10; // @[src/main/scala/npu/core/QuantActUnit.scala 328:12]
  wire [31:0] _effectiveParam_11_T = tileStart ? shadowParam_11 : activeParam_11; // @[src/main/scala/npu/core/QuantActUnit.scala 328:12]
  wire [31:0] _effectiveParam_12_T = tileStart ? shadowParam_12 : activeParam_12; // @[src/main/scala/npu/core/QuantActUnit.scala 328:12]
  wire [31:0] _effectiveParam_13_T = tileStart ? shadowParam_13 : activeParam_13; // @[src/main/scala/npu/core/QuantActUnit.scala 328:12]
  wire [31:0] _effectiveParam_14_T = tileStart ? shadowParam_14 : activeParam_14; // @[src/main/scala/npu/core/QuantActUnit.scala 328:12]
  wire [31:0] _effectiveParam_15_T = tileStart ? shadowParam_15 : activeParam_15; // @[src/main/scala/npu/core/QuantActUnit.scala 328:12]
  reg  primed; // @[src/main/scala/npu/core/QuantActUnit.scala 333:23]
  wire  _GEN_92 = shadowValid | primed; // @[src/main/scala/npu/core/QuantActUnit.scala 336:27 337:12 333:23]
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
  wire  _io_lut_ready_WIRE_1 = cores_1_io_lut_ready; // @[src/main/scala/npu/core/QuantActUnit.scala 372:{12,12}]
  wire  _io_lut_ready_WIRE_0 = cores_0_io_lut_ready; // @[src/main/scala/npu/core/QuantActUnit.scala 372:{12,12}]
  wire  _io_lut_ready_WIRE_3 = cores_3_io_lut_ready; // @[src/main/scala/npu/core/QuantActUnit.scala 372:{12,12}]
  wire  _io_lut_ready_WIRE_2 = cores_2_io_lut_ready; // @[src/main/scala/npu/core/QuantActUnit.scala 372:{12,12}]
  wire  _io_lut_ready_WIRE_5 = cores_5_io_lut_ready; // @[src/main/scala/npu/core/QuantActUnit.scala 372:{12,12}]
  wire  _io_lut_ready_WIRE_4 = cores_4_io_lut_ready; // @[src/main/scala/npu/core/QuantActUnit.scala 372:{12,12}]
  wire  _io_lut_ready_WIRE_7 = cores_7_io_lut_ready; // @[src/main/scala/npu/core/QuantActUnit.scala 372:{12,12}]
  wire  _io_lut_ready_WIRE_6 = cores_6_io_lut_ready; // @[src/main/scala/npu/core/QuantActUnit.scala 372:{12,12}]
  wire [7:0] io_lut_ready_lo = {_io_lut_ready_WIRE_7,_io_lut_ready_WIRE_6,_io_lut_ready_WIRE_5,_io_lut_ready_WIRE_4,
    _io_lut_ready_WIRE_3,_io_lut_ready_WIRE_2,_io_lut_ready_WIRE_1,_io_lut_ready_WIRE_0}; // @[src/main/scala/npu/core/QuantActUnit.scala 372:40]
  wire  _io_lut_ready_WIRE_9 = cores_9_io_lut_ready; // @[src/main/scala/npu/core/QuantActUnit.scala 372:{12,12}]
  wire  _io_lut_ready_WIRE_8 = cores_8_io_lut_ready; // @[src/main/scala/npu/core/QuantActUnit.scala 372:{12,12}]
  wire  _io_lut_ready_WIRE_11 = cores_11_io_lut_ready; // @[src/main/scala/npu/core/QuantActUnit.scala 372:{12,12}]
  wire  _io_lut_ready_WIRE_10 = cores_10_io_lut_ready; // @[src/main/scala/npu/core/QuantActUnit.scala 372:{12,12}]
  wire  _io_lut_ready_WIRE_13 = cores_13_io_lut_ready; // @[src/main/scala/npu/core/QuantActUnit.scala 372:{12,12}]
  wire  _io_lut_ready_WIRE_12 = cores_12_io_lut_ready; // @[src/main/scala/npu/core/QuantActUnit.scala 372:{12,12}]
  wire  _io_lut_ready_WIRE_15 = cores_15_io_lut_ready; // @[src/main/scala/npu/core/QuantActUnit.scala 372:{12,12}]
  wire  _io_lut_ready_WIRE_14 = cores_14_io_lut_ready; // @[src/main/scala/npu/core/QuantActUnit.scala 372:{12,12}]
  wire [15:0] _io_lut_ready_T = {_io_lut_ready_WIRE_15,_io_lut_ready_WIRE_14,_io_lut_ready_WIRE_13,_io_lut_ready_WIRE_12
    ,_io_lut_ready_WIRE_11,_io_lut_ready_WIRE_10,_io_lut_ready_WIRE_9,_io_lut_ready_WIRE_8,io_lut_ready_lo}; // @[src/main/scala/npu/core/QuantActUnit.scala 372:40]
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
  wire  firstTileWithoutShadow = consumeShadow & _io_qparam_req_line_T_4; // @[src/main/scala/npu/core/QuantActUnit.scala 381:46]
  wire  laterTileWithoutActive = perChannel & inputFire & ~tileStart & ~activeValid; // @[src/main/scala/npu/core/QuantActUnit.scala 383:43]
  wire  _unexpectedResponse_T_1 = perChannel & io_qparam_line_valid & shadowValid; // @[src/main/scala/npu/core/QuantActUnit.scala 386:40]
  wire  _unexpectedResponse_T_2 = ~consumeShadow; // @[src/main/scala/npu/core/QuantActUnit.scala 388:5]
  wire  unexpectedResponse = _unexpectedResponse_T_1 & _unexpectedResponse_T_2; // @[src/main/scala/npu/core/QuantActUnit.scala 387:17]
  wire  _io_sync_alert_T = coreAlert | laneMismatch; // @[src/main/scala/npu/core/QuantActUnit.scala 391:15]
  wire  _io_sync_alert_T_1 = _io_sync_alert_T | firstTileWithoutShadow; // @[src/main/scala/npu/core/QuantActUnit.scala 392:18]
  wire  _io_sync_alert_T_2 = _io_sync_alert_T_1 | laterTileWithoutActive; // @[src/main/scala/npu/core/QuantActUnit.scala 393:28]
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
    .io_lut_ready(cores_0_io_lut_ready),
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
    .io_lut_ready(cores_1_io_lut_ready),
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
    .io_lut_ready(cores_2_io_lut_ready),
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
    .io_lut_ready(cores_3_io_lut_ready),
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
    .io_lut_ready(cores_4_io_lut_ready),
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
    .io_lut_ready(cores_5_io_lut_ready),
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
    .io_lut_ready(cores_6_io_lut_ready),
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
    .io_lut_ready(cores_7_io_lut_ready),
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
    .io_lut_ready(cores_8_io_lut_ready),
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
    .io_lut_ready(cores_9_io_lut_ready),
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
    .io_lut_ready(cores_10_io_lut_ready),
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
    .io_lut_ready(cores_11_io_lut_ready),
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
    .io_lut_ready(cores_12_io_lut_ready),
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
    .io_lut_ready(cores_13_io_lut_ready),
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
    .io_lut_ready(cores_14_io_lut_ready),
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
    .io_lut_ready(cores_15_io_lut_ready),
    .io_sync_alert(cores_15_io_sync_alert)
  );
  assign io_qparam_req_line = _io_qparam_req_line_T_3 & _io_qparam_req_line_T_5; // @[src/main/scala/npu/core/QuantActUnit.scala 290:21]
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
  assign io_out_lookahead_1 = cores_1_io_out_lookahead; // @[src/main/scala/npu/core/QuantActUnit.scala 366:25]
  assign io_out_lookahead_2 = cores_2_io_out_lookahead; // @[src/main/scala/npu/core/QuantActUnit.scala 366:25]
  assign io_out_lookahead_3 = cores_3_io_out_lookahead; // @[src/main/scala/npu/core/QuantActUnit.scala 366:25]
  assign io_out_lookahead_4 = cores_4_io_out_lookahead; // @[src/main/scala/npu/core/QuantActUnit.scala 366:25]
  assign io_out_lookahead_5 = cores_5_io_out_lookahead; // @[src/main/scala/npu/core/QuantActUnit.scala 366:25]
  assign io_out_lookahead_6 = cores_6_io_out_lookahead; // @[src/main/scala/npu/core/QuantActUnit.scala 366:25]
  assign io_out_lookahead_7 = cores_7_io_out_lookahead; // @[src/main/scala/npu/core/QuantActUnit.scala 366:25]
  assign io_out_lookahead_8 = cores_8_io_out_lookahead; // @[src/main/scala/npu/core/QuantActUnit.scala 366:25]
  assign io_out_lookahead_9 = cores_9_io_out_lookahead; // @[src/main/scala/npu/core/QuantActUnit.scala 366:25]
  assign io_out_lookahead_10 = cores_10_io_out_lookahead; // @[src/main/scala/npu/core/QuantActUnit.scala 366:25]
  assign io_out_lookahead_11 = cores_11_io_out_lookahead; // @[src/main/scala/npu/core/QuantActUnit.scala 366:25]
  assign io_out_lookahead_12 = cores_12_io_out_lookahead; // @[src/main/scala/npu/core/QuantActUnit.scala 366:25]
  assign io_out_lookahead_13 = cores_13_io_out_lookahead; // @[src/main/scala/npu/core/QuantActUnit.scala 366:25]
  assign io_out_lookahead_14 = cores_14_io_out_lookahead; // @[src/main/scala/npu/core/QuantActUnit.scala 366:25]
  assign io_out_lookahead_15 = cores_15_io_out_lookahead; // @[src/main/scala/npu/core/QuantActUnit.scala 366:25]
  assign io_busy = |_io_busy_T; // @[src/main/scala/npu/core/QuantActUnit.scala 369:51]
  assign io_prefetch_ready = _T | primed & io_lut_ready; // @[src/main/scala/npu/core/QuantActUnit.scala 375:17]
  assign io_lut_ready = &_io_lut_ready_T; // @[src/main/scala/npu/core/QuantActUnit.scala 372:47]
  assign io_sync_alert = _io_sync_alert_T_2 | unexpectedResponse; // @[src/main/scala/npu/core/QuantActUnit.scala 394:28]
  assign cores_0_clock = clock;
  assign cores_0_reset = reset;
  assign cores_0_io_in_tpu = io_in_tpu_0; // @[src/main/scala/npu/core/QuantActUnit.scala 351:24]
  assign cores_0_io_in_direct = io_in_direct_0; // @[src/main/scala/npu/core/QuantActUnit.scala 352:27]
  assign cores_0_io_input_mode = io_input_mode; // @[src/main/scala/npu/core/QuantActUnit.scala 353:28]
  assign cores_0_io_in_valid = io_in_valid_0; // @[src/main/scala/npu/core/QuantActUnit.scala 354:26]
  assign cores_0_io_param = perChannel ? _effectiveParam_0_T : io_matrix_param; // @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
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
  assign cores_1_io_param = perChannel ? _effectiveParam_1_T : io_matrix_param; // @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
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
  assign cores_2_io_param = perChannel ? _effectiveParam_2_T : io_matrix_param; // @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
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
  assign cores_3_io_param = perChannel ? _effectiveParam_3_T : io_matrix_param; // @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
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
  assign cores_4_io_param = perChannel ? _effectiveParam_4_T : io_matrix_param; // @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
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
  assign cores_5_io_param = perChannel ? _effectiveParam_5_T : io_matrix_param; // @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
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
  assign cores_6_io_param = perChannel ? _effectiveParam_6_T : io_matrix_param; // @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
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
  assign cores_7_io_param = perChannel ? _effectiveParam_7_T : io_matrix_param; // @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
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
  assign cores_8_io_param = perChannel ? _effectiveParam_8_T : io_matrix_param; // @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
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
  assign cores_9_io_param = perChannel ? _effectiveParam_9_T : io_matrix_param; // @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
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
  assign cores_10_io_param = perChannel ? _effectiveParam_10_T : io_matrix_param; // @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
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
  assign cores_11_io_param = perChannel ? _effectiveParam_11_T : io_matrix_param; // @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
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
  assign cores_12_io_param = perChannel ? _effectiveParam_12_T : io_matrix_param; // @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
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
  assign cores_13_io_param = perChannel ? _effectiveParam_13_T : io_matrix_param; // @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
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
  assign cores_14_io_param = perChannel ? _effectiveParam_14_T : io_matrix_param; // @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
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
  assign cores_15_io_param = perChannel ? _effectiveParam_15_T : io_matrix_param; // @[src/main/scala/npu/core/QuantActUnit.scala 326:10]
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
  always @(posedge clock) begin
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 259:27]
      rowCounter <= 4'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 259:27]
    end else if (io_soft_reset | ~perChannel) begin // @[src/main/scala/npu/core/QuantActUnit.scala 263:38]
      rowCounter <= 4'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 264:16]
    end else if (inputFire) begin // @[src/main/scala/npu/core/QuantActUnit.scala 265:25]
      if (tileEnd) begin // @[src/main/scala/npu/core/QuantActUnit.scala 266:19]
        rowCounter <= 4'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 267:18]
      end else begin
        rowCounter <= _rowCounter_T_1; // @[src/main/scala/npu/core/QuantActUnit.scala 269:18]
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
      activeParam_0 <= 32'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
    end else if (!(_T_1)) begin // @[src/main/scala/npu/core/QuantActUnit.scala 295:38]
      if (consumeShadow) begin // @[src/main/scala/npu/core/QuantActUnit.scala 304:25]
        if (shadowValid) begin // @[src/main/scala/npu/core/QuantActUnit.scala 305:25]
          activeParam_0 <= shadowParam_0; // @[src/main/scala/npu/core/QuantActUnit.scala 306:21]
        end
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
      activeParam_1 <= 32'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
    end else if (!(_T_1)) begin // @[src/main/scala/npu/core/QuantActUnit.scala 295:38]
      if (consumeShadow) begin // @[src/main/scala/npu/core/QuantActUnit.scala 304:25]
        if (shadowValid) begin // @[src/main/scala/npu/core/QuantActUnit.scala 305:25]
          activeParam_1 <= shadowParam_1; // @[src/main/scala/npu/core/QuantActUnit.scala 306:21]
        end
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
      activeParam_2 <= 32'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
    end else if (!(_T_1)) begin // @[src/main/scala/npu/core/QuantActUnit.scala 295:38]
      if (consumeShadow) begin // @[src/main/scala/npu/core/QuantActUnit.scala 304:25]
        if (shadowValid) begin // @[src/main/scala/npu/core/QuantActUnit.scala 305:25]
          activeParam_2 <= shadowParam_2; // @[src/main/scala/npu/core/QuantActUnit.scala 306:21]
        end
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
      activeParam_3 <= 32'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
    end else if (!(_T_1)) begin // @[src/main/scala/npu/core/QuantActUnit.scala 295:38]
      if (consumeShadow) begin // @[src/main/scala/npu/core/QuantActUnit.scala 304:25]
        if (shadowValid) begin // @[src/main/scala/npu/core/QuantActUnit.scala 305:25]
          activeParam_3 <= shadowParam_3; // @[src/main/scala/npu/core/QuantActUnit.scala 306:21]
        end
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
      activeParam_4 <= 32'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
    end else if (!(_T_1)) begin // @[src/main/scala/npu/core/QuantActUnit.scala 295:38]
      if (consumeShadow) begin // @[src/main/scala/npu/core/QuantActUnit.scala 304:25]
        if (shadowValid) begin // @[src/main/scala/npu/core/QuantActUnit.scala 305:25]
          activeParam_4 <= shadowParam_4; // @[src/main/scala/npu/core/QuantActUnit.scala 306:21]
        end
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
      activeParam_5 <= 32'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
    end else if (!(_T_1)) begin // @[src/main/scala/npu/core/QuantActUnit.scala 295:38]
      if (consumeShadow) begin // @[src/main/scala/npu/core/QuantActUnit.scala 304:25]
        if (shadowValid) begin // @[src/main/scala/npu/core/QuantActUnit.scala 305:25]
          activeParam_5 <= shadowParam_5; // @[src/main/scala/npu/core/QuantActUnit.scala 306:21]
        end
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
      activeParam_6 <= 32'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
    end else if (!(_T_1)) begin // @[src/main/scala/npu/core/QuantActUnit.scala 295:38]
      if (consumeShadow) begin // @[src/main/scala/npu/core/QuantActUnit.scala 304:25]
        if (shadowValid) begin // @[src/main/scala/npu/core/QuantActUnit.scala 305:25]
          activeParam_6 <= shadowParam_6; // @[src/main/scala/npu/core/QuantActUnit.scala 306:21]
        end
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
      activeParam_7 <= 32'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
    end else if (!(_T_1)) begin // @[src/main/scala/npu/core/QuantActUnit.scala 295:38]
      if (consumeShadow) begin // @[src/main/scala/npu/core/QuantActUnit.scala 304:25]
        if (shadowValid) begin // @[src/main/scala/npu/core/QuantActUnit.scala 305:25]
          activeParam_7 <= shadowParam_7; // @[src/main/scala/npu/core/QuantActUnit.scala 306:21]
        end
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
      activeParam_8 <= 32'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
    end else if (!(_T_1)) begin // @[src/main/scala/npu/core/QuantActUnit.scala 295:38]
      if (consumeShadow) begin // @[src/main/scala/npu/core/QuantActUnit.scala 304:25]
        if (shadowValid) begin // @[src/main/scala/npu/core/QuantActUnit.scala 305:25]
          activeParam_8 <= shadowParam_8; // @[src/main/scala/npu/core/QuantActUnit.scala 306:21]
        end
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
      activeParam_9 <= 32'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
    end else if (!(_T_1)) begin // @[src/main/scala/npu/core/QuantActUnit.scala 295:38]
      if (consumeShadow) begin // @[src/main/scala/npu/core/QuantActUnit.scala 304:25]
        if (shadowValid) begin // @[src/main/scala/npu/core/QuantActUnit.scala 305:25]
          activeParam_9 <= shadowParam_9; // @[src/main/scala/npu/core/QuantActUnit.scala 306:21]
        end
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
      activeParam_10 <= 32'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
    end else if (!(_T_1)) begin // @[src/main/scala/npu/core/QuantActUnit.scala 295:38]
      if (consumeShadow) begin // @[src/main/scala/npu/core/QuantActUnit.scala 304:25]
        if (shadowValid) begin // @[src/main/scala/npu/core/QuantActUnit.scala 305:25]
          activeParam_10 <= shadowParam_10; // @[src/main/scala/npu/core/QuantActUnit.scala 306:21]
        end
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
      activeParam_11 <= 32'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
    end else if (!(_T_1)) begin // @[src/main/scala/npu/core/QuantActUnit.scala 295:38]
      if (consumeShadow) begin // @[src/main/scala/npu/core/QuantActUnit.scala 304:25]
        if (shadowValid) begin // @[src/main/scala/npu/core/QuantActUnit.scala 305:25]
          activeParam_11 <= shadowParam_11; // @[src/main/scala/npu/core/QuantActUnit.scala 306:21]
        end
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
      activeParam_12 <= 32'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
    end else if (!(_T_1)) begin // @[src/main/scala/npu/core/QuantActUnit.scala 295:38]
      if (consumeShadow) begin // @[src/main/scala/npu/core/QuantActUnit.scala 304:25]
        if (shadowValid) begin // @[src/main/scala/npu/core/QuantActUnit.scala 305:25]
          activeParam_12 <= shadowParam_12; // @[src/main/scala/npu/core/QuantActUnit.scala 306:21]
        end
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
      activeParam_13 <= 32'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
    end else if (!(_T_1)) begin // @[src/main/scala/npu/core/QuantActUnit.scala 295:38]
      if (consumeShadow) begin // @[src/main/scala/npu/core/QuantActUnit.scala 304:25]
        if (shadowValid) begin // @[src/main/scala/npu/core/QuantActUnit.scala 305:25]
          activeParam_13 <= shadowParam_13; // @[src/main/scala/npu/core/QuantActUnit.scala 306:21]
        end
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
      activeParam_14 <= 32'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
    end else if (!(_T_1)) begin // @[src/main/scala/npu/core/QuantActUnit.scala 295:38]
      if (consumeShadow) begin // @[src/main/scala/npu/core/QuantActUnit.scala 304:25]
        if (shadowValid) begin // @[src/main/scala/npu/core/QuantActUnit.scala 305:25]
          activeParam_14 <= shadowParam_14; // @[src/main/scala/npu/core/QuantActUnit.scala 306:21]
        end
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
      activeParam_15 <= 32'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 274:12]
    end else if (!(_T_1)) begin // @[src/main/scala/npu/core/QuantActUnit.scala 295:38]
      if (consumeShadow) begin // @[src/main/scala/npu/core/QuantActUnit.scala 304:25]
        if (shadowValid) begin // @[src/main/scala/npu/core/QuantActUnit.scala 305:25]
          activeParam_15 <= shadowParam_15; // @[src/main/scala/npu/core/QuantActUnit.scala 306:21]
        end
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
      shadowParam_0 <= 32'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
    end else if (!(_T_1)) begin // @[src/main/scala/npu/core/QuantActUnit.scala 295:38]
      if (io_qparam_line_valid & perChannel) begin // @[src/main/scala/npu/core/QuantActUnit.scala 313:46]
        shadowParam_0 <= io_qparam_line_in_0; // @[src/main/scala/npu/core/QuantActUnit.scala 314:19]
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
      shadowParam_1 <= 32'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
    end else if (!(_T_1)) begin // @[src/main/scala/npu/core/QuantActUnit.scala 295:38]
      if (io_qparam_line_valid & perChannel) begin // @[src/main/scala/npu/core/QuantActUnit.scala 313:46]
        shadowParam_1 <= io_qparam_line_in_1; // @[src/main/scala/npu/core/QuantActUnit.scala 314:19]
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
      shadowParam_2 <= 32'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
    end else if (!(_T_1)) begin // @[src/main/scala/npu/core/QuantActUnit.scala 295:38]
      if (io_qparam_line_valid & perChannel) begin // @[src/main/scala/npu/core/QuantActUnit.scala 313:46]
        shadowParam_2 <= io_qparam_line_in_2; // @[src/main/scala/npu/core/QuantActUnit.scala 314:19]
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
      shadowParam_3 <= 32'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
    end else if (!(_T_1)) begin // @[src/main/scala/npu/core/QuantActUnit.scala 295:38]
      if (io_qparam_line_valid & perChannel) begin // @[src/main/scala/npu/core/QuantActUnit.scala 313:46]
        shadowParam_3 <= io_qparam_line_in_3; // @[src/main/scala/npu/core/QuantActUnit.scala 314:19]
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
      shadowParam_4 <= 32'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
    end else if (!(_T_1)) begin // @[src/main/scala/npu/core/QuantActUnit.scala 295:38]
      if (io_qparam_line_valid & perChannel) begin // @[src/main/scala/npu/core/QuantActUnit.scala 313:46]
        shadowParam_4 <= io_qparam_line_in_4; // @[src/main/scala/npu/core/QuantActUnit.scala 314:19]
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
      shadowParam_5 <= 32'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
    end else if (!(_T_1)) begin // @[src/main/scala/npu/core/QuantActUnit.scala 295:38]
      if (io_qparam_line_valid & perChannel) begin // @[src/main/scala/npu/core/QuantActUnit.scala 313:46]
        shadowParam_5 <= io_qparam_line_in_5; // @[src/main/scala/npu/core/QuantActUnit.scala 314:19]
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
      shadowParam_6 <= 32'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
    end else if (!(_T_1)) begin // @[src/main/scala/npu/core/QuantActUnit.scala 295:38]
      if (io_qparam_line_valid & perChannel) begin // @[src/main/scala/npu/core/QuantActUnit.scala 313:46]
        shadowParam_6 <= io_qparam_line_in_6; // @[src/main/scala/npu/core/QuantActUnit.scala 314:19]
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
      shadowParam_7 <= 32'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
    end else if (!(_T_1)) begin // @[src/main/scala/npu/core/QuantActUnit.scala 295:38]
      if (io_qparam_line_valid & perChannel) begin // @[src/main/scala/npu/core/QuantActUnit.scala 313:46]
        shadowParam_7 <= io_qparam_line_in_7; // @[src/main/scala/npu/core/QuantActUnit.scala 314:19]
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
      shadowParam_8 <= 32'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
    end else if (!(_T_1)) begin // @[src/main/scala/npu/core/QuantActUnit.scala 295:38]
      if (io_qparam_line_valid & perChannel) begin // @[src/main/scala/npu/core/QuantActUnit.scala 313:46]
        shadowParam_8 <= io_qparam_line_in_8; // @[src/main/scala/npu/core/QuantActUnit.scala 314:19]
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
      shadowParam_9 <= 32'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
    end else if (!(_T_1)) begin // @[src/main/scala/npu/core/QuantActUnit.scala 295:38]
      if (io_qparam_line_valid & perChannel) begin // @[src/main/scala/npu/core/QuantActUnit.scala 313:46]
        shadowParam_9 <= io_qparam_line_in_9; // @[src/main/scala/npu/core/QuantActUnit.scala 314:19]
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
      shadowParam_10 <= 32'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
    end else if (!(_T_1)) begin // @[src/main/scala/npu/core/QuantActUnit.scala 295:38]
      if (io_qparam_line_valid & perChannel) begin // @[src/main/scala/npu/core/QuantActUnit.scala 313:46]
        shadowParam_10 <= io_qparam_line_in_10; // @[src/main/scala/npu/core/QuantActUnit.scala 314:19]
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
      shadowParam_11 <= 32'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
    end else if (!(_T_1)) begin // @[src/main/scala/npu/core/QuantActUnit.scala 295:38]
      if (io_qparam_line_valid & perChannel) begin // @[src/main/scala/npu/core/QuantActUnit.scala 313:46]
        shadowParam_11 <= io_qparam_line_in_11; // @[src/main/scala/npu/core/QuantActUnit.scala 314:19]
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
      shadowParam_12 <= 32'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
    end else if (!(_T_1)) begin // @[src/main/scala/npu/core/QuantActUnit.scala 295:38]
      if (io_qparam_line_valid & perChannel) begin // @[src/main/scala/npu/core/QuantActUnit.scala 313:46]
        shadowParam_12 <= io_qparam_line_in_12; // @[src/main/scala/npu/core/QuantActUnit.scala 314:19]
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
      shadowParam_13 <= 32'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
    end else if (!(_T_1)) begin // @[src/main/scala/npu/core/QuantActUnit.scala 295:38]
      if (io_qparam_line_valid & perChannel) begin // @[src/main/scala/npu/core/QuantActUnit.scala 313:46]
        shadowParam_13 <= io_qparam_line_in_13; // @[src/main/scala/npu/core/QuantActUnit.scala 314:19]
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
      shadowParam_14 <= 32'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
    end else if (!(_T_1)) begin // @[src/main/scala/npu/core/QuantActUnit.scala 295:38]
      if (io_qparam_line_valid & perChannel) begin // @[src/main/scala/npu/core/QuantActUnit.scala 313:46]
        shadowParam_14 <= io_qparam_line_in_14; // @[src/main/scala/npu/core/QuantActUnit.scala 314:19]
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
      shadowParam_15 <= 32'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 277:12]
    end else if (!(_T_1)) begin // @[src/main/scala/npu/core/QuantActUnit.scala 295:38]
      if (io_qparam_line_valid & perChannel) begin // @[src/main/scala/npu/core/QuantActUnit.scala 313:46]
        shadowParam_15 <= io_qparam_line_in_15; // @[src/main/scala/npu/core/QuantActUnit.scala 314:19]
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 279:28]
      activeValid <= 1'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 279:28]
    end else if (_T_1) begin // @[src/main/scala/npu/core/QuantActUnit.scala 295:38]
      activeValid <= 1'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 296:17]
    end else if (consumeShadow) begin // @[src/main/scala/npu/core/QuantActUnit.scala 304:25]
      activeValid <= _GEN_20;
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 280:28]
      shadowValid <= 1'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 280:28]
    end else if (_T_1) begin // @[src/main/scala/npu/core/QuantActUnit.scala 295:38]
      shadowValid <= 1'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 297:17]
    end else begin
      shadowValid <= _GEN_55;
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 281:31]
      reqOutstanding <= 1'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 281:31]
    end else if (_T_1) begin // @[src/main/scala/npu/core/QuantActUnit.scala 295:38]
      reqOutstanding <= 1'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 298:20]
    end else if (io_qparam_line_valid & perChannel) begin // @[src/main/scala/npu/core/QuantActUnit.scala 313:46]
      reqOutstanding <= 1'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 316:22]
    end else begin
      reqOutstanding <= _GEN_3;
    end
    if (reset) begin // @[src/main/scala/npu/core/QuantActUnit.scala 333:23]
      primed <= 1'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 333:23]
    end else if (_T_1) begin // @[src/main/scala/npu/core/QuantActUnit.scala 334:38]
      primed <= 1'h0; // @[src/main/scala/npu/core/QuantActUnit.scala 335:12]
    end else begin
      primed <= _GEN_92;
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
  rowCounter = _RAND_0[3:0];
  _RAND_1 = {1{`RANDOM}};
  activeParam_0 = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  activeParam_1 = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  activeParam_2 = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  activeParam_3 = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  activeParam_4 = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  activeParam_5 = _RAND_6[31:0];
  _RAND_7 = {1{`RANDOM}};
  activeParam_6 = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  activeParam_7 = _RAND_8[31:0];
  _RAND_9 = {1{`RANDOM}};
  activeParam_8 = _RAND_9[31:0];
  _RAND_10 = {1{`RANDOM}};
  activeParam_9 = _RAND_10[31:0];
  _RAND_11 = {1{`RANDOM}};
  activeParam_10 = _RAND_11[31:0];
  _RAND_12 = {1{`RANDOM}};
  activeParam_11 = _RAND_12[31:0];
  _RAND_13 = {1{`RANDOM}};
  activeParam_12 = _RAND_13[31:0];
  _RAND_14 = {1{`RANDOM}};
  activeParam_13 = _RAND_14[31:0];
  _RAND_15 = {1{`RANDOM}};
  activeParam_14 = _RAND_15[31:0];
  _RAND_16 = {1{`RANDOM}};
  activeParam_15 = _RAND_16[31:0];
  _RAND_17 = {1{`RANDOM}};
  shadowParam_0 = _RAND_17[31:0];
  _RAND_18 = {1{`RANDOM}};
  shadowParam_1 = _RAND_18[31:0];
  _RAND_19 = {1{`RANDOM}};
  shadowParam_2 = _RAND_19[31:0];
  _RAND_20 = {1{`RANDOM}};
  shadowParam_3 = _RAND_20[31:0];
  _RAND_21 = {1{`RANDOM}};
  shadowParam_4 = _RAND_21[31:0];
  _RAND_22 = {1{`RANDOM}};
  shadowParam_5 = _RAND_22[31:0];
  _RAND_23 = {1{`RANDOM}};
  shadowParam_6 = _RAND_23[31:0];
  _RAND_24 = {1{`RANDOM}};
  shadowParam_7 = _RAND_24[31:0];
  _RAND_25 = {1{`RANDOM}};
  shadowParam_8 = _RAND_25[31:0];
  _RAND_26 = {1{`RANDOM}};
  shadowParam_9 = _RAND_26[31:0];
  _RAND_27 = {1{`RANDOM}};
  shadowParam_10 = _RAND_27[31:0];
  _RAND_28 = {1{`RANDOM}};
  shadowParam_11 = _RAND_28[31:0];
  _RAND_29 = {1{`RANDOM}};
  shadowParam_12 = _RAND_29[31:0];
  _RAND_30 = {1{`RANDOM}};
  shadowParam_13 = _RAND_30[31:0];
  _RAND_31 = {1{`RANDOM}};
  shadowParam_14 = _RAND_31[31:0];
  _RAND_32 = {1{`RANDOM}};
  shadowParam_15 = _RAND_32[31:0];
  _RAND_33 = {1{`RANDOM}};
  activeValid = _RAND_33[0:0];
  _RAND_34 = {1{`RANDOM}};
  shadowValid = _RAND_34[0:0];
  _RAND_35 = {1{`RANDOM}};
  reqOutstanding = _RAND_35[0:0];
  _RAND_36 = {1{`RANDOM}};
  primed = _RAND_36[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
