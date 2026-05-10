// Problem: Maximum Number of Jumps to Reach the Last Index
// Link to the problem: https://leetcode.com/problems/maximum-number-of-jumps-to-reach-the-last-index/
int maximumJumps(int *nums, int numsSize, int target)
{
    const int n = numsSize;
    int dp[n];
    for (int i = 0; i < n; i++)
    {
        dp[i] = -1;
    }
    dp[0] = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (abs(nums[i] - nums[j]) <= target && dp[j] != -1)
            {
                dp[i] = fmax(dp[i], dp[j] + 1);
            }
        }
    }
    const int ans = dp[n - 1];
    return ans;
}