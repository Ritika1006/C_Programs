#include<stdio.h>

int fibo(int n)
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
        return (fibo(n-1)+fibo(n-2));
    }
}
int main()
{
    int n;
    printf("Enter the numbers:");
    scanf("%d",&n);
    {
        printf("%d",fibo(n));
    }
    return 0;
}
