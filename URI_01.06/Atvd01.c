#include <stdio.h>

int main()
{
    unsigned short int linha, i,j;
    char operacao; 
    double arr[12][12], soma = 0;

    scanf("%d%*c", &linha);
    scanf("%c", &operacao);

    for (i = 0; i < 12; i++){
        for (j = 0; j < 12; j++){
            scanf("%lf", &arr[i][j]);
        }
    }

    for (j = 0; j < 12; j++)
    {
        soma += arr[linha][j];
    }
    
    if(operacao == 'S'){
        printf("%.1lf\n", soma);
    }
    else{
        printf("%.1lf\n", soma/12);
    }
    
    return 0;
}