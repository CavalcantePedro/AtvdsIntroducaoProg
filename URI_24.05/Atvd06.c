#include <stdio.h>

int QuantidadeRepetida(int array[], int tamanho, int indice)
{
    int i, cont=0;
    for (i = 0; i < tamanho; i++)
    {
       if (array[indice] == array[i])
       {
            cont++;
       }
    }
    return cont;
}

void OrganizarArray(int *array, int tam)
{
    int i, j, aux;
    for (i = 0; i < tam; i++)
    {
        for (j = i; j < tam; j++)
        {
            if(array[i] > array[j])
            {
                aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
    }
}

int main()
{
    int tam, i, quant, indice;
    scanf("%d", &tam);
    int array[tam];

    for (i = 0; i < tam; i++)
    {
        scanf("%d", &array[i]);
    }
    OrganizarArray(array,tam);
    
    for (i = 0; i < tam; i++)
    {
        quant= QuantidadeRepetida(array, tam, i);
        if (array[i] != array[i+1])
        {
            printf("%d aparece %d vez(es)\n", array[i], quant);
        }
        
    }
    return 0;
}