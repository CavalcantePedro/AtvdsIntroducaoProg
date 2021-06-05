#include <stdio.h>

int QuantMutiplos(int arr[], int casos, int num)
{
    int quant = 0,i;
    for (i = 0; i <casos; i++)
    {
        if(arr[i] %num == 0)
        {
            quant++;
        }
    }
    return quant;
}

int main()
{
    unsigned short casos, i;
    scanf("%u", &casos);
    int arr[casos];
    for ( i = 0; i < casos; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d Multiplo(s) de 2\n", QuantMutiplos(arr, casos,2));
    printf("%d Multiplo(s) de 3\n", QuantMutiplos(arr, casos,3));
    printf("%d Multiplo(s) de 4\n", QuantMutiplos(arr, casos,4));
    printf("%d Multiplo(s) de 5\n", QuantMutiplos(arr, casos,5));
    return 0;
}