# Problem: Largest Triangle Area
# Link to the problem: https://leetcode.com/problems/largest-triangle-area/
class Solution:
    def largestTriangleArea(self, points: List[List[int]]) -> float:
        ans: float = 0
        n: int = len(points)
        for i in range(0, n):
            for j in range(i + 1, n):
                for k in range(j + 1, n):
                    x1: int = points[i][0]
                    x2: int = points[j][0]
                    x3: int = points[k][0]
                    y1: int = points[i][1]
                    y2: int = points[j][1]
                    y3: int = points[k][1]
                    area: float = 0.5 * abs(
                        x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)
                    )
                    ans = max(ans, area)
        return ans
