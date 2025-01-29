#include<stdio.h>
#include<string.h>
int rev(char A[],int i, int j)
{
    if(i>=j)
    {
        return 0;
    }
    char t=A[i];
    A[i]=A[j];
    A[j]=t;
    rev(A,i+1,j-1);
}
int main()
{
    char A[100];
    int l;
    printf("Enter the string:");
    scanf("%d",A);
    l=strlen(A);
    rev(A,0,l-1);
    printf("Reverse the string=%s\n",A);
    return 0;
}