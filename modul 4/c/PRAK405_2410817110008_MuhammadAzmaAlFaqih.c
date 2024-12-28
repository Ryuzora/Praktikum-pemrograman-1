#include <stdio.h>

int main(){
  int n, num;
  int sum = 0 , result = 0;
  scanf("%d %d", &n, &num);

  for(int i = 1;i<=n;i++){
    result = 0;
    for(int j = i;j>0;j--){
      printf("(%d * %d)", j, num);
      (j>1) ? printf(" + ") : printf(" = ");
      result += j*num;
      sum += j*num;
    }
    printf("%d\n", result);
  }
  printf("%d", sum);
}
