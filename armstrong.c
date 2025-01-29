#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,rev=0,m,sum=0,d=0;
    printf("Enter the numbers:");
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        d=d+1;
        n=n/10;
    }
    n=m;
    while(n>0)
    {
        r=n%10;
        sum=sum+pow(r,d);
        n=n/10;
    }
    
    if(sum==m)
    {
        printf(" %d the number is armstrong",m);
    }
    else
    {
        printf("it is not a armstrong");
    }
    return 0;
}