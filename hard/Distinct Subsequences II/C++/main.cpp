// Problem: Distinct Subsequences II
// Link to the problem: https://leetcode.com/problems/distinct-subsequences-ii/
class Solution
{
public:
    int distinctSubseqII(string s)
    {
        const int n = s.size(), m = 1000000007;
        vector<int> dp(n + 1), a(26, -1);
        dp[0] = 1;
        for (int i = 0; i < n; i++)
        {
            const int x = s[i] - 'a';
            dp[i + 1] = (dp[i] << 1) % m;
            if (a[x] >= 0)
            {
                dp[i + 1] -= dp[a[x]];
            }
            dp[i + 1] %= m;
            a[x] = i;
        }
        dp[n]--;
        if (dp[n] < 0)
        {
            dp[n] += m;
        };
        const int ans = dp[n];
        return ans;
    }
};