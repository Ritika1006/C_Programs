#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    printf("Enter the number to display the multiplication of any table:");
    scanf("%d",&n);
    printf("Multiplication of table %d in reverse order:\n",n);
    for(i=10;i>=1;i--)
    {
        printf("%d x %d= %d\n",n,i,n*i);
    }
    getch();
}