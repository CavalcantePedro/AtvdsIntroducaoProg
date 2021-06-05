#include <stdio.h>

int main()
{
    int i, tamanho, menor =0, pos = 0;
    scanf("%d",&tamanho);
    int array[tamanho];
    for (i = 0; i < tamanho; i++)
    {
        scanf("%d", &array[i]);
    }
    menor = array[0];
    for (i = 1; i < tamanho; i++)
    {
        if (array[i] < menor)
        {
            menor = array[i]; 
            pos = i;
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", pos);
    return 0;
}