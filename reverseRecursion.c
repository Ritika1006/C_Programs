#include<stdio.h>
void reverseArray(int arr[], int n) 
{
    for (int i = 0; i < 6 / 2; i++) 
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}
int main()
{
    int arr[] = { 1, 4, 3, 2, 6, 5 };
    int n ;
    reverseArray(arr, n);
  
    for (int i = 0; i < 6; i++)
    { 
        printf("%d\n", arr[i]);
    }
    return 0;
}