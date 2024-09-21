#include<stdio.h>

int LeapYearCheck(int year);
int printDays(int year , int  month);

int main()
{
 int year;

 printf("Enter year : \n");
 scanf("%d",&year);
 
 LeapYearCheck(year);

 int month;

 printf("Enter month(01 - 12) : \n");
 scanf("%d",&month);

 printDays(year, month);

 return 0;

 int LeapYearCheck(int year)
 {
	if (year % 400 == 0) {
        printf("The year %d is a leap year\n", year);
    
	} else if (year % 100 == 0) {
        printf("The year %d is not a leap year\n", year);
    
	} else if (year % 4 == 0) {
        printf("The year %d is a leap year\n", year);
    
	} else {
        printf("The year %d is not a leap year\n", year);
    }
	return 0;
	}

 int printDays(int year ,int month)
 {
 int days;

 if (month == 2) {

        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            days = 29;
        }
		else {
            days = 28;
        }
    }
	else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    }
	else if (month >= 1 && month <= 12) {
        days = 31;
    }
	else {
        printf("Please enter valid month\n");
        return 0;
    }

    printf("Number of days in month %d of year %d is: %d\n", month, year, days);

	return 0;}
}
