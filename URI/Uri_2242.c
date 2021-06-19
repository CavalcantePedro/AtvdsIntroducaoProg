#include <stdio.h>

#define TAM_MAX 55

int main(void)
{
    int i, j = 0,k;
    char risada[TAM_MAX],vogais[TAM_MAX];
    scanf("%s", risada);
    for (i = 0; i < strlen(risada); i++)
    {
        if (risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' ||risada[i] == 'o' || risada[i] == 'u')
        {
            vogais[j] = risada[i];
            j++;
        }
    }
    vogais[j] = '\0';
    for (i = 0; i < strlen(vogais); i++)
    {
        if (vogais[i] != vogais[(strlen(vogais)-1)-i])
        {
            printf("N\n");
            return 0;
        }
    }
    printf("S\n");
    return 0;
}