// Problem: House Robber
// Link to the problem: https://leetcode.com/problems/house-robber/
class Solution
{
public:
    int rob(vector<int> &nums)
    {
        const int n = nums.size();
        if (n == 1)
        {
            return nums[0];
        }
        else
        {
            vector<int> dp(n);
            dp[0] = nums[0];
            dp[1] = max(nums[0], nums[1]);
            for (int i = 2; i < n; i++)
            {
                dp[i] = max(dp[i - 2] + nums[i], dp[i - 1]);
            }
            const int ans = dp[n - 1];
            return ans;
        }
    }
};