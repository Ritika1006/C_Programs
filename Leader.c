#include <stdio.h>
void Leaders(int arr[], int n)
{
    int max= arr[n - 1];
    printf("%d ", max);  
    
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > max) 
        {
            max = arr[i];
            printf("%d ", arr[i]);
        }
    }
}

int main()
{
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Leaders in the array: ");
    Leaders(arr, n);

    return 0;
}