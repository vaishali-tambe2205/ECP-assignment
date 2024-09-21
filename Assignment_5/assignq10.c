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

int* linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++) 
	{
        if (arr[i] == target)
		{
            return &arr[i]; // Return the address of the found element
        }
    }
    return NULL; // Return NULL if the element is not found
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

    int* address = linearSearch(arr, size, target);

    if (address != NULL) {
        printf("Element %d found at address %p with value %d.\n", target, (void*)address, *address);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
