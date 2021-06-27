#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_MAX_NOME 45
#define TAM_MAX_DISC 55


typedef struct 
{   
    int matricula;
    char nome[TAM_MAX_NOME];
    float n1, n2 ,n3;
    float nr;
} DadosAluno;


int main()
{
    int quantAlu,i;
    char disciplina[TAM_MAX_DISC];
    
    puts("Seja Bem vindo !");
    puts("Qual o nome da disciplina ?");
    fgets(disciplina, TAM_MAX_DISC, stdin);
    puts("Qual  quantidade de alunos ?");
    scanf("%d*%c", &quantAlu);
    
    DadosAluno alunos[quantAlu];
    
    for (i = 0; i < quantAlu; i++)
    {
        printf("Digite a matricula do %d aluno:\n", i+1);
        scanf("%f", &alunos[i].matricula);
        printf("Digite o nome do %d aluno:\n", i+1);
        scanf("%s", &alunos[i].nome);
    }

    for (i = 0; i < quantAlu; i++)
    {
        printf("Insira as 3 notas do aluno chamado %s\n:", alunos[i].nome);
        scanf("%f %f %f", &alunos[i].n1, &alunos[i].n2, &alunos[i].n3);
    }

    for (i = 0; i < quantAlu; i++)
    {
        float media =alunos[i].n1+alunos[i].n2+alunos[i].n3/3; 

        if (media >= 4 && media <= 7)
        {
            printf("Diga a nota de recuperação do aluno %s que tem media atual igual a %f:\n", &alunos[i].nome, &media);
            scanf("%f", &alunos[i].nr);
        }
    }
    
    printf("Disciplina: %s\n", disciplina);
    printf("---------------------------------------------------------------------------------");
    printf("Matricula \t\t\t Nome \t\t\t Nota 1 \t Nota 2 \t Nota 3 \t Rec \t Media \t\t Situacao\n");
    


    return 0;
}