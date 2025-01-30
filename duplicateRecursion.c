#include<stdio.h>
int dupli(int arr[], int n) 
{
    if (n <= 1)
    {
        return n;
    }
    int j= 1;
  
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] != arr[i - 1])
        {
            arr[j] = arr[i];
        }
    }
    return j;
}

int main() 
{
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5},i;
    int n = sizeof(arr) / sizeof(arr[0]);
    int new= dupli(arr, n);
    printf("Enter the elements:");
    scanf("%d",&arr[i]);
    {
         for (int i = 0; i < new; i++) 
         {
            printf("%d\n", arr[i]);
         }
    }
    return 0;
}