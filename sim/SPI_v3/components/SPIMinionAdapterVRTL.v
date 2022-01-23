//-------------------------------------------------------------------------
// SPIMinionAdapterVRTL.v
//-------------------------------------------------------------------------
`include "SPIMinionVRTL.v"
`include "SPIAdapterVRTL.v"

`define MK_MISO_MSG(NUM_BITS)
typedef struct packed {
  logic       val;
  logic       spc;
  logic [NUM_BITS-1:0] data;
} MisoMsg;

`define MK_MOSI_MSG(NUM_BITS)
typedef struct packed {
  logic       val_wrt;
  logic       val_rd;
  logic [NUM_BITS-1:0] data;
} MosiMsg;

module SPIMinionAdapterVRTL
#(
  parameter nbits = 8,
  parameter num_entries = 1
)
(
  input  logic             clk,
  input  logic             cs,
  output logic             miso,
  input  logic             mosi,
  input  logic             reset,
  input  logic             sclk,
  input  logic [nbits-3:0] recv_msg,
  output logic             recv_rdy,
  input  logic             recv_val,
  output logic [nbits-3:0] send_msg,
  input  logic             send_rdy,
  output logic             send_val  
);
  //-------------------------------------------------------------
  // Component adapter
  //-------------------------------------------------------------

  logic             adapter_clk;
  logic             adapter_reset;
  logic             adapter_pull_en;
  MisoMsg           adapter_pull_msg;
  logic             adapter_push_en;
  MosiMsg           adapter_push_msg;
  logic [nbits-3:0] adapter_recv_msg;
  logic             adapter_recv_rdy;
  logic             adapter_recv_val;
  logic [nbits-3:0] adapter_send_msg;
  logic             adapter_send_rdy;
  logic             adapter_send_val;

  SPIAdapterVRTL #(4,1) adapter
  (
    .clk( adapter_clk ),
    .reset( adapter_reset ),
    .pull_en( adapter_pull_en ),
    .pull_msg( adapter_pull_msg ),
    .push_en( adapter_push_en ),
    .push_msg( adapter_push_msg ),
    .recv_msg( adapter_recv_msg ),
    .recv_rdy( adapter_recv_rdy ),
    .recv_val( adapter_recv_val ),
    .send_msg( adapter_send_msg ),
    .send_rdy( adapter_send_rdy ),
    .send_val( adapter_send_val )
  );

  //-------------------------------------------------------------
  // End of component adapter
  //-------------------------------------------------------------

  //-------------------------------------------------------------
  // Component minion
  //-------------------------------------------------------------

  logic             minion_clk;
  logic             minion_cs;
  logic             minion_miso;
  logic             minion_mosi;
  logic             minion_reset;
  logic             minion_sclk;
  logic             minion_pull_en;
  logic [nbits-1:0] minion_pull_msg;
  logic             minion_push_en;
  logic [nbits-1:0] minion_push_msg;

  SPIMinionVRTL #(nbits) minion
  (
    .clk( minion_clk ),
    .cs( minion_cs ),
    .miso( minion_miso ),
    .mosi( minion_mosi ),
    .reset( minion_reset ),
    .sclk( minion_sclk ),
    .pull_en( minion_pull_en ),
    .pull_msg( minion_pull_msg ),
    .push_en( minion_push_en ),
    .push_msg( minion_push_msg )
  );

  //-------------------------------------------------------------
  // End of component minion
  //-------------------------------------------------------------

  assign minion_clk = clk;
  assign minion_reset = reset;
  assign minion_cs = cs;
  assign minion_sclk = sclk;
  assign minion_mosi = mosi;
  assign miso = minion_miso;
  assign adapter_clk = clk;
  assign adapter_reset = reset;
  assign adapter_pull_en = minion_pull_en;
  assign minion_pull_msg[nbits-1] = adapter_pull_msg.val;
  assign minion_pull_msg[nbits-2] = adapter_pull_msg.spc;
  assign minion_pull_msg[nbits-3:0] = adapter_pull_msg.data;
  assign adapter_push_en = minion_push_en;
  assign adapter_push_msg.val_wrt = minion_push_msg[nbits-1];
  assign adapter_push_msg.val_rd = minion_push_msg[nbits-2];
  assign adapter_push_msg.data = minion_push_msg[nbits-3:0];
  assign send_msg = adapter_send_msg;
  assign adapter_send_rdy = send_rdy;
  assign send_val = adapter_send_val;
  assign adapter_recv_msg = recv_msg;
  assign recv_rdy = adapter_recv_rdy;
  assign adapter_recv_val = recv_val;

endmodule
