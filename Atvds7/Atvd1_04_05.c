#include <stdio.h>
#include <math.h>

float Delta(float a, float b, float c){
    float delta;
    delta = (b*b) - (4*a*c);
    return delta;     
}

float RaizX1(float a, float b, float delta){
    float rz1;
    rz1= (-b + sqrt(delta))/2*a;
    return rz1;
}

float RaizX2(float a, float b, float delta){
    float rz2;
    rz2= (-b - sqrt(delta))/2*a;
    return rz2;
}

int main()
{   
    float a, b, c , delta, rz1, rz2;
    scanf("%f%f%f", &a,&b,&c);  
    if (a == 0)
    {
        return 1;
    }
    delta= Delta(a,b,c);
    if (delta < 0)
    {
        return 2;
    }
    rz1= RaizX1(a,b,delta);
    rz2= RaizX2(a,b,delta);
    return 0;
}