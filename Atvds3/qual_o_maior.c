#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, num3;

    printf("Digite o numero 1:\n");
    scanf("%f", &num1);
    printf("Digite o numero 2:\n");
    scanf("%f", &num2);
    printf("Digite o numero 3:\n");
    scanf("%f", &num3);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("O %1.f e o maior", num1);
        }
        
    }
   
    else
    {
        if (num2 > num1)
        {
            if(num2 > num3)
            {
                printf("O %1.f e o maior", num2);
            }
            
            else printf("O %1.f e o maior", num3);
        }
      
    }
    
    

    return 0;
}