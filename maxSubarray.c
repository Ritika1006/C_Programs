#include <stdio.h>

void findMaxMinSum(int arr[], int n, int k) 
{
    if (n < k) 
    {
        printf("Subarray size k is greater than array size.\n");
        return;
    }

    int current_sum = 0;
    for (int i = 0; i < k; i++) 
    {
        current_sum += arr[i];
    }

    int max_sum = current_sum;
    int min_sum = current_sum;

    for (int i = k; i < n; i++) 
    {
        current_sum += arr[i] - arr[i - k];  
        if (current_sum > max_sum) 
        {
            max_sum = current_sum;
        }
        if (current_sum < min_sum) 
        {
            min_sum = current_sum;
        }
    }

    printf("Maximum sum of subarray of size %d is: %d\n", k, max_sum);
    printf("Minimum sum of subarray of size %d is: %d\n", k, min_sum);
}

int main()
{
    int n, k;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the size of the subarray (k): ");
    scanf("%d", &k);

    findMaxMinSum(arr, n, k);

    return 0;
}