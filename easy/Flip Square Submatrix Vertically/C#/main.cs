// Problem: Flip Square Submatrix Vertically
// Link to the problem: https://leetcode.com/problems/flip-square-submatrix-vertically/
public class Solution
{
    public int[][] ReverseSubmatrix(int[][] grid, int x, int y, int k)
    {
        int[][] ans = grid;
        for (int i = x; i < x + (k + 1) / 2; i++)
        {
            for (int j = y; j < y + k; j++)
            {
                int temp = ans[i][j];
                ans[i][j] = ans[2 * x + k - i - 1][j];
                ans[2 * x + k - i - 1][j] = temp;
            }
        }
        return ans;
    }
}