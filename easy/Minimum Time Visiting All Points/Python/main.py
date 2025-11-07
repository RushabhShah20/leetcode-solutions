# Problem: Minimum Time Visiting All Points
# Link to the problem: https://leetcode.com/problems/minimum-time-visiting-all-points/
class Solution:
    def minTimeToVisitAllPoints(self, points: List[List[int]]) -> int:
        n: int = len(points)
        ans: int = 0
        for i in range(1, n):
            ans += max(
                abs(points[i - 1][1] - points[i][1]),
                abs(points[i - 1][0] - points[i][0]),
            )
        return ans
