// Problem: Longest Subsequence With Non-Zero Bitwise XOR
// Link to the problem: https://leetcode.com/problems/longest-subsequence-with-non-zero-bitwise-xor/
int longestSubsequence(int *nums, int numsSize)
{
    const int n = numsSize;
    int x = 0;
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
    const int ans = y ? 0 : n - 1;
    return ans;
}