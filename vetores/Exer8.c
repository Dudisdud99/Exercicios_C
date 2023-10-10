 #include <stdio.h>

int main(void) {
  int num[5][5],maior=0,soma=0;
  for(int l=0; l<5; l++){
    for(int c=0; c<5; c++){
      printf("Digite a posicao %d da %d linha: ", c+1, l+1);
      scanf("%d", &num[l][c]);
    }
  }
  for(int l=0; l<5; l++){
    for(int c=0; c<5; c++){
      if(l==c){
        if(num[l][c]>maior){
          maior=num[l][c];
        }
      }
      if(l+c==4){
        soma=soma+num[l][c];
      }
      printf("%d  ",num[l][c]);
    }
    printf("\n");
  }
  printf("\nMaior elemento da diagonal principal: %d\n",maior);
  printf("Soma dos elemento da diagonal secundaria: %d\n",soma);
  
  return 0;
}
