#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    int a=0,b=1,c;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("Enter the fibonacci series:");
    for(i=3;i<=n;i++)
    {
        if(i==1)
        {
            printf("%d",a);
            continue;
        }
        if (i==2)
        {
            printf("%d",b);
        }
            c=a+b;
            printf("%d",c);
            a=b;
            b=c;
    }
    
    getch();
}