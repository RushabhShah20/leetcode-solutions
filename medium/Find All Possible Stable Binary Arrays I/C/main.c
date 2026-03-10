// Problem: Find All Possible Stable Binary Arrays I
// Link to the problem: https://leetcode.com/problems/find-all-possible-stable-binary-arrays-i/
int numberOfStableArrays(int zero, int one, int limit)
{
    const long long mod = 1000000007;
    long long dp[zero + 1][one + 1][2];
    for (int i = 0; i <= zero; i++)
    {
        for (int j = 0; j <= one; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                dp[i][j][k] = 0;
            }
        }
    }
    for (int i = 0; i <= fmin(zero, limit); i++)
    {
        dp[i][0][0] = 1;
    }
    for (int j = 0; j <= fmin(one, limit); j++)
    {
        dp[0][j][1] = 1;
    }
    for (int i = 1; i <= zero; i++)
    {
        for (int j = 1; j <= one; j++)
        {
            if (i > limit)
            {
                dp[i][j][0] = (dp[i - 1][j][0] + dp[i - 1][j][1] - dp[i - limit - 1][j][1]) % mod;
            }
            else
            {
                dp[i][j][0] = (dp[i - 1][j][0] + dp[i - 1][j][1]) % mod;
            }
            dp[i][j][0] = (dp[i][j][0] + mod) % mod;
            if (j > limit)
            {
                dp[i][j][1] = (dp[i][j - 1][0] + dp[i][j - 1][1] - dp[i][j - limit - 1][0]) % mod;
            }
            else
            {
                dp[i][j][1] = (dp[i][j - 1][0] + dp[i][j - 1][1]) % mod;
            }
            dp[i][j][1] = (dp[i][j][1] + mod) % mod;
        }
    }
    const int ans = (int)((dp[zero][one][0] + dp[zero][one][1]) % mod);
    return ans;
}