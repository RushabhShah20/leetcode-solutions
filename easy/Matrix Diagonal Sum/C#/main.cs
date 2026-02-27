// Problem: Matrix Diagonal Sum
// Link to the problem: https://leetcode.com/problems/matrix-diagonal-sum/
public class Solution
{
    public int DiagonalSum(int[][] mat)
    {
        int n = mat.Length, ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += mat[i][i];
            if (i != n - 1 - i)
            {
                ans += mat[i][n - i - 1];
            }
        }
        return ans;
    }
}