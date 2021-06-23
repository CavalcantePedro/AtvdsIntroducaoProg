#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>

#define MAX_DESCRICAO 51

typedef struct {
    char descricao[MAX_DESCRICAO];
    float valor;
    int x;
    int y;
    }tRegistro;

void ApresentaMensagem() {
    printf("Ola, esse programa ...\n");
}

void ApresentaMenu() {
    printf("\n\n*** Opcoes *** \n"
                "\n1 - Cadastra"
                "\n2 - Imprime"
                "\n3 - Distancia a partir de um ponto"
                "\n5 - Sair\n");
}

tRegistro * CadastroRegistro(tRegistro *reg) {
    //ler do usuario e preencher, use prompts e scanf e preencha a estrutura no parametro
    puts("Digite o tesouro:");
    scanf("%s", &reg->descricao);
   
    puts("Digite o valor:");
    scanf("%f", &reg->valor);
   
    puts("Digite as coordenadas de X e Y, respectivamente:");
    scanf("%d %d", &reg->x, &reg->y);

    return reg;
}

void ImprimeRegistro(const tRegistro *reg) {
    //mostrar as informacoes do registro do parametro de forma organizada
    printf("Descicao: %s\n", reg->descricao);
    printf("Valor: %.2f\n", reg->valor);
    printf("Coordenadas X e Y: [%d,%d]\n", reg->x , reg->y);
}

float Distancia(tRegistro reg, int x, int y){
	//funcao q retorna a distancia da coordenada dos parametros ate a coordenada do registro
    float dist;
    dist = ((reg.x - x)*(reg.x - x))+((reg.y - y)*(reg.y - y));
    dist = sqrt(dist);
    return dist;
}

int main(void)
{
    tRegistro reg; //guarda o registro
    int opcao, x ,y;
    ApresentaMensagem();

    while(1){
        ApresentaMenu();
        scanf("%d", &opcao);

        if (opcao == 5){
            break;
        }


        switch(opcao){
            case 1:
                CadastroRegistro(&reg);
                break;
            case 2:
                ImprimeRegistro(&reg);
                break;
            case 3:
                puts("Digite a coordenada [x,y] para saber a distancia do ponto digitado ao ponto onde esta o tesouro:");
                scanf("%d %d", &x ,&y);
                printf("A distacia e: %.2f", Distancia(reg,x,y));
                break;
            default:
                puts("Opcao Invalida\n");
                break;
        }
    }

    puts("Adeus");
    return 0;
}