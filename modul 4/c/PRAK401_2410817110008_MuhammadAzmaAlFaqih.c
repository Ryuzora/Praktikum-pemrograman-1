#include <stdio.h>

int main(){
  char simbol;
  int angka;
  scanf("%d %c", &angka, &simbol);
  for (int i = 0; i < 50; i++){
    if ((i+1) % angka == 0){
      printf("%c ", simbol);
    } else {
      printf("%d ", i+1);
    }
  }
}
