# Problem: Find Greatest Common Divisor of Array
# Link to the problem: https://leetcode.com/problems/find-greatest-common-divisor-of-array/
class Solution:
    def gcd(self, a: int, b: int) -> int:
        return a if b == 0 else self.gcd(b, a % b)

    def findGCD(self, nums: List[int]) -> int:
        n: int = len(nums)
        mx: int = 0
        mn: int = 1001
        for i in range(0, n):
            mx = max(mx, nums[i])
            mn = min(mn, nums[i])
        ans: int = self.gcd(mx, mn)
        return ans
