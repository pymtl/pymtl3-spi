//===========================================
// SPI Queue 
//===========================================

`ifndef QUEUE_V
`define QUEUE_V

module SPI_pymtl2_MinionModules_SPIQueue_SPIQueue
#(
  parameter pack_size = 32,                   // multiple of 4
  parameter num_entries = 2,                  // needs to be a power of 2
  localparam addr_width  = $clog2(num_entries)
)(    
  //control inputs
  input                    clk,
  input                    reset,
  input                    serve,
  input                    seize,
  input                    hard_msg,
  
  // val/rdy send (to device)
  output                   send_val,
  input                    send_rdy,
  output [pack_size-1:0]   send_msg,
  
  // val/rdy recieve (from device)
  input                    recv_val,
  output                   recv_rdy,
  input  [pack_size-1:0]   recv_msg,
  
  //IO with respect to master
  input  [pack_size-1:0]   from_master,
  output [pack_size-1:0]   to_master
); 

///////////////////////////////

  logic                   enq_en;
  logic                   enq_rdy_send;
  logic [addr_width:0]    entry_count_send;
  
  assign enq_en = serve & !hard_msg;
  
 FIFO #(pack_size, num_entries) toDeviceQ
  (
    .clk            (clk),
    .reset          (reset),
    .deq_val        (send_val),
    .deq_rdy        (send_rdy),
    .deq_msg        (send_msg),
    .enq_val        (enq_en),
    .enq_rdy        (enq_rdy_send),
    .enq_msg        (from_master),
    .entry_count    (entry_count_send)
  );
  
  logic                 deq_val;
  logic [addr_width:0]  entry_count_recv;
  
  FIFO #(pack_size, num_entries) FromDeviceQ
  (
    .clk            (clk),
    .reset          (reset),
    .deq_val        (deq_val),
    .deq_rdy        (seize),
    .deq_msg        (to_master),
    .enq_val        (recv_val),
    .enq_rdy        (recv_rdy),
    .enq_msg        (recv_msg),
    .entry_count    (entry_count_recv)
  );
  
  
endmodule

//////////////////////////////////////////////////////////////////////////
// includes
//////////////////////////////////////////////////////////////////////////

//------------------------------------------------------------------------
// 1r1w register file with reset
//------------------------------------------------------------------------

module vc_ResetRegfile_1r1w
#(
  parameter p_data_nbits  = 1,
  parameter p_num_entries = 2,
  parameter p_reset_value = 0,

  // Local constants not meant to be set from outside the module
  parameter c_addr_nbits  = $clog2(p_num_entries)
)(
  input  logic                    clk,
  input  logic                    reset,

  // Read port (combinational read)

  input  logic [c_addr_nbits-1:0] read_addr,
  output logic [p_data_nbits-1:0] read_data,

  // Write port (sampled on the rising clock edge)

  input  logic                    write_en,
  input  logic [c_addr_nbits-1:0] write_addr,
  input  logic [p_data_nbits-1:0] write_data
);

  logic [p_data_nbits-1:0] rfile[p_num_entries-1:0];

  // Combinational read

  assign read_data = rfile[read_addr];

  // Write on positive clock edge. We have to use a generate statement to
  // allow us to include the reset logic for each individual register.

  genvar i;
  generate
    for ( i = 0; i < p_num_entries; i = i+1 )
    begin : wport
      always_ff @( posedge clk )
        if ( reset )
          rfile[i] <= p_reset_value;
        else if ( write_en && (i[c_addr_nbits-1:0] == write_addr) )
          rfile[i] <= write_data;
    end
  endgenerate

endmodule

//------------------------------------------------------------------------
// FIFO
//------------------------------------------------------------------------

module FIFO
#(
  parameter bit_width    = 8,
  parameter num_entries  = 8,  // needs to be a power of 2
  
  // Local constants not meant to be set from outside the module
  localparam addr_width  = $clog2(num_entries)

)(
  input  logic                  clk,
  input  logic                  reset,

  // Read port (combinational read)

  output logic                  deq_val,
  input  logic                  deq_rdy,
  output logic [bit_width-1:0]  deq_msg,

  // Write port (sampled on the rising clock edge)

  input  logic                  enq_val,
  output logic                  enq_rdy,
  input  logic [bit_width-1:0]  enq_msg,
  
  // control output
  output logic [addr_width:0]   entry_count
);

  logic                         reg_write_en;  
  logic                         reg_read_en;  
  logic [addr_width-1:0]        write_pointer;
  logic [addr_width-1:0]        read_pointer;
  
  //======================================================================
  // Control logic
  
  logic queue_full;
  logic queue_empty;
  
  assign queue_full  = (entry_count >= num_entries) ? 1'b1 : 1'b0;
  assign queue_empty = (entry_count <= 0) ? 1'b1 : 1'b0;  
  
  assign deq_val = !queue_empty;
  assign enq_rdy = !queue_full;
  
  assign reg_write_en = enq_val & !queue_full;
  assign reg_read_en  = deq_rdy & !queue_empty;
  
  vc_ResetRegfile_1r1w #(bit_width, num_entries) queue_regfile
  (
    .clk          (clk),
    .reset        (reset),
    .read_addr    (read_pointer),
    .read_data    (deq_msg),
    .write_en     (reg_write_en),
    .write_addr   (write_pointer),
    .write_data   (enq_msg)
  );

  //======================================================================
  // Counters
    
  Counter #(addr_width+1,0,num_entries) entry_counter //counts spaces used
  (
    .clk        (clk),
    .reset      (reset),
    .clear      (reset),
    .increment  (reg_write_en),
    .decrement  (reg_read_en),
    .count      (entry_count)
  );
    
    
  CircularCounter #(addr_width,0,num_entries) write_pointer_counter
  (
    .clk        (clk),
    .reset      (reset),
    .clear      (reset),
    .increment  (reg_write_en),
    .decrement  (1'b0),
    .count      (write_pointer)
  );
  
  CircularCounter #(addr_width,0,num_entries) read_pointer_counter
  (
    .clk        (clk),
    .reset      (reset),
    .clear      (reset),
    .increment  (reg_read_en),
    .decrement  (1'b0),
    .count      (read_pointer)
  );
  
endmodule

module CircularCounter
#(
  parameter p_count_nbits       = 3,
  parameter p_count_clear_value = 0,
  parameter p_count_max_value   = 4
)(
  input  logic                     clk,
  input  logic                     reset,
  input  logic                     clear,

  // Operations
  input  logic                     increment,
  input  logic                     decrement,

  // Outputs
  output logic [p_count_nbits-1:0] count
);

  //----------------------------------------------------------------------
  // State
  //----------------------------------------------------------------------

  logic [p_count_nbits-1:0] count_next;

  vc_ResetReg#( p_count_nbits, p_count_clear_value ) count_reg
  (
    .clk   (clk),
    .reset (reset),
    .d     (count_next),
    .q     (count)
  );

  //----------------------------------------------------------------------
  // Combinational Logic
  //----------------------------------------------------------------------

  always_comb begin
    if (clear)                                                    count_next = p_count_clear_value;
    else if (!clear && !decrement && !increment)                  count_next = count;   
    else if (!clear && increment && decrement)                    count_next = count; 
    else if (!clear && increment && (count <  p_count_max_value)) count_next = count + 1;
    else if (!clear && increment && (count >= p_count_max_value)) count_next = 0;
    else if (!clear && decrement && (count >  0))                 count_next = count - 1;
    else if (!clear && decrement && (count <= 0))                 count_next = p_count_max_value;
    else                                                          count_next = count;
  end

  
endmodule

////////////////////////////////////////
// Counter
////////////////////////////////////////

module Counter
#(
  parameter p_count_nbits       = 3,
  parameter p_count_clear_value = 0,
  parameter p_count_max_value   = 4
)(
  input  logic                     clk,
  input  logic                     reset,
  input  logic                     clear,

  // Operations
  input  logic                     increment,
  input  logic                     decrement,

  // Outputs
  output logic [p_count_nbits-1:0] count
);

  //----------------------------------------------------------------------
  // State
  //----------------------------------------------------------------------

  logic [p_count_nbits-1:0] count_next;

  vc_ResetReg#( p_count_nbits, p_count_clear_value ) count_reg
  (
    .clk   (clk),
    .reset (reset),
    .d     (count_next),
    .q     (count)
  );

  //----------------------------------------------------------------------
  // Combinational Logic
  //----------------------------------------------------------------------

  always_comb begin
    if (clear)                                                                  count_next = p_count_clear_value;
    else if (!clear && !decrement && !increment)                                count_next = count;    
    else if (!clear && increment && decrement)                                  count_next = count;
    else if (!clear && increment && !decrement && (count <  p_count_max_value)) count_next = count + 1;
    else if (!clear && increment && !decrement && (count >= p_count_max_value)) count_next = p_count_max_value;
    else if (!clear && decrement && !increment && (count >  0))                 count_next = count - 1;
    else if (!clear && decrement && !increment &&(count <= 0))                  count_next = 0;
    else if (!clear && increment && decrement)                                  count_next = count;
    else                                                                        count_next = count;
  end

endmodule

module vc_ResetReg
#(
  parameter p_nbits       = 1,
  parameter p_reset_value = 0
)(
  input  logic               clk,   // Clock input
  input  logic               reset, // Sync reset input
  output logic [p_nbits-1:0] q,     // Data output
  input  logic [p_nbits-1:0] d      // Data input
);

  always@( posedge clk )
    q <= reset ? p_reset_value : d;

endmodule

`endif /* QUEUE_V */
