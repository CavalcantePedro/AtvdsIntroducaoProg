#include <stdio.h>

int main(void){
    int a, b, c;

/* a entrada de dados nao pode ser alterada */
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

/* esse printf nao pode ser alterado nem removido. */
    printf("\nOs valores lidos para a e b foram: %d e %d\n", a, b);

     c = a;
     a = b;
     b = c;

    printf("Saiu do for e o valor de a e %d", a);
    
/* esse printf nao pode ser alterado nem removido e nada pode ser alterado apos ele. */
    printf("\nOs novos valores de a e b sao: %d e %d\n", a, b);

    return 0;
}
