#include <stdio.h>
#include <stdbool.h>

int impPar (int x){
  if(x%2==0){
    return true;
  }
  else{
    return false;
  }
}

int negPos (int x){
  if(x>=0){
    return true;
  }
  else{
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
  
  if(IP){
    printf("O valor de X é par\n");
  }
  else{
    printf("O valor de X é impar\n");
  }

  if(NP){
    printf("O valor de X é positivo\n");
  }
  else{
    printf("O valor de X é negativo\n");
  }
  return 0;
}