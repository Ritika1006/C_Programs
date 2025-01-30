#include <stdio.h>
void LeadersRe(int arr[], int n, int index, int max)
{
    if (index == -1) {
        return;
    }

    if (arr[index] > max)
    {
        printf("%d ", arr[index]);
        max = arr[index];  
    }

    LeadersRe(arr, n, index - 1, max);
}

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Leaders in the array: ");
    LeadersRe(arr, n, n - 1, arr[n - 1]);  
    return 0;
}
