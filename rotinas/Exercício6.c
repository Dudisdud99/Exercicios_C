#include <stdio.h>
#include <stdbool.h>

int impPar (int x){
  if(x%2==0){
    printf("O valor de X é par\n");
    return true;
  }
  else{
    printf("O valor de X é impar\n");
    return false;
  }
}

int negPos (int x){
  if(x>=0){
    printf("O valor de X é positivo\n");
    return true;
  }
  else{
    printf("O valor de X é negativo\n");
    return false;
  }
}

int main () {
  int x;
  bool NP,IP;
  printf("Digite o valor X: ");
  scanf(" %d", &x);
  IP=impPar(x);
  NP=negPos(x);
  
  return 0;
}