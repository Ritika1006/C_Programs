#include<stdio.h>
int count(int n)
{
    int count=0;
    while(n>0)
    {
        count=count+(n&1);
        n=n>>1;
    }
    return count;
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("No. of bits=%d\n",count(n));
    return 0;
}