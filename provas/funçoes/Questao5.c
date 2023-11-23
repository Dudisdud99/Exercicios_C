#include <stdio.h>

int veri(int vetor[7]){
  int menor=vetor[0];
  for(int i=1; i<7; i++){
    if(vetor[i]<menor){
      menor=vetor[i];
    }
  }
  return menor;
}

int main(void) {
  int vetor[7],res;
  for (int i = 0; i < 7; i++){
    printf("Digite um numero para a %d posicao: ",i+1);
    scanf("%d",&vetor[i]);
  }
  res=veri(vetor);
  printf("\no menor valor desta lista e o valor %d",res);
}