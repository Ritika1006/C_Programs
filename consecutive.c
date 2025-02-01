#include <stdio.h>

int findMaxConsecutiveOnes(int arr[], int n) 
{
    int maxCount = 0;
    int currentCount = 0;

    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == 1) 
        {
            currentCount++;
            if (currentCount > maxCount) 
            {
                maxCount = currentCount;
            }
        } else 
        {
            currentCount = 0;
        }
    }

    return maxCount;
}

int main() 
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array (binary values 0 or 1):\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int result = findMaxConsecutiveOnes(arr, n);
    printf("The maximum consecutive 1's is: %d\n", result);

    return 0;
}