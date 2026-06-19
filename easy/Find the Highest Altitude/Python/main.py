# Problem: Find the Highest Altitude
# Link to the problem: https://leetcode.com/problems/find-the-highest-altitude/
class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        n: int = len(gain)
        ans: int = 0
        x: int = 0
        for i in range(0, n):
            x += gain[i]
            ans = max(ans, x)
        return ans
