#include <stdio.h>

int main(void) {
  int num[10][10], maior=0,linha,coluna;
  for(int l=0; l<10; l++){
    for(int c=0; c<10; c++){
      printf("Digite a posicao %d da %d linha: ", c+1, l+1);
      scanf("%d", &num[l][c]);
    }
  }
  for (int l = 0; l < 10; l++) {
    for (int c = 0; c < 10; c++) {
      if(num[l][c]>maior){
        maior=num[l][c];
        linha=l+1;
        coluna=c+1;
      }
    }
  }
  printf("A posicao de maior valor esta na %d linha e %d coluna com o valor = %d",linha,coluna,maior);
  
  return 0;
}
