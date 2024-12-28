import math

alas, tinggi = 5, 12
miring = math.sqrt(math.pow(alas, 2) + math.pow(tinggi,2))

print(f"Diketahui :")
print(f"Alas = {alas} cm")
print(f"Tinggi = {tinggi} cm\n")
print(f"Jawab :")
print(f"Sisi A = {tinggi} cm")
print(f"Sisi B = {miring:.0f} cm")
print(f"Sisi C = {alas} cm")
print(f"Keliling = {alas+tinggi+miring:.0f} cm")
print(f"Luas = {alas*tinggi/2:.0f}")