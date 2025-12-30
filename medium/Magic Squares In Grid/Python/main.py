# Problem: Magic Squares In Grid
# Link to the problem: https://leetcode.com/problems/magic-squares-in-grid/
class Solution:
    def isMagicSquare(self, mat: List[List[int]], r: int, c: int):
        seen: List[int] = [0] * 10
        for i in range(0, 3):
            for j in range(0, 3):
                v: int = mat[r + i][c + j]
                if v < 1 or v > 9 or seen[v] == 1:
                    return False
                seen[v] = 1
        if mat[r][c] + mat[r][c + 1] + mat[r][c + 2] != 15:
            return False
        if mat[r + 1][c] + mat[r + 1][c + 1] + mat[r + 1][c + 2] != 15:
            return False
        if mat[r + 2][c] + mat[r + 2][c + 1] + mat[r + 2][c + 2] != 15:
            return False
        if mat[r][c] + mat[r + 1][c] + mat[r + 2][c] != 15:
            return False
        if mat[r][c + 1] + mat[r + 1][c + 1] + mat[r + 2][c + 1] != 15:
            return False
        if mat[r][c + 2] + mat[r + 1][c + 2] + mat[r + 2][c + 2] != 15:
            return False
        if mat[r][c] + mat[r + 1][c + 1] + mat[r + 2][c + 2] != 15:
            return False
        if mat[r][c + 2] + mat[r + 1][c + 1] + mat[r + 2][c] != 15:
            return False
        return True

    def numMagicSquaresInside(self, grid: List[List[int]]) -> int:
        m: int = len(grid)
        n: int = len(grid[0])
        ans: int = 0
        for i in range(0, m - 2):
            for j in range(0, n - 2):
                if self.isMagicSquare(grid, i, j):
                    ans += 1
        return ans
