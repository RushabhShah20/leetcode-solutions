# Problem: Adjacent Increasing Subarrays Detection I
# Link to the problem: https://leetcode.com/problems/adjacent-increasing-subarrays-detection-i/
class Solution:
    def isStrictlyIncreasing(self, nums: List[int], start: int, k: int) -> bool:
        for i in range(start, start + k - 1):
            if nums[i] >= nums[i + 1]:
                return False
        return True

    def hasIncreasingSubarrays(self, nums: List[int], k: int) -> bool:
        n: int = len(nums)
        if n < 2 * k:
            return False
        for i in range(0, n - (2 * k) + 1):
            if self.isStrictlyIncreasing(nums, i, k) and self.isStrictlyIncreasing(
                nums, i + k, k
            ):
                return True
        return False
