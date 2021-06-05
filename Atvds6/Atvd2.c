#include <stdlib.h>
#include <stdio.h>

int main()
{
    for (int i = 0; i <= 1000; i++)
    {
      if (i %6 == 0)
      {
          if (i %10 == 4)
          {
              printf("%d\n",i);
          }   
      } 
    }
    return 0;
}