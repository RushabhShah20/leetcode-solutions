// Problem: Minimum Removals to Achieve Target XOR
// Link to the problem: https://leetcode.com/problems/minimum-removals-to-achieve-target-xor/
class Solution
{
public:
    int minRemovals(vector<int> &nums, int target)
    {
        const int n = nums.size(), mx = pow(2, 14);
        vector<int> dp(mx, -1);
        dp[0] = 0;
        for (const int num : nums)
        {
            vector<int> next = dp;
            for (int i = 0; i < mx; i++)
            {
                if (dp[i] != -1)
                {
                    const int x = i ^ num;
                    next[x] = max(next[x], dp[i] + 1);
                }
            }
            dp = next;
        }
        if (target >= mx || dp[target] == -1)
        {
            return -1;
        }
        const int ans = n - dp[target];
        return ans;
    }
};