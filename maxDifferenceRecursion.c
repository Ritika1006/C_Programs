#include <stdio.h>
void DiffRe(int arr[], int n, int index, int *max, int *min)
{
    if (index == n) 
    {
        return;
    }

    if (arr[index] > *max) 
    {
        *max = arr[index];
    }
    if (arr[index] < *min) 
    {
        *min = arr[index];
    }

    DiffRe(arr, n, index + 1, max, min);
}

int DiffRe(int arr[], int n) 
{
    int max = arr[0];
    int min = arr[0];
    
    DiffRe(arr, n, 1, &max, &min);  
    return max - min;  
}

int main() 
{
    int arr[] = {2, 3, 1, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxDiff = DiffRe(arr, n);
    printf("Maximum difference in the array is: %d\n", maxDiff);

    return 0;
}