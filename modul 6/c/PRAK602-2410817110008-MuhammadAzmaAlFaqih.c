#include <stdio.h>

int main(){
  int a;
  scanf("%d", &a);
  int ruangan[a];
  for (int i = 0; i < a; i++){
    scanf("%d", &ruangan[i]);
  }
  for (int i = 0; i < a; i++){
    printf("%d ", ruangan[i]*(i+1));
  }
  printf("\n");
}