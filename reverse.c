#include <stdio.h>

void reverse(int arr[], int n) 
{
    int start = 0;
    int end = n - 1;
    while (start < end) 
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }
}

int main() {
    int arr[5] = {5, 10, 7, 9, 5};
    int n =sizeof(arr) / sizeof(arr[0]);
    printf("Original array: ");
    for(int i = 0; i < 5; i++) 
    {
       printf("%d\n", arr[i]);
    }
    reverse(arr, n);
    printf("Reversed array: ");
    for(int i = 0; i < 5; i++)
    {
        printf("%d\n ", arr[i]);
    }
   
    return 0;
}