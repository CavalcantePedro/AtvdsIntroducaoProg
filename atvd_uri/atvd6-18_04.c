#include <stdio.h>

int main()
{
    int num, quant=0, i, cont;
    scanf("%d", & cont);
    do
    {
        scanf("%d", & num);
        for ( i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                quant++;
            }
        }
        if (quant == 2)
        {
            printf("%d eh primo\n", num);
        }
        else
        {
            printf("%d nao eh primo\n", num);
        }
        quant =0;
        cont--;
    } while (cont != 0);
    return 0;
}