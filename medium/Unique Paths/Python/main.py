# Problem: Unique Paths
# Link to the problem: https://leetcode.com/problems/unique-paths/
class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        ans: int = 1
        down_moves: int = m - 1
        right_moves: int = n - 1
        x: int = max(down_moves, right_moves)
        y: int = min(down_moves, right_moves)
        for i in range(1, y + 1, 1):
            ans *= x + i
            ans //= i
        return ans
