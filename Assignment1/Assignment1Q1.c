/* write a program to accept two number
a. find sum 
b find difference
c. find product
*/

#include <stdio.h>
int main()
{
int num1,num2 ,res;
printf("enter two number");
scanf("%d%d",&num1,&num2);
res= num1+num2;
printf("addition=%d \n" ,res);
res=num1-num2;
printf("subtraction=%d \n",res);
res=num1*num2;
printf("product=%d \n",res);

return 0;
}
