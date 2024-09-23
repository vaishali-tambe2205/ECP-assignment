#include <stdio.h>
#include <stdlib.h>

int** allocateMatrix(int rows, int cols) {
    
	int **matrix = (int **)malloc(rows * sizeof(int *));
    
	if (matrix == NULL) {
        printf("Memory allocation failed for rows.\n");
        exit(1);
    }

    for (int i = 0; i < rows; i++) {
    
	matrix[i] = (int *)malloc(cols * sizeof(int));
    
		if (matrix[i] == NULL) {
            printf("Memory allocation failed for columns in row %d.\n", i);
            exit(1);
        }
    }

    return matrix;
}

void freeMatrix(int **matrix, int rows) {
    
	for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }

    free(matrix);
}

int main() {
    
	int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int **matrix = allocateMatrix(rows, cols);

    for (int i = 0; i < rows; i++) {
    
		for (int j = 0; j < cols; j++) {
            matrix[i][j] = i * cols + j; 
        }
    }

    printf("Matrix:\n");

    for (int i = 0; i < rows; i++) {
    
		for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    freeMatrix(matrix, rows);

    return 0;
}

