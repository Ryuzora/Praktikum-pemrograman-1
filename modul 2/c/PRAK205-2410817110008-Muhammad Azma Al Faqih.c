#include <math.h>
#include <stdio.h>

int main() {
  int sisiA, sisiB, keliling, sisiC, luas;
  scanf("%d %d", &sisiA, &sisiB);

  sisiC = sqrt(sisiB * sisiB - sisiA * sisiA);
  keliling = sisiA + sisiB + sisiC;
  luas = 0.5 * sisiC * sisiA;

  printf("Alas = %d cm\n", sisiC);
  printf("Tinggi = %d cm\n", sisiA);
  printf("Keliling = %d cm\n", keliling);
  printf("Luas = %d cm^2\n", luas);
}
