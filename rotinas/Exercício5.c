#include <stdio.h>
#include "Exercício1.h"
#include "Exercício2.h"
#include "Exercício3.h"
#include "Exercício4.h"

int main () {
  int a,b,acao;
  printf("Digite o valor A: ");
  scanf(" %d", &a);
  printf("Digite o valor B: ");
  scanf(" %d", &b);
  printf("Qual acao vc deseja: \n1- Troca \n2- Soma \n3- Subtracao \n4- Multiplicacao \nAcao: ");
  scanf(" %d", &acao);
  if(acao==1||acao==2||acao==3||acao==4){
    if(acao==1){
    troca(a,b);
    }
    else if(acao==2){
      soma(a,b);
    }
    else if(acao==3){
      sub(a,b);
    }
    else if(acao==4){
      mult(a,b);
    }
  }
  else{
    printf("Ocorreu um erro, vc digitou um valor invalido!!!");
  }
  return 0;
}