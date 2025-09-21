# Problem: Bitwise OR of Even Numbers in an Array
# Link to the problem: https://leetcode.com/problems/bitwise-or-of-even-numbers-in-an-array/
class Solution:
    def evenNumberBitwiseORs(self, nums: List[int]) -> int:
        ans: int = 0
        for i in range(0, len(nums)):
            if nums[i] % 2 == 0:
                ans |= nums[i]
        return ans
