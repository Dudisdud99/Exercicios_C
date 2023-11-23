#include <stdio.h>
#include <string.h>

int veriSimb(char vet[20]){
  int vet2[4]={"$","*","#","@"},posicao,cont=0;
  for (int i = 0; i < 4; i++){
    posicao = strchr (vet, vet[i]);
    if(posicao != " "){
      cont++;
    }
  }
  if(cont<1){
    printf("Senha nao valida");
    main();
  }
}

int veriMin(char vet[20]){
  int tamanho = strlen(vet);
  if(tamanho<8){
    printf("Senha nao valida");
    main();
  }
}

int main(void) {
  char vet[20];
  scanf("%s%*c", &vet);
  veriMin(vet);
  veriSimb(vet);
}
// strchr