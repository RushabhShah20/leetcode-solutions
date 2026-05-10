// Problem: Maximum Number of Jumps to Reach the Last Index
// Link to the problem: https://leetcode.com/problems/maximum-number-of-jumps-to-reach-the-last-index/
public class Solution
{
    public int MaximumJumps(int[] nums, int target)
    {
        int n = nums.Length;
        int[] dp = new int[n];
        for (int i = 0; i < n; i++)
        {
            dp[i] = -1;
        }
        dp[0] = 0;
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (Math.Abs(nums[i] - nums[j]) <= target && dp[j] != -1)
                {
                    dp[i] = Math.Max(dp[i], dp[j] + 1);
                }
            }
        }
        int ans = dp[n - 1];
        return ans;
    }
}