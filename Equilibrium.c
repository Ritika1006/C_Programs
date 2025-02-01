#include <stdio.h>

int findEquilibriumPoint(int arr[], int n) 
{
    int total_sum = 0;
    int left_sum = 0;

    for (int i = 0; i < n; i++) 
    {
        total_sum += arr[i];
    }

    for (int i = 0; i < n; i++) 
    {
        total_sum -= arr[i];  

        if (left_sum == total_sum)
        {
            return i;  
        }

        left_sum += arr[i];  
    }

    return -1;  
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

    int result = findEquilibriumPoint(arr, n);
    if (result != -1) 
    {
        printf("Equilibrium point is at index: %d\n", result);
    } 
    else 
    {
        printf("No equilibrium point found.\n");
    }

    return 0;
}