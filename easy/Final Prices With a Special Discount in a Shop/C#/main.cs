// Problem: Final Prices With a Special Discount in a Shop
// Link to the problem: https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/
public class Solution
{
    public int[] FinalPrices(int[] prices)
    {
        int[] ans = new int[prices.Length];
        for (int i = 0; i < prices.Length; i++)
        {
            ans[i] = prices[i];
            for (int j = i + 1; j < prices.Length; j++)
            {
                if (prices[j] <= prices[i])
                {
                    ans[i] = prices[i] - prices[j];
                    break;
                }
            }
        }
        return ans;
    }
}