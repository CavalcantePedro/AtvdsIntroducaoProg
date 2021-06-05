#include <stdio.h>
#include <stdlib.h>

int main()
{
    float alt, comp, rend, lt, metragem, latas;/*Variaveis pra armazenar tds os valores*/
    
    printf("Qual a altura,em metros, da parede que deseja pintar ?");
    scanf("%f", &alt);/*Armazeno a altura*/
    printf("Qual o comprimento, em metros, da parede que deseja pintar ?");
    scanf("%f", &comp);/*Armazeno o comp*/

    metragem = (alt * comp);/*Descobre quantos metros quadrados tem a parede*/
    
    printf("Qual o rendimento da tinta por m^2/l ?");
    scanf("%f", &rend);/*Pego o rendimento da tinta*/
    printf("Quantos litros tem o balde de tinta ?");
    scanf("%f", &lt);/*Pego a litragem da lata*/

    latas = (metragem / (lt*rend));/*Descupbro quantas latas são necessarias*/
    printf("A quantidade de latas necessarias para pintar sua parede e: %.1f", latas);/*imprimo o valor de latas necessarias*/

    return 0;
}