// 16.B) Quicksort in C
#include <stdio.h>
// Function to partition the array and return the pivot index
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            // Swap arr[i] and arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    // Swap arr[i+1] and arr[high] (pivot)
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return i + 1;
}
// Function to implement the Quick Sort algorithm
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        // Find pivot such that elements smaller than pivot are on the left
        // and elements greater than pivot are on the right
        int pivotIndex = partition(arr, low, high);
        // Recursively sort the subarrays
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
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
    // Perform Quick Sort
    quickSort(arr, 0, n - 1);
    // Display the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
