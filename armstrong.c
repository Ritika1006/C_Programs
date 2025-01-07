#include <stdio.h>
#include<conio.h>
#include <math.h>

void main() 
{
    int n, m,r, sum=0, d=0;

    printf("Enter a number: ");
    scanf("%d", &n);

    m = n;

    while (n>0)
    {
        d=d+1;
        n=n/10;
    }

    n= m;

    while (n>0)
     {
        r = n% 10;  
        sum= sum+pow(r,d);  
        n = n/10;  
    }

    if (sum == m)
        printf("%d is an Armstrong number.\n", m);
    else
        printf("%d is not an Armstrong number.\n", m);

    getch();
}