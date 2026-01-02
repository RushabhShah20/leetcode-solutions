# Problem: N-Repeated Element in Size 2N Array
# Link to the problem: https://leetcode.com/problems/n-repeated-element-in-size-2n-array/
class Solution:
    def repeatedNTimes(self, nums: List[int]) -> int:
        n: int = len(nums)
        for i in range(0, n - 2):
            if nums[i] == nums[i + 1] or nums[i] == nums[i + 2]:
                return nums[i]
        return nums[n - 1]
