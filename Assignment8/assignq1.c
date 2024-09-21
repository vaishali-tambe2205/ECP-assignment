

#include<stdio.h>

typedef struct student{
int rollno;
char name[20];
int std;
float marks;
}struct_t;


int main(void)
{
  struct_t s;
  struct_t *ptr= NULL;

   printf("enter student information (s.rollno,s.name,s.std,s.marks):\n");
   scanf("%d%s%d%f",&s.rollno,s.name,&s.std,&s.marks);

  printf("rollno=%d\nname=%s\nstd=%d\nmarks=%f\n",s.rollno,s.name,s.std,s.marks);

  ptr = &s;

  printf("info:%d%s%d%f\n",ptr->rollno,ptr->name,ptr->std,ptr->marks);

  printf("ptr=%u\n",ptr);

  printf("ptr+1=%u\n",ptr+1);

 return 0;
} 


