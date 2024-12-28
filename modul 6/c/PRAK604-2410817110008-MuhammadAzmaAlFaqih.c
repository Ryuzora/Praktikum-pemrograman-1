#include <stdio.h>
#include <string.h>

int main(){
  int bintang=0, pagar=0;
  char baris1[100], baris2[100];
  scanf("%[^\n]", baris1);
  getchar();
  scanf("%[^\n]", baris2);
  char hasil[strlen(baris1)];
  if (strlen(baris1) != strlen(baris2)){
    printf("Panjang kalimat berbeda, pesan palsu\n");
    return 0;
  }
  for(int i = 0; i < strlen(baris1); i++){
    if(baris1[i] == ' ' && baris2[i] == ' ') {hasil[i] = ' '; continue;}
    if(baris1[i] == baris2[i]) {hasil[i] = '*'; bintang++;}
    else {hasil[i] = '#'; pagar++;}
  }
  for(int i=0; i < strlen(hasil); i++){
    printf("%c", hasil[i]);
  }
  printf("\n* = %d", bintang);
  printf("\n# = %d\n", pagar);
  (bintang >= pagar) ? printf("Pesan Asli\n") : printf("Pesan Palsu\n");
}