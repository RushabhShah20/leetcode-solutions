// Problem: Climbing Stairs II
// Link to the problem: https://leetcode.com/problems/climbing-stairs-ii/
class Solution
{
public:
    int climbStairs(int n, vector<int> &costs)
    {
        vector<long long> dp(n + 1, LLONG_MAX);
        dp[0] = 0;
        for (int i = 0; i < n; i++)
        {
            if (dp[i] == LLONG_MAX)
                continue;
            for (int j = 1; j <= 3 && i + j <= n; j++)
            {
                int x = i + j;
                long long y = costs[x - 1] + (long long)j * j;
                dp[x] = min(dp[x], dp[i] + y);
            }
        }
        return (int)dp[n];
    }
};