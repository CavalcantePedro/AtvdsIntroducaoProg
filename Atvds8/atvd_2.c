#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool EhTrianguloRetangulo(float a, float b, float c)
{
    if ((a*a) + (b*b) == (c*c))
    {
        return true;
    }
    else
    {
        return false;
    }
}

float FormaTrianguloRetangulo(float a, float b, float c)
{
    float valor;
    if(a < 0)
    {
        a = (c*c)/b*b;
        valor = sqrt(a);
        return a;
    }
    else if (b < 0)
    {
        b = (c*c)/a*a;
        valor = sqrt(b);
        return b;
    }
    else if (c < 0)
    {
        c = (a*a)+(b*b);
        return c;
    }
    else
    {
        return -1;
    }
    
}

int main()
{   
    int cont = 0;
    float a,b,c;
    printf("Digite os valores de a, b e c :\n");
    scanf("%f%f%f", &a, &b, &c);
    
    if (a > 0)
    {
        cont++;
    }
    if (b >=0)
    {
        cont++;
    }
    if (c >=0)
    {
        cont++;
    }
    switch (cont)
    {
    case 3:
        if (EhTrianguloRetangulo(a,b,c))
        {
            printf("Forma um triangulo retangulo");
        }
        else
        {
            printf("Nao forma triangulo retangulo");
        }
        break;
    case 2:
        FormaTrianguloRetangulo(a,b,c);
        if (EhTrianguloRetangulo(a,b,c))
        {
            printf("Forma um triangulo retangulo");
        }
        else
        {
            printf("Nao forma um tiangulo retangulo");
        }
        break;
    default:
        break;
    }
    return 0;
}