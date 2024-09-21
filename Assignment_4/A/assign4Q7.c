#include<stdio.h>

int FibonacciSeries( int n)
{
	int a=1, b=1, res;

	printf("%d\n",a);
	printf("%d\n",b);

	for(int i=3; i<=n; i++)
	{
		res= a+b;
		printf("%d\n",res);
		a=b;
		b=res;
	}
	return 0;
}

int main()

{
	int n, series;
	printf("Enter the number :\n");
	scanf("%d",&n);
	
	series = FibonacciSeries(n);

	printf("%d", series);

	return 0;
}
