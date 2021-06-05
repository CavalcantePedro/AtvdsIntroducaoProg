#include <stdio.h>
#include <math.h>

int EhPrimo(int a)
{  
    int i = 1, cont = 0;
    while (i <= sqrt(a))
    {
        if (a % i == 0)
        {
            cont++;
        }
        i++;
    }
    if(cont <= 1){
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int cont, test;
    scanf("%d", &cont);
    while (cont--)
    {
        scanf("%d", &test);
        if(EhPrimo(test))
        {
            printf("Prime\n");
        }
        else{
            printf("Not Prime\n");
        }
    }
    
    return 0;
}