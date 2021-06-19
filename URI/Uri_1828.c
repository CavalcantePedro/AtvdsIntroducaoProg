#include <stdio.h>
#include <string.h>

int QuemGanhou(const char *str1, const char *str2)
{
    //0 emp 1 sheldon 2 Raj
    int result;
    if(strcmp(str1,str2)==0)
    {
        result = 0;
    }
    else if (strcmp(str1, "Spock") == 0 && strcmp(str2, "pedra") == 0)
    {
        result = 1;
    }
    else if (strcmp(str1, "Spock") == 0 && strcmp(str2, "tesoura") == 0)
    {
        result = 1;
    }
    else if (strcmp(str1, "tesoura") == 0 && strcmp(str2, "lagarto") == 0)
    {
        result = 1;
    }
    else if (strcmp(str1, "tesoura") == 0 && strcmp(str2, "papel") == 0)
    {
        result = 1;
    }
    else if (strcmp(str1, "lagarto") == 0 && strcmp(str2, "Spock") == 0)
    {
        result = 1;
    }
    else if (strcmp(str1, "lagarto") == 0 && strcmp(str2, "papel") == 0)
    {
        result = 1;
    }
    else if (strcmp(str1, "papel") == 00 && strcmp(str2, "Spock") == 0)
    {
        result = 1;
    }
    else if (strcmp(str1, "papel") == 0 && strcmp(str2, "pedra") == 0)
    {
        result = 1;
    }
    else if (strcmp(str1, "pedra") == 0 && strcmp(str2, "lagarto") == 0)
    {
        result = 1;
    }
    
    else if (strcmp(str1, "pedra") == 0 && strcmp(str2, "tesoura") == 0)
    {
        result = 1;
    }
    else
    {
        result = 2;
    }

    return result;
}

int main(void)
{
    int casos, resul,cont=0;
    scanf("%d", &casos);
    char raj[8];
    char sheldon[8];
    
    while (casos--)
    {   
        cont++;
        scanf("%s%s", sheldon, raj);
        resul = QuemGanhou(sheldon,raj);
        if (resul == 0)
        {
            printf("Caso #%d: De novo!\n", cont);
        }
        else if (resul == 1)
        {
            printf("Caso #%d: Bazinga!\n", cont);
        }
        else 
        {
            printf("Caso #%d: Raj trapaceou!\n", cont);
        }
    }
        
    return 0;
}