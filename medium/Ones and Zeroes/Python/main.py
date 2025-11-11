# Problem: Ones and Zeroes
# Link to the problem: https://leetcode.com/problems/ones-and-zeroes/
class Solution:
    def findMaxForm(self, strs: List[str], m: int, n: int) -> int:
        dp: List[List[int]] = [[0 for _ in range(n + 1)] for _ in range(m + 1)]
        for str in strs:
            zeroes: int = 0
            ones: int = 0
            for ch in str:
                if ch == "0":
                    zeroes += 1
                else:
                    ones += 1
            for i in range(m, zeroes - 1, -1):
                for j in range(n, ones - 1, -1):
                    dp[i][j] = max(dp[i][j], 1 + dp[i - zeroes][j - ones])
        return dp[m][n]
