#include <stdio.h>
int main() 
{
    int arr[] = {1, 2, 4, 6, 3, 7, 8};  
    int n = sizeof(arr) / sizeof(arr[0]) + 1;  
    int xorArray = 0;
    int xorExpected = 0;

    for (int i = 0; i < n - 1; i++) 
    {
        xorArray = xorArray ^ arr[i];
    }
    for (int i = 1; i <= n; i++) 
    {
        xorExpected =xorExpected ^ i;
    }
    int missingNumber = xorExpected ^ xorArray;
    printf("The missing number is: %d\n", missingNumber);

    return 0;
}