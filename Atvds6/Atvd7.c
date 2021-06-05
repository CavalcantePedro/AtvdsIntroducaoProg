#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, quant=0,i=0;
    printf("Digite um numero");
    scanf("%d", & num);
    do
    {   
        i++;
        if (num%i == 0)
        {
            quant++;
        } 
       
    } while (i<num);

    if (quant == 2)
    {
        printf("Seu numero e primo");
    }
    else
    {
        printf("Nao e primo");
    }
    return 0;
}