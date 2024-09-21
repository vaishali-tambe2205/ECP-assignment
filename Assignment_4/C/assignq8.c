#include<stdio.h>

int swap( int *n1, int *n2)
{
	int temp;

	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}
int main()
{
	int n1, n2;

	printf("Enter two numbers :\n");
	scanf("%d%d",&n1,&n2);

	printf("Before swap : n1=%d  n2=%d\n",n1,n2);

	swap(&n1,&n2);

	printf("After swap : n1=%d  n2=%d\n",n1,n2);
	
	return 0;
}
