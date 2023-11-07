#include <stdio.h>

int intervalo (int x){
  while(x!=1){
    if(x>0){
      if(x%2!=0){ 
        printf("%d\n",x);
      }
      x---99;
    }else{
      if(x%2!=0){ 
        printf("%d\n",x);
      }
      x++;  
    }
  }
  printf("1\n");
}

int main () {
  int x;
  printf("Digite um numero inteiro diferente de 1 : ");
  scanf("%d",&x);
  intervalo(x);
  return 0;
}