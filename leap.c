#include<stdio.h>
int main()
{
    int year;
    printf("enter the year:");
    scanf("%d",&year);
    if(year % 400==0)
    {
        printf("the year is leap year");
    }
    else if(year % 100==0)
    {
        printf(" is not the leap year");
    }
    else if(year % 4==0)
    {
    printf("is the leap year");
    }
    else
    {
        printf("is not the leap year");
    }
    return 0;
}