# Problem: Find the Minimum Area to Cover All Ones I
# Link to the problem: https://leetcode.com/problems/find-the-minimum-area-to-cover-all-ones-i/
class Solution:
    def minimumArea(self, grid: List[List[int]]) -> int:
        m: int = len(grid)
        n: int = len(grid[0])
        a: int = sys.maxsize
        b: int = sys.maxsize
        c: int = -sys.maxsize - 1
        d: int = -sys.maxsize - 1
        for i in range(0, m):
            for j in range(0, n):
                if grid[i][j] == 1:
                    a = min(a, i)
                    b = min(b, j)
                    c = max(c, i)
                    d = max(d, j)
        return (c - a + 1) * (d - b + 1)
