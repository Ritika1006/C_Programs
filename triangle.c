#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter the values:");
  scanf("%d %d %d",&a,&b,&c);
  if((a+b>c) && (a+c>b) && (b+c>a))
  {
    printf("it is vaild");
  }
  else
  {
    printf("it is not valid");
  }
  return 0;
}