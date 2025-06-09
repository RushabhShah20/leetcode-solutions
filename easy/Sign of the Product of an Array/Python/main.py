# Problem: Sign of the Product of an Array
# Link to the problem: https://leetcode.com/problems/sign-of-the-product-of-an-array/
class Solution:
    def arraySign(self, nums: List[int]) -> int:
        sign: int = 1
        for i in range(0, len(nums)):
            if nums[i] == 0:
                return 0
            elif nums[i] < 0:
                sign *= -1
        return sign
