#include<stdio.h>
int main()
{
    int arr[] = {5, 7, 4, 8, 3};     
    int length = sizeof(arr)/sizeof(arr[0]);    
    int n = 3;    
        
    printf("Enter the array: \n");    
    for (int i = 0; i < length; i++)
    {     
        printf("%d ", arr[i]);     
    }      
        
    for(int i = 0; i < n; i++)
    {    
        int j, first;    
        first = arr[0];    
        
        for(j = 0; j < length-1; j++)
        {    
            arr[j] = arr[j+1];    
        }    
        arr[j] = first;    
    }    
        
    printf("\n");    
        
    printf("Array after left rotation: \n");    
    for(int i = 0; i < length; i++)
    {    
        printf("%d ", arr[i]);    
    }    
    return 0;    
}    