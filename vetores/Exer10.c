#include <stdio.h>

int main(void) {
  char certo[10];
  for(int l=0; l<10; l++){
    printf("Digite a resposta correta da questao %d:  ", l+1);
    scanf("%c", &certo[l]);
  }
  return 0;
}
