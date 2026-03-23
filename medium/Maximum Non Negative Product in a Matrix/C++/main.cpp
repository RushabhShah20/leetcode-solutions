// Problem: Maximum Non Negative Product in a Matrix
// Link to the problem: https://leetcode.com/problems/maximum-non-negative-product-in-a-matrix/
class Solution
{
public:
    int maxProductPath(vector<vector<int>> &grid)
    {
        const int m = grid.size(), n = grid[0].size();
        vector<vector<long long>> mx(m, vector<long long>(n)), mn(m, vector<long long>(n));
        mx[0][0] = mn[0][0] = grid[0][0];
        for (int i = 1; i < n; i++)
        {
            mx[0][i] = mn[0][i] = mx[0][i - 1] * grid[0][i];
        }
        for (int i = 1; i < m; i++)
        {
            mx[i][0] = mn[i][0] = mx[i - 1][0] * grid[i][0];
        }
        for (int i = 1; i < m; i++)
        {
            for (int j = 1; j < n; j++)
            {
                if (grid[i][j] >= 0)
                {
                    mx[i][j] = max(mx[i - 1][j], mx[i][j - 1]) * grid[i][j];
                    mn[i][j] = min(mn[i - 1][j], mn[i][j - 1]) * grid[i][j];
                }
                else
                {
                    mx[i][j] = min(mn[i - 1][j], mn[i][j - 1]) * grid[i][j];
                    mn[i][j] = max(mx[i - 1][j], mx[i][j - 1]) * grid[i][j];
                }
            }
        }
        long long ans = mx[m - 1][n - 1];
        if (ans < 0)
        {
            return -1;
        }
        else
        {
            ans %= 1000000007;
            return ans;
        }
    }
};