#include<stdio.h>

int findGCD(int a,int b)
{
    while(b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main()
{
    int num1,num2,gcd;
    printf("Enter two integer:");
    scanf("%d %d",&num1,&num2);
    gcd=findGCD(num1, num2);
    printf("GCD of %d and %d is %d\n",num1,num2,gcd);
    return 0;
}