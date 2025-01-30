#include<stdio.h>
void countFrequency(int *arr, int n)
{

    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        int count = 0;

        for (int j = i+1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            continue;
        }    
        for(int j = 0;j<=i;j++)
        {
            if(arr[i]==arr[j])
                count +=1;
        }
        
        printf("Frequency of %d is : %d\n", arr[i], count);
    }
}

int main()
{
    int arr[] = {5, 8, 5, 7, 8, 10};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    countFrequency(arr, n);
    
    return 0;
}