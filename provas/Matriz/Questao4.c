#include <stdio.h>

int main(void) {
  int num[20][20],num2[20][20],rep[20][20],x;
  printf("\nPrimeira matriz\n");
  for(int l=0; l<20; l++){
    for(int c=0; c<20; c++){
      printf("Digite um numero inteiro pra posicao [%d][%d]: ",l,c);
      scanf("%d",&num[l][c]);
    }
  }
  printf("\nSegunda matriz\n");
  for(int l=0; l<20; l++){
    for(int c=0; c<20; c++){
      printf("Digite um numero inteiro pra posicao [%d][%d]: ",l,c);
      scanf("%d ",&num2[l][c]);
    }
  }
  printf("\n");
  for(int l=0; l<20; l++){
    for(int c=0; c<20; c++){
      for(int l2=0; l2<20; l2++){
        for(int c2=0; c2<20; c2++){
          if(num[l][c]==num2[l2][c2]){
            printf("O valor na posicao [%d][%d] repitiu na posição [%d][%d] na segunda matriz\n",l,c,l2,c2);
          }
        }
      }
    
    }
  }

  printf(" repetiram!\nE ocorreram %d repeticoes",rep);
  return 0;
}

