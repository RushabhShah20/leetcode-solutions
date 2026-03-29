// Problem: Minimum XOR Path in a Grid
// Link to the problem: https://leetcode.com/problems/minimum-xor-path-in-a-grid/
class Solution
{
public:
    int minCost(vector<vector<int>> &grid)
    {
        const int m = grid.size(), n = grid[0].size();
        vector<vector<bitset<1024>>> dp(m, vector<bitset<1024>>(n));
        dp[0][0][grid[0][0]] = 1;
        for (int i = 1; i < m; i++)
        {
            dp[i][0] = (dp[i - 1][0] << 0);
            bitset<1024> x;
            for (int k = 0; k < 1024; k++)
            {
                if (dp[i - 1][0][k])
                {
                    x[k ^ grid[i][0]] = 1;
                }
            }
            dp[i][0] = x;
        }
        for (int j = 1; j < n; j++)
        {
            bitset<1024> x;
            for (int k = 0; k < 1024; k++)
            {
                if (dp[0][j - 1][k])
                {
                    x[k ^ grid[0][j]] = 1;
                }
            }
            dp[0][j] = x;
        }
        for (int i = 1; i < m; i++)
        {
            for (int j = 1; j < n; j++)
            {
                bitset<1024> y = dp[i - 1][j] | dp[i][j - 1];
                for (int k = 0; k < 1024; k++)
                {
                    if (y[k])
                    {
                        dp[i][j][k ^ grid[i][j]] = 1;
                    }
                }
            }
        }
        for (int k = 0; k < 1024; k++)
        {
            if (dp[m - 1][n - 1][k])
            {
                return k;
            }
        }
        return 0;
    }
};