// Problem: Best Time to Buy and Sell Stock
// Link to the problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
int maxProfit(int *prices, int pricesSize)
{
    int ans = 0;
    int minPrice = INT_MAX;
    for (int i = 0; i < pricesSize; i++)
    {
        minPrice = fmin(minPrice, prices[i]);
        ans = fmax(ans, prices[i] - minPrice);
    }
    return ans;
}