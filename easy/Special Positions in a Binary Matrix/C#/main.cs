// Problem: Special Positions in a Binary Matrix
// Link to the problem: https://leetcode.com/problems/special-positions-in-a-binary-matrix/
public class Solution
{
    public int NumSpecial(int[][] mat)
    {
        int m = mat.Length, n = mat[0].Length, ans = 0;
        int[] rows = new int[m], cols = new int[n];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mat[i][j] == 1)
                {
                    rows[i]++;
                    cols[j]++;
                }
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (rows[i] == 1 && cols[j] == 1 && mat[i][j] == 1)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
}