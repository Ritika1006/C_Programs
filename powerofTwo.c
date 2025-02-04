#include<stdio.h>
int power(int n)
{
    if(n<=0)
    {
        return 0;
    }
    else
    {
        return (n&(n-1))==0;
    }
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(power(n))
    {
        printf("%d is a power of two\n",n);
    }
    else
    {
         printf("%d is not a power of two\n",n);
    }
    return 0;
}