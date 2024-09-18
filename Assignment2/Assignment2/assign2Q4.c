/*Write a program to find maximum of two numbers using
a. If – else
b. conditional operator.
*/

#include <stdio.h>
int main()
{
  int num1,num2;
     printf("enter the number :");
     scanf("%d%d", &num1,  &num2);
     if (num1>num2)
    {     
         printf("maximum number is =%d \n",num1);
    } 
      else
    {
        printf("maximum number is =%d \n", num2);
    } 
        printf("\n");



		int a,b, max;
		printf("enter two number:");
		scanf("%d%d", &a, &b);
		max=(a>b)?a:b;
		printf("maximum number=%d\n",max);

       return 0;       
 } 


