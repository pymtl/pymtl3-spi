//-------------------------------------------------------------------------
// SPIAdapterVRTL.v
//-------------------------------------------------------------------------
`include "NormalQueue.v"

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

module SPIAdapterVRTL
#(
  parameter nbits = 8,
  parameter num_entries = 1
)
(
  input  logic                    clk,
  input  logic                    reset,
  input  logic                    pull_en,
  output logic MK_MISO_MSG(nbits) pull_msg,
  input  logic                    push_en,
  input  logic MK_MOI_MSG(nbits)  push_msg,
  input  logic [nbits-1:0]        recv_msg,
  output logic                    recv_rdy,
  input  logic                    recv_val,
  output logic [nbits-1:0]        send_msg,
  input  logic                    send_rdy,
  output logic                    send_val  
);

  logic [0:0] cm_send_rdy;
  logic [0:0] mc_recv_val;
  logic [0:0] open_entries;
  //-------------------------------------------------------------
  // Component cm_q
  //-------------------------------------------------------------

  logic [0:0] cm_q_clk;
  logic [0:0] cm_q_count;
  logic [0:0] cm_q_reset;
  logic [1:0] cm_q_recv_msg;
  logic [0:0] cm_q_recv_rdy;
  logic [0:0] cm_q_recv_val;
  logic [1:0] cm_q_send_msg;
  logic [0:0] cm_q_send_rdy;
  logic [0:0] cm_q_send_val;

  NormalQueueRTL #(nbits, num_entries) cm_q
  (
    .clk( cm_q_clk ),
    .count( cm_q_count ),
    .reset( cm_q_reset ),
    .recv_msg( cm_q_recv_msg ),
    .recv_rdy( cm_q_recv_rdy ),
    .recv_val( cm_q_recv_val ),
    .send_msg( cm_q_send_msg ),
    .send_rdy( cm_q_send_rdy ),
    .send_val( cm_q_send_val )
  );

  //-------------------------------------------------------------
  // End of component cm_q
  //-------------------------------------------------------------

  //-------------------------------------------------------------
  // Component mc_q
  //-------------------------------------------------------------

  logic             mc_q_clk;
  logic             mc_q_count;
  logic             mc_q_reset;
  logic [nbits-1:0] mc_q_recv_msg;
  logic             mc_q_recv_rdy;
  logic             mc_q_recv_val;
  logic [nbits-1:0] mc_q_send_msg;
  logic             mc_q_send_rdy;
  logic             mc_q_send_val;

  NormalQueueRTL #(nbits, num_entries) mc_q
  (
    .clk( mc_q_clk ),
    .count( mc_q_count ),
    .reset( mc_q_reset ),
    .recv_msg( mc_q_recv_msg ),
    .recv_rdy( mc_q_recv_rdy ),
    .recv_val( mc_q_recv_val ),
    .send_msg( mc_q_send_msg ),
    .send_rdy( mc_q_send_rdy ),
    .send_val( mc_q_send_val )
  );

  //-------------------------------------------------------------
  // End of component mc_q
  //-------------------------------------------------------------
  
  always_comb begin : comb_block
    open_entries = mc_q_count < ( num_entries-1 );
    mc_recv_val = push_msg.val_wrt & push_en;
    pull_msg.spc = mc_q_recv_rdy & ( ( ~mc_q_recv_val ) | open_entries );
    cm_send_rdy = push_msg.val_rd & pull_en;
    pull_msg.val = cm_send_rdy & cm_q_send_val;
    pull_msg.data = cm_q_send_msg & { (nbits-2){pull_msg.val} };
  end

  assign mc_q_clk = clk;
  assign mc_q_reset = reset;
  assign send_val = mc_q_send_val;
  assign send_msg = mc_q_send_msg;
  assign mc_q_send_rdy = send_rdy;
  assign mc_q_recv_val = mc_recv_val;
  assign mc_q_recv_msg = push_msg.data;
  assign cm_q_clk = clk;
  assign cm_q_reset = reset;
  assign cm_q_recv_val = recv_val;
  assign recv_rdy = cm_q_recv_rdy;
  assign cm_q_recv_msg = recv_msg;
  assign cm_q_send_rdy = cm_send_rdy;

endmodule
