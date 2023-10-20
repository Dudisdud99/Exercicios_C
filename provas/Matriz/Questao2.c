#include <stdio.h>

int main(void) {
  int pares[10], impares[10],x,p=0,im=0;
  for(int i=0; i<10; i++){
    pares[i]=0;
    impares[i]=0;
  }
  for(int i=0; i<10; i++){
    printf("Digite um numero inteiro: ");
    scanf("%d",&x);
    if(x%2==0){
      pares[p]=x;
      p++;
    }
    else{
      impares[im]=x;
      im++;
    }
  }
  printf("\nPares:");
  for(int i=0; i<10; i++){
    printf(" %d",pares[i]);
  }
  printf("\n\nPares:");
  for(int i=0; i<10; i++){
    printf(" %d",impares[i]);
  }
  return 0;
}

