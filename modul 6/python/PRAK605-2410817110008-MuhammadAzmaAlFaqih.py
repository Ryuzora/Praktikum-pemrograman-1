ordo = int(input())
print("Matriks A")
matriksA = []
matriksB = []
matriksAxB = []
while len(matriksA)<ordo:
    inputs = list(map(int, input().split()))
    matriksA.append(inputs)
print("Matriks B")
while len(matriksB)<ordo:
    inputs = list(map(int, input().split()))
    matriksB.append(inputs)
print("Matriks AxB")
for i in range(ordo):
    matriksAxB.append([])
    for j in range(ordo):
        nilai = 0
        for k in range(ordo):
            nilai += matriksA[i][k] * matriksB[k][j]
        matriksAxB[i].append(nilai)
for i in range(ordo):
    for j in range(ordo):
        print(matriksAxB[i][j], end=' ')
    print()