// Problem: Detect Cycles in 2D Grid
// Link to the problem: https://leetcode.com/problems/detect-cycles-in-2d-grid/
class Solution
{
public:
    const vector<vector<int>> dirs = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    bool dfs(const int n, const int m, const int i, const int j, const int a, const int b, vector<vector<bool>> &vis, const vector<vector<char>> &grid)
    {
        vis[i][j] = true;
        for (int k = 0; k < 4; k++)
        {
            const int x = i + dirs[k][0], y = j + dirs[k][1];
            if (x >= 0 && y >= 0 && x < n && y < m && grid[x][y] == grid[i][j])
            {
                if (!vis[x][y])
                {
                    if (dfs(n, m, x, y, i, j, vis, grid))
                    {
                        return true;
                    }
                }
                else if (!(x == a && y == b))
                {
                    return true;
                }
            }
        }
        return false;
    }
    bool containsCycle(vector<vector<char>> &grid)
    {
        const int n = grid.size(), m = grid[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!vis[i][j])
                {
                    if (dfs(n, m, i, j, -1, -1, vis, grid))
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};