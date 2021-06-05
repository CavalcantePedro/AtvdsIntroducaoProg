#include <stdio.h>

unsigned long long int QuantGraos(unsigned short casas)
{
    int i;
    unsigned long long int graos = 1;
    for  (i = 0; i <casas; i++)
    {
        graos = graos* 2;
    }
    graos = graos/12;
    graos = graos/1000;
    return graos;
}


int main()
{
    int casos, casas;
    unsigned long long int graos;
    scanf("%d", &casos);
    while (casos > 0)
    {
        scanf("%d", &casas);
        graos = QuantGraos(casas);
        printf("%llu kg\n", graos);
        casos--;
    }
    return 0;
    
}