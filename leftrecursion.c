#include<stdio.h>
void leftRotateByOne(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}
void leftRotate(int arr[], int n, int d)
{
    if (d == 0 || d == n) 
    {
        return;
    }
    leftRotateByOne(arr, n);
    leftRotate(arr, n, d - 1);
}

int main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2;

    printf("Enter the elements in array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    leftRotate(arr, n, d);

    printf("Array after rotating by %d positions: ", d);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}