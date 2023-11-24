#include <stdio.h>
#include <string.h>

int veriSimb(char vet[20]){
  int vet2[4]={'$','*','#','@'},cont=0;
  for (int i = 0; i < 4; i++){
    if(strchr(vet, vet2[i]) != NULL){
      cont++;
    }
  }
  if(cont==0){
    printf("Senha nao valida\n\n");
    return main3();
  }
  else{
    printf("Senha valida");
    continuar();
  }
}

int veriMin(char vet[20]){
  int tamanho = strlen(vet);
  if(tamanho<8){
    printf("Senha nao valida\n\n");
    return main3();
  }
  else{
    veriSimb(vet);
  }
}

int main3() {
  char vet[20];
  printf("Digite sua senha: ");
  scanf("%s", &vet);
  veriMin(vet);
  return 0;
}
