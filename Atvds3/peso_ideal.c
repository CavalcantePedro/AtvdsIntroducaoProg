#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sx;
    float alt, peso;

    printf("Digite m se for do sexo masculino ou \nf se for do sexo feminino \n");
    printf("OBS: lembre de digitar em minusculo\n");
    scanf("%c", & sx);
    printf("Digite sua altura:\n");
    scanf("%f",& alt);
    
    if (sx == 'f')
    {
        peso = (62.1 * alt) - 44.7;
        printf("Seu peso ideal e %.1f:", peso);
    }
    else
    {
        peso = (72.17 * alt) - 58;
        printf("Seu peso ideal e %.1f:", peso);
    }
    
    return 0;
}