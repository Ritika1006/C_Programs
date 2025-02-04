#include<stdio.h>
int flip(int n)
{
    int count=0;
    while(n>0)
    {
        //count=count+(n&1);
        //n>>=1;
        count++;
        n &= (n - 1);
    }
    return count;
}
int bitsflip(int a,int b)
{
    return flip(a^b);
}
int main()
{
    int a,b;
    printf("Enter the two numbers a and b:");
    scanf("%d %d",&a,&b);
    printf("Numbers of bits to be fliped %d to %d: %d",a,b,bitsflip(a,b));
    return 0;
}