// Problem: Number of Smooth Descent Periods of a Stock
// Link to the problem: https://leetcode.com/problems/number-of-smooth-descent-periods-of-a-stock/
public class Solution
{
    public long GetDescentPeriods(int[] prices)
    {
        long ans = 0;
        int count = 1;
        List<int> a = new List<int>();
        for (int i = 1; i < prices.Length; i++)
        {
            if (prices[i] == prices[i - 1] - 1)
            {
                count++;
            }
            else
            {
                a.Add(count);
                count = 1;
            }
        }
        a.Add(count);
        for (int i = 0; i < a.Count; i++)
        {
            ans += ((long)(a[i]) * (long)(a[i] + 1) / 2);
        }
        return ans;
    }
}