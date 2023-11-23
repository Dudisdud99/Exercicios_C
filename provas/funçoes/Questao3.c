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
  if(cont==0){
    printf("Senha nao valida");
    main();
  }
  else{
    printf("Senha valida");
    return 0;
  }
}

int veriMin(char vet[20]){
  int tamanho = strlen(vet);
  if(tamanho<8){
    printf("Senha nao valida\n");
    main();
  }
}

int main(void) {
  char vet[20];
  printf("Digite sua senha: ");
  scanf("%s", &vet);
  veriMin(vet);
  veriSimb(vet);
}
