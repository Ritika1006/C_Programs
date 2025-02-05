#include<stdio.h>
int product(int arr[],int n)
{
    int result[n];
    result[0] = 1;
    for (int i = 1; i < n; i++) 
    {
        result[i] = result[i - 1] * arr[i - 1];
    }
    
    int right = 1; 
    for (int i = n - 1; i >= 0; i--) 
    {
        result[i] = result[i] * right;
        right *= arr[i]; 
    }
    
    printf("Product array: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", result[i]);
    }
}

int main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    product(arr, n);
    
    return 0;
}


