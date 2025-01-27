#include<stdio.h>
int main()
{
    int i,j,n,k;
    printf("Enter the numbers:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        for(j=0;j<2*i;j++)
        {
            printf(" ");
        }
        for(k=0;k<2*(n-i)-1;k++)
        {
            printf("%d",k+1);
        }
        for(int m=i-j;m>=1;m--)
        {
            printf("%d",m);
        }
        printf("\n");
    }
    return 0;
}