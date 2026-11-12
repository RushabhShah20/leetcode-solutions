// Problem: Longest Strictly Increasing or Strictly Decreasing Subarray
// Link to the problem: https://leetcode.com/problems/longest-strictly-increasing-or-strictly-decreasing-subarray/
public class Solution
{
    public int LongestMonotonicSubarray(int[] nums)
    {
        int n = nums.Length;
        int a = 1, b = 1, c = 1, d = 1;
        for (int i = 1; i < n; i++)
        {
            if (nums[i] > nums[i - 1])
            {
                c++;
                a = Math.Max(a, c);
                d = 1;
            }
            else if (nums[i] < nums[i - 1])
            {
                d++;
                b = Math.Max(b, d);
                c = 1;
            }
            else
            {
                c = 1;
                d = 1;
            }
        }
        int ans = Math.Max(a, b);
        return ans;
    }
}