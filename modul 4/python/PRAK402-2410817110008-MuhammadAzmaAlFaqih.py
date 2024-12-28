total = int(input())

for i in range(1, total+1, 2):
    print(i, end=" ")
print()
if total % 2 != 0: total = total - 1
for i in range(0, total, 2):
    print(total-i, end= " ")
