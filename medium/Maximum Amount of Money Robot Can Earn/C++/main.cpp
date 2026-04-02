// Problem: Maximum Amount of Money Robot Can Earn
// Link to the problem: https://leetcode.com/problems/maximum-amount-of-money-robot-can-earn/
class Solution
{
public:
    int maximumAmount(vector<vector<int>> &coins)
    {
        const int m = coins.size(), n = coins[0].size();
        vector<vector<vector<int>>> dp(m, vector<vector<int>>(n, vector<int>(3, INT_MIN)));
        for (int k = 0; k < 3; k++)
        {
            if (coins[0][0] >= 0)
            {
                dp[0][0][k] = coins[0][0];
            }
            else
            {
                if (k > 0)
                {
                    dp[0][0][k] = 0;
                }
                else
                {
                    dp[0][0][k] = coins[0][0];
                }
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == 0 && j == 0)
                {
                    continue;
                }
                for (int k = 0; k < 3; k++)
                {
                    int x = INT_MIN;
                    if (i > 0)
                    {
                        x = max(x, dp[i - 1][j][k]);
                    }
                    if (j > 0)
                    {
                        x = max(x, dp[i][j - 1][k]);
                    }
                    if (coins[i][j] >= 0)
                    {
                        dp[i][j][k] = x + coins[i][j];
                    }
                    else
                    {
                        int y = x + coins[i][j];
                        int z = INT_MIN;
                        if (k > 0)
                        {
                            int a = INT_MIN;
                            if (i > 0)
                            {
                                a = max(a, dp[i - 1][j][k - 1]);
                            }
                            if (j > 0)
                            {
                                a = max(a, dp[i][j - 1][k - 1]);
                            }
                            z = a;
                        }
                        dp[i][j][k] = max(y, z);
                    }
                }
            }
        }
        int ans = INT_MIN;
        for (int i = 0; i < 3; i++)
        {
            ans = max(ans, dp[m - 1][n - 1][i]);
        }
        return ans;
    }
};