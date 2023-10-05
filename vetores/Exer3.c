#include <stdio.h>

int main(void) {
  int num1[10],num2[10],num3[20], contP=0,contI=0;
  for(int i1=0; i1<10; i1++){
    printf("Digite o %d posição da sua lista 1: ", i1 + 1);
    scanf("%d", &num1[i1]);
  }
  for(int i2=0; i2<10; i2++){
    printf("Digite o %d posição da sua lista 2: ", i2 + 1);
    scanf("%d", &num2[i2]);
  }
  for(int i3=0; i3<20; i3++){
    if(i3%2==0){
      num3[i3]=num1[contP];
      contP++;
    }
    else{
      num3[i3]=num2[contI];
      contI++;
    }
  }
  for (int i4 = 0; i4 < 20; i4++) {
    printf("%d ,", num3[i4]);
  }
  return 0;
}
