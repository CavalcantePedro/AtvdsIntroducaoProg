#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont = 0,valor=-1,total = 0;
    while (valor != 0)
    {
        printf("Digite um valor:\n");
        scanf("%d",& valor);
        cont++;
        total = valor + total;
    }
   
    printf("O total de volores digitados foi: %d\n", cont-1);
    printf("A media dos valores digitados foi: %d", total/(cont-1));
    return 0; 
}