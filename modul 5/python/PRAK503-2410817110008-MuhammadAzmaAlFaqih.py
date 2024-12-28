def maksimal(maks, nilai):
    return maks if maks>nilai else nilai

def minimal(minim, nilai):
    return minim if minim<nilai else nilai

maks = -100000
minim = 10000
inputs = []
batas = 0
nilai = 0
bilangan = int(input())
while len(inputs) < bilangan:
    nilai = input()
    _nilai = nilai.split()
    
    for i in _nilai:
        inputs.append(int(i))

for i in inputs:
    maks = maksimal(maks,i)
    minim = minimal(minim,i)

print(maks, minim)