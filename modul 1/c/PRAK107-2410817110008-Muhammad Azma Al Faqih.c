#include <stdio.h>

int sisiA=4, sisiB=5, sisiC=7;
int keliling;
int hargaPerMeter =  85000;

int main(){
  keliling = sisiA+sisiB+sisiC;
  printf("Diketahui:\n");
  printf("Panjang sisi segitiga berturut-turut adalah %d,%d, dan %d\n", sisiA, sisiB, sisiC);
  printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling);
  printf("Harga tanah Per Meter adalah %d\n", hargaPerMeter);
  printf("Jawaban : \n");
  printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d", hargaPerMeter*keliling);
}