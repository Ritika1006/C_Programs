#include<stdio.h>
int bit(int n, int  k)
{
    int bit=1;
    int i;
    for(int i=1;i<k;i++)
    {
        bit=bit*2;
    }
    if(n & bit)
    {
        printf("%d th is set(1)\n",k);
    }
    else
    {
        printf("%d is not set(0)",k);
    }
}
int main()
{
    int n,k;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Enter the bits to check:");
    scanf("%d",&k);
    if(k<=0||k>sizeof(int)*8)
    {
        printf("Invalid bit");
    }
    else
    {
        bit(n,k);
    }
    return 0;
}