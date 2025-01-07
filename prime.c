#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,f=0;
    printf("Enter the number:");
    scanf("%d",&n);
    if (n<=1)
    {
        printf("the no is not prime");
    }
    for ( i = 2; i <=n/2; i++)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }
    }
    if(f==0)
    {
        printf("the no is prime=%d\n",n);
    }
    else
    {
        printf("the no is not prime=%d",n);
    }
    
    getch();
}