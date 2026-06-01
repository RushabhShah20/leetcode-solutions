// Problem: Minimum Cost of Buying Candies With Discount
// Link to the problem: https://leetcode.com/problems/minimum-cost-of-buying-candies-with-discount/
public class Solution
{
    public int MinimumCost(int[] cost)
    {
        int n = cost.Length, ans = 0;
        Array.Sort(cost);
        for (int i = n - 1; i >= 0; i -= 3)
        {
            if (i - 1 >= 0)
            {
                ans += cost[i] + cost[i - 1];
            }
            else
            {
                ans += cost[i];
            }
        }
        return ans;
    }
}