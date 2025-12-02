// Problem: Best Time to Buy and Sell Stock with Transaction Fee
// Link to the problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/
int maxProfit(int *prices, int pricesSize, int fee)
{
    int buy = -50001, sell = 0;
    for (int i = 0; i < pricesSize; i++)
    {
        buy = fmax(buy, sell - prices[i]);
        sell = fmax(sell, buy + prices[i] - fee);
    }
    const int ans = sell;
    return ans;
}