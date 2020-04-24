#include<stdio.h>
#include<stdlib.h>
typedef struct{

              char name[20];
              int no;
              int salary;
              char deptname[20];
              } Employee;

int main()
{

    int i,n = 20;
    Employee employees[20];
    printf("enter %d Employee details\n \n",n);
    for (i =0; i<n;i++)
    {

        printf("Employee %d :- \n",i+1);
        printf("Name:");
        scanf("%s",empployees[i].name);
        printf("Number:");
        scanf("%d",&employees[i].no);
        printf("Salary:");
        scanf("%d",&employees[i].salary);
        printf("Department:");
        scanf("%s", employees[i].deptname);
        printf("\n");
    }
  printf("-------All Employees Detail----------- \n");
  for(i=0;i < n; i++)
  {
      printf("Name \t:");
      printf("%s\n", employees[i].name);
      printf("Number \t:");
      printf("%d \n", employees[i].no);
      printf("salary \t:");
      printf("%d \n",employees[i].salary);
      printf("Department \t:");
      printf("%s \n", employees[i].deptname);
      printf("\n");
  }
  return 0;
}
