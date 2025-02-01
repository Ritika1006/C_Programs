#include <stdio.h>

int findSubarraySum(int arr[], int start, int end) 
{
    int sum = 0;
    for (int i = start; i <= end; i++) 
    {
        sum += arr[i];
    }
    return sum;
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

    int start, end;
    printf("Enter the start index and end index of the subarray: ");
    scanf("%d %d", &start, &end);

    if (start >= 0 && end < n && start <= end) 
    {
        int result = findSubarraySum(arr, start, end);
        printf("The sum of the subarray from index %d to %d is: %d\n", start, end, result);
    } 
    else
    {
        printf("Invalid indices!\n");
    }

    return 0;
}