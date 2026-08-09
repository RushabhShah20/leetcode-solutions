// Problem: Stone Game II
// Link to the problem: https://leetcode.com/problems/stone-game-ii/
class Solution
{
public:
    int stoneGameII(vector<int> &piles)
    {
        const int n = piles.size();
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
        vector<int> a(n + 1, 0);
        for (int i = n - 1; i >= 0; i--)
        {
            a[i] = a[i + 1] + piles[i];
        }
        for (int i = 0; i <= n; i++)
        {
            dp[i][n] = a[i];
        }
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = n - 1; j >= 1; j--)
            {
                for (int k = 1; k <= 2 * j && i + k <= n; k++)
                {
                    dp[i][j] = max(dp[i][j], a[i] - dp[i + k][max(j, k)]);
                }
            }
        }
        const int ans = dp[0][1];
        return ans;
    }
};