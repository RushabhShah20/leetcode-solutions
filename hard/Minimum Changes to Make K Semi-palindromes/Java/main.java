// Problem: Minimum Changes to Make K Semi-palindromes
// Link to the problem: https://leetcode.com/problems/minimum-changes-to-make-k-semi-palindromes/
class Solution {
    public int minimumChanges(String s, int k) {
        final int n = s.length();
        int[][] a = new int[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                final int m = j - i + 1;
                int x = m;
                for (int p = 1; p < m; p++) {
                    if (m % p != 0) {
                        continue;
                    }
                    int y = 0;
                    for (int q = 0; q < p; q++) {
                        int l = i + q;
                        int r = j - p + q + 1;
                        while (l < r) {
                            if (s.charAt(l) != s.charAt(r)) {
                                y++;
                            }
                            l += p;
                            r -= p;
                        }
                    }
                    x = Math.min(x, y);
                }
                a[i][j] = x;
            }
        }
        int[][] dp = new int[n][k + 1];
        for (int i = 0; i < n; i++) {
            Arrays.fill(dp[i], n);
        }
        for (int i = 1; i < n; i++) {
            dp[i][1] = a[0][i];
        }
        for (int i = 0; i < n; i++) {
            for (int p = 2; p <= k; p++) {
                for (int j = (p - 1) << 1; j < i; j++) {
                    dp[i][p] = Math.min(dp[i][p], dp[j - 1][p - 1] + a[j][i]);
                }
            }
        }
        final int ans = dp[n - 1][k];
        return ans;
    }
}