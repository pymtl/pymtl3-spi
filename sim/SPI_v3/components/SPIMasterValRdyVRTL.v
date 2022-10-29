/*
==========================================================================
SPIMasterValRdyVRTL.v
==========================================================================
SPIMaster module for sending messages over SPI.
Supports SPI mode 0.

Author : Kyle Infantino
  Date : April 26, 2022

*/

`ifndef SPI_V3_COMPONENTS_SPIMASTER_V
`define SPI_V3_COMPONENTS_SPIMASTER_V


module SPI_v3_components_SPIMasterValRdyVRTL
#(
  parameter nbits = 34, 
  parameter ncs = 1
)
(
  input  logic             clk,
  input  logic             reset,

  output logic             cs,
  input  logic             miso,
  output logic             mosi,
  output logic             sclk,

  input  logic              recv_val,
  output logic              recv_rdy,
  input  logic [nbits-1:0]  recv_msg,

  output logic              send_val,
  input  logic              send_rdy,
  output logic [nbits-1:0]  send_msg,

  input  logic                      packet_size_ifc_val,
  output logic                      packet_size_ifc_rdy,
  input  logic [$clog2(nbits)-1:0]  packet_size_ifc_msg,

  input  logic                    cs_addr_ifc_val,
  output logic                    cs_addr_ifc_rdy,
  input  logic [$clog2(ncs)-1:0]  cs_addr_ifc_msg
);



endmodule

`endif SPI_V3_COMPONENTS_SPIMASTER_V