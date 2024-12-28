n, num = map(int, input().split())
sum = 0

for i in range(1,n+1):
    result = 0
    for j in range(i,0, -1):
        print(f"({j} * {num})", end=" ")
        sum += j * num
        result += j * num
    print(f"= {result}")
print(sum)
