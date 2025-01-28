#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf(" the no is prime");
    }
    else
    {
        printf("not prime");
    }
    return 0;
}