# Problem: Count Servers that Communicate
# Link to the problem: https://leetcode.com/problems/count-servers-that-communicate/
class Solution:
    def countServers(self, grid: list[list[int]]) -> int:
        m: int = len(grid)
        n: int = len(grid[0])
        rows: list[int] = [0] * m
        cols: list[int] = [0] * n
        for i in range(0, m):
            for j in range(0, n):
                if grid[i][j] == 1:
                    rows[i] += 1
                    cols[j] += 1
        ans: int = 0
        for i in range(0, m):
            for j in range(0, n):
                if grid[i][j] == 1:
                    if rows[i] > 1 or cols[j] > 1:
                        ans += 1
        return ans
