#include <stdio.h>
#include <string.h>

int main(void)
{
    int n, i,j, rep = 0;
    scanf("%d%*c", &n);
    char pomekons[1000][1000],rp[1000];
    for (i = 0; i < n; i++)
    {
        scanf("%s", pomekons[i]);
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if (strcmp(pomekons[i],pomekons[j])== 0)
            {
                rep++;
            }
        }

    }

    printf("Falta(m) %d pomekon(s).\n", 151-(n-rep));
        
    return 0;
}