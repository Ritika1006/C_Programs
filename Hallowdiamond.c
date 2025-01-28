#include<stdio.h>
int main()
{
    int i, j, k, rows;
    printf("Enter the no Rows =  ");
    scanf("%d", &rows);
    
    for (i = 1 ; i <= rows; i++ )
    {
        for (j = i ; j <= rows; j++ )
        {
            printf("*");
        }
        for (j = 1 ; j <= 2 * i - 2; j++ )
        {
            printf(" ");
        }
        for (k = i ; k <= rows; k++ )
        {
            printf("*");
        }
        printf("\n");
    }
    
    for (i = 1 ; i <= rows; i++ )
    {
        for (j = 1 ; j <= i; j++ )
        {
            printf("*");
            
        }
        for (k = 2 * i - 2 ; k < 2 * rows - 2; k++ )
        {
            printf(" ");
        }
        for (k = 1 ; k <= i; k++ )
        {
            printf("*");
        }
        printf("\n");
    }
}