//Write a program to accept an integer value and print its table.

#include <stdio.h>
int main()
{


int a ,sum;
printf("enter the value\n");
scanf("%d",&a);


for (int i=1; i<=10; i++)
{
sum=a*i;

printf("%d X %d = %d \n",a,i,sum);
}
return 0;
}
