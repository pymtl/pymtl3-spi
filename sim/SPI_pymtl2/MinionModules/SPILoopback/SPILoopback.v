//===========================================
// SPI Loopback
//===========================================

`ifndef LOOPBACK_V
`define LOOPBACK_V

module SPI_pymtl2_MinionModules_SPILoopback_SPILoopback
#(
  parameter pack_size = 32
)(  

  //control inputs
  input                     clk,
  input                     serve,
  input                     loop_en,

  //IO with respect to master
  input  [pack_size-1:0]    from_master,
  output [pack_size-1:0]    to_master,
  
  //IO with respect to device
  input  [pack_size-1 : 0]  from_device,
  output [pack_size-1 : 0]  to_device
); 
  
  logic [pack_size-1:0] output_mux_out;
  
  vc_Mux2 #(pack_size) output_mux
  (
    .sel (loop_en),
    .in0 (from_device),
    .in1 (from_master),
    .out (output_mux_out)
  );    
  
  assign to_master = output_mux_out;
  
  // message pass through
  assign to_device = from_master;

endmodule


//////////////////////////////////////////////////////////////////////////
// includes 
//////////////////////////////////////////////////////////////////////////

module vc_Reg
#(
  parameter p_nbits = 1
)(
  input  logic               clk, // Clock input
  output logic [p_nbits-1:0] q,   // Data output
  input  logic [p_nbits-1:0] d    // Data input
);

  always@( posedge clk )
    q <= d;

endmodule

module SignalSync
(
  input  logic                clk,
  input  logic                sig_in,
  
  output logic                sig_synced,
  output logic                sig_posedge,
  output logic                sig_negedge  
);
  
  logic [2:0] q;

  always@( posedge clk ) q <= {q[1:0], sig_in};
  
  assign sig_synced  = q[1];
  assign sig_posedge = (q[2:1] == 2'b01);
  assign sig_negedge = (q[2:1] == 2'b10);

endmodule

//------------------------------------------------------------------------
// 2 input mux
//------------------------------------------------------------------------

module vc_Mux2
#(
  parameter p_nbits = 1
)(
  input  logic [p_nbits-1:0] in0, in1,
  input  logic               sel,
  output logic [p_nbits-1:0] out
);

  always @(*)
  begin
    case ( sel )
      1'd0 : out = in0;
      1'd1 : out = in1;
      default : out = {p_nbits{1'bx}};
    endcase
  end

endmodule
`endif /* LOOPBACK_V */
