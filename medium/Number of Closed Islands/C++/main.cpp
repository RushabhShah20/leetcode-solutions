// Problem: Number of Closed Islands
// Link to the problem: https://leetcode.com/problems/number-of-closed-islands/
class Solution
{
public:
    bool dfs(const int x, const int y, const int n, const int m, vector<vector<int>> &grid)
    {
        if (x < 0 || x >= n || y < 0 || y >= m)
        {
            return false;
        }
        if (grid[x][y] == 1)
        {
            return true;
        }
        grid[x][y] = 1;
        const bool a = dfs(x - 1, y, n, m, grid);
        const bool b = dfs(x + 1, y, n, m, grid);
        const bool c = dfs(x, y - 1, n, m, grid);
        const bool d = dfs(x, y + 1, n, m, grid);
        const bool ans = a && b && c && d;
        return ans;
    }
    int closedIsland(vector<vector<int>> &grid)
    {
        const int n = grid.size(), m = grid[0].size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 0)
                {
                    if (dfs(i, j, n, m, grid))
                    {
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};