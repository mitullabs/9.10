
//Demonstration of Bubble Sorting
#include <stdio.h>

// Function to perform Bubble Sort
void bubblesort(int arr[], int n) 
{
    int i, j, temp;
    // Outer loop for passes
    for (i = 0; i < n - 1; i++) 
	{
        // Inner loop for comparisons and swaps in each pass
        for (j = 0; j < n - i - 1; j++) 
		{
            // Compare adjacent elements
            if (arr[j] > arr[j + 1]) 
			{
                // Swap if they are in the wrong order (for ascending sort)
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print an array
void printarray(int arr[], int size) 
{
    int i;
    for (i = 0; i < size; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() 
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    printf("Original array: \n");
    printarray(arr, n);
    bubblesort(arr, n); // Call the bubble sort function
    printf("Sorted array: \n");
    printarray(arr, n);
    return 0;
}
