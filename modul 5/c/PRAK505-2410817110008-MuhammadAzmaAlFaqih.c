#include <stdio.h>

int Biodata(int tahun, char nama[], char asal[]){
  int tahun_sekarang = 2020;
  printf("Perkenalkan Nama Saya : %s\n", nama);
  printf("Umur Saya : %d\n", tahun_sekarang-tahun);
  printf("Saya adalah Angkatan : %d\n", tahun_sekarang);
  printf("Asal Saya dari : %s\n", asal);
  return 0;
}

int main(){
  int tahunLahir;
  char Namaku[30], Asal[15];
  scanf("%d", &tahunLahir);
  getchar();
  scanf("%[^\n]%*c", Namaku);
  scanf("%[^\n]%*c", Asal);
  Biodata(tahunLahir, Namaku, Asal);
  return 0;
}