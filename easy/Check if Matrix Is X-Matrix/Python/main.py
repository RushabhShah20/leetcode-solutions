# Problem: Check if Matrix Is X-Matrix
# Link to the problem: https://leetcode.com/problems/check-if-matrix-is-x-matrix/
class Solution:
    def checkXMatrix(self, grid: List[List[int]]) -> bool:
        for i in range(0, len(grid), 1):
            for j in range(0, len(grid[0]), 1):
                if i == j or i + j == (len(grid) - 1):
                    if grid[i][j] == 0:
                        return False
                else:
                    if grid[i][j] != 0:
                        return False
        return True
