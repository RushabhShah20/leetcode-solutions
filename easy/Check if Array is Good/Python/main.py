# Problem: Check if Array is Good
# Link to the problem: https://leetcode.com/problems/check-if-array-is-good/
class Solution:
    def isGood(self, nums: List[int]) -> bool:
        if len(nums) == 1:
            return False
        n: int = len(nums)
        nums.sort()
        for i in range(0, n - 1):
            if nums[i] != i + 1:
                return False
        if nums[n - 1] != n - 1:
            return False
        return True
