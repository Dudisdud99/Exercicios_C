#include <stdio.h>

void troca (int a, int b) {
  int x;
  x=a;
  a=b;
  b=x;
  printf("A = %d\nB = %d",a,b);
}