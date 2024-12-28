#include <stdio.h>

int main(){
  int a;
  scanf("%d", &a);

  if (a==0){
    printf("Nol");
  } else if (a/10 == 0){
    printf("Satuan");
  } else if (a/10 == 1){
    printf("Belasan");
  } else if (a/10 > 1 && a/10 < 10){
    printf("Puluhan");
  } else {
    printf("Anda Menginput Melebihi Limit Bilangan");
  }
  printf("\n");
}
