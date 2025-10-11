# Problem: Count Total Number of Colored Cells
# Link to the problem: https://leetcode.com/problems/count-total-number-of-colored-cells/
class Solution:
    def coloredCells(self, n: int) -> int:
        ans: int = 0
        for i in range(1, (2 * n) - 1, 2):
            ans += 2 * i
        ans += (2 * n) - 1
        return ans
