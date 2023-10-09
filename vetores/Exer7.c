#include <stdio.h>

int main(void) {
  int num[4][4], numB[4][4];
  for(int l=0; l<4; l++){
    for(int c=0; c<4; c++){
      printf("Digite a posicao %d da %d linha: ", c+1, l+1);
      scanf("%d", &num[l][c]);
    }
  }
  for(int l=0; l<4; l++){
    for(int c=4; c>=0; c--){
      numB[l][c]=num[l][l--]
    }
  }
  return 0;
}
