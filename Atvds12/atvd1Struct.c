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
        if ((alunos[i].n1+alunos[i].n2+alunos[i].n3)/3 >=4 && (alunos[i].n1+alunos[i].n2+alunos[i].n3)/3 < 7)
        {
            printf("Insir a nota de recuperação do aluno chamado %s:\n", alunos[i].nome);
            scanf("%f", &alunos[i].nr);
        } 
    }
}

void PrintarInfo(const DadosAluno* alunos, int tam, char* disc)
{
    int i = 0;
    printf("Disciplina: %s", disc);
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    printf("Matricula \t Nome \t\t\t Nota 1 \t Nota 2 \t Nota 3 \t Rec \t Media \t Situacao\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n");
    
    while (i < tam)
    {
        printf("%d",alunos[i].matricula);
        printf("\t\t %s \t", alunos[i].nome);
        printf("%.1f \t", alunos[i].n1);
        printf("\t %.1f \t", alunos[i].n2);
        printf("\t %.1f \t", alunos[i].n3);
        printf("\t %.1f \t", alunos[i].nr);
        printf(" %.1f \t", (alunos[i].n1+alunos[i].n2+alunos[i].n3)/3);
    
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
    
    LerInfo(&alunos, quantAlu);
    PrintarInfo(alunos, quantAlu, disciplina);

    return 0;
}