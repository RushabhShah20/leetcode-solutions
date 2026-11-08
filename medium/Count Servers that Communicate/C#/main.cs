// Problem: Count Servers that Communicate
// Link to the problem: https://leetcode.com/problems/count-servers-that-communicate/
public class Solution
{
    public int CountServers(int[][] grid)
    {
        int m = grid.Length, n = grid[0].Length;
        int[] rows = new int[m], cols = new int[n];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 1)
                {
                    rows[i]++;
                    cols[j]++;
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 1)
                {
                    if (rows[i] > 1 || cols[j] > 1)
                    {
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
}