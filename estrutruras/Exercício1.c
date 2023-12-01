#include <stdio.h>

int i = 0;
struct alunos
{
    char nome[50];
    int matricula, idade;
    float notaFinal;
};
struct alunos alunos[50];

void cadastrarAluno()
{
    char sn;
    printf("\nDigite o nome do aluno: ");
    scanf("%s", &alunos[i].nome);
    printf("Digite a matricula do aluno: ");
    scanf("%d", &alunos[i].matricula);
    printf("Digite a idade do aluno: ");
    scanf("%d", &alunos[i].idade);
    printf("Digite a nota final do aluno: ");
    scanf("%f", &alunos[i].notaFinal);
    i++;
    printf("\nAluno cadastrado com sucesso! Deseja continuar? \nn/s: ");
    scanf(" %c", &sn);
    if (sn == 's')
    {
        cadastrarAluno();
    }
    else if (sn == 'n')
    {
        main();
    }
    else
    {
        printf("\nOpção invalida!\n\n");
        main();
    }
}

void listarAlunos()
{
    for (int i2 = 0; i2 < 50; i2++)
    {
        if (i == 0)
        {
            printf("Nao ha aluno cadastrado\n");
            main();
        }

        printf("Nome: %s\n", alunos[i2].nome);
        printf("Matricula: %d\n", alunos[i2].matricula);
        printf("Idade: %d\n", alunos[i2].idade);
        printf("Nota Final: %.2f\n", alunos[i2].notaFinal);
        printf("\n");
    }
    main();
}

void calcularMedia()
{
    if (i == 0)
    {
        printf("\nNao ha aluno cadastrado\n");
        main();
    }

    float media = 0;
    for (int i2 = 0; i2 < i; i2++)
    {
        media += alunos[i2].notaFinal;
    }
    media = media / i;
    printf("\nA media de notas dos alunos é: %.1f\n", media);
    main();
}

EsqOpcao(int opcao)
{
    if (opcao == 1)
    {
        cadastrarAluno();
    }
    else if (opcao == 2)
    {
        printf("\n");
        listarAlunos();
    }
    else if (opcao == 3)
    {
        calcularMedia();
    }
    else if (opcao == 4)
    {
        exit(0);
    }
    else
    {
        printf("Opção invalida!");
        main();
    }
}

int main(void)
{
    int opcao = 0;
    printf("\n--------------------------------\n\n");
    printf("Deseja fazer o que?\n1 - Cadastrar aluno\n2 - Listar alunos\n3 - Calcular Media de notas\n4 - Sair\n");
    printf("Sua opção: ");
    scanf("%d", &opcao);
    printf("\n--------------------------------\n");
    EsqOpcao(opcao);
    return 0;
}
