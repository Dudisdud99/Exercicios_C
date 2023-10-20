#include <stdio.h>

int main(void) {
  int num[10],num2[10],x,rep=0,nrep=0;
  for(int i=0; i<10; i++){
    printf("Digite um numero inteiro: ");
    scanf("%d",&num[i]);
  }
  for(int i=0; i<10; i++){
    num2[i]=num[i];
  }
  printf("Os numeros");
  for(int i=0; i<10; i++){
    x=num[i];
    for(int i2=0; i2<10; i2++){
      if(x==num2[i2] && i!=i2){
        printf(", %d",x);
        rep++;
      }
      else{
        nrep++;
      }
    }
    if(rep==10){
      i=9;
    }
  }
  if(nrep==100){
    printf(" nao repetiram!");
    return 0;
  }
  printf(" repetiram!\nE ocorreram %d repeticoes",rep);
  return 0;
}

