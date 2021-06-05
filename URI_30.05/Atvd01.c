#include <stdio.h>

double Cresciento(int p, float g)
{
    double crescimeto;
    crescimeto = (p*g)/100;
    return crescimeto;
}

int main()
{
    unsigned short casosTestes;
    int pa,pb, anos=0;
    float g1,g2;
    scanf("%d", &casosTestes);
    while (casosTestes > 0)
    {
        scanf("%d %d %f %f", &pa,&pb,&g1,&g2);  
        for(pa; pa <= pb; anos++)
        {
            pa += Cresciento(pa,g1);
            pb += Cresciento(pb,g2);
            if(anos > 100)
            {
                break;
            }
        }
        if (anos <= 100)
        {
            printf("%d anos.\n", anos);
            anos = 0;
        }
        else
        {
            printf("Mais de 1 seculo.\n");
            anos = 0;
        }
        
        casosTestes--;
    }
    
    return 0;    
} 