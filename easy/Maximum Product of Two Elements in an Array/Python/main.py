# Problem: Maximum Product of Two Elements in an Array
# Link to the problem: https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        n: int = len(nums)
        x: int = 0
        y: int = 0
        for i in range(0, n):
            if nums[i] > x:
                y = x
                x = nums[i]
            elif nums[i] > y:
                y = nums[i]
        ans: int = (x - 1) * (y - 1)
        return ans
