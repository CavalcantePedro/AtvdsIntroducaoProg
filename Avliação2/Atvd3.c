#include <stdio.h>

int main()
{
    int quantE, i, cont;
    scanf("%d", &quantE);//Armzendo o valor digitado pelo usuário no endereço da variável "quantE"

    int arr[quantE];//Crio um array do tamanho do valor dgitado 
    for (i = 0; i < quantE; i++)//Utilizo esse for para pecorrer o array e armazenar os valores digitados nele
    {
        scanf("%d", &arr[i]);
    }

    cont = MetodoBolhaDecrescente(arr,quantE);//Realizo a chamada da função e quando o seu retorno na variável "cont"
    //Como enviei o endereço do array como parametro, qualquer alteração de elementos do array que aconteça no corpo da função acontecerá aqui.
    
    for ( i = 0; i < quantE; i++)//for utilizado para pecorrer todo o array
    {
        //Criei essa estrutra de condição para imprimir todos os valores do array separados por um espaço e no ultimo elemento impresso quebrar uma linha
        if(i == quantE-1)
        {
            printf("%d\n", arr[i]);
        }
        else
        {
            printf("%d ", arr[i]);
        }
    }

    printf("%d\n", cont);//Imprimo a variável "cont" que armzena o valor retornado pela função.
    return 0;
}

int MetodoBolhaDecrescente(int arr[], int tam)//função que retorna um valor do tipo int e recebe como parametro o edereço de um array e o seu tamanho.
{
    int i, trocou,aux, cont=0;
    
    while (1)//Utilizo um while infinito 
    {   
        trocou = 0;//Toda vez que o while rodar ele diz que a variável troca armazena 0
        cont++;//Utilizo essa variável para contar a quantidade de vezes que o vetor foi pecorrido;
        for (i = 0; i < tam-1; i++)//for irá pecorrer ate o penultimo elemento do array, faço isso pra que o programa não ultrapasse a quantidade de elementos contidos no array
        {
            if (arr[i]<arr[i+1])//vou verificando os pares no array, se tiver um par cuja o elemento na frente seja maior realizo a troca de posição deses dois elementos.
            {
                aux = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = aux;
                trocou = 1;//digo que a variável "trocou" é 1 para que a condição if posterior não seja valida, e com isso não tenho a quebra da estrutura de condição while.
            }
        }
        if(trocou == 0)//Se a variável trocou é 0 (Ou seja não entrou no if que está dentro do for, logo não ocorreu troca) então o programa sai do corpo do while devido a instrução "break;"
        {
            break;
        }   
    }
    return cont;//retorno o valor armazenado na variável "cont" de tipo int  
}