#include <stdio.h>
#include <stdlib.h>

int main()
{
    float diametro, raio, area, perimetro;
    
    printf("Digite o valor do diametro do circulo:");
    scanf("%f", & diametro);
 
    raio = diametro/2;
    area = 3.14 * (raio*raio);
    perimetro = 2* 3.14 * raio;
 
    printf("O circulo de de diamentro %.1f possui:\n", diametro);
    printf("Raio igual a: %.1f \n", raio);
    printf("Area igual a: %.1f \n", area);
    printf("Perimetro igual a: %.1f", perimetro);

    return 0;
}