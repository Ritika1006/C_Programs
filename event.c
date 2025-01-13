#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number of events:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i%3==0 && i%5==0)
        {
            continue;
        }
        if(i%4==0)
        {
            printf("\ncritical event");
        }
        else if(i%7==0)
        {
            printf("\nRouting event");
        }
        else
        {
            printf("\nSafe event");
        }
    }
    return 0;
}