#include <stdio.h>

void inputArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
	{
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int size) 
{
    printf("Array elements are:\n");
    for (int i = 0; i < size; i++)
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // Return the index of the target element
        }
    }
    return -1;  // Return -1 if the target is not found
}

int main()
{
    int size, target;

    printf("Enter the Size : ");
    scanf("%d", &size);

    int arr[size];

    inputArray(arr, size);

    printf("Original ");
    printArray(arr, size);

    printf("Enter the number to search for: ");
    scanf("%d", &target);

    int index = linearSearch(arr, size, target);

    if (index != -1) 
	{
        printf("Element %d found at index %d.\n", target, index);
    }
	else
	{
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
