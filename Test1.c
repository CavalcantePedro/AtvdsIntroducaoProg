#include <stdio.h>
//EXPLICAÇÃO: 
//Primiramente criei um array bidimensional do tipo char que armazena 9 caracteres, array esse similar a uma matriz 3x3.
//Para armazenar os caracteres digitados nesse array utilizei 2 for aninhados, um pra "navegar" entre os elentos da
// linha e outro pelos da colunas.
//O primeiro valor digitado vai ser armazenado em ar[0][0], pois como estou utilizando um for aninhado o programa so irá
//rodar o for externo quando a condição do for interno for aceita, por isso a
// incrementação segue dessa maneira ar[0][0],ar[0][1],ar[0][2]...ar[1][0],ar[1][1]...ar[2][2].

//Para determinar quem foi o ganhador testei todas as 8 condiçoes de vitorias do jogo da velha para ambos os caracteres, com isso
//totalizando 16 verificações, utilizo o "else if" pra que quando o programa ache uma condição valida ele não teste as outras de baixo.
//Caso nenhuma condição seja valida, o programa irá para o corpo do else, onde é pedido para imprimir "Velha".

int main(){
    int i, j;
    char ar[3][3];
    for ( i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(j == 2)
            {
                scanf("%c%*c", &ar[i][j]);
            }   
            else{
                scanf("%c", &ar[i][j]);
            }
        }
    }
   //===================LIHAS HORIZONTAIS==================
    //HORIZONTAL 1 X
    if (ar[0][0] == 'X' && ar[0][1] == 'X' && ar[0][2] == 'X')
    {
        printf("X\n");
    }
    //HORIZONTAL 2 X
    else if (ar[1][0] == 'X' && ar[1][1] == 'X' && ar[1][2] == 'X')
    {
        printf("X\n");
    }
    //HORIZONTAL 3 X
    else if (ar[2][0] == 'X' && ar[2][1] == 'X' && ar[2][2] == 'X')
    {
        printf("X\n");
    }
    //HORIZONTAL 1 O
    else if (ar[0][0] == 'O' && ar[0][1] == 'X' && ar[0][2] == 'O')
    {
         printf("O\n");
    }
    //HORIZONTAL 2 O
    else if (ar[1][0] == 'O' && ar[1][1] == 'O' && ar[1][2] == 'O')
    {
        printf("O\n");
    }
    //HORIZONTAL 3 X
    else if (ar[2][0] == 'O' && ar[2][1] == 'O' && ar[2][2] == 'O')
    {
         printf("O\n");
    }
    
    //==================LINHAS VERTICAIS=======================
    //VERTICAL 1 X
    else if (ar[0][0] == 'X' && ar[1][0] == 'X' && ar[2][0] == 'X')
    {
         printf("X\n");
    }
    //VERTICAL 2 X
    else if (ar[0][1] == 'X' && ar[1][1] == 'X' && ar[2][1] == 'X')
    {
        printf("X\n");
    }
    //VERTICAL 3 X
    else if (ar[0][2] == 'X' && ar[1][2] == 'X' && ar[2][2] == 'X')
    {
        printf("X\n");
    }
    //VERTICAL 1 O
    else if (ar[0][0] == 'O' && ar[1][0] == 'O' && ar[2][0] == 'O')
    {
        printf("O\n");
    }
    //VETICAL 2 O
    else if (ar[0][1] == 'O' && ar[1][1] == 'O' && ar[2][1] == 'O')
    {
        printf("O\n");
    }
    //VETICAL 3 O
    else if (ar[0][2] == 'O' && ar[1][2] == 'O' && ar[2][2] == 'O')
    {
        printf("O\n");
    }

    //=================LINHAS INCLINADAS=======================
    //INCLINADA 1 X
    else if (ar[0][0] == 'X' && ar[1][1] == 'X' && ar[2][2] == 'X')
    {
        printf("X\n");
    }
    //INCLINADA 2 X
    else if (ar[0][2] == 'X' && ar[1][1] == 'X' && ar[2][0] == 'X')
    {
        printf("X\n");
    }
    //INCLINADA 1 O
    else if (ar[0][0] == 'O' && ar[1][1] == 'O' && ar[2][2] == 'O')
    {
        printf("O\n");
    }
    //INCLINADA 2 O
    else if (ar[0][2] == 'O' && ar[1][1] == 'O' && ar[2][0] == 'O')
    {
        printf("O\n");
    }
    else
    {
        printf("Velha\n");
    }
    return 0;
}