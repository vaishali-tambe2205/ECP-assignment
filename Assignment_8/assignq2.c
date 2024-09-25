
#include<stdio.h>

 typedef struct employee{
 int empid ;
 char name[20];
 float salary;

}struct_t;


int main (void)

{
 struct_t e;


 printf("enter the employee information(e.empid,e.name,e.salary");
 
 scanf("%d%s%f",&e.empid,e.name,&e.salary);

 printf("empid=%d\nname=%s\nsalary=%f\n",e.empid,e.name,e.salary);


 return 0;
}
