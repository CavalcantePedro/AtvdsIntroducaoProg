#include <stdlib.h>
#include <stdio.h>

int main()
{
    int idade;
    printf("Digite a sua idade: \n");
    scanf("%d", & idade);
    
    if (idade < 21)
    {
        printf("Voce e um jovem!!");
    }
    else
    {
        if(idade>=21 && idade<60)
        {
            printf("Voce e um adulto!");
        }
        else
        {
            printf("Voce e um idoso!");
        }
    }
    
    return 0;
}