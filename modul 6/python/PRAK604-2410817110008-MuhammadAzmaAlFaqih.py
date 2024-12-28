baris1 = input()
baris2 = input()
karakterhasil = []
bintang = 0
pagar = 0
if len(baris1) != len(baris2):
    print("Panjang kalimat berbeda, pesan palsu")
    exit()
for i in range(len(baris1)):
    if baris1[i] == ' ' and baris2[i] == ' ':
        karakterhasil.append(' ')
        continue
    if baris1[i] == baris2[i]:
        karakterhasil.append('*')
        bintang += 1
    else:
        karakterhasil.append('#')
        pagar += 1
print(*karakterhasil, sep='')
print("* = ", bintang)
print("# = ", pagar)
print("Pesan Asli") if bintang >= pagar else print("Pesan Palsu")