#include <stdio.h>
int main() 
{
    int arr[] = {1, 2, 3, 4, 5, 6, 8,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 20;  
    for (int i = 0; i < n - 2; i++) 
    {
        int low = i + 1;
        int high = n - 1;

        while (low < high) 
        {
            int sum = arr[i] + arr[low] + arr[high];
            if (sum == target) 
            {
                printf("Triplet found: (%d, %d, %d)\n", arr[i], arr[low], arr[high]);
                return 0;  
            }
            if (sum < target) 
            {
                low++;
            }
            else 
            {
                high--;
            }
        }
    }

    printf("No triplet found with sum %d\n", target);
    return 0;
}