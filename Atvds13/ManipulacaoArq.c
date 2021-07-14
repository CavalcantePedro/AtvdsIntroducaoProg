#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_MAX_NOME 45
#define TAM_MAX_DISC 55
#define TAM_MAX_ALUNOS 55

int quantAlu = 0;
char disciplina[TAM_MAX_DISC];

typedef struct 
{   
    int matricula;
    char nome[TAM_MAX_NOME];
    float n1, n2 ,n3;
    float nr;
    float media;

} DadosAluno;

void GuardarDados()
{
    
}

void LerArq()
{

}

void TirarBarraN(char* str)
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
    int i  = tamA;
    printf("Digite a matricula do %d aluno:\n", i+1);
    scanf("%d%*c", &alunos[i].matricula);
    printf("Digite o nome do %d aluno:\n", i+1);
    fgets(alunos[i].nome, TAM_MAX_NOME ,stdin);
    TirarBarraN(alunos[i].nome);
    printf("Insira as 3 notas do aluno chamado %s:\n", alunos[i].nome);
    scanf("%f %f %f", &alunos[i].n1, &alunos[i].n2, &alunos[i].n3);
    alunos[i].media =(alunos[i].n1+alunos[i].n2+alunos[i].n3)/3;
    if (alunos[i].media >=4 && alunos[i].media < 7)
    {
            printf("Insira a nota de recuperacao do aluno chamado %s:\n", alunos[i].nome);
            scanf("%f", &alunos[i].nr);  
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
    printf("\n\nDisciplina: %s", disc);
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    printf("Matricula \tNome \t\t Nota 1\t\t Nota 2\t\t Nota 3\t\t Rec \t\t Media \t Situacao\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n");
    
    while (i < tam)
    {
        printf("%d",alunos[i].matricula);
        printf("\t\t");
        printf("%s", alunos[i].nome);
        printf("\t");
        printf("%.1f", alunos[i].n1);
        printf("\t");
        printf("%.1f", alunos[i].n2);
        printf("\t");
        printf("%.1f", alunos[i].n3);
        printf("\t");
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
    printf("\n\n\n");
}   

int Menu()
{
    int i;
    DadosAluno alunos[TAM_MAX_ALUNOS];
    puts("O que voce deseja fazer ?");
    puts(" 1 - Cadastrar alunos\n 2 - Ver tabela\n 3 - Salvar tabela \n 4 - Sair do programa");
    scanf("%d", &i);
    
    switch (i)
    {
    //cadastrar Aluno
    case 1:    
        LerInfo(alunos, quantAlu);
        quantAlu++;
        break;
    
    //ver info salvas
    case 2:
        PrintarInfo(alunos, quantAlu, disciplina);
        break;

    //salvar info
    case 3:
        GuardarDados();
        break;

    //fechar prog
    case 4:
        return 0;
        break;

    default:
        return 0;
        break;
    }
}

int main()
{
    puts("Seja Bem vindo !");
    puts("Qual o nome da disciplina ?");
    fgets(disciplina, TAM_MAX_DISC, stdin);
    while (1)
    {
        printf("\n\n");
        Menu();
        if(Menu() == 0)
        {
            return 0;
        }

    }
       
    return 0;
}