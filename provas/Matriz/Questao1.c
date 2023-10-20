#include <stdio.h>

int main(void) {
  int num[10], res[10];
  for(int i=0; i<10; i++){
    printf("Digite um numero inteiro para possicao %d: ",i+1);
    scanf("%d",&num[i]);
  }
  for(int i=0; i<10; i++){
    res[i]=num[i]*5;
    printf("%-10d %d\n",num[i],res[i]);
  }
  return 0;
}

