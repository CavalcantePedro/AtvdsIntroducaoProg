#include <stdio.h>

double AdicioneNaMedia(double valor)
{
    static double notas ,quantV;
    double media;
    quantV++;
    notas = notas + valor;
    media = notas/quantV;
    return media;
}

int main()
{    
    int cont, i; 
    double nota, media;
    printf("Digite a quantidade de nota que vai ser inserida: \n");
    scanf("%d", &cont);
    for (i = 0; i < cont; i++)
    {
        printf("Digite a %d nota: \n", i+1);
        scanf("%lf", &nota);
        media = AdicioneNaMedia(nota);
    }
    printf("A sua media e: %.2lf\n", media);
    return 0;
}