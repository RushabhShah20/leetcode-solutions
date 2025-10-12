// Problem: Longest Fibonacci Subarray
// Link to the problem: https://leetcode.com/problems/longest-fibonacci-subarray/
public class Solution
{
    public int LongestSubarray(int[] nums)
    {
        int ans = 2, n = nums.Length, count = 2;
        for (int i = 2; i < n; i++)
        {
            if (nums[i] == nums[i - 1] + nums[i - 2])
            {
                count++;
            }
            else
            {
                ans = Math.Max(ans, count);
                count = 2;
            }
        }
        ans = Math.Max(ans, count);
        return ans;
    }
}