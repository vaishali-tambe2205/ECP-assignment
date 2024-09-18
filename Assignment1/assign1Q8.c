/*Write a program to accept a 4 digit number and
a. Display face value of each decimal digit
b. Display place value of each decimal digit
c. Display no in reverse order by changing decimal place values
If user enters a 4 digit number 9361 output should be
a. 9  3   6  1
b. 9361 = 9 000 + 300 + 60 + 9
c. 1639
*/



#include<stdio.h>
int main()
{
int num ,a,b,c,d,x,y,z;
printf("enter the number :");
scanf("%d",&num);

a=num/1000;
num=num%1000;
b=num/100;
num=num%100;
c=num/10;
num=num%10;
d= num;
printf("%d\t%d\t%d\t%d\t \n",a,b,c,d);

x=a*1000;
y=b*100;
z=c*10;
printf("%d + %d + %d + %d\n",x,y,z,d);


printf("%d%d%d%d\n",d,c,b,a);


return 0;
}






