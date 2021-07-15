#include <stdio.h>
#include <string.h>

void GeraEmail(const char *nome, char *email){

    //comecei criando duas variáveis do tipo inteiro
    int i, cont=0;
    //Crio uma string pré definida pra completar a string email
    char complemento[] = "@academico.ufpb.br";
    //digo que o primeiro elemento da string email é igual ao primeiro da string nome
    email[0] = nome[0];
    //For criado para identificar os espaços na string nome e a armazenar na string email o elemento da string nome que vem após o espaço
    for(i = 0; i < strlen(nome); i++)
    {
        if(nome[i] == ' ')
        {
            //variável cont é utilizada para armazenar as inicias na string email
            cont++;
            email[cont] = nome[i+1];
        }
    }
    //como cont termina sendo equivalenta ao numero do ultimo elemento armazendo na string, realizo a soma para não alterar esse elemento no for a seguir 
    cont++;
    //for utilizado para completar o email passando copiando os elementos da string complento para a string email
    for (i = 0; i <= strlen(complemento); i++)
    {
        email[cont] = complemento[i];
        //cont utilizado aqui para ir copiando para email elemento por elemento
        cont++;        
    }
    
}

int main(void){
    char nome[101], email[101];

    fgets(nome, 101, stdin);
    GeraEmail(nome, email);
    puts(email);

    return 0;
}
