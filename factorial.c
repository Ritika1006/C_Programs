#include<stdio.h>
int main()
{
    int n,f;
    printf("Enter the number:");
    scanf("%d",&n);
    f=fact(n);
    printf("factorial of a number %d=%d",n,f);
    return 0;
}
int fact(int n)
{
    int i,f;
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
     return n*fact(n-1);

    }
}