#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor=-1, maior=0, menor=1;
    while (valor != 0)
    {
        printf("Digite um valor:\n");
        scanf("%d",& valor);
        if (valor > maior)
        {
            maior = valor;
        }
        if (valor >0 && valor<=menor)
        {
            menor = valor;
        }
    }
    printf("O maior valor digitado foi: %d\n", maior);
    printf("O menor valor digitado foi: %d\n", menor);
    return 0; 
}