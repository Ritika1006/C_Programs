#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the sides of the triangle:");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c)
    {
        printf("The triangle is equilateral\n");
    }
    else if(a==b|| b==c|| c==a)
    {
        printf("The triagle is Isoceses\n");
    }
    else
    {
        printf("The triangle is scalene\n");
    }
    return 0;
}