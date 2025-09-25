# Problem: Triangle
# Link to the problem: https://leetcode.com/problems/triangle/
class Solution:
    def minimumTotal(self, triangle: List[List[int]]) -> int:
        n: int = len(triangle)
        dp: List[int] = [0] * n
        for i in range(0, n):
            dp[i] = triangle[n - 1][i]
        for i in range(n - 2, -1, -1):
            for j in range(0, len(triangle[i])):
                dp[j] = triangle[i][j] + min(dp[j], dp[j + 1])
        return dp[0]
