#include <stdio.h>

int maksimal(int a, int b){
  return (b>a) ? b : a;
}
int minimal(int a, int b){
  return (b<a) ? b : a;
}

int main(){
  int batas = 0;
  int maks = -10000;
  int minim = 10000;
  int bilangan;
  scanf("%d", &bilangan);
  while(batas<bilangan){
    int nilai;
    scanf("%d",&nilai);
    maks = maksimal(maks,nilai);
    minim = minimal(minim,nilai);
    batas++;
  }
  printf("%d %d\n", maks, minim);
}