#include <stdio.h>

int main()
{
    int i, cont =0, num, cont2;
    for (i = 1; i <= 100; i++)
    {
        scanf("%d", & num);
        if (num > cont) 
        {
            cont2 = i;
            cont = num;
        }
    }
    printf("%d\n", cont);
    printf("%d\n", cont2);
    return 0;
}