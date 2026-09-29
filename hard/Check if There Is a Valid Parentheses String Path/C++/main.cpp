// Problem: Check if There Is a Valid Parentheses String Path
// Link to the problem: https://leetcode.com/problems/check-if-there-is-a-valid-parentheses-string-path/
class Solution
{
public:
    bool hasValidPath(vector<vector<char>> &grid)
    {
        const int n = grid.size(), m = grid[0].size(), k = n + m - 1;
        if (k & 1 || grid[0][0] != '(' || grid[n - 1][m - 1] != ')')
        {
            return false;
        }
        vector<vector<bitset<201>>> dp(n, vector<bitset<201>>(m));
        dp[0][0][1] = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                const int x = grid[i][j] == '(' ? 1 : -1;
                if (i > 0)
                {
                    dp[i][j] |= x == 1 ? dp[i - 1][j] << 1 : dp[i - 1][j] >> 1;
                }
                if (j > 0)
                {
                    dp[i][j] |= x == 1 ? dp[i][j - 1] << 1 : dp[i][j - 1] >> 1;
                }
            }
        }
        const bool ans = dp[n - 1][m - 1][0];
        return ans;
    }
};