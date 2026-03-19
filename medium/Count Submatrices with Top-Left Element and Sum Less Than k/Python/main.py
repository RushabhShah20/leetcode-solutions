# Problem: Count Submatrices with Top-Left Element and Sum Less Than k
# Link to the problem: https://leetcode.com/problems/count-submatrices-with-top-left-element-and-sum-less-than-k/
class Solution:
    def countSubmatrices(self, grid: List[List[int]], k: int) -> int:
        m: int = len(grid)
        n: int = len(grid[0])
        prefix: List[List[int]] = [[0] * (n + 1) for _ in range(m + 1)]
        for i in range(1, m + 1):
            for j in range(1, n + 1):
                prefix[i][j] = (
                    prefix[i - 1][j]
                    + prefix[i][j - 1]
                    - prefix[i - 1][j - 1]
                    + grid[i - 1][j - 1]
                )
        ans: int = 0
        for i in range(1, m + 1):
            for j in range(1, n + 1):
                if prefix[i][j] <= k:
                    ans += 1
        return ans
