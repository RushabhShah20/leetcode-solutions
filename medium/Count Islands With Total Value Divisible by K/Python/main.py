# Problem: Count Islands With Total Value Divisible by K
# Link to the problem: https://leetcode.com/problems/count-islands-with-total-value-divisible-by-k/
class Solution:
    def dfs(self, x: int, y: int, n: int, m: int, grid: List[List[int]]) -> int:
        z: int = grid[x][y]
        grid[x][y] = 0
        a: List[int] = [-1, 0, 1, 0]
        b: List[int] = [0, 1, 0, -1]
        for i in range(0, 4):
            c: int = x + a[i]
            d: int = y + b[i]
            if c >= 0 and c < n and d >= 0 and d < m and grid[c][d] > 0:
                z += self.dfs(c, d, n, m, grid)
        return z

    def countIslands(self, grid: List[List[int]], k: int) -> int:
        n: int = len(grid)
        m: int = len(grid[0])
        ans: int = 0
        for i in range(0, n):
            for j in range(0, m):
                if grid[i][j] > 0 and self.dfs(i, j, n, m, grid) % k == 0:
                    ans += 1
        return ans
