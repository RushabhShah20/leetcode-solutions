// Problem: Lucky Numbers in a Matrix
// Link to the problem: https://leetcode.com/problems/lucky-numbers-in-a-matrix/
public class Solution
{
    public IList<int> LuckyNumbers(int[][] matrix)
    {
        int m = matrix.Length, n = matrix[0].Length;
        IList<int> ans = new List<int>();
        int col = -1;
        for (int i = 0; i < m; i++)
        {
            int minVal = 100001;
            int maxVal = 0;
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] < minVal)
                {
                    minVal = matrix[i][j];
                    col = j;
                }
            }
            for (int k = 0; k < m; k++)
            {
                if (matrix[k][col] > maxVal)
                {
                    maxVal = matrix[k][col];
                }
            }
            if (minVal == maxVal)
            {
                ans.Add(minVal);
            }
        }
        return ans;
    }
}