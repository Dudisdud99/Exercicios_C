#include <stdio.h>

int main(void) {
  char letras[5][20];
  for (int i = 0; i < 5; i++) {
    printf("Digite o %d nome da sua lista: ", i + 1);
    scanf("%s", &letras[i]);
  }
  for(int i=0; i<5; i++){
    printf("%s\n",letras[i]);
  }
  for(int i=4; i>=0; i--){
    printf("%s\n",letras[i]);
  }
  
  return 0;
}
