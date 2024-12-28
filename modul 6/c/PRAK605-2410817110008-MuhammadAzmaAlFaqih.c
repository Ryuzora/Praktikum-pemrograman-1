#include <stdio.h>

int main(){
  int ordo;
  scanf("%d", &ordo);
  int matriksA[ordo][ordo];
  int matriksB[ordo][ordo];
  int hasil[ordo][ordo];
  printf("Matriks A\n");
  for(int i = 0; i<ordo; i++){
    for(int j = 0; j<ordo; j++){
      scanf("%d", &matriksA[i][j]);
    }
  }
  printf("Matriks B\n");
  for(int i = 0; i<ordo; i++){
    for(int j = 0; j<ordo; j++){
      scanf("%d", &matriksB[i][j]);
    }
  }
  printf("Matriks AxB\n");
  for(int i = 0; i<ordo; i++){
    for(int j = 0; j<ordo; j++){
      int jumlah = 0;
      for(int k = 0; k<ordo; k++){
        jumlah += matriksA[i][k] * matriksB[k][j];
      }
      hasil[i][j] = jumlah;
    }
  }

  for(int i = 0; i<ordo; i++){
    for(int j = 0; j<ordo; j++){
      printf("%d ", hasil[i][j]);
    }
    printf("\n");
  }
}