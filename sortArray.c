#include<stdio.h>
int sort(int arr[],int n)
{
    int low=0,high=n-1,mid=0;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            int t=arr[low];
            arr[low]=arr[mid];
            arr[mid]=t;
            low++;
            mid++;
        }
        else if(arr[mid==1])
        {
            mid++;
        }
        else
        {
            int t=arr[mid];
            arr[mid]=arr[high];
            arr[high]=t;
            high--;
        }
    }
}
int main() 
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array (only 0, 1, or 2):\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    sort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}





















//int  array(int arr[],int n)
//{
   // int i;
    //for(i=0;i<n;i++)
    //{
      //  printf("%d",&arr[i]);
    //}
   // printf("\n");
//}
//int main()
//{
  //  int arr[8],i,n;
    //printf("Enter the elements:");
 //   scanf("%d",&n);
   // array(arr,n);
    //int result=sort(arr,n);
  //  printf("After Sorted array:%d",result);
    //array(arr,n);
    //return 0;
//}