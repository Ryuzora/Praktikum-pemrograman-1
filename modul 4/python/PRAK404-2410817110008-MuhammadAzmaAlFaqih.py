operasi = ["Penjumlahan", "Pengurangan", "Perkalian", "Pembagian"]
hasil = 0

while(True):
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    pilihan = int(input("Masukkan Pilihan : "))
    if pilihan == 5:
        print("Terimakasih, telah menggunakan kalkulator King Faqih")
        exit()
    if pilihan not in [1,2,3,4]:
        print("Input anda salah, silahkan coba lagi")
        continue
    
    nilaiPertama = float(input("Masukkan nilai pertama : "))
    nilaiKedua = float(input("Masukkan nilai kedua : "))
    
    if pilihan == 1:
        hasil = nilaiPertama + nilaiKedua
    elif pilihan == 2:
        hasil = nilaiPertama - nilaiKedua
    elif pilihan == 3:
        hasil = nilaiPertama * nilaiKedua
    elif pilihan == 4:
        hasil = nilaiPertama / nilaiKedua

    print(f"Hasil {operasi[pilihan-1]} antara {nilaiPertama:.2f} dengan {nilaiKedua:.2f} adalah {hasil:.2f}")
