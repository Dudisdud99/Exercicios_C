#include <stdio.h>
#include <time.h>

int randon (){
  srand(time(NULL));
  int x = (rand() % 100)+1;
  printf("%d",x);
  return x;
}

int adivinhar (int x){
  int ad, cont=0;
  printf("Adivinhe o numero: ");
  scanf("%d",&ad);
  if(ad==x){
    cont++;
    printf("\nVoce acertou! com %d tentetivas\n",cont);
  }
  else if(ad>x){
    printf("É menor!\n\n");
    cont++;
    adivinhar(x);
  }
  else{
    printf("É maior!\n\n");
    cont++;
    adivinhar(x);
  }
}

int main (){
  int x;
  x=randon();
  adivinhar(x);
}