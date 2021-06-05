#include <stdio.h>

void RouboDeCarneiros(int arr[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        if (arr[i] %2 == 0)
        {
            arr[i-1] = arr[i-1] - 1;
        }
        else
        {
            arr[i+1] = arr[i+1] - 1;
            RouboDeCarneiros(arr, tam);
        }
    }
}

int main()
{
    int estrelas, i;
    scanf("%d", &estrelas);
    int carneiros[estrelas];
    for ( i = 0; i < estrelas; i++)
    {
        scanf("%d", &carneiros[i]);
    }
    RouboDeCarneiros(carneiros,estrelas);
    for ( i = 0; i < estrelas; i++)
    {
        printf("%d\n", carneiros[i]);
    }
    
    return 0;
}