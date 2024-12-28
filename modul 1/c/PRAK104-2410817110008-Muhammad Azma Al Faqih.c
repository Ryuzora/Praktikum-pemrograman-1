#include <stdio.h>

int harga_sepatuA = 400000;
int harga_sepatuB = 350000;

int main(){
  printf("Harga sepatu A adalah %d\n", harga_sepatuA);
  printf("Harga sepatu B adalah %d\n", harga_sepatuB);
  printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", (harga_sepatuA - (harga_sepatuA*13/100))); 
  printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d", (harga_sepatuB - (harga_sepatuB*21/100))); 
}