#include<stdio.h>
int num(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        num(n-1);
        printf("%d",n);
    }
}
int main()
{
    int n;
    printf("Enter the numbers:");
    scanf("%d",&n);
    printf("%d",num(n));
    return 0;
}