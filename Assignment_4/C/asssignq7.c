#include <stdio.h>

//using global variables

int sum = 0;
int product = 0;

void calculateSumAndProduct(int a, int b) {
    sum = a + b;
    product = a * b;
}

int main()
{
    int a,b;

	printf("Enter two numbers :\n");
	scanf("%d%d",&a,&b);
    
    calculateSumAndProduct(a, b);
    
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);
    
    return 0;
}
/*
//without using global variables

void calculateSumAndProduct(int a, int b, int *sum, int *product) {
    *sum = a + b;
    *product = a * b;
}

    int main()
	{
    int a,b;

	printf("Enter two numbers :\n");
	scanf("%d%d",&a,&b);
    
	int sum, product;

    calculateSumAndProduct(a, b, &sum, &product);

    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);

    return 0;
}*/
