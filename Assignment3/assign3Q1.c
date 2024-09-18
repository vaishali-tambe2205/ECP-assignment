/*
Write a program to accept a character and a number, and print the character number times
Input:
Character: *
Number: 6
Output:
******

*/


#include <stdio.h>
int main ()
{
  char ch ;
  int num, i ;

  printf("enter  character you want to print:");
  scanf("%c", &ch);
  printf(" enter how many time you want to print the number :");
  scanf("%d", &num);


while(i<=num)
{
 printf("%c",ch);
 i++;
 } 

 printf("\n");
 
  return 0;
}
 
