// Problem: Longest Subsequence With Non-Zero Bitwise XOR
// Link to the problem: https://leetcode.com/problems/longest-subsequence-with-non-zero-bitwise-xor/
public class Solution
{
    public int LongestSubsequence(int[] nums)
    {
        int n = nums.Length, x = 0;
        bool y = true;
        for (int i = 0; i < n; i++)
        {
            x ^= nums[i];
            if (nums[i] > 0)
            {
                y = false;
            }
        }
        if (x > 0)
        {
            return n;
        }
        int ans = y ? 0 : n - 1;
        return ans;
    }
}