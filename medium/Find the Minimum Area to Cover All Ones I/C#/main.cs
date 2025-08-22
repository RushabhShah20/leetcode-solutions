// Problem: Find the Minimum Area to Cover All Ones I
// Link to the problem: https://leetcode.com/problems/find-the-minimum-area-to-cover-all-ones-i/
public class Solution
{
    public int MinimumArea(int[][] grid)
    {
        int m = grid.Length, n = grid[0].Length;
        int a = Int32.MaxValue, b = Int32.MaxValue, c = Int32.MinValue, d = Int32.MinValue;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 1)
                {
                    a = Math.Min(a, i);
                    b = Math.Min(b, j);
                    c = Math.Max(c, i);
                    d = Math.Max(d, j);
                }
            }
        }
        return (c - a + 1) * (d - b + 1);
    }
}