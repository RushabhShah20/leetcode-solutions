// Problem: Number of People Aware of a Secret
// Link to the problem: https://leetcode.com/problems/number-of-people-aware-of-a-secret/
class Solution
{
public:
    int peopleAwareOfSecret(int n, int delay, int forget)
    {
        long long ans = 0, mod = 1e9 + 7, share = 0;
        vector<long long> dp(n, 0);
        dp[0] = 1;
        for (int i = 1; i < n; i++)
        {
            if (i - delay >= 0)
            {
                share = (share + dp[i - delay]) % mod;
            }
            if (i - forget >= 0)
            {
                share = (share - dp[i - forget] + mod) % mod;
            }
            dp[i] = share;
        }
        for (int i = n - forget; i < n; i++)
        {
            if (i >= 0)
            {
                ans = (ans + dp[i]) % mod;
            }
        }
        return (int)ans;
    }
};