#============================================================================================================
# This is a simple smoke test. The test writes messages 32 bit data messages over SPI. 
# Each byte is the same number, and increases by one each iteration. 
# First byte is the control byte. Our message is 37 bits long, the SPI Driver requires byte-divisible message sizes.
# Thus, we send 40 bits, we do not care about the first three bits sent, because the shift register captures the 
# last 37 bits when CS goes back high. We only care about the first 37 bits sent back to us because we start 
# capturing data as soon as CS goes low. Therefore the last 3 bits are garbage, so you'll notice that we shift them out. 


# ===Waveform timing information=== 8 bit message with 5 bit control-byte example ===========================
#     _   _   _   _   _   _   _   _   _   _   _   _   _   _   _   _   
# ___/ \_/ \_/ \_/ \_/ \_/ \_/ \_/ \_/ \_/ \_/ \_/ \_/ \_/ \_/ \_/ \____   SCLK
#
# ___                                                               ____
#    \_____________________________________________________________/       CS
#
#     ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___
# ___X_*_X_*_X_*_X___X___X___X___X___X___X___X___X___X___X___X___X___X__   MOSI [note first three data bits are dont care (*)]
#    |Don't care |Control-byte 5bits | 8-bit message
#     ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___
# ___X___X___X___X___X___X___X___X___X___X___X___X___X___X_*_X_*_X_*_X__   MISO [note last three data bits are dont care (*)]
#    |Control-byte 5bits | 8-bit message                 | Don't care  

# Note that which edge data is sampled and toggled may not be accurate here. This diagram is meant to illustrate which data bits 
# we care about when constructing messages to be sent and parsing messages received
# ===========================================================================================================

from spidriver import SPIDriver
from keyboard import *
from pymtl3 import *
import time

port = 'COM3'

# keep retrying since SPI Driver sometimes doesnt work
while True:
    try:
        s = SPIDriver(port)
    except:
        continue
    break

def printSPImessage(resps):
    resps_bits = b40(concat(b8(resps[0]),b8(resps[1]),b8(resps[2]),b8(resps[3]),b8(resps[4])))
    resps_bits = resps_bits >> 3
    resps_bits = [hex(resps_bits[32:40]),hex(resps_bits[24:32]), hex(resps_bits[16:24]),hex(resps_bits[8:16]), hex(resps_bits[0:8])]
    
    # Check if the message is valid 
    if int(resps_bits[0],16) >= 16: # Val Space CompAddr
        print(resps_bits)  


# === Main loop ==============================================
for j in range(1):
    print("=========================================")

    # Write 256 messages into the chip
    s.sel()
    # msg = [0x19, j, 0, 0, 0] # val write, val read 0x19= 11 001 = val write, val read, comp addr 001
    msg = [0x19, 255, 170, 255, 170]
    resps = list(s.writeread(msg))
    s.unsel()

    printSPImessage(resps)

    # time.sleep(0.05)

    # wait('ctrl')

# Do a final read at the end to make sure the adapter send queue is empty at the end of the test.
for i in range(5):
    s.sel()
    msg = [0x08, 0, 0, 0, 0] # , no write, val read 01 000
    resps = list(s.writeread(msg))
    s.unsel()
    printSPImessage(resps)


# 0   0     000
# val space addr
# 1   1     000