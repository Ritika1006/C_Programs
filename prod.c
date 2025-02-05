#include <stdio.h>
int main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int total = 1;
    int result[n];

    for (int i = 0; i < n; i++) 
    {
        total = total * arr[i];
    }

    for (int i = 0; i < n; i++) 
    {
        result[i] = total/ arr[i];
    }

    printf("Product array: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}