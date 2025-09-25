// Problem: Triangle
// Link to the problem: https://leetcode.com/problems/triangle/
public class Solution
{
    public int MinimumTotal(IList<IList<int>> triangle)
    {
        int n = triangle.Count();
        int[] dp = new int[n];
        for (int i = 0; i < n; i++)
        {
            dp[i] = triangle[n - 1][i];
        }
        for (int i = n - 2; i >= 0; i--)
        {
            for (int j = 0; j < triangle[i].Count(); j++)
            {
                dp[j] = triangle[i][j] + Math.Min(dp[j], dp[j + 1]);
            }
        }
        return dp[0];
    }
}