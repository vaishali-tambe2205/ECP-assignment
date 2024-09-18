/*Write a program to accept Employee Id , Department No, Designation from user and display
output with reference to following tables
DeptNo  Dept Name   Dsgn Code Designation
10     Marketing    'M'   Manager
20		Management	'S'   Supervisor
30      Sales       's'   Security Officer
40     Designing    'C'   Clerk
Example:
If input given is
Employee Id
: 101
Dept No
: 30
Designation Code
: M
Then output should be:
Employee with employee id 101 is working in "Sales" department as "Manager".
*/


  #include <stdio.h>
  int main ()
{
  int emp_id,dept_no;
   char dc ;

   printf("enter the employee id :");
   scanf("%d",&emp_id);

   printf("enter the dept_no:");
   scanf("%d",&dept_no);

   printf("enter the designation :");
   scanf("%*c%c",&dc);

    switch(dept_no)
	{
	  case 10: printf("employee with employee id:%d working in marketing dept \n ",emp_id);
	           break;
	  case 20: printf("employee with employee id:%d working in management dept \n",emp_id);
	           break;
	  case 30: printf("employee with employee id: %d working in sales dept \n",emp_id);		   
               break;
      case 40: printf("employee with employee id: %d working in designing  dept \n",emp_id);		   
               break;
      default: printf("invalid input \n"); 
	           break;

    }   

    switch(dc)

      {
         
		  case 'M':  printf("as a manger \n");
		            break;
		  case 'S':  printf("as a supervisor \n");   
		            break;
		  case 's':  printf("as a security officer \n");
                    break;
		  case 'c':  printf("as a clerk \n");
                    break;
          default :  printf("invalid designation code\n");
		            break; 
      } 
          return 0;
}
