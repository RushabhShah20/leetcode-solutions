// Problem: Minimum Changes to Make K Semi-palindromes
// Link to the problem: https://leetcode.com/problems/minimum-changes-to-make-k-semi-palindromes/
class Solution
{
public:
    int minimumChanges(string s, int k)
    {
        const int n = s.size();
        vector<vector<int>> a(n, vector<int>(n));
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
                    x = min(x, y);
                }
                a[i][j] = x;
            }
        }
        vector<vector<int>> dp(n, vector<int>(k + 1, n));
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
                    dp[i][p] = min(dp[i][p], dp[j - 1][p - 1] + a[j][i]);
                }
            }
        }
        const int ans = dp[n - 1][k];
        return ans;
    }
};
