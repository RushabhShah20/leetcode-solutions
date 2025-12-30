// Problem: Magic Squares In Grid
// Link to the problem: https://leetcode.com/problems/magic-squares-in-grid/
public class Solution
{
    public bool IsMagicSquare(int[][] mat, int r, int c)
    {
        int[] seen = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                int v = mat[r + i][c + j];
                if (v < 1 || v > 9 || seen[v] == 1)
                {
                    return false;
                }
                seen[v] = 1;
            }
        }
        if (mat[r][c] + mat[r][c + 1] + mat[r][c + 2] != 15)
        {
            return false;
        }
        if (mat[r + 1][c] + mat[r + 1][c + 1] + mat[r + 1][c + 2] != 15)
        {
            return false;
        }
        if (mat[r + 2][c] + mat[r + 2][c + 1] + mat[r + 2][c + 2] != 15)
        {
            return false;
        }
        if (mat[r][c] + mat[r + 1][c] + mat[r + 2][c] != 15)
        {
            return false;
        }
        if (mat[r][c + 1] + mat[r + 1][c + 1] + mat[r + 2][c + 1] != 15)
        {
            return false;
        }
        if (mat[r][c + 2] + mat[r + 1][c + 2] + mat[r + 2][c + 2] != 15)
        {
            return false;
        }
        if (mat[r][c] + mat[r + 1][c + 1] + mat[r + 2][c + 2] != 15)
        {
            return false;
        }
        if (mat[r][c + 2] + mat[r + 1][c + 1] + mat[r + 2][c] != 15)
        {
            return false;
        }
        return true;
    }
    public int NumMagicSquaresInside(int[][] grid)
    {
        int m = grid.Length, n = grid[0].Length;
        int ans = 0;
        for (int i = 0; i < m - 2; i++)
        {
            for (int j = 0; j < n - 2; j++)
            {
                if (IsMagicSquare(grid, i, j))
                {
                    ans++;
                }
            }
        }
        return ans;
    }
}