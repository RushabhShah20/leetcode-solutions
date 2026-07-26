# Problem: Maximum Product of Three Numbers
# Link to the problem: https://leetcode.com/problems/maximum-product-of-three-numbers/
class Solution:
    def maximumProduct(self, nums: List[int]) -> int:
        n: int = len(nums)
        a: int = -1001
        b: int = -1001
        c: int = -1001
        x: int = 1001
        y: int = 1001
        for i in range(0, n):
            if nums[i] < x:
                y = x
                x = nums[i]
            elif nums[i] < y:
                y = nums[i]
            if nums[i] > a:
                c = b
                b = a
                a = nums[i]
            elif nums[i] > b:
                c = b
                b = nums[i]
            elif nums[i] > c:
                c = nums[i]
        ans: int = max(a * b * c, a * x * y)
        return ans
