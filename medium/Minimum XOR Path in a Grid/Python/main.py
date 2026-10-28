# Problem: Minimum XOR Path in a Grid
# Link to the problem: https://leetcode.com/problems/minimum-xor-path-in-a-grid/
class Solution:
    def minCost(self, grid: list[list[int]]) -> int:
        m: int = len(grid)
        n: int = len(grid[0])
        dp: list[list[list[int]]] = [[[0] * 1024 for _ in range(n)] for _ in range(m)]
        dp[0][0][grid[0][0]] = 1
        for i in range(1, m):
            for k in range(1024):
                if dp[i - 1][0][k] == 1:
                    dp[i][0][k ^ grid[i][0]] = 1
        for j in range(1, n):
            for k in range(1024):
                if dp[0][j - 1][k] == 1:
                    dp[0][j][k ^ grid[0][j]] = 1
        for i in range(1, m):
            for j in range(1, n):
                for k in range(1024):
                    if dp[i - 1][j][k] == 1 or dp[i][j - 1][k] == 1:
                        dp[i][j][k ^ grid[i][j]] = 1
        for k in range(1024):
            if dp[m - 1][n - 1][k] == 1:
                return k
        return 0
