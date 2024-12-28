#include <stdio.h>
#include <stdlib.h>

int main(){
  int left, right;
  scanf("%d %d", &left, &right);
  int range = abs(left-right);
  for (int i = 0; i < range+1; i++){
    if (left < right){
      printf("%d %d", left+i, right-i);
    } else {
      printf("%d %d", left-i, right+i);
    }

    if (i < range){
      printf(" - ");
    }
  }
  printf("\n");
}
