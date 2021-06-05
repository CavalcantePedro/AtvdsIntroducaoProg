#include <stdio.h>

int main()
{
    int i=1, num, result=0, cont;
    scanf("%d", & cont);
    do
    {
        scanf("%d", & num);
        for (i = 1; i <= num; i++)
        {
            if(num % i == 0)
            {
                result = result + i;
            }
        }
        if(result - num == num)
        {
            printf("%d eh perfeito\n", num);
        }
        else printf("%d nao eh perfeito\n", num);
        cont--;
        result =0;
    } while (cont != 0);
    return 0;
}