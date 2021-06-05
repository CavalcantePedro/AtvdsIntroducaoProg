#include <stdio.h>

int main()
{
    int entrada=0;
    int contador=0;
    int valor1=0, valor2=0;
    int razaoPA1=0;
    int checadorRzPa=0;
    int decrescente=0;
    scanf("%d", &entrada);
    while (entrada > 0)
    {
        contador++;
        if (contador % 2 !=0)// se contador for impar
        {
            valor1 = entrada;
        }
        else // se contador for par
        {
            valor2 = entrada;
        }
        if(contador == 2)// se ja foi lido dois valores
        {
            if (valor1 > valor2)//checa se é decrescente
            {
                razaoPA1 = valor1 - valor2;
                decrescente =1;
            }
            else//se for crescente
            {
                razaoPA1 = valor2 - valor1;
            }
        }
        if(contador >3)
        {
            if(contador %2 ==0) // se o contador for par
            {
                if(decrescente = 1)// verifica se a razão encontrada inicialmente prevalece no decorrer da PA
                {
                    if (valor2-valor1 != razaoPA1)
                    {
                        checadorRzPa = 1;
                    }
                }
                else
                {
                    if (valor1-valor2 != razaoPA1)
                    {
                        checadorRzPa = 1;
                    } 
                }
            }
            else//se o contador for impar
            {
                if(decrescente = 1)// verifica se a razão encontrada inicialmente prevalece no decorrer da PA
                {
                    if (valor1-valor2 != razaoPA1)
                    {
                        checadorRzPa = 1;
                    }
                }
                else
                {
                    if (valor2-valor1 != razaoPA1)
                    {
                        checadorRzPa = 1;
                    } 
                }
                {   
                    checadorRzPa = 1;
                }  
            }
        }
        scanf("%d", &entrada);
    }

    if(checadorRzPa ==0)
    {
        printf("PA com %d termos e razao %d.\n", contador, razaoPA1);
    }
    if(checadorRzPa ==1)
    {
        printf("Sequencia com %d termos.\n", contador);
    }
    return 0;
}