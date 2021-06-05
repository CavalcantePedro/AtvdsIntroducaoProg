#include <stdio.h>

int main()
{
    unsigned long long int patos;
    while (1)
    {
        scanf("%llu", &patos);
        if (patos == -1)
        {
            break;
        }

        if(patos == 0)
        {
            printf("%llu\n", patos); 
        }
        else
        {
            patos--;
            printf("%llu\n", patos);

        }
        
    }
    return 0;

}