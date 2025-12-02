// Problem: Best Time to Buy and Sell Stock with Transaction Fee
// Link to the problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/
public class Solution
{
    public int MaxProfit(int[] prices, int fee)
    {
        int buy = -50001, sell = 0;
        foreach (int price in prices)
        {
            buy = Math.Max(buy, sell - price);
            sell = Math.Max(sell, buy + price - fee);
        }
        int ans = sell;
        return ans;
    }
}