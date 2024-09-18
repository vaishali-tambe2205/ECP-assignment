/*Write a program to accept two numbers and display division of the two numbers. Check for
divide by zero error. If divider is zero then display appropriate error message.
*/


#include <stdio.h>
int main()
{
int num1,num2;
printf("enter the number \n");
scanf("%d%d", &num1, &num2);
if (num2==0)
{
printf("error: division by zero not allowed \n");
}
else
{
printf(" division is =%d \n", num1/num2);
}
return 0;
}
