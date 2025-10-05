// Problem: Longest Subsequence With Non-Zero Bitwise XOR
// Link to the problem: https://leetcode.com/problems/longest-subsequence-with-non-zero-bitwise-xor/
int longestSubsequence(int *nums, int numsSize)
{
    int z = 0;
    for (int i = 0; i < numsSize; i++)
    {
        z ^= nums[i];
    }
    if (z != 0)
    {
        return numsSize;
    }
    bool x = true;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != 0)
        {
            x = false;
            break;
        }
    }
    if (x)
    {
        return 0;
    }
    return numsSize - 1;
}