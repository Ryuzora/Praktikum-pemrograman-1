#include <stdio.h>

float angka1;
float angka2;
float hasil;

int main() {
  printf("Masukkan Nilai Pertama : ");
  scanf("%f", &angka1);
  printf("\nMasukkan Nilai Kedua : ");
  scanf("%f", &angka2);

  hasil = angka1 + angka2;

  printf("\n\nHasil dari penjumlahan nilai pertama \"%.2g\" dan nilai kedua "
         "\"%.2g\" adalah \"%.2f\"",
         angka1, angka2, hasil);
}
