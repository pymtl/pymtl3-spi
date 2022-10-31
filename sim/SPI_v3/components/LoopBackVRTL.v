// ==========================================================================
// LoopBackVRTL.py
// ==========================================================================
// This takes receives a packet from the SPIMinionAdapter module and sends it back the next cycle to the 
// SPIMinionAdapter module. Uses val/rdy microprotocol.
//
// Authors: Dilan Lakhani and Kyle Infantino
// May 31, 2022


`ifndef SPI_V3_COMPONENTS_LOOPBACK_V
`define SPI_V3_COMPONENTS_LOOPBACK_V

module SPI_v3_components_LoopBackVRTL 
#(
  parameter nbits = 32 // the size of the val/rdy msg
)(
  input logic clk,
  input logic reset,

  // Recv Interface
  input  logic             recv_val,
  output logic             recv_rdy,
  input  logic [nbits-1:0] recv_msg,

  // Send Interface
  output logic             send_val,
  input  logic             send_rdy,
  output logic [nbits-1:0] send_msg
);
  
  logic [nbits-1:0] reg_;
  logic             transaction_val;
  
  // Assigns
  recv_rdy = (transaction_val == 0) | (send_val & send_rdy);
  send_val = transaction_val;
  send_msg = reg_;
  
  // Logic
  always_comb begin
    transaction_val = ( (recv_val & recv_rdy) | (send_val & send_rdy) ) ? (recv_val & recv_rdy) : transaction_val;
    reg_ = (recv_val & recv_rdy) ? recv_msg : reg_;
  end

endmodule

`endif /* SPI_V3_COMPONENTS_LOOPBACK_V */