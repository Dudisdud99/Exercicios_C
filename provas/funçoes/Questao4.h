#include <stdio.h>

int potencia(int base, int expo){
  int pot=base;
  for(int i=1; i<expo; i++){
    pot=pot*base;
  }
  return pot;
}

int main4(void) {
  int base, expo, res;
  printf("Digite um numero para a base: ");
  scanf("%d",&base);
  printf("Digite um numero para o expoente: ");
  scanf("%d",&expo);
  if(expo==0){
    printf("O resultado e 1");
    continuar();
  }
  res=potencia(base, expo);
  printf("O resultado e %d",res);
  continuar();
}