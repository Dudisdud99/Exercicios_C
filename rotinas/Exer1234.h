#include <stdio.h>

// Exercício 1

void troca (int a, int b) {
  int x;
  x=a;
  a=b;
  b=x;
  printf("A = %d\nB = %d",a,b);
}

// Exercício 2

void soma (int a, int b) {
  int soma;
  soma=a+b;
  printf("A soma de %d + %d = %d",a,b,soma);
}

// Exercício 3

void sub (int a, int b) {
  int sub;
  sub=a-b;
  printf("A subtracao de %d - %d = %d",a,b,sub);
}

// Exercício 4

int mult (int a, int b) {
  int mult;
  mult=a*b;
  printf("A multiplicacao de %d X %d = %d",a,b,mult);
  return 0;
}