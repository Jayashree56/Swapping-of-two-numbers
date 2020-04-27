 #include<stdio.h>
#include<errno.h>
#include<stdlib.h>
long count_characters(FILE*);
 void main(int argc, char * argv[])
{
    
    int i;
     long cnt;
     char ch, ch1 ;
     FILE *f1, *f2;
     if (f1 = fopen(argv[1],"r") )
     {
         
         printf(" the file has been opened ....\n");
         f2 = fopen(argv[2], "w");
         cnt = count_characters(fp1);
         fseek(f1, -1L,2);
         printf("Number of characters to be copied %d\n",ftell(fp1));
         while (cnt)
         {
             ch = fgetc(f1);
             fputc(ch, f2);
             fseek(f1,-2L,1);
             cnt--;
         }
         printf("\n**file copied successfully in reverse order**\n");
         
     }
      else
      {
          perror("error occurred\n");
      }
   fclose(f1);
   fclose(f2);
  
}


