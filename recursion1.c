#include<stdio.h>
#include<stdlib.h>
int add(int,int);
int main()
{
int a,b,sum;
printf("enter two numbers:");
scanf("%d%d',&x,&y);
sum = add(a,b);
printf("sum of two numbers is :%d\n", sum);
return 0;
}
int add(int x,int y 0
{
if (y==0)
return x;
else
return (1 + add(x,y -1) );
}
