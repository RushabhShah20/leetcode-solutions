# Problem: Number of Closed Islands
# Link to the problem: https://leetcode.com/problems/number-of-closed-islands/
class Solution:
    def dfs(self, x: int, y: int, n: int, m: int, grid: list[list[int]]) -> bool:
        if x < 0 or x >= n or y < 0 or y >= m:
            return False
        if grid[x][y] == 1:
            return True
        grid[x][y] = 1
        a: bool = self.dfs(x - 1, y, n, m, grid)
        b: bool = self.dfs(x + 1, y, n, m, grid)
        c: bool = self.dfs(x, y - 1, n, m, grid)
        d: bool = self.dfs(x, y + 1, n, m, grid)
        ans: bool = a and b and c and d
        return ans

    def closedIsland(self, grid: list[list[int]]) -> int:
        n: int = len(grid)
        m: int = len(grid[0])
        ans: int = 0
        for i in range(0, n):
            for j in range(0, m):
                if grid[i][j] == 0:
                    if self.dfs(i, j, n, m, grid):
                        ans += 1
        return ans
