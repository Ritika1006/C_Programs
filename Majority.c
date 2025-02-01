#include <stdio.h>

int findMajorityElement(int arr[], int n)
 {
    int max_count = 0;
    int majority_element = -1;

    for (int i = 0; i < n; i++) 
    {
        int count = 0;
7
        for (int j = 0; j < n; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                count++;
            }
        }

        if (count > n / 2) 
        {
            majority_element = arr[i];
            break;
        }
    }

    return majority_element;
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

    int result = findMajorityElement(arr, n);
    if (result != -1) 
    {
        printf("The majority element is: %d\n", result);
    } 
    else 
    {
        printf("No majority element exists.\n");
    }

    return 0;
}