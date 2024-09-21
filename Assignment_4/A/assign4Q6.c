#include <stdio.h>

void printPascalTriangle(int rows) {
    int coef = 1;

    for (int i = 0; i < rows; i++) {
        for (int space = 1; space < rows - i; space++) {
            printf("  ");
        }

        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                coef = 1;
            } else {
                coef = coef * (i - j + 1) / j;
            }
            printf("%4d", coef);
        }

        printf("\n");
    }
}

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printPascalTriangle(rows);

    return 0;
}
