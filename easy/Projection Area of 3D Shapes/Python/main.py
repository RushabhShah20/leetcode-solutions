# Problem: Projection Area of 3D Shapes
# Link to the problem: https://leetcode.com/problems/projection-area-of-3d-shapes/
class Solution:
    def projectionArea(self, grid: List[List[int]]) -> int:
        n: int = len(grid)
        ans: int = 0
        for i in range(0, n):
            a: int = 0
            b: int = 0
            for j in range(0, n):
                a = max(a, grid[i][j])
                b = max(b, grid[j][i])
                if grid[i][j] > 0:
                    ans += 1
            ans += a + b
        return ans
