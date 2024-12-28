#include <stdio.h>

int MaxBilangan(int a, int b, int c, int d){
  int left, right, max;
  (a>b) ? (left = a) : (left = b);
  (c>d) ? (right = c) : (right = d);
  (left>right) ? (max = left) : (max = right);
  return max;
}

int main(){
  int a,b,c,d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  int hasil = MaxBilangan(a,b,c,d);
  printf("%d\n", hasil);
  return 0;
}