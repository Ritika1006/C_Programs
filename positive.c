#include <stdio.h>
void rearrange(int arr[], int n) 
{
    int left = 0, right = n - 1;

    while (left < right) 
    {
        if (arr[left] > 0 && arr[right] < 0) 
        {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
        else if (arr[left] < 0) 
        {
            left++;
        }
        else 
        {
            right--;
        }
    }
}

int main() 
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    rearrange(arr, n);

    printf("Rearranged array with positive numbers first and negative numbers alternatively:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}