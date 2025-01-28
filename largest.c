#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the nubers:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        printf("a is the largest no");
    }
    else if(b>c)
    {
        printf("b is the largest no");
    }
    else
    {
        printf("c is the largest no");
    }
    return 0;
}