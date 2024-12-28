#include <stdio.h>
#include <math.h>

float alas = 5, tinggi = 12;
float miring;

int main(){
  miring =  sqrt(pow(alas,2)+pow(tinggi,2));
  printf("Diketahui :\n");
  printf("Alas = %.0f\n", alas);
  printf("Tinggi = %.0f\n\n", tinggi);
  printf("Jawab :\n");
  printf("Sisi A = %.f cm\n", tinggi);
  printf("Sisi B = %.f cm\n", miring);
  printf("Sisi C = %.f cm\n", alas);
  printf("Keliling = %.f cm\n", alas+tinggi+miring);
  printf("Luas = %.f cm", alas*tinggi/2);
}