#include <stdio.h>
#include<stdlib.h>

int main ()
{
    for (int i = 0; i <= 200; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d So aprende a programar quem escreve programas\n", i);
        }
        else
        {
            printf("%d Quem nao escreve progamas nao aprene a programar\n", i );
        }
    }
    
    return 0;
}