#include <stdio.h>

void troca (int a, int b) {
  int x;
  x=a;
  b=a;
  b=x;
  printf("Agora os dois valores ja foram trocados");
}