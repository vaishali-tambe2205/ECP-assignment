/*Write a program to find factorial of given number.  
Input: 5
Output: 5 * 4 * 3 * 2 * 1 = 120
*/


#include <stdio.h>
int main()
{ 
    int n, i=1,fact=1;
    printf("enter the number to find factorial :");
    scanf("%d",&n);
   
       while(i<=n)
   {
        fact=fact*i;
          i++;

		 // x<=n?printf("%d*",x-i+2):printf("%d",a);
   }
      printf("the factorial of %dis %d", n ,fact);
}
