#include <stdio.h>

void add_matrices(int matrix1[3][3], int matrix2[3][3], int result[3][3])
{
    for (int i = 0; i < 3; i++)
	{
        for (int j = 0; j < 3; j++)
		{
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void subtract_matrices(int matrix1[3][3], int matrix2[3][3], int result[3][3]) 
{
    for (int i = 0; i < 3; i++)
	{
        for (int j = 0; j < 3; j++)
		{
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

void multiply_matrices(int matrix1[3][3], int matrix2[3][3], int result[3][3])
{
    for (int i = 0; i < 3; i++)
	{
        for (int j = 0; j < 3; j++)
		{
            result[i][j] = 0;
        
		for (int k = 0; k < 3; k++)
		{
                result[i][j] += matrix1[i][k] * matrix2[k][j];
         }
        }
    }
}

int main()
{
    int matrix_a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix_b[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[3][3];

    add_matrices(matrix_a, matrix_b, result);
    printf("Sum:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    subtract_matrices(matrix_a, matrix_b, result);
    printf("Difference:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    multiply_matrices(matrix_a, matrix_b, result);
    printf("Product:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
