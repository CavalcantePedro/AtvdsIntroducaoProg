#include <stdio.h>

//Atvidade 3: função 
float MediaArray(int array[], int tamanhoArr)
{
    float media = 0, total =0;
    for (int i = 0; i < tamanhoArr; i++)
    {
        total += array[i];
    }
    media = total/tamanhoArr;
    return media;
}

//Atividade 4: função
int EmArray(int array[], int tamanhoArr, int valorProcurado)
{
    int cont = 0;
    for (int i = 0; i < tamanhoArr; i++)
    {
        if(valorProcurado == array[i])
        {
            cont++;
        }
    }
    if(cont > 0)
    { 
        return 1;
    }
    else
    {
        return 0;
    }
}

//Atividade 5: função
int MaximoValorArray(int array[], int tamanhoArr)
{
    int maiorValor = 0;
    for (int i = 0; i < tamanhoArr; i++)
    {
        if(array[i] > maiorValor)
        {
            maiorValor = array[i];
        }
    }
    return maiorValor;
}

//Atividade 6: função
int EhArrayOrdenado(int array[], int tamanhoArr)
{
    int ordemC =0 , ordemD = 0;
    for (int i = 0; i < tamanhoArr; i++)
    {
        if (array[i] < array[1+i])
        {
            ordemC++;
        }
        else if (array[i] > array[1+i])
        {
            ordemD++;
        }   
    }
    if (ordemC == 9 || ordemD == 9)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main ()
{
    int elementos[10];
    int aux = 0;
    //Atividade 1: Utilizar esse for pra preencher o array com valors pré-definidos
    /*
    for (int i = 10; i <= 100; i+=10)
    {
        elementos[aux] = i;
        aux++;
    }
    */
    //Atividade2: Utilizar esse for para o usuário inserir os elemento d array
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %d elemento do array\n", i+1); 
        scanf("%d", &elementos[i]);
    }
    
    printf("---------------Ordem Crescente (Indices)---------------\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d \n",elementos[i]);
    }
    
    printf("\n-------------Ordem Decrescente (Indices)-------------\n");
    for (int i = 9; i >= 0; i--)
    {
        printf("%d \n",elementos[i]);
    }

    printf("----------O quinto elemento do array---------\n");
    printf("%d \n", elementos[4]);

    printf("\n--------------Indices Impares--------------\n");    
    for (int i = 0; i < 10; i++)
    {
        if (i %2 != 0)
        {
            printf("%d \n", elementos[i]);
        }
    }
    
    printf("\n---------Soma de todos os elementos--------\n");  
    aux=0;
    for (int i = 0; i < 10; i++)
    {
        aux += elementos[i];
    }
    printf("%d \n", aux);   
    
    //Atividade 3: Chamada da função
    printf("\n---------Media dos elementos--------\n");  
    printf("%1.1f \n", MediaArray(elementos,10));

    //Atividade 4: Chamada da função
    printf("\n---------Procurar Valor--------\n");
    int valorP;
    printf("Qual o valor procurado?\n");
    scanf("%d", &valorP);
    if (EmArray(elementos,10,valorP) == 1)
    {
        printf("O valor faz parte do array\n");
    }
    else
    {
        printf("O valor nao faz parte do array");
    }
    
    //Atvidade 5: chamada da função
    printf("\n---------Maior Valor--------\n");
    printf("O maior valor do array eh: %d \n", MaximoValorArray(elementos,10));
    
    //Atividade 6: chamada da função
    printf("\n---------Eh ordenado?--------\n");
    if(EhArrayOrdenado(elementos,10) == 1)
    {
        printf("Eh ordenado\n");
    }
    else
    {
        printf("Nao eh ordenado");
    }
    
    return 0;
}