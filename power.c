#include<stdio.h>
#include<conio.h>
void main()
{
    int i,x,y,r=1;
    printf("Enter the base(x):");
    scanf("%d",&x);
   
    printf("Enter the base(y):");
    scanf("%d",&y);

    for(i=1; i<=y;i++)
    {
        r=r*x;
    }
    printf("%d raised to the power %d =%d\n",x,y,r);
    getch();
}