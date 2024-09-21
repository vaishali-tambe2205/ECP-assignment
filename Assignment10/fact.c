#include<stdio.h>

int factorial (int num)
{

   int  fact=1;

   for(int i=1; i<num; i++)

   fact *= i;

   return fact;
}

int main (void)
 
{
   int num;

   printf("enter the number:");

   scanf("%d",&num);

   int fact = factorial(num);
   
   printf("%d! = %d \n", num,fact );

   return 0;
 }  


   
