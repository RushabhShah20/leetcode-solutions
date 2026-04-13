# Problem: Minimum Distance to the Target Element
# Link to the problem: https://leetcode.com/problems/minimum-distance-to-the-target-element/
class Solution:
    def getMinDistance(self, nums: List[int], target: int, start: int) -> int:
        n: int = len(nums)
        ans: int = 1000000000
        for i in range(0, n):
            if nums[i] == target:
                ans = min(abs(i - start), ans)
        return ans
