// Problem: Longest Fibonacci Subarray
// Link to the problem: https://leetcode.com/problems/longest-fibonacci-subarray/
int longestSubarray(int *nums, int numsSize)
{
    int ans = 2, n = numsSize, count = 2;
    for (int i = 2; i < n; i++)
    {
        if (nums[i] == nums[i - 1] + nums[i - 2])
        {
            count++;
        }
        else
        {
            ans = fmax(ans, count);
            count = 2;
        }
    }
    ans = fmax(ans, count);
    return ans;
}