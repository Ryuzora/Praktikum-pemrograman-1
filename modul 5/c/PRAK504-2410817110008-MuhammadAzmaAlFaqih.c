#include <stdio.h>

int reverse(int nilai){
  int sisa = 0, reverse = 0;
  while(nilai != 0){
    sisa = nilai % 10;
    reverse = reverse * 10 + sisa;
    nilai = nilai/10;
  }
  return reverse;
}

int main(){
  int A, B;
  scanf("%d %d", &A, &B);
  A = reverse(A);
  B = reverse(B);
  int C = A+B;
  printf("%d\n", reverse(C));
}