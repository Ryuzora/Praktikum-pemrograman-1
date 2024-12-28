a = int(input())
b = int(a/10)
if a == 0:
    print("Nol")
elif b == 0:
    print("Satuan")
elif b == 1:
    print("Belasan")
elif b >= 10:
    print("Anda Menginput Melebihi Limit Bilangan")
else:
    print("Puluhan")
