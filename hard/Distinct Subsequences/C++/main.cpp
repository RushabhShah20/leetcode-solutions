// Problem: Distinct Subsequences
// Link to the problem: https://leetcode.com/problems/distinct-subsequences/
class Solution
{
public:
    int numDistinct(string s, string t)
    {
        const int m = s.size(), n = t.size();
        vector<vector<unsigned int>> dp(m + 1, vector<unsigned int>(n + 1));
        for (int i = 0; i <= m; i++)
        {
            dp[i][n] = 1;
        }
        for (int j = n - 1; j >= 0; j--)
        {
            for (int i = m - 1; i >= 0; i--)
            {
                if (s[i] == t[j])
                {
                    dp[i][j] = dp[i + 1][j + 1] + dp[i + 1][j];
                }
                else
                {
                    dp[i][j] = dp[i + 1][j];
                }
            }
        }
        const int ans = dp[0][0];
        return ans;
    }
};