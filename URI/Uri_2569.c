#include <stdio.h>

int RealizarOperacao(int a, int b, char c)
{
    int result;
    if(c == '+')
    {
        result = a + b;
    }
    else if (c == 'x')
    {
        result= a * b;
    }
    
    if (result == 7)
    {
        return 0;
    }
    else
    {
        return result;
    }
    
}

int main(void)
{
    int a, b, result;
    char op;
    scanf("%d %c %d", &a, &op, &b);
    if(a == 7)
    {
        a =0;
    }
    else if (b == 7)
    {
        b =0;
    }
    result = RealizarOperacao(a,b,op);
    printf("%d\n", result);

    return 0;
}