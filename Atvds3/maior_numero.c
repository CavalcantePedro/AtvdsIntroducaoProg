#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1,num2;
    printf("Digite um numero:");
    scanf("%f", & num1);
    printf("Digite um numero:");
    scanf("%f", & num2);
    
    if (num1 > num2)
    {
        printf("O %.1f e maior que o %.1f", num1, num2);
    }
    else
    {
        if (num1 == num2)
        {
            printf("O %.1f e igual ao %.1f", num1, num2);
        }
        else 
        {
            printf("O %.1f e maior que o %.1f", num2, num1);
        }
    }
    

    return 0;
}