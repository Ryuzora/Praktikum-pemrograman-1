angka, simbol = input().split()
angka = int(angka)

for i in range(50):
    if (i+1) % angka == 0:
        print(simbol, end=" ")
    else:
        print(i+1, end=" ")
