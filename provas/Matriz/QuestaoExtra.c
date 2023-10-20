#include <stdio.h>

int main(void) {
  int matriz[4][4],matriz4[4][4],nova[4][4];
  printf("\nPrimeira matriz\n");
  for(int l=0; l<4; l++){
    for(int c=0; c<4; c++){
      printf("Digite o valor [%d][%d]",l,c);
      scanf("%d",&matriz[l][c]);
    }
  }
  printf("\n");
  printf("\nSegunda matriz\n");
  for(int l=0; l<4; l++){
    for(int c=0; c<4; c++){
      printf("Digite o valor [%d][%d]",l,c);
      scanf("%d",&matriz4[l][c]);
    }
  }
  for(int l=0; l<4; l++){
    for(int c=0; c<4; c++){
      if(matriz[l][c]>matriz4[l][c]){
        nova[l][c]=matriz[l][c];
      }
      if(matriz4[l][c]>matriz[l][c]){
        nova[l][c]=matriz4[l][c];
      }
    }
  }
  for(int l=0; l<4; l++){
    for(int c=0; c<4; c++){
      printf("%d ",nova[l][c]);
    }
    printf("\n");
  }
  return 0;
}

