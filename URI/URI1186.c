#include <stdio.h>

int main()
{
    char op;
    double arr[12][12], soma =0;
    int i,j;
    scanf("%c",&op);
    for (i = 0; i < 12; i++)
    {
        for ( j = 0; j < 12; j++)
        {
            scanf("%lf",&arr[i][j]);
        }
    }
   
    for (i = 0; i < 12; i++)
    {
        for (j =1+i; j < 12; j++)
        {
            soma += arr[i][j];
        }
            
    }
        
    if (op == 'S')
    {
        printf(".1%lf\n", soma);
    }
    else if (op == 'M')
    {
        printf(".1%lf", soma/66);
    }
    
    return 0;
}