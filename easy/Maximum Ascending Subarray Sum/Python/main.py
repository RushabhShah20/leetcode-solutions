# Problem: Maximum Ascending Subarray Sum
# Link to the problem: https://leetcode.com/problems/maximum-ascending-subarray-sum/
class Solution:
    def maxAscendingSum(self, nums: List[int]) -> int:
        ans: int = 0
        sum: int = nums[0]
        for i in range(1, len(nums)):
            if nums[i] > nums[i - 1]:
                sum += nums[i]
            else:
                ans = max(ans, sum)
                sum = nums[i]
        ans = max(ans, sum)
        return ans
