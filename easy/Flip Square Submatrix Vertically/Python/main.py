# Problem: Flip Square Submatrix Vertically
# Link to the problem: https://leetcode.com/problems/flip-square-submatrix-vertically/
class Solution:
    def reverseSubmatrix(
        self, grid: List[List[int]], x: int, y: int, k: int
    ) -> List[List[int]]:
        ans: List[List[int]] = grid
        for i in range(x, x + (k + 1) // 2):
            for j in range(y, y + k):
                temp: int = ans[i][j]
                ans[i][j] = ans[2 * x + k - i - 1][j]
                ans[2 * x + k - i - 1][j] = temp
        return ans
