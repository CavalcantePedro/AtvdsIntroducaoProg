#include <stdio.h>

unsigned short SomaPares(unsigned short arr[], unsigned short tam)
{
    unsigned short i, resul=0;
    for ( i = 0; i < tam/2; i++)
    {
        if (arr[i]> arr[i+2])
        {
         resul+= arr[i]-arr[i+2];
        }
        else
        {
            resul+= arr[i+2]-arr[i];
        }
    }
    return resul;
}

unsigned short MaiorElemento(unsigned short arr[],unsigned short tam)
{
    unsigned short int i,result;
    result = arr[0];
    for ( i = 0; i < tam; i++)
    {
        if (arr[i] > result)
        {
            result = arr[i];
        }
    }
    return result;
}

int main()
{
    unsigned short quantVirus,i,result,maior;

    
    while (scanf("%hu", &quantVirus) != EOF)
    {
        unsigned short arr[quantVirus];
        for (i = 0; i < quantVirus; i++)
        {
            scanf("%hu", &arr[i]);
        }
        result = SomaPares(arr,quantVirus);
        maior = MaiorElemento(arr,quantVirus);
        if (quantVirus %2 != 0)
        {
            printf("%hu\n", maior);
        }
        else
        {
            printf("%hu\n", result);
        }
        
        
    }
    
    
    return 0;
}