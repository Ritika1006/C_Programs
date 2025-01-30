#include<stdio.h>
int sorting(int a[],int n)
{
      for(int i = 0; i < n - 1; i++) 
      {
        if(a[i] > a[i + 1]) 
        {
            return 0; 
        }
      }
    return 1; 
}
int main()
{
    int a[6]={2,5,7,10,4,8};
    int n=6;
    if(sorting(a,n))
    {
        printf("The array is sorted:\n");
    }
    else
    {
        printf("not sorted");
    }
    return 0;
}