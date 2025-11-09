// Problem: Maximum Path Score in a Grid
// Link to the problem: https://leetcode.com/problems/maximum-path-score-in-a-grid/
class Solution
{
public:
    int maxPathScore(vector<vector<int>> &grid, int k)
    {
        int m = grid.size(), n = grid[0].size();
        vector<vector<vector<int>>> dp(m, vector<vector<int>>(n, vector<int>(k + 1, -1)));
        int x = ((grid[0][0] == 0) ? (0) : (1)), y = grid[0][0];
        dp[0][0][x] = y;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int c = 0; c <= k; ++c)
                {
                    if (dp[i][j][c] == -1)
                    {
                        continue;
                    }
                    int current_score = dp[i][j][c];
                    if (i + 1 < m)
                    {
                        int next_val = grid[i + 1][j];
                        int next_cost = c + (next_val == 0 ? 0 : 1);
                        int next_score = current_score + (next_val);
                        if (next_cost <= k)
                        {
                            dp[i + 1][j][next_cost] = max(dp[i + 1][j][next_cost], next_score);
                        }
                    }
                    if (j + 1 < n)
                    {
                        int next_val = grid[i][j + 1];
                        int next_cost = c + (next_val == 0 ? 0 : 1);
                        int next_score = current_score + (next_val);
                        if (next_cost <= k)
                        {
                            dp[i][j + 1][next_cost] = max(dp[i][j + 1][next_cost], next_score);
                        }
                    }
                }
            }
        }
        int ans = -1;
        for (int i = 0; i <= k; ++i)
        {
            ans = max(ans, dp[m - 1][n - 1][i]);
        }
        return ans;
    }
};
