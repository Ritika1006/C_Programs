#include<stdio.h>
int maxChocolates(int arr[], int n, int k)
{
   int sum;
   int maxSum = 0;
   for(int i=0;i<n;i++)
   {
      sum=0;
      for(int j=i;j<n;j++)
      {
         sum+=arr[j];
         if(sum%k==0 && sum>maxSum)
            maxSum=sum;
      }
   }
   
   return (maxSum / k);
}
int main(){
   int arr[] = { 2, 7, 6, 1, 4, 5 ,5, 3 };
   int n =8;
   int k =3;
   printf("Maximum number of chocolates to be distributed equally among k students: %d   ",maxChocolates(arr, n, k));
   return 0;
}