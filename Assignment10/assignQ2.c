/* Write a function to display given number in binary format.
*/


#include <stdio.h>
void print_binary(int num)
 {
       printf("%d : ",num);
       while(num>0)
  {

    int rem = num % 2;
       if(rem)

     printf("1");

    else
     printf("0");

      num/2;
  }
     printf("\n");\
}

void binary_r(int num)
{

     if (num==0)

      return ;

     binary_r(num/2);

     printf("%d",num%2);
}
 

 int main (void)
   {

          int num;

        printf("enter the number");

        scanf("%d",&num);

        binary_r(num);

         return 0;
}









