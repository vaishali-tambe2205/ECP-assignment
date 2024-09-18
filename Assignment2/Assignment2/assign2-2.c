/*Write a program to crate four function calculator. Four functions are +, - , *, /
*/



#include <stdio.h>
int main ()

{
 int num1,num2,res;
 char op ;

 printf("enter the number :");
 scanf("%d%d",&num1,&num2);

 printf("enter your operator [+,-,*,/] :");
 scanf("%*c%c",&op);

 switch (op)

 {
  
  case '+':  res = num1+num2;
                 printf("addition =%d \n",res);
		break;
 case '-': res = num1-num2;
                 printf("subtraction = %d \n" , res);
		break;
 case '*':	res = num1*num2;
                printf("multiplication=%d \n", res);
		break;
 case '/':  if (num2!=0)
             {
			       printf("div=%d \n", num1/num2);
		     }	 
		       else
		      {
		           printf("num2 / divisor is zero");
		      }
    return 0;
   }
}



	
