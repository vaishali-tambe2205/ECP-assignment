#include <stdio.h>

int calculate(char operation, int a, int b, int *result) 
{
   	switch (operation) 
	{
        case '+':
            *result = a + b;
            break;

		case '-':
            *result = a - b;
            break; 
        
		case '*':
            *result = a * b;
            break; 
        
		case '/':
            if (b == 0) {
                printf("ERROR : Division by 0 not possible \n");
            }
			else{
            	*result = a / b;
			}
            break; 
        
		default:
    		return 0;
	}
}

int main()
{
	int a,b,result;
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);

	char operation;
	printf("Enter operation choice\n");
	scanf("%*c%c",&operation);

	calculate('+', a, b, &result);
    printf("Addition Result: %d\n", result);

	calculate('-', a, b, &result);
    printf("Substraction Result: %d\n", result);
	
	calculate('*', a, b, &result);
    printf("Multiplication Result: %d\n", result);
	
	calculate('/', a, b, &result);
    printf("Division Result: %d\n", result);

	return 0;

	}
