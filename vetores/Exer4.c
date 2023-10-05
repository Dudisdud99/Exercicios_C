#include <stdio.h>

int main(void) {
  char letras1[10],cont=10;
  printf("Se nao sobrar espacos coloque #\n");
  for(int i=0; i<10; i++){
    printf("Digite o %d caracter de 10: ", i + 1);
    scanf("%s", &letras1[i]);
    if(letras1[i]=='#'){
      cont--;
    }
  }
  char letras2[cont];
  for(int i=0; i<cont; i++){
    letras2[i]=letras1[i];
  }
  printf("%s",letras2);
  return 0;
}
