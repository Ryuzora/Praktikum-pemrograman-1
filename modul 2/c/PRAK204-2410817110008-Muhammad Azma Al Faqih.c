#include <stdio.h>

int main() {
  float volume, luas, keliling, radius, tinggi;
  float pi = 22.0 / 7.0;

  scanf("%f %f", &radius, &tinggi);

  volume = pi * radius * radius * tinggi;
  luas = 2 * pi * radius * (radius + tinggi);
  keliling = 2 * pi * radius;

  printf("Volume = %.2f\n", volume);
  printf("Luas = %.2f\n", luas);
  printf("Keliling = %.2f\n", keliling);
}
