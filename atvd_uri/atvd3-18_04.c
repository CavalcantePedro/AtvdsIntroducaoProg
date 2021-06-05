#include <stdio.h>

int main()
{
    int i, num, fat = 1;
    scanf("%d", & num);
    for (i = 1; i < num; i++)
    {
        fat = fat * (num-i);   
    }
    printf("%d\n", fat * num); 
    return 0;
}