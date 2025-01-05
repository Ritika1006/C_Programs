#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d;
    printf("enter the values of a,b,c:");
    scanf("%d %d %d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d==0)
    {
        printf("the roots are equal");
    }
     if(d>0)
    {
        printf("the roots are real");
    }
     else
    {
        printf("the roots are imaginary");
    }
    getch();
}