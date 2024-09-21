#include <stdio.h>

void binary_conversion(int num);

int main() {
    int num;

    printf("Enter Number : ");
    scanf("%d", &num);

    printf("Given Number : %d\n", num);

    printf("Binary equivalent : ");
    binary_conversion(num);
    printf("\n");

	return 0;

	}

	void binary_conversion(int num) {
    int binary[20];
    int i = 0;

    while (num > 0) {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

