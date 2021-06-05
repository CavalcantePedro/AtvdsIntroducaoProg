#include <stdio.h>
 
unsigned long long Fib(int a)                            
{   
    if (a == 0){
        return 0; 
    }                                      
    if (a == 1){
        return 1; 
    }                  
    else{                                    
        if (a == 2){
            return 1;                 
        }
        else{
            return Fib(a-1) + Fib(a-2);  
        }
    }
}                                         
 
int main(void)
{
   int cont, vlr;
   unsigned long long fib =0;
   scanf("%d", &cont);
   while (cont--)
   {
      scanf("%d", &vlr);
      fib = Fib(vlr);
      printf("Fib (%d) = %llu\n",vlr,fib);  
   }
   
   
   return 0;
}

