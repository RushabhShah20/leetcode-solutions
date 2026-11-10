# Problem: Climbing Stairs II
# Link to the problem: https://leetcode.com/problems/climbing-stairs-ii/
class Solution:
    def climbStairs(self, n: int, costs: List[int]) -> int:
        a: int = 0
        b: int = 0
        c: int = 0
        for i in range(0, n):
            d: int = min(a + 9, min(b + 4, c + 1)) + costs[i]
            a = b
            b = c
            c = d
        ans: int = c
        return ans
