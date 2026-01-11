// Problem: Search a 2D Matrix
// Link to the problem: https://leetcode.com/problems/search-a-2d-matrix/
public class Solution
{
    public bool SearchMatrix(int[][] matrix, int target)
    {
        int m = matrix.Length, n = matrix[0].Length, i = 0, j = m * n - 1;
        while (i <= j)
        {
            int k = (i + j) / 2;
            int val = matrix[k / n][k % n];
            if (val == target)
            {
                return true;
            }
            else if (val < target)
            {
                i = k + 1;
            }
            else
            {
                j = k - 1;
            }
        }
        return false;
    }
}