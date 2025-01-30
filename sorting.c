#include<stdio.h>
int main()
{
    int a[10]={3,5,7,8,10,13,45,67,15,70};
    int n,i,j,temp;
    //printf("Enter the elements:");
    for(i=0;i<10;i++)
    {
        scanf("%d\n",a[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
    }
    printf("after sorting:\n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}