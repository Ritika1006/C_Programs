#include<stdio.h>
int missing(int arr[],int n)
{
    int m=n+1;
    int total=(n*(n+1))/2,sum=0;
    for(int i=0;i<n-1;i++)
    {
        sum=sum+arr[i];
    }
    return total-sum;
}
int main()
{
    int arr[]={1,2,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("The missing number is:%d\n",missing(arr,n));
    return 0;
}