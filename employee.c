#include<stdio.h>
#include<conio.h>
struct details
{int empno;
 char departmentname[60];
 char name[20];
 float salary;
};

int main()
{
 struct details detail;
 printf("\nEnter empno:\n");
 scanf("%d",&detail.empno);
 printf("\nEnter departmentname:\n");
 gets(detail.departmentname);
 printf("\nEnter name:\n");
 gets(detail.name);
 printf("\nEnter Salary:\n");
 scanf("%f",&detail.salary);

 
 printf("\n\n\n\n");
 printf("empno of the Employee : %d \n",detail.empno);
 printf("departmentname of the Employee : %s \n",detail.departmentname);
 printf("name of the Employee : %s \n",detail.name);
 printf("Salary of the Employee : %f \n",detail.salary);


}
