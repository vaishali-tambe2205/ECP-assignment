/*Write a program to find maximum of three numbers using
a. If – else
b. conditional operator.
*/

#include <stdio.h>
int main()
{
	int num1, num2,num3;
	printf("enter the number:");
	scanf("%d%d%d",&num1, &num2, &num3);
	if (num1>num2)
	{
 		if (num1>num3)
		{
			printf("maximum = %d \n",num1);
		}
		else 
		{
			printf("maximum = %d \n", num3);
		}
	}	
	else if(num2>num3)
	{
		printf("maximum = %d \n ",num2);
	}
	else
	{
		printf("Maximum = %d\n",num3);
	}
	
        printf("\n");



        int a,b,c,max;

    	printf("enter any three number:");
	    scanf("%d%d%d",&a, &b, &c);
	    max= (a>b) ? (a>c?a:c) : (b>c?b:c);
	    printf("maximum =%d \n",max);

        return 0;
} 






