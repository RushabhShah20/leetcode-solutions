# Problem: Rotate Image
# Link to the problem: https://leetcode.com/problems/rotate-image/
class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        n: int = len(matrix)
        for i in range(0, n):
            for j in range(i + 1, n):
                temp: int = matrix[i][j]
                matrix[i][j] = matrix[j][i]
                matrix[j][i] = temp
        for i in range(0, n):
            for j in range(0, n // 2):
                temp: int = matrix[i][j]
                matrix[i][j] = matrix[i][n - 1 - j]
                matrix[i][n - 1 - j] = temp
