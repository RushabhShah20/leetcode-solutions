# Problem: Maximum Product of Three Elements After One Replacement
# Link to the problem: https://leetcode.com/problems/maximum-product-of-three-elements-after-one-replacement/
class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        n: int = len(nums)
        ans: int = 1
        nums.sort()
        a: int = nums[0]
        b: int = nums[1]
        c: int = nums[n - 2]
        d: int = nums[n - 1]
        x: int = 100000
        arr: List[int] = [
            a * b * x,
            a * b * -x,
            a * c * x,
            a * c * -x,
            a * d * x,
            a * d * -x,
            b * c * x,
            b * c * -x,
            b * d * x,
            b * d * -x,
            c * d * x,
            c * d * -x,
        ]
        ans = max(arr)
        return ans
