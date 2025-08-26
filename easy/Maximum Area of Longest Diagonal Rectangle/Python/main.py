# Problem: Maximum Area of Longest Diagonal Rectangle
# Link to the problem: https://leetcode.com/problems/maximum-area-of-longest-diagonal-rectangle/
class Solution:
    def areaOfMaxDiagonal(self, dimensions: List[List[int]]) -> int:
        maxDiagonal: float = -1.0
        maxArea: int = -1
        for i in range(0, len(dimensions)):
            l: int = dimensions[i][0]
            b: int = dimensions[i][1]
            diagonal: float = (1.0 * l * l + 1.0 * b * b) ** 0.5
            area: int = l * b
            if diagonal > maxDiagonal:
                maxDiagonal = diagonal
                maxArea = area
            elif diagonal == maxDiagonal:
                maxArea = max(area, maxArea)
        return maxArea
