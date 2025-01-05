#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a,b,hcf;
    printf("Enter the two numbers:");
    scanf("%d %d",&a,&b);

    for(i=1; i<=a && i<=b; i++)
    {
        if(a%i==0 && b%i==0)
        {
            hcf=i;
        }
    }
    printf("hcf of a=%d and b=%d is= %d\n",a,b,hcf);
    getch();
}