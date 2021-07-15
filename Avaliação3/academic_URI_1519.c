#include <stdio.h>

//Tamanho maximo da string
#define TAM_MAX 35


void TirarBarraN(char* str)
{
    int i;
    //for que pecorre todos os elementos da string procurando um \n
    for (i = 0; i < strlen(str); i++)
    {
        //caso achado um \n ele faz a permuta do \n por \0 assim determinando um novo para a string
        if(str[i]=='\n')
        {
            str[i] = '\0';
        }
    }
}


int main()
{
    //variáveis inteiras utilizadas no código
    int i, cont;
    //criação da string
    char frase [TAM_MAX];
    //como a frase pode conter espaços utilizei a função fgets para armazena-la
    fgets(frase, TAM_MAX, stdin);
    //visto que a função acrescenta um \n ao final da frase armazenada fez-se necessário o uso/criação dessa função TirarBarraN
    TirarBarraN(frase);
    //Variável cont armazena a quantidade elementos da string, a função strlen retorna a quantidades de elementos da string
    cont = strlen(frase);
    //for utilizado para imprimir do final da string até o começo
    for (i = cont; i >= 0; i--)
    {
        //Essa condição foi criada pra que na hora de impressão não seja impresso um espaço vazio no lugar que armazena o \0. 
        if ( frase[i] != '\0')
        {
            //como uma string é compostar por elementos do tipo char, relizo a impressão com o %c
            printf("%c\n", frase[i]);
        }
    }
    
    return 0;
}