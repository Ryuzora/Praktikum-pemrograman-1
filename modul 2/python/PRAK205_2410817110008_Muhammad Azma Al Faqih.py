sisiA = int(input())
sisiB = int(input())
sisiC = ((sisiB * sisiB)-(sisiA*sisiA))**0.5
keliling = sisiA + sisiB + sisiC
luas = 0.5 * sisiC * sisiA
print(f"Alas = {sisiC:.0f} cm")
print(f"Tinggi = {sisiA:.0f} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm^2")
