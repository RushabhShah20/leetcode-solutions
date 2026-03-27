# Problem: Matrix Similarity After Cyclic Shifts
# Link to the problem: https://leetcode.com/problems/matrix-similarity-after-cyclic-shifts/
class Solution:
    def areSimilar(self, mat: List[List[int]], k: int) -> bool:
        m: int = len(mat)
        n: int = len(mat[0])
        for i in range(0, m):
            for j in range(0, n):
                if mat[i][j] != mat[i][(j + k) % n]:
                    return False
        return True
