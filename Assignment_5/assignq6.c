#include <stdio.h>

void inputArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int size) {
    printf("Array elements are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int removeDuplicates(int arr[], int size) 
{
    int uniqueIndex = 0;

    for ( int i = 0; i < size; i++) 
	{
		  int j;
          for ( j = 0; j <= uniqueIndex; j++)
		  {
            if (arr[i] == arr[j]) {
                break;
            }
        }
        if (j == uniqueIndex)
		{
            arr[uniqueIndex] = arr[i];
            uniqueIndex++;
        }
    }

    return uniqueIndex;
}

int main() 
{
    int size;

    printf("Enter the Size : ");
    scanf("%d", &size);

    int arr[size];

    inputArray(arr, size);

    printf("Original ");
    printArray(arr, size);

    int new = removeDuplicates(arr, size);

    printf("Array after removing duplicates:\n");
    printArray(arr, new);

    printf("Number of unique elements: %d\n", new);

    return 0;
}
