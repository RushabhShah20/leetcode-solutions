// Problem: Matrix Similarity After Cyclic Shifts
// Link to the problem: https://leetcode.com/problems/matrix-similarity-after-cyclic-shifts/
public class Solution
{
    public bool AreSimilar(int[][] mat, int k)
    {
        int m = mat.Length, n = mat[0].Length;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mat[i][j] != mat[i][(j + k) % n])
                {
                    return false;
                }
            }
        }
        return true;
    }
}