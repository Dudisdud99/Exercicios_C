#include <stdio.h>

int potencia(int base, int expo){
  int pot=base;
  for(int i=1; i<expo; i++){
    pot=pot*base;
  }
  return pot;
}

int main(void) {
  int base, expo, res;
  printf("Digite um numero para a base: ");
  scanf("%d",&base);
  printf("Digite um numero para o expoente: ");
  scanf("%d",&expo);
  res=potencia(base, expo);
  printf("O resultado e %d",res);
}