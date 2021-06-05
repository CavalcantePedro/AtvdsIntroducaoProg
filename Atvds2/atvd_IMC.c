#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso, altura, imc;
    
    printf("Insira o seu peso em kg:");
    scanf("%f", &peso);

    printf("Insira a sua altura em metros:");
    scanf("%f", &altura);

    imc = peso/ (altura*altura);

    printf("O seu imc e de %.1f:", imc);
    
}