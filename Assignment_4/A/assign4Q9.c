#include<stdio.h>

int Check_Prime( int num)
{
	int count=0;

	for(int i =1; i<=num ; i++ )
	{
		if(num % i ==0)
		{ count++;
		}
	}
	if(count == 2)
		printf("Number is Prime num\n");
	else
		printf("Number is not Prime num\n");

		return 0;
}

int Print_Primeno( int n1, int n2 )
{
	for(int i=n1; i<=n2; i++)
	{
		int j;
	  for( j=2; j<=i; j++)
	  {
		if(i%j == 0)
			break;
	  }
	  if(i == j)
	  printf("%d ",j);
	}
}
int main()
{

	int num;
	printf("Enter the number :\n");
	scanf("%d",&num);

	int n1, n2;
	printf("Enter the range : \n");
	scanf("%d%d",&n1,&n2);

	Check_Prime(num);

	Print_Primeno(n1,n2);
	
	return 0;
}
