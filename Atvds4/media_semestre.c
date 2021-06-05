#include <stdlib.h>
#include <stdio.h>


int main()
{
    float notas [6], medias [3], mdf;
    
    for (int i = 0; i <= 5; i++)
    {
        printf("Digite a sua %d nota: \n", i+1);
        scanf("%f", & notas[i]);
    }
     
   for (int i = 0; i <= 2; i++)
   {
        int c;
        if (notas[0 + c] > notas[1 + c])
        {
            medias [i] = ((notas[0 +c]*6)+(notas[1 + c]*4))/10;
        }
        else
        {
            medias[i] = ((notas[1 + c]*6)+(notas[0 + c]*4))/10;
        }
        c += 2;
   }

    mdf = (medias[0]+medias[1]+medias[2])/3;

    printf("\nA nota da sua primeira unidade foi: %.1f\n", medias[0]);
    printf("A nota da sua segunda unidade foi: %.1f\n", medias[1]);
    printf("A nota da sua terceira unidade foi: %.1f\n", medias[2]);
    
   if (mdf >= 9 )
   {
        printf("Seu conceito foi : A");
        printf("A media do seu semestre foi: %.1f", mdf);
   }
   else if (mdf >= 8 && mdf < 9)
   {
        printf("Seu conceito foi : B\n");
        printf("A media do seu semestre foi: %.1f", mdf);
   }
   else if (mdf >= 7 && mdf< 8)
   {
        printf("Seu conceito foi : C\n");
        printf("A media do seu semestre foi: %.1f", mdf);
   }
   else if (mdf >= 6 && mdf< 7)
   {
        printf("Seu conceito foi : D\n");
        printf("A media do seu semestre foi: %.1f", mdf);
   }
   else if (mdf >= 5 && mdf< 6)
   {
        printf("Seu conceito foi : E\n");
        printf("A media do seu semestre foi: %.1f", mdf);
   }
   else
   {
        printf("Seu conceito foi : F\n");
        printf("A media do seu semestre foi: %.1f", mdf);
   }
   
    return 0;
}