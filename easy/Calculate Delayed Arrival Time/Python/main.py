# Problem: Calculate Delayed Arrival Time
# Link to the problem: https://leetcode.com/problems/calculate-delayed-arrival-time/
class Solution:
    def findDelayedArrivalTime(self, arrivalTime: int, delayedTime: int) -> int:
        return (arrivalTime + delayedTime) % 24
