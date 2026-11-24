# Problem: Maximum Subarray With Equal Products
# Link to the problem: https://leetcode.com/problems/maximum-subarray-with-equal-products/
class Solution:
    def gcd(self, a: int, b: int):
        if b == 0:
            return a
        else:
            return self.gcd(b, a % b)

    def maxLength(self, nums: List[int]) -> int:
        n: int = len(nums)
        ans: int = 2
        x: int = 1
        i: int = 0
        for j in range(0, n):
            while self.gcd(x, nums[j]) > 1:
                x //= nums[i]
                i += 1
            x *= nums[j]
            ans = max(ans, j - i + 1)
        return ans
