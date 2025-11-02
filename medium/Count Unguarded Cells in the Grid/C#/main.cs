// Problem: Count Unguarded Cells in the Grid
// Link to the problem: https://leetcode.com/problems/count-unguarded-cells-in-the-grid/
public class Solution
{
    public int CountUnguarded(int m, int n, int[][] guards, int[][] walls)
    {
        int[,] grid = new int[m, n];
        foreach (int[] wall in walls)
        {
            grid[wall[0], wall[1]] = 2;
        }
        foreach (int[] guard in guards)
        {
            grid[guard[0], guard[1]] = 2;
        }
        int[] dr = { -1, 0, 1, 0 }, dc = { 0, 1, 0, -1 };
        foreach (int[] guard in guards)
        {
            int gr = guard[0], gc = guard[1];
            for (int i = 0; i < 4; i++)
            {
                int r = gr + dr[i], c = gc + dc[i];
                while (r >= 0 && r < m && c >= 0 && c < n && grid[r, c] < 2)
                {
                    grid[r, c] = 1;
                    r += dr[i];
                    c += dc[i];
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i, j] == 0)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
}