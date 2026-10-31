# Problem: Twisted Mirror Path Count
# Link to the problem: https://leetcode.com/problems/twisted-mirror-path-count/
class Solution:
    def uniquePaths(self, grid: List[List[int]]) -> int:
        k: int = 1000000007
        n: int = len(grid)
        m: int = len(grid[0])
        a: List[List[int]] = [[0, 0] for _ in range(m)]
        a[0][0] = 1
        for i in range(0, n):
            for j in range(0, m):
                if i > 0:
                    if grid[i - 1][j] == 0:
                        a[j][0] = (a[j][0] + a[j][1]) % k
                    else:
                        a[j][0] = a[j][1]
                if j > 0:
                    if grid[i][j - 1] == 0:
                        a[j][1] = (a[j - 1][0] + a[j - 1][1]) % k
                    else:
                        a[j][1] = a[j - 1][0]
        ans: int = (a[m - 1][0] + a[m - 1][1]) % k
        return ans
