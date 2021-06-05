#include <stdio.h>

//Criando função que retorna um valor do tipo int.
int Soma(int a, int b){
    int soma = 0,aux;
    //Já que tenho que calcular a soma de todos os números presentes no intervalo entre o menor número até o maior número inserido
    //ciei o if pra se b for o maior numero eu trocar o valor armazenado em b pelo o valor armazenado em a.
    if (a > b){
        aux = a;
        a = b;
        b = aux;
    }
    do
    {
        soma +=a;// Somo o valor armazenado na variável soma com o valor armazenado na variável a
        a++;//adiciono um no valor armazenado na variável a
    } while (a <= b);//Repito isso até que a seja maior que b, com isso a variável soma vai armazenar a soma de todos 
    //os valores no intervalo [a,b].
    return soma;
}

int main(void){
    int a, b, soma;

    scanf("%d %d", &a, &b);
    soma = Soma(a,b);
    printf("%d\n", soma);

    return 0;
}