#include<stdio.h>

int find_sum(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
float find_average(int arr[],int size)
{
    int sum=find_sum(arr,size);
    return (float)sum/size;
}
int find_max(int arr[],int size)
{
    int max=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]<max)
        {
            max=arr[i];
        }
    }
    return max;
}
int find_min(int arr[],int size)
{
    int min=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}
int main()
{
    int arr[]={10,20,30,40,50};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("sum=%d\n",find_sum(arr,size));
    printf("Average=%2f\n",find_average(arr,size));
    printf("min=%d\n",find_min(arr,size));
    printf("max=%d\n",find_max(arr,size));

    return 0;
}