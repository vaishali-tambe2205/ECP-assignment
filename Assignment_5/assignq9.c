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

int binarySearch(int arr[], int size, int target) 
{
    int left = 0;
    int right = size -1;

    while (left <= right)
	{
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
		{
            return mid; // Target found at index mid
        }

        if (arr[mid] < target)
		{
            left = mid + 1; // Search in the right half
        } else
		{
            right = mid - 1; // Search in the left half
        }
    }

    return -1; // Target not found
}

int main()
{
    int size, target;

    printf("Enter the Size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements in sorted order:\n");
    inputArray(arr, size);

    printf("Original ");
    printArray(arr, size);

    printf("Enter the number to search for: ");
    scanf("%d", &target);

    int index = binarySearch(arr, size, target);

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
