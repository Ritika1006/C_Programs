#include <stdio.h>
int MaxDiff(int arr[], int n) 
{
    int max = arr[0];  
    int min = arr[0];
    
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max) 
        {
            max = arr[i];  
        }
        if (arr[i] < min) 
        {
            min = arr[i];  
        }
    }
    
    return max - min;  
}

int main() {
    int arr[] = {2, 3, 1, 5, 4,7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxDiff = MaxDiff(arr, n);
    printf("Maximum difference in the array is: %d\n", maxDiff);

    return 0;
}