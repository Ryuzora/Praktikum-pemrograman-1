a,c,b,d = map(int, input().split())

def mutlak(nilai):
    return -nilai if nilai<0 else nilai

def hitung(a,b):
    return a-b

print(mutlak(hitung(a,b))+mutlak(hitung(c,d)))