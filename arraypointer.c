#include<stdio.h>
int main()
{
       int i,j,k ,row ,coloumn,sum=0;
       int *ptr, *m;
       int array [2][3][4] = { {{1,2,3,4},{5,6,7,8},{9,10,11,12}},{{14,15,16,17},{18,19,20,21},{22,23,24,25,}}};
       int (*p)[3][4]; // pointer to a group of 3d array
       p=array;
       for(i=0; i<= 2; i++)
       {
           ptr = p + i;
           for(row=0; row < 3; row++)
           {
               ptr= ptr + row;
               for (coloumn = 0; coloumn<4;coloumn++)
               {
                   printf("\n the value is %d",*(ptr + coloumn));
               }
           }
       }
         printf("\nplease enter number of rows and columns:");
         scanf("%d%d",&j,&k );
         printf("\nPlease enter the matrix elements\n");
         for(row = 0; row < 3 ;row++)
         {
             for (coloumn = 0; coloumn <4 ; coloumn++)
                {

                    scanf("%d",&array[row][coloumn]);
                }
         }
         for(row = 0; row < j;row++)
         {
             sum = sum + array[row][coloumn];
         }
        printf("\n the sum of diagonal elements of a matrix = %d",sum);
    }
