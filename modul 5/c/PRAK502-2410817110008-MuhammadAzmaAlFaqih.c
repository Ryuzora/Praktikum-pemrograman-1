#include <stdio.h>
#include <stdlib.h>

int hitung(int nilai1, int nilai2){
  return nilai1 - nilai2;
}

int mutlak(int angka){
  return abs(angka);
}

int main(){
  int a,b,c,d;
  scanf("%d", &a);
  scanf("%d", &c);
  scanf("%d", &b);
  scanf("%d", &d);
  int Hasil = mutlak(hitung(a, b)) + mutlak(hitung(c,d));
  printf("%d\n", Hasil);

  return 0;
}