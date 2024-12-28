#include <stdio.h>

int main(){
  int total;
  scanf("%d", &total);
  for (int i = 0; i < total; i+=2){
    printf("%d ", i+1);
  }
  printf("\n");
  if(total % 2 != 0) total --;
  for (int i = total; i > 0; i -= 2){
    printf("%d ", i);
  }
}
