#include<stdio.h>
#include<stdlib.h>
 int main()
{
    FILE *f1,*f2;
    char ch;
    f1 = fopen("abc.txt","r");
    f2 = fopen("xyz.txt", "w");
    while((ch = getc(f1)) != EOF)
        putc(ch, f2);
    fclose(f1);
    fclose(f2);

}


