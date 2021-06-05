#include <stdio.h>

int main(){
    unsigned short int nL, mC, i, j;
    scanf("%hu %hu", &nL, &mC);
    int arr[nL][mC];

    for ( i = 0; i < nL; i++)
    {
        for (j = 0; j < mC; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    
   for (i = 0; i < nL; i++)
    {
        for (j = 0; j < mC; j++)
        {
            if (arr[i][j] == 7 && j<=(mC-3) && i <=(nL-3))
            {
                if (arr[i][j+1] == 7 && arr[i][j+2] == 7)
                {
                    if (arr[i+2][j] == 7 && arr[i+2][j+1] == 7 && arr[i+2][j+2] == 7)
                    {
                        if (arr[i+1][j]==7 && arr[i+1][j+2] == 7 && arr[i+1][j+1] == 42)
                        {
                            printf("%hu %hu\n", i+2, j+2);
                            return 0;
                        }
                    }        
                }
            }
        }
    }
    
    printf("0 0\n");
    return 0;
}