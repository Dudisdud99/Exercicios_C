#include <stdio.h>
#include <string.h>

int inverter (char p[]){
  char troca[strlen(p)];
  for(int i=0, y=strlen(p); i<=strlen(p); i++,y--){
    troca[i]=p[y];
    printf("%c",troca[i]);
  }
  printf("\nEsta e a sua palavra ao contrario");
}

int main () {
  char p[25];
  printf("Digite uma palavra: ");
  scanf("%s",&p);
  inverter (p);
  return 0;
}