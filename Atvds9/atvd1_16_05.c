#include <stdio.h>
#include <math.h>

void CalculaHexagono(float l, float *area, float *perimetro)
{
    *perimetro = l*6;
    *area = ((3*(l*l)* sqrt(3)))/2;
}

int main()
{  
    float l, area, perimetro;
    
    printf("Digite o lado do hexagono:");
    scanf("%f", &l);
    CalculaHexagono(l, &area, &perimetro);
    printf("O hexagono de lado %.1f possui :\n", l);
    printf("Area = %.1f\n", area, area);
    printf("Perimetro = %.1f\n", perimetro);
    return 0;
}