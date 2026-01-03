# Problem: Number of Ways to Paint N × 3 Grid
# Link to the problem: https://leetcode.com/problems/number-of-ways-to-paint-n-3-grid/
class Solution:
    def numOfWays(self, n: int) -> int:
        mod: int = 1000000007
        a: int = 6
        b: int = 6
        for i in range(1, n):
            x: int = ((3 * a) + (2 * b)) % mod
            y: int = ((2 * a) + (2 * b)) % mod
            a = x
            b = y
        ans: int = (a + b) % mod
        return ans
