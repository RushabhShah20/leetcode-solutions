# Problem: Maximum Sum of an Hourglass
# Link to the problem: https://leetcode.com/problems/maximum-sum-of-an-hourglass/
class Solution:
    def maxSum(self, grid: List[List[int]]) -> int:
        m: int = len(grid)
        n: int = len(grid[0])
        ans: int = 0
        for i in range(1, m - 1):
            for j in range(1, n - 1):
                x: int = (
                    grid[i - 1][j - 1]
                    + grid[i - 1][j]
                    + grid[i - 1][j + 1]
                    + grid[i][j]
                    + grid[i + 1][j - 1]
                    + grid[i + 1][j]
                    + grid[i + 1][j + 1]
                )
                ans = max(ans, x)
        return ans
