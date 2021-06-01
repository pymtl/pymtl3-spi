//===========================================
// SPI Hardbits
//===========================================

`ifndef HARDBITS_V
`define HARDBITS_V


module SPI_pymtl2_MinionModules_SPIHardbits_SPIHardbits
#(
  parameter pack_size = 32,
  parameter hard_bits = 1
)(

  //control IO
  input  logic                    clk,
  input  logic                    reset,
  input  logic                    serve,
  output logic                    hard_msg,
  
  //IO with respect to master
  input  logic [pack_size-1 : 0]  from_master,
  output logic [pack_size-1 : 0]  to_master,

  
  //detected bits
  output logic [hard_bits-1 : 0]  detected_bits,
  
  //IO with respect to device
  input  logic [pack_size-1 : 0]  from_device,
  output logic [pack_size-1 : 0]  to_device
  
); 
  // message pass through
  assign to_device = from_master;
  assign to_master = from_device;
  
  // hard_msg signal
  assign hard_msg = from_master[pack_size - 1] ? 1'b1 : 1'b0;  
  
  // detected bits
  vc_EnResetReg  #(hard_bits, 0) bit_status
  (
    .clk        (clk),
    .reset      (reset),
    .q          (detected_bits),
    .d          (from_master[pack_size - 2 : pack_size - (hard_bits + 1)]),
    .en         (from_master[pack_size - 1] & serve)                //msb will be enable signal for hardcode
  );
        
endmodule 

//////////////////////////////////////////////////////////////////////////
// includes 
//////////////////////////////////////////////////////////////////////////
    
module vc_EnResetReg
#(
  parameter p_nbits       = 1,
  parameter p_reset_value = 0
)(
  input  logic               clk,   // Clock input
  input  logic               reset, // Sync reset input
  output logic [p_nbits-1:0] q,     // Data output
  input  logic [p_nbits-1:0] d,     // Data input
  input  logic               en     // Enable input
);

  always@( posedge clk )
    if ( reset || en )
      q <= reset ? p_reset_value : d;

endmodule

`endif /* HARDBITS_V */
