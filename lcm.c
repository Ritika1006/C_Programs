#include<stdio.h>
int main()
{
    int n,a,b;
    printf("Enter the two values:");
    scanf("%d %d",&a,&b);
    n=(a>b)?a:b;
    while(n%a!=0|| n%b!=0)
    {
        n++;
    }
    printf("Lcm of %d and %d=%d\n",n,a,b);
    return 0;

}