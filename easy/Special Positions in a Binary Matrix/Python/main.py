# Problem: Special Positions in a Binary Matrix
# Link to the problem: https://leetcode.com/problems/special-positions-in-a-binary-matrix/
class Solution:
    def numSpecial(self, mat: List[List[int]]) -> int:
        m: int = len(mat)
        n: int = len(mat[0])
        ans: int = 0
        rows = [0] * m
        cols = [0] * n
        for i in range(0, m):
            for j in range(0, n):
                if mat[i][j] == 1:
                    rows[i] += 1
                    cols[j] += 1
        for i in range(0, m):
            for j in range(0, n):
                if rows[i] == 1 and cols[j] == 1 and mat[i][j] == 1:
                    ans += 1
        return ans
