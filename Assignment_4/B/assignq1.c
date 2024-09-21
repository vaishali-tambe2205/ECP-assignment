#include<stdio.h>

int Factorial(int num)
{
	if(num == 0)
	{
	return 1;
	}
	else
	return num * Factorial(num -1);
}

int main()
{
	int num, fact;
	printf("Enter the number :\n");
	scanf("%d",&num);

	fact = Factorial(num);

	printf("Factorial of %d = %d\n",num,fact);
	
	return 0;
}
