#include <stdio.h>

int main()
{
    int cont, mary = 0, john = 0, check = 0;
    scanf("%d", &cont);
    while (cont != 0)
    {
        while (cont > 0)
        {
            scanf("%d", &check);
            if(check == 0) mary++;
            else if(check == 1) john++;
            cont--;
        }
        printf("Mary won %d times and John won %d times\n", mary , john);
        mary = 0, john = 0;
        scanf("%d", &cont);
    }
    return 0;
}