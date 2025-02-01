#include <stdio.h>

int maxEvenOddSubarrayLength(int arr[], int n) 
{
    int max_len = 1;    
    int current_len = 1;

    for (int i = 1; i < n; i++) 
    {
        if ((arr[i] % 2 == 0 && arr[i - 1] % 2 != 0) || (arr[i] % 2 != 0 && arr[i - 1] % 2 == 0))
        {
            current_len++;
        } 
         else 
         {
            current_len = 1;  
        }

        if (current_len > max_len) 
        {
            max_len = current_len;
        }
    }

    return max_len;
}

int main() 
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int result = maxEvenOddSubarrayLength(arr, n);
    printf("The maximum length of the even-odd subarray is: %d\n", result);

    return 0;
}