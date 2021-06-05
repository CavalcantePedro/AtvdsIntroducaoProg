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

    printf("%f", imc);

    if (imc <= 18.5)
    {
        printf("De acordo com a OMS sua clasificacao e : Baixo Peso");
    }
    else if (imc > 18.5 && imc <= 25) 
    {
         printf("De acordo com a OMS sua clasificacao e : Normal");
    }
    else if (imc > 25 && imc <= 30 )
    {
         printf("De acordo com a OMS sua clasificacao e : Sobrepeso");
    }
    else
    {
         printf("De acordo com a OMS sua clasificacao e : Obesidade");
    }
    
    
    
    
}