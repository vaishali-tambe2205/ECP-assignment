/* declare structure to store data for student information. The structure contains roll number,
name, marks for students. Write a program to accept information of student from user and print
the same.
*/


#include <stdio.h>


typedef struct students {
int rollno;
char name[20];
float marks;
}stud_t;

int main (void)
{
stud_t s;

 printf("enter the student information:(rollno,name,mark):");
 scanf("%d %*c%s %f",&s.rollno,s.name,&s.marks);
 printf("rollno=%d\n name=%s marks=%f",s.rollno,s.name,s.marks);

  return 0;
 }
