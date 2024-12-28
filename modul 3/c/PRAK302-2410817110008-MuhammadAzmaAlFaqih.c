#include <stdio.h>

int main(){
  int nilai;
  scanf("%d", &nilai);

  switch (nilai/10) {
    case 10:
    case 9:
    case 8:
      printf("A");
      break;
    case 7:
      printf("B");
      break;
    case 6:
      printf("C");
      break;
    case 5:
      printf("D");
      break;
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
      printf("E");
      break;
  }
  printf("\n");
}
