// Problem: Minimum Changes to Make K Semi-palindromes
// Link to the problem: https://leetcode.com/problems/minimum-changes-to-make-k-semi-palindromes/
int minimumChanges(char *s, int k)
{
    const int n = (int)strlen(s);
    int **a = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
    {
        a[i] = (int *)calloc(n, sizeof(int));
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            const int m = j - i + 1;
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
                x = (x < y) ? x : y;
            }
            a[i][j] = x;
        }
    }
    int **dp = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
    {
        dp[i] = (int *)malloc((k + 1) * sizeof(int));
        for (int t = 0; t <= k; t++)
        {
            dp[i][t] = n;
        }
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
                const int x = dp[j - 1][p - 1] + a[j][i];
                if (x < dp[i][p])
                {
                    dp[i][p] = x;
                }
            }
        }
    }
    int ans = dp[n - 1][k];
    for (int i = 0; i < n; i++)
    {
        free(a[i]);
        free(dp[i]);
    }
    free(a);
    free(dp);
    return ans;
}