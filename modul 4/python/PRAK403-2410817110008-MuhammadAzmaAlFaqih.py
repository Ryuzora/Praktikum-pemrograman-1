left, right = map(int, input().split())
Range = abs(left-right)

for i in range(0, Range+1):
    if left<right:
        print(left+i, right-i, end="",sep=" ")
    else:
        print(left-i, right+i, end="")

    if i<Range: print(" - ", end="")
