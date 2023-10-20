#include <stdio.h>

int main(void) {
  float notas[5][3],media[5],m=0,p=0,dez=0,r=0;
  for(int l=0; l<5; l++){
    for(int c=0; c<3; c++){
      printf("Digite a nota %d do %d aluno: ",l+1,c+1);
      scanf("%f",&notas[l][c]);
    }
    printf("\n");
  }
  for(int l=0; l<5; l++){
    for(int c=0; c<3; c++){
      m=m+notas[l][c];
    }
    m=m/3;
    media[l]=m;
    if(media[l]>=7){
      p++;
      if(media[l]==10){
        dez++;
      }
    }
    else{
      r++;
    }
    m=0;
  }
  printf("%d alunos aprovaram\n%d alunos reprovaram\n%d alunos aprovaram com 10",p,r,dez);
  return 0;
}

