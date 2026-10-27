# Problem: Create Grid With Exactly One Path
# Link to the problem: https://leetcode.com/problems/create-grid-with-exactly-one-path/
class Solution:
    def createGrid(self, m: int, n: int) -> list[str]:
        ans: list[list[str]] = [["#"] * n for _ in range(m)]
        for i in range(n):
            ans[0][i] = "."
        for i in range(m):
            ans[i][n - 1] = "."
        return ["".join(row) for row in ans]
