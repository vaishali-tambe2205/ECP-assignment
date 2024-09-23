#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define size 40

char* itoa(int value, char *string, int base)
{	
    if (base < 2 || base > 36)
	{
        *string = '\0';
        return string;
    }

    char *ptr = string;
    char *ptr1 = string;
    char tmp;
    unsigned int uvalue;

    // Handle zero explicitly
    if (value == 0)
	{
        *ptr++ = '0';
        *ptr = '\0';
        return string;
    }

    // Handle negative values only for base 10
    if (value < 0 && base == 10) {
        *ptr++ = '-';
        uvalue = -value;
    } else {
        uvalue = (unsigned int)value;
    }

    // Convert value to the given base
    do {
        int digit = uvalue % base;
        *ptr++ = (digit < 10) ? (digit + '0') : (digit - 10 + 'a');
        uvalue /= base;
    } while (uvalue > 0);

    *ptr = '\0'; // Null-terminate the string

    // Reverse the string
    while (ptr1 < --ptr) {
        tmp = *ptr1;
        *ptr1++ = *ptr;
        *ptr = tmp;
    }

    return string;
}

int main() 
{
    int number;
    int base;
    char buffer[size]; 

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("Enter base (2 to 36): ");
    scanf("%d", &base);

    itoa(number, buffer, base);

    printf("Number %d in base %d is: %s\n", number, base, buffer);

    return 0;
}

