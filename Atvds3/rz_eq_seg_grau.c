#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,delta,raiz,raiz2;

    printf("Digte o coeficiente a:\n");
    scanf("%f", & a);
    printf("Digte o coeficiente b:\n");
    scanf("%f", & b);
    printf("Digte o coeficiente c:\n");
    scanf("%f", & c);

    if (a == 0)
    {
        printf("O coeficiente 'a' nao pode ser igual a zero\n");
        return 1;
    }
    
    delta = (b * b) - 4*a*c;
    
    if (delta < 0)
    {
        printf("As raizes nao sao reais\n");
        return 2;
    }
    
    if (delta == 0)
    {   
        raiz = (-b)/2*a;
        printf("A funcao tem apenas uma raiz real, que e %.1f\n", raiz);
    }

    if (delta > 0)
    {
        raiz = ((-b)+sqrtf(delta))/2*a;
        raiz2 = ((-b)-sqrtf(delta))/2*a;
        printf("As raizes da funcao sao %.1f e %.1f\n", raiz, raiz2);
        
    }
    
    return 0;
}