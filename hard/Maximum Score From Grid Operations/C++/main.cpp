// Problem: Maximum Score From Grid Operations
// Link to the problem: https://leetcode.com/problems/maximum-score-from-grid-operations/
class Solution
{
public:
    long long maximumScore(vector<vector<int>> &grid)
    {
        const int n = grid.size();
        if (n == 1)
        {
            return 0;
        }
        vector<vector<vector<long long>>> dp(n, vector<vector<long long>>(n + 1, vector<long long>(n + 1, 0)));
        vector<vector<long long>> mx(n + 1, vector<long long>(n + 1, 0)), suf(n + 1, vector<long long>(n + 1, 0)), cs(n, vector<long long>(n + 1, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cs[i][j] = cs[i][j - 1] + grid[j - 1][i];
            }
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                for (int k = 0; k <= n; k++)
                {
                    if (j <= k)
                    {
                        const long long x = cs[i][k] - cs[i][j];
                        dp[i][j][k] = max(dp[i][j][k], suf[k][0] + x);
                    }
                    else
                    {
                        const long long x = cs[i - 1][j] - cs[i - 1][k];
                        dp[i][j][k] = max({dp[i][j][k], mx[k][j] + x, suf[k][j]});
                    }
                }
            }
            for (int j = 0; j <= n; j++)
            {
                mx[j][0] = dp[i][j][0];
                for (int k = 1; k <= n; k++)
                {
                    const long long x = k > j ? (cs[i][k] - cs[i][j]) : 0;
                    mx[j][k] = max(mx[j][k - 1], dp[i][j][k] - x);
                }
                suf[j][n] = dp[i][j][n];
                for (int k = n - 1; k >= 0; k--)
                {
                    suf[j][k] = max(suf[j][k + 1], dp[i][j][k]);
                }
            }
        }
        long long ans = 0;
        for (int i = 0; i <= n; i++)
        {
            ans = max({ans, dp[n - 1][n][i], dp[n - 1][0][i]});
        }
        return ans;
    }
};