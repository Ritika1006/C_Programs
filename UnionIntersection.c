#include<stdio.h>
int u(int arr1[], int n1, int arr2[],int n2)
{
    int i=0,j=0;
    printf("Union:");
    while(i<n1 && j<n2) 
    {
        if(arr1[i]<arr2[j])
        {
            printf("\n%d",arr1[i]);
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            printf("\n%d",arr2[j]);
            j++;
        }
        else
        {
            printf("\n%d",arr2[j]);
            i++;
            j++;
        }
    }
    while(i<n1)
    {
        printf("\n%d",arr1[i]);
        i++;
    }
    while(j<n2)
    {
        printf("\n%d",arr2[j]);
        j++;
    }
}
int inter(int arr1[],int n1, int arr2[],int n2)
{
    int i=0,j=0;
    printf("Intersection:");
    while(i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j])
        {
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            j++;
        }
        else
        {
            printf("\n%d",arr1[i]);
            i++;
            j++;
        }
    }
    printf("\n");
}
int main()
{
    
   
    int arr1[]={1,2,4,6,8};
    int arr2[]={2,3,6,8};
     
     printf("Enter the elements in the array: ");
     u(arr1, 5, arr2,4);
     inter(arr1, 5, arr2,4);
    //int r1=union(arr1,n1,arr2,n2);
    //int r2=intersection(arr1,n1,arr2,n2);

    //printf("%d",r1);
    //printf("%d",r2);
    return 0;
}