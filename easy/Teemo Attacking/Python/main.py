# Problem: Teemo Attacking
# Link to the problem: https://leetcode.com/problems/teemo-attacking/
class Solution:
    def findPoisonedDuration(self, timeSeries: List[int], duration: int) -> int:
        ans: int = 0
        n: int = len(timeSeries)
        for i in range(1, n):
            ans += min(duration, timeSeries[i] - timeSeries[i - 1])
        ans += duration
        return ans
