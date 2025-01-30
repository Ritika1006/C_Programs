#include<stdio.h>
void frequencyRe(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        { if(arr[i]>arr[j])
        {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
     for (int i = 0; i < n; i++)
    {
        int count = 1;

        while (i < n - 1 && arr[i] == arr[i + 1])
        {
            i++;
            count++;
        }
        
        printf("%d : %d\n", arr[i], count);
    }
 
}
int main()
{
    int arr[] = {5, 8, 5, 7, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    frequencyRe(arr, n);
    return 0;
}
