#include <stdio.h>
int main() {
    int i, cont, num1 = 0, num2 = 1;
    int proxNum = num1 + num2;
    scanf("%d", &cont);
    printf("%d %d ", num1, num2);
    for (i = 0; i <= cont-3; ++i) {
        if(i == cont-3)
        {
            printf("%d\n", proxNum);
        }
        else printf("%d ", proxNum);
        num1 = num2;
        num2 = proxNum;
        proxNum = num1 + num2;
    }

    return 0;
}