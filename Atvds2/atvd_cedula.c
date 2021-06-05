#include <stdio.h>

int main ()
{
    int valor, qnt, resto, i;
    i = 100; /*O i vai ser a maior cedula*/

    scanf("%d", &valor);
    printf("%d\n",valor);
    do
    {
        qnt = valor / i;
        resto = valor % i;
        
        printf ("%d nota(s) de R$ %d,00\n", qnt, i);
        valor = resto;
        i = i/2;

        /*exceções*/
        if(i == 25){ i = 20;}
        if(i == 2.5){i = 2;}
    
    } while (i > 0);
    
    
    return 0;
}