// Problem: Best Time to Buy and Sell Stock
// Link to the problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
public class Solution
{
    public int MaxProfit(int[] prices)
    {
        int ans = 0;
        int minPrice = Int32.MaxValue;
        for (int i = 0; i < prices.Length; i++)
        {
            minPrice = Math.Min(minPrice, prices[i]);
            ans = Math.Max(ans, prices[i] - minPrice);
        }
        return ans;
    }
}