#include<stdio.h>

int Factorial(int n);

int main()
{
	int n, Fact;
	printf("Enter the number :\n");
	scanf("%d",&n);

	Fact = Factorial(n);

	printf("Factorial is %d\n",Fact);

	return 0;
}
int Factorial(int n)
{
	
	int fact=1;
	
	for(int i=1 ; i<=n ; i++)
	{
		fact = fact * i;
	}
	return fact;
}
