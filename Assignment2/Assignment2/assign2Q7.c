/*Write a program to display number of days in the given year. Check condition for leap year. A
year is a leap year if it is divisible by 4 but not by 100, except that years divisible by 400 are leap
years.
a. Without using logical operators
b. Using logical operators
c. Conditional operator
*/



  #include <stdio.h>
  int main()
{
   int year;
   printf("enter the year \n");
   scanf("%d",&year);
    
   if(year%4==0)
   {
   		if (year%100==0)
        {
      		if(year%400==0)
   			{
       			printf("%d is leap year \n",year);
  			}	   
   			else
  			{
       			printf("%d is not leap year\n",year);
   			}
		}
	    else
		{
			printf("%d is leap year \n",year);
		}
	}	
	else
	{
		printf("%d is not leap year\n",year);
	}	
 
  
//----------------------------------------------------------------------------------------

// using logical operator

  if (year%4 == 0 && year %100!=0 || year %400 == 0) 
     
	{
	     printf(" %d is leap year \n",year);
	}
     else
    {
         printf("%d is not leap year \n",year);
    }
  

 //---------------------------------------------------------------------------------------- 

// using conditional operator

 (year%4==0&& year%100!=0)?printf("%d is leap year\n",year):(year%400==0)?printf("%d is leap year \n"):printf("%d is not leap year \n",year);

 return 0;

}  









