#include <stdio.h>

float putaran = 5;
float jarak = 14;
float pi = 3.14159;

int main(){
  printf("Diketahui : \n");
  printf("Pak Dengklek mengelilingi taman = %.0f Putaran\n", putaran);
  printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n\n", jarak);
  printf("Jawaban : \n");
  printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f", (jarak/putaran)/(2*pi));
}