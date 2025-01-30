#include<stdio.h>
void move(int arr[], int n)
{
    int end = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[end++] = arr[i];
        }
    }
    for (i = end; i < n; i++)
    {
        arr[i] = 0;
    }
}
int main()
{
    int arr[] = {0,1,5,2,0,9,8,0,7};
    int n=(sizeof(arr) / sizeof(arr[0]));
    int i = 0;
    printf("The element are:");
    move(arr, n);
    for (i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}