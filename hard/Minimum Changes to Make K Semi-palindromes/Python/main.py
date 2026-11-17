# Problem: Minimum Changes to Make K Semi-palindromes
# Link to the problem: https://leetcode.com/problems/minimum-changes-to-make-k-semi-palindromes/
class Solution:
    def minimumChanges(self, s: str, k: int) -> int:
        n: int = len(s)
        a: list[list[int]] = [[0] * n for _ in range(n)]
        for i in range(n):
            for j in range(i + 1, n):
                m: int = j - i + 1
                x: int = m
                for p in range(1, m):
                    if m % p != 0:
                        continue
                    y: int = 0
                    for q in range(p):
                        l: int = i + q
                        r: int = j - p + q + 1
                        while l < r:
                            if s[l] != s[r]:
                                y += 1
                            l += p
                            r -= p
                    x = min(x, y)
                a[i][j] = x
        dp: list[list[int]] = [[n] * (k + 1) for _ in range(n)]
        for i in range(1, n):
            dp[i][1] = a[0][i]
        for i in range(n):
            for p in range(2, k + 1):
                for j in range((p - 1) << 1, i):
                    dp[i][p] = min(dp[i][p], dp[j - 1][p - 1] + a[j][i])
        ans: int = dp[n - 1][k]
        return ans
