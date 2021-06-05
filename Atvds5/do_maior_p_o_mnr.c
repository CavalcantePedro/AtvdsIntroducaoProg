#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Digite o primeiro numero:\n");
    scanf("%d", & a);
    printf("Digite o segundo numero:\n");
    scanf("%d", & b);
    if(a > b)
    {
        while (a >= b)
        {
            printf("%d\n", b);
            b++;
        }
    }
    else if (b > a)
    {
        while (b >= a)
        {
            printf("%d\n", a);
            a++;
        }
    }
    return 0;
}