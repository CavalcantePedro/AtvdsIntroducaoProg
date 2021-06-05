#include <stdio.h>

int main()
{
    float array[100];
    int i;
    for (i = 0; i < 100; i++)
    {
        scanf("%f", &array[i]);
    }
    for (i = 0; i < 100; i++)
    {
        if (array[i] <= 10)
        {
            printf("A[%d] = %1.1f\n", i, array[i]);
        }
    }
    
    return 0;
}