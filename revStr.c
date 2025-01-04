#include<stdio.h>
int main()
{
    char t,A[]="Ritika";
    int i=0,n,j;
   // printf("Enter the string\n");
    scanf("%s",A);
    for(i=0;i<n;i++)
    {
        i++;
    }
    i=0;
    j=i-1;
    while(i<j)
    {
        t=A[i];
        A[i]=A[j];
        A[j]=t;
    }
    printf("Reverse the string=%s",A);
    return 0;
}