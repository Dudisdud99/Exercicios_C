#include <stdio.h>

int main(void) {
  int num[10], pares=0;
  for (int i1 = 0; i1 < 10; i1++) {
    printf("Digite o %d posição da sua lista: ", i1 + 1);
    scanf("%d", &num[i1]);
    if(num[i1]%2==0){
      pares++;
    }
  }
  printf("\nNesta lista existem %d numeros pares.",pares);
  return 0;
}
