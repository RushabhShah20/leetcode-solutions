# Problem: Queries on Number of Points Inside a Circle
# Link to the problem: https://leetcode.com/problems/queries-on-number-of-points-inside-a-circle/
class Solution:
    def countPoints(
        self, points: List[List[int]], queries: List[List[int]]
    ) -> List[int]:
        ans: List[int] = [0] * len(queries)
        for i in range(0, len(queries), 1):
            for j in range(0, len(points), 1):
                if (queries[i][2] * queries[i][2]) >= (
                    (queries[i][0] - points[j][0]) * (queries[i][0] - points[j][0])
                    + (queries[i][1] - points[j][1]) * (queries[i][1] - points[j][1])
                ):
                    ans[i] += 1
        return ans
