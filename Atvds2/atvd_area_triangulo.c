#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b, h;
    float area;
    
    printf("Insira a base do triangulo:");
    scanf("%d", & b);
    printf("Insira a altura do triangulo:");
    scanf("%d", & h);

    area = b * h / 2.0;

    printf("O valor da area do triangulo e: %.1f", area);

 
    return 0;
}