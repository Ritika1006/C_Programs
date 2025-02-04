#include<stdio.h>
int pairs(int arr[],int n, int sum)
{
    int l=0,r=n-1,f=0;
    printf("sum=%d",sum);
    while(l<r)
    {
        int s=arr[l]+arr[r];
        if(s==sum)
        {
            printf("(%d ,%d)",arr[l],arr[r]);
            l++;
            r--;
            f=1;
        }
        else if(s<sum)
        {
            l++;
        }
        else
        {
            r--;
        }
    }
    if(!f)
    {
        printf("No pairs found");
    }
}
int main()
{
    int arr[]={2,1,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=10;
    pairs(arr,n,sum);
    return 0;
}