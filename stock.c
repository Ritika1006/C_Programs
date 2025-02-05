#include <stdio.h>
int main() 
{
    int prices[] = {4, 1, 6, 2, 6, 4};
    int n = sizeof(prices) / sizeof(prices[0]);
    
    int minPrice = prices[0];
    int maxProfit = 0;
    for (int i = 1; i < n; i++) 
    {
        int profit = prices[i] - minPrice;
        if (profit > maxProfit) 
        {
            maxProfit = profit;
        }

        if (prices[i] < minPrice) 
        {
            minPrice = prices[i];
        }
    }
    printf("Maximum profit: %d\n", maxProfit);

    return 0;
}