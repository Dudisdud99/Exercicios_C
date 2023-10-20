#include <stdio.h>

int main(void) {
  int num[10],repetiram[10],rep,nrep;
  for(int i=0; i<10; i++){
    printf("Digite um numero inteiro: ");
    scanf("%d",&num[i]);
  }
  for(int i=0; i<10; i++){
    repetiram[i]=0;
  }
  printf("Os numeros");
  for(int i=0; i<10; i++){
    if(num[i]!=num[i+1]||num[i]!=num[i+2]||num[i]!=num[i+3]||num[i]!=num[i+4]||num[i]!=num[i+5]||num[i]!=num[i+6]||num[i]!=num[i+7]||num[i]!=num[i+8]||num[i]!=num[i+9]){
      nrep++;
    }
    else{
      repetiram[i]=num[i];
      rep++;
    }
  }
  if(nrep==10){
    printf(" nao repetiram!");
    return 0;
  }
  for(int i=0; i<10; i++){
    if(repetiram[i]!=0){
      printf(", %d",repetiram[i]);
    }
  }
  printf(" repetiram!\nE ocorreram %d repeticoes",rep);
  return 0;
}

