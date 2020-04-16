#include<stdio.h>
#include<stdlib.h>
int lcm(int,int)
int main()
{
   inta,b,result;
   int prime[100];
   printf ("enter two numbers:");
   scanf("%d%d", &a,&b);
   result = lcm (a, b);
   printf('lcm of %d and %d is %d\n", a,b, result );
   return 0;
   }
   int lcm(int a, int b)
   {
     static int common = 1;
     if (common %a == 0 && common %b == 0)
     {
     return common;
    }
    common++ ;
    lcm(a, b);
    return common ;
    }
     
   
