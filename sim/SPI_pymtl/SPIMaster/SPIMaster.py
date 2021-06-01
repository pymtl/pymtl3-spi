#=========================================================================
# SPIMinion
#=========================================================================

from pymtl3 import *
from pymtl3.stdlib import stream
from pymtl3.passes.backends.verilog import *
from pymtl3.stdlib.basic_rtl import Mux, Reg, RegEn 

class SPIMaster( Component ):

  # Constructor
  
  def construct( s, pack_size, clk_diff):  
    
    # clk_diff: SPI signals need to toggle at a frequency slower than the 
    # SPIMinion's ability to sample. With the current design it takes 3 
    # Minion clk cycles for a signal to be syncronized. A clk_diff of 4 
    # is the minimum but not recommended. 
  
    #---------------------------------------------------------------------
    # Ports
    #---------------------------------------------------------------------

    s.req_val     = InPort ( 1 )
    s.req_rdy     = OutPort( 1 )
    s.req_msg     = InPort ( pack_size)
    s.resp_val    = OutPort( 1 )
    s.resp_rdy    = InPort ( 1 )
    s.resp_msg    = OutPort( pack_size )
    
    s.cs          = OutPort( 1 ) 
    s.sclk        = OutPort( 1 )
    s.mosi        = OutPort( 1 )
    s.miso        = InPort ( 1 )
    
    #---------------------------------------------------------------------
    # Interfaces
    #---------------------------------------------------------------------
    s.recv = stream.ifcs.RecvIfcRTL(mk_bits(128))
    s.send = stream.ifcs.SendIfcRTL(mk_bits(128))
    
    s.req_val   //= s.recv.val
    s.req_rdy   //= s.recv.rdy
    s.req_msg   //= s.recv.msg
    
    s.resp_val  //= s.send.val
    s.resp_rdy  //= s.send.rdy
    s.resp_msg  //= s.send.msg
    

    #---------------------------------------------------------------------
    # State Definitions 
    #---------------------------------------------------------------------
    
    s.STATE_RESET        = 0
    s.STATE_IDLE         = 1
    s.STATE_HANDSHAKE    = 2
    s.STATE_TRANSFER     = 3
    s.STATE_TERMINATION  = 4
    s.STATE_DONE         = 5
    
    s.state     = Wire(3)
    s.cntr      = Wire(32)
    s.cntr_max  = Wire(32)
    s.sclk_en   = Wire(1)
    s.sclk_cntr = Wire(Bits4)
    #---------------------------------------------------------------------
    # State Transition Logic
    #---------------------------------------------------------------------
    @update_ff
    def state_transitions():
      if s.reset:
        s.state <<= s.STATE_RESET 
        
      if s.state == s.STATE_RESET:
        s.state <<= s.STATE_IDLE
      
      if s.state == s.STATE_IDLE:
        if (s.resp_rdy & s.req_val):
          s.state <<= s.STATE_HANDSHAKE 
          
      if s.state == s.STATE_HANDSHAKE:
        if s.cntr >= clk_diff:
          s.state <<= s.STATE_TRANSFER 
          
      if s.state == s.STATE_TRANSFER:
        if s.cntr >= (2*(clk_diff)*(pack_size))-1 :
          s.state <<= s.STATE_TERMINATION
          
      if s.state == s.STATE_TERMINATION:
        if s.cntr >= clk_diff:
          s.state <<= s.STATE_DONE
          
      if s.state == s.STATE_DONE:  # to ensure cs stays high
        if s.cntr >= clk_diff:
          s.state <<= s.STATE_IDLE
          
    #---------------------------------------------------------------------
    # Maximum Counter Value
    #---------------------------------------------------------------------
    @update
    def max_counter_values():
      if s.state == s.STATE_RESET:
        s.cntr_max @= clk_diff
      
      if s.state == s.STATE_IDLE:
        s.cntr_max @= clk_diff
        
      if s.state == s.STATE_HANDSHAKE:
        s.cntr_max @= clk_diff

      if s.state == s.STATE_TRANSFER:
        s.cntr_max @= (2*(clk_diff)*(pack_size))-1
                
      if s.state == s.STATE_TERMINATION:
        s.cntr_max @= clk_diff
        
      if s.state == s.STATE_DONE:
        s.cntr_max @= clk_diff
        
    #---------------------------------------------------------------------
    # CS Logic
    #---------------------------------------------------------------------
    @update
    def cs_logic():
      if s.state == s.STATE_RESET:
        s.cs @= 1
      
      if s.state == s.STATE_IDLE:
        s.cs @= 1
        
      if s.state == s.STATE_HANDSHAKE:
        s.cs @= 0

      if s.state == s.STATE_TRANSFER:
        s.cs @= 0
                
      if s.state == s.STATE_TERMINATION:
        s.cs @= 0
        
      if s.state == s.STATE_DONE:
        s.cs @= 1

    #---------------------------------------------------------------------
    # SCLK Logic
    #---------------------------------------------------------------------
    @update
    def sclk_logic():
      if (s.state == s.STATE_TRANSFER):
        s.sclk_en @= 1
      else:
        s.sclk_en @= 0
        
    #---------------------------------------------------------------------
    # Counter Logic
    #---------------------------------------------------------------------
    @update_ff
    def counter_logic():
      if (s.state == s.STATE_IDLE):
        s.cntr <<= 0
      
      elif ((s.cntr >= s.cntr_max) & (s.state != s.STATE_IDLE)):
        s.cntr <<= 0
        
      else:
        s.cntr <<= s.cntr + 1
        
    #---------------------------------------------------------------------
    # Generate SCLK
    #---------------------------------------------------------------------
    s.sclk_state = Wire(1)
    @update_ff
    def generate_sclk():
      if (s.sclk_en):
        if (s.sclk_cntr == 0):
          s.sclk <<= ~s.sclk
          s.sclk_cntr <<= s.sclk_cntr + 1
          
        elif (s.sclk_cntr == clk_diff-1):
          s.sclk <<= s.sclk
          s.sclk_cntr <<= 0
          
        else:          
          s.sclk <<= s.sclk
          s.sclk_cntr <<= s.sclk_cntr + 1
        
      else:
        s.sclk      <<= 0
        s.sclk_cntr <<= 0
        
    #---------------------------------------------------------------------
    # MOSI Datapath
    #---------------------------------------------------------------------
    s.mosi_reg          = RegEn( mk_bits(pack_size) )
    s.mosi_reg_pointer  = Wire ( mk_bits(pack_size) )
    s.mosi_reg.in_    //= s.req_msg
    
    @update
    def mosi_reg_en():
      if ((s.state == s.STATE_IDLE) & (s.req_val == 1)):
        s.mosi_reg.en @= 1
      else:
        s.mosi_reg.en @= 0
    
    @update
    def mosi_msb():
      s.mosi @= s.mosi_reg.out[s.mosi_reg_pointer]
      
    @update_ff
    def mosi_shift_reg():
      if s.state == s.STATE_IDLE:
        s.mosi_reg_pointer <<= pack_size - 1
        
      if s.state == s.STATE_TRANSFER:
        if (s.sclk == 1) &  (s.sclk_cntr == 0):
          if s.mosi_reg_pointer == 0:
            s.mosi_reg_pointer <<= 0
          else:
           s.mosi_reg_pointer <<=  s.mosi_reg_pointer - 1
      
    #---------------------------------------------------------------------
    # MISO Datapath
    #---------------------------------------------------------------------
    s.miso_reg          = Wire ( mk_bits(pack_size) )
    s.miso_reg_pointer  = Wire ( mk_bits(pack_size) )
    s.resp_msg        //= s.miso_reg  
    
    @update_ff
    def miso_shift_reg():
      if s.state == s.STATE_IDLE:
        s.miso_reg <<= 0
      
      if s.state == s.STATE_TRANSFER:
        if (s.sclk == 0) &  (s.sclk_cntr == 0):
          s.miso_reg  <<= concat(s.miso_reg [0:pack_size-1], s.miso)
          
    #---------------------------------------------------------------------
    # val rdy interface 
    #---------------------------------------------------------------------
    @update 
    def req_rdy():
      s.req_rdy @= s.resp_rdy & (s.state == s.STATE_IDLE)
      
    s.result_read = Wire (Bits1)
    @update
    def result_read():                #tracks if the result is read or not
      if s.state == s.STATE_RESET:
        s.result_read  @= 0
      
      if s.state == s.STATE_IDLE:
        if (s.result_read == 0) & (s.resp_rdy == 0):
          s.result_read  @= 0
        else:
          s.result_read  @= 1
        
      if s.state == s.STATE_HANDSHAKE:
        s.result_read  @= 0

      if s.state == s.STATE_TRANSFER:
        s.result_read  @= 0
                
      if s.state == s.STATE_TERMINATION:
        s.result_read  @= 0
        
      if s.state == s.STATE_DONE:
        if (s.resp_rdy == 1) & (s.cntr > 0):
          s.result_read  @= 1
    
    
    s.valid_progressing = Wire (Bits1)
    s.msg_from_minion   = Wire (Bits1)
    @update
    def valid_resp():                         #tracks if response is valid
      if s.state == s.STATE_RESET:            #keeps resp_val low in reset
        s.valid_progressing @= 0
        s.msg_from_minion  @= 0
      
      elif ((s.state == s.STATE_IDLE) & (s.req_val == 1)): 
        s.valid_progressing @= 1
        s.msg_from_minion   @= 0
        
      elif ((s.state == s.STATE_DONE) & (s.valid_progressing == 1)): 
        s.msg_from_minion   @= 1
        
      else:
        s.valid_progressing @= s.valid_progressing
          
      
        

    @update
    def resp_val():                           
      if ((s.state == s.STATE_DONE) & (s.result_read == 0) & (s.msg_from_minion == 1)):
        s.resp_val @= 1
      elif ((s.state == s.STATE_IDLE) & (s.result_read == 0) & (s.msg_from_minion == 1)):
        s.resp_val @= 1  
      else:
        s.resp_val @= 0
      
  def line_trace(s):
    #return f"mosi reg in {s.mosi_reg.in_}, mosi reg en {s.mosi_reg.en}, mosi reg out {s.mosi_reg.out} "
    return f"state {s.state}, sclk_en {s.sclk_en}, sclk_cntr {s.sclk_cntr}, sclk {s.sclk}, || cntr {s.cntr}, cntr_max {s.cntr_max}"
