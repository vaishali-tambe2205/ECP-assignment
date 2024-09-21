#include <stdio.h>

void inputArray(int arr[], int size)
{
    for (int i = 1; i <= size; i++)
	{
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }
	printf("\n");
}

void printArray(int arr[] , int size) 
{
    printf("Array elements are:\n");
    for (int i = 1; i <= size; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int size;
    
    printf("Enter the size upto which elements shall be printed : \n");
    scanf("%d", &size);
    
    int arr[size];
    
    inputArray(arr, size);
    
    printArray(arr, size);
    
    return 0;
}
