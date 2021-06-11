#include <stdio.h>
#include <string.h>

void LimparBuffer()
{
    int c;
    while (c = getchar() != '\n' && c != EOF); 
}

int QuantLetra(const char *str)
{
    int i,j,cont=0;
    char alfaStr[27] = "abcdefghijklmnopqrstuvwxyz\0";
    for ( i = 0; i < strlen(str) ; i++)
        {
            for ( j = 0; j < strlen(alfaStr); j++)
            {
                if (str[i] == alfaStr[j])
                {
                    cont++;
                    alfaStr[j] = '.';
                }
                
            } 
        }
    return cont;
}

int main(void)
{
    int casos, cont;
    scanf("%d", &casos);
    LimparBuffer();
    char str[1002];
    
    while (casos--)
    {   
        fgets(str,1002,stdin);

        cont = QuantLetra(str);

        if (cont == 26)
        {
            printf("frase completa\n");
        }
        else if (cont > 12)
        {
            printf("frase quase completa\n");
        }
        else
        {
            printf("frase mal elaborada\n");
        }  
    }
    
    return 0;
}