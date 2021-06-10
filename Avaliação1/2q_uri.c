#include <stdio.h>

int main()
{
    int cont=0;
    int entrada=0;
    int valor1=0;
    int valor2=0;
    int razaoPaInicial =0;
    int razaoPgInicial =0;    
    int checRazaoPa =0;
    int checRazaoPg =0;

    scanf("%d", &entrada);
    
    while (entrada > 0) // corpo do laço será executado enquanto a variável entrada for maior que zero
    {
        cont++;//conto quantas vezes o laço irá rodar, essa quantidade vai ser igual ao numero de elementos na progressao 
        if(cont % 2 != 0)
        {
            valor1= entrada;
        } 
        else
        {
            valor2 = entrada;
        }
        
        if (cont == 2) 
        {
            if (valor1 > valor2)
            {
                razaoPaInicial = valor1 - valor2;
                razaoPgInicial = valor2/valor1;
                checRazaoPg = 1;
            }
            else
            {   
                razaoPaInicial = valor2 - valor1;
                razaoPgInicial = valor2/valor1;
            }
            
        }
        /*if (cont > 3)
        {   
            if(cont % 2 == 0)
            {
                if (valor2-valor1 != razaoPaInicial)
                {
                    checRazaoPa=1;
                }
                if (valor2/valor1 != razaoPgInicial)
                {
                    checRazaoPg=1;
                }
            }
            else
            {
                if (valor1-valor2 != razaoPaInicial)
                {
                    checRazaoPa=1;
                }
                if (valor1/valor2 != razaoPgInicial)
                {
                    checRazaoPg=1;
                }
            }
        }*/
        scanf("%d", &entrada);
    }

    if(cont %2 == 0)
    {
        if (razaoPaInicial == valor2-valor1 /*&& checRazaoPa ==0*/)
        {
            printf("PA com %d termos e razao %d.\n", cont,razaoPaInicial);
        }
        if(razaoPgInicial == valor2/valor1 /* && checRazaoPg ==0*/)
        {
            printf("PG com %d termos e razao %d.\n", cont,razaoPgInicial);
        }
        if ((razaoPaInicial != valor2-valor1) && (razaoPgInicial != valor2/valor1))
        {
            printf("Sequencia vom %d termos.\n", cont);
        }
        
    }
    else
    {
       if (razaoPaInicial == valor1-valor2 /*&& checRazaoPa ==0*/)
        {
            printf("PA com %d termos e razao %d.\n", cont,razaoPaInicial);
        }
        if(razaoPgInicial == valor1/valor2 /*&& checRazaoPg ==0*/)
        {
            printf("PG com %d termos e razao %d.\n", cont,razaoPgInicial);
        }
        if ((razaoPaInicial != valor1-valor2) && (razaoPgInicial != valor1/valor2))
        {
            printf("Sequencia vom %d termos.\n", cont);
        }
    }
    return 0;
}