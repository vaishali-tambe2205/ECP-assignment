/*Write a program to convert temperature in Celsius to Fahrenheit and vice versa. Formula for
conversion
*/


#include <stdio.h>
int main ()
{

float temp,cels,temp1,cels1 ;
printf("enter temperature in fahrenheit \n");
scanf("%f",&temp);
cels =((temp-32)*5/9);
printf("temperature in celsius is  %f \n", cels);
printf("enter thr temperature in celsius\n");
scanf("%f",&cels1);
temp1=((cels1*((float)9/5))+32);
printf("temperature in fahrenheit is %f \n",temp);

return 0;
}
