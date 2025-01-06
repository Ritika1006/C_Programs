#include<stdio.h>
int main()
{
    char t,A[10]="RITIKA";
    int i=0,j,n;
    for(i=0;i<n;i++)
    
    while(A[j]!='\0')
    {
        j++;
    }
    n=j;

    i=0;
    j=n-1;
    while(i<j)
    {
        t=A[i];
        A[i]=A[j];
        A[j]=t;
        i++;
        j--;
    }
    printf("the reverse of string is=%s",A);
    return 0;
}