module Universal_Wide_LUT( // @[src/main/scala/npu/utils/UniversalLUT.scala 6:7]
  input         clock, // @[src/main/scala/npu/utils/UniversalLUT.scala 6:7]
  input         reset, // @[src/main/scala/npu/utils/UniversalLUT.scala 6:7]
  input         io_wr_en, // @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
  input  [6:0]  io_wr_addr, // @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
  input  [15:0] io_wr_data_0, // @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
  input  [15:0] io_wr_data_1, // @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
  input  [15:0] io_wr_data_2, // @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
  input  [15:0] io_wr_data_3, // @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
  input  [15:0] io_wr_data_4, // @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
  input  [15:0] io_wr_data_5, // @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
  input  [15:0] io_wr_data_6, // @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
  input  [15:0] io_wr_data_7, // @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
  output        io_wr_valid, // @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
  input         io_rd_en, // @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
  input  [9:0]  io_rd_addr, // @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
  output [15:0] io_rd_data, // @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
  output        io_rd_valid, // @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
  output        io_lut_ready // @[src/main/scala/npu/utils/UniversalLUT.scala 20:14]
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
  reg [31:0] _RAND_24;
  reg [31:0] _RAND_25;
  reg [31:0] _RAND_26;
  reg [31:0] _RAND_27;
  reg [31:0] _RAND_28;
`endif // RANDOMIZE_REG_INIT
  reg [15:0] lut_mem_0 [0:127]; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_0_rd_vec_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [6:0] lut_mem_0_rd_vec_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [15:0] lut_mem_0_rd_vec_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [15:0] lut_mem_0_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [6:0] lut_mem_0_MPORT_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_0_MPORT_mask; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_0_MPORT_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  reg  lut_mem_0_rd_vec_en_pipe_0;
  reg [6:0] lut_mem_0_rd_vec_addr_pipe_0;
  reg [15:0] lut_mem_1 [0:127]; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_1_rd_vec_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [6:0] lut_mem_1_rd_vec_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [15:0] lut_mem_1_rd_vec_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [15:0] lut_mem_1_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [6:0] lut_mem_1_MPORT_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_1_MPORT_mask; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_1_MPORT_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  reg  lut_mem_1_rd_vec_en_pipe_0;
  reg [6:0] lut_mem_1_rd_vec_addr_pipe_0;
  reg [15:0] lut_mem_2 [0:127]; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_2_rd_vec_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [6:0] lut_mem_2_rd_vec_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [15:0] lut_mem_2_rd_vec_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [15:0] lut_mem_2_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [6:0] lut_mem_2_MPORT_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_2_MPORT_mask; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_2_MPORT_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  reg  lut_mem_2_rd_vec_en_pipe_0;
  reg [6:0] lut_mem_2_rd_vec_addr_pipe_0;
  reg [15:0] lut_mem_3 [0:127]; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_3_rd_vec_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [6:0] lut_mem_3_rd_vec_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [15:0] lut_mem_3_rd_vec_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [15:0] lut_mem_3_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [6:0] lut_mem_3_MPORT_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_3_MPORT_mask; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_3_MPORT_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  reg  lut_mem_3_rd_vec_en_pipe_0;
  reg [6:0] lut_mem_3_rd_vec_addr_pipe_0;
  reg [15:0] lut_mem_4 [0:127]; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_4_rd_vec_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [6:0] lut_mem_4_rd_vec_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [15:0] lut_mem_4_rd_vec_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [15:0] lut_mem_4_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [6:0] lut_mem_4_MPORT_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_4_MPORT_mask; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_4_MPORT_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  reg  lut_mem_4_rd_vec_en_pipe_0;
  reg [6:0] lut_mem_4_rd_vec_addr_pipe_0;
  reg [15:0] lut_mem_5 [0:127]; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_5_rd_vec_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [6:0] lut_mem_5_rd_vec_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [15:0] lut_mem_5_rd_vec_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [15:0] lut_mem_5_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [6:0] lut_mem_5_MPORT_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_5_MPORT_mask; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_5_MPORT_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  reg  lut_mem_5_rd_vec_en_pipe_0;
  reg [6:0] lut_mem_5_rd_vec_addr_pipe_0;
  reg [15:0] lut_mem_6 [0:127]; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_6_rd_vec_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [6:0] lut_mem_6_rd_vec_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [15:0] lut_mem_6_rd_vec_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [15:0] lut_mem_6_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [6:0] lut_mem_6_MPORT_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_6_MPORT_mask; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_6_MPORT_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  reg  lut_mem_6_rd_vec_en_pipe_0;
  reg [6:0] lut_mem_6_rd_vec_addr_pipe_0;
  reg [15:0] lut_mem_7 [0:127]; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_7_rd_vec_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [6:0] lut_mem_7_rd_vec_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [15:0] lut_mem_7_rd_vec_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [15:0] lut_mem_7_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire [6:0] lut_mem_7_MPORT_addr; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_7_MPORT_mask; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  wire  lut_mem_7_MPORT_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
  reg  lut_mem_7_rd_vec_en_pipe_0;
  reg [6:0] lut_mem_7_rd_vec_addr_pipe_0;
  reg  io_wr_valid_REG; // @[src/main/scala/npu/utils/UniversalLUT.scala 51:25]
  reg  is_programmed; // @[src/main/scala/npu/utils/UniversalLUT.scala 57:31]
  reg  last_write_ack; // @[src/main/scala/npu/utils/UniversalLUT.scala 58:31]
  wire  _GEN_12 = last_write_ack | is_programmed; // @[src/main/scala/npu/utils/UniversalLUT.scala 60:25 61:19 57:31]
  wire [2:0] rd_col = io_rd_addr[2:0]; // @[src/main/scala/npu/utils/UniversalLUT.scala 72:26]
  reg [2:0] rd_col_delayed; // @[src/main/scala/npu/utils/UniversalLUT.scala 78:33]
  wire [15:0] _GEN_18 = lut_mem_0_rd_vec_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
  wire [15:0] _GEN_19 = 3'h1 == rd_col_delayed ? lut_mem_1_rd_vec_data : _GEN_18; // @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
  wire [15:0] _GEN_20 = 3'h2 == rd_col_delayed ? lut_mem_2_rd_vec_data : _GEN_19; // @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
  wire [15:0] _GEN_21 = 3'h3 == rd_col_delayed ? lut_mem_3_rd_vec_data : _GEN_20; // @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
  wire [15:0] _GEN_22 = 3'h4 == rd_col_delayed ? lut_mem_4_rd_vec_data : _GEN_21; // @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
  wire [15:0] _GEN_23 = 3'h5 == rd_col_delayed ? lut_mem_5_rd_vec_data : _GEN_22; // @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
  wire [15:0] _GEN_24 = 3'h6 == rd_col_delayed ? lut_mem_6_rd_vec_data : _GEN_23; // @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
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
  assign io_wr_valid = io_wr_valid_REG; // @[src/main/scala/npu/utils/UniversalLUT.scala 51:15]
  assign io_rd_data = 3'h7 == rd_col_delayed ? lut_mem_7_rd_vec_data : _GEN_24; // @[src/main/scala/npu/utils/UniversalLUT.scala 81:{15,15}]
  assign io_rd_valid = io_rd_valid_REG; // @[src/main/scala/npu/utils/UniversalLUT.scala 84:15]
  assign io_lut_ready = is_programmed; // @[src/main/scala/npu/utils/UniversalLUT.scala 65:16]
  always @(posedge clock) begin
    if (lut_mem_0_MPORT_en & lut_mem_0_MPORT_mask) begin
      lut_mem_0[lut_mem_0_MPORT_addr] <= lut_mem_0_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
    end
    lut_mem_0_rd_vec_en_pipe_0 <= io_rd_en;
    if (io_rd_en) begin
      lut_mem_0_rd_vec_addr_pipe_0 <= io_rd_addr[9:3];
    end
    if (lut_mem_1_MPORT_en & lut_mem_1_MPORT_mask) begin
      lut_mem_1[lut_mem_1_MPORT_addr] <= lut_mem_1_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
    end
    lut_mem_1_rd_vec_en_pipe_0 <= io_rd_en;
    if (io_rd_en) begin
      lut_mem_1_rd_vec_addr_pipe_0 <= io_rd_addr[9:3];
    end
    if (lut_mem_2_MPORT_en & lut_mem_2_MPORT_mask) begin
      lut_mem_2[lut_mem_2_MPORT_addr] <= lut_mem_2_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
    end
    lut_mem_2_rd_vec_en_pipe_0 <= io_rd_en;
    if (io_rd_en) begin
      lut_mem_2_rd_vec_addr_pipe_0 <= io_rd_addr[9:3];
    end
    if (lut_mem_3_MPORT_en & lut_mem_3_MPORT_mask) begin
      lut_mem_3[lut_mem_3_MPORT_addr] <= lut_mem_3_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
    end
    lut_mem_3_rd_vec_en_pipe_0 <= io_rd_en;
    if (io_rd_en) begin
      lut_mem_3_rd_vec_addr_pipe_0 <= io_rd_addr[9:3];
    end
    if (lut_mem_4_MPORT_en & lut_mem_4_MPORT_mask) begin
      lut_mem_4[lut_mem_4_MPORT_addr] <= lut_mem_4_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
    end
    lut_mem_4_rd_vec_en_pipe_0 <= io_rd_en;
    if (io_rd_en) begin
      lut_mem_4_rd_vec_addr_pipe_0 <= io_rd_addr[9:3];
    end
    if (lut_mem_5_MPORT_en & lut_mem_5_MPORT_mask) begin
      lut_mem_5[lut_mem_5_MPORT_addr] <= lut_mem_5_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
    end
    lut_mem_5_rd_vec_en_pipe_0 <= io_rd_en;
    if (io_rd_en) begin
      lut_mem_5_rd_vec_addr_pipe_0 <= io_rd_addr[9:3];
    end
    if (lut_mem_6_MPORT_en & lut_mem_6_MPORT_mask) begin
      lut_mem_6[lut_mem_6_MPORT_addr] <= lut_mem_6_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
    end
    lut_mem_6_rd_vec_en_pipe_0 <= io_rd_en;
    if (io_rd_en) begin
      lut_mem_6_rd_vec_addr_pipe_0 <= io_rd_addr[9:3];
    end
    if (lut_mem_7_MPORT_en & lut_mem_7_MPORT_mask) begin
      lut_mem_7[lut_mem_7_MPORT_addr] <= lut_mem_7_MPORT_data; // @[src/main/scala/npu/utils/UniversalLUT.scala 41:28]
    end
    lut_mem_7_rd_vec_en_pipe_0 <= io_rd_en;
    if (io_rd_en) begin
      lut_mem_7_rd_vec_addr_pipe_0 <= io_rd_addr[9:3];
    end
    if (reset) begin // @[src/main/scala/npu/utils/UniversalLUT.scala 51:25]
      io_wr_valid_REG <= 1'h0; // @[src/main/scala/npu/utils/UniversalLUT.scala 51:25]
    end else begin
      io_wr_valid_REG <= io_wr_en; // @[src/main/scala/npu/utils/UniversalLUT.scala 51:25]
    end
    if (reset) begin // @[src/main/scala/npu/utils/UniversalLUT.scala 57:31]
      is_programmed <= 1'h0; // @[src/main/scala/npu/utils/UniversalLUT.scala 57:31]
    end else begin
      is_programmed <= _GEN_12;
    end
    if (reset) begin // @[src/main/scala/npu/utils/UniversalLUT.scala 58:31]
      last_write_ack <= 1'h0; // @[src/main/scala/npu/utils/UniversalLUT.scala 58:31]
    end else begin
      last_write_ack <= io_wr_en & io_wr_addr == 7'h7f; // @[src/main/scala/npu/utils/UniversalLUT.scala 58:31]
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
  for (initvar = 0; initvar < 128; initvar = initvar+1)
    lut_mem_0[initvar] = _RAND_0[15:0];
  _RAND_3 = {1{`RANDOM}};
  for (initvar = 0; initvar < 128; initvar = initvar+1)
    lut_mem_1[initvar] = _RAND_3[15:0];
  _RAND_6 = {1{`RANDOM}};
  for (initvar = 0; initvar < 128; initvar = initvar+1)
    lut_mem_2[initvar] = _RAND_6[15:0];
  _RAND_9 = {1{`RANDOM}};
  for (initvar = 0; initvar < 128; initvar = initvar+1)
    lut_mem_3[initvar] = _RAND_9[15:0];
  _RAND_12 = {1{`RANDOM}};
  for (initvar = 0; initvar < 128; initvar = initvar+1)
    lut_mem_4[initvar] = _RAND_12[15:0];
  _RAND_15 = {1{`RANDOM}};
  for (initvar = 0; initvar < 128; initvar = initvar+1)
    lut_mem_5[initvar] = _RAND_15[15:0];
  _RAND_18 = {1{`RANDOM}};
  for (initvar = 0; initvar < 128; initvar = initvar+1)
    lut_mem_6[initvar] = _RAND_18[15:0];
  _RAND_21 = {1{`RANDOM}};
  for (initvar = 0; initvar < 128; initvar = initvar+1)
    lut_mem_7[initvar] = _RAND_21[15:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  lut_mem_0_rd_vec_en_pipe_0 = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  lut_mem_0_rd_vec_addr_pipe_0 = _RAND_2[6:0];
  _RAND_4 = {1{`RANDOM}};
  lut_mem_1_rd_vec_en_pipe_0 = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  lut_mem_1_rd_vec_addr_pipe_0 = _RAND_5[6:0];
  _RAND_7 = {1{`RANDOM}};
  lut_mem_2_rd_vec_en_pipe_0 = _RAND_7[0:0];
  _RAND_8 = {1{`RANDOM}};
  lut_mem_2_rd_vec_addr_pipe_0 = _RAND_8[6:0];
  _RAND_10 = {1{`RANDOM}};
  lut_mem_3_rd_vec_en_pipe_0 = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  lut_mem_3_rd_vec_addr_pipe_0 = _RAND_11[6:0];
  _RAND_13 = {1{`RANDOM}};
  lut_mem_4_rd_vec_en_pipe_0 = _RAND_13[0:0];
  _RAND_14 = {1{`RANDOM}};
  lut_mem_4_rd_vec_addr_pipe_0 = _RAND_14[6:0];
  _RAND_16 = {1{`RANDOM}};
  lut_mem_5_rd_vec_en_pipe_0 = _RAND_16[0:0];
  _RAND_17 = {1{`RANDOM}};
  lut_mem_5_rd_vec_addr_pipe_0 = _RAND_17[6:0];
  _RAND_19 = {1{`RANDOM}};
  lut_mem_6_rd_vec_en_pipe_0 = _RAND_19[0:0];
  _RAND_20 = {1{`RANDOM}};
  lut_mem_6_rd_vec_addr_pipe_0 = _RAND_20[6:0];
  _RAND_22 = {1{`RANDOM}};
  lut_mem_7_rd_vec_en_pipe_0 = _RAND_22[0:0];
  _RAND_23 = {1{`RANDOM}};
  lut_mem_7_rd_vec_addr_pipe_0 = _RAND_23[6:0];
  _RAND_24 = {1{`RANDOM}};
  io_wr_valid_REG = _RAND_24[0:0];
  _RAND_25 = {1{`RANDOM}};
  is_programmed = _RAND_25[0:0];
  _RAND_26 = {1{`RANDOM}};
  last_write_ack = _RAND_26[0:0];
  _RAND_27 = {1{`RANDOM}};
  rd_col_delayed = _RAND_27[2:0];
  _RAND_28 = {1{`RANDOM}};
  io_rd_valid_REG = _RAND_28[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module RopePairCore( // @[src/main/scala/npu/core/Rope.scala 14:7]
  input         clock, // @[src/main/scala/npu/core/Rope.scala 14:7]
  input         reset, // @[src/main/scala/npu/core/Rope.scala 14:7]
  input  [7:0]  io_x_even, // @[src/main/scala/npu/core/Rope.scala 29:14]
  input  [7:0]  io_x_odd, // @[src/main/scala/npu/core/Rope.scala 29:14]
  input         io_in_valid, // @[src/main/scala/npu/core/Rope.scala 29:14]
  input  [9:0]  io_angle_idx, // @[src/main/scala/npu/core/Rope.scala 29:14]
  input         io_stall, // @[src/main/scala/npu/core/Rope.scala 29:14]
  input         io_lut_cos_wr_en, // @[src/main/scala/npu/core/Rope.scala 29:14]
  input         io_lut_sin_wr_en, // @[src/main/scala/npu/core/Rope.scala 29:14]
  input  [6:0]  io_lut_wr_addr, // @[src/main/scala/npu/core/Rope.scala 29:14]
  input  [15:0] io_lut_wr_data_0, // @[src/main/scala/npu/core/Rope.scala 29:14]
  input  [15:0] io_lut_wr_data_1, // @[src/main/scala/npu/core/Rope.scala 29:14]
  input  [15:0] io_lut_wr_data_2, // @[src/main/scala/npu/core/Rope.scala 29:14]
  input  [15:0] io_lut_wr_data_3, // @[src/main/scala/npu/core/Rope.scala 29:14]
  input  [15:0] io_lut_wr_data_4, // @[src/main/scala/npu/core/Rope.scala 29:14]
  input  [15:0] io_lut_wr_data_5, // @[src/main/scala/npu/core/Rope.scala 29:14]
  input  [15:0] io_lut_wr_data_6, // @[src/main/scala/npu/core/Rope.scala 29:14]
  input  [15:0] io_lut_wr_data_7, // @[src/main/scala/npu/core/Rope.scala 29:14]
  output [7:0]  io_y_even, // @[src/main/scala/npu/core/Rope.scala 29:14]
  output [7:0]  io_y_odd, // @[src/main/scala/npu/core/Rope.scala 29:14]
  output        io_out_valid, // @[src/main/scala/npu/core/Rope.scala 29:14]
  output        io_lut_ready, // @[src/main/scala/npu/core/Rope.scala 29:14]
  output        io_sync_alert // @[src/main/scala/npu/core/Rope.scala 29:14]
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
`endif // RANDOMIZE_REG_INIT
  wire  cosLut_clock; // @[src/main/scala/npu/core/Rope.scala 54:11]
  wire  cosLut_reset; // @[src/main/scala/npu/core/Rope.scala 54:11]
  wire  cosLut_io_wr_en; // @[src/main/scala/npu/core/Rope.scala 54:11]
  wire [6:0] cosLut_io_wr_addr; // @[src/main/scala/npu/core/Rope.scala 54:11]
  wire [15:0] cosLut_io_wr_data_0; // @[src/main/scala/npu/core/Rope.scala 54:11]
  wire [15:0] cosLut_io_wr_data_1; // @[src/main/scala/npu/core/Rope.scala 54:11]
  wire [15:0] cosLut_io_wr_data_2; // @[src/main/scala/npu/core/Rope.scala 54:11]
  wire [15:0] cosLut_io_wr_data_3; // @[src/main/scala/npu/core/Rope.scala 54:11]
  wire [15:0] cosLut_io_wr_data_4; // @[src/main/scala/npu/core/Rope.scala 54:11]
  wire [15:0] cosLut_io_wr_data_5; // @[src/main/scala/npu/core/Rope.scala 54:11]
  wire [15:0] cosLut_io_wr_data_6; // @[src/main/scala/npu/core/Rope.scala 54:11]
  wire [15:0] cosLut_io_wr_data_7; // @[src/main/scala/npu/core/Rope.scala 54:11]
  wire  cosLut_io_wr_valid; // @[src/main/scala/npu/core/Rope.scala 54:11]
  wire  cosLut_io_rd_en; // @[src/main/scala/npu/core/Rope.scala 54:11]
  wire [9:0] cosLut_io_rd_addr; // @[src/main/scala/npu/core/Rope.scala 54:11]
  wire [15:0] cosLut_io_rd_data; // @[src/main/scala/npu/core/Rope.scala 54:11]
  wire  cosLut_io_rd_valid; // @[src/main/scala/npu/core/Rope.scala 54:11]
  wire  cosLut_io_lut_ready; // @[src/main/scala/npu/core/Rope.scala 54:11]
  wire  sinLut_clock; // @[src/main/scala/npu/core/Rope.scala 57:11]
  wire  sinLut_reset; // @[src/main/scala/npu/core/Rope.scala 57:11]
  wire  sinLut_io_wr_en; // @[src/main/scala/npu/core/Rope.scala 57:11]
  wire [6:0] sinLut_io_wr_addr; // @[src/main/scala/npu/core/Rope.scala 57:11]
  wire [15:0] sinLut_io_wr_data_0; // @[src/main/scala/npu/core/Rope.scala 57:11]
  wire [15:0] sinLut_io_wr_data_1; // @[src/main/scala/npu/core/Rope.scala 57:11]
  wire [15:0] sinLut_io_wr_data_2; // @[src/main/scala/npu/core/Rope.scala 57:11]
  wire [15:0] sinLut_io_wr_data_3; // @[src/main/scala/npu/core/Rope.scala 57:11]
  wire [15:0] sinLut_io_wr_data_4; // @[src/main/scala/npu/core/Rope.scala 57:11]
  wire [15:0] sinLut_io_wr_data_5; // @[src/main/scala/npu/core/Rope.scala 57:11]
  wire [15:0] sinLut_io_wr_data_6; // @[src/main/scala/npu/core/Rope.scala 57:11]
  wire [15:0] sinLut_io_wr_data_7; // @[src/main/scala/npu/core/Rope.scala 57:11]
  wire  sinLut_io_wr_valid; // @[src/main/scala/npu/core/Rope.scala 57:11]
  wire  sinLut_io_rd_en; // @[src/main/scala/npu/core/Rope.scala 57:11]
  wire [9:0] sinLut_io_rd_addr; // @[src/main/scala/npu/core/Rope.scala 57:11]
  wire [15:0] sinLut_io_rd_data; // @[src/main/scala/npu/core/Rope.scala 57:11]
  wire  sinLut_io_rd_valid; // @[src/main/scala/npu/core/Rope.scala 57:11]
  wire  sinLut_io_lut_ready; // @[src/main/scala/npu/core/Rope.scala 57:11]
  wire  run = ~io_stall; // @[src/main/scala/npu/core/Rope.scala 50:13]
  wire  accept = io_in_valid & run; // @[src/main/scala/npu/core/Rope.scala 51:28]
  reg [7:0] xEvenD1; // @[src/main/scala/npu/core/Rope.scala 73:26]
  reg [7:0] xOddD1; // @[src/main/scala/npu/core/Rope.scala 74:26]
  wire  coeffValid = cosLut_io_rd_valid & sinLut_io_rd_valid; // @[src/main/scala/npu/core/Rope.scala 77:24]
  wire [23:0] _evenFull_T = $signed(xEvenD1) * $signed(cosLut_io_rd_data); // @[src/main/scala/npu/core/Rope.scala 84:15]
  wire [23:0] _evenFull_T_1 = $signed(xOddD1) * $signed(sinLut_io_rd_data); // @[src/main/scala/npu/core/Rope.scala 84:33]
  wire [24:0] evenFull = $signed(_evenFull_T) - $signed(_evenFull_T_1); // @[src/main/scala/npu/core/Rope.scala 84:22]
  wire [23:0] _oddFull_T = $signed(xEvenD1) * $signed(sinLut_io_rd_data); // @[src/main/scala/npu/core/Rope.scala 87:15]
  wire [23:0] _oddFull_T_1 = $signed(xOddD1) * $signed(cosLut_io_rd_data); // @[src/main/scala/npu/core/Rope.scala 87:33]
  wire [24:0] oddFull = $signed(_oddFull_T) + $signed(_oddFull_T_1); // @[src/main/scala/npu/core/Rope.scala 87:22]
  wire [10:0] evenScaled = evenFull[24:14]; // @[src/main/scala/npu/core/Rope.scala 90:15]
  wire [10:0] oddScaled = oddFull[24:14]; // @[src/main/scala/npu/core/Rope.scala 93:14]
  wire [10:0] _rawEven_clipped_T_2 = $signed(evenScaled) < -11'sh80 ? $signed(-11'sh80) : $signed(evenScaled); // @[src/main/scala/npu/core/Rope.scala 98:42]
  wire [10:0] _rawEven_T = $signed(evenScaled) > 11'sh7f ? $signed(11'sh7f) : $signed(_rawEven_clipped_T_2); // @[src/main/scala/npu/core/Rope.scala 99:13]
  wire [7:0] rawEven = _rawEven_T[7:0]; // @[src/main/scala/npu/core/Rope.scala 99:36]
  wire [10:0] _rawOdd_clipped_T_2 = $signed(oddScaled) < -11'sh80 ? $signed(-11'sh80) : $signed(oddScaled); // @[src/main/scala/npu/core/Rope.scala 98:42]
  wire [10:0] _rawOdd_T = $signed(oddScaled) > 11'sh7f ? $signed(11'sh7f) : $signed(_rawOdd_clipped_T_2); // @[src/main/scala/npu/core/Rope.scala 99:13]
  wire [7:0] rawOdd = _rawOdd_T[7:0]; // @[src/main/scala/npu/core/Rope.scala 99:36]
  reg  holdValid; // @[src/main/scala/npu/core/Rope.scala 107:26]
  reg [7:0] holdEven; // @[src/main/scala/npu/core/Rope.scala 108:22]
  reg [7:0] holdOdd; // @[src/main/scala/npu/core/Rope.scala 109:22]
  wire  _GEN_2 = run & holdValid ? 1'h0 : holdValid; // @[src/main/scala/npu/core/Rope.scala 115:32 116:15 107:26]
  wire  _GEN_3 = io_stall & coeffValid & ~holdValid | _GEN_2; // @[src/main/scala/npu/core/Rope.scala 111:46 112:15]
  reg  expectedRd; // @[src/main/scala/npu/core/Rope.scala 123:27]
  reg  expectedCosWr; // @[src/main/scala/npu/core/Rope.scala 124:30]
  reg  expectedSinWr; // @[src/main/scala/npu/core/Rope.scala 125:30]
  wire  _io_sync_alert_T_1 = expectedRd != sinLut_io_rd_valid; // @[src/main/scala/npu/core/Rope.scala 129:17]
  wire  _io_sync_alert_T_2 = expectedRd != cosLut_io_rd_valid | _io_sync_alert_T_1; // @[src/main/scala/npu/core/Rope.scala 128:41]
  wire  _io_sync_alert_T_3 = expectedCosWr != cosLut_io_wr_valid; // @[src/main/scala/npu/core/Rope.scala 130:20]
  wire  _io_sync_alert_T_4 = _io_sync_alert_T_2 | _io_sync_alert_T_3; // @[src/main/scala/npu/core/Rope.scala 129:41]
  wire  _io_sync_alert_T_5 = expectedSinWr != sinLut_io_wr_valid; // @[src/main/scala/npu/core/Rope.scala 131:20]
  wire  _io_sync_alert_T_6 = _io_sync_alert_T_4 | _io_sync_alert_T_5; // @[src/main/scala/npu/core/Rope.scala 130:44]
  wire  _io_sync_alert_T_8 = holdValid & coeffValid & run; // @[src/main/scala/npu/core/Rope.scala 132:30]
  Universal_Wide_LUT cosLut ( // @[src/main/scala/npu/core/Rope.scala 54:11]
    .clock(cosLut_clock),
    .reset(cosLut_reset),
    .io_wr_en(cosLut_io_wr_en),
    .io_wr_addr(cosLut_io_wr_addr),
    .io_wr_data_0(cosLut_io_wr_data_0),
    .io_wr_data_1(cosLut_io_wr_data_1),
    .io_wr_data_2(cosLut_io_wr_data_2),
    .io_wr_data_3(cosLut_io_wr_data_3),
    .io_wr_data_4(cosLut_io_wr_data_4),
    .io_wr_data_5(cosLut_io_wr_data_5),
    .io_wr_data_6(cosLut_io_wr_data_6),
    .io_wr_data_7(cosLut_io_wr_data_7),
    .io_wr_valid(cosLut_io_wr_valid),
    .io_rd_en(cosLut_io_rd_en),
    .io_rd_addr(cosLut_io_rd_addr),
    .io_rd_data(cosLut_io_rd_data),
    .io_rd_valid(cosLut_io_rd_valid),
    .io_lut_ready(cosLut_io_lut_ready)
  );
  Universal_Wide_LUT sinLut ( // @[src/main/scala/npu/core/Rope.scala 57:11]
    .clock(sinLut_clock),
    .reset(sinLut_reset),
    .io_wr_en(sinLut_io_wr_en),
    .io_wr_addr(sinLut_io_wr_addr),
    .io_wr_data_0(sinLut_io_wr_data_0),
    .io_wr_data_1(sinLut_io_wr_data_1),
    .io_wr_data_2(sinLut_io_wr_data_2),
    .io_wr_data_3(sinLut_io_wr_data_3),
    .io_wr_data_4(sinLut_io_wr_data_4),
    .io_wr_data_5(sinLut_io_wr_data_5),
    .io_wr_data_6(sinLut_io_wr_data_6),
    .io_wr_data_7(sinLut_io_wr_data_7),
    .io_wr_valid(sinLut_io_wr_valid),
    .io_rd_en(sinLut_io_rd_en),
    .io_rd_addr(sinLut_io_rd_addr),
    .io_rd_data(sinLut_io_rd_data),
    .io_rd_valid(sinLut_io_rd_valid),
    .io_lut_ready(sinLut_io_lut_ready)
  );
  assign io_y_even = holdValid ? $signed(holdEven) : $signed(rawEven); // @[src/main/scala/npu/core/Rope.scala 119:19]
  assign io_y_odd = holdValid ? $signed(holdOdd) : $signed(rawOdd); // @[src/main/scala/npu/core/Rope.scala 120:19]
  assign io_out_valid = run & (holdValid | coeffValid); // @[src/main/scala/npu/core/Rope.scala 121:23]
  assign io_lut_ready = cosLut_io_lut_ready & sinLut_io_lut_ready; // @[src/main/scala/npu/core/Rope.scala 135:25]
  assign io_sync_alert = _io_sync_alert_T_6 | _io_sync_alert_T_8; // @[src/main/scala/npu/core/Rope.scala 131:44]
  assign cosLut_clock = clock;
  assign cosLut_reset = reset;
  assign cosLut_io_wr_en = io_lut_cos_wr_en; // @[src/main/scala/npu/core/Rope.scala 59:21]
  assign cosLut_io_wr_addr = io_lut_wr_addr; // @[src/main/scala/npu/core/Rope.scala 60:21]
  assign cosLut_io_wr_data_0 = io_lut_wr_data_0; // @[src/main/scala/npu/core/Rope.scala 61:21]
  assign cosLut_io_wr_data_1 = io_lut_wr_data_1; // @[src/main/scala/npu/core/Rope.scala 61:21]
  assign cosLut_io_wr_data_2 = io_lut_wr_data_2; // @[src/main/scala/npu/core/Rope.scala 61:21]
  assign cosLut_io_wr_data_3 = io_lut_wr_data_3; // @[src/main/scala/npu/core/Rope.scala 61:21]
  assign cosLut_io_wr_data_4 = io_lut_wr_data_4; // @[src/main/scala/npu/core/Rope.scala 61:21]
  assign cosLut_io_wr_data_5 = io_lut_wr_data_5; // @[src/main/scala/npu/core/Rope.scala 61:21]
  assign cosLut_io_wr_data_6 = io_lut_wr_data_6; // @[src/main/scala/npu/core/Rope.scala 61:21]
  assign cosLut_io_wr_data_7 = io_lut_wr_data_7; // @[src/main/scala/npu/core/Rope.scala 61:21]
  assign cosLut_io_rd_en = io_in_valid & run; // @[src/main/scala/npu/core/Rope.scala 51:28]
  assign cosLut_io_rd_addr = io_angle_idx; // @[src/main/scala/npu/core/Rope.scala 68:21]
  assign sinLut_clock = clock;
  assign sinLut_reset = reset;
  assign sinLut_io_wr_en = io_lut_sin_wr_en; // @[src/main/scala/npu/core/Rope.scala 63:21]
  assign sinLut_io_wr_addr = io_lut_wr_addr; // @[src/main/scala/npu/core/Rope.scala 64:21]
  assign sinLut_io_wr_data_0 = io_lut_wr_data_0; // @[src/main/scala/npu/core/Rope.scala 65:21]
  assign sinLut_io_wr_data_1 = io_lut_wr_data_1; // @[src/main/scala/npu/core/Rope.scala 65:21]
  assign sinLut_io_wr_data_2 = io_lut_wr_data_2; // @[src/main/scala/npu/core/Rope.scala 65:21]
  assign sinLut_io_wr_data_3 = io_lut_wr_data_3; // @[src/main/scala/npu/core/Rope.scala 65:21]
  assign sinLut_io_wr_data_4 = io_lut_wr_data_4; // @[src/main/scala/npu/core/Rope.scala 65:21]
  assign sinLut_io_wr_data_5 = io_lut_wr_data_5; // @[src/main/scala/npu/core/Rope.scala 65:21]
  assign sinLut_io_wr_data_6 = io_lut_wr_data_6; // @[src/main/scala/npu/core/Rope.scala 65:21]
  assign sinLut_io_wr_data_7 = io_lut_wr_data_7; // @[src/main/scala/npu/core/Rope.scala 65:21]
  assign sinLut_io_rd_en = io_in_valid & run; // @[src/main/scala/npu/core/Rope.scala 51:28]
  assign sinLut_io_rd_addr = io_angle_idx; // @[src/main/scala/npu/core/Rope.scala 71:21]
  always @(posedge clock) begin
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 73:26]
      xEvenD1 <= 8'sh0; // @[src/main/scala/npu/core/Rope.scala 73:26]
    end else if (accept) begin // @[src/main/scala/npu/core/Rope.scala 73:26]
      xEvenD1 <= io_x_even; // @[src/main/scala/npu/core/Rope.scala 73:26]
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 74:26]
      xOddD1 <= 8'sh0; // @[src/main/scala/npu/core/Rope.scala 74:26]
    end else if (accept) begin // @[src/main/scala/npu/core/Rope.scala 74:26]
      xOddD1 <= io_x_odd; // @[src/main/scala/npu/core/Rope.scala 74:26]
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 107:26]
      holdValid <= 1'h0; // @[src/main/scala/npu/core/Rope.scala 107:26]
    end else begin
      holdValid <= _GEN_3;
    end
    if (io_stall & coeffValid & ~holdValid) begin // @[src/main/scala/npu/core/Rope.scala 111:46]
      holdEven <= rawEven; // @[src/main/scala/npu/core/Rope.scala 113:14]
    end
    if (io_stall & coeffValid & ~holdValid) begin // @[src/main/scala/npu/core/Rope.scala 111:46]
      holdOdd <= rawOdd; // @[src/main/scala/npu/core/Rope.scala 114:13]
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 123:27]
      expectedRd <= 1'h0; // @[src/main/scala/npu/core/Rope.scala 123:27]
    end else begin
      expectedRd <= accept; // @[src/main/scala/npu/core/Rope.scala 123:27]
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 124:30]
      expectedCosWr <= 1'h0; // @[src/main/scala/npu/core/Rope.scala 124:30]
    end else begin
      expectedCosWr <= io_lut_cos_wr_en; // @[src/main/scala/npu/core/Rope.scala 124:30]
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 125:30]
      expectedSinWr <= 1'h0; // @[src/main/scala/npu/core/Rope.scala 125:30]
    end else begin
      expectedSinWr <= io_lut_sin_wr_en; // @[src/main/scala/npu/core/Rope.scala 125:30]
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
  xEvenD1 = _RAND_0[7:0];
  _RAND_1 = {1{`RANDOM}};
  xOddD1 = _RAND_1[7:0];
  _RAND_2 = {1{`RANDOM}};
  holdValid = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  holdEven = _RAND_3[7:0];
  _RAND_4 = {1{`RANDOM}};
  holdOdd = _RAND_4[7:0];
  _RAND_5 = {1{`RANDOM}};
  expectedRd = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  expectedCosWr = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  expectedSinWr = _RAND_7[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module RopeUnit( // @[src/main/scala/npu/core/Rope.scala 163:7]
  input         clock, // @[src/main/scala/npu/core/Rope.scala 163:7]
  input         reset, // @[src/main/scala/npu/core/Rope.scala 163:7]
  input  [7:0]  io_in_vec_0, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input  [7:0]  io_in_vec_1, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input  [7:0]  io_in_vec_2, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input  [7:0]  io_in_vec_3, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input  [7:0]  io_in_vec_4, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input  [7:0]  io_in_vec_5, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input  [7:0]  io_in_vec_6, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input  [7:0]  io_in_vec_7, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input  [7:0]  io_in_vec_8, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input  [7:0]  io_in_vec_9, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input  [7:0]  io_in_vec_10, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input  [7:0]  io_in_vec_11, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input  [7:0]  io_in_vec_12, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input  [7:0]  io_in_vec_13, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input  [7:0]  io_in_vec_14, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input  [7:0]  io_in_vec_15, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input         io_in_valid_0, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input         io_in_valid_1, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input         io_in_valid_2, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input         io_in_valid_3, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input         io_in_valid_4, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input         io_in_valid_5, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input         io_in_valid_6, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input         io_in_valid_7, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input         io_in_valid_8, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input         io_in_valid_9, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input         io_in_valid_10, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input         io_in_valid_11, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input         io_in_valid_12, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input         io_in_valid_13, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input         io_in_valid_14, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input         io_in_valid_15, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input         io_rope_en, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input         io_stall, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input         io_soft_reset, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input         io_row_change_update, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input         io_position_init, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input  [31:0] io_base_m_in, // @[src/main/scala/npu/core/Rope.scala 188:14]
  output        io_freq_req_block, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input  [15:0] io_freq_block_in_0, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input  [15:0] io_freq_block_in_1, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input  [15:0] io_freq_block_in_2, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input  [15:0] io_freq_block_in_3, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input  [15:0] io_freq_block_in_4, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input  [15:0] io_freq_block_in_5, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input  [15:0] io_freq_block_in_6, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input  [15:0] io_freq_block_in_7, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input  [15:0] io_freq_block_in_8, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input  [15:0] io_freq_block_in_9, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input  [15:0] io_freq_block_in_10, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input  [15:0] io_freq_block_in_11, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input  [15:0] io_freq_block_in_12, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input  [15:0] io_freq_block_in_13, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input  [15:0] io_freq_block_in_14, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input  [15:0] io_freq_block_in_15, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input         io_freq_block_valid, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input         io_lut_cos_wr_en, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input         io_lut_sin_wr_en, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input  [6:0]  io_lut_wr_addr, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input  [15:0] io_lut_wr_data_0, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input  [15:0] io_lut_wr_data_1, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input  [15:0] io_lut_wr_data_2, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input  [15:0] io_lut_wr_data_3, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input  [15:0] io_lut_wr_data_4, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input  [15:0] io_lut_wr_data_5, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input  [15:0] io_lut_wr_data_6, // @[src/main/scala/npu/core/Rope.scala 188:14]
  input  [15:0] io_lut_wr_data_7, // @[src/main/scala/npu/core/Rope.scala 188:14]
  output [7:0]  io_out_vec_0, // @[src/main/scala/npu/core/Rope.scala 188:14]
  output [7:0]  io_out_vec_1, // @[src/main/scala/npu/core/Rope.scala 188:14]
  output [7:0]  io_out_vec_2, // @[src/main/scala/npu/core/Rope.scala 188:14]
  output [7:0]  io_out_vec_3, // @[src/main/scala/npu/core/Rope.scala 188:14]
  output [7:0]  io_out_vec_4, // @[src/main/scala/npu/core/Rope.scala 188:14]
  output [7:0]  io_out_vec_5, // @[src/main/scala/npu/core/Rope.scala 188:14]
  output [7:0]  io_out_vec_6, // @[src/main/scala/npu/core/Rope.scala 188:14]
  output [7:0]  io_out_vec_7, // @[src/main/scala/npu/core/Rope.scala 188:14]
  output [7:0]  io_out_vec_8, // @[src/main/scala/npu/core/Rope.scala 188:14]
  output [7:0]  io_out_vec_9, // @[src/main/scala/npu/core/Rope.scala 188:14]
  output [7:0]  io_out_vec_10, // @[src/main/scala/npu/core/Rope.scala 188:14]
  output [7:0]  io_out_vec_11, // @[src/main/scala/npu/core/Rope.scala 188:14]
  output [7:0]  io_out_vec_12, // @[src/main/scala/npu/core/Rope.scala 188:14]
  output [7:0]  io_out_vec_13, // @[src/main/scala/npu/core/Rope.scala 188:14]
  output [7:0]  io_out_vec_14, // @[src/main/scala/npu/core/Rope.scala 188:14]
  output [7:0]  io_out_vec_15, // @[src/main/scala/npu/core/Rope.scala 188:14]
  output        io_out_valid_0, // @[src/main/scala/npu/core/Rope.scala 188:14]
  output        io_out_valid_1, // @[src/main/scala/npu/core/Rope.scala 188:14]
  output        io_out_valid_2, // @[src/main/scala/npu/core/Rope.scala 188:14]
  output        io_out_valid_3, // @[src/main/scala/npu/core/Rope.scala 188:14]
  output        io_out_valid_4, // @[src/main/scala/npu/core/Rope.scala 188:14]
  output        io_out_valid_5, // @[src/main/scala/npu/core/Rope.scala 188:14]
  output        io_out_valid_6, // @[src/main/scala/npu/core/Rope.scala 188:14]
  output        io_out_valid_7, // @[src/main/scala/npu/core/Rope.scala 188:14]
  output        io_out_valid_8, // @[src/main/scala/npu/core/Rope.scala 188:14]
  output        io_out_valid_9, // @[src/main/scala/npu/core/Rope.scala 188:14]
  output        io_out_valid_10, // @[src/main/scala/npu/core/Rope.scala 188:14]
  output        io_out_valid_11, // @[src/main/scala/npu/core/Rope.scala 188:14]
  output        io_out_valid_12, // @[src/main/scala/npu/core/Rope.scala 188:14]
  output        io_out_valid_13, // @[src/main/scala/npu/core/Rope.scala 188:14]
  output        io_out_valid_14, // @[src/main/scala/npu/core/Rope.scala 188:14]
  output        io_out_valid_15, // @[src/main/scala/npu/core/Rope.scala 188:14]
  output        io_prefetch_ready, // @[src/main/scala/npu/core/Rope.scala 188:14]
  output        io_lut_ready, // @[src/main/scala/npu/core/Rope.scala 188:14]
  output        io_sync_alert // @[src/main/scala/npu/core/Rope.scala 188:14]
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
  reg [31:0] _RAND_37;
  reg [31:0] _RAND_38;
  reg [31:0] _RAND_39;
  reg [31:0] _RAND_40;
  reg [31:0] _RAND_41;
`endif // RANDOMIZE_REG_INIT
  wire  pairs_0_clock; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_0_reset; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [7:0] pairs_0_io_x_even; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [7:0] pairs_0_io_x_odd; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_0_io_in_valid; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [9:0] pairs_0_io_angle_idx; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_0_io_stall; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_0_io_lut_cos_wr_en; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_0_io_lut_sin_wr_en; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [6:0] pairs_0_io_lut_wr_addr; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_0_io_lut_wr_data_0; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_0_io_lut_wr_data_1; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_0_io_lut_wr_data_2; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_0_io_lut_wr_data_3; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_0_io_lut_wr_data_4; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_0_io_lut_wr_data_5; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_0_io_lut_wr_data_6; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_0_io_lut_wr_data_7; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [7:0] pairs_0_io_y_even; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [7:0] pairs_0_io_y_odd; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_0_io_out_valid; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_0_io_lut_ready; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_0_io_sync_alert; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_1_clock; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_1_reset; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [7:0] pairs_1_io_x_even; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [7:0] pairs_1_io_x_odd; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_1_io_in_valid; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [9:0] pairs_1_io_angle_idx; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_1_io_stall; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_1_io_lut_cos_wr_en; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_1_io_lut_sin_wr_en; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [6:0] pairs_1_io_lut_wr_addr; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_1_io_lut_wr_data_0; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_1_io_lut_wr_data_1; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_1_io_lut_wr_data_2; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_1_io_lut_wr_data_3; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_1_io_lut_wr_data_4; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_1_io_lut_wr_data_5; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_1_io_lut_wr_data_6; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_1_io_lut_wr_data_7; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [7:0] pairs_1_io_y_even; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [7:0] pairs_1_io_y_odd; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_1_io_out_valid; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_1_io_lut_ready; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_1_io_sync_alert; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_2_clock; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_2_reset; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [7:0] pairs_2_io_x_even; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [7:0] pairs_2_io_x_odd; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_2_io_in_valid; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [9:0] pairs_2_io_angle_idx; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_2_io_stall; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_2_io_lut_cos_wr_en; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_2_io_lut_sin_wr_en; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [6:0] pairs_2_io_lut_wr_addr; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_2_io_lut_wr_data_0; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_2_io_lut_wr_data_1; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_2_io_lut_wr_data_2; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_2_io_lut_wr_data_3; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_2_io_lut_wr_data_4; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_2_io_lut_wr_data_5; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_2_io_lut_wr_data_6; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_2_io_lut_wr_data_7; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [7:0] pairs_2_io_y_even; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [7:0] pairs_2_io_y_odd; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_2_io_out_valid; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_2_io_lut_ready; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_2_io_sync_alert; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_3_clock; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_3_reset; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [7:0] pairs_3_io_x_even; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [7:0] pairs_3_io_x_odd; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_3_io_in_valid; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [9:0] pairs_3_io_angle_idx; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_3_io_stall; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_3_io_lut_cos_wr_en; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_3_io_lut_sin_wr_en; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [6:0] pairs_3_io_lut_wr_addr; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_3_io_lut_wr_data_0; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_3_io_lut_wr_data_1; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_3_io_lut_wr_data_2; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_3_io_lut_wr_data_3; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_3_io_lut_wr_data_4; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_3_io_lut_wr_data_5; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_3_io_lut_wr_data_6; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_3_io_lut_wr_data_7; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [7:0] pairs_3_io_y_even; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [7:0] pairs_3_io_y_odd; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_3_io_out_valid; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_3_io_lut_ready; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_3_io_sync_alert; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_4_clock; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_4_reset; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [7:0] pairs_4_io_x_even; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [7:0] pairs_4_io_x_odd; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_4_io_in_valid; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [9:0] pairs_4_io_angle_idx; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_4_io_stall; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_4_io_lut_cos_wr_en; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_4_io_lut_sin_wr_en; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [6:0] pairs_4_io_lut_wr_addr; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_4_io_lut_wr_data_0; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_4_io_lut_wr_data_1; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_4_io_lut_wr_data_2; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_4_io_lut_wr_data_3; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_4_io_lut_wr_data_4; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_4_io_lut_wr_data_5; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_4_io_lut_wr_data_6; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_4_io_lut_wr_data_7; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [7:0] pairs_4_io_y_even; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [7:0] pairs_4_io_y_odd; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_4_io_out_valid; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_4_io_lut_ready; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_4_io_sync_alert; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_5_clock; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_5_reset; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [7:0] pairs_5_io_x_even; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [7:0] pairs_5_io_x_odd; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_5_io_in_valid; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [9:0] pairs_5_io_angle_idx; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_5_io_stall; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_5_io_lut_cos_wr_en; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_5_io_lut_sin_wr_en; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [6:0] pairs_5_io_lut_wr_addr; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_5_io_lut_wr_data_0; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_5_io_lut_wr_data_1; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_5_io_lut_wr_data_2; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_5_io_lut_wr_data_3; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_5_io_lut_wr_data_4; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_5_io_lut_wr_data_5; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_5_io_lut_wr_data_6; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_5_io_lut_wr_data_7; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [7:0] pairs_5_io_y_even; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [7:0] pairs_5_io_y_odd; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_5_io_out_valid; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_5_io_lut_ready; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_5_io_sync_alert; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_6_clock; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_6_reset; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [7:0] pairs_6_io_x_even; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [7:0] pairs_6_io_x_odd; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_6_io_in_valid; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [9:0] pairs_6_io_angle_idx; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_6_io_stall; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_6_io_lut_cos_wr_en; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_6_io_lut_sin_wr_en; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [6:0] pairs_6_io_lut_wr_addr; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_6_io_lut_wr_data_0; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_6_io_lut_wr_data_1; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_6_io_lut_wr_data_2; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_6_io_lut_wr_data_3; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_6_io_lut_wr_data_4; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_6_io_lut_wr_data_5; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_6_io_lut_wr_data_6; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_6_io_lut_wr_data_7; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [7:0] pairs_6_io_y_even; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [7:0] pairs_6_io_y_odd; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_6_io_out_valid; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_6_io_lut_ready; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_6_io_sync_alert; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_7_clock; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_7_reset; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [7:0] pairs_7_io_x_even; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [7:0] pairs_7_io_x_odd; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_7_io_in_valid; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [9:0] pairs_7_io_angle_idx; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_7_io_stall; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_7_io_lut_cos_wr_en; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_7_io_lut_sin_wr_en; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [6:0] pairs_7_io_lut_wr_addr; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_7_io_lut_wr_data_0; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_7_io_lut_wr_data_1; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_7_io_lut_wr_data_2; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_7_io_lut_wr_data_3; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_7_io_lut_wr_data_4; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_7_io_lut_wr_data_5; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_7_io_lut_wr_data_6; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [15:0] pairs_7_io_lut_wr_data_7; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [7:0] pairs_7_io_y_even; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire [7:0] pairs_7_io_y_odd; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_7_io_out_valid; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_7_io_lut_ready; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  pairs_7_io_sync_alert; // @[src/main/scala/npu/core/Rope.scala 350:13]
  wire  run = ~io_stall; // @[src/main/scala/npu/core/Rope.scala 221:13]
  wire [7:0] anyValid_lo = {io_in_valid_7,io_in_valid_6,io_in_valid_5,io_in_valid_4,io_in_valid_3,io_in_valid_2,
    io_in_valid_1,io_in_valid_0}; // @[src/main/scala/npu/core/Rope.scala 223:30]
  wire [15:0] _anyValid_T = {io_in_valid_15,io_in_valid_14,io_in_valid_13,io_in_valid_12,io_in_valid_11,io_in_valid_10,
    io_in_valid_9,io_in_valid_8,anyValid_lo}; // @[src/main/scala/npu/core/Rope.scala 223:30]
  wire  anyValid = |_anyValid_T; // @[src/main/scala/npu/core/Rope.scala 223:37]
  wire  allValid = &_anyValid_T; // @[src/main/scala/npu/core/Rope.scala 224:37]
  wire  inputFire = allValid & run & io_rope_en; // @[src/main/scala/npu/core/Rope.scala 225:35]
  reg [3:0] rowCounter; // @[src/main/scala/npu/core/Rope.scala 230:27]
  wire  tileStart = inputFire & rowCounter == 4'h0; // @[src/main/scala/npu/core/Rope.scala 231:29]
  wire  tileEnd = inputFire & rowCounter == 4'hf; // @[src/main/scala/npu/core/Rope.scala 232:29]
  wire  _T = ~io_rope_en; // @[src/main/scala/npu/core/Rope.scala 234:26]
  wire [3:0] _rowCounter_T_1 = rowCounter + 4'h1; // @[src/main/scala/npu/core/Rope.scala 240:32]
  reg [31:0] activeMBase; // @[src/main/scala/npu/core/Rope.scala 247:28]
  reg [31:0] shadowMBase; // @[src/main/scala/npu/core/Rope.scala 248:28]
  reg  activeMValid; // @[src/main/scala/npu/core/Rope.scala 249:29]
  reg  shadowMValid; // @[src/main/scala/npu/core/Rope.scala 250:29]
  wire [31:0] _GEN_3 = io_position_init ? io_base_m_in : shadowMBase; // @[src/main/scala/npu/core/Rope.scala 258:28 259:19 248:28]
  wire  _GEN_4 = io_position_init | shadowMValid; // @[src/main/scala/npu/core/Rope.scala 258:28 260:20 250:29]
  wire  _T_3 = inputFire & io_row_change_update; // @[src/main/scala/npu/core/Rope.scala 263:20]
  wire [31:0] _shadowMBase_T_1 = shadowMBase + 32'h10; // @[src/main/scala/npu/core/Rope.scala 267:36]
  wire  _GEN_6 = shadowMValid | activeMValid; // @[src/main/scala/npu/core/Rope.scala 264:26 266:22 249:29]
  wire  _GEN_8 = shadowMValid | _GEN_4; // @[src/main/scala/npu/core/Rope.scala 264:26 268:22]
  wire [31:0] effectiveMBase = _T_3 ? shadowMBase : activeMBase; // @[src/main/scala/npu/core/Rope.scala 278:8]
  wire [31:0] _GEN_324 = {{28'd0}, rowCounter}; // @[src/main/scala/npu/core/Rope.scala 281:20]
  wire [31:0] currentM = effectiveMBase + _GEN_324; // @[src/main/scala/npu/core/Rope.scala 281:20]
  reg [15:0] activeFreqBlock_0; // @[src/main/scala/npu/core/Rope.scala 287:12]
  reg [15:0] activeFreqBlock_1; // @[src/main/scala/npu/core/Rope.scala 287:12]
  reg [15:0] activeFreqBlock_2; // @[src/main/scala/npu/core/Rope.scala 287:12]
  reg [15:0] activeFreqBlock_3; // @[src/main/scala/npu/core/Rope.scala 287:12]
  reg [15:0] activeFreqBlock_4; // @[src/main/scala/npu/core/Rope.scala 287:12]
  reg [15:0] activeFreqBlock_5; // @[src/main/scala/npu/core/Rope.scala 287:12]
  reg [15:0] activeFreqBlock_6; // @[src/main/scala/npu/core/Rope.scala 287:12]
  reg [15:0] activeFreqBlock_7; // @[src/main/scala/npu/core/Rope.scala 287:12]
  reg [15:0] activeFreqBlock_8; // @[src/main/scala/npu/core/Rope.scala 287:12]
  reg [15:0] activeFreqBlock_9; // @[src/main/scala/npu/core/Rope.scala 287:12]
  reg [15:0] activeFreqBlock_10; // @[src/main/scala/npu/core/Rope.scala 287:12]
  reg [15:0] activeFreqBlock_11; // @[src/main/scala/npu/core/Rope.scala 287:12]
  reg [15:0] activeFreqBlock_12; // @[src/main/scala/npu/core/Rope.scala 287:12]
  reg [15:0] activeFreqBlock_13; // @[src/main/scala/npu/core/Rope.scala 287:12]
  reg [15:0] activeFreqBlock_14; // @[src/main/scala/npu/core/Rope.scala 287:12]
  reg [15:0] activeFreqBlock_15; // @[src/main/scala/npu/core/Rope.scala 287:12]
  reg [15:0] shadowFreqBlock_0; // @[src/main/scala/npu/core/Rope.scala 290:12]
  reg [15:0] shadowFreqBlock_1; // @[src/main/scala/npu/core/Rope.scala 290:12]
  reg [15:0] shadowFreqBlock_2; // @[src/main/scala/npu/core/Rope.scala 290:12]
  reg [15:0] shadowFreqBlock_3; // @[src/main/scala/npu/core/Rope.scala 290:12]
  reg [15:0] shadowFreqBlock_4; // @[src/main/scala/npu/core/Rope.scala 290:12]
  reg [15:0] shadowFreqBlock_5; // @[src/main/scala/npu/core/Rope.scala 290:12]
  reg [15:0] shadowFreqBlock_6; // @[src/main/scala/npu/core/Rope.scala 290:12]
  reg [15:0] shadowFreqBlock_7; // @[src/main/scala/npu/core/Rope.scala 290:12]
  reg [15:0] shadowFreqBlock_8; // @[src/main/scala/npu/core/Rope.scala 290:12]
  reg [15:0] shadowFreqBlock_9; // @[src/main/scala/npu/core/Rope.scala 290:12]
  reg [15:0] shadowFreqBlock_10; // @[src/main/scala/npu/core/Rope.scala 290:12]
  reg [15:0] shadowFreqBlock_11; // @[src/main/scala/npu/core/Rope.scala 290:12]
  reg [15:0] shadowFreqBlock_12; // @[src/main/scala/npu/core/Rope.scala 290:12]
  reg [15:0] shadowFreqBlock_13; // @[src/main/scala/npu/core/Rope.scala 290:12]
  reg [15:0] shadowFreqBlock_14; // @[src/main/scala/npu/core/Rope.scala 290:12]
  reg [15:0] shadowFreqBlock_15; // @[src/main/scala/npu/core/Rope.scala 290:12]
  reg  activeFreqValid; // @[src/main/scala/npu/core/Rope.scala 292:32]
  reg  shadowFreqValid; // @[src/main/scala/npu/core/Rope.scala 293:32]
  reg  freqReqOutstanding; // @[src/main/scala/npu/core/Rope.scala 294:35]
  reg  freqHalf; // @[src/main/scala/npu/core/Rope.scala 295:25]
  wire  _io_freq_req_block_T = ~freqReqOutstanding; // @[src/main/scala/npu/core/Rope.scala 301:5]
  wire  _io_freq_req_block_T_1 = io_rope_en & _io_freq_req_block_T; // @[src/main/scala/npu/core/Rope.scala 300:16]
  wire  _io_freq_req_block_T_2 = ~activeFreqValid; // @[src/main/scala/npu/core/Rope.scala 302:6]
  wire  _io_freq_req_block_T_7 = ~activeFreqValid | inputFire & ~freqHalf & ~shadowFreqValid; // @[src/main/scala/npu/core/Rope.scala 302:23]
  wire  completesBlock = inputFire & freqHalf; // @[src/main/scala/npu/core/Rope.scala 304:34]
  wire  nextBlockAvailable = shadowFreqValid | io_freq_block_valid; // @[src/main/scala/npu/core/Rope.scala 305:44]
  wire [15:0] nextBlock_0 = io_freq_block_valid ? io_freq_block_in_0 : shadowFreqBlock_0; // @[src/main/scala/npu/core/Rope.scala 306:22]
  wire [15:0] nextBlock_1 = io_freq_block_valid ? io_freq_block_in_1 : shadowFreqBlock_1; // @[src/main/scala/npu/core/Rope.scala 306:22]
  wire [15:0] nextBlock_2 = io_freq_block_valid ? io_freq_block_in_2 : shadowFreqBlock_2; // @[src/main/scala/npu/core/Rope.scala 306:22]
  wire [15:0] nextBlock_3 = io_freq_block_valid ? io_freq_block_in_3 : shadowFreqBlock_3; // @[src/main/scala/npu/core/Rope.scala 306:22]
  wire [15:0] nextBlock_4 = io_freq_block_valid ? io_freq_block_in_4 : shadowFreqBlock_4; // @[src/main/scala/npu/core/Rope.scala 306:22]
  wire [15:0] nextBlock_5 = io_freq_block_valid ? io_freq_block_in_5 : shadowFreqBlock_5; // @[src/main/scala/npu/core/Rope.scala 306:22]
  wire [15:0] nextBlock_6 = io_freq_block_valid ? io_freq_block_in_6 : shadowFreqBlock_6; // @[src/main/scala/npu/core/Rope.scala 306:22]
  wire [15:0] nextBlock_7 = io_freq_block_valid ? io_freq_block_in_7 : shadowFreqBlock_7; // @[src/main/scala/npu/core/Rope.scala 306:22]
  wire [15:0] nextBlock_8 = io_freq_block_valid ? io_freq_block_in_8 : shadowFreqBlock_8; // @[src/main/scala/npu/core/Rope.scala 306:22]
  wire [15:0] nextBlock_9 = io_freq_block_valid ? io_freq_block_in_9 : shadowFreqBlock_9; // @[src/main/scala/npu/core/Rope.scala 306:22]
  wire [15:0] nextBlock_10 = io_freq_block_valid ? io_freq_block_in_10 : shadowFreqBlock_10; // @[src/main/scala/npu/core/Rope.scala 306:22]
  wire [15:0] nextBlock_11 = io_freq_block_valid ? io_freq_block_in_11 : shadowFreqBlock_11; // @[src/main/scala/npu/core/Rope.scala 306:22]
  wire [15:0] nextBlock_12 = io_freq_block_valid ? io_freq_block_in_12 : shadowFreqBlock_12; // @[src/main/scala/npu/core/Rope.scala 306:22]
  wire [15:0] nextBlock_13 = io_freq_block_valid ? io_freq_block_in_13 : shadowFreqBlock_13; // @[src/main/scala/npu/core/Rope.scala 306:22]
  wire [15:0] nextBlock_14 = io_freq_block_valid ? io_freq_block_in_14 : shadowFreqBlock_14; // @[src/main/scala/npu/core/Rope.scala 306:22]
  wire [15:0] nextBlock_15 = io_freq_block_valid ? io_freq_block_in_15 : shadowFreqBlock_15; // @[src/main/scala/npu/core/Rope.scala 306:22]
  wire  _GEN_17 = io_freq_req_block | freqReqOutstanding; // @[src/main/scala/npu/core/Rope.scala 314:29 315:26 294:35]
  wire [15:0] _GEN_18 = nextBlockAvailable ? nextBlock_0 : activeFreqBlock_0; // @[src/main/scala/npu/core/Rope.scala 287:12 322:34 323:27]
  wire [15:0] _GEN_19 = nextBlockAvailable ? nextBlock_1 : activeFreqBlock_1; // @[src/main/scala/npu/core/Rope.scala 287:12 322:34 323:27]
  wire [15:0] _GEN_20 = nextBlockAvailable ? nextBlock_2 : activeFreqBlock_2; // @[src/main/scala/npu/core/Rope.scala 287:12 322:34 323:27]
  wire [15:0] _GEN_21 = nextBlockAvailable ? nextBlock_3 : activeFreqBlock_3; // @[src/main/scala/npu/core/Rope.scala 287:12 322:34 323:27]
  wire [15:0] _GEN_22 = nextBlockAvailable ? nextBlock_4 : activeFreqBlock_4; // @[src/main/scala/npu/core/Rope.scala 287:12 322:34 323:27]
  wire [15:0] _GEN_23 = nextBlockAvailable ? nextBlock_5 : activeFreqBlock_5; // @[src/main/scala/npu/core/Rope.scala 287:12 322:34 323:27]
  wire [15:0] _GEN_24 = nextBlockAvailable ? nextBlock_6 : activeFreqBlock_6; // @[src/main/scala/npu/core/Rope.scala 287:12 322:34 323:27]
  wire [15:0] _GEN_25 = nextBlockAvailable ? nextBlock_7 : activeFreqBlock_7; // @[src/main/scala/npu/core/Rope.scala 287:12 322:34 323:27]
  wire [15:0] _GEN_26 = nextBlockAvailable ? nextBlock_8 : activeFreqBlock_8; // @[src/main/scala/npu/core/Rope.scala 287:12 322:34 323:27]
  wire [15:0] _GEN_27 = nextBlockAvailable ? nextBlock_9 : activeFreqBlock_9; // @[src/main/scala/npu/core/Rope.scala 287:12 322:34 323:27]
  wire [15:0] _GEN_28 = nextBlockAvailable ? nextBlock_10 : activeFreqBlock_10; // @[src/main/scala/npu/core/Rope.scala 287:12 322:34 323:27]
  wire [15:0] _GEN_29 = nextBlockAvailable ? nextBlock_11 : activeFreqBlock_11; // @[src/main/scala/npu/core/Rope.scala 287:12 322:34 323:27]
  wire [15:0] _GEN_30 = nextBlockAvailable ? nextBlock_12 : activeFreqBlock_12; // @[src/main/scala/npu/core/Rope.scala 287:12 322:34 323:27]
  wire [15:0] _GEN_31 = nextBlockAvailable ? nextBlock_13 : activeFreqBlock_13; // @[src/main/scala/npu/core/Rope.scala 287:12 322:34 323:27]
  wire [15:0] _GEN_32 = nextBlockAvailable ? nextBlock_14 : activeFreqBlock_14; // @[src/main/scala/npu/core/Rope.scala 287:12 322:34 323:27]
  wire [15:0] _GEN_33 = nextBlockAvailable ? nextBlock_15 : activeFreqBlock_15; // @[src/main/scala/npu/core/Rope.scala 287:12 322:34 323:27]
  wire  _GEN_35 = freqHalf ? nextBlockAvailable : activeFreqValid; // @[src/main/scala/npu/core/Rope.scala 319:22 321:25 292:32]
  wire [15:0] _GEN_36 = freqHalf ? _GEN_18 : activeFreqBlock_0; // @[src/main/scala/npu/core/Rope.scala 287:12 319:22]
  wire [15:0] _GEN_37 = freqHalf ? _GEN_19 : activeFreqBlock_1; // @[src/main/scala/npu/core/Rope.scala 287:12 319:22]
  wire [15:0] _GEN_38 = freqHalf ? _GEN_20 : activeFreqBlock_2; // @[src/main/scala/npu/core/Rope.scala 287:12 319:22]
  wire [15:0] _GEN_39 = freqHalf ? _GEN_21 : activeFreqBlock_3; // @[src/main/scala/npu/core/Rope.scala 287:12 319:22]
  wire [15:0] _GEN_40 = freqHalf ? _GEN_22 : activeFreqBlock_4; // @[src/main/scala/npu/core/Rope.scala 287:12 319:22]
  wire [15:0] _GEN_41 = freqHalf ? _GEN_23 : activeFreqBlock_5; // @[src/main/scala/npu/core/Rope.scala 287:12 319:22]
  wire [15:0] _GEN_42 = freqHalf ? _GEN_24 : activeFreqBlock_6; // @[src/main/scala/npu/core/Rope.scala 287:12 319:22]
  wire [15:0] _GEN_43 = freqHalf ? _GEN_25 : activeFreqBlock_7; // @[src/main/scala/npu/core/Rope.scala 287:12 319:22]
  wire [15:0] _GEN_44 = freqHalf ? _GEN_26 : activeFreqBlock_8; // @[src/main/scala/npu/core/Rope.scala 287:12 319:22]
  wire [15:0] _GEN_45 = freqHalf ? _GEN_27 : activeFreqBlock_9; // @[src/main/scala/npu/core/Rope.scala 287:12 319:22]
  wire [15:0] _GEN_46 = freqHalf ? _GEN_28 : activeFreqBlock_10; // @[src/main/scala/npu/core/Rope.scala 287:12 319:22]
  wire [15:0] _GEN_47 = freqHalf ? _GEN_29 : activeFreqBlock_11; // @[src/main/scala/npu/core/Rope.scala 287:12 319:22]
  wire [15:0] _GEN_48 = freqHalf ? _GEN_30 : activeFreqBlock_12; // @[src/main/scala/npu/core/Rope.scala 287:12 319:22]
  wire [15:0] _GEN_49 = freqHalf ? _GEN_31 : activeFreqBlock_13; // @[src/main/scala/npu/core/Rope.scala 287:12 319:22]
  wire [15:0] _GEN_50 = freqHalf ? _GEN_32 : activeFreqBlock_14; // @[src/main/scala/npu/core/Rope.scala 287:12 319:22]
  wire [15:0] _GEN_51 = freqHalf ? _GEN_33 : activeFreqBlock_15; // @[src/main/scala/npu/core/Rope.scala 287:12 319:22]
  wire  _GEN_52 = freqHalf ? 1'h0 : shadowFreqValid; // @[src/main/scala/npu/core/Rope.scala 319:22 325:25 293:32]
  wire  _GEN_54 = inputFire ? _GEN_35 : activeFreqValid; // @[src/main/scala/npu/core/Rope.scala 318:21 292:32]
  wire [15:0] _GEN_55 = inputFire ? _GEN_36 : activeFreqBlock_0; // @[src/main/scala/npu/core/Rope.scala 287:12 318:21]
  wire [15:0] _GEN_56 = inputFire ? _GEN_37 : activeFreqBlock_1; // @[src/main/scala/npu/core/Rope.scala 287:12 318:21]
  wire [15:0] _GEN_57 = inputFire ? _GEN_38 : activeFreqBlock_2; // @[src/main/scala/npu/core/Rope.scala 287:12 318:21]
  wire [15:0] _GEN_58 = inputFire ? _GEN_39 : activeFreqBlock_3; // @[src/main/scala/npu/core/Rope.scala 287:12 318:21]
  wire [15:0] _GEN_59 = inputFire ? _GEN_40 : activeFreqBlock_4; // @[src/main/scala/npu/core/Rope.scala 287:12 318:21]
  wire [15:0] _GEN_60 = inputFire ? _GEN_41 : activeFreqBlock_5; // @[src/main/scala/npu/core/Rope.scala 287:12 318:21]
  wire [15:0] _GEN_61 = inputFire ? _GEN_42 : activeFreqBlock_6; // @[src/main/scala/npu/core/Rope.scala 287:12 318:21]
  wire [15:0] _GEN_62 = inputFire ? _GEN_43 : activeFreqBlock_7; // @[src/main/scala/npu/core/Rope.scala 287:12 318:21]
  wire [15:0] _GEN_63 = inputFire ? _GEN_44 : activeFreqBlock_8; // @[src/main/scala/npu/core/Rope.scala 287:12 318:21]
  wire [15:0] _GEN_64 = inputFire ? _GEN_45 : activeFreqBlock_9; // @[src/main/scala/npu/core/Rope.scala 287:12 318:21]
  wire [15:0] _GEN_65 = inputFire ? _GEN_46 : activeFreqBlock_10; // @[src/main/scala/npu/core/Rope.scala 287:12 318:21]
  wire [15:0] _GEN_66 = inputFire ? _GEN_47 : activeFreqBlock_11; // @[src/main/scala/npu/core/Rope.scala 287:12 318:21]
  wire [15:0] _GEN_67 = inputFire ? _GEN_48 : activeFreqBlock_12; // @[src/main/scala/npu/core/Rope.scala 287:12 318:21]
  wire [15:0] _GEN_68 = inputFire ? _GEN_49 : activeFreqBlock_13; // @[src/main/scala/npu/core/Rope.scala 287:12 318:21]
  wire [15:0] _GEN_69 = inputFire ? _GEN_50 : activeFreqBlock_14; // @[src/main/scala/npu/core/Rope.scala 287:12 318:21]
  wire [15:0] _GEN_70 = inputFire ? _GEN_51 : activeFreqBlock_15; // @[src/main/scala/npu/core/Rope.scala 287:12 318:21]
  wire  _GEN_71 = inputFire ? _GEN_52 : shadowFreqValid; // @[src/main/scala/npu/core/Rope.scala 318:21 293:32]
  wire [15:0] _GEN_72 = ~completesBlock ? io_freq_block_in_0 : shadowFreqBlock_0; // @[src/main/scala/npu/core/Rope.scala 290:12 338:35 339:25]
  wire [15:0] _GEN_73 = ~completesBlock ? io_freq_block_in_1 : shadowFreqBlock_1; // @[src/main/scala/npu/core/Rope.scala 290:12 338:35 339:25]
  wire [15:0] _GEN_74 = ~completesBlock ? io_freq_block_in_2 : shadowFreqBlock_2; // @[src/main/scala/npu/core/Rope.scala 290:12 338:35 339:25]
  wire [15:0] _GEN_75 = ~completesBlock ? io_freq_block_in_3 : shadowFreqBlock_3; // @[src/main/scala/npu/core/Rope.scala 290:12 338:35 339:25]
  wire [15:0] _GEN_76 = ~completesBlock ? io_freq_block_in_4 : shadowFreqBlock_4; // @[src/main/scala/npu/core/Rope.scala 290:12 338:35 339:25]
  wire [15:0] _GEN_77 = ~completesBlock ? io_freq_block_in_5 : shadowFreqBlock_5; // @[src/main/scala/npu/core/Rope.scala 290:12 338:35 339:25]
  wire [15:0] _GEN_78 = ~completesBlock ? io_freq_block_in_6 : shadowFreqBlock_6; // @[src/main/scala/npu/core/Rope.scala 290:12 338:35 339:25]
  wire [15:0] _GEN_79 = ~completesBlock ? io_freq_block_in_7 : shadowFreqBlock_7; // @[src/main/scala/npu/core/Rope.scala 290:12 338:35 339:25]
  wire [15:0] _GEN_80 = ~completesBlock ? io_freq_block_in_8 : shadowFreqBlock_8; // @[src/main/scala/npu/core/Rope.scala 290:12 338:35 339:25]
  wire [15:0] _GEN_81 = ~completesBlock ? io_freq_block_in_9 : shadowFreqBlock_9; // @[src/main/scala/npu/core/Rope.scala 290:12 338:35 339:25]
  wire [15:0] _GEN_82 = ~completesBlock ? io_freq_block_in_10 : shadowFreqBlock_10; // @[src/main/scala/npu/core/Rope.scala 290:12 338:35 339:25]
  wire [15:0] _GEN_83 = ~completesBlock ? io_freq_block_in_11 : shadowFreqBlock_11; // @[src/main/scala/npu/core/Rope.scala 290:12 338:35 339:25]
  wire [15:0] _GEN_84 = ~completesBlock ? io_freq_block_in_12 : shadowFreqBlock_12; // @[src/main/scala/npu/core/Rope.scala 290:12 338:35 339:25]
  wire [15:0] _GEN_85 = ~completesBlock ? io_freq_block_in_13 : shadowFreqBlock_13; // @[src/main/scala/npu/core/Rope.scala 290:12 338:35 339:25]
  wire [15:0] _GEN_86 = ~completesBlock ? io_freq_block_in_14 : shadowFreqBlock_14; // @[src/main/scala/npu/core/Rope.scala 290:12 338:35 339:25]
  wire [15:0] _GEN_87 = ~completesBlock ? io_freq_block_in_15 : shadowFreqBlock_15; // @[src/main/scala/npu/core/Rope.scala 290:12 338:35 339:25]
  wire  _GEN_88 = ~completesBlock | _GEN_71; // @[src/main/scala/npu/core/Rope.scala 338:35 340:25]
  wire  _GEN_105 = _io_freq_req_block_T_2 | _GEN_54; // @[src/main/scala/npu/core/Rope.scala 335:30 337:25]
  wire [3:0] freqIndex = freqHalf ? 4'h8 : 4'h0; // @[src/main/scala/npu/core/Rope.scala 362:10]
  wire [15:0] _GEN_195 = 4'h1 == freqIndex ? activeFreqBlock_1 : activeFreqBlock_0; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_196 = 4'h2 == freqIndex ? activeFreqBlock_2 : _GEN_195; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_197 = 4'h3 == freqIndex ? activeFreqBlock_3 : _GEN_196; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_198 = 4'h4 == freqIndex ? activeFreqBlock_4 : _GEN_197; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_199 = 4'h5 == freqIndex ? activeFreqBlock_5 : _GEN_198; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_200 = 4'h6 == freqIndex ? activeFreqBlock_6 : _GEN_199; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_201 = 4'h7 == freqIndex ? activeFreqBlock_7 : _GEN_200; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_202 = 4'h8 == freqIndex ? activeFreqBlock_8 : _GEN_201; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_203 = 4'h9 == freqIndex ? activeFreqBlock_9 : _GEN_202; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_204 = 4'ha == freqIndex ? activeFreqBlock_10 : _GEN_203; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_205 = 4'hb == freqIndex ? activeFreqBlock_11 : _GEN_204; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_206 = 4'hc == freqIndex ? activeFreqBlock_12 : _GEN_205; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_207 = 4'hd == freqIndex ? activeFreqBlock_13 : _GEN_206; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_208 = 4'he == freqIndex ? activeFreqBlock_14 : _GEN_207; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_209 = 4'hf == freqIndex ? activeFreqBlock_15 : _GEN_208; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [47:0] phaseProduct = currentM * _GEN_209; // @[src/main/scala/npu/core/Rope.scala 368:16]
  wire [15:0] phaseModulo = phaseProduct[15:0]; // @[src/main/scala/npu/core/Rope.scala 372:19]
  wire [3:0] freqIndex_1 = freqHalf ? 4'h9 : 4'h1; // @[src/main/scala/npu/core/Rope.scala 362:10]
  wire [15:0] _GEN_211 = 4'h1 == freqIndex_1 ? activeFreqBlock_1 : activeFreqBlock_0; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_212 = 4'h2 == freqIndex_1 ? activeFreqBlock_2 : _GEN_211; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_213 = 4'h3 == freqIndex_1 ? activeFreqBlock_3 : _GEN_212; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_214 = 4'h4 == freqIndex_1 ? activeFreqBlock_4 : _GEN_213; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_215 = 4'h5 == freqIndex_1 ? activeFreqBlock_5 : _GEN_214; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_216 = 4'h6 == freqIndex_1 ? activeFreqBlock_6 : _GEN_215; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_217 = 4'h7 == freqIndex_1 ? activeFreqBlock_7 : _GEN_216; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_218 = 4'h8 == freqIndex_1 ? activeFreqBlock_8 : _GEN_217; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_219 = 4'h9 == freqIndex_1 ? activeFreqBlock_9 : _GEN_218; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_220 = 4'ha == freqIndex_1 ? activeFreqBlock_10 : _GEN_219; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_221 = 4'hb == freqIndex_1 ? activeFreqBlock_11 : _GEN_220; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_222 = 4'hc == freqIndex_1 ? activeFreqBlock_12 : _GEN_221; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_223 = 4'hd == freqIndex_1 ? activeFreqBlock_13 : _GEN_222; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_224 = 4'he == freqIndex_1 ? activeFreqBlock_14 : _GEN_223; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_225 = 4'hf == freqIndex_1 ? activeFreqBlock_15 : _GEN_224; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [47:0] phaseProduct_1 = currentM * _GEN_225; // @[src/main/scala/npu/core/Rope.scala 368:16]
  wire [15:0] phaseModulo_1 = phaseProduct_1[15:0]; // @[src/main/scala/npu/core/Rope.scala 372:19]
  wire [3:0] freqIndex_2 = freqHalf ? 4'ha : 4'h2; // @[src/main/scala/npu/core/Rope.scala 362:10]
  wire [15:0] _GEN_227 = 4'h1 == freqIndex_2 ? activeFreqBlock_1 : activeFreqBlock_0; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_228 = 4'h2 == freqIndex_2 ? activeFreqBlock_2 : _GEN_227; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_229 = 4'h3 == freqIndex_2 ? activeFreqBlock_3 : _GEN_228; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_230 = 4'h4 == freqIndex_2 ? activeFreqBlock_4 : _GEN_229; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_231 = 4'h5 == freqIndex_2 ? activeFreqBlock_5 : _GEN_230; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_232 = 4'h6 == freqIndex_2 ? activeFreqBlock_6 : _GEN_231; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_233 = 4'h7 == freqIndex_2 ? activeFreqBlock_7 : _GEN_232; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_234 = 4'h8 == freqIndex_2 ? activeFreqBlock_8 : _GEN_233; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_235 = 4'h9 == freqIndex_2 ? activeFreqBlock_9 : _GEN_234; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_236 = 4'ha == freqIndex_2 ? activeFreqBlock_10 : _GEN_235; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_237 = 4'hb == freqIndex_2 ? activeFreqBlock_11 : _GEN_236; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_238 = 4'hc == freqIndex_2 ? activeFreqBlock_12 : _GEN_237; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_239 = 4'hd == freqIndex_2 ? activeFreqBlock_13 : _GEN_238; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_240 = 4'he == freqIndex_2 ? activeFreqBlock_14 : _GEN_239; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_241 = 4'hf == freqIndex_2 ? activeFreqBlock_15 : _GEN_240; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [47:0] phaseProduct_2 = currentM * _GEN_241; // @[src/main/scala/npu/core/Rope.scala 368:16]
  wire [15:0] phaseModulo_2 = phaseProduct_2[15:0]; // @[src/main/scala/npu/core/Rope.scala 372:19]
  wire [3:0] freqIndex_3 = freqHalf ? 4'hb : 4'h3; // @[src/main/scala/npu/core/Rope.scala 362:10]
  wire [15:0] _GEN_243 = 4'h1 == freqIndex_3 ? activeFreqBlock_1 : activeFreqBlock_0; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_244 = 4'h2 == freqIndex_3 ? activeFreqBlock_2 : _GEN_243; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_245 = 4'h3 == freqIndex_3 ? activeFreqBlock_3 : _GEN_244; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_246 = 4'h4 == freqIndex_3 ? activeFreqBlock_4 : _GEN_245; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_247 = 4'h5 == freqIndex_3 ? activeFreqBlock_5 : _GEN_246; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_248 = 4'h6 == freqIndex_3 ? activeFreqBlock_6 : _GEN_247; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_249 = 4'h7 == freqIndex_3 ? activeFreqBlock_7 : _GEN_248; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_250 = 4'h8 == freqIndex_3 ? activeFreqBlock_8 : _GEN_249; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_251 = 4'h9 == freqIndex_3 ? activeFreqBlock_9 : _GEN_250; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_252 = 4'ha == freqIndex_3 ? activeFreqBlock_10 : _GEN_251; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_253 = 4'hb == freqIndex_3 ? activeFreqBlock_11 : _GEN_252; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_254 = 4'hc == freqIndex_3 ? activeFreqBlock_12 : _GEN_253; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_255 = 4'hd == freqIndex_3 ? activeFreqBlock_13 : _GEN_254; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_256 = 4'he == freqIndex_3 ? activeFreqBlock_14 : _GEN_255; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_257 = 4'hf == freqIndex_3 ? activeFreqBlock_15 : _GEN_256; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [47:0] phaseProduct_3 = currentM * _GEN_257; // @[src/main/scala/npu/core/Rope.scala 368:16]
  wire [15:0] phaseModulo_3 = phaseProduct_3[15:0]; // @[src/main/scala/npu/core/Rope.scala 372:19]
  wire [3:0] freqIndex_4 = freqHalf ? 4'hc : 4'h4; // @[src/main/scala/npu/core/Rope.scala 362:10]
  wire [15:0] _GEN_259 = 4'h1 == freqIndex_4 ? activeFreqBlock_1 : activeFreqBlock_0; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_260 = 4'h2 == freqIndex_4 ? activeFreqBlock_2 : _GEN_259; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_261 = 4'h3 == freqIndex_4 ? activeFreqBlock_3 : _GEN_260; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_262 = 4'h4 == freqIndex_4 ? activeFreqBlock_4 : _GEN_261; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_263 = 4'h5 == freqIndex_4 ? activeFreqBlock_5 : _GEN_262; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_264 = 4'h6 == freqIndex_4 ? activeFreqBlock_6 : _GEN_263; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_265 = 4'h7 == freqIndex_4 ? activeFreqBlock_7 : _GEN_264; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_266 = 4'h8 == freqIndex_4 ? activeFreqBlock_8 : _GEN_265; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_267 = 4'h9 == freqIndex_4 ? activeFreqBlock_9 : _GEN_266; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_268 = 4'ha == freqIndex_4 ? activeFreqBlock_10 : _GEN_267; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_269 = 4'hb == freqIndex_4 ? activeFreqBlock_11 : _GEN_268; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_270 = 4'hc == freqIndex_4 ? activeFreqBlock_12 : _GEN_269; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_271 = 4'hd == freqIndex_4 ? activeFreqBlock_13 : _GEN_270; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_272 = 4'he == freqIndex_4 ? activeFreqBlock_14 : _GEN_271; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_273 = 4'hf == freqIndex_4 ? activeFreqBlock_15 : _GEN_272; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [47:0] phaseProduct_4 = currentM * _GEN_273; // @[src/main/scala/npu/core/Rope.scala 368:16]
  wire [15:0] phaseModulo_4 = phaseProduct_4[15:0]; // @[src/main/scala/npu/core/Rope.scala 372:19]
  wire [3:0] freqIndex_5 = freqHalf ? 4'hd : 4'h5; // @[src/main/scala/npu/core/Rope.scala 362:10]
  wire [15:0] _GEN_275 = 4'h1 == freqIndex_5 ? activeFreqBlock_1 : activeFreqBlock_0; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_276 = 4'h2 == freqIndex_5 ? activeFreqBlock_2 : _GEN_275; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_277 = 4'h3 == freqIndex_5 ? activeFreqBlock_3 : _GEN_276; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_278 = 4'h4 == freqIndex_5 ? activeFreqBlock_4 : _GEN_277; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_279 = 4'h5 == freqIndex_5 ? activeFreqBlock_5 : _GEN_278; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_280 = 4'h6 == freqIndex_5 ? activeFreqBlock_6 : _GEN_279; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_281 = 4'h7 == freqIndex_5 ? activeFreqBlock_7 : _GEN_280; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_282 = 4'h8 == freqIndex_5 ? activeFreqBlock_8 : _GEN_281; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_283 = 4'h9 == freqIndex_5 ? activeFreqBlock_9 : _GEN_282; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_284 = 4'ha == freqIndex_5 ? activeFreqBlock_10 : _GEN_283; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_285 = 4'hb == freqIndex_5 ? activeFreqBlock_11 : _GEN_284; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_286 = 4'hc == freqIndex_5 ? activeFreqBlock_12 : _GEN_285; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_287 = 4'hd == freqIndex_5 ? activeFreqBlock_13 : _GEN_286; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_288 = 4'he == freqIndex_5 ? activeFreqBlock_14 : _GEN_287; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_289 = 4'hf == freqIndex_5 ? activeFreqBlock_15 : _GEN_288; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [47:0] phaseProduct_5 = currentM * _GEN_289; // @[src/main/scala/npu/core/Rope.scala 368:16]
  wire [15:0] phaseModulo_5 = phaseProduct_5[15:0]; // @[src/main/scala/npu/core/Rope.scala 372:19]
  wire [3:0] freqIndex_6 = freqHalf ? 4'he : 4'h6; // @[src/main/scala/npu/core/Rope.scala 362:10]
  wire [15:0] _GEN_291 = 4'h1 == freqIndex_6 ? activeFreqBlock_1 : activeFreqBlock_0; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_292 = 4'h2 == freqIndex_6 ? activeFreqBlock_2 : _GEN_291; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_293 = 4'h3 == freqIndex_6 ? activeFreqBlock_3 : _GEN_292; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_294 = 4'h4 == freqIndex_6 ? activeFreqBlock_4 : _GEN_293; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_295 = 4'h5 == freqIndex_6 ? activeFreqBlock_5 : _GEN_294; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_296 = 4'h6 == freqIndex_6 ? activeFreqBlock_6 : _GEN_295; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_297 = 4'h7 == freqIndex_6 ? activeFreqBlock_7 : _GEN_296; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_298 = 4'h8 == freqIndex_6 ? activeFreqBlock_8 : _GEN_297; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_299 = 4'h9 == freqIndex_6 ? activeFreqBlock_9 : _GEN_298; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_300 = 4'ha == freqIndex_6 ? activeFreqBlock_10 : _GEN_299; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_301 = 4'hb == freqIndex_6 ? activeFreqBlock_11 : _GEN_300; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_302 = 4'hc == freqIndex_6 ? activeFreqBlock_12 : _GEN_301; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_303 = 4'hd == freqIndex_6 ? activeFreqBlock_13 : _GEN_302; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_304 = 4'he == freqIndex_6 ? activeFreqBlock_14 : _GEN_303; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_305 = 4'hf == freqIndex_6 ? activeFreqBlock_15 : _GEN_304; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [47:0] phaseProduct_6 = currentM * _GEN_305; // @[src/main/scala/npu/core/Rope.scala 368:16]
  wire [15:0] phaseModulo_6 = phaseProduct_6[15:0]; // @[src/main/scala/npu/core/Rope.scala 372:19]
  wire [3:0] freqIndex_7 = freqHalf ? 4'hf : 4'h7; // @[src/main/scala/npu/core/Rope.scala 362:10]
  wire [15:0] _GEN_307 = 4'h1 == freqIndex_7 ? activeFreqBlock_1 : activeFreqBlock_0; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_308 = 4'h2 == freqIndex_7 ? activeFreqBlock_2 : _GEN_307; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_309 = 4'h3 == freqIndex_7 ? activeFreqBlock_3 : _GEN_308; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_310 = 4'h4 == freqIndex_7 ? activeFreqBlock_4 : _GEN_309; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_311 = 4'h5 == freqIndex_7 ? activeFreqBlock_5 : _GEN_310; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_312 = 4'h6 == freqIndex_7 ? activeFreqBlock_6 : _GEN_311; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_313 = 4'h7 == freqIndex_7 ? activeFreqBlock_7 : _GEN_312; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_314 = 4'h8 == freqIndex_7 ? activeFreqBlock_8 : _GEN_313; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_315 = 4'h9 == freqIndex_7 ? activeFreqBlock_9 : _GEN_314; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_316 = 4'ha == freqIndex_7 ? activeFreqBlock_10 : _GEN_315; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_317 = 4'hb == freqIndex_7 ? activeFreqBlock_11 : _GEN_316; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_318 = 4'hc == freqIndex_7 ? activeFreqBlock_12 : _GEN_317; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_319 = 4'hd == freqIndex_7 ? activeFreqBlock_13 : _GEN_318; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_320 = 4'he == freqIndex_7 ? activeFreqBlock_14 : _GEN_319; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [15:0] _GEN_321 = 4'hf == freqIndex_7 ? activeFreqBlock_15 : _GEN_320; // @[src/main/scala/npu/core/Rope.scala 368:{16,16}]
  wire [47:0] phaseProduct_7 = currentM * _GEN_321; // @[src/main/scala/npu/core/Rope.scala 368:16]
  wire [15:0] phaseModulo_7 = phaseProduct_7[15:0]; // @[src/main/scala/npu/core/Rope.scala 372:19]
  wire  _io_lut_ready_WIRE_1 = pairs_1_io_lut_ready; // @[src/main/scala/npu/core/Rope.scala 402:{12,12}]
  wire  _io_lut_ready_WIRE_0 = pairs_0_io_lut_ready; // @[src/main/scala/npu/core/Rope.scala 402:{12,12}]
  wire  _io_lut_ready_WIRE_3 = pairs_3_io_lut_ready; // @[src/main/scala/npu/core/Rope.scala 402:{12,12}]
  wire  _io_lut_ready_WIRE_2 = pairs_2_io_lut_ready; // @[src/main/scala/npu/core/Rope.scala 402:{12,12}]
  wire  _io_lut_ready_WIRE_5 = pairs_5_io_lut_ready; // @[src/main/scala/npu/core/Rope.scala 402:{12,12}]
  wire  _io_lut_ready_WIRE_4 = pairs_4_io_lut_ready; // @[src/main/scala/npu/core/Rope.scala 402:{12,12}]
  wire  _io_lut_ready_WIRE_7 = pairs_7_io_lut_ready; // @[src/main/scala/npu/core/Rope.scala 402:{12,12}]
  wire  _io_lut_ready_WIRE_6 = pairs_6_io_lut_ready; // @[src/main/scala/npu/core/Rope.scala 402:{12,12}]
  wire [7:0] _io_lut_ready_T = {_io_lut_ready_WIRE_7,_io_lut_ready_WIRE_6,_io_lut_ready_WIRE_5,_io_lut_ready_WIRE_4,
    _io_lut_ready_WIRE_3,_io_lut_ready_WIRE_2,_io_lut_ready_WIRE_1,_io_lut_ready_WIRE_0}; // @[src/main/scala/npu/core/Rope.scala 402:40]
  reg  primed; // @[src/main/scala/npu/core/Rope.scala 404:23]
  wire  _GEN_322 = shadowMValid & activeFreqValid | primed; // @[src/main/scala/npu/core/Rope.scala 408:47 409:12 404:23]
  wire  _io_prefetch_ready_T_1 = primed & io_lut_ready; // @[src/main/scala/npu/core/Rope.scala 414:13]
  wire  _coreAlert_WIRE_1 = pairs_1_io_sync_alert; // @[src/main/scala/npu/core/Rope.scala 417:{12,12}]
  wire  _coreAlert_WIRE_0 = pairs_0_io_sync_alert; // @[src/main/scala/npu/core/Rope.scala 417:{12,12}]
  wire  _coreAlert_WIRE_3 = pairs_3_io_sync_alert; // @[src/main/scala/npu/core/Rope.scala 417:{12,12}]
  wire  _coreAlert_WIRE_2 = pairs_2_io_sync_alert; // @[src/main/scala/npu/core/Rope.scala 417:{12,12}]
  wire  _coreAlert_WIRE_5 = pairs_5_io_sync_alert; // @[src/main/scala/npu/core/Rope.scala 417:{12,12}]
  wire  _coreAlert_WIRE_4 = pairs_4_io_sync_alert; // @[src/main/scala/npu/core/Rope.scala 417:{12,12}]
  wire  _coreAlert_WIRE_7 = pairs_7_io_sync_alert; // @[src/main/scala/npu/core/Rope.scala 417:{12,12}]
  wire  _coreAlert_WIRE_6 = pairs_6_io_sync_alert; // @[src/main/scala/npu/core/Rope.scala 417:{12,12}]
  wire [7:0] _coreAlert_T = {_coreAlert_WIRE_7,_coreAlert_WIRE_6,_coreAlert_WIRE_5,_coreAlert_WIRE_4,_coreAlert_WIRE_3,
    _coreAlert_WIRE_2,_coreAlert_WIRE_1,_coreAlert_WIRE_0}; // @[src/main/scala/npu/core/Rope.scala 417:41]
  wire  coreAlert = |_coreAlert_T; // @[src/main/scala/npu/core/Rope.scala 417:48]
  wire  laneMismatch = anyValid & ~allValid; // @[src/main/scala/npu/core/Rope.scala 420:14]
  wire  _rowUpdateMisaligned_T_1 = ~tileStart; // @[src/main/scala/npu/core/Rope.scala 425:5]
  wire  rowUpdateMisaligned = _T_3 & _rowUpdateMisaligned_T_1; // @[src/main/scala/npu/core/Rope.scala 424:26]
  wire  _rowUpdateWithoutPosition_T = ~shadowMValid; // @[src/main/scala/npu/core/Rope.scala 429:5]
  wire  rowUpdateWithoutPosition = _T_3 & _rowUpdateWithoutPosition_T; // @[src/main/scala/npu/core/Rope.scala 428:18]
  wire  _firstRowWithoutPosition_T = ~_T_3; // @[src/main/scala/npu/core/Rope.scala 433:5]
  wire  _firstRowWithoutPosition_T_1 = inputFire & _firstRowWithoutPosition_T; // @[src/main/scala/npu/core/Rope.scala 432:15]
  wire  _firstRowWithoutPosition_T_2 = ~activeMValid; // @[src/main/scala/npu/core/Rope.scala 434:5]
  wire  firstRowWithoutPosition = _firstRowWithoutPosition_T_1 & _firstRowWithoutPosition_T_2; // @[src/main/scala/npu/core/Rope.scala 433:19]
  wire  _freqBlockMissing_T = ~nextBlockAvailable; // @[src/main/scala/npu/core/Rope.scala 438:5]
  wire  freqBlockMissing = completesBlock & _freqBlockMissing_T; // @[src/main/scala/npu/core/Rope.scala 437:20]
  wire  unexpectedFreqResponse = io_freq_block_valid & _io_freq_req_block_T; // @[src/main/scala/npu/core/Rope.scala 441:25]
  wire  _inputBeforePrimed_T = ~primed; // @[src/main/scala/npu/core/Rope.scala 446:5]
  wire  inputBeforePrimed = inputFire & _inputBeforePrimed_T; // @[src/main/scala/npu/core/Rope.scala 445:15]
  wire  _io_sync_alert_T = coreAlert | laneMismatch; // @[src/main/scala/npu/core/Rope.scala 449:15]
  wire  _io_sync_alert_T_1 = _io_sync_alert_T | rowUpdateMisaligned; // @[src/main/scala/npu/core/Rope.scala 450:18]
  wire  _io_sync_alert_T_2 = _io_sync_alert_T_1 | rowUpdateWithoutPosition; // @[src/main/scala/npu/core/Rope.scala 451:25]
  wire  _io_sync_alert_T_3 = _io_sync_alert_T_2 | firstRowWithoutPosition; // @[src/main/scala/npu/core/Rope.scala 452:30]
  wire  _io_sync_alert_T_4 = _io_sync_alert_T_3 | freqBlockMissing; // @[src/main/scala/npu/core/Rope.scala 453:29]
  wire  _io_sync_alert_T_5 = _io_sync_alert_T_4 | unexpectedFreqResponse; // @[src/main/scala/npu/core/Rope.scala 454:22]
  RopePairCore pairs_0 ( // @[src/main/scala/npu/core/Rope.scala 350:13]
    .clock(pairs_0_clock),
    .reset(pairs_0_reset),
    .io_x_even(pairs_0_io_x_even),
    .io_x_odd(pairs_0_io_x_odd),
    .io_in_valid(pairs_0_io_in_valid),
    .io_angle_idx(pairs_0_io_angle_idx),
    .io_stall(pairs_0_io_stall),
    .io_lut_cos_wr_en(pairs_0_io_lut_cos_wr_en),
    .io_lut_sin_wr_en(pairs_0_io_lut_sin_wr_en),
    .io_lut_wr_addr(pairs_0_io_lut_wr_addr),
    .io_lut_wr_data_0(pairs_0_io_lut_wr_data_0),
    .io_lut_wr_data_1(pairs_0_io_lut_wr_data_1),
    .io_lut_wr_data_2(pairs_0_io_lut_wr_data_2),
    .io_lut_wr_data_3(pairs_0_io_lut_wr_data_3),
    .io_lut_wr_data_4(pairs_0_io_lut_wr_data_4),
    .io_lut_wr_data_5(pairs_0_io_lut_wr_data_5),
    .io_lut_wr_data_6(pairs_0_io_lut_wr_data_6),
    .io_lut_wr_data_7(pairs_0_io_lut_wr_data_7),
    .io_y_even(pairs_0_io_y_even),
    .io_y_odd(pairs_0_io_y_odd),
    .io_out_valid(pairs_0_io_out_valid),
    .io_lut_ready(pairs_0_io_lut_ready),
    .io_sync_alert(pairs_0_io_sync_alert)
  );
  RopePairCore pairs_1 ( // @[src/main/scala/npu/core/Rope.scala 350:13]
    .clock(pairs_1_clock),
    .reset(pairs_1_reset),
    .io_x_even(pairs_1_io_x_even),
    .io_x_odd(pairs_1_io_x_odd),
    .io_in_valid(pairs_1_io_in_valid),
    .io_angle_idx(pairs_1_io_angle_idx),
    .io_stall(pairs_1_io_stall),
    .io_lut_cos_wr_en(pairs_1_io_lut_cos_wr_en),
    .io_lut_sin_wr_en(pairs_1_io_lut_sin_wr_en),
    .io_lut_wr_addr(pairs_1_io_lut_wr_addr),
    .io_lut_wr_data_0(pairs_1_io_lut_wr_data_0),
    .io_lut_wr_data_1(pairs_1_io_lut_wr_data_1),
    .io_lut_wr_data_2(pairs_1_io_lut_wr_data_2),
    .io_lut_wr_data_3(pairs_1_io_lut_wr_data_3),
    .io_lut_wr_data_4(pairs_1_io_lut_wr_data_4),
    .io_lut_wr_data_5(pairs_1_io_lut_wr_data_5),
    .io_lut_wr_data_6(pairs_1_io_lut_wr_data_6),
    .io_lut_wr_data_7(pairs_1_io_lut_wr_data_7),
    .io_y_even(pairs_1_io_y_even),
    .io_y_odd(pairs_1_io_y_odd),
    .io_out_valid(pairs_1_io_out_valid),
    .io_lut_ready(pairs_1_io_lut_ready),
    .io_sync_alert(pairs_1_io_sync_alert)
  );
  RopePairCore pairs_2 ( // @[src/main/scala/npu/core/Rope.scala 350:13]
    .clock(pairs_2_clock),
    .reset(pairs_2_reset),
    .io_x_even(pairs_2_io_x_even),
    .io_x_odd(pairs_2_io_x_odd),
    .io_in_valid(pairs_2_io_in_valid),
    .io_angle_idx(pairs_2_io_angle_idx),
    .io_stall(pairs_2_io_stall),
    .io_lut_cos_wr_en(pairs_2_io_lut_cos_wr_en),
    .io_lut_sin_wr_en(pairs_2_io_lut_sin_wr_en),
    .io_lut_wr_addr(pairs_2_io_lut_wr_addr),
    .io_lut_wr_data_0(pairs_2_io_lut_wr_data_0),
    .io_lut_wr_data_1(pairs_2_io_lut_wr_data_1),
    .io_lut_wr_data_2(pairs_2_io_lut_wr_data_2),
    .io_lut_wr_data_3(pairs_2_io_lut_wr_data_3),
    .io_lut_wr_data_4(pairs_2_io_lut_wr_data_4),
    .io_lut_wr_data_5(pairs_2_io_lut_wr_data_5),
    .io_lut_wr_data_6(pairs_2_io_lut_wr_data_6),
    .io_lut_wr_data_7(pairs_2_io_lut_wr_data_7),
    .io_y_even(pairs_2_io_y_even),
    .io_y_odd(pairs_2_io_y_odd),
    .io_out_valid(pairs_2_io_out_valid),
    .io_lut_ready(pairs_2_io_lut_ready),
    .io_sync_alert(pairs_2_io_sync_alert)
  );
  RopePairCore pairs_3 ( // @[src/main/scala/npu/core/Rope.scala 350:13]
    .clock(pairs_3_clock),
    .reset(pairs_3_reset),
    .io_x_even(pairs_3_io_x_even),
    .io_x_odd(pairs_3_io_x_odd),
    .io_in_valid(pairs_3_io_in_valid),
    .io_angle_idx(pairs_3_io_angle_idx),
    .io_stall(pairs_3_io_stall),
    .io_lut_cos_wr_en(pairs_3_io_lut_cos_wr_en),
    .io_lut_sin_wr_en(pairs_3_io_lut_sin_wr_en),
    .io_lut_wr_addr(pairs_3_io_lut_wr_addr),
    .io_lut_wr_data_0(pairs_3_io_lut_wr_data_0),
    .io_lut_wr_data_1(pairs_3_io_lut_wr_data_1),
    .io_lut_wr_data_2(pairs_3_io_lut_wr_data_2),
    .io_lut_wr_data_3(pairs_3_io_lut_wr_data_3),
    .io_lut_wr_data_4(pairs_3_io_lut_wr_data_4),
    .io_lut_wr_data_5(pairs_3_io_lut_wr_data_5),
    .io_lut_wr_data_6(pairs_3_io_lut_wr_data_6),
    .io_lut_wr_data_7(pairs_3_io_lut_wr_data_7),
    .io_y_even(pairs_3_io_y_even),
    .io_y_odd(pairs_3_io_y_odd),
    .io_out_valid(pairs_3_io_out_valid),
    .io_lut_ready(pairs_3_io_lut_ready),
    .io_sync_alert(pairs_3_io_sync_alert)
  );
  RopePairCore pairs_4 ( // @[src/main/scala/npu/core/Rope.scala 350:13]
    .clock(pairs_4_clock),
    .reset(pairs_4_reset),
    .io_x_even(pairs_4_io_x_even),
    .io_x_odd(pairs_4_io_x_odd),
    .io_in_valid(pairs_4_io_in_valid),
    .io_angle_idx(pairs_4_io_angle_idx),
    .io_stall(pairs_4_io_stall),
    .io_lut_cos_wr_en(pairs_4_io_lut_cos_wr_en),
    .io_lut_sin_wr_en(pairs_4_io_lut_sin_wr_en),
    .io_lut_wr_addr(pairs_4_io_lut_wr_addr),
    .io_lut_wr_data_0(pairs_4_io_lut_wr_data_0),
    .io_lut_wr_data_1(pairs_4_io_lut_wr_data_1),
    .io_lut_wr_data_2(pairs_4_io_lut_wr_data_2),
    .io_lut_wr_data_3(pairs_4_io_lut_wr_data_3),
    .io_lut_wr_data_4(pairs_4_io_lut_wr_data_4),
    .io_lut_wr_data_5(pairs_4_io_lut_wr_data_5),
    .io_lut_wr_data_6(pairs_4_io_lut_wr_data_6),
    .io_lut_wr_data_7(pairs_4_io_lut_wr_data_7),
    .io_y_even(pairs_4_io_y_even),
    .io_y_odd(pairs_4_io_y_odd),
    .io_out_valid(pairs_4_io_out_valid),
    .io_lut_ready(pairs_4_io_lut_ready),
    .io_sync_alert(pairs_4_io_sync_alert)
  );
  RopePairCore pairs_5 ( // @[src/main/scala/npu/core/Rope.scala 350:13]
    .clock(pairs_5_clock),
    .reset(pairs_5_reset),
    .io_x_even(pairs_5_io_x_even),
    .io_x_odd(pairs_5_io_x_odd),
    .io_in_valid(pairs_5_io_in_valid),
    .io_angle_idx(pairs_5_io_angle_idx),
    .io_stall(pairs_5_io_stall),
    .io_lut_cos_wr_en(pairs_5_io_lut_cos_wr_en),
    .io_lut_sin_wr_en(pairs_5_io_lut_sin_wr_en),
    .io_lut_wr_addr(pairs_5_io_lut_wr_addr),
    .io_lut_wr_data_0(pairs_5_io_lut_wr_data_0),
    .io_lut_wr_data_1(pairs_5_io_lut_wr_data_1),
    .io_lut_wr_data_2(pairs_5_io_lut_wr_data_2),
    .io_lut_wr_data_3(pairs_5_io_lut_wr_data_3),
    .io_lut_wr_data_4(pairs_5_io_lut_wr_data_4),
    .io_lut_wr_data_5(pairs_5_io_lut_wr_data_5),
    .io_lut_wr_data_6(pairs_5_io_lut_wr_data_6),
    .io_lut_wr_data_7(pairs_5_io_lut_wr_data_7),
    .io_y_even(pairs_5_io_y_even),
    .io_y_odd(pairs_5_io_y_odd),
    .io_out_valid(pairs_5_io_out_valid),
    .io_lut_ready(pairs_5_io_lut_ready),
    .io_sync_alert(pairs_5_io_sync_alert)
  );
  RopePairCore pairs_6 ( // @[src/main/scala/npu/core/Rope.scala 350:13]
    .clock(pairs_6_clock),
    .reset(pairs_6_reset),
    .io_x_even(pairs_6_io_x_even),
    .io_x_odd(pairs_6_io_x_odd),
    .io_in_valid(pairs_6_io_in_valid),
    .io_angle_idx(pairs_6_io_angle_idx),
    .io_stall(pairs_6_io_stall),
    .io_lut_cos_wr_en(pairs_6_io_lut_cos_wr_en),
    .io_lut_sin_wr_en(pairs_6_io_lut_sin_wr_en),
    .io_lut_wr_addr(pairs_6_io_lut_wr_addr),
    .io_lut_wr_data_0(pairs_6_io_lut_wr_data_0),
    .io_lut_wr_data_1(pairs_6_io_lut_wr_data_1),
    .io_lut_wr_data_2(pairs_6_io_lut_wr_data_2),
    .io_lut_wr_data_3(pairs_6_io_lut_wr_data_3),
    .io_lut_wr_data_4(pairs_6_io_lut_wr_data_4),
    .io_lut_wr_data_5(pairs_6_io_lut_wr_data_5),
    .io_lut_wr_data_6(pairs_6_io_lut_wr_data_6),
    .io_lut_wr_data_7(pairs_6_io_lut_wr_data_7),
    .io_y_even(pairs_6_io_y_even),
    .io_y_odd(pairs_6_io_y_odd),
    .io_out_valid(pairs_6_io_out_valid),
    .io_lut_ready(pairs_6_io_lut_ready),
    .io_sync_alert(pairs_6_io_sync_alert)
  );
  RopePairCore pairs_7 ( // @[src/main/scala/npu/core/Rope.scala 350:13]
    .clock(pairs_7_clock),
    .reset(pairs_7_reset),
    .io_x_even(pairs_7_io_x_even),
    .io_x_odd(pairs_7_io_x_odd),
    .io_in_valid(pairs_7_io_in_valid),
    .io_angle_idx(pairs_7_io_angle_idx),
    .io_stall(pairs_7_io_stall),
    .io_lut_cos_wr_en(pairs_7_io_lut_cos_wr_en),
    .io_lut_sin_wr_en(pairs_7_io_lut_sin_wr_en),
    .io_lut_wr_addr(pairs_7_io_lut_wr_addr),
    .io_lut_wr_data_0(pairs_7_io_lut_wr_data_0),
    .io_lut_wr_data_1(pairs_7_io_lut_wr_data_1),
    .io_lut_wr_data_2(pairs_7_io_lut_wr_data_2),
    .io_lut_wr_data_3(pairs_7_io_lut_wr_data_3),
    .io_lut_wr_data_4(pairs_7_io_lut_wr_data_4),
    .io_lut_wr_data_5(pairs_7_io_lut_wr_data_5),
    .io_lut_wr_data_6(pairs_7_io_lut_wr_data_6),
    .io_lut_wr_data_7(pairs_7_io_lut_wr_data_7),
    .io_y_even(pairs_7_io_y_even),
    .io_y_odd(pairs_7_io_y_odd),
    .io_out_valid(pairs_7_io_out_valid),
    .io_lut_ready(pairs_7_io_lut_ready),
    .io_sync_alert(pairs_7_io_sync_alert)
  );
  assign io_freq_req_block = _io_freq_req_block_T_1 & _io_freq_req_block_T_7; // @[src/main/scala/npu/core/Rope.scala 301:25]
  assign io_out_vec_0 = io_rope_en ? $signed(pairs_0_io_y_even) : $signed(io_in_vec_0); // @[src/main/scala/npu/core/Rope.scala 389:10]
  assign io_out_vec_1 = io_rope_en ? $signed(pairs_0_io_y_odd) : $signed(io_in_vec_1); // @[src/main/scala/npu/core/Rope.scala 392:10]
  assign io_out_vec_2 = io_rope_en ? $signed(pairs_1_io_y_even) : $signed(io_in_vec_2); // @[src/main/scala/npu/core/Rope.scala 389:10]
  assign io_out_vec_3 = io_rope_en ? $signed(pairs_1_io_y_odd) : $signed(io_in_vec_3); // @[src/main/scala/npu/core/Rope.scala 392:10]
  assign io_out_vec_4 = io_rope_en ? $signed(pairs_2_io_y_even) : $signed(io_in_vec_4); // @[src/main/scala/npu/core/Rope.scala 389:10]
  assign io_out_vec_5 = io_rope_en ? $signed(pairs_2_io_y_odd) : $signed(io_in_vec_5); // @[src/main/scala/npu/core/Rope.scala 392:10]
  assign io_out_vec_6 = io_rope_en ? $signed(pairs_3_io_y_even) : $signed(io_in_vec_6); // @[src/main/scala/npu/core/Rope.scala 389:10]
  assign io_out_vec_7 = io_rope_en ? $signed(pairs_3_io_y_odd) : $signed(io_in_vec_7); // @[src/main/scala/npu/core/Rope.scala 392:10]
  assign io_out_vec_8 = io_rope_en ? $signed(pairs_4_io_y_even) : $signed(io_in_vec_8); // @[src/main/scala/npu/core/Rope.scala 389:10]
  assign io_out_vec_9 = io_rope_en ? $signed(pairs_4_io_y_odd) : $signed(io_in_vec_9); // @[src/main/scala/npu/core/Rope.scala 392:10]
  assign io_out_vec_10 = io_rope_en ? $signed(pairs_5_io_y_even) : $signed(io_in_vec_10); // @[src/main/scala/npu/core/Rope.scala 389:10]
  assign io_out_vec_11 = io_rope_en ? $signed(pairs_5_io_y_odd) : $signed(io_in_vec_11); // @[src/main/scala/npu/core/Rope.scala 392:10]
  assign io_out_vec_12 = io_rope_en ? $signed(pairs_6_io_y_even) : $signed(io_in_vec_12); // @[src/main/scala/npu/core/Rope.scala 389:10]
  assign io_out_vec_13 = io_rope_en ? $signed(pairs_6_io_y_odd) : $signed(io_in_vec_13); // @[src/main/scala/npu/core/Rope.scala 392:10]
  assign io_out_vec_14 = io_rope_en ? $signed(pairs_7_io_y_even) : $signed(io_in_vec_14); // @[src/main/scala/npu/core/Rope.scala 389:10]
  assign io_out_vec_15 = io_rope_en ? $signed(pairs_7_io_y_odd) : $signed(io_in_vec_15); // @[src/main/scala/npu/core/Rope.scala 392:10]
  assign io_out_valid_0 = io_rope_en ? pairs_0_io_out_valid : io_in_valid_0 & run; // @[src/main/scala/npu/core/Rope.scala 395:10]
  assign io_out_valid_1 = io_rope_en ? pairs_0_io_out_valid : io_in_valid_1 & run; // @[src/main/scala/npu/core/Rope.scala 398:10]
  assign io_out_valid_2 = io_rope_en ? pairs_1_io_out_valid : io_in_valid_2 & run; // @[src/main/scala/npu/core/Rope.scala 395:10]
  assign io_out_valid_3 = io_rope_en ? pairs_1_io_out_valid : io_in_valid_3 & run; // @[src/main/scala/npu/core/Rope.scala 398:10]
  assign io_out_valid_4 = io_rope_en ? pairs_2_io_out_valid : io_in_valid_4 & run; // @[src/main/scala/npu/core/Rope.scala 395:10]
  assign io_out_valid_5 = io_rope_en ? pairs_2_io_out_valid : io_in_valid_5 & run; // @[src/main/scala/npu/core/Rope.scala 398:10]
  assign io_out_valid_6 = io_rope_en ? pairs_3_io_out_valid : io_in_valid_6 & run; // @[src/main/scala/npu/core/Rope.scala 395:10]
  assign io_out_valid_7 = io_rope_en ? pairs_3_io_out_valid : io_in_valid_7 & run; // @[src/main/scala/npu/core/Rope.scala 398:10]
  assign io_out_valid_8 = io_rope_en ? pairs_4_io_out_valid : io_in_valid_8 & run; // @[src/main/scala/npu/core/Rope.scala 395:10]
  assign io_out_valid_9 = io_rope_en ? pairs_4_io_out_valid : io_in_valid_9 & run; // @[src/main/scala/npu/core/Rope.scala 398:10]
  assign io_out_valid_10 = io_rope_en ? pairs_5_io_out_valid : io_in_valid_10 & run; // @[src/main/scala/npu/core/Rope.scala 395:10]
  assign io_out_valid_11 = io_rope_en ? pairs_5_io_out_valid : io_in_valid_11 & run; // @[src/main/scala/npu/core/Rope.scala 398:10]
  assign io_out_valid_12 = io_rope_en ? pairs_6_io_out_valid : io_in_valid_12 & run; // @[src/main/scala/npu/core/Rope.scala 395:10]
  assign io_out_valid_13 = io_rope_en ? pairs_6_io_out_valid : io_in_valid_13 & run; // @[src/main/scala/npu/core/Rope.scala 398:10]
  assign io_out_valid_14 = io_rope_en ? pairs_7_io_out_valid : io_in_valid_14 & run; // @[src/main/scala/npu/core/Rope.scala 395:10]
  assign io_out_valid_15 = io_rope_en ? pairs_7_io_out_valid : io_in_valid_15 & run; // @[src/main/scala/npu/core/Rope.scala 398:10]
  assign io_prefetch_ready = _T | _io_prefetch_ready_T_1; // @[src/main/scala/npu/core/Rope.scala 413:17]
  assign io_lut_ready = &_io_lut_ready_T; // @[src/main/scala/npu/core/Rope.scala 402:47]
  assign io_sync_alert = _io_sync_alert_T_5 | inputBeforePrimed; // @[src/main/scala/npu/core/Rope.scala 455:28]
  assign pairs_0_clock = clock;
  assign pairs_0_reset = reset;
  assign pairs_0_io_x_even = io_in_vec_0; // @[src/main/scala/npu/core/Rope.scala 377:24]
  assign pairs_0_io_x_odd = io_in_vec_1; // @[src/main/scala/npu/core/Rope.scala 378:24]
  assign pairs_0_io_in_valid = allValid & io_rope_en; // @[src/main/scala/npu/core/Rope.scala 379:38]
  assign pairs_0_io_angle_idx = phaseModulo[15:6]; // @[src/main/scala/npu/core/Rope.scala 375:18]
  assign pairs_0_io_stall = io_stall; // @[src/main/scala/npu/core/Rope.scala 381:23]
  assign pairs_0_io_lut_cos_wr_en = io_lut_cos_wr_en; // @[src/main/scala/npu/core/Rope.scala 383:31]
  assign pairs_0_io_lut_sin_wr_en = io_lut_sin_wr_en; // @[src/main/scala/npu/core/Rope.scala 384:31]
  assign pairs_0_io_lut_wr_addr = io_lut_wr_addr; // @[src/main/scala/npu/core/Rope.scala 385:29]
  assign pairs_0_io_lut_wr_data_0 = io_lut_wr_data_0; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_0_io_lut_wr_data_1 = io_lut_wr_data_1; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_0_io_lut_wr_data_2 = io_lut_wr_data_2; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_0_io_lut_wr_data_3 = io_lut_wr_data_3; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_0_io_lut_wr_data_4 = io_lut_wr_data_4; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_0_io_lut_wr_data_5 = io_lut_wr_data_5; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_0_io_lut_wr_data_6 = io_lut_wr_data_6; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_0_io_lut_wr_data_7 = io_lut_wr_data_7; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_1_clock = clock;
  assign pairs_1_reset = reset;
  assign pairs_1_io_x_even = io_in_vec_2; // @[src/main/scala/npu/core/Rope.scala 377:24]
  assign pairs_1_io_x_odd = io_in_vec_3; // @[src/main/scala/npu/core/Rope.scala 378:24]
  assign pairs_1_io_in_valid = allValid & io_rope_en; // @[src/main/scala/npu/core/Rope.scala 379:38]
  assign pairs_1_io_angle_idx = phaseModulo_1[15:6]; // @[src/main/scala/npu/core/Rope.scala 375:18]
  assign pairs_1_io_stall = io_stall; // @[src/main/scala/npu/core/Rope.scala 381:23]
  assign pairs_1_io_lut_cos_wr_en = io_lut_cos_wr_en; // @[src/main/scala/npu/core/Rope.scala 383:31]
  assign pairs_1_io_lut_sin_wr_en = io_lut_sin_wr_en; // @[src/main/scala/npu/core/Rope.scala 384:31]
  assign pairs_1_io_lut_wr_addr = io_lut_wr_addr; // @[src/main/scala/npu/core/Rope.scala 385:29]
  assign pairs_1_io_lut_wr_data_0 = io_lut_wr_data_0; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_1_io_lut_wr_data_1 = io_lut_wr_data_1; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_1_io_lut_wr_data_2 = io_lut_wr_data_2; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_1_io_lut_wr_data_3 = io_lut_wr_data_3; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_1_io_lut_wr_data_4 = io_lut_wr_data_4; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_1_io_lut_wr_data_5 = io_lut_wr_data_5; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_1_io_lut_wr_data_6 = io_lut_wr_data_6; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_1_io_lut_wr_data_7 = io_lut_wr_data_7; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_2_clock = clock;
  assign pairs_2_reset = reset;
  assign pairs_2_io_x_even = io_in_vec_4; // @[src/main/scala/npu/core/Rope.scala 377:24]
  assign pairs_2_io_x_odd = io_in_vec_5; // @[src/main/scala/npu/core/Rope.scala 378:24]
  assign pairs_2_io_in_valid = allValid & io_rope_en; // @[src/main/scala/npu/core/Rope.scala 379:38]
  assign pairs_2_io_angle_idx = phaseModulo_2[15:6]; // @[src/main/scala/npu/core/Rope.scala 375:18]
  assign pairs_2_io_stall = io_stall; // @[src/main/scala/npu/core/Rope.scala 381:23]
  assign pairs_2_io_lut_cos_wr_en = io_lut_cos_wr_en; // @[src/main/scala/npu/core/Rope.scala 383:31]
  assign pairs_2_io_lut_sin_wr_en = io_lut_sin_wr_en; // @[src/main/scala/npu/core/Rope.scala 384:31]
  assign pairs_2_io_lut_wr_addr = io_lut_wr_addr; // @[src/main/scala/npu/core/Rope.scala 385:29]
  assign pairs_2_io_lut_wr_data_0 = io_lut_wr_data_0; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_2_io_lut_wr_data_1 = io_lut_wr_data_1; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_2_io_lut_wr_data_2 = io_lut_wr_data_2; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_2_io_lut_wr_data_3 = io_lut_wr_data_3; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_2_io_lut_wr_data_4 = io_lut_wr_data_4; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_2_io_lut_wr_data_5 = io_lut_wr_data_5; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_2_io_lut_wr_data_6 = io_lut_wr_data_6; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_2_io_lut_wr_data_7 = io_lut_wr_data_7; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_3_clock = clock;
  assign pairs_3_reset = reset;
  assign pairs_3_io_x_even = io_in_vec_6; // @[src/main/scala/npu/core/Rope.scala 377:24]
  assign pairs_3_io_x_odd = io_in_vec_7; // @[src/main/scala/npu/core/Rope.scala 378:24]
  assign pairs_3_io_in_valid = allValid & io_rope_en; // @[src/main/scala/npu/core/Rope.scala 379:38]
  assign pairs_3_io_angle_idx = phaseModulo_3[15:6]; // @[src/main/scala/npu/core/Rope.scala 375:18]
  assign pairs_3_io_stall = io_stall; // @[src/main/scala/npu/core/Rope.scala 381:23]
  assign pairs_3_io_lut_cos_wr_en = io_lut_cos_wr_en; // @[src/main/scala/npu/core/Rope.scala 383:31]
  assign pairs_3_io_lut_sin_wr_en = io_lut_sin_wr_en; // @[src/main/scala/npu/core/Rope.scala 384:31]
  assign pairs_3_io_lut_wr_addr = io_lut_wr_addr; // @[src/main/scala/npu/core/Rope.scala 385:29]
  assign pairs_3_io_lut_wr_data_0 = io_lut_wr_data_0; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_3_io_lut_wr_data_1 = io_lut_wr_data_1; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_3_io_lut_wr_data_2 = io_lut_wr_data_2; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_3_io_lut_wr_data_3 = io_lut_wr_data_3; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_3_io_lut_wr_data_4 = io_lut_wr_data_4; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_3_io_lut_wr_data_5 = io_lut_wr_data_5; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_3_io_lut_wr_data_6 = io_lut_wr_data_6; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_3_io_lut_wr_data_7 = io_lut_wr_data_7; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_4_clock = clock;
  assign pairs_4_reset = reset;
  assign pairs_4_io_x_even = io_in_vec_8; // @[src/main/scala/npu/core/Rope.scala 377:24]
  assign pairs_4_io_x_odd = io_in_vec_9; // @[src/main/scala/npu/core/Rope.scala 378:24]
  assign pairs_4_io_in_valid = allValid & io_rope_en; // @[src/main/scala/npu/core/Rope.scala 379:38]
  assign pairs_4_io_angle_idx = phaseModulo_4[15:6]; // @[src/main/scala/npu/core/Rope.scala 375:18]
  assign pairs_4_io_stall = io_stall; // @[src/main/scala/npu/core/Rope.scala 381:23]
  assign pairs_4_io_lut_cos_wr_en = io_lut_cos_wr_en; // @[src/main/scala/npu/core/Rope.scala 383:31]
  assign pairs_4_io_lut_sin_wr_en = io_lut_sin_wr_en; // @[src/main/scala/npu/core/Rope.scala 384:31]
  assign pairs_4_io_lut_wr_addr = io_lut_wr_addr; // @[src/main/scala/npu/core/Rope.scala 385:29]
  assign pairs_4_io_lut_wr_data_0 = io_lut_wr_data_0; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_4_io_lut_wr_data_1 = io_lut_wr_data_1; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_4_io_lut_wr_data_2 = io_lut_wr_data_2; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_4_io_lut_wr_data_3 = io_lut_wr_data_3; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_4_io_lut_wr_data_4 = io_lut_wr_data_4; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_4_io_lut_wr_data_5 = io_lut_wr_data_5; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_4_io_lut_wr_data_6 = io_lut_wr_data_6; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_4_io_lut_wr_data_7 = io_lut_wr_data_7; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_5_clock = clock;
  assign pairs_5_reset = reset;
  assign pairs_5_io_x_even = io_in_vec_10; // @[src/main/scala/npu/core/Rope.scala 377:24]
  assign pairs_5_io_x_odd = io_in_vec_11; // @[src/main/scala/npu/core/Rope.scala 378:24]
  assign pairs_5_io_in_valid = allValid & io_rope_en; // @[src/main/scala/npu/core/Rope.scala 379:38]
  assign pairs_5_io_angle_idx = phaseModulo_5[15:6]; // @[src/main/scala/npu/core/Rope.scala 375:18]
  assign pairs_5_io_stall = io_stall; // @[src/main/scala/npu/core/Rope.scala 381:23]
  assign pairs_5_io_lut_cos_wr_en = io_lut_cos_wr_en; // @[src/main/scala/npu/core/Rope.scala 383:31]
  assign pairs_5_io_lut_sin_wr_en = io_lut_sin_wr_en; // @[src/main/scala/npu/core/Rope.scala 384:31]
  assign pairs_5_io_lut_wr_addr = io_lut_wr_addr; // @[src/main/scala/npu/core/Rope.scala 385:29]
  assign pairs_5_io_lut_wr_data_0 = io_lut_wr_data_0; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_5_io_lut_wr_data_1 = io_lut_wr_data_1; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_5_io_lut_wr_data_2 = io_lut_wr_data_2; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_5_io_lut_wr_data_3 = io_lut_wr_data_3; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_5_io_lut_wr_data_4 = io_lut_wr_data_4; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_5_io_lut_wr_data_5 = io_lut_wr_data_5; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_5_io_lut_wr_data_6 = io_lut_wr_data_6; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_5_io_lut_wr_data_7 = io_lut_wr_data_7; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_6_clock = clock;
  assign pairs_6_reset = reset;
  assign pairs_6_io_x_even = io_in_vec_12; // @[src/main/scala/npu/core/Rope.scala 377:24]
  assign pairs_6_io_x_odd = io_in_vec_13; // @[src/main/scala/npu/core/Rope.scala 378:24]
  assign pairs_6_io_in_valid = allValid & io_rope_en; // @[src/main/scala/npu/core/Rope.scala 379:38]
  assign pairs_6_io_angle_idx = phaseModulo_6[15:6]; // @[src/main/scala/npu/core/Rope.scala 375:18]
  assign pairs_6_io_stall = io_stall; // @[src/main/scala/npu/core/Rope.scala 381:23]
  assign pairs_6_io_lut_cos_wr_en = io_lut_cos_wr_en; // @[src/main/scala/npu/core/Rope.scala 383:31]
  assign pairs_6_io_lut_sin_wr_en = io_lut_sin_wr_en; // @[src/main/scala/npu/core/Rope.scala 384:31]
  assign pairs_6_io_lut_wr_addr = io_lut_wr_addr; // @[src/main/scala/npu/core/Rope.scala 385:29]
  assign pairs_6_io_lut_wr_data_0 = io_lut_wr_data_0; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_6_io_lut_wr_data_1 = io_lut_wr_data_1; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_6_io_lut_wr_data_2 = io_lut_wr_data_2; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_6_io_lut_wr_data_3 = io_lut_wr_data_3; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_6_io_lut_wr_data_4 = io_lut_wr_data_4; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_6_io_lut_wr_data_5 = io_lut_wr_data_5; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_6_io_lut_wr_data_6 = io_lut_wr_data_6; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_6_io_lut_wr_data_7 = io_lut_wr_data_7; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_7_clock = clock;
  assign pairs_7_reset = reset;
  assign pairs_7_io_x_even = io_in_vec_14; // @[src/main/scala/npu/core/Rope.scala 377:24]
  assign pairs_7_io_x_odd = io_in_vec_15; // @[src/main/scala/npu/core/Rope.scala 378:24]
  assign pairs_7_io_in_valid = allValid & io_rope_en; // @[src/main/scala/npu/core/Rope.scala 379:38]
  assign pairs_7_io_angle_idx = phaseModulo_7[15:6]; // @[src/main/scala/npu/core/Rope.scala 375:18]
  assign pairs_7_io_stall = io_stall; // @[src/main/scala/npu/core/Rope.scala 381:23]
  assign pairs_7_io_lut_cos_wr_en = io_lut_cos_wr_en; // @[src/main/scala/npu/core/Rope.scala 383:31]
  assign pairs_7_io_lut_sin_wr_en = io_lut_sin_wr_en; // @[src/main/scala/npu/core/Rope.scala 384:31]
  assign pairs_7_io_lut_wr_addr = io_lut_wr_addr; // @[src/main/scala/npu/core/Rope.scala 385:29]
  assign pairs_7_io_lut_wr_data_0 = io_lut_wr_data_0; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_7_io_lut_wr_data_1 = io_lut_wr_data_1; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_7_io_lut_wr_data_2 = io_lut_wr_data_2; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_7_io_lut_wr_data_3 = io_lut_wr_data_3; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_7_io_lut_wr_data_4 = io_lut_wr_data_4; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_7_io_lut_wr_data_5 = io_lut_wr_data_5; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_7_io_lut_wr_data_6 = io_lut_wr_data_6; // @[src/main/scala/npu/core/Rope.scala 386:29]
  assign pairs_7_io_lut_wr_data_7 = io_lut_wr_data_7; // @[src/main/scala/npu/core/Rope.scala 386:29]
  always @(posedge clock) begin
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 230:27]
      rowCounter <= 4'h0; // @[src/main/scala/npu/core/Rope.scala 230:27]
    end else if (io_soft_reset | ~io_rope_en & run) begin // @[src/main/scala/npu/core/Rope.scala 234:47]
      rowCounter <= 4'h0; // @[src/main/scala/npu/core/Rope.scala 235:16]
    end else if (inputFire) begin // @[src/main/scala/npu/core/Rope.scala 236:25]
      if (tileEnd) begin // @[src/main/scala/npu/core/Rope.scala 237:19]
        rowCounter <= 4'h0; // @[src/main/scala/npu/core/Rope.scala 238:18]
      end else begin
        rowCounter <= _rowCounter_T_1; // @[src/main/scala/npu/core/Rope.scala 240:18]
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 247:28]
      activeMBase <= 32'h0; // @[src/main/scala/npu/core/Rope.scala 247:28]
    end else if (io_soft_reset) begin // @[src/main/scala/npu/core/Rope.scala 252:23]
      activeMBase <= 32'h0; // @[src/main/scala/npu/core/Rope.scala 253:17]
    end else if (inputFire & io_row_change_update) begin // @[src/main/scala/npu/core/Rope.scala 263:45]
      if (shadowMValid) begin // @[src/main/scala/npu/core/Rope.scala 264:26]
        activeMBase <= shadowMBase; // @[src/main/scala/npu/core/Rope.scala 265:21]
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 248:28]
      shadowMBase <= 32'h0; // @[src/main/scala/npu/core/Rope.scala 248:28]
    end else if (io_soft_reset) begin // @[src/main/scala/npu/core/Rope.scala 252:23]
      shadowMBase <= 32'h0; // @[src/main/scala/npu/core/Rope.scala 254:17]
    end else if (inputFire & io_row_change_update) begin // @[src/main/scala/npu/core/Rope.scala 263:45]
      if (shadowMValid) begin // @[src/main/scala/npu/core/Rope.scala 264:26]
        shadowMBase <= _shadowMBase_T_1; // @[src/main/scala/npu/core/Rope.scala 267:21]
      end else begin
        shadowMBase <= _GEN_3;
      end
    end else begin
      shadowMBase <= _GEN_3;
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 249:29]
      activeMValid <= 1'h0; // @[src/main/scala/npu/core/Rope.scala 249:29]
    end else if (io_soft_reset) begin // @[src/main/scala/npu/core/Rope.scala 252:23]
      activeMValid <= 1'h0; // @[src/main/scala/npu/core/Rope.scala 255:18]
    end else if (inputFire & io_row_change_update) begin // @[src/main/scala/npu/core/Rope.scala 263:45]
      activeMValid <= _GEN_6;
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 250:29]
      shadowMValid <= 1'h0; // @[src/main/scala/npu/core/Rope.scala 250:29]
    end else if (io_soft_reset) begin // @[src/main/scala/npu/core/Rope.scala 252:23]
      shadowMValid <= 1'h0; // @[src/main/scala/npu/core/Rope.scala 256:18]
    end else if (inputFire & io_row_change_update) begin // @[src/main/scala/npu/core/Rope.scala 263:45]
      shadowMValid <= _GEN_8;
    end else begin
      shadowMValid <= _GEN_4;
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 287:12]
      activeFreqBlock_0 <= 16'h0; // @[src/main/scala/npu/core/Rope.scala 287:12]
    end else if (!(io_soft_reset)) begin // @[src/main/scala/npu/core/Rope.scala 308:23]
      if (io_freq_block_valid) begin // @[src/main/scala/npu/core/Rope.scala 333:31]
        if (_io_freq_req_block_T_2) begin // @[src/main/scala/npu/core/Rope.scala 335:30]
          activeFreqBlock_0 <= io_freq_block_in_0; // @[src/main/scala/npu/core/Rope.scala 336:25]
        end else begin
          activeFreqBlock_0 <= _GEN_55;
        end
      end else begin
        activeFreqBlock_0 <= _GEN_55;
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 287:12]
      activeFreqBlock_1 <= 16'h0; // @[src/main/scala/npu/core/Rope.scala 287:12]
    end else if (!(io_soft_reset)) begin // @[src/main/scala/npu/core/Rope.scala 308:23]
      if (io_freq_block_valid) begin // @[src/main/scala/npu/core/Rope.scala 333:31]
        if (_io_freq_req_block_T_2) begin // @[src/main/scala/npu/core/Rope.scala 335:30]
          activeFreqBlock_1 <= io_freq_block_in_1; // @[src/main/scala/npu/core/Rope.scala 336:25]
        end else begin
          activeFreqBlock_1 <= _GEN_56;
        end
      end else begin
        activeFreqBlock_1 <= _GEN_56;
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 287:12]
      activeFreqBlock_2 <= 16'h0; // @[src/main/scala/npu/core/Rope.scala 287:12]
    end else if (!(io_soft_reset)) begin // @[src/main/scala/npu/core/Rope.scala 308:23]
      if (io_freq_block_valid) begin // @[src/main/scala/npu/core/Rope.scala 333:31]
        if (_io_freq_req_block_T_2) begin // @[src/main/scala/npu/core/Rope.scala 335:30]
          activeFreqBlock_2 <= io_freq_block_in_2; // @[src/main/scala/npu/core/Rope.scala 336:25]
        end else begin
          activeFreqBlock_2 <= _GEN_57;
        end
      end else begin
        activeFreqBlock_2 <= _GEN_57;
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 287:12]
      activeFreqBlock_3 <= 16'h0; // @[src/main/scala/npu/core/Rope.scala 287:12]
    end else if (!(io_soft_reset)) begin // @[src/main/scala/npu/core/Rope.scala 308:23]
      if (io_freq_block_valid) begin // @[src/main/scala/npu/core/Rope.scala 333:31]
        if (_io_freq_req_block_T_2) begin // @[src/main/scala/npu/core/Rope.scala 335:30]
          activeFreqBlock_3 <= io_freq_block_in_3; // @[src/main/scala/npu/core/Rope.scala 336:25]
        end else begin
          activeFreqBlock_3 <= _GEN_58;
        end
      end else begin
        activeFreqBlock_3 <= _GEN_58;
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 287:12]
      activeFreqBlock_4 <= 16'h0; // @[src/main/scala/npu/core/Rope.scala 287:12]
    end else if (!(io_soft_reset)) begin // @[src/main/scala/npu/core/Rope.scala 308:23]
      if (io_freq_block_valid) begin // @[src/main/scala/npu/core/Rope.scala 333:31]
        if (_io_freq_req_block_T_2) begin // @[src/main/scala/npu/core/Rope.scala 335:30]
          activeFreqBlock_4 <= io_freq_block_in_4; // @[src/main/scala/npu/core/Rope.scala 336:25]
        end else begin
          activeFreqBlock_4 <= _GEN_59;
        end
      end else begin
        activeFreqBlock_4 <= _GEN_59;
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 287:12]
      activeFreqBlock_5 <= 16'h0; // @[src/main/scala/npu/core/Rope.scala 287:12]
    end else if (!(io_soft_reset)) begin // @[src/main/scala/npu/core/Rope.scala 308:23]
      if (io_freq_block_valid) begin // @[src/main/scala/npu/core/Rope.scala 333:31]
        if (_io_freq_req_block_T_2) begin // @[src/main/scala/npu/core/Rope.scala 335:30]
          activeFreqBlock_5 <= io_freq_block_in_5; // @[src/main/scala/npu/core/Rope.scala 336:25]
        end else begin
          activeFreqBlock_5 <= _GEN_60;
        end
      end else begin
        activeFreqBlock_5 <= _GEN_60;
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 287:12]
      activeFreqBlock_6 <= 16'h0; // @[src/main/scala/npu/core/Rope.scala 287:12]
    end else if (!(io_soft_reset)) begin // @[src/main/scala/npu/core/Rope.scala 308:23]
      if (io_freq_block_valid) begin // @[src/main/scala/npu/core/Rope.scala 333:31]
        if (_io_freq_req_block_T_2) begin // @[src/main/scala/npu/core/Rope.scala 335:30]
          activeFreqBlock_6 <= io_freq_block_in_6; // @[src/main/scala/npu/core/Rope.scala 336:25]
        end else begin
          activeFreqBlock_6 <= _GEN_61;
        end
      end else begin
        activeFreqBlock_6 <= _GEN_61;
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 287:12]
      activeFreqBlock_7 <= 16'h0; // @[src/main/scala/npu/core/Rope.scala 287:12]
    end else if (!(io_soft_reset)) begin // @[src/main/scala/npu/core/Rope.scala 308:23]
      if (io_freq_block_valid) begin // @[src/main/scala/npu/core/Rope.scala 333:31]
        if (_io_freq_req_block_T_2) begin // @[src/main/scala/npu/core/Rope.scala 335:30]
          activeFreqBlock_7 <= io_freq_block_in_7; // @[src/main/scala/npu/core/Rope.scala 336:25]
        end else begin
          activeFreqBlock_7 <= _GEN_62;
        end
      end else begin
        activeFreqBlock_7 <= _GEN_62;
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 287:12]
      activeFreqBlock_8 <= 16'h0; // @[src/main/scala/npu/core/Rope.scala 287:12]
    end else if (!(io_soft_reset)) begin // @[src/main/scala/npu/core/Rope.scala 308:23]
      if (io_freq_block_valid) begin // @[src/main/scala/npu/core/Rope.scala 333:31]
        if (_io_freq_req_block_T_2) begin // @[src/main/scala/npu/core/Rope.scala 335:30]
          activeFreqBlock_8 <= io_freq_block_in_8; // @[src/main/scala/npu/core/Rope.scala 336:25]
        end else begin
          activeFreqBlock_8 <= _GEN_63;
        end
      end else begin
        activeFreqBlock_8 <= _GEN_63;
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 287:12]
      activeFreqBlock_9 <= 16'h0; // @[src/main/scala/npu/core/Rope.scala 287:12]
    end else if (!(io_soft_reset)) begin // @[src/main/scala/npu/core/Rope.scala 308:23]
      if (io_freq_block_valid) begin // @[src/main/scala/npu/core/Rope.scala 333:31]
        if (_io_freq_req_block_T_2) begin // @[src/main/scala/npu/core/Rope.scala 335:30]
          activeFreqBlock_9 <= io_freq_block_in_9; // @[src/main/scala/npu/core/Rope.scala 336:25]
        end else begin
          activeFreqBlock_9 <= _GEN_64;
        end
      end else begin
        activeFreqBlock_9 <= _GEN_64;
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 287:12]
      activeFreqBlock_10 <= 16'h0; // @[src/main/scala/npu/core/Rope.scala 287:12]
    end else if (!(io_soft_reset)) begin // @[src/main/scala/npu/core/Rope.scala 308:23]
      if (io_freq_block_valid) begin // @[src/main/scala/npu/core/Rope.scala 333:31]
        if (_io_freq_req_block_T_2) begin // @[src/main/scala/npu/core/Rope.scala 335:30]
          activeFreqBlock_10 <= io_freq_block_in_10; // @[src/main/scala/npu/core/Rope.scala 336:25]
        end else begin
          activeFreqBlock_10 <= _GEN_65;
        end
      end else begin
        activeFreqBlock_10 <= _GEN_65;
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 287:12]
      activeFreqBlock_11 <= 16'h0; // @[src/main/scala/npu/core/Rope.scala 287:12]
    end else if (!(io_soft_reset)) begin // @[src/main/scala/npu/core/Rope.scala 308:23]
      if (io_freq_block_valid) begin // @[src/main/scala/npu/core/Rope.scala 333:31]
        if (_io_freq_req_block_T_2) begin // @[src/main/scala/npu/core/Rope.scala 335:30]
          activeFreqBlock_11 <= io_freq_block_in_11; // @[src/main/scala/npu/core/Rope.scala 336:25]
        end else begin
          activeFreqBlock_11 <= _GEN_66;
        end
      end else begin
        activeFreqBlock_11 <= _GEN_66;
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 287:12]
      activeFreqBlock_12 <= 16'h0; // @[src/main/scala/npu/core/Rope.scala 287:12]
    end else if (!(io_soft_reset)) begin // @[src/main/scala/npu/core/Rope.scala 308:23]
      if (io_freq_block_valid) begin // @[src/main/scala/npu/core/Rope.scala 333:31]
        if (_io_freq_req_block_T_2) begin // @[src/main/scala/npu/core/Rope.scala 335:30]
          activeFreqBlock_12 <= io_freq_block_in_12; // @[src/main/scala/npu/core/Rope.scala 336:25]
        end else begin
          activeFreqBlock_12 <= _GEN_67;
        end
      end else begin
        activeFreqBlock_12 <= _GEN_67;
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 287:12]
      activeFreqBlock_13 <= 16'h0; // @[src/main/scala/npu/core/Rope.scala 287:12]
    end else if (!(io_soft_reset)) begin // @[src/main/scala/npu/core/Rope.scala 308:23]
      if (io_freq_block_valid) begin // @[src/main/scala/npu/core/Rope.scala 333:31]
        if (_io_freq_req_block_T_2) begin // @[src/main/scala/npu/core/Rope.scala 335:30]
          activeFreqBlock_13 <= io_freq_block_in_13; // @[src/main/scala/npu/core/Rope.scala 336:25]
        end else begin
          activeFreqBlock_13 <= _GEN_68;
        end
      end else begin
        activeFreqBlock_13 <= _GEN_68;
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 287:12]
      activeFreqBlock_14 <= 16'h0; // @[src/main/scala/npu/core/Rope.scala 287:12]
    end else if (!(io_soft_reset)) begin // @[src/main/scala/npu/core/Rope.scala 308:23]
      if (io_freq_block_valid) begin // @[src/main/scala/npu/core/Rope.scala 333:31]
        if (_io_freq_req_block_T_2) begin // @[src/main/scala/npu/core/Rope.scala 335:30]
          activeFreqBlock_14 <= io_freq_block_in_14; // @[src/main/scala/npu/core/Rope.scala 336:25]
        end else begin
          activeFreqBlock_14 <= _GEN_69;
        end
      end else begin
        activeFreqBlock_14 <= _GEN_69;
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 287:12]
      activeFreqBlock_15 <= 16'h0; // @[src/main/scala/npu/core/Rope.scala 287:12]
    end else if (!(io_soft_reset)) begin // @[src/main/scala/npu/core/Rope.scala 308:23]
      if (io_freq_block_valid) begin // @[src/main/scala/npu/core/Rope.scala 333:31]
        if (_io_freq_req_block_T_2) begin // @[src/main/scala/npu/core/Rope.scala 335:30]
          activeFreqBlock_15 <= io_freq_block_in_15; // @[src/main/scala/npu/core/Rope.scala 336:25]
        end else begin
          activeFreqBlock_15 <= _GEN_70;
        end
      end else begin
        activeFreqBlock_15 <= _GEN_70;
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 290:12]
      shadowFreqBlock_0 <= 16'h0; // @[src/main/scala/npu/core/Rope.scala 290:12]
    end else if (!(io_soft_reset)) begin // @[src/main/scala/npu/core/Rope.scala 308:23]
      if (io_freq_block_valid) begin // @[src/main/scala/npu/core/Rope.scala 333:31]
        if (!(_io_freq_req_block_T_2)) begin // @[src/main/scala/npu/core/Rope.scala 335:30]
          shadowFreqBlock_0 <= _GEN_72;
        end
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 290:12]
      shadowFreqBlock_1 <= 16'h0; // @[src/main/scala/npu/core/Rope.scala 290:12]
    end else if (!(io_soft_reset)) begin // @[src/main/scala/npu/core/Rope.scala 308:23]
      if (io_freq_block_valid) begin // @[src/main/scala/npu/core/Rope.scala 333:31]
        if (!(_io_freq_req_block_T_2)) begin // @[src/main/scala/npu/core/Rope.scala 335:30]
          shadowFreqBlock_1 <= _GEN_73;
        end
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 290:12]
      shadowFreqBlock_2 <= 16'h0; // @[src/main/scala/npu/core/Rope.scala 290:12]
    end else if (!(io_soft_reset)) begin // @[src/main/scala/npu/core/Rope.scala 308:23]
      if (io_freq_block_valid) begin // @[src/main/scala/npu/core/Rope.scala 333:31]
        if (!(_io_freq_req_block_T_2)) begin // @[src/main/scala/npu/core/Rope.scala 335:30]
          shadowFreqBlock_2 <= _GEN_74;
        end
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 290:12]
      shadowFreqBlock_3 <= 16'h0; // @[src/main/scala/npu/core/Rope.scala 290:12]
    end else if (!(io_soft_reset)) begin // @[src/main/scala/npu/core/Rope.scala 308:23]
      if (io_freq_block_valid) begin // @[src/main/scala/npu/core/Rope.scala 333:31]
        if (!(_io_freq_req_block_T_2)) begin // @[src/main/scala/npu/core/Rope.scala 335:30]
          shadowFreqBlock_3 <= _GEN_75;
        end
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 290:12]
      shadowFreqBlock_4 <= 16'h0; // @[src/main/scala/npu/core/Rope.scala 290:12]
    end else if (!(io_soft_reset)) begin // @[src/main/scala/npu/core/Rope.scala 308:23]
      if (io_freq_block_valid) begin // @[src/main/scala/npu/core/Rope.scala 333:31]
        if (!(_io_freq_req_block_T_2)) begin // @[src/main/scala/npu/core/Rope.scala 335:30]
          shadowFreqBlock_4 <= _GEN_76;
        end
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 290:12]
      shadowFreqBlock_5 <= 16'h0; // @[src/main/scala/npu/core/Rope.scala 290:12]
    end else if (!(io_soft_reset)) begin // @[src/main/scala/npu/core/Rope.scala 308:23]
      if (io_freq_block_valid) begin // @[src/main/scala/npu/core/Rope.scala 333:31]
        if (!(_io_freq_req_block_T_2)) begin // @[src/main/scala/npu/core/Rope.scala 335:30]
          shadowFreqBlock_5 <= _GEN_77;
        end
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 290:12]
      shadowFreqBlock_6 <= 16'h0; // @[src/main/scala/npu/core/Rope.scala 290:12]
    end else if (!(io_soft_reset)) begin // @[src/main/scala/npu/core/Rope.scala 308:23]
      if (io_freq_block_valid) begin // @[src/main/scala/npu/core/Rope.scala 333:31]
        if (!(_io_freq_req_block_T_2)) begin // @[src/main/scala/npu/core/Rope.scala 335:30]
          shadowFreqBlock_6 <= _GEN_78;
        end
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 290:12]
      shadowFreqBlock_7 <= 16'h0; // @[src/main/scala/npu/core/Rope.scala 290:12]
    end else if (!(io_soft_reset)) begin // @[src/main/scala/npu/core/Rope.scala 308:23]
      if (io_freq_block_valid) begin // @[src/main/scala/npu/core/Rope.scala 333:31]
        if (!(_io_freq_req_block_T_2)) begin // @[src/main/scala/npu/core/Rope.scala 335:30]
          shadowFreqBlock_7 <= _GEN_79;
        end
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 290:12]
      shadowFreqBlock_8 <= 16'h0; // @[src/main/scala/npu/core/Rope.scala 290:12]
    end else if (!(io_soft_reset)) begin // @[src/main/scala/npu/core/Rope.scala 308:23]
      if (io_freq_block_valid) begin // @[src/main/scala/npu/core/Rope.scala 333:31]
        if (!(_io_freq_req_block_T_2)) begin // @[src/main/scala/npu/core/Rope.scala 335:30]
          shadowFreqBlock_8 <= _GEN_80;
        end
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 290:12]
      shadowFreqBlock_9 <= 16'h0; // @[src/main/scala/npu/core/Rope.scala 290:12]
    end else if (!(io_soft_reset)) begin // @[src/main/scala/npu/core/Rope.scala 308:23]
      if (io_freq_block_valid) begin // @[src/main/scala/npu/core/Rope.scala 333:31]
        if (!(_io_freq_req_block_T_2)) begin // @[src/main/scala/npu/core/Rope.scala 335:30]
          shadowFreqBlock_9 <= _GEN_81;
        end
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 290:12]
      shadowFreqBlock_10 <= 16'h0; // @[src/main/scala/npu/core/Rope.scala 290:12]
    end else if (!(io_soft_reset)) begin // @[src/main/scala/npu/core/Rope.scala 308:23]
      if (io_freq_block_valid) begin // @[src/main/scala/npu/core/Rope.scala 333:31]
        if (!(_io_freq_req_block_T_2)) begin // @[src/main/scala/npu/core/Rope.scala 335:30]
          shadowFreqBlock_10 <= _GEN_82;
        end
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 290:12]
      shadowFreqBlock_11 <= 16'h0; // @[src/main/scala/npu/core/Rope.scala 290:12]
    end else if (!(io_soft_reset)) begin // @[src/main/scala/npu/core/Rope.scala 308:23]
      if (io_freq_block_valid) begin // @[src/main/scala/npu/core/Rope.scala 333:31]
        if (!(_io_freq_req_block_T_2)) begin // @[src/main/scala/npu/core/Rope.scala 335:30]
          shadowFreqBlock_11 <= _GEN_83;
        end
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 290:12]
      shadowFreqBlock_12 <= 16'h0; // @[src/main/scala/npu/core/Rope.scala 290:12]
    end else if (!(io_soft_reset)) begin // @[src/main/scala/npu/core/Rope.scala 308:23]
      if (io_freq_block_valid) begin // @[src/main/scala/npu/core/Rope.scala 333:31]
        if (!(_io_freq_req_block_T_2)) begin // @[src/main/scala/npu/core/Rope.scala 335:30]
          shadowFreqBlock_12 <= _GEN_84;
        end
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 290:12]
      shadowFreqBlock_13 <= 16'h0; // @[src/main/scala/npu/core/Rope.scala 290:12]
    end else if (!(io_soft_reset)) begin // @[src/main/scala/npu/core/Rope.scala 308:23]
      if (io_freq_block_valid) begin // @[src/main/scala/npu/core/Rope.scala 333:31]
        if (!(_io_freq_req_block_T_2)) begin // @[src/main/scala/npu/core/Rope.scala 335:30]
          shadowFreqBlock_13 <= _GEN_85;
        end
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 290:12]
      shadowFreqBlock_14 <= 16'h0; // @[src/main/scala/npu/core/Rope.scala 290:12]
    end else if (!(io_soft_reset)) begin // @[src/main/scala/npu/core/Rope.scala 308:23]
      if (io_freq_block_valid) begin // @[src/main/scala/npu/core/Rope.scala 333:31]
        if (!(_io_freq_req_block_T_2)) begin // @[src/main/scala/npu/core/Rope.scala 335:30]
          shadowFreqBlock_14 <= _GEN_86;
        end
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 290:12]
      shadowFreqBlock_15 <= 16'h0; // @[src/main/scala/npu/core/Rope.scala 290:12]
    end else if (!(io_soft_reset)) begin // @[src/main/scala/npu/core/Rope.scala 308:23]
      if (io_freq_block_valid) begin // @[src/main/scala/npu/core/Rope.scala 333:31]
        if (!(_io_freq_req_block_T_2)) begin // @[src/main/scala/npu/core/Rope.scala 335:30]
          shadowFreqBlock_15 <= _GEN_87;
        end
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 292:32]
      activeFreqValid <= 1'h0; // @[src/main/scala/npu/core/Rope.scala 292:32]
    end else if (io_soft_reset) begin // @[src/main/scala/npu/core/Rope.scala 308:23]
      activeFreqValid <= 1'h0; // @[src/main/scala/npu/core/Rope.scala 309:21]
    end else if (io_freq_block_valid) begin // @[src/main/scala/npu/core/Rope.scala 333:31]
      activeFreqValid <= _GEN_105;
    end else if (inputFire) begin // @[src/main/scala/npu/core/Rope.scala 318:21]
      activeFreqValid <= _GEN_35;
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 293:32]
      shadowFreqValid <= 1'h0; // @[src/main/scala/npu/core/Rope.scala 293:32]
    end else if (io_soft_reset) begin // @[src/main/scala/npu/core/Rope.scala 308:23]
      shadowFreqValid <= 1'h0; // @[src/main/scala/npu/core/Rope.scala 310:21]
    end else if (io_freq_block_valid) begin // @[src/main/scala/npu/core/Rope.scala 333:31]
      if (_io_freq_req_block_T_2) begin // @[src/main/scala/npu/core/Rope.scala 335:30]
        shadowFreqValid <= _GEN_71;
      end else begin
        shadowFreqValid <= _GEN_88;
      end
    end else begin
      shadowFreqValid <= _GEN_71;
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 294:35]
      freqReqOutstanding <= 1'h0; // @[src/main/scala/npu/core/Rope.scala 294:35]
    end else if (io_soft_reset) begin // @[src/main/scala/npu/core/Rope.scala 308:23]
      freqReqOutstanding <= 1'h0; // @[src/main/scala/npu/core/Rope.scala 311:24]
    end else if (io_freq_block_valid) begin // @[src/main/scala/npu/core/Rope.scala 333:31]
      freqReqOutstanding <= 1'h0; // @[src/main/scala/npu/core/Rope.scala 334:26]
    end else begin
      freqReqOutstanding <= _GEN_17;
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 295:25]
      freqHalf <= 1'h0; // @[src/main/scala/npu/core/Rope.scala 295:25]
    end else if (io_soft_reset) begin // @[src/main/scala/npu/core/Rope.scala 308:23]
      freqHalf <= 1'h0; // @[src/main/scala/npu/core/Rope.scala 312:14]
    end else if (inputFire) begin // @[src/main/scala/npu/core/Rope.scala 318:21]
      if (freqHalf) begin // @[src/main/scala/npu/core/Rope.scala 319:22]
        freqHalf <= 1'h0; // @[src/main/scala/npu/core/Rope.scala 320:18]
      end else begin
        freqHalf <= 1'h1; // @[src/main/scala/npu/core/Rope.scala 327:18]
      end
    end
    if (reset) begin // @[src/main/scala/npu/core/Rope.scala 404:23]
      primed <= 1'h0; // @[src/main/scala/npu/core/Rope.scala 404:23]
    end else if (io_soft_reset | _T) begin // @[src/main/scala/npu/core/Rope.scala 406:38]
      primed <= 1'h0; // @[src/main/scala/npu/core/Rope.scala 407:12]
    end else begin
      primed <= _GEN_322;
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
  activeMBase = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  shadowMBase = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  activeMValid = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  shadowMValid = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  activeFreqBlock_0 = _RAND_5[15:0];
  _RAND_6 = {1{`RANDOM}};
  activeFreqBlock_1 = _RAND_6[15:0];
  _RAND_7 = {1{`RANDOM}};
  activeFreqBlock_2 = _RAND_7[15:0];
  _RAND_8 = {1{`RANDOM}};
  activeFreqBlock_3 = _RAND_8[15:0];
  _RAND_9 = {1{`RANDOM}};
  activeFreqBlock_4 = _RAND_9[15:0];
  _RAND_10 = {1{`RANDOM}};
  activeFreqBlock_5 = _RAND_10[15:0];
  _RAND_11 = {1{`RANDOM}};
  activeFreqBlock_6 = _RAND_11[15:0];
  _RAND_12 = {1{`RANDOM}};
  activeFreqBlock_7 = _RAND_12[15:0];
  _RAND_13 = {1{`RANDOM}};
  activeFreqBlock_8 = _RAND_13[15:0];
  _RAND_14 = {1{`RANDOM}};
  activeFreqBlock_9 = _RAND_14[15:0];
  _RAND_15 = {1{`RANDOM}};
  activeFreqBlock_10 = _RAND_15[15:0];
  _RAND_16 = {1{`RANDOM}};
  activeFreqBlock_11 = _RAND_16[15:0];
  _RAND_17 = {1{`RANDOM}};
  activeFreqBlock_12 = _RAND_17[15:0];
  _RAND_18 = {1{`RANDOM}};
  activeFreqBlock_13 = _RAND_18[15:0];
  _RAND_19 = {1{`RANDOM}};
  activeFreqBlock_14 = _RAND_19[15:0];
  _RAND_20 = {1{`RANDOM}};
  activeFreqBlock_15 = _RAND_20[15:0];
  _RAND_21 = {1{`RANDOM}};
  shadowFreqBlock_0 = _RAND_21[15:0];
  _RAND_22 = {1{`RANDOM}};
  shadowFreqBlock_1 = _RAND_22[15:0];
  _RAND_23 = {1{`RANDOM}};
  shadowFreqBlock_2 = _RAND_23[15:0];
  _RAND_24 = {1{`RANDOM}};
  shadowFreqBlock_3 = _RAND_24[15:0];
  _RAND_25 = {1{`RANDOM}};
  shadowFreqBlock_4 = _RAND_25[15:0];
  _RAND_26 = {1{`RANDOM}};
  shadowFreqBlock_5 = _RAND_26[15:0];
  _RAND_27 = {1{`RANDOM}};
  shadowFreqBlock_6 = _RAND_27[15:0];
  _RAND_28 = {1{`RANDOM}};
  shadowFreqBlock_7 = _RAND_28[15:0];
  _RAND_29 = {1{`RANDOM}};
  shadowFreqBlock_8 = _RAND_29[15:0];
  _RAND_30 = {1{`RANDOM}};
  shadowFreqBlock_9 = _RAND_30[15:0];
  _RAND_31 = {1{`RANDOM}};
  shadowFreqBlock_10 = _RAND_31[15:0];
  _RAND_32 = {1{`RANDOM}};
  shadowFreqBlock_11 = _RAND_32[15:0];
  _RAND_33 = {1{`RANDOM}};
  shadowFreqBlock_12 = _RAND_33[15:0];
  _RAND_34 = {1{`RANDOM}};
  shadowFreqBlock_13 = _RAND_34[15:0];
  _RAND_35 = {1{`RANDOM}};
  shadowFreqBlock_14 = _RAND_35[15:0];
  _RAND_36 = {1{`RANDOM}};
  shadowFreqBlock_15 = _RAND_36[15:0];
  _RAND_37 = {1{`RANDOM}};
  activeFreqValid = _RAND_37[0:0];
  _RAND_38 = {1{`RANDOM}};
  shadowFreqValid = _RAND_38[0:0];
  _RAND_39 = {1{`RANDOM}};
  freqReqOutstanding = _RAND_39[0:0];
  _RAND_40 = {1{`RANDOM}};
  freqHalf = _RAND_40[0:0];
  _RAND_41 = {1{`RANDOM}};
  primed = _RAND_41[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
