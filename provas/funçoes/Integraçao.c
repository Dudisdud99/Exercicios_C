#include <stdio.h>
#include "Questao1.h"
#include "Questao2.h"
#include "Questao3.h"
#include "Questao4.h"
#include "Questao5.h"

int acoesMain() {
    int acao;
    printf("\nDigite o numero da questao: \n");
    printf("1-Maior numero\n2-Caixa\n3-Senha\n4-Potencia\n5-Menor num\n");
    printf("Sua acao: ");
    scanf("%d",&acao);
    printf("\n");

    if(acao==1){
        printf("Iniciando Questao 1\n\n");
        main1();
    }
    else if(acao==2){
        printf("Iniciando Questao 2\n\n");
        main2();
    }
    else if(acao==3){
        printf("Iniciando Questao 3\n\n");
        main3();
    }
    else if(acao==4){
        printf("Iniciando Questao 4\n\n");
        main4();
    }
    else if(acao==5){
        printf("Iniciando Questao 5\n\n");
        main5();
    }
    else{
        printf("Seu otario");
    }

    return 0;
}

int main() {
    printf("\nBem vindo a minha prova! (Eduardo)\n");
    acoesMain();
}

int continuar(){
    int ir;
    printf("\n\n-------------------------------------\n\nVc deseja continuar?\n");
    printf("1-Continuar\n0-Sair\n");
    printf("Sua acao: ");
    scanf("%d",&ir);
    if(ir==1){
        acoesMain();
    }
    else{
        return 0;
    }
}