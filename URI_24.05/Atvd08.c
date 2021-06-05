#include <stdio.h>

int Verificador(int arr[], char arr2[], int tam)
{
    int i,j, cont=0;
    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam; j++)
        {
            if(arr[j] == arr[i])
            {
                if (arr2[i] == 'E' && arr2[j] == 'D')
                {
                    arr2[i] = arr2[j]= 'N';
                    cont++;
                }
            }
        }
    }

    return cont;
}

int main()
{
    int quantBotas, i, quant;
    
    while (scanf("%d", &quantBotas) != EOF)
    {
        int numeros[quantBotas];
        char peLado[quantBotas];
        for (i = 0; i < quantBotas; i++)
        {
            scanf("%d %c", &numeros[i], &peLado[i]);
        }
        
        quant = Verificador(numeros,peLado,quantBotas);

        printf("%d\n", quant);
    }
    
    return 0;
}