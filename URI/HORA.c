#include <stdio.h>

int main()
{
    int mI,hI,mF,hF,hora,minutos;
    scanf("%d %d %d %d",&hI, &mI, &hF, &mF);
    hora = hF-hI;
    minutos = mF-mI;
    printf("Minutos = %d\n Hora = %d\n", minutos, hora);
    if(hora < 0)
    {
        hora = 24 + (hF -hI);
    }
        if(minutos < 0)
    {
        minutos = 60 + (mF - mI);
        hora--;
    }
    

    

    if(hI == hF && mI == mF)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else if (hI == hF  && mI > mF)
    {
        printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)\n", minutos);
    }
    else
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora,minutos);
    }

    return 0;
}