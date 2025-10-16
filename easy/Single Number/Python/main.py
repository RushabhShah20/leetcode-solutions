# Problem: Single Number
# Link to the problem: https://leetcode.com/problems/single-number/
class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        ans: int = 0
        for i in range(0, len(nums)):
            ans ^= nums[i]
        return ans
