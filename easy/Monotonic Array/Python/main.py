# Problem: Monotonic Array
# Link to the problem: https://leetcode.com/problems/monotonic-array/
class Solution:
    def isMonotonic(self, nums: List[int]) -> bool:
        n: int = len(nums)
        if nums[n - 1] >= nums[0]:
            for i in range(1, n):
                if nums[i] < nums[i - 1]:
                    return False
        else:
            for i in range(0, n - 1):
                if nums[i] < nums[i + 1]:
                    return False
        return True
