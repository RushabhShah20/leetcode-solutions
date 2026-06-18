# Problem: Angle Between Hands of a Clock
# Link to the problem: https://leetcode.com/problems/angle-between-hands-of-a-clock/
class Solution:
    def angleClock(self, hour: int, minutes: int) -> float:
        x: float = 0.5 * (hour * 60 + minutes)
        y: float = 6 * minutes
        z: float = abs(x - y)
        ans: float = min(360 - z, z)
        return ans
