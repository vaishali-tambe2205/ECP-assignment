#include<stdio.h>

int FibonacciSeries( int n)
{
	int a=1, b=1, res;

	for(int i=3; i<=n; i++)
	{
		res= a+b;
		a=b;
		b=res;
	}
		printf("%d ",b);
	return 0;
}

int main()

{
	int n, series;
	printf("Enter the number :\n");
	scanf("%d",&n);
	
	series = FibonacciSeries(n);

	return 0;
}
