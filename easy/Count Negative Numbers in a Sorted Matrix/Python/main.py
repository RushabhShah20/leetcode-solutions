# Problem: Count Negative Numbers in a Sorted Matrix
# Link to the problem: https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/
class Solution:
    def countNegatives(self, grid: List[List[int]]) -> int:
        m: int = len(grid)
        n: int = len(grid[0])
        ans: int = 0
        i: int = m - 1
        j: int = 0
        while i >= 0 and j < n:
            if grid[i][j] < 0:
                ans += n - j
                i -= 1
            else:
                j += 1
        return ans
