#include <stdio.h>

int main() 
{
    int arr[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int left = 0, right = n - 1;
    int lMax = 0, rMax = 0;
    int Trapp = 0;

    while (left <= right) 
    {
        if (arr[left] <= arr[right]) 
        {
            if (arr[left] >= lMax) 
            {
                lMax = arr[left];  
            } 
            else 
            {
                Trapp =Trapp + lMax - arr[left];  
            }
            left++;  
        } 
        else 
        {
            if (arr[right] >= rMax) 
            {
                rMax = arr[right];  
            } else 
            {
                Trapp = Trapp + rMax - arr[right];  
            }
            right--;  
        }
    }
    printf("Total water trapped: %d\n", Trapp);
    return 0;
}