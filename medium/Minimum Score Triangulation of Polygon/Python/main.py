# Problem: Minimum Score Triangulation of Polygon
# Link to the problem: https://leetcode.com/problems/minimum-score-triangulation-of-polygon/
class Solution:
    def minScoreTriangulation(self, values: List[int]) -> int:
        n: int = len(values)
        if n == 3:
            return values[0] * values[1] * values[2]
        dp: List[List[int]] = [[0 for _ in range(n)] for _ in range(n - 1)]
        for x in range(2, n):
            for i in range(0, n - x):
                j: int = i + x
                w: int = sys.maxsize
                e: int = values[i] * values[j]
                for k in range(i + 1, j):
                    w = min(w, e * values[k] + dp[i][k] + dp[k][j])
                dp[i][j] = w
        return dp[0][n - 1]
