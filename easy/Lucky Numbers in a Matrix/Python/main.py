# Problem: Lucky Numbers in a Matrix
# Link to the problem: https://leetcode.com/problems/lucky-numbers-in-a-matrix/
class Solution:
    def luckyNumbers(self, matrix: List[List[int]]) -> List[int]:
        m: int = len(matrix)
        n: int = len(matrix[0])
        ans: List[int] = []
        col: int = -1
        for i in range(0, m):
            minVal: int = 100001
            maxVal: int = 0
            for j in range(0, n):
                if matrix[i][j] < minVal:
                    minVal = matrix[i][j]
                    col = j
            for k in range(0, m):
                if matrix[k][col] > maxVal:
                    maxVal = matrix[k][col]
            if minVal == maxVal:
                ans.append(minVal)
        return ans
