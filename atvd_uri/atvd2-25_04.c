#include <stdio.h>

int main()
{
    int cont, playerOne, playerTwo, pointsPone = 0, pointsPtwo = 0;
    scanf("%d", &cont);
    while (cont !=0)
    {
        while (cont > 0)
        {
            scanf("%d %d", &playerOne, &playerTwo);
            if(playerOne > playerTwo) pointsPone++;
            else if (playerTwo > playerOne) pointsPtwo++;
            cont--; 
            playerOne = playerTwo = 0;
        }
        printf("%d %d\n", pointsPone, pointsPtwo);
        pointsPone = pointsPtwo = 0;
        scanf("%d", &cont);
    }
    return 0;
}