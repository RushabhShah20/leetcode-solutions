# Problem: Maximum Total Subarray Value I
# Link to the problem: https://leetcode.com/problems/maximum-total-subarray-value-i/
class Solution:
    def maxTotalValue(self, nums: List[int], k: int) -> int:
        ans: int = 0
        maxELement: int = nums[0]
        minElement: int = nums[0]
        for i in range(1, len(nums)):
            if maxELement < nums[i]:
                maxELement = nums[i]
            if minElement > nums[i]:
                minElement = nums[i]
        ans = (maxELement - minElement) * (k)
        return ans
