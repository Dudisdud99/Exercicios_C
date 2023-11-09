#include <stdio.h>

int fatorial (int x){
  if(x==1||x==0){
    return 1;
  }
  else if (x<0){
    return 0;
  }
  else{
    return x*fatorial(x-1);
  }
}

int main(){
  int x;
  printf("Digite um numero: ");
  scanf("%d",&x);
  printf("O fatorial de %d e %d",x,fatorial(x));
}