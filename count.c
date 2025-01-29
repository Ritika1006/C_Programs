#include<stdio.h>
int countD(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return 1+countD(n/10);
    }
}
int main()
{
    int n,r;
    printf("Enter the numbers");
    scanf("%d",&n);
    if(n==0)
    {
        printf("numbers of digit:");
    }
    else
    {
        r=countD(n);
        printf("number of digit=%d\n",r);
    }
    return 0;
}