#include <stdio.h>
#include <math.h>

int ResolveEquacao2Grau(float a, float b, float c, float *x1, float *x2)
{
    float delta;
    delta = (b*b) - (4*c*a); 
    *x1 = (-b + sqrt(delta)) / (2*a);
    *x2 = (-b - sqrt(delta)) / (2*a);
    
    if(a == 0)
    {
        return -1;
    }
    else if (delta == 0)
    {
        return -2;
    }
    else
    {
        return 0;
    } 
}

int main(){   
    int result;
    float a, b, c;
    float rz1 ,rz2;

    printf("Digite os valores dos coeficientes a, b e c respectivamente:\n");
    scanf("%f%f%f", &a, &b, &c);

    result = ResolveEquacao2Grau(a, b, c, &rz1, &rz2);
    
    if (result == 0)
    {
        printf("As raizes sao:\n%f \n%f", rz1,rz2);
    }
    else if (result == -1)
    {
        printf("Nao e uma equacao do segundo grau");
    }
    else if (result == -2)
    {
        printf("Nao possue raizes reais");
    }
    
    
    return 0;
}