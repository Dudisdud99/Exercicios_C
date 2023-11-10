#include <stdio.h>
#include <time.h>

int randon (){
  srand(time(NULL));
  return (rand() % 100)+1;
}

int adivinhar (int x, int cont){
  int ad;
  printf("Adivinhe o numero: ");
  scanf("%d",&ad);
  if(ad==x){
    printf("\nVoce acertou! com %d tentetivas",cont);
  }
  else if(ad>x){
    printf("É menor!\n\n");
    cont++;
    adivinhar(x, cont);
  }
  else{
    printf("É maior!\n\n");
    cont++;
    adivinhar(x, cont);
  }
}

int main (){
  int x,cont=1;
  x=randon();
  adivinhar(x,cont);
}