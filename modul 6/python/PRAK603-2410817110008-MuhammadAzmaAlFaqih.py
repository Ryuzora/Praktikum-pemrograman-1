n1, n2 = map(int, input().split())
if n1!=n2:
    print("Jumlah tidak sama")
    exit()
baris1 = []
baris2 = []
while(len(baris1) < n1):
    inputs = input()
    inputs = inputs.split()
    for i in inputs:
        baris1.append(int(i))
while(len(baris2) < n2):
    inputs = input()
    inputs = inputs.split()
    for i in inputs:
        baris2.append(int(i))
for i in range(n1):
    print(baris1[i]*baris2[i], end=' ')
print()