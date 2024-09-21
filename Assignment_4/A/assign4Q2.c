#include<stdio.h>

int Cal_power(int index, int base);

int main()
{
	int index, base, res;
	printf("Enter the base :\n");
	scanf("%d",&index);
	
	printf("Enter the index :\n");
	scanf("%d",&base);

	res = Cal_power(index , base);

	printf("%d ^ %d = %d\n",index , base , res);

    return 0;
}
int Cal_power(int index , int base)
{
	int result=1;
	for(int i=1 ; i<=index ; i++)
	{
		result = result * base;
	}
	return result;
}
