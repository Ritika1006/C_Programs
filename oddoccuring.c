#include<stdio.h>
int odd(int arr[],int n)
{
    int res=0;
    int i;
    for(i=0;i<n;i++)
    {
        res=res^arr[i];
    }
    return res;
}
int main()
{
    int n,arr[]={4,3,7,7,7,3,4,1};
    n=sizeof(arr)/sizeof(arr[0]);
    int m=odd(arr,n);
    printf("the only odd occuring numbers:%d\n",m);
    return 0;
}