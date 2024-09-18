//Write a program to accept three integer numbers and find its average.

#include <stdio.h>
int main()

{
int a,b,c, sum , avg;
printf("enter the value:");
scanf("%d%d%d", &a ,&b, &c);
sum = a+b+c;
printf("sum of three number=%d \n",sum);
avg= sum/3;
printf("average of sum =%d \n",avg);


return 0;

}
