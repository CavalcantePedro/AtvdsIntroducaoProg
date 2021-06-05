#include <stdio.h>
#include<stdlib.h>

int main ()
{   
    float nota1, nota2, nota3; /*Variaveis para armazernar as notas*/
    float media;/*Variael pra armazenar a media*/

    puts("Insira a sua nota 1:"); 
    scanf("%f", &nota1); 
    puts("Insira a sua nota 2:");
    scanf("%f", &nota2);
    puts("Insira a sua nota 3:");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3; /*Realiza a media aritimetica dos 3 valores passados*/

    printf("%.1f", media);

    return 0;
}