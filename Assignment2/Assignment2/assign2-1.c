/*Write a program to display number of days in the given month and year using switch case
statement
*/


  #include <stdio.h>
  int main ()
{ 
  int year, month;
  printf("enter the year, month:");
  scanf("%d%d",&year,&month);

  switch (month)
  { 
    case 1 : printf("jan-31 days \n");
	         break;
	case 2 : if(year%4==0&&year%100!=0||year%400==0)
	         {
			     printf("feb-29 days \n");
			 } 
			 else 
		    {
			     printf("feb-28 days \n"); 
		   	}
			 break;
	
	case 3 : printf("march-31 days \n");
             break;
	case 4 : printf("april-30 days \n");
	         break;
	case 5 : printf("may-31 days \n");
	         break;

	default : printf("invalid input \n");
	         break;
   }
	return 0;
}	
