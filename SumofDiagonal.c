#include<stdio.h>
int main()
{
    int arr[3][3],i,j,n,s=0,l=0,r=0;
    printf("Enter the elements of 3x3 in the matrix:");
    scanf("%d",&arr[3][3]);
    int matrix[n][n];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
                scanf("%d",&arr[3][3]);
                if(i==j)
                {
                    l=l+arr[i][j];
                }
                if(i+j==2)
                {
                    r=r+arr[3][3];
                }
        }
        printf("sum of left diagonal=%d\n",l);
        printf("sum of right diagonl=%d\n",r);
    }
    return 0;
}