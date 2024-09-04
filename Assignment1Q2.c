/*write a program to accept number and print the number in character,
octal, decimal, hex format
*/


#include<stdio.h>
int main()
{
int n1;
printf("enter the number");
scanf("%d" , &n1);
printf("%d,%c,%o,%x" ,n1,n1,n1,n1);
return 0;
}


