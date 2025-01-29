#include<stdio.h>
int power(int n ,int base)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return base*power(n-1,base);
    }
}
int main()
{
    int n,base;
    printf("Enter the number:");
    scanf("%d %d",&n,&base);
    printf("2^%d=%d\n",n,power(n,base));
    return 0;
}