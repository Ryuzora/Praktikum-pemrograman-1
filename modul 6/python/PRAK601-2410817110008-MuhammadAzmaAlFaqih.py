a, b = input().split()
a, b = int(a), int(b)
nilai = list(map(int, input().split()))
for i in range(a):
    for j in range(b):
        print(nilai[j+b*i], end=' ')
    print()
