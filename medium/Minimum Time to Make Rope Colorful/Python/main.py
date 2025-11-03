# Problem: Minimum Time to Make Rope Colorful
# Link to the problem: https://leetcode.com/problems/minimum-time-to-make-rope-colorful/
class Solution:
    def minCost(self, colors: str, neededTime: List[int]) -> int:
        n: int = len(colors)
        ans: int = 0
        for i in range(1, n):
            if colors[i] == colors[i - 1]:
                ans += min(neededTime[i], neededTime[i - 1])
                neededTime[i] = max(neededTime[i], neededTime[i - 1])
        return ans
