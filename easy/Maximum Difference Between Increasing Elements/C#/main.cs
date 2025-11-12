// Problem: Maximum Difference Between Increasing Elements
// Link to the problem: https://leetcode.com/problems/maximum-difference-between-increasing-elements/
public class Solution
{
    public int MaximumDifference(int[] nums)
    {
        int n = nums.Length, res = 0;
        int[] pre = new int[n], suff = new int[n];
        pre[0] = nums[0];
        suff[n - 1] = nums[n - 1];
        for (int i = 1; i < n; i++)
        {
            pre[i] = Math.Min(pre[i - 1], nums[i]);
        }
        for (int i = n - 2; i >= 0; i--)
        {
            suff[i] = Math.Max(suff[i + 1], nums[i]);
        }
        for (int i = 0; i < n; i++)
        {
            res = Math.Max(res, suff[i] - pre[i]);
        }
        if (res == 0)
            return -1;
        return res;
    }
}