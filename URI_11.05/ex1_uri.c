#include <stdio.h>

int  FRafael(int a, int b){
    int result;
    result = ((3*a)*(3*a))+(b * b);
    return result;
}
int FBeto(int a, int b){
    int result;
    result = (2*(a*a))+((5*b)*(5*b));
    return result;
}
int FCarlos(int a, int b){
    int result;
    result = (-100*a)+(b*b*b);
    return result;
}

int main(){
    int cont, a, b, rafa, beto, carlos;
    scanf("%d", &cont);
    while (cont > 0)
    {
        cont--;
        scanf("%d%d", &a, &b);
        rafa = FRafael(a,b);
        beto = FBeto(a,b);
        carlos = FCarlos(a,b);
        if(rafa > beto && rafa > carlos){
            printf("Rafael ganhou\n");
        }
        else if (beto > rafa && beto > carlos){
            printf("Beto ganhou\n");
        }
        else{
            printf("Carlos ganhou\n");
        }  
    }
    return 0;
}