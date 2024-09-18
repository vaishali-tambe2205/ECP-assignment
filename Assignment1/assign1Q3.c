/*print ASCII value of user entered charcter,decimal, octal,hex format and
also print character to user entered ASCII value
*/


#include<stdio.h>
int main()
{
char ch ;
printf(" enter the value: \n");
scanf("%c",&ch);
printf(" ASCII value =%d \n decimal value =%d \n octal value =%o\n hexadecimal value =%x\n" ,ch,ch,ch,ch);
return 0;
}
