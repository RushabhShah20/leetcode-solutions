// Problem: Create Grid With Exactly One Path
// Link to the problem: https://leetcode.com/problems/create-grid-with-exactly-one-path/
public class Solution
{
    public string[] CreateGrid(int m, int n)
    {
        char[][] grid = new char[m][];
        for (int i = 0; i < m; i++)
        {
            grid[i] = new string('#', n).ToCharArray();
        }
        for (int i = 0; i < n; i++)
        {
            grid[0][i] = '.';
        }
        for (int i = 0; i < m; i++)
        {
            grid[i][n - 1] = '.';
        }
        string[] ans = new string[m];
        for (int i = 0; i < m; i++)
        {
            ans[i] = new string(grid[i]);
        }
        return ans;
    }
}