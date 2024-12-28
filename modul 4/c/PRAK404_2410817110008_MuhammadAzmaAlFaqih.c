#include <stdio.h>


char operasi[4][20] = {
  "Penjumlahan",
  "Pengurangan",
  "Perkalian",
  "Pembagian"
};

int main(){
  int pilihan;
  float nilaiPertama, nilaiKedua, hasil;
  while(1){
    printf("\nPilih program\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Exit\n");
    printf("Masukkan Pilihan : ");
    scanf("%d", &pilihan);
    if (pilihan == 5){
      printf("Terimakasih, telah menggunakan kalkulator King Faqih\n");
      return 0;
    } else if (pilihan < 1 || pilihan > 4){
      printf("Input anda salah, silahkan coba lagi\n");
      continue;
    }    
    printf("Masukkan nilai pertama : ");
    scanf("%f", &nilaiPertama);
    printf("Masukkan nilai kedua : ");
    scanf("%f", &nilaiKedua);
    if (pilihan == 1){
      hasil = nilaiPertama + nilaiKedua;
    } else if (pilihan == 2){
      hasil = nilaiPertama - nilaiKedua;
    } else if (pilihan == 3){
      hasil = nilaiPertama * nilaiKedua;
    } else if (pilihan == 4){
      hasil = nilaiPertama / nilaiKedua;
    }
    printf("Hasil %s antara %.2f dengan %.2f adalah %.2f\n", operasi[pilihan-1], nilaiPertama, nilaiKedua, hasil);
  }
}
