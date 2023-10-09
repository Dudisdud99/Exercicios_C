#include <stdio.h>

int main(void) {
  int num[4][4], numB[4][4],l2=0,c2=0;
  for(int l=0; l<4; l++){
    for(int c=0; c<4; c++){
      printf("Digite a posicao %d da %d linha: ", c+1, l+1);
      scanf("%d", &num[l][c]);
    }
  }
  for(int c=3; c>=0; c--){
    for(int l=0; l<4; l++){
      numB[l][c]=num[l2][c2];
      c2++;
    }
    c2=0;
    l2++;
  }
  for(int l=0; l<4; l++){
    for(int c=0; c<4; c++){
      printf("%d  ",numB[l][c]);
    }
    printf("\n");
  }
  return 0;
}
