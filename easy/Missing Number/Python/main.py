# Problem: Missing Number
# Link to the problem: https://leetcode.com/problems/missing-number/
class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        sum: int = 0
        for i in nums:
            sum += i
        return ((len(nums) * (len(nums) + 1)) // 2) - sum
