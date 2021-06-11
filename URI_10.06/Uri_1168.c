#include <stdio.h>
#include <string.h>

int QuantLeds(const char *str)
{
    int i,total = 0;
    for (i = 0; i < strlen(str); i++)
    {
        if(str[i]=='1')
        {
            total += 2;
        }
        else if (str[i] == '2')
        {
            total += 5; 
        }
        else if (str[i] == '3')
        {
            total += 5;
        }
        else if (str[i] == '4')
        {
            total += 4;
        }
        else if (str[i] == '5')
        {
            total +=  5;
        }
        else if (str[i] == '6')
        {
            total += 6;
        }
        else if (str[i] == '7')
        {
            total += 3;
        }
        else if (str[i] == '8')
        {
            total += 7;
        }
        else if (str[i] == '9')
        {
            total += 6;
        }
        else if (str[i] == '0')
        {
            total += 6;
        }
    }
    return total;

}

int main(void)
{
    unsigned int casos, leds =0;
    scanf("%d", &casos);
    char str[102];
    
    while (casos--)
    {
        scanf("%s", str);
        leds = QuantLeds(str);
        printf("%d leds\n", leds);
    }
    

    return 0;
}