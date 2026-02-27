# Problem: Matrix Diagonal Sum
# Link to the problem: https://leetcode.com/problems/matrix-diagonal-sum/
class Solution:
    def diagonalSum(self, mat: List[List[int]]) -> int:
        n: int = len(mat)
        ans: int = 0
        for i in range(0, n):
            ans += mat[i][i]
            if i != n - 1 - i:
                ans += mat[i][n - i - 1]
        return ans
