#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main ()
{
    double soma;
    int num, razao, nat;
    char c;
    printf("Digite a (caso queira realizar uma prgressao aritimetica)");
    printf(" ou g(caso queira realizar uma prgressao geometrica)");
    scanf("%s", & c);
    printf("Digite o primeiro numero da progressao:\n");
    scanf("%d", & num);
    printf("Digite o numero da razao para a progressao:\n");
    scanf("%d", & razao);
    printf("Digite o numero que indica o numero de termos da progressao:\n");
    scanf("%d", & nat);
    if (c == 'a')
    { 
        printf("PA = ");
        for (size_t i = 0; i < nat; i++)
        {
            printf("%d ", num + (i*razao));
        }
        soma = (nat*(2*num+((nat-1)*razao))/2);
        printf("\nA soma dessa pogressao aritimetica e: %.0lf",soma);
       
    }
    if (c == 'g')
    {   
        printf("PG = ");
        for (size_t i = 0; i < nat; i++)
        {
            printf("%.0lf ", num*pow(razao, i));
        }
        if (razao < 1)
        {
            soma = (num*(1 -pow(razao,nat))/(1-razao));
        }
        else
        {
            soma =(num*(pow(razao,nat)-1)/(razao-1));
        }
        printf("\nA soma dessa pogressao geoetrica e: %.0lf",soma); 
    }
    return 0;
}