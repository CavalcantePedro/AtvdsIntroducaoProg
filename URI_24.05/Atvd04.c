#include <stdio.h>

int main()
{
    int array[20], i;
    for (i = 19; i >= 0; i--)
    {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < 20; i++)
    {
        printf("N[%d] = %d\n", i, array[i]);
    }
    return 0;
}