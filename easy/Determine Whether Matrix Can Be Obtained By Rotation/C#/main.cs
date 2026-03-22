// Problem: Determine Whether Matrix Can Be Obtained By Rotation
// Link to the problem: https://leetcode.com/problems/determine-whether-matrix-can-be-obtained-by-rotation/
public class Solution
{
    public bool MatEqual(int[][] a, int[][] b)
    {
        int n = a.Length;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] != b[i][j])
                {
                    return false;
                }
            }
        }
        return true;
    }
    public bool FindRotation(int[][] mat, int[][] target)
    {
        int n = mat.Length;
        int[][] mat90 = new int[n][];
        int[][] mat180 = new int[n][];
        int[][] mat270 = new int[n][];
        for (int i = 0; i < n; i++)
        {
            mat90[i] = new int[n];
            mat180[i] = new int[n];
            mat270[i] = new int[n];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                mat90[i][j] = mat[j][i];
            }
        }
        for (int j = 0; j < n; j++)
        {
            for (int i = 0; i < n / 2; i++)
            {
                int temp = mat90[j][i];
                mat90[j][i] = mat90[j][n - 1 - i];
                mat90[j][n - i - 1] = temp;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                mat180[i][j] = mat90[j][i];
            }
        }
        for (int j = 0; j < n; j++)
        {
            for (int i = 0; i < n / 2; i++)
            {
                int temp = mat180[j][i];
                mat180[j][i] = mat180[j][n - 1 - i];
                mat180[j][n - i - 1] = temp;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                mat270[i][j] = mat180[j][i];
            }
        }
        for (int j = 0; j < n; j++)
        {
            for (int i = 0; i < n / 2; i++)
            {
                int temp = mat270[j][i];
                mat270[j][i] = mat270[j][n - 1 - i];
                mat270[j][n - i - 1] = temp;
            }
        }
        return MatEqual(mat, target) || MatEqual(mat90, target) || MatEqual(mat180, target) || MatEqual(mat270, target);
    }
}