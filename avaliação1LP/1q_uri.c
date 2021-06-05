#include <stdio.h>

int main()
{
    int a, b; /*declaro duas variáveis, a e b, do tipo primitivo int*/
    scanf("%d%d", &a, &b); /*armazeno os valores inseridos na variável*/ 
    if (a > b) /*Checo se a é maior que b*/
    {
        if (a % 2 == 0)/*se a for maior que b,checo se o resto da divisão de a por dois é igual a zero*/
        {
           printf("A eh maior e PAR.\n");/*Se o resto for zero quer dizer que a é um número par, então imprimo isso na tela*/
        }
        else printf("A eh maior e IMPAR.\n");/*Se não, a é um número impar, então imprimo isso na tela*/
        
    }
    else if (a == b)/*se e apenas se a primeira condição nao for verdadeira checo se a é igual a b*/
    {
        printf("A e B sao iguais.\n");/*Se forem iguais imprimo isso na tela*/
    }
    else /*se ambas as condições não forem aceitas o programa executará esse else*/
    {
        if (b % 2 == 0)/*Aqui verifico se a variável b é par da mesma forma que verifico a variável a no if*/
        {
           printf("B eh maior e PAR.\n");/*se b for par, imprimo isso*/
        }
        else printf("B eh maior e IMPAR.\n");/*Caso b não seja par, imrpimo isso*/
    }
    return 0;
}