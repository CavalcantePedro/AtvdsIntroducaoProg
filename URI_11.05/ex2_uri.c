#include <stdio.h>

int ValorDoGolpe(int atq, int def, int bonus, int lvl)
{
    int vlrG;
    if(lvl % 2 ==0){
        vlrG = ((atq + def)/2) + bonus;
    }
    else{
        vlrG = (atq + def)/2;
    }
    return vlrG;
}

int main(){
    int cont, bonus, atq, def, lvl, dabriel, guarte;
    scanf("%d", &cont);
    while (cont--)
    {
        scanf("%d", &bonus);
        for (int i = 1; i <= 2; i++)
        {
            scanf("%d%d%d", &atq, &def, &lvl);
            if (i == 1)
            {
                dabriel = ValorDoGolpe(atq, def, bonus, lvl);
            }
            if(i ==2)
            {
                guarte = ValorDoGolpe(atq, def, bonus, lvl);
            }
        }
        if (guarte > dabriel)
        {
            printf("Guarte\n");
        }
        else if (guarte == dabriel)
        {
            printf("Empate\n");
        }
        else
        {
            printf("Dabriel\n");
        }
    }
    return 0;
}