#include <stdio.h>

int quadrado (int x, int y){
  int z=x;
  for(int i=1; i<y; i++){
    z=z*x;
  }
  printf("%d",z);
}

int main () {
  int x,y;
  printf("Digite um numero: ");
  scanf("%d",&x);
  printf("Este numero sera elevado a quanto? *nao negativo : ");
  scanf("%d",&y);
  quadrado(x,y);
  return 0;
}