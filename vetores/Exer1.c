#include <stdio.h>

int main(void) {
  int num1[16], num2[16], x = 8;
  for (int i1 = 0; i1 < 16; i1++) {
    printf("Digite o %d posição da sua lista: ", i1 + 1);
    scanf("%d", &num1[i1]);
  }
  for (int i2 = 0; i2 < 8; i2++) {
    num2[i2] = num1[x];
    num2[x] = num1[i2];
    x++;
  }
  printf("\n");
  for (int i3 = 0; i3 < 16; i3++) {
    printf("%d ,", num2[i3]);
  }
  return 0;
}

