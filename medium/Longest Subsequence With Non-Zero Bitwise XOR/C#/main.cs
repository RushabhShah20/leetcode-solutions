// Problem: Longest Subsequence With Non-Zero Bitwise XOR
// Link to the problem: https://leetcode.com/problems/longest-subsequence-with-non-zero-bitwise-xor/
public class Solution
{
    public int LongestSubsequence(int[] nums)
    {
        int n = nums.Length;
        int z = 0;
        foreach (int num in nums)
        {
            z ^= num;
        }
        if (z != 0)
        {
            return n;
        }
        bool x = true;
        foreach (int num in nums)
        {
            if (num != 0)
            {
                x = false;
                break;
            }
        }
        if (x)
        {
            return 0;
        }
        return n - 1;
    }
}