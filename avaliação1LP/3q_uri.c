#include <stdio.h>

int main()
{
    int menor;
    int maior;
    int i;
    int num;
    int contador;
    /*
    Fiz a declaração dessas variáveis para as seguintes coisas:
    int menor -> para armazenar o menor valor inserido
    int maior -> para armazenar o maior valor inserido
    int i -> para conseguir fazer a permuta entre os  valores das variaves caso o ma valor inseriso seja armazenado na variável maior
    int num -> para armazenar o valor inserido que irá determinar se o programa vai imprimir os valores pares ou impares do intervalo entre o menor e o maior valor
    int conntador -> utilizado para se localizar entre o intervalo e assim fazer as impessoes corretas
    */
    scanf("%d", &menor); /*Pega o primeiro valor inserido e armazena na variável "menor"*/
    scanf("%d", &maior);/*Pega o segundo valor inserido e armazena na variável "maior"*/
    scanf("%d", &num);/*Pega o teceiro valor inserido e armazena na variável "num"*/
    if (menor > maior)/*Checo se a variável "menor" ficou com o maior numero armazendo*/
    {
        /*Caso a condição acima ocorra, irei fazer a permutação de valores entre as variáveis pra facilitar na leitur do código*/
        i = menor;
        menor = maior;
        maior = i;
    }
    contador = menor;/*atribuo ao contador o menor numero pois assim vou conseguir me localizar no intervalo entre as variáves*/
    if(menor == maior)/*Verifico se os valores inseridos são iguais*/
    {
        if (num % 2 == 0) /*veifico se a variavel num é par (se quando é dividida por 2 possui resto 0)*/
        {
            /*Caso a consição anterior for verdadeira irei checar mais uma condição*/
            if(menor %2 ==0)/*como os valores inseridos são iguais, o intervalo entre eles será ele mesmo, então verifico se a variavel "num" é par*/
            {
                printf("%d.\n",menor);/*se a variável for par imprimo ela ja com o ponto final e o pula linha*/
            }
            else
            {
                printf("Nada para exibir.\n", menor);/*caso a variável não for par exibo a seguinte saida, pois não vai ter nenhum numero par entre o intervalo fornecido*/
            }
            
        }
        else/*caso a variável não seja par ela é obrigatoriamente nula*/
        {
            if(menor %2 !=0)/*como os valores inseridos são iguais, o intervalo entre eles será ele mesmo, então verifico se a variavel "num" é impar*/
            {
                printf("%d.\n",menor);/*se a variável for impar imprimo ela ja com o ponto final e o pula linha*/
            }
            else
            {
                printf("Nada para exibir.\n", menor);/*caso a variável não seja impar exibo a seguinte saida, pois não vai ter nenhum numero impar entre o intervalo fornecido*/
            }
        }   
    }
    else/*entraremos nesse else caso a variáveis forem diferentes*/
    {
       while (menor <= maior)
        {   
            contador++;/*Realizo essa soma no contador pra conseguir acompanhar o intervalo*/
            if(num % 2 == 0)/*verifico se os valores impressos tem que ser par, caso não pulo direto pro else*/
            {
                if(menor %2 == 0)/*se o valor atual da variável for par irei imprimila, pois como tem "menor++" na ultima linha do corpo do laço, a variável "menor" irá assumir de um em um todos os volres do intervalo entre ela e a variável "maior"*/
                {
                    if(contador >= maior)/*Já que o contador ta acompanhando o intervalor, fica fácil saber quando imprimir cada coisa, se o contador for maior ou igual ao maior qr dizer que estamos no ultimo numero do intervalo*/
                    {
                        printf("%d.\n", menor);
                    }
                    else if (contador >= maior -2)/*caso a condição anterior não seja aceita iremos pra essa que vê se o contador é maior ou igual ao penultimo valor do intervalo, se sim imprimo o valo junto com "e"*/
                    {
                        printf("%d e ", menor);
                    }
                    else/*caso nenhuma das condições anteriores sejam aceitas apenas imprimo o valor menor par com a virgula*/
                    {
                        printf("%d, ",menor);
                    }
                    
                } 
            }
            else
            {
                /*o pgurama só ira aqui se os valores que tem que ser impressos sejam impares*/
                /*aqui foi ultilizado  mesma lógica que foi utilizada pra imprimir os valores pares*/
                if (menor %2 != 0)
                {

                   if(contador >= maior)
                    {
                        printf("%d.\n", menor);
                    }
                    else if (contador >= maior -2)
                    {
                        printf("%d e ", menor);
                    }
                    
                    else
                    {
                        printf("%d, ",menor);
                    }
                }   
            }  
            menor++;
        }
    }   
    return 0;
}