#include <stdio.h>
#include <stdlib.h>

int main()
{
    int segs, hora, min, resto;

    printf("Insira um valor em segundos:");
    scanf("%d", &segs);

    hora= segs / 3600;
    resto = segs % 3600;
    segs = resto;
    
    min = segs / 60;
    resto = segs % 60;
    segs = resto;

    printf("O valor inserido e igual a: \n");
    printf("%d hora(s), %d minuto(s) e %d segundo(s)", hora, min, segs);

    return 0;
}