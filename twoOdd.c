#include<stdio.h>
int xor(int arr[],int n)
{
    int a=0,x=0,y=0,setbit=0;
    int i;
    for(i=0;i<n;i++)
    {
        a=a^arr[i];
    }
    setbit=a & (-a);
    for(i=0;i<n;i++)
    {
        if(arr[i]&setbit)
        {
            x=x^arr[i];
        }
        else
        {
            y=y^arr[i];
        }
    }
    printf("The two odd occuring numbers %d and %d:\n",x,y);
}
int main()
{
    int arr[]={3,5,3,7,7,4,9,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    xor(arr,n);
    return 0;
}

   /// printf("the two odd occuring no %d and %d\n",xor(arr,n));
