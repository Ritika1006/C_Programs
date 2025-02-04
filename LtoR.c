#include<stdio.h>
int xor_range(int l, int r) 
{
    int result = 0;
    for (int i = l; i <= r; i++) 
    {
        result =result ^ i;  
    }
    return result;
}

int main()
{
    int l, r;
    printf("Enter range (l and r): ");
    scanf("%d %d", &l, &r);
    
    printf("XOR of numbers from %d to %d is: %d\n", l, r, xor_range(l, r));
    

}