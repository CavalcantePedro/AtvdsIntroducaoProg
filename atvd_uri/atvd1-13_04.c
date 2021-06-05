#include <stdio.h>
 
int main() {
    int i =0;
    while (i != 2002)
    {
        scanf("%d", & i);
        if (i != 2002) printf("Senha Invalida\n");
    }
    printf("Acesso Permitido\n");   
    return 0;
}