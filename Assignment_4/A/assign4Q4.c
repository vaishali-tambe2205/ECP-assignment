#include<stdio.h>

int flag=0;

int DivZero(int numerator, int denominator);

int main()
{
	int res, numerator, denominator;
	printf("Enter the two numbers :\n");
	scanf("%d%d",&numerator, &denominator);

	res = DivZero(numerator , denominator);

	if( res ==1)
		printf("ERROR : Division by zero is not possible\n");
	else
		printf("Division = %d\n",res);

	return 0;
}

int DivZero(int numerator, int denominator)
{
	if(denominator == 0)
		return flag=1;
	else
		return numerator/denominator;
}
