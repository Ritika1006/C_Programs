#include<stdio.h>
int fiboN(int n)
{
    if(n==0)
    {
        return 1;
    }
    else if(n==1)
    {
        return 0;
    }
    else
    {
        return (fiboN(n-1)+fiboN(n-2));
    }
}
int main()
{
    int n,f;
    printf("Enter the numbers:");
    scanf("%d",&n);
    f=fiboN(n);
    {
        printf("%d",f);
    }
    return 0;
}