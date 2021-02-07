// C/C++ program for recursive implementation
// of Bubble sort

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    if (n == 1)
        return;


    for (int i = 0; i < n - 1; i++)
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);


    bubbleSort(arr, n - 1);
}

/* Function to print an array */
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main1()
{
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array : \n");
    printArray(arr, n);
    return 0;
}