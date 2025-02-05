#include <stdio.h>

int main() 
{
    int arr[] = {1, 3, 20, 4, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int low = 0, high = n - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == n - 1 || arr[mid + 1] <= arr[mid]))
        {
            printf("Peak element: %d\n", arr[mid]);
            break;
        }
        
        else if (mid > 0 && arr[mid - 1] > arr[mid])
        {
            high = mid - 1;
        }
        else 
        {
            low = mid + 1;
        }
    }
    
    return 0;
}