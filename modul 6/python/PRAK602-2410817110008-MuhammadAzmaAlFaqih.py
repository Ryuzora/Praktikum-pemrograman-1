ruangan = int(input())
jumlahZetsu = list(map(int, input().split()))
for i in range(len(jumlahZetsu)):
    print(jumlahZetsu[i] * (i+1), end=' ')
print()