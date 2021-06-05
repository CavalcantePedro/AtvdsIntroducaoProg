#include <stdio.h>

void OrganizarArray(int array[], int tam)
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

int QuantidadeRepetida(int array[], int tamanho, int indice)
{
    int i, cont=0, contGeral =0;
    for (i = 0; i < tamanho; i++)
    {
       if (array[indice] == array[i])
       {
            cont++;
       }
    }
    return cont;
}
int main()
{
    int bilhetes, pessoas, cont = 0, i, quant;

    scanf("%d %d", &bilhetes, &pessoas);
    while (bilhetes !=0 && pessoas != 0)
    {
        int array[pessoas];
        for (i = 0; i < pessoas; i++)
        {
            scanf("%d", &array[i]);
        }

        OrganizarArray(array,pessoas);
        
        for (i = 0; i < pessoas; i++)
        {
            quant= QuantidadeRepetida(array, pessoas, i);
            if (array[i] != array[i+1])
            {
                if (quant > 1)
                {
                    cont++;
                }   
            }
        }
        printf("%d\n", cont);
        cont = 0;

        scanf("%d %d", &bilhetes, &pessoas);
    }
    
    
    return 0;
}