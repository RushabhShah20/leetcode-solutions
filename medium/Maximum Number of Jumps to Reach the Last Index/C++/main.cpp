// Problem: Maximum Number of Jumps to Reach the Last Index
// Link to the problem: https://leetcode.com/problems/maximum-number-of-jumps-to-reach-the-last-index/
class Solution
{
public:
    int maximumJumps(vector<int> &nums, int target)
    {
        const int n = nums.size();
        vector<int> dp(n, 0);
        for (int i = 1; i < n; i++)
        {
            for (int j = i - 1; j >= 0; j--)
            {
                if (((nums[j] - nums[i]) <= target) && ((nums[j] - nums[i]) >= -target))
                {
                    if (j == 0 || dp[j] != 0)
                    {
                        dp[i] = max(dp[i], dp[j] + 1);
                    }
                }
            }
        }
        const int ans = dp[n - 1];
        if (ans == 0)
        {
            return -1;
        }
        else
        {
            return ans;
        }
    }
};