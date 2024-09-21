#include <stdio.h>

int gcd(int a, int b) {
    
	if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("The GCD of %d and %d is: %d\n", num1, num2, gcd(num1, num2));

    return 0;
}
