//===========================================
// SPI MINION
//===========================================

`ifndef MINION_V
`define MINION_V

module SPI_pymtl_SPIMinion_SPIMinion
#(
  parameter pack_size = 32
)(
    
  input  logic                  clk,
  input  logic                  reset,
  output logic                  serve,
  output logic                  seize,  
  
  // IO with respect to device  
  input  logic [pack_size-1:0] from_device,   //Package to be sent back to master
  output logic [pack_size-1:0] to_device,     //message from master
   
  // input from Master
  input  logic                 sclk, 
  input  logic                 cs,              //active low
  input  logic                 mosi,

  // output to Master
  output logic                 miso
);
  //-------------------------------------------- 
  // Signal Sync
  //--------------------------------------------

  logic cs_synced;
  logic cs_posedge;
  logic cs_negedge;  
  
  SignalSync cs_sync_shift
  (
    .clk          (clk),
    .sig_in       (cs),
    .sig_synced   (cs_synced),
    .sig_posedge  (cs_posedge),
    .sig_negedge  (cs_negedge)
  );
    
  logic sclk_synced;
  logic sclk_posedge;
  logic sclk_negedge;  
  
  SignalSync sclk_sync_shift
  (
    .clk          (clk),
    .sig_in       (sclk),
    .sig_synced   (sclk_synced),
    .sig_posedge  (sclk_posedge),
    .sig_negedge  (sclk_negedge)
  );
  
  //-------------------------------------------- 
  // serve generation
  //--------------------------------------------
  
  always@(posedge clk) begin
    if (reset) begin
      serve <= 1'b0;
      seize <= 1'b0;
    end
  
    else begin
      serve <= cs_posedge ? 1'b1 : 1'b0;
      seize <= cs_negedge ? 1'b1 : 1'b0;      
    end  
  end  

  //-------------------------------------------- 
  // MOSI Shift Register (recieve MSB First)
  //--------------------------------------------

  logic [pack_size - 1:0] mosi_shift_reg_out;
  
  ShiftRegIn #(pack_size) mosi_shift_reg
  (
    .clk  (clk),
    .d    (mosi),
    .q    (mosi_shift_reg_out),
    .en   (sclk_posedge & !cs_synced)
  );

  assign to_device = mosi_shift_reg_out;

  //--------------------------------------------
  // MISO Shift Register
  //--------------------------------------------
  
  logic [pack_size - 1:0] miso_reg_out;
  
  ShiftRegOut #(pack_size) miso_shift_reg
  (
    .clk    (clk),
    .d      (from_device),
    .q      (miso_reg_out),
    .fill   (seize),
    .shift  (sclk_negedge)
  );
  
  assign miso = miso_reg_out[ pack_size - 1];
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
// Postive-edge shift register
//------------------------------------------------------------------------

//recieve MSB first
module ShiftRegIn                   
#(
  parameter p_nbits = 1
)(
  input  logic                 clk, // Clock input
  output logic [p_nbits - 1:0] q,   // Data output (whole user defined output)
  input  logic                 d,   // Data input  (one bit)
  input  logic                 en 
);

  always@( posedge clk )
    if ( en )
      q <= {q[p_nbits - 1:0], d};

endmodule

//------------------------------------------------------------------------
// Postive-edge shift register with instant fill
//------------------------------------------------------------------------

//send MSB first
module ShiftRegOut
#(
  parameter p_nbits = 1           
)(
  input  logic               clk, // Clock input
  output logic [p_nbits-1:0] q,   // Data output (bit, but MSB changes)
  input  logic [p_nbits-1:0] d,   // Data input  (whole user defined output)
  input  logic               fill,
  input  logic               shift 
);

  always@( posedge clk )
    if ( fill )
      q <= d;
    
    else if (!fill & shift) begin     
      q <= {q[p_nbits-1:0], 1'b0};
    end
    
endmodule
`endif /* MINION_V */
