# Problem: Add Minimum Number of Rungs
# Link to the problem: https://leetcode.com/problems/add-minimum-number-of-rungs/
class Solution:
    def addRungs(self, rungs: List[int], dist: int) -> int:
        ans: int = 0
        prev: int = 0
        for rung in rungs:
            if (rung - prev) > dist:
                if (rung - prev) % dist == 0:
                    ans += ((rung - prev) // dist) - 1
                else:
                    ans += (rung - prev) // dist
            prev = rung
        return ans
