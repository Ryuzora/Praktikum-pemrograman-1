inputDetik = int(input())
hari = inputDetik // 86400
inputDetik -= hari * 86400
jam = inputDetik // 3600
menit = (inputDetik % 3600)//60
detik = inputDetik % 60
if hari == 0:
    print("%02d:%02d:%02d" % (jam, menit, detik))
else:
    print("%d hari %02d:%02d:%02d" % (hari, jam, menit, detik))
