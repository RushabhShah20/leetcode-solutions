// Problem: Minimum Changes to Make K Semi-palindromes
// Link to the problem: https://leetcode.com/problems/minimum-changes-to-make-k-semi-palindromes/
public class Solution
{
    public int MinimumChanges(string s, int k)
    {
        int n = s.Length;
        int[][] a = new int[n][];
        for (int i = 0; i < n; i++)
        {
            a[i] = new int[n];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int m = j - i + 1;
                int x = m;
                for (int p = 1; p < m; p++)
                {
                    if (m % p != 0)
                    {
                        continue;
                    }
                    int y = 0;
                    for (int q = 0; q < p; q++)
                    {
                        int l = i + q;
                        int r = j - p + q + 1;
                        while (l < r)
                        {
                            if (s[l] != s[r])
                            {
                                y++;
                            }
                            l += p;
                            r -= p;
                        }
                    }
                    x = Math.Min(x, y);
                }
                a[i][j] = x;
            }
        }
        int[][] dp = new int[n][];
        for (int i = 0; i < n; i++)
        {
            dp[i] = new int[k + 1];
            Array.Fill(dp[i], n);
        }
        for (int i = 1; i < n; i++)
        {
            dp[i][1] = a[0][i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int p = 2; p <= k; p++)
            {
                for (int j = (p - 1) << 1; j < i; j++)
                {
                    dp[i][p] = Math.Min(dp[i][p], dp[j - 1][p - 1] + a[j][i]);
                }
            }
        }
        int ans = dp[n - 1][k];
        return ans;
    }
}