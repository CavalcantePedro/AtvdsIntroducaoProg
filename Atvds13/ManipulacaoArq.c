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
    float media;

} DadosAluno;

void TirarEspacos(char* str)
{
    int i;
    for ( i = 0; i < strlen(str); i++)
    {
        if(str[i]=='\n')
        {
            str[i] = str[i+1];
        }
    }
}

void LerInfo(DadosAluno *alunos, int tamA)
{ 
    int i;
    for (i = 0; i < tamA; i++)
    { 
        printf("Digite a matricula do %d aluno:\n", i+1);
        scanf("%d%*c", &alunos[i].matricula);
        printf("Digite o nome do %d aluno:\n", i+1);
        fgets(alunos[i].nome, TAM_MAX_NOME ,stdin);
        TirarEspacos(alunos[i].nome);
        printf("Insira as 3 notas do aluno chamado %s:\n", alunos[i].nome);
        scanf("%f %f %f", &alunos[i].n1, &alunos[i].n2, &alunos[i].n3);
        alunos[i].media =(alunos[i].n1+alunos[i].n2+alunos[i].n3)/3;
        if (alunos[i].media >=4 && alunos[i].media < 7)
        {
            printf("Insira a nota de recuperacao do aluno chamado %s:\n", alunos[i].nome);
            scanf("%f", &alunos[i].nr);
        } 
    }
}

void MediaF(DadosAluno *alunos, int index)
{
    float mediaF;
    mediaF = ((alunos[index].media*6) + (alunos[index].nr*4))/10;
    alunos[index].media = mediaF;
}

void PrintarInfo(const DadosAluno *alunos, int tam, char* disc)
{
    int i = 0;
    printf("Disciplina: %s", disc);
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    printf("Matricula \tNome \t\t Nota 1\t\t Nota 2\t\t Nota 3\t\t Rec \t\t Media \t Situacao\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n");
    
    while (i < tam)
    {
        printf("%d",alunos[i].matricula);
        printf("\t");
        printf("%s", alunos[i].nome);
        printf("\t\t");
        printf("%.1f", alunos[i].n1);
        printf("\t\t");
        printf("%.1f", alunos[i].n2);
        printf("\t\t");
        printf("%.1f", alunos[i].n3);
        printf("\t\t");
        if (alunos[i].media >=4 && alunos[i].media < 7)
        {
            printf("%.1f", alunos[i].nr);
            MediaF(alunos, i);
        }
        else
        {
            printf("-  ");
        }
        printf("\t\t\t");
        printf("%.1f", alunos[i].media);
        printf("\t");
        if(alunos[i].media <= 4)
        {
            printf("Reprovado");
        }
        else
        {
            printf("Aprovado");
        }
        
        printf("\n");

        i++;
    }  
}   


int main()
{
    int quantAlu;
    char disciplina[TAM_MAX_DISC];
    
    puts("Seja Bem vindo !");
    puts("Qual o nome da disciplina ?");
    fgets(disciplina, TAM_MAX_DISC, stdin);
    puts("Qual  quantidade de alunos ?");
    scanf("%d", &quantAlu);
    
    DadosAluno alunos[quantAlu];
    
    LerInfo(alunos, quantAlu);
    PrintarInfo(alunos, quantAlu, disciplina);

    return 0;
}