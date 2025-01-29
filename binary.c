#include<stdio.h>
int binary(int a[],int start, int end, int m)
{
    if(start>end)
    {
        return -1;
    }
    int mid=start+(end-start);
    
     if(a[mid]==m)
    {
        return mid;
    }
    if(a[mid]>m)
        return binary(a,start,mid-1,m);
        return binary(a,mid+1,end,m);
}
int main()
{
    int a[]={2,5,4,7,8,9,4,32,45,21};
    int n=sizeof(a)/sizeof(a[0]);
    int m,result;
    printf("enter the elements:");
    scanf("%d",&m);
    result=binary(a,0,n-1,m);
    if(result ! = -1)
    {
        printf("element found\n",result);
    }
    else
    {
        printf("element not found");
    }
    return 0;
}