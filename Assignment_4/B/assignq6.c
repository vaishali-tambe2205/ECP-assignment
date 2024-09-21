#include <stdio.h>

void hexadecimal_conversion(int num);

int main() {
    int num;

    printf("Enter Number : ");
    scanf("%d", &num);

    printf("Given Number : %d\n", num);

    printf("Hexadecimal equivalent : ");
    hexadecimal_conversion(num);
    printf("\n");

    return 0;
}
void hexadecimal_conversion(int num) 
{
    if (num > 0) 
	{
        hexadecimal_conversion(num / 16);
    }
    printf("%X", num % 16);
}
