//==========================================================================
//NormalQueue.v
//==========================================================================

module NormalQueue1Entry
#(
    parameter nbits = 8
)
(
  input  logic             clk,
  output logic             count,
  input  logic             reset,
  input  logic [nbits-1:0] recv_msg,
  output logic             recv_rdy,
  input  logic             recv_val,
  output logic [nbits-1:0] send_msg,
  input  logic             send_rdy,
  output logic             send_val  
);

  logic [nbits-1:0] entry;
  logic             full;
  
  always_comb begin
    recv_rdy = ~full;
  end
  
  always_ff @(posedge clk) begin
    if ( reset ) begin
      full <= 1'b0;
    end
    else
      full <= ( recv_val & ( ~full ) ) | ( full & ( ~send_rdy ) );
    if ( recv_val & ( ~full ) ) begin
      entry <= recv_msg;
    end
  end

  assign count = full;
  assign send_msg = entry;
  assign send_val = full;

endmodule


module NormalQueueRTL
#(
    parameter nbits = 8,
    parameter num_entries = 1,
)
(
  input  logic                   clk,
  output logic [$clog2(nbits):0] count,
  input  logic                   reset,
  input  logic [nbits-1:0]       recv_msg,
  output logic                   recv_rdy,
  input  logic                   recv_val,
  output logic [nbits-1:0]       send_msg,
  input  logic                   send_rdy,
  output logic                   send_val  
);
  if (num_entries == 1) begin
    logic             q_clk;
    logic             q_count;
    logic             q_reset;
    logic [nbits-1:0] q_recv_msg;
    logic             q_recv_rdy;
    logic             q_recv_val;
    logic [nbits-1:0] q_send_msg;
    logic             q_send_rdy;
    logic             q_send_val;
    
    NormalQueue1Entry q
    (
      .clk( q_clk ),
      .count( q_count ),
      .reset( q_reset ),
      .recv_msg( q_recv_msg ),
      .recv_rdy( q_recv_rdy ),
      .recv_val( q_recv_val ),
      .send_msg( q_send_msg ),
      .send_rdy( q_send_rdy ),
      .send_val( q_send_val )
    );

    assign q_clk = clk;
    assign q_reset = reset;
    assign q_recv_msg = recv_msg;
    assign recv_rdy = q_recv_rdy;
    assign q_recv_val = recv_val;
    assign send_msg = q_send_msg;
    assign q_send_rdy = send_rdy;
    assign send_val = q_send_val;
    assign count = q_count;
  end
  else begin

    localparam addr_bits = $clog2(nbits);

    logic [addr_bits-1:0] head;
    logic                 recv_xfer;
    logic                 send_xfer;
    logic [addr_bits-1:0] tail;
    
    always_comb begin
      recv_rdy = count < num_entries;
      recv_xfer = recv_val & recv_rdy;
      send_val = count > { addr_bits{1'b0} };
      send_xfer = send_val & send_rdy;
    end
      
    always_ff @(posedge clk) begin
      if ( reset ) begin
        head <= { addr_bits{1'b0} };
        tail <= { addr_bits{1'b0} };
        count <= { addr_bits{1'b0} };
      end
      else begin
        if ( recv_xfer ) begin
          tail <= ( tail < (num_entries-1)) ? tail + 1'd1 : 1'd0;
        end
        if ( send_xfer ) begin
          head <= ( head < (num_entries-1)) ? head + 1'd1 : 1'd0;
        end
        if ( recv_xfer & ( ~send_xfer ) ) begin
          count <= count + 1'd1;
        end
        else if ( ( ~recv_xfer ) & send_xfer ) begin
          count <= count - 1'd1;
        end
      end
    end
    
    assign wen = recv_xfer;
    assign waddr = tail;
    assign raddr = head;
  end

endmodule