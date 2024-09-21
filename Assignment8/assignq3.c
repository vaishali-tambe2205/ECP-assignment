
#include<stdio.h>

typedef struct student{
  int rollno;
  char name[20];
  float salary;
}stud_t;



void accept_student(stud_t *ptr);
void print_student(stud_t s);

int main (void)
{

   stud_t s;
 
 accept_student(&s);
 print_student(s);

 return 0;
}

 void accept_student(stud_t *ptr)
{
 printf("enter student information(s.rollno,s.name,s.marks):");
 scanf("%d%s%f", &ptr -> rollno,ptr -> name, &ptr -> marks);
}
 void print_student(stud_t s)
{
 printf("%d%s%f\n",s.rollno,s.name, s.marks);
} 


 
