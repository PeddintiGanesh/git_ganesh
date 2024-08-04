//16.A) Bubble sort in C:

#include <stdio.h>
// Function to perform bubble sort on an array
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void main()
{
    int n;
    // Get the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    // Get elements from the user
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Perform Bubble Sort
    bubbleSort(arr, n);
    // Display the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}


