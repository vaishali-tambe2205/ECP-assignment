#include <stdio.h>

void inputArray(int arr[], int size) 
{
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int size) 
{
    printf("Array elements are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int Max(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int Min(int arr[], int size) 
{
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int size;

    printf("Enter the size : ");
    scanf("%d", &size);

    int arr[size];

    inputArray(arr, size);

    printf("Array elements are:\n");
    printArray(arr, size);

    int max = Max(arr, size);
    int min = Min(arr, size);

    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}
