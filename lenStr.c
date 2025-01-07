#include<stdio.h>
int main()
{
    int l=0,i=0;
    char A[]="RITIKA";
    while(A[i]!='\0')
    {
        l=l+1;
        i=i+1;
    }
    printf("The length of the string=%d",l);
    return 0;
}