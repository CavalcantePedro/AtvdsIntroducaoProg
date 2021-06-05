#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int palpite, correto, quant =0;

	srand(time(NULL));
	correto = rand() % 100;

	palpite = -1;
	while (palpite != correto) {
        do
        {   
            printf("Adivinhe o numero: ");
            scanf("%d", &palpite);
            quant++;
            printf("%d palpite foi ", quant);
            if (palpite > correto)
            {
                puts("alto!");
            }
            else if (palpite < correto)
            {
                puts("baixo!");
            }
        } while (quant<5);
        if (quant>=5)
        {
            printf("Voce atingiu o limite de palpites");
            return 1;
        }     
	}
    
    puts("Voce acertou!");
    printf("%d, foi sua quantidade de palpites", quant);
	return 0;
}
