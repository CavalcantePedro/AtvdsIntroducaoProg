#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float n1, n2, n3, n4, mp;

    printf("Digite a 1 nota \n");
    scanf("%f", &n1);
    
    printf("Digite a 2 nota \n");
    scanf("%f", &n2);
    
    printf("Digite a 3 nota \n");
    scanf("%f", &n3);
    
    printf("Digite a 4 nota \n");
    scanf("%f", &n4);

    mp = ((n1*1)+(n2*2)+(n3*3)+(n4*4))/10;

    printf("A sua media ponderada e : %.1f", mp);
    return 0;
}