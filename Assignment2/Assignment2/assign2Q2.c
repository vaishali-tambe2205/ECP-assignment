//Write a program to accept number and check whether the number is +ve, -ve and zero.

#include<stdio.h>
int main()
{

int num;
printf("enter the number:");
scanf("%d",&num);
if (num > 0)
{
printf(" %d is positive \n",num);
}
else if(num < 0 )
{ 
printf("%d is negative \n",num);
}
else 
{
printf("%d is zero \n",num);

}

return 0;
}
