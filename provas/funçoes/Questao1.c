#include <stdio.h>

int maximo(int x,int y) {
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}

int main() {
    int x,y,resposta;
    printf("Digite um numero: ");
    scanf("%d",&x);
    printf("Digite um numero: ");
    scanf("%d",&y);
    resposta=maximo(x,y);
    printf("O maior entre estes numeros e o %d",resposta);
  return 0;
}

