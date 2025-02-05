#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int targetSum = 14; 

    int low = 0, high = n - 1;

    while (low < high) 
    {
        int sum = arr[low] + arr[high];
        if (sum == targetSum)
        {
            printf("Pair found is : (%d, %d)\n", arr[low], arr[high]);
            return 0;  
        }
        if (sum < targetSum) 
        {
            low++;
        }
        else 
        {
            high--;
        }
    }
    printf("No pair found with sum %d\n", targetSum);
    
    return 0;
}
