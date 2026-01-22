# Problem: Maximum Product of Two Elements in an Array
# Link to the problem: https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        x: int = 0
        y: int = 0
        for num in nums:
            if num > x:
                y = x
                x = num
            elif num > y:
                y = num
        ans: int = (x - 1) * (y - 1)
        return ans
