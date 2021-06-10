#include <stdio.h>
 
int main()  
{
    int i,init, end, soma =0;
    scanf("%d", & init);
    scanf("%d", & end);
    for (i = init; i <= end; i++)
    {
        soma = i + soma;
    }
    printf("%d\n", soma);
    return 0;
}