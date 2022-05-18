from spidriver import SPIDriver
port = '/dev/tty.usbserial-DO02C6P1'
s = SPIDriver(port)

# # read no write
# s.sel()
# msg = [0x40, 0x00] # val read no write
# resps = list(s.writeread(msg))
# for i in range(len(resps)):
#     resps[i] = hex(resps[i])
# s.unsel()
# print(resps) # if full result should be (0b10..., 0b11..., 0b11..., 0b00...)

# write no read
# s.sel()
# msg = [0x8A, 0xAA] # val read no write
# resps = list(s.writeread(msg))
# for i in range(len(resps)):
#     resps[i] = hex(resps[i])
# s.unsel()
# print(resps) # if clear, result should be three 0x4000, followed by 0x0000

# write and read
for j in range(256):
    s.sel()
    msg = [0xC0, j] # val read no write
    resps = list(s.writeread(msg))
    for i in range(len(resps)):
        resps[i] = hex(resps[i])
    s.unsel()
    print(resps) # if clear, result should be three 0x4000, followed by 0x0000
