// Problem: Ones and Zeroes
// Link to the problem: https://leetcode.com/problems/ones-and-zeroes/
public class Solution
{
    public int FindMaxForm(string[] strs, int m, int n)
    {
        int[,] dp = new int[m + 1, n + 1];
        foreach (string str in strs)
        {
            int zeroes = 0, ones = 0;
            foreach (char ch in str)
            {
                if (ch == '0')
                {
                    zeroes++;
                }
                else
                {
                    ones++;
                }
            }
            for (int i = m; i >= zeroes; i--)
            {
                for (int j = n; j >= ones; j--)
                {
                    dp[i, j] = Math.Max(dp[i, j], 1 + dp[i - zeroes, j - ones]);
                }
            }
        }
        return dp[m, n];
    }
}