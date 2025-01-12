#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int sum_of_four(int a, int b, int c, int d)
{
    int sum=a+b+c+d;
    return sum;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int sum = sum_of_four(a, b, c, d);
    printf("%d\n", sum);
    
    return 0;
}