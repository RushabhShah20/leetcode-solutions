// Problem: Number of Closed Islands
// Link to the problem: https://leetcode.com/problems/number-of-closed-islands/
public class Solution
{
    public bool dfs(int x, int y, int n, int m, int[][] grid)
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
        bool a = dfs(x - 1, y, n, m, grid);
        bool b = dfs(x + 1, y, n, m, grid);
        bool c = dfs(x, y - 1, n, m, grid);
        bool d = dfs(x, y + 1, n, m, grid);
        bool ans = a && b && c && d;
        return ans;
    }
    public int ClosedIsland(int[][] grid)
    {
        int n = grid.Length, m = grid[0].Length;
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
}