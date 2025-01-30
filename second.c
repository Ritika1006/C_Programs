#include<stdio.h>
int main()
{
    int arr[10],n,i,greatest;
    printf("Enter the elements in array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     greatest=arr[0];
     for(i=0;i<10;i++)
     {
        if(greatest<arr[i])
        {
             greatest=arr[i];
        }
     }
     int sec=arr[i];
     for(i=0;i<10;i++)
     {
        if(arr[i]<greatest && sec>arr[i-1])
        {
            sec=arr[i];
        }
     }
     printf("The greatest no:%d\n",greatest);
     printf("The second greatest:%d",sec);
     return 0;
}