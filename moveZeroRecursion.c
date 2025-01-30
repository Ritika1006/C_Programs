#include<stdio.h>
void moveRe(int arr[], int n, int index, int nonZero)
 {
    if (index == n)
    {
        return;
    }
    if (arr[index] != 0)
     {
        arr[nonZero] = arr[index];
        if (index != nonZero) 
        {
            arr[index] = 0;
        }
        nonZero++;
    }
    moveRe(arr, n, index + 1, nonZero);
}

int main() 
{
    int arr[] = {0, 1, 5, 2, 0, 9, 8, 0, 7};
    
    int n=(sizeof(arr) / sizeof(arr[0]));
    int i;
    moveRe(arr, n, 0, 0);

    printf("Array after moving zeros to the end: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}