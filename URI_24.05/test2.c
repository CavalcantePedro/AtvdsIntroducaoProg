#include <stdio.h>

int Potencia(int x, int y)
{
    int i;
    if(y == 0)
    {
        return 1;
    }
    else
    {
    return(x*Potencia(x,y-1));
    }
}

int main(){
    int casos, n ,m,i,cont=0,pot;

    scanf("%d",&casos);
    while (casos--)
    {
        scanf("%d %d", &n ,&m);
        cont =0;
        pot = Potencia(n,m);
        
        printf("Pot antes do while =%d\n", pot);

        while (pot > 0)
        {
            printf("Pot no while antes da div =%d\n", pot);
            cont++;
            pot = pot/10;
            printf("Pot no while dps da div = %d\n", pot);
        }
        printf("%d\n", cont);
    }
    

}
