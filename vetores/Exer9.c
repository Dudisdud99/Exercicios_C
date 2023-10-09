#include <stdio.h>

int main(void) {
  int num[6][6],cont=0;
  for(int l=0; l<6; l++){
    for(int c=0; c<6; c++){
      printf("Digite a posicao %d da %d linha: ", c+1, l+1);
      scanf("%d", &num[l][c]);
      if(num[l][c]>10){
        cont++;
      }
    }
  }
  printf("Nesta matriz %d numeros sao > 10",cont);
  return 0;
}
