#include<stdio.h>
int main()
{
    int n,r,rev=0,m;
    printf("Enter the numbers:");
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    m=n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(n==m)
    {
        printf(" %d the number is palindrome",m);
    }
    else
    {
        printf("it is not a palindrome");
    }
    return 0;
}