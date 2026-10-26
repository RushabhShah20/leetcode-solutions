// Problem: Count Islands With Total Value Divisible by K
// Link to the problem: https://leetcode.com/problems/count-islands-with-total-value-divisible-by-k/
class Solution
{
public:
    long long dfs(const int x, const int y, const int n, const int m, vector<vector<int>> &grid)
    {
        long long z = grid[x][y];
        grid[x][y] = 0;
        const vector<int> a = {-1, 0, 1, 0}, b = {0, 1, 0, -1};
        for (int i = 0; i < 4; i++)
        {
            const int c = x + a[i], d = y + b[i];
            if (c >= 0 && c < n && d >= 0 && d < m && grid[c][d] > 0)
            {
                z += dfs(c, d, n, m, grid);
            }
        }
        return z;
    }
    int countIslands(vector<vector<int>> &grid, int k)
    {
        const int n = grid.size(), m = grid[0].size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] > 0 && dfs(i, j, n, m, grid) % k == 0)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};