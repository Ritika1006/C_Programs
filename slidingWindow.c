#include <stdio.h>

void sliding(int arr[], int n, int target) 
{
    int current_sum = 0;
    int start = 0;

    for (int end = 0; end < n; end++) 
    {
        current_sum += arr[end];

        while (current_sum > target && start < end) 
        {
            current_sum -= arr[start];
            start++;
        }

        if (current_sum == target) 
        {
            printf("Subarray with the given sum: ");
            for (int i = start; i <= end; i++) 
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
            return;  
        }
    }

    printf("No subarray with the given sum exists.\n");
}

int main() 
{
    int n, target;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target sum: ");
    scanf("%d", &target);

    sliding(arr, n, target);

    return 0;
}