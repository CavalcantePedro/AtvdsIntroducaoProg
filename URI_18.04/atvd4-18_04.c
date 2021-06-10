#include <stdio.h>

int main() 
{
    int i, num= -1;
    while (num != 0)
    {
        scanf("%d", & num);
        for (i = 1; i <= num; i++)
        {
            if (i == num)printf("%d\n", i);
            else printf("%d ", i);
        }
    }
    return 0;
}