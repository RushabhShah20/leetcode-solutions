# Problem: Angle Between Hands of a Clock
# Link to the problem: https://leetcode.com/problems/angle-between-hands-of-a-clock/
class Solution:
    def angleClock(self, hour: int, minutes: int) -> float:
        hour_angle: float = 0.5 * (hour * 60 + minutes)
        minute_angle: float = 6 * minutes
        angle: float = abs(hour_angle - minute_angle)
        angle = min(360 - angle, angle)
        return angle
