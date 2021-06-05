#include <stdio.h>

int main()
{
    int array[10], valor,i;
    scanf("%d", &valor);
    array[0] = valor;
    for (i = 1; i < 10; i++)
    {
        array[i] = array[i-1] * 2;
    }
    for (i = 0; i < 10; i++)
    {
        printf("N[%d] = %d\n", i, array[i]);
    }
    
    return 0;
}