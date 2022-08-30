from spidriver import SPIDriver
port = 'COM3'
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
for j in range(3):
    s.sel()
    msg = [0x19, j, 0, 20, j] # val read no write
    resps = list(s.writeread(msg))
    concat = ""
    for i in range(len(resps)):
        # concat += str(hex(resps[i]))[2:]
        concat += str(format(resps[i], '#04x'))[2:]
    concat = hex(int('0x'+ concat, 16) // 8)
    resps[0] = concat[:4]
    resps[1] = int(concat[4:6], 16)
    resps[2] = int(concat[6:8], 16)
    resps[3] = int(concat[8:10], 16)
    resps[4] = int(concat[10:12], 16)

    s.unsel()
    print(resps) # if clear, result should be three 0x4000, followed by 0x0000
