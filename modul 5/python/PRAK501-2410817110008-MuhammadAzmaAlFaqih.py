a,b,c,d = map(int, input().split())

def MaxBilangan(a,b,c,d):
    left = a if b<a else b
    right = c if d<c else d
    return left if right<left else right

print(MaxBilangan(a,b,c,d))