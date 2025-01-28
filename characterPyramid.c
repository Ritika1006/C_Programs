#include<stdio.h>
int main()
{
    int i,j,n,k;
    printf("Enter the numbers:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<2*(n-i-1);j++)
        {
           printf(" ");
        }
        for(k=0;k<2*i+1;k++)
        {
            printf(" %c",65+k);
        }
        printf("\n");
    }
    return 0;

}