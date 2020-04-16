includestdio.h
int primeno(int,int);
int main(0
{
int num, check;
printf ("enter a number ");
scanf("%d' ' &num);
check = primeno(num,num/2);
if (check == 1)
{
 printf("%d is a prime number\n ", num);
 }
 else {
 printf("%d s not a prime number\n" ,num);
 }
 return 0;
 }
 int primeno(int num,int i)
 {
  if ( i ==1)
  { 
  return 1;
  }
  else
  {
    if (num % i == 0)
    {
    return 0;
    }
    else
    {
    return primeno(num, i- 1);
    }
    }
    }
    
  
