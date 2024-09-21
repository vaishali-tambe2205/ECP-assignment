
#include <stdio.h>

int add(int, int);
int sub(int , int);
int mul (int, int);
int div (int, int);

int main(void)
{

   int n1,n2;
   int ch,res;
  do
    {
       printf("enter two number :\n");
       scanf("%d%d",&n1,&n2);
       printf("enter your choice 1.addition\n 2.subtraction\n 3.multiplication\n 4.division\n 5.exit\n");
       scanf("%d",&ch);

       switch(ch)
   {
     case 1:
             res = add(n1, n2);
             printf("addition=%d\n",res);
             break;
    case 2 :
             res = sub(n1 ,n2);
             printf("subtraction=%d\n",res);
             break;

     case 3:
             res = mul(n1, n2);
             printf("multiplication = %d\n",res);
             break;

     case 4:
             res= div(n1 , n2);
             break;

     case 5: 
              break;
        
		  }
} while(ch!=5);


     return 0;
    
  }

     int add(int n1,int n2)
     { 
         return n1+n2;
     } 

     int sub (int n1, int n2)
     {
         return n1-n2;
     } 
     int mul (int n1,int n2)
     {
         return n1*n2;
	 }
     int div (int n1,int n2)
		     
     {
         if(n2==0)
     {
	  printf("cannot divided by zero\n");
       
	  } 
	 else

	 
	return printf("div=%d\n",n1/n2);
	}
     

 
 








