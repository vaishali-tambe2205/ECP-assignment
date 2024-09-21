#include <stdio.h>

// Function to calculate the nth term of the Fibonacci series using recursion

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// Function to print the first 'count' terms of the Fibonacci series

void printFibonacciSeries(int count) {
    for (int i = 0; i < count; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n"); 
}

int main() {
    int terms;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &terms);

    printFibonacciSeries(terms);
	fibonacci(n);
    return 0;
}
