#include <stdio.h>

//Crio uma função que não possui retorno e recebe como parametro um array que não  pode ser modificado, q quantidade de elementos 
//desse array e dois ponteiros do tipo int.
void MinMax(const arr[],int tam, int *min, int *max){
    int i;
    *max = *min = arr[0]; //Como os ponteiros estão apontando para os endereçoes fornecidos na chamada da função e esses endereços
     //estão armazenando lixo de memoria, digo que o valor armazenado nesses endereços é igual ao valor do primeiro elemento do array.
   
    for ( i = 0; i < tam; i++)//for utlizado pra pecorrer todo o array.
    {
        if (arr[i] < *min) // caso eu encontre um valor no array menor que o valor armazenado no endereço apontado eu digo que 
        //o valor armazenado no endereço vai ser igual o valor menor.
        {
            *min = arr[i];
        }
        if (arr[i] > *max)//caso eu encontre um valor no array maior que o valor armazenado no endereço apontado eu digo que 
        //o valor armazenado no endereço vai ser igual o valor maior.
        {
            *max = arr[i];
        }
    }
    //Como a função esta utilizando ponteiros que apontam para o endereço fornecido na chamada, não é necessario retornar nada.
}

int main(void){
    int ar[100];
    int n, i, min, max;

    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &ar[i]);
    }

    /* faca aqui a chamada a sua funcao*/
    MinMax(ar,n,&min,&max);

    printf("%d %d\n", min, max);

    return 0;
}
