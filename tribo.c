#include<stdio.h>
int tribo(int n)
{
    if(n==0||n==1)
    {
        return 0;
    }
    if(n==2)
    {
        return 1;
    }
    return tribo(n-1)+tribo(n-2)+tribo(n-3);
}
void printtribo(int n)
{
    for(int i=0;i,n;i++)
    {
        printf("%d",tribo(i));
        if(i<n-1)
        {
            printf(" ");
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printtribo(n);
    return 0;
}