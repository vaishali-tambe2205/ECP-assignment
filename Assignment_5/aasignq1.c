#include<stdio.h>
int main()
{
	int i, x=0, avg, subjects[5];

	printf("Enter the marks of all 5 subject\n");

	for(int i=1; i<=5; i++)
	{
		printf("Subject %d : ",i);
		scanf("%d",&subjects[i]);
		x = x + subjects[i];
	}
		
		avg = x/5;

		printf("Average : %d\n",avg);

return 0;
}
