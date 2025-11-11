// Problem: Ones and Zeroes
// Link to the problem: https://leetcode.com/problems/ones-and-zeroes/
int findMaxForm(char **strs, int strsSize, int m, int n)
{
    int dp[m + 1][n + 1];
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            dp[i][j] = 0;
        }
    }
    for (int x = 0; x < strsSize; x++)
    {
        int zeroes = 0, ones = 0;
        for (int y = 0; y < strlen(strs[x]); y++)
        {
            if (strs[x][y] == '0')
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
                dp[i][j] = fmax(dp[i][j], 1 + dp[i - zeroes][j - ones]);
            }
        }
    }
    return dp[m][n];
}