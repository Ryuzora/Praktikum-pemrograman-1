#include <stdio.h>

int main(){
  int a, b;
  scanf("%d %d", &a, &b);
  int matriks[2][a];
  if ( a != b ){
    printf("Jumlah tidak sama\n");
    return 0;
  }
  for (int i = 0; i < a; i++){
    scanf("%d", &matriks[0][i]);
  }
  for (int i = 0; i < a; i++){
    scanf("%d", &matriks[1][i]);
  }
  printf("\n");
  for (int i = 0; i < a; i++){
    printf("%d ", matriks[0][i]*matriks[1][i]);
  }
  printf("\n");
}