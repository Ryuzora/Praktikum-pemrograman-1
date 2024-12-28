def _Biodata(a,b,c):
    TahunSekarang = 2020
    print("Perkenalkan Nama Saya : ", b)
    print("Umur Saya : ", TahunSekarang - a)
    print("Saya Adalah Angkatan ", TahunSekarang)
    print("Asal Saya Dari : ", c)

TahunLahir = int(input())
Nama = input()
AsalKota = input()
_Biodata(TahunLahir, Nama, AsalKota)